// helpers_dispatch (game_misc) -- cube. 53 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dispatch.h"

/* vdispatch_404040 @ 00404040  kind=gamemisc  attributed-by=role:dispatch  size=24 */

void FUN_00404040(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  if ((int *)*in_ECX != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*(int *)*in_ECX + 8))();
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


/* vdispatch_447d10 @ 00447d10  kind=gamemisc  attributed-by=role:dispatch  size=50 */

void FUN_00447d10(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x15c))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x20));
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x170))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 4));
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1ac))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 8));
  return;
}


/* vdispatch_447dd0 @ 00447dd0  kind=gamemisc  attributed-by=role:dispatch  size=50 */

void FUN_00447dd0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x15c))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x20));
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x170))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 4));
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1ac))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x14));
  return;
}


/* vdispatch_447fb0 @ 00447fb0  kind=gamemisc  attributed-by=role:dispatch  size=88 */

void FUN_00447fb0(undefined4 param_1)

{
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1b4))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x5c),&local_18,1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* vdispatch_448280 @ 00448280  kind=gamemisc  attributed-by=role:dispatch  size=27 */

void FUN_00448280(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x178))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x30),param_1,1);
  return;
}


/* vdispatch_448fe0 @ 00448fe0  kind=gamemisc  attributed-by=role:dispatch  size=88 */

void FUN_00448fe0(undefined4 param_1)

{
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1b4))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x58),&local_18,1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* vdispatch_450d90 @ 00450d90  kind=gamemisc  attributed-by=role:dispatch  size=33 */

void FUN_00450d90(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)in_ECX[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != in_ECX);
    in_ECX[4] = 0;
  }
  return;
}


/* vdispatch_4ce6c0 @ 004ce6c0  kind=gamemisc  attributed-by=role:dispatch  size=21 */

void FUN_004ce6c0(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = *(int **)(*(int *)(*(int *)*in_ECX + 4) + 0x38 + *in_ECX);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ce6d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


/* thunk_FUN_004d77d0 @ 004d6d30  kind=gamemisc  attributed-by=role:dispatch  size=5 */

void thunk_FUN_004d77d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  
  if (in_ECX[1] != 0) {
    (*(code *)PTR_free_007663b0)(in_ECX[1]);
    in_ECX[1] = 0;
  }
  if ((uint *)*in_ECX != (uint *)0x0) {
    puVar3 = (undefined4 *)(*(uint *)*in_ECX & 0xffffffe0);
    iVar2 = puVar3[3];
    while (iVar2 != 0) {
      puVar1 = (undefined4 *)(iVar2 + 4);
      iVar2 = *(int *)(iVar2 + 0xc);
      (*(code *)PTR_free_007663b0)(*puVar1);
    }
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    *in_ECX = 0;
  }
  return;
}


/* vdispatch_4d7240 @ 004d7240  kind=gamemisc  attributed-by=role:dispatch  size=93 */

undefined4 FUN_004d7240(int *param_1,uint *param_2,int param_3,uint param_4,char param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  
  if (param_5 == '\0') {
    uVar2 = 1;
    if (param_4 != 0) {
      uVar2 = param_4;
    }
    iVar3 = (*(code *)PTR_FUN_007663ac)(uVar2);
    *param_1 = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    *param_1 = param_3;
  }
  param_4 = param_4 >> 1;
  *param_2 = param_4;
  puVar4 = (ushort *)*param_1;
  if (param_4 != 0) {
    param_3 = param_3 - (int)puVar4;
    do {
      uVar1 = *(ushort *)(param_3 + (int)puVar4);
      *puVar4 = uVar1 << 8 | uVar1 >> 8;
      puVar4 = puVar4 + 1;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return 1;
}


/* vdispatch_51dde0 @ 0051dde0  kind=gamemisc  attributed-by=role:dispatch  size=61 */

int FUN_0051dde0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005224a0(0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(iVar1 + 0x3c))(iVar1,param_1 * 1000);
  return iVar1 / 1000;
}


/* vdispatch_522bc0 @ 00522bc0  kind=gamemisc  attributed-by=role:dispatch  size=48 */

int FUN_00522bc0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + 999) / 1000;
  (*(code *)PTR_Sleep_00767300)(iVar1);
  return iVar1 * 1000;
}


/* vdispatch_652710 @ 00652710  kind=gamemisc  attributed-by=role:dispatch  size=32 */

void FUN_00652710(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xcc);
  if ((piVar1 != (int *)0x0) && ((char)piVar1[0x57] != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00652729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x68))();
    return;
  }
  return;
}


/* vdispatch_652730 @ 00652730  kind=gamemisc  attributed-by=role:dispatch  size=84 */

void FUN_00652730(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  uVar2 = param_1;
  *(uint *)(in_ECX + 0xf8) = param_1 & 0xffff;
  FUN_0064bce0(local_c,0,&param_1,DAT_0076dea8);
  piVar1 = *(int **)(in_ECX + 0xcc);
  if ((piVar1 != (int *)0x0) && ((char)piVar1[0x57] != '\0')) {
    (**(code **)(*piVar1 + 0x60))(uVar2);
  }
  return;
}


/* vdispatch_653620 @ 00653620  kind=gamemisc  attributed-by=role:dispatch  size=83 */

void FUN_00653620(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (((param_1 != 0) && ((~(byte)(*(uint *)(param_1 + 200) >> 1) & 1) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x44), iVar1 != 0)) {
    param_1 = param_2;
    piVar3 = (int *)FUN_00468910(&param_1);
    puVar2 = (undefined4 *)*piVar3;
    if ((puVar2 != (undefined4 *)0x0) &&
       ((*(char *)(iVar1 + 0x15c) != '\0' || (*(char *)(puVar2 + 1) == '\0')))) {
      (**(code **)*puVar2)();
    }
  }
  return;
}


/* vdispatch_68a6b0 @ 0068a6b0  kind=gamemisc  attributed-by=role:dispatch  size=85 */

void FUN_0068a6b0(void)

{
  int in_ECX;
  int *piVar1;
  
  if (*(int *)(in_ECX + 0x2c4) == 0) {
    (**(code **)(**(int **)(in_ECX + 0x2c0) + 0x68))
              (*(int **)(in_ECX + 0x2c0),0xc0,0x208,0,0,in_ECX + 0x2c4,0);
  }
  piVar1 = (int *)**(int **)(in_ECX + 0x2b8);
  if (piVar1 != *(int **)(in_ECX + 0x2b8)) {
    do {
      FUN_0068b6a0();
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(in_ECX + 0x2b8));
  }
  return;
}


/* vdispatch_68ab30 @ 0068ab30  kind=gamemisc  attributed-by=role:dispatch  size=57 */

void FUN_0068ab30(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x128);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x128) = 0;
  }
  piVar1 = *(int **)(in_ECX + 300);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 300) = 0;
  }
  return;
}


/* vdispatch_68d300 @ 0068d300  kind=gamemisc  attributed-by=role:dispatch  size=65 */

void FUN_0068d300(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x40);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x40) = 0;
  }
  piVar1 = *(int **)(in_ECX + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  piVar1 = *(int **)(in_ECX + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x38) = 0;
  }
  return;
}


/* vdispatch_68d57e @ 0068d57e  kind=gamemisc  attributed-by=role:dispatch  size=21 */

void FUN_0068d57e(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 4) + 8))();
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}


/* vdispatch_68e83e @ 0068e83e  kind=gamemisc  attributed-by=role:dispatch  size=32 */

void FUN_0068e83e(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = &DAT_0074a5a0; puVar1 < &DAT_0074a5a0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}


/* vdispatch_68e85e @ 0068e85e  kind=gamemisc  attributed-by=role:dispatch  size=32 */

void FUN_0068e85e(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = &DAT_0074a5a8; puVar1 < &DAT_0074a5a8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}


/* vdispatch_68fbb0 @ 0068fbb0  kind=gamemisc  attributed-by=role:dispatch  size=79 */

uint FUN_0068fbb0(uint param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = param_1;
  uVar3 = 0;
  uVar4 = 0;
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x5c), iVar1 != 0)) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    param_1 = param_2;
    do {
      uVar4 = (**(code **)(*(int *)(iVar1 + 0xc) + 0x10))(iVar1,&param_1);
    } while (*(uint *)(iVar2 + 0x10) <= uVar4);
    uVar3 = -(uint)(uVar4 != 0) & param_1;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar4;
  }
  return uVar3;
}


/* vdispatch_68fc70 @ 0068fc70  kind=gamemisc  attributed-by=role:dispatch  size=79 */

undefined4 FUN_0068fc70(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_8 [4];
  undefined4 uStack_4;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    piVar1 = *(int **)(*param_1 + 0x60);
    pcVar2 = *(code **)(*piVar1 + 0x20);
    if (pcVar2 != (code *)0x0) {
      puVar3 = (undefined4 *)(*pcVar2)(piVar1,"tt-cmaps");
      if (puVar3 != (undefined4 *)0x0) {
        iVar4 = (*(code *)*puVar3)(param_1,auStack_8);
        if (iVar4 == 0) {
          return uStack_4;
        }
      }
    }
  }
  return 0xffffffff;
}


/* vdispatch_68fe10 @ 0068fe10  kind=gamemisc  attributed-by=role:dispatch  size=92 */

int FUN_0068fe10(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  if ((param_1 != (int *)0x0) &&
     ((*(code **)(*param_1 + 0x20) == (code *)0x0 ||
      (iVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2), iVar3 == 0)))) {
    puVar4 = (undefined4 *)(param_1[1] + 0x1c);
    puVar1 = puVar4 + *(int *)(param_1[1] + 0x18);
    while ((puVar4 < puVar1 &&
           (((piVar2 = (int *)*puVar4, piVar2 == param_1 ||
             (*(code **)(*piVar2 + 0x20) == (code *)0x0)) ||
            (iVar3 = (**(code **)(*piVar2 + 0x20))(piVar2,param_2), iVar3 == 0))))) {
      puVar4 = puVar4 + 1;
    }
  }
  return iVar3;
}


/* vdispatch_6909c0 @ 006909c0  kind=gamemisc  attributed-by=role:dispatch  size=89 */

size_t FUN_006909c0(int *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint _Size;
  size_t sVar2;
  
  uVar1 = param_1[2];
  _Size = 0;
  if (uVar1 < (uint)param_1[1]) {
    if ((code *)param_1[5] != (code *)0x0) {
      sVar2 = (*(code *)param_1[5])(param_1,uVar1,param_2,param_3);
      param_1[2] = param_1[2] + sVar2;
      return sVar2;
    }
    _Size = param_1[1] - uVar1;
    if (param_3 < _Size) {
      _Size = param_3;
    }
    memcpy(param_2,(void *)(*param_1 + uVar1),_Size);
    param_1[2] = param_1[2] + _Size;
  }
  return _Size;
}


/* vdispatch_690b20 @ 00690b20  kind=gamemisc  attributed-by=role:dispatch  size=94 */

uint FUN_00690b20(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint3 in_ECX;
  undefined4 uStack_4;
  
  *param_2 = 0;
  uStack_4 = (uint)in_ECX;
  if ((code *)param_1[5] == (code *)0x0) {
    uVar2 = param_1[2];
    if (uVar2 < (uint)param_1[1]) {
      uVar1 = *(undefined1 *)(uVar2 + *param_1);
      param_1[2] = param_1[2] + 1;
      return CONCAT31((int3)(uVar2 >> 8),uVar1);
    }
  }
  else {
    uVar2 = (*(code *)param_1[5])(param_1,param_1[2],(int)&uStack_4 + 3,1);
    if (uVar2 == 1) {
      param_1[2] = param_1[2] + 1;
      return uStack_4 >> 0x18;
    }
  }
  *param_2 = 0x55;
  return uVar2 & 0xffffff00;
}


/* vdispatch_6917d0 @ 006917d0  kind=gamemisc  attributed-by=role:dispatch  size=73 */

void FUN_006917d0(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  
  if (*(code **)(param_2 + 8) != (code *)0x0) {
    (**(code **)(param_2 + 8))(param_2);
  }
  pcVar1 = *(code **)(*(int *)(param_3 + 0x14) + 0x3c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2);
  }
  FUN_00691290(param_1,*(undefined4 *)(param_2 + 0x28));
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_00691290(param_1,param_2);
  return;
}


/* vdispatch_69c400 @ 0069c400  kind=gamemisc  attributed-by=role:dispatch  size=46 */

void FUN_0069c400(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(in_ECX + 0x1fc))();
  if (iVar1 == 0) {
    FUN_00692010();
  }
  return;
}


/* vdispatch_69c7c0 @ 0069c7c0  kind=gamemisc  attributed-by=role:dispatch  size=73 */

void FUN_0069c7c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x1f8);
  iVar2 = (**(code **)(param_1 + 0x1fc))(param_1,0x636d6170,param_2,puVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00693a30(param_2,*puVar1,param_1 + 500);
    if (iVar2 != 0) {
      *puVar1 = 0;
    }
  }
  return;
}


/* vdispatch_69cb00 @ 0069cb00  kind=gamemisc  attributed-by=role:dispatch  size=58 */

void FUN_0069cb00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x706f7374,param_2,0);
  if (iVar1 == 0) {
    FUN_00692010(param_2,&DAT_007236ac,param_1 + 0x1d4);
  }
  return;
}


/* vdispatch_69cb40 @ 0069cb40  kind=gamemisc  attributed-by=role:dispatch  size=58 */

void FUN_0069cb40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x50434c54,param_2,0);
  if (iVar1 == 0) {
    FUN_00692010(param_2,&DAT_007236d8,param_1 + 0x22c);
  }
  return;
}


/* vdispatch_6a98d0 @ 006a98d0  kind=gamemisc  attributed-by=role:dispatch  size=14 */

void FUN_006a98d0(void)

{
  int in_EAX;
  
  (**(code **)(in_EAX + 0x5c0))();
  return;
}


/* vdispatch_6af450 @ 006af450  kind=gamemisc  attributed-by=role:dispatch  size=37 */

void FUN_006af450(void)

{
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 0x54) == '\0') {
    FUN_00691290(*(undefined4 *)(unaff_ESI + 0x10),*(undefined4 *)(unaff_ESI + 0x4c));
    *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  }
  (**(code **)(unaff_ESI + 0x18))();
  return;
}


/* vdispatch_6b03a0 @ 006b03a0  kind=gamemisc  attributed-by=role:dispatch  size=95 */

void FUN_006b03a0(void)

{
  int in_EAX;
  
  if (*(code **)(in_EAX + 0x8c) != (code *)0x0) {
    (**(code **)(in_EAX + 0x8c))(in_EAX + 0x5c);
  }
  if (*(code **)(in_EAX + 0xf8) != (code *)0x0) {
    (**(code **)(in_EAX + 0xf8))(in_EAX + 200);
  }
  if (*(code **)(in_EAX + 0xc4) != (code *)0x0) {
    (**(code **)(in_EAX + 0xc4))(in_EAX + 0x94);
  }
  if (*(code **)(in_EAX + 300) != (code *)0x0) {
    (**(code **)(in_EAX + 300))(in_EAX + 0xfc);
  }
  FUN_006af450();
  return;
}


/* vdispatch_6b3c40 @ 006b3c40  kind=gamemisc  attributed-by=role:dispatch  size=30 */

void FUN_006b3c40(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x4c) != 0) {
    FUN_00691ee0(*(undefined4 *)(unaff_ESI + 0x48),unaff_ESI + 0x4c);
  }
  (**(code **)(unaff_ESI + 0x18))();
  return;
}


/* thunk_FUN_006b3c40 @ 006b43e0  kind=gamemisc  attributed-by=role:dispatch  size=5 */

void thunk_FUN_006b3c40(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x4c) != 0) {
    FUN_00691ee0(*(undefined4 *)(unaff_ESI + 0x48),unaff_ESI + 0x4c);
  }
  (**(code **)(unaff_ESI + 0x18))();
  return;
}


/* vdispatch_6b4700 @ 006b4700  kind=gamemisc  attributed-by=role:dispatch  size=43 */

void FUN_006b4700(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = FUN_006b46c0();
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 8))(*(undefined4 *)(param_1 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


/* vdispatch_6b4730 @ 006b4730  kind=gamemisc  attributed-by=role:dispatch  size=72 */

int FUN_006b4730(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = param_1;
  puVar2 = (undefined4 *)FUN_006b46c0();
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
    iVar3 = (*(code *)*puVar2)(*(undefined4 *)(iVar3 + 100),
                               *(int *)(iVar3 + 4) * 0xfc + *(int *)(iVar3 + 0x130),&param_1);
    if (iVar3 == 0) {
      piVar1[10] = (int)param_1;
      return 0;
    }
  }
  return iVar3;
}


/* vdispatch_6b64f0 @ 006b64f0  kind=gamemisc  attributed-by=role:dispatch  size=50 */

undefined4 FUN_006b64f0(void)

{
  undefined4 uVar1;
  int in_ECX;
  uint in_EDX;
  
  if (in_EDX != 0xffff) {
    if (0x186 < in_EDX) {
      uVar1 = FUN_006b64d0();
      return uVar1;
    }
    if (*(int *)(in_ECX + 0x808) != 0) {
      uVar1 = (**(code **)(*(int *)(in_ECX + 0x808) + 0x14))();
      return uVar1;
    }
  }
  return 0;
}


/* vdispatch_6b8860 @ 006b8860  kind=gamemisc  attributed-by=role:dispatch  size=86 */

void FUN_006b8860(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *in_EDX;
  undefined4 *unaff_EDI;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (*(int *)(*(int *)(in_ECX + 0x80) + 0x34) != 0) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x80) + 0x34);
    (**(code **)*puVar1)(puVar1[1]);
    *unaff_EDI = local_8;
    *in_EDX = uStack_4;
    return;
  }
  FUN_006b6310();
  return;
}


/* vdispatch_6b88c0 @ 006b88c0  kind=gamemisc  attributed-by=role:dispatch  size=78 */

void FUN_006b88c0(undefined4 param_1)

{
  int *piVar1;
  int in_EAX;
  undefined4 *in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(*(int *)(in_EAX + 0x80) + 0x34) != 0) {
    local_8 = *in_ECX;
    local_4 = param_1;
    piVar1 = *(int **)(*(int *)(in_EAX + 0x80) + 0x34);
    (**(code **)(*piVar1 + 4))(piVar1[1],&local_8);
    return;
  }
  FUN_006b6430();
  return;
}


/* vdispatch_6bb3c0 @ 006bb3c0  kind=gamemisc  attributed-by=role:dispatch  size=61 */

void FUN_006bb3c0(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  uVar1 = *(undefined4 *)(unaff_ESI + 0x10);
  FUN_00691290(uVar1,*(undefined4 *)(unaff_ESI + 0x54));
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  if (*(char *)(unaff_ESI + 0x5d) == '\0') {
    FUN_00691290(uVar1,*(undefined4 *)(unaff_ESI + 0x4c));
    *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  }
  (**(code **)(unaff_ESI + 0x18))();
  return;
}


/* vdispatch_6bc830 @ 006bc830  kind=gamemisc  attributed-by=role:dispatch  size=81 */

bool FUN_006bc830(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int *unaff_EBX;
  int *unaff_ESI;
  
  pbVar1 = (byte *)unaff_ESI[2];
  (*(code *)unaff_ESI[7])();
  if (((byte *)*unaff_ESI < pbVar1) && (*(byte *)*unaff_ESI - 0x30 < 10)) {
    iVar2 = (*(code *)unaff_ESI[9])();
    *unaff_EBX = iVar2;
    (*(code *)unaff_ESI[8])();
    *param_1 = *unaff_ESI + 1;
    *unaff_ESI = *unaff_ESI + *unaff_EBX + 1;
    return unaff_ESI[3] == 0;
  }
  unaff_ESI[3] = 3;
  return false;
}


/* vdispatch_6bde20 @ 006bde20  kind=gamemisc  attributed-by=role:dispatch  size=43 */

void FUN_006bde20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = FUN_006bdde0();
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 8))(*(undefined4 *)(param_1 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


/* vdispatch_6be140 @ 006be140  kind=gamemisc  attributed-by=role:dispatch  size=76 */

int FUN_006be140(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_8 [8];
  
  iVar3 = FUN_006bdff0(param_2);
  if ((iVar3 == 0) && (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x80), *(int *)(iVar1 + 0x34) != 0))
  {
    piVar2 = *(int **)(iVar1 + 0x34);
    (**(code **)(*piVar2 + 4))(piVar2[1],local_8);
  }
  return iVar3;
}


/* vdispatch_6bf6a0 @ 006bf6a0  kind=gamemisc  attributed-by=role:dispatch  size=78 */

void FUN_006bf6a0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 in_ECX;
  
  iVar1 = (**(code **)(in_EAX + 0x1fc))();
  if (iVar1 != 0) {
    *(undefined4 *)(in_EAX + 0x290) = 0;
    *(undefined4 *)(in_EAX + 0x28c) = 0;
    return;
  }
  *(undefined4 *)(in_EAX + 0x28c) = in_ECX;
  FUN_00693a30();
  return;
}


/* vdispatch_6bf6f0 @ 006bf6f0  kind=gamemisc  attributed-by=role:dispatch  size=78 */

void FUN_006bf6f0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 in_ECX;
  
  iVar1 = (**(code **)(in_EAX + 0x1fc))();
  if (iVar1 != 0) {
    *(undefined4 *)(in_EAX + 0x298) = 0;
    *(undefined4 *)(in_EAX + 0x294) = 0;
    return;
  }
  *(undefined4 *)(in_EAX + 0x294) = in_ECX;
  FUN_00693a30();
  return;
}


/* vdispatch_6bf970 @ 006bf970  kind=gamemisc  attributed-by=role:dispatch  size=50 */

void FUN_006bf970(char param_1)

{
  int unaff_ESI;
  undefined2 *unaff_EDI;
  
  (**(code **)(*(int *)(unaff_ESI + 0x214) + 0x9c))();
  if ((param_1 != '\0') && (*(int *)(unaff_ESI + 0x1e0) != 0)) {
    *unaff_EDI = *(undefined2 *)(unaff_ESI + 0xe2);
  }
  return;
}


/* vdispatch_6bf9b0 @ 006bf9b0  kind=gamemisc  attributed-by=role:dispatch  size=53 */

void FUN_006bf9b0(void)

{
  int in_EAX;
  undefined2 *in_ECX;
  undefined2 *in_EDX;
  
  if (*(char *)(in_EAX + 0x128) != '\0') {
    (**(code **)(*(int *)(in_EAX + 0x214) + 0x9c))();
    return;
  }
  *in_EDX = 0;
  *in_ECX = *(undefined2 *)(in_EAX + 0x44);
  return;
}


/* vdispatch_6cd960 @ 006cd960  kind=gamemisc  attributed-by=role:dispatch  size=55 */

void FUN_006cd960(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EAX;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),1,0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 4) = param_1;
    *(undefined1 *)((int)puVar1 + 0x11) = param_2;
    *puVar1 = 0;
    puVar1[5] = param_3;
    puVar1[6] = param_4;
  }
  return;
}


/* vdispatch_6cdf30 @ 006cdf30  kind=gamemisc  attributed-by=role:dispatch  size=14 */

void FUN_006cdf30(void)

{
  int in_EAX;
  
  (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28));
  return;
}


/* vdispatch_6cead0 @ 006cead0  kind=gamemisc  attributed-by=role:dispatch  size=57 */

undefined4 FUN_006cead0(void)

{
  int in_EAX;
  int in_ECX;
  
  FUN_006cdf40();
  (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),*(undefined4 *)(in_ECX + 0x28));
  (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),*(undefined4 *)(in_ECX + 0x24));
  (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28));
  return 0;
}


/* vdispatch_6ceb50 @ 006ceb50  kind=gamemisc  attributed-by=role:dispatch  size=63 */

undefined4 FUN_006ceb50(void)

{
  int unaff_ESI;
  
  if (((unaff_ESI != 0) && (*(int *)(unaff_ESI + 0x1c) != 0)) && (*(int *)(unaff_ESI + 0x24) != 0))
  {
    if (*(int *)(*(int *)(unaff_ESI + 0x1c) + 0x14) != 0) {
      FUN_006cead0();
    }
    (**(code **)(unaff_ESI + 0x24))
              (*(undefined4 *)(unaff_ESI + 0x28),*(undefined4 *)(unaff_ESI + 0x1c));
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}


