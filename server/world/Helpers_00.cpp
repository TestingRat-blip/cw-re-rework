// Helpers_00 (world) -- server. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_00.h"

/* FUN_00401020 @ 00401020  kind=gamemisc  attributed-by=caller-vote  size=31 */

undefined1 * __thiscall FUN_00401020(void *this,undefined1 *param_1)

{
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = param_1[1];
  *(undefined1 *)((int)this + 2) = param_1[2];
  return this;
}


/* FUN_00401040 @ 00401040  kind=gamemisc  attributed-by=caller-vote  size=26 */

undefined1 * __thiscall
FUN_00401040(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)this = param_1;
  *(undefined1 *)((int)this + 1) = param_2;
  *(undefined1 *)((int)this + 2) = param_3;
  return this;
}


/* FUN_00401060 @ 00401060  kind=gamemisc  attributed-by=caller-vote  size=28 */

undefined4 * __thiscall FUN_00401060(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}


/* FUN_00401080 @ 00401080  kind=gamemisc  attributed-by=caller-vote  size=38 */

undefined4 * __thiscall
FUN_00401080(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return this;
}


/* FUN_004010e0 @ 004010e0  kind=gamemisc  attributed-by=caller-vote  size=81 */

undefined1 * __thiscall FUN_004010e0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  if ((char)*param_1 == '\0') {
    FUN_00401a40(this,param_1,0);
    return this;
  }
  piVar2 = param_1;
  do {
    iVar1 = *piVar2;
    piVar2 = (int *)((int)piVar2 + 1);
  } while ((char)iVar1 != '\0');
  FUN_00401a40(this,param_1,(int)piVar2 - ((int)param_1 + 1));
  return this;
}


/* FUN_004013a0 @ 004013a0  kind=gamemisc  attributed-by=caller-vote  size=38 */

void __fastcall FUN_004013a0(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    operator_delete((void *)*param_1);
  }
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return;
}


/* FUN_004014f0 @ 004014f0  kind=gamemisc  attributed-by=caller-vote  size=55 */

void __thiscall FUN_004014f0(void *this,float *param_1,float *param_2)

{
  *param_1 = *param_2 + *(float *)this;
  param_1[1] = param_2[1] + *(float *)((int)this + 4);
  param_1[2] = param_2[2] + *(float *)((int)this + 8);
  return;
}


/* FUN_00401610 @ 00401610  kind=gamemisc  attributed-by=caller-vote  size=54 */

float * __thiscall FUN_00401610(void *this,float param_1)

{
  *(float *)this = *(float *)this * param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) * param_1;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) * param_1;
  return this;
}


/* FUN_00401840 @ 00401840  kind=gamemisc  attributed-by=caller-vote  size=173 */

bool __thiscall FUN_00401840(void *this,uint param_1,char param_2)

{
  uint uVar1;
  void *_Src;
  uint _Size;
  
  if (param_1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 < param_1) {
    FUN_004016f0(this,param_1,*(size_t *)((int)this + 0x10));
    return param_1 != 0;
  }
  if ((param_2 != '\0') && (param_1 < 0x10)) {
    _Size = *(uint *)((int)this + 0x10);
    if (param_1 < *(uint *)((int)this + 0x10)) {
      _Size = param_1;
    }
    if (0xf < uVar1) {
      _Src = *(void **)this;
      if (_Size != 0) {
        memcpy(this,_Src,_Size);
      }
      operator_delete(_Src);
    }
    *(uint *)((int)this + 0x10) = _Size;
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined1 *)(_Size + (int)this) = 0;
    return param_1 != 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < uVar1) {
      this = *(void **)this;
    }
    *(undefined1 *)this = 0;
  }
  return param_1 != 0;
}


/* FUN_00401a40 @ 00401a40  kind=gamemisc  attributed-by=caller-vote  size=247 */

int * __thiscall FUN_00401a40(void *this,int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(uint *)((int)this + 0x14);
    piVar2 = this;
    if (0xf < uVar1) {
      piVar2 = *(int **)this;
    }
    if (piVar2 <= param_1) {
      pvVar3 = this;
      if (0xf < uVar1) {
        pvVar3 = *(void **)this;
      }
      if (param_1 < (int *)(*(int *)((int)this + 0x10) + (int)pvVar3)) {
        if (0xf < uVar1) {
          piVar2 = FUN_00401920(this,this,(int)param_1 - *(int *)this,param_2);
          return piVar2;
        }
        piVar2 = FUN_00401920(this,this,(int)param_1 - (int)this,param_2);
        return piVar2;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    FUN_004016f0(this,param_2,*(size_t *)((int)this + 0x10));
    if (param_2 == 0) {
      return this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 **)this = 0;
      return this;
    }
    *(undefined1 *)this = 0;
    return this;
  }
  pvVar3 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar3 = *(void **)this;
  }
  if (param_2 != 0) {
    memcpy(pvVar3,param_1,param_2);
  }
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return this;
  }
  *(undefined1 *)(*(int *)this + param_2) = 0;
  return this;
}


/* FUN_00401ca0 @ 00401ca0  kind=gamemisc  attributed-by=caller-vote  size=33 */

float10 __cdecl FUN_00401ca0(float param_1)

{
  return (float10)ABS(param_1);
}


/* FUN_00402150 @ 00402150  kind=gamemisc  attributed-by=caller-vote  size=4 */

undefined4 __fastcall FUN_00402150(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}


/* FUN_00402160 @ 00402160  kind=gamemisc  attributed-by=caller-vote  size=4 */

undefined4 __fastcall FUN_00402160(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


/* FUN_00402170 @ 00402170  kind=gamemisc  attributed-by=caller-vote  size=4 */

undefined4 __fastcall FUN_00402170(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}


/* FUN_00402bb0 @ 00402bb0  kind=gamemisc  attributed-by=caller-vote  size=15 */

int __thiscall FUN_00402bb0(void *this,int param_1)

{
  return *(int *)this + param_1 * 4;
}


/* FUN_00402bc0 @ 00402bc0  kind=gamemisc  attributed-by=caller-vote  size=6 */

int __fastcall FUN_00402bc0(int *param_1)

{
  return *param_1 + 0x10;
}


/* FUN_00402eb0 @ 00402eb0  kind=gamemisc  attributed-by=caller-vote  size=22 */

uint * __thiscall FUN_00402eb0(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(uint *)this;
  *(uint *)this = *(int *)this - uVar2;
  *(int *)((int)this + 4) = (*(int *)((int)this + 4) - param_1[1]) - (uint)(uVar1 < uVar2);
  return this;
}


/* FUN_00406210 @ 00406210  kind=gamemisc  attributed-by=caller-vote  size=54 */

undefined4 __thiscall FUN_00406210(void *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    return *(undefined4 *)((int)this + (param_1 * 0x400 + param_2) * 4 + 0xbc);
  }
  return 0;
}


/* FUN_00406970 @ 00406970  kind=gamemisc  attributed-by=caller-vote  size=346 */

undefined4 * __fastcall FUN_00406970(undefined4 *param_1)

{
  *param_1 = 0xffff0000;
  *(undefined1 *)(param_1 + 1) = 0xff;
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  param_1[4] = 0x3f800000;
  param_1[9] = 0x3f8147ae;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0x3f7ae148;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x3f733333;
  param_1[0xf] = 0x3f4ccccd;
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 5) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x16) = 0xffff;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x1a) = 0xffff;
  *(undefined2 *)(param_1 + 7) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x1e) = 0xffff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x22) = 0xffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xc0a00000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3f000000;
  param_1[0x1e] = 0x40a00000;
  param_1[0x1f] = 0x40c00000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x40400000;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0xc1280000;
  param_1[0x25] = 0;
  param_1[0x26] = 0xc1000000;
  param_1[0x27] = 0x40000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return param_1;
}


/* FUN_00406ad0 @ 00406ad0  kind=gamemisc  attributed-by=caller-vote  size=1054 */

undefined2 * __fastcall FUN_00406ad0(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  memset(param_1 + 10,0,0x100);
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x92] = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 1;
  *(undefined4 *)(param_1 + 0x116) = 0;
  memset(param_1 + 0x96,0,0x100);
  param_1[0x118] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  param_1[0x11e] = 0;
  *(undefined1 *)(param_1 + 0x11f) = 0;
  param_1[0x120] = 1;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  memset(param_1 + 0x122,0,0x100);
  param_1[0x1a4] = 0;
  *(undefined4 *)(param_1 + 0x1a6) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  param_1[0x1aa] = 0;
  *(undefined1 *)(param_1 + 0x1ab) = 0;
  param_1[0x1ac] = 1;
  *(undefined4 *)(param_1 + 0x22e) = 0;
  memset(param_1 + 0x1ae,0,0x100);
  param_1[0x230] = 0;
  *(undefined4 *)(param_1 + 0x232) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  param_1[0x236] = 0;
  *(undefined1 *)(param_1 + 0x237) = 0;
  param_1[0x238] = 1;
  *(undefined4 *)(param_1 + 0x2ba) = 0;
  memset(param_1 + 0x23a,0,0x100);
  param_1[700] = 0;
  *(undefined4 *)(param_1 + 0x2be) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  param_1[0x2c2] = 0;
  *(undefined1 *)(param_1 + 0x2c3) = 0;
  param_1[0x2c4] = 1;
  *(undefined4 *)(param_1 + 0x346) = 0;
  memset(param_1 + 0x2c6,0,0x100);
  param_1[0x348] = 0;
  *(undefined4 *)(param_1 + 0x34a) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x34e] = 0;
  *(undefined1 *)(param_1 + 0x34f) = 0;
  param_1[0x350] = 1;
  *(undefined4 *)(param_1 + 0x3d2) = 0;
  memset(param_1 + 0x352,0,0x100);
  param_1[0x3d4] = 0;
  *(undefined4 *)(param_1 + 0x3d6) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  param_1[0x3da] = 0;
  *(undefined1 *)(param_1 + 0x3db) = 0;
  param_1[0x3dc] = 1;
  *(undefined4 *)(param_1 + 0x45e) = 0;
  memset(param_1 + 0x3de,0,0x100);
  param_1[0x460] = 0;
  *(undefined4 *)(param_1 + 0x462) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0;
  param_1[0x466] = 0;
  *(undefined1 *)(param_1 + 0x467) = 0;
  param_1[0x468] = 1;
  *(undefined4 *)(param_1 + 0x4ea) = 0;
  memset(param_1 + 0x46a,0,0x100);
  param_1[0x4ec] = 0;
  *(undefined4 *)(param_1 + 0x4ee) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  param_1[0x4f2] = 0;
  *(undefined1 *)(param_1 + 0x4f3) = 0;
  param_1[0x4f4] = 1;
  *(undefined4 *)(param_1 + 0x576) = 0;
  memset(param_1 + 0x4f6,0,0x100);
  param_1[0x578] = 0;
  *(undefined4 *)(param_1 + 0x57a) = 0;
  *(undefined4 *)(param_1 + 0x57c) = 0;
  param_1[0x57e] = 0;
  *(undefined1 *)(param_1 + 0x57f) = 0;
  param_1[0x580] = 1;
  *(undefined4 *)(param_1 + 0x602) = 0;
  memset(param_1 + 0x582,0,0x100);
  param_1[0x604] = 0;
  *(undefined4 *)(param_1 + 0x606) = 0;
  *(undefined4 *)(param_1 + 0x608) = 0;
  param_1[0x60a] = 0;
  *(undefined1 *)(param_1 + 0x60b) = 0;
  param_1[0x60c] = 1;
  *(undefined4 *)(param_1 + 0x68e) = 0;
  memset(param_1 + 0x60e,0,0x100);
  param_1[0x690] = 0;
  *(undefined4 *)(param_1 + 0x692) = 0;
  *(undefined4 *)(param_1 + 0x694) = 0;
  param_1[0x696] = 0;
  *(undefined1 *)(param_1 + 0x697) = 0;
  param_1[0x698] = 1;
  *(undefined4 *)(param_1 + 0x71a) = 0;
  memset(param_1 + 0x69a,0,0x100);
  return param_1;
}


/* FUN_004078f0 @ 004078f0  kind=gamemisc  attributed-by=caller-vote  size=197 */

uint __thiscall FUN_004078f0(void *this,char *param_1)

{
  char cVar1;
  undefined4 in_EAX;
  undefined3 uVar4;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  uVar2 = CONCAT31(uVar4,*(char *)this);
  if (((((*(char *)this == *param_1) &&
        (uVar2 = CONCAT31(uVar4,*(char *)((int)this + 1)), *(char *)((int)this + 1) == param_1[1]))
       && (uVar2 = *(uint *)((int)this + 4), uVar2 == *(uint *)(param_1 + 4))) &&
      ((uVar2 = CONCAT31((int3)(uVar2 >> 8),*(char *)((int)this + 0xe)),
       *(char *)((int)this + 0xe) == param_1[0xe] &&
       (uVar3 = *(uint *)((int)this + 8), uVar2 = uVar3, uVar3 == *(uint *)(param_1 + 8))))) &&
     ((uVar2 = CONCAT31((int3)(uVar3 >> 8),*(char *)((int)this + 0xc)),
      *(char *)((int)this + 0xc) == param_1[0xc] &&
      ((uVar2 = CONCAT22((short)(uVar3 >> 0x10),*(short *)((int)this + 0x10)),
       *(short *)((int)this + 0x10) == *(short *)(param_1 + 0x10) &&
       (uVar2 = CONCAT31((int3)(uVar2 >> 8),*(char *)((int)this + 0xd)),
       *(char *)((int)this + 0xd) == param_1[0xd])))))) {
    uVar2 = *(uint *)((int)this + 0x114);
    if (uVar2 == *(uint *)(param_1 + 0x114)) {
      iVar6 = 0;
      uVar3 = uVar2;
      if (0 < (int)uVar2) {
        pcVar5 = param_1 + 0x14;
        pcVar7 = (char *)((int)this + 0x17);
        do {
          uVar3 = CONCAT31((int3)(uVar3 >> 8),*pcVar7);
          if (*pcVar7 != pcVar7[(int)param_1 - (int)this]) {
LAB_004079a1:
            return uVar3 & 0xffffff00;
          }
          cVar1 = FUN_004079c0(pcVar7 + -3,(int)pcVar5);
          uVar3 = CONCAT31(extraout_var,cVar1);
          if (cVar1 != '\0') goto LAB_004079a1;
          iVar6 = iVar6 + 1;
          pcVar5 = pcVar5 + 8;
          pcVar7 = pcVar7 + 8;
        } while (iVar6 < (int)uVar2);
      }
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


/* FUN_004079c0 @ 004079c0  kind=gamemisc  attributed-by=caller-vote  size=41 */

undefined1 __thiscall FUN_004079c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 - (int)this;
  do {
    if (*(char *)this != *(char *)((int)this + iVar2)) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    this = (void *)((int)this + 1);
  } while (iVar1 < 3);
  return 0;
}


/* FUN_004079f0 @ 004079f0  kind=gamemisc  attributed-by=caller-vote  size=55 */

void __thiscall FUN_004079f0(void *this,float *param_1,float param_2)

{
  *param_1 = *(float *)this * param_2;
  param_1[1] = *(float *)((int)this + 4) * param_2;
  param_1[2] = *(float *)((int)this + 8) * param_2;
  return;
}


/* FUN_00407a30 @ 00407a30  kind=gamemisc  attributed-by=caller-vote  size=23 */

int * __thiscall FUN_00407a30(void *this,int *param_1)

{
  *param_1 = *(int *)this;
  FUN_00407a50(this);
  return param_1;
}


/* FUN_00407d60 @ 00407d60  kind=gamemisc  attributed-by=caller-vote  size=53 */

float10 __cdecl FUN_00407d60(float param_1)

{
  return (float10)(1.0 - 1.0 / ((param_1 - 1.0) * 0.05 + 1.0));
}


/* FUN_0040a840 @ 0040a840  kind=gamemisc  attributed-by=caller-vote  size=17600 */

/* WARNING: Removing unreachable block (ram,0x0040a935) */
/* WARNING: Removing unreachable block (ram,0x0040a95c) */
/* WARNING: Removing unreachable block (ram,0x0040a986) */
/* WARNING: Removing unreachable block (ram,0x0040a99b) */
/* WARNING: Removing unreachable block (ram,0x0040a971) */
/* WARNING: Removing unreachable block (ram,0x0040a947) */
/* WARNING: Removing unreachable block (ram,0x0040a919) */
/* WARNING: Removing unreachable block (ram,0x0040a9b0) */

void __cdecl FUN_0040a840(uint *param_1,int param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  short sVar9;
  bool bVar10;
  float fVar11;
  ushort local_2c;
  undefined1 local_2a;
  undefined4 local_28;
  undefined1 local_24;
  int local_20;
  int local_1c;
  ushort local_18;
  undefined1 local_16;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0xffff;
  local_16 = 0xff;
  if (param_3 == (undefined4 *)0x0) {
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_2c = CONCAT11((char)iVar5,(char)iVar6);
    local_18 = local_2c;
    local_16 = (char)iVar4;
    local_20 = rand();
    local_20 = local_20 % 100;
    iVar4 = rand();
    param_3 = &local_28;
    local_1c = iVar4 % 100;
  }
  else {
    switch(*param_3) {
    case 0:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 2;
      break;
    case 1:
      uVar7 = *(byte *)(param_3 + 1) & 0x80000001;
      break;
    case 2:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 9;
      break;
    case 3:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 0xb;
      break;
    case 4:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 4;
      break;
    case 5:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 7;
      break;
    case 6:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 0xf;
      break;
    case 7:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 0xd;
      break;
    default:
      goto switchD_0040a907_default;
    }
    *param_1 = uVar7;
  }
switchD_0040a907_default:
  *(undefined4 *)(param_2 + 8) = 0x3f75c290;
  *(undefined4 *)(param_2 + 0xc) = 0x3f75c290;
  *(undefined4 *)(param_2 + 0x10) = 0x400a3d71;
  switch(*param_1) {
  case 0:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    uVar7 = param_3[2] & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(short *)(param_2 + 0x14) = (short)uVar7 + 0x4d4;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 10) + 0x500;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 1:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x4d8;
    sVar3 = 0x1ae;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 10) + 0x50a;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    goto LAB_0040aaa7;
  case 2:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x4de;
    sVar3 = 0x4e0;
    sVar9 = (short)((int)param_3[3] % 0xf) + 0x4e4;
    goto LAB_0040aa8e;
  case 3:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x4f3;
    sVar3 = 0x4f5;
    sVar9 = (short)((int)param_3[3] % 7) + 0x4f9;
LAB_0040aa8e:
    *(short *)(param_2 + 0x16) = sVar9;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    sVar3 = (sVar3 < *(short *)(param_2 + 0x14)) + 0x1ae;
    goto LAB_0040aaa7;
  case 4:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x4b;
    sVar3 = (short)((int)param_3[3] % 6) + 0x50;
    goto LAB_0040aca5;
  case 5:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x56;
    sVar3 = (short)((int)param_3[3] % 6) + 0x5b;
LAB_0040aca5:
    *(short *)(param_2 + 0x16) = sVar3;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x61;
    *(undefined4 *)(param_2 + 0x38) = 0x3f99999a;
    goto LAB_0040acc0;
  case 6:
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_2c = CONCAT11((char)iVar5,(char)iVar6);
    *(ushort *)(param_2 + 2) = local_2c;
    *(char *)(param_2 + 4) = (char)iVar4;
    iVar4 = rand();
    *(short *)(param_2 + 0x14) = (short)(iVar4 % 3) + 0x94b;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1af;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
    *(undefined4 *)(param_2 + 0x78) = 0x40a00000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x38) = 0x3f99999a;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 7:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    uVar7 = param_3[2] & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    *(short *)(param_2 + 0x14) = (short)uVar7 + 0x62;
    goto LAB_0040ae11;
  case 8:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x6a;
LAB_0040ae11:
    sVar3 = 0x6f;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 6) + 100;
    *(undefined4 *)(param_2 + 0x1a) = 0x700071;
    goto LAB_0040aaa7;
  case 9:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x11a;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 3) + 0x11f;
    *(undefined4 *)(param_2 + 0x1a) = 0x12c01b0;
    goto LAB_0040b0fb;
  case 10:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x122;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 5) + 0x127;
    *(undefined4 *)(param_2 + 0x1a) = 0x12d01b0;
LAB_0040b0fb:
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    *(undefined4 *)(param_2 + 0x38) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    goto LAB_0040acc0;
  case 0xb:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x514;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 10) + 0x51e;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x12e;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    goto LAB_0040b1b7;
  case 0xc:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x519;
    uVar7 = param_3[3] & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(short *)(param_2 + 0x16) = (short)uVar7 + 0x528;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x12e;
    *(undefined4 *)(param_2 + 0x40) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f733333;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x3fc00000;
    *(undefined4 *)(param_2 + 0x78) = 0x40800000;
LAB_0040b1b7:
    *(undefined4 *)(param_2 + 8) = 0x3f851eb8;
    *(undefined4 *)(param_2 + 0xc) = 0x3f851eb8;
    *(undefined4 *)(param_2 + 0x10) = 0x4015c28f;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0xd:
    local_2c = 0xffff;
    *(undefined2 *)(param_2 + 2) = 0xffff;
    *(undefined1 *)(param_2 + 4) = 0xff;
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x52c;
    sVar3 = 0x53e;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 5) + 0x531;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    goto LAB_0040aaa7;
  case 0xe:
    local_2c = 0xffff;
    *(undefined2 *)(param_2 + 2) = 0xffff;
    *(undefined1 *)(param_2 + 4) = 0xff;
    uVar7 = param_3[2] & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(short *)(param_2 + 0x14) = (short)uVar7 + 0x536;
    uVar7 = param_3[3] & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(short *)(param_2 + 0x16) = (short)uVar7 + 0x53a;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    sVar3 = 0x53e;
    goto LAB_0040aaa7;
  case 0xf:
    FUN_00401020((void *)(param_2 + 2),(undefined1 *)(param_3 + 4));
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x12f;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 6) + 0x135;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x147;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x10:
    FUN_00401020((void *)(param_2 + 2),(undefined1 *)(param_3 + 4));
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x13b;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 6) + 0x141;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x147;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x11:
    *(undefined4 *)(param_2 + 0x14) = 0x1490148;
    *(undefined4 *)(param_2 + 0x1a) = 0x14b014c;
    *(undefined2 *)(param_2 + 0x18) = 0x14a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = -90.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x4c),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 7.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 5.0;
    local_10 = 3.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x428;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x12:
    *(undefined2 *)(param_2 + 0x14) = 0xb;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    sVar3 = 0x1ae;
    goto LAB_0040aaa7;
  case 0x13:
    *(undefined2 *)(param_2 + 0x14) = 0x163;
    *(undefined4 *)(param_2 + 0x1a) = 0x1620165;
    *(undefined2 *)(param_2 + 0x18) = 0x164;
    uVar1 = 0x166;
    goto LAB_0040d4cf;
  case 0x14:
    *(undefined2 *)(param_2 + 0x14) = 0x168;
    *(undefined4 *)(param_2 + 0x1a) = 0x167016a;
    *(undefined2 *)(param_2 + 0x18) = 0x169;
    uVar1 = 0x16b;
LAB_0040d4cf:
    *(undefined2 *)(param_2 + 0x1e) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
LAB_0040d582:
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    local_c = -1.0;
LAB_0040d597:
    local_10 = -8.0;
LAB_0040d59e:
    local_14 = 0.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x60) = 0xc1f00000;
    goto LAB_0040ecea;
  case 0x15:
    *(undefined2 *)(param_2 + 0x14) = 0x16d;
    *(undefined4 *)(param_2 + 0x1a) = 0x16c016f;
    *(undefined2 *)(param_2 + 0x18) = 0x16e;
    *(undefined2 *)(param_2 + 0x1e) = 0x170;
    *(undefined4 *)(param_2 + 0x24) = 0x3f333333;
    local_14 = 0.0;
    local_10 = 12.5;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 2.5;
    local_c = -4.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -4.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    local_14 = 0.0;
    local_10 = -8.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x60) = 0xc1f00000;
    local_14 = 2.8;
    local_10 = 2.8;
    local_c = 4.0;
    pvVar8 = (void *)(param_2 + 8);
    goto LAB_0040ece1;
  case 0x16:
    *(undefined2 *)(param_2 + 0x14) = 0x172;
    *(undefined4 *)(param_2 + 0x1a) = 0x1710174;
    uVar1 = 0x173;
    goto LAB_0040d713;
  case 0x17:
    *(undefined2 *)(param_2 + 0x14) = 0x176;
    *(undefined4 *)(param_2 + 0x1a) = 0x1750178;
    uVar1 = 0x177;
LAB_0040d713:
    *(undefined2 *)(param_2 + 0x18) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -4.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -9.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    goto LAB_0040ecea;
  case 0x18:
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.2;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined2 *)(param_2 + 0x1c) = 0x874;
    local_10 = 0.0;
    local_c = -1.5;
    pvVar8 = (void *)(param_2 + 100);
    goto LAB_0040ba92;
  case 0x19:
    *(undefined2 *)(param_2 + 0x14) = 0x872;
    *(undefined4 *)(param_2 + 0x1a) = 0x8710873;
    *(undefined2 *)(param_2 + 0x18) = 0x873;
    *(undefined4 *)(param_2 + 0x24) = 0x3f266666;
    local_14 = 0.0;
    local_10 = 13.0;
    local_c = 0.5;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 3.5;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -3.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -3.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    local_c = 4.5;
    goto LAB_0040d597;
  case 0x1a:
    *(undefined2 *)(param_2 + 0x14) = 0x17a;
    *(undefined4 *)(param_2 + 0x1a) = 0x179017c;
    *(undefined2 *)(param_2 + 0x18) = 0x17b;
    *(undefined2 *)(param_2 + 0x1e) = 0x17d;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -5.5;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x28) = 0x3f866666;
    local_14 = 0.0;
    local_10 = -10.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc2f00000;
    local_14 = 1.04;
    local_10 = 1.04;
    local_c = 2.34;
    pvVar8 = (void *)(param_2 + 8);
    goto LAB_0040ece1;
  case 0x1b:
    *(undefined2 *)(param_2 + 0x14) = 0x17f;
    *(undefined4 *)(param_2 + 0x1a) = 0x17e0181;
    *(undefined2 *)(param_2 + 0x18) = 0x180;
    *(undefined2 *)(param_2 + 0x1e) = 0x182;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.5;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x28) = 0x3f866666;
    local_14 = 0.0;
    local_10 = -7.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc2f00000;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.7;
    pvVar8 = (void *)(param_2 + 8);
    goto LAB_0040ece1;
  case 0x1c:
    *(undefined2 *)(param_2 + 0x14) = 0x184;
    *(undefined4 *)(param_2 + 0x1a) = 0x1830186;
    *(undefined2 *)(param_2 + 0x18) = 0x185;
    *(undefined2 *)(param_2 + 0x1e) = 0x187;
    local_14 = 0.0;
    local_10 = 11.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -3.5;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -7.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -7.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = -5.5;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    local_14 = 1.52;
    local_10 = 1.52;
    local_c = 3.23;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    goto LAB_0040ecea;
  case 0x1d:
    *(undefined2 *)(param_2 + 0x14) = 0x189;
    *(undefined4 *)(param_2 + 0x1a) = 0x188018b;
    *(undefined2 *)(param_2 + 0x18) = 0x18a;
    *(undefined2 *)(param_2 + 0x1e) = 0x18c;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    local_14 = 0.0;
    local_10 = 14.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 5.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -6.0;
    local_c = -9.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f8ccccd;
    local_10 = -11.0;
    local_c = -4.0;
    goto LAB_0040d59e;
  case 0x1e:
    *(undefined2 *)(param_2 + 0x14) = 0x18e;
    *(undefined4 *)(param_2 + 0x1a) = 0x18d0190;
    *(undefined2 *)(param_2 + 0x18) = 399;
    uVar1 = 0x191;
    goto LAB_0040dcda;
  case 0x1f:
    *(undefined2 *)(param_2 + 0x14) = 0x193;
    *(undefined4 *)(param_2 + 0x1a) = 0x1920195;
    *(undefined2 *)(param_2 + 0x18) = 0x194;
    uVar1 = 0x196;
    goto LAB_0040dcda;
  case 0x20:
    *(undefined2 *)(param_2 + 0x14) = 0x198;
    *(undefined4 *)(param_2 + 0x1a) = 0x197019a;
    *(undefined2 *)(param_2 + 0x18) = 0x199;
    uVar1 = 0x19b;
LAB_0040dcda:
    *(undefined2 *)(param_2 + 0x1e) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -4.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    local_14 = 0.0;
    local_10 = -8.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc1f00000;
    goto LAB_0040ecea;
  case 0x21:
    *(undefined2 *)(param_2 + 0x14) = 0x19d;
    *(undefined4 *)(param_2 + 0x1a) = 0x19c019e;
    *(undefined2 *)(param_2 + 0x18) = 0x19e;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.8;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_10 = 9.0;
    goto LAB_0040de38;
  case 0x22:
    *(undefined2 *)(param_2 + 0x14) = 0x1a0;
    *(undefined4 *)(param_2 + 0x1a) = 0x19f01a1;
    *(undefined2 *)(param_2 + 0x18) = 0x1a1;
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 1.2;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_10 = 4.0;
LAB_0040de38:
    local_14 = 0.0;
    local_c = 1.9;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -4.2;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -4.2;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f59999a;
    goto LAB_0040d582;
  case 0x23:
    *(undefined4 *)(param_2 + 0x1a) = 0x9a009b;
    goto LAB_0040c70d;
  case 0x24:
    *(undefined4 *)(param_2 + 0x1a) = 0x9c009d;
LAB_0040c70d:
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 8.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 8.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.1;
LAB_0040bf6f:
    pvVar8 = (void *)(param_2 + 8);
LAB_0040bf72:
    FUN_00401060(pvVar8,&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x30;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x25:
    uVar1 = 0x95f;
    goto LAB_0040ca71;
  case 0x26:
    uVar1 = 0x960;
    goto LAB_0040ca71;
  case 0x27:
    uVar1 = 0x961;
    goto LAB_0040ca71;
  case 0x28:
    uVar1 = 0x962;
LAB_0040ca71:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3fc00000;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.8;
LAB_0040cab2:
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x29;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x29:
    *(undefined4 *)(param_2 + 0x14) = 0x9640963;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 1.4;
    local_10 = 1.4;
    local_c = 2.5;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x429;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x2a:
    *(undefined2 *)(param_2 + 0x14) = 0x965;
    *(undefined2 *)(param_2 + 0x18) = 0x966;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 6.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f000000;
    local_14 = 1.4;
    local_10 = 1.4;
    local_c = 2.5;
    pvVar8 = (void *)(param_2 + 8);
    goto LAB_0040b980;
  case 0x2b:
    *(undefined2 *)(param_2 + 0x14) = 3;
    *(undefined4 *)(param_2 + 0x1a) = 0x401b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    break;
  case 0x2c:
    *(undefined2 *)(param_2 + 0x14) = 10;
    *(undefined2 *)(param_2 + 0x16) = 0xffff;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    sVar3 = 0x1ae;
    goto LAB_0040aaa7;
  case 0x2d:
    *(undefined2 *)(param_2 + 0x14) = 5;
    *(undefined4 *)(param_2 + 0x1a) = 0x601b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    break;
  case 0x2e:
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_2c = CONCAT11((char)iVar5,(char)iVar6);
    local_2a = (char)iVar4;
    FUN_00401020((void *)(param_2 + 2),(undefined1 *)&local_2c);
    *(undefined2 *)(param_2 + 0x14) = 0x3c;
    *(undefined4 *)(param_2 + 0x1a) = 0x3d003f;
    *(undefined2 *)(param_2 + 0x18) = 0x3e;
    *(undefined4 *)(param_2 + 0x24) = 0x3f1c28f6;
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 7.5;
    local_10 = 0.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 5.3999996;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    break;
  case 0x2f:
    *(undefined2 *)(param_2 + 0x14) = 0x40;
    *(undefined4 *)(param_2 + 0x18) = 0x420041;
    *(undefined4 *)(param_2 + 0x38) = 0x3f266666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3f59999a;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f59999a;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 7.5;
    local_10 = 0.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 1.0;
    local_c = -6.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 3.6000001;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    break;
  case 0x30:
    *(undefined2 *)(param_2 + 0x14) = 0xc;
    *(undefined4 *)(param_2 + 0x1a) = 0xd000f;
    *(undefined2 *)(param_2 + 0x18) = 0xe;
    goto LAB_0040af02;
  case 0x31:
    *(undefined2 *)(param_2 + 0x14) = 0x10;
    *(undefined4 *)(param_2 + 0x1a) = 0x110013;
    *(undefined2 *)(param_2 + 0x18) = 0x12;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x3fc00000;
    *(undefined4 *)(param_2 + 0x78) = 0x40800000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
LAB_0040af02:
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) / 1.2;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) / 1.2;
    fVar11 = *(float *)(param_2 + 0x10) / 1.2;
LAB_0040af2f:
    *(float *)(param_2 + 0x10) = fVar11;
    break;
  case 0x32:
    *(undefined2 *)(param_2 + 0x14) = 0x14;
    *(undefined4 *)(param_2 + 0x1a) = 0x150017;
    *(undefined2 *)(param_2 + 0x18) = 0x16;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40600000;
    *(undefined4 *)(param_2 + 0x78) = 0x40000000;
    *(undefined4 *)(param_2 + 0x88) = 0x40600000;
    *(undefined4 *)(param_2 + 0x8c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x90) = 0xc1080000;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x6c) = 0xc0800000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f866666;
    *(undefined4 *)(param_2 + 0x28) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 8) = 0x3f23d70b;
    *(undefined4 *)(param_2 + 0xc) = 0x3f23d70b;
    *(undefined4 *)(param_2 + 0x10) = 0x3fae147b;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x33:
    *(undefined2 *)(param_2 + 0x14) = 0x94f;
    *(undefined4 *)(param_2 + 0x1a) = 0xe2094e;
    *(undefined2 *)(param_2 + 0x18) = 0x950;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x34:
    *(undefined2 *)(param_2 + 0x14) = 0x952;
    *(undefined4 *)(param_2 + 0x1a) = 0x9540951;
    *(undefined2 *)(param_2 + 0x18) = 0x953;
    *(undefined4 *)(param_2 + 0x7c) = 0x40c00000;
    *(undefined4 *)(param_2 + 0x80) = 0;
    *(undefined4 *)(param_2 + 0x84) = 0x3f800000;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x6c) = 0xc0800000;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x35:
    *(undefined2 *)(param_2 + 0x14) = 0xe7;
    *(undefined4 *)(param_2 + 0x1a) = 0xe600e8;
    *(undefined2 *)(param_2 + 0x22) = 0xe9;
    goto LAB_0040e022;
  case 0x36:
    *(undefined2 *)(param_2 + 0x14) = 0xeb;
    *(undefined4 *)(param_2 + 0x1a) = 0xea00ec;
    *(undefined2 *)(param_2 + 0x22) = 0xee;
    *(undefined2 *)(param_2 + 0x18) = 0xed;
LAB_0040e022:
    local_14 = 3.0;
    local_10 = -1.0;
    local_c = -7.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x58) = 0x41f00000;
    local_14 = 1.0;
    local_10 = -6.0;
    local_c = 1.0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    pvVar8 = (void *)(param_2 + 0xa0);
    goto LAB_0040bf72;
  case 0x37:
    *(undefined2 *)(param_2 + 0x14) = 0xff;
    *(undefined4 *)(param_2 + 0x1a) = 0xfe0100;
    uVar1 = 0x101;
    goto LAB_0040e287;
  case 0x38:
    *(undefined2 *)(param_2 + 0x14) = 0x103;
    *(undefined4 *)(param_2 + 0x1a) = 0x1020104;
    *(undefined2 *)(param_2 + 0x22) = 0x105;
    local_14 = 3.0;
    local_10 = 0.0;
    local_c = -10.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3fa66666;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    local_14 = 3.0;
    local_10 = -2.0;
    local_c = -5.0;
    FUN_00401060((void *)(param_2 + 0xa0),&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.65;
    goto LAB_0040bf6f;
  case 0x39:
    *(undefined2 *)(param_2 + 0x14) = 0x107;
    *(undefined4 *)(param_2 + 0x1a) = 0x1060108;
    *(undefined2 *)(param_2 + 0x22) = 0x109;
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -10.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_10 = 5.0;
    local_c = 8.0;
    goto LAB_0040e2bd;
  case 0x3a:
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    bVar10 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar10 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar10) {
      *(undefined2 *)(param_2 + 0x14) = 0x10f;
      *(undefined4 *)(param_2 + 0x1a) = 0x10e0110;
      uVar1 = 0x111;
    }
    else {
      *(undefined2 *)(param_2 + 0x14) = 0x10b;
      *(undefined4 *)(param_2 + 0x1a) = 0x10a010c;
      uVar1 = 0x10d;
    }
LAB_0040e287:
    *(undefined2 *)(param_2 + 0x22) = uVar1;
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -10.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_10 = 3.0;
    local_c = 6.0;
LAB_0040e2bd:
    local_14 = 0.0;
    pvVar8 = (void *)(param_2 + 0x70);
LAB_0040e2c7:
    FUN_00401060(pvVar8,&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    local_14 = 3.0;
    local_10 = -5.0;
    local_c = 0.0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    pvVar8 = (void *)(param_2 + 0xa0);
    goto LAB_0040bf72;
  case 0x3b:
    *(undefined2 *)(param_2 + 0x14) = 0x113;
    *(undefined4 *)(param_2 + 0x1a) = 0x1120114;
    *(undefined2 *)(param_2 + 0x22) = 0x115;
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -10.0;
    pvVar8 = (void *)(param_2 + 0x88);
    goto LAB_0040e2c7;
  case 0x3c:
    *(undefined2 *)(param_2 + 0x14) = 0xf0;
    *(undefined4 *)(param_2 + 0x1a) = 0xef00f1;
    uVar1 = 0xf2;
    goto LAB_0040e0bc;
  case 0x3d:
    *(undefined2 *)(param_2 + 0x14) = 0xf7;
    *(undefined4 *)(param_2 + 0x1a) = 0xf600f8;
    *(undefined2 *)(param_2 + 0x22) = 0xf9;
    local_14 = 3.0;
    local_10 = -1.0;
    local_c = -5.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_10 = -5.0;
    local_c = -1.0;
    goto LAB_0040e0f2;
  case 0x3e:
    *(undefined2 *)(param_2 + 0x14) = 0xfb;
    *(undefined4 *)(param_2 + 0x1a) = 0xfa00fc;
    uVar1 = 0xfd;
LAB_0040e0bc:
    *(undefined2 *)(param_2 + 0x22) = uVar1;
    local_14 = 3.0;
    local_10 = -1.0;
    local_c = -7.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_10 = -6.0;
    local_c = 1.0;
LAB_0040e0f2:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x58) = 0x41f00000;
    local_14 = 1.0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    FUN_00401060((void *)(param_2 + 0xa0),&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 4.0;
    pvVar8 = (void *)(param_2 + 0x70);
    goto LAB_0040bf72;
  case 0x3f:
    *(undefined4 *)(param_2 + 0x1a) = 0x14d014e;
    goto LAB_0040e48d;
  case 0x40:
    *(undefined4 *)(param_2 + 0x1a) = 0x14f0150;
    goto LAB_0040e48d;
  case 0x41:
    *(undefined4 *)(param_2 + 0x1a) = 0x1510152;
    goto LAB_0040e48d;
  case 0x42:
    *(undefined4 *)(param_2 + 0x1a) = 0x1530154;
LAB_0040e48d:
    *(undefined2 *)(param_2 + 0x18) = 0xffff;
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 4.0;
    local_10 = 0.0;
    local_c = -1.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 2.6999998;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3fc00000;
    goto LAB_0040b989;
  case 0x43:
    *(undefined4 *)(param_2 + 0x1a) = 0x1550156;
    *(undefined2 *)(param_2 + 0x14) = 0x157;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 8.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 4.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 3.75;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x24) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x30) = 0x3fc00000;
    goto LAB_0040b989;
  case 0x44:
    *(undefined2 *)(param_2 + 0x14) = 0x73;
    *(undefined4 *)(param_2 + 0x1a) = 0x720074;
    *(undefined2 *)(param_2 + 0x18) = 0x75;
    local_14 = 8.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f99999a;
    break;
  case 0x45:
    *(undefined2 *)(param_2 + 0x14) = 0x77;
    *(undefined4 *)(param_2 + 0x1a) = 0x760078;
    *(undefined2 *)(param_2 + 0x18) = 0x79;
    local_14 = 6.0;
    local_10 = 3.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = 2.0;
    local_c = -10.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 7.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -4.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3f333333;
    goto LAB_0040be16;
  case 0x46:
    *(undefined4 *)(param_2 + 0x1a) = 0x7a007b;
    *(undefined2 *)(param_2 + 0x18) = 0x7c;
    local_14 = 6.0;
    local_10 = 3.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = 2.0;
    local_c = -8.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 7.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
LAB_0040be16:
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 2.6999998;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = -45.0;
    local_10 = 45.0;
    local_c = -45.0;
LAB_0040b97d:
    pvVar8 = (void *)(param_2 + 0x4c);
    goto LAB_0040b980;
  case 0x47:
    *(undefined4 *)(param_2 + 0x1a) = 0x7d007e;
    goto LAB_0040bef4;
  case 0x48:
    *(undefined4 *)(param_2 + 0x1a) = 0x7f0080;
LAB_0040bef4:
    local_14 = 3.0;
    local_10 = 0.0;
    local_c = -12.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_c = 1.0;
    pvVar8 = (void *)(param_2 + 100);
LAB_0040bf43:
    local_10 = 0.0;
    local_14 = 0.0;
    FUN_00401060(pvVar8,&local_14);
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 2.6999998;
    goto LAB_0040bf6f;
  case 0x49:
    *(undefined4 *)(param_2 + 0x1a) = 0x810082;
    local_14 = 3.0;
    local_10 = 0.0;
    local_c = -11.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_c = -12.0;
    pvVar8 = (void *)(param_2 + 0x70);
    goto LAB_0040bf43;
  case 0x4a:
    *(undefined2 *)(param_2 + 0x14) = 0x1a3;
    *(undefined4 *)(param_2 + 0x1a) = 0x1a201a4;
    *(undefined2 *)(param_2 + 0x18) = 0x1a4;
    *(undefined2 *)(param_2 + 0x1e) = 0x1a5;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 8.5;
    local_c = 1.5;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.6;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 4.0;
    local_10 = 1.0;
    local_c = -3.7;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 4.0;
    local_10 = -3.0;
    local_c = -3.7;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f3ae148;
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    local_14 = 0.0;
    local_10 = -8.5;
    local_c = -2.9;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc2a00000;
    goto LAB_0040ecea;
  case 0x4b:
    *(undefined2 *)(param_2 + 0x14) = 0x1a7;
    *(undefined4 *)(param_2 + 0x1a) = 0x1a601a8;
    *(undefined2 *)(param_2 + 0x18) = 0x1a8;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 17.5;
    local_c = 2.5;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = -9.0;
    local_c = 2.6;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 6.0;
    local_10 = 9.0;
    local_c = -1.7;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 6.0;
    local_10 = -9.0;
    local_c = -1.7;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x40000000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3fcccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3fcccccd;
    goto LAB_0040ecea;
  case 0x4c:
    *(undefined2 *)(param_2 + 0x14) = 0xa0;
    *(undefined4 *)(param_2 + 0x1a) = 0xa200a1;
    uVar1 = 0xa3;
    goto LAB_0040b9b4;
  case 0x4d:
    *(undefined2 *)(param_2 + 0x14) = 0xa4;
    *(undefined4 *)(param_2 + 0x1a) = 0xa600a5;
    uVar1 = 0xa7;
    goto LAB_0040b9b4;
  case 0x4e:
    *(undefined2 *)(param_2 + 0x14) = 0xa8;
    *(undefined4 *)(param_2 + 0x1a) = 0xaa00a9;
    uVar1 = 0xab;
    goto LAB_0040b9b4;
  case 0x4f:
    *(undefined2 *)(param_2 + 0x14) = 0xac;
    *(undefined4 *)(param_2 + 0x1a) = 0xae00ad;
    uVar1 = 0xaf;
LAB_0040b9b4:
    *(undefined2 *)(param_2 + 0x18) = uVar1;
    local_14 = 6.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    break;
  case 0x50:
    *(undefined2 *)(param_2 + 0x14) = 0xb0;
    *(undefined4 *)(param_2 + 0x1a) = 0xb200b1;
    *(undefined2 *)(param_2 + 0x18) = 0xb3;
    break;
  case 0x51:
    *(undefined2 *)(param_2 + 0x14) = 0xbe;
    *(undefined4 *)(param_2 + 0x1a) = 0xc000bf;
    *(undefined2 *)(param_2 + 0x18) = 0xc1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = 1.8;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -10.8;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * 1.5;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) * 1.5;
    fVar11 = *(float *)(param_2 + 0x10) * 1.5;
    goto LAB_0040af2f;
  case 0x52:
    *(undefined2 *)(param_2 + 0x14) = 0xc2;
    *(undefined4 *)(param_2 + 0x1a) = 0xc400c3;
    *(undefined2 *)(param_2 + 0x18) = 0xc5;
    *(undefined2 *)(param_2 + 0x20) = 0xc6;
    *(undefined4 *)(param_2 + 0x34) = 0x3f266666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x30) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x38) = 0x3f666666;
    local_14 = 7.0;
    local_10 = 0.0;
    local_c = 1.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 4.5;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 3.0;
    local_10 = 1.0;
    local_c = -7.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.2;
    local_10 = 3.2;
    local_c = 5.8;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    break;
  case 0x53:
    iVar4 = rand();
    sVar3 = 0xb4;
    sVar9 = (short)(iVar4 % 3) + 0xb4;
    goto LAB_0040ba5d;
  case 0x54:
    iVar4 = rand();
    sVar3 = 0xb7;
    sVar9 = (short)(iVar4 % 3) + 0xb7;
LAB_0040ba5d:
    *(short *)(param_2 + 0x14) = sVar9;
    *(undefined4 *)(param_2 + 0x1a) = 0xbb00ba;
    local_10 = 0.8;
    local_c = 6.0;
    pvVar8 = (void *)(param_2 + 0x70);
    *(ushort *)(param_2 + 0x18) = (*(short *)(param_2 + 0x14) != sVar3) + 0xbc;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
LAB_0040ba92:
    local_14 = 0.0;
    FUN_00401060(pvVar8,&local_14);
    break;
  case 0x55:
    *(undefined4 *)(param_2 + 0x14) = 0xc700c8;
    *(undefined4 *)(param_2 + 0x1a) = 0xca00c9;
    *(undefined2 *)(param_2 + 0x18) = 0xcb;
    local_14 = 8.0;
    local_10 = 5.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x4c) = 0xc2b40000;
    *(undefined4 *)(param_2 + 0x50) = 0x41f00000;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x428;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x56:
    *(undefined4 *)(param_2 + 0x1a) = 0x9e009f;
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -5.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x10;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x57:
    *(undefined2 *)(param_2 + 0x14) = 0x84;
    *(undefined4 *)(param_2 + 0x1a) = 0x830085;
    *(undefined2 *)(param_2 + 0x18) = 0x86;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    goto LAB_0040acc0;
  case 0x58:
    *(undefined2 *)(param_2 + 0x14) = 0x88;
    *(undefined4 *)(param_2 + 0x1a) = 0x870089;
    *(undefined2 *)(param_2 + 0x18) = 0x8a;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -5.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    goto LAB_0040c33c;
  case 0x59:
    *(undefined2 *)(param_2 + 0x14) = 0x8c;
    *(undefined4 *)(param_2 + 0x1a) = 0x8b008d;
    *(undefined2 *)(param_2 + 0x18) = 0x8e;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -5.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
LAB_0040c33c:
    fVar11 = 1.1;
    goto LAB_0040c344;
  case 0x5a:
    *(undefined2 *)(param_2 + 0x14) = 0x90;
    *(undefined4 *)(param_2 + 0x1a) = 0x8f0091;
    *(undefined2 *)(param_2 + 0x18) = 0x92;
    local_14 = 7.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = -5.0;
    local_c = -5.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    fVar11 = 0.7;
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
    goto LAB_0040c344;
  case 0x5b:
    *(undefined2 *)(param_2 + 0x14) = 0x94;
    *(undefined4 *)(param_2 + 0x1a) = 0x930095;
    *(undefined2 *)(param_2 + 0x18) = 0x96;
    local_14 = 7.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = -5.0;
    local_c = -5.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    fVar11 = 0.9;
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
LAB_0040c344:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * fVar11;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) * fVar11;
    fVar11 = *(float *)(param_2 + 0x10) * fVar11;
    goto LAB_0040aced;
  case 0x5c:
    *(undefined2 *)(param_2 + 0x14) = 0x97;
    *(undefined2 *)(param_2 + 0x22) = 0x99;
    *(undefined2 *)(param_2 + 0x1a) = 0x98;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 0.0;
    local_c = -11.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x48) = 0xc1200000;
    *(undefined4 *)(param_2 + 0x5c) = 0x42a00000;
    local_14 = 3.0;
    local_10 = -5.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0xa0),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x2a;
    goto LAB_0040acc0;
  case 0x5d:
    *(undefined2 *)(param_2 + 0x14) = 0xcd;
    *(undefined4 *)(param_2 + 0x1a) = 0xcc00ce;
    *(undefined2 *)(param_2 + 0x18) = 0xcf;
    local_14 = 8.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    local_14 = -60.0;
    local_10 = -45.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x4c),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
LAB_0040acc0:
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) / 1.2;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) / 1.2;
    fVar11 = *(float *)(param_2 + 0x10) / 1.2;
LAB_0040aced:
    *(float *)(param_2 + 0x10) = fVar11;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x5e:
    *(undefined2 *)(param_2 + 0x14) = 0x877;
    *(undefined4 *)(param_2 + 0x1a) = 0x879087a;
    *(undefined2 *)(param_2 + 0x18) = 0x878;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
    *(undefined4 *)(param_2 + 0x78) = 0x40400000;
    *(undefined4 *)(param_2 + 0x7c) = 0x40a00000;
    *(undefined4 *)(param_2 + 0x80) = 0x40800000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x4c) = 0;
    *(undefined4 *)(param_2 + 0x50) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x54) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f19999a;
    *(undefined4 *)(param_2 + 8) = 0x4019999a;
    *(undefined4 *)(param_2 + 0xc) = 0x4019999a;
    *(undefined4 *)(param_2 + 0x10) = 0x40accccc;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x5f:
    *(undefined2 *)(param_2 + 0x14) = 0xe1;
    *(undefined4 *)(param_2 + 0x1a) = 0xe001b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    break;
  case 0x60:
    *(undefined2 *)(param_2 + 0x14) = 0xe3;
    *(undefined2 *)(param_2 + 0x16) = 0xffff;
    *(undefined4 *)(param_2 + 0x1a) = 0xe200e4;
    *(undefined2 *)(param_2 + 0x18) = 0xe5;
    local_14 = 6.0;
    local_10 = 3.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 0.0;
    local_10 = -90.0;
    local_c = 0.0;
    goto LAB_0040b97d;
  case 0x61:
    *(undefined4 *)(param_2 + 0x14) = 0x87c087b;
    *(undefined4 *)(param_2 + 0x1a) = 0x5b701b0;
    *(undefined2 *)(param_2 + 0x18) = 0x87d;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x402;
    *(undefined2 *)(param_2 + 0x22) = 0x115;
    *(undefined4 *)(param_2 + 0x44) = 0x40000000;
    *(undefined4 *)(param_2 + 0x5c) = 0x42700000;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x62:
    *(undefined2 *)(param_2 + 0x14) = 0x159;
    *(undefined4 *)(param_2 + 0x1a) = 0x158015a;
    *(undefined2 *)(param_2 + 0x18) = 0x15a;
    *(undefined2 *)(param_2 + 0x1e) = 0x15b;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 1.4399999;
    local_10 = 1.4399999;
    local_c = 1.6;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 8.0;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -3.25;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -5.0;
    local_c = -3.25;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = -7.0;
    local_c = -4.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    goto LAB_0040ecea;
  case 99:
    *(undefined2 *)(param_2 + 0x14) = 0x15d;
    *(undefined4 *)(param_2 + 0x1a) = 0x15c015e;
    *(undefined2 *)(param_2 + 0x18) = 0x15e;
    *(undefined4 *)(param_2 + 0x24) = 0x3f266666;
    local_14 = 1.8;
    local_10 = 1.8;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 12.0;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -5.75;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -5.75;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f733333;
    goto LAB_0040ecea;
  case 100:
    *(undefined2 *)(param_2 + 0x14) = 0x160;
    *(undefined4 *)(param_2 + 0x1a) = 0x15f0161;
    *(undefined2 *)(param_2 + 0x18) = 0x161;
    *(undefined4 *)(param_2 + 0x24) = 0x3f266666;
    local_14 = 1.8;
    local_10 = 1.8;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 10.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -6.75;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -6.75;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    goto LAB_0040ecea;
  case 0x65:
    *(undefined2 *)(param_2 + 0x14) = 0x1aa;
    *(undefined4 *)(param_2 + 0x1a) = 0x1a901ab;
    *(undefined2 *)(param_2 + 0x18) = 0x1ab;
    *(undefined2 *)(param_2 + 0x1e) = 0x1ad;
    *(undefined4 *)(param_2 + 0x24) = 0x3f028f5c;
    local_14 = 0.0;
    local_10 = 12.5;
    local_c = 0.5;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3fc00000;
    local_14 = 0.0;
    local_10 = -16.0;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x33;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x66:
    *(undefined2 *)(param_2 + 0x14) = 0xd8;
    *(undefined2 *)(param_2 + 0x1a) = 0xd9;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f400000;
    goto LAB_0040cfec;
  case 0x67:
    *(undefined2 *)(param_2 + 0x14) = 0xda;
    uVar1 = 0xdb;
    goto LAB_0040d017;
  case 0x68:
    *(undefined2 *)(param_2 + 0x14) = 0xdc;
    *(undefined2 *)(param_2 + 0x1a) = 0xdd;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 1.6;
    local_10 = 1.6;
    local_c = 1.6;
    goto LAB_0040cab2;
  case 0x69:
    *(undefined2 *)(param_2 + 0x14) = 0xde;
    uVar1 = 0xdf;
LAB_0040d017:
    *(undefined2 *)(param_2 + 0x1a) = uVar1;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
LAB_0040cfec:
    local_14 = 1.6;
    local_10 = 1.6;
    local_c = 1.6;
    pvVar8 = (void *)(param_2 + 8);
    goto LAB_0040ece1;
  case 0x6a:
    *(undefined2 *)(param_2 + 0x14) = 0xd1;
    *(undefined4 *)(param_2 + 0x1a) = 0xd000d2;
    *(undefined2 *)(param_2 + 0x18) = 0xd3;
    local_14 = 10.0;
    local_10 = 0.0;
    local_c = 8.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 6.0;
    local_10 = 1.0;
    local_c = -5.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 90.0;
    local_10 = 30.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x4c),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f99999a;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.2;
    pvVar8 = (void *)(param_2 + 8);
    goto LAB_0040b980;
  case 0x6b:
    *(undefined2 *)(param_2 + 0x14) = 0xd5;
    *(undefined4 *)(param_2 + 0x1a) = 0xd400d6;
    *(undefined2 *)(param_2 + 0x18) = 0xd7;
    local_14 = 10.0;
    local_10 = 0.0;
    local_c = 8.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 6.0;
    local_10 = 1.0;
    local_c = -5.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 90.0;
    local_10 = 30.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x4c),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f99999a;
    local_14 = 4.8;
    local_10 = 4.8;
    local_c = 7.2000003;
    pvVar8 = (void *)(param_2 + 8);
LAB_0040b980:
    FUN_00401060(pvVar8,&local_14);
LAB_0040b989:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x6c:
    *(undefined2 *)(param_2 + 0x14) = 0x18;
    *(undefined4 *)(param_2 + 0x1a) = 0x19001c;
    *(undefined2 *)(param_2 + 0x18) = 0x1b;
    uVar1 = 0x1a;
    goto LAB_0040b27c;
  case 0x6d:
    *(undefined4 *)(param_2 + 0x14) = 0x1d001e;
    *(undefined4 *)(param_2 + 0x1a) = 0x1f0022;
    *(undefined2 *)(param_2 + 0x18) = 0x21;
    *(undefined2 *)(param_2 + 0x20) = 0x20;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
    *(undefined4 *)(param_2 + 0x78) = 0x40400000;
    *(undefined4 *)(param_2 + 8) = 0x40b33333;
    *(undefined4 *)(param_2 + 0xc) = 0x40b33333;
    *(undefined4 *)(param_2 + 0x10) = 0x41499999;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x420;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x6e:
    *(undefined2 *)(param_2 + 0x14) = 0x23;
    *(undefined4 *)(param_2 + 0x1a) = 0x240027;
    *(undefined2 *)(param_2 + 0x18) = 0x26;
    *(undefined2 *)(param_2 + 0x20) = 0x25;
    *(undefined4 *)(param_2 + 0x40) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f59999a;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
    *(undefined4 *)(param_2 + 0x78) = 0x3f800000;
    *(undefined4 *)(param_2 + 8) = 0x404ccccd;
    *(undefined4 *)(param_2 + 0xc) = 0x404ccccd;
    *(undefined4 *)(param_2 + 0x10) = 0x40e66666;
    break;
  case 0x6f:
    *(undefined2 *)(param_2 + 0x14) = 0x28;
    *(undefined4 *)(param_2 + 0x1a) = 0x29002c;
    *(undefined2 *)(param_2 + 0x18) = 0x2b;
    *(undefined2 *)(param_2 + 0x20) = 0x2a;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    goto LAB_0040b39e;
  case 0x70:
    *(undefined2 *)(param_2 + 0x14) = 0x2d;
    *(undefined4 *)(param_2 + 0x1a) = 0x2e0031;
    *(undefined2 *)(param_2 + 0x18) = 0x30;
    uVar1 = 0x2f;
    goto LAB_0040b3f8;
  case 0x71:
    *(undefined2 *)(param_2 + 0x14) = 0x32;
    *(undefined4 *)(param_2 + 0x1a) = 0x330036;
    *(undefined2 *)(param_2 + 0x18) = 0x35;
    uVar1 = 0x34;
LAB_0040b3f8:
    *(undefined2 *)(param_2 + 0x20) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f1c28f6;
LAB_0040b39e:
    *(undefined4 *)(param_2 + 0x30) = 0x3f4147ae;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40800000;
    goto LAB_0040b2c5;
  case 0x72:
    *(undefined2 *)(param_2 + 0x14) = 0x37;
    *(undefined4 *)(param_2 + 0x1a) = 0x38003b;
    *(undefined2 *)(param_2 + 0x18) = 0x3a;
    uVar1 = 0x39;
LAB_0040b27c:
    *(undefined2 *)(param_2 + 0x20) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
LAB_0040b2c5:
    *(undefined4 *)(param_2 + 0x78) = 0x40400000;
    *(undefined4 *)(param_2 + 8) = 0x40b33333;
    *(undefined4 *)(param_2 + 0xc) = 0x40b33333;
    *(undefined4 *)(param_2 + 0x10) = 0x41499999;
    break;
  case 0x73:
    *(undefined2 *)(param_2 + 0x14) = 0x43;
    *(undefined4 *)(param_2 + 0x1a) = 0x440047;
    *(undefined2 *)(param_2 + 0x18) = 0x46;
    *(undefined2 *)(param_2 + 0x20) = 0x45;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 4.8;
    local_10 = 4.8;
    local_c = 10.799999;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    break;
  case 0x74:
    iVar4 = rand();
    local_14 = ((float)iVar4 * 3.0) / 32767.0 + 7.0;
    local_c = local_14 * 1.12;
    local_10 = local_14;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined2 *)(param_2 + 0x14) = 0x48;
    *(undefined4 *)(param_2 + 0x1a) = 0x49004a;
    *(undefined2 *)(param_2 + 0x18) = 0x4a;
    *(undefined4 *)(param_2 + 0x28) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x24) = 0x3ecccccd;
    local_14 = 0.0;
    local_10 = 8.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.0;
    local_10 = -4.0;
    local_c = -3.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f000000;
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -4.1;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 2.9;
    goto LAB_0040eccd;
  case 0x75:
    *(undefined2 *)(param_2 + 0x14) = 0x117;
    *(undefined2 *)(param_2 + 0x1c) = 0x116;
    *(undefined2 *)(param_2 + 0x18) = 0x118;
    *(undefined2 *)(param_2 + 0x1a) = 0xffff;
    *(undefined2 *)(param_2 + 0x20) = 0x119;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 6.0;
    local_10 = 5.0;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 11.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3ecccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f400000;
    local_14 = 0.0;
    local_10 = -90.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x4c),&local_14);
    local_14 = 6.4;
    local_10 = 6.4;
    local_c = 14.4;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    break;
  case 0x76:
    *(undefined2 *)(param_2 + 0x14) = 0x86a;
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    *(short *)(param_2 + 0x1c) = (short)uVar7 + 0x86b;
    *(undefined4 *)(param_2 + 0x18) = 0x86e086d;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    local_14 = 8.0;
    local_10 = 0.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 8.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3fc00000;
    local_14 = 3.0;
    local_10 = 1.0;
    local_c = -9.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 4.0;
    local_10 = 4.0;
    local_c = 10.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x2c;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x77:
    local_14 = 9.0;
    local_10 = 9.0;
    local_c = 10.08;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    iVar4 = rand();
    *(short *)(param_2 + 0x14) = (short)(iVar4 % 5) + 0x861;
    iVar4 = rand();
    *(short *)(param_2 + 0x1c) = (short)(iVar4 % 9) + 0x855;
    iVar4 = rand();
    sVar3 = (short)(iVar4 % 3) + 0x85e;
    *(short *)(param_2 + 0x18) = sVar3;
    *(short *)(param_2 + 0x1a) = sVar3;
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    *(short *)(param_2 + 0x1e) = (short)uVar7 + 0x866;
    *(undefined4 *)(param_2 + 0x3c) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x28) = 0x3f333333;
    iVar4 = rand();
    local_14 = 0.0;
    local_10 = 8.0;
    *(float *)(param_2 + 0x24) = ((float)iVar4 * 0.1) / 32767.0 + 0.4;
    iVar4 = rand();
    local_c = ((float)iVar4 * 0.5) / 32767.0 - 1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.0;
    local_10 = -4.0;
    local_c = -3.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f000000;
    iVar4 = rand();
    local_14 = (float)iVar4 / 32767.0 + 3.0;
    local_10 = 3.0;
    local_c = -4.1;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    iVar4 = rand();
    local_14 = (float)iVar4 / 32767.0 + 3.0;
LAB_0040eccd:
    pvVar8 = (void *)(param_2 + 0x88);
    local_c = -4.1;
    local_10 = -3.0;
LAB_0040ece1:
    FUN_00401060(pvVar8,&local_14);
LAB_0040ecea:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x31;
switchD_0040a9e2_default:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x78:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x827;
    goto LAB_0040e601;
  case 0x79:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x828;
    goto LAB_0040e601;
  case 0x7a:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x82a;
    goto LAB_0040e601;
  case 0x7b:
    local_14 = 0.5;
    local_10 = 0.5;
    local_c = 1.5;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x86f;
    goto LAB_0040e601;
  case 0x7c:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    sVar3 = 0x82e - (ushort)(uVar7 != 0);
    local_c = 2.0;
    goto LAB_0040e608;
  case 0x7d:
    local_14 = 0.5;
    local_10 = 0.5;
    local_c = 1.7;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined2 *)(param_2 + 0x1c) = 0x829;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3fc00000;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x7e:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x82f;
    local_c = 2.0;
    goto LAB_0040e608;
  case 0x7f:
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x830;
    goto LAB_0040e601;
  case 0x80:
    local_14 = 1.5;
    local_10 = 1.5;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x906;
    goto LAB_0040e601;
  case 0x81:
    *(undefined2 *)(param_2 + 0x1c) = 0x832;
    local_c = -4.0;
    goto LAB_0040e60c;
  case 0x82:
    *(undefined2 *)(param_2 + 0x1c) = 0x833;
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = 12.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_c = -4.0;
    goto LAB_0040e60c;
  case 0x83:
    uVar1 = 0x834;
    goto LAB_0040e918;
  case 0x84:
    uVar1 = 0x835;
    goto LAB_0040e918;
  case 0x85:
    uVar1 = 0x836;
    goto LAB_0040e918;
  case 0x86:
    uVar1 = 0x837;
    goto LAB_0040e918;
  case 0x87:
    uVar1 = 0x838;
    goto LAB_0040e918;
  case 0x88:
    uVar1 = 0x839;
    goto LAB_0040e918;
  case 0x89:
    uVar1 = 0x83a;
    goto LAB_0040e918;
  case 0x8a:
    uVar1 = 0x83b;
    goto LAB_0040e918;
  case 0x8b:
    uVar1 = 0x83c;
LAB_0040e918:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_c = -4.0;
LAB_0040e60c:
    local_14 = 0.0;
    local_10 = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x8c:
    *(undefined2 *)(param_2 + 0x1c) = 0x83d;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x40000000;
    break;
  case 0x8d:
    uVar1 = 0x83e;
    local_c = 2.0;
    goto LAB_0040e9e4;
  case 0x8e:
    uVar1 = 0x83f;
    local_c = 2.5;
LAB_0040e9e4:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_10 = 1.5;
    local_14 = 1.5;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_10 = 0.0;
    local_c = 0.0;
    pvVar8 = (void *)(param_2 + 100);
    goto LAB_0040ba92;
  case 0x8f:
    local_14 = 1.5;
    local_10 = 1.5;
    local_c = 1.25;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    sVar3 = (short)uVar7 + 0x841;
LAB_0040e601:
    local_c = 0.0;
LAB_0040e608:
    *(short *)(param_2 + 0x1c) = sVar3;
    goto LAB_0040e60c;
  case 0x90:
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.8;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined2 *)(param_2 + 0x1c) = 0x9f2;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f4ccccd;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x91:
    uVar1 = 0x96a;
    goto LAB_0040cbe1;
  case 0x92:
    uVar1 = 0x96b;
LAB_0040cbe1:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    iVar4 = rand();
    local_14 = (((float)iVar4 * 0.5) / 32767.0 + 1.2) * 0.8;
    local_10 = local_14;
    local_c = local_14;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    goto LAB_0040cc55;
  case 0x93:
    *(undefined2 *)(param_2 + 0x1c) = 0x972;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    goto LAB_0040cc55;
  case 0x94:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 3) + 0x53f;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 3) + 0x542;
    *(undefined2 *)(param_2 + 0x1c) = 0x545;
    sVar3 = 0x546;
    goto LAB_0040aaa7;
  case 0x95:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 3) + 0x547;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 3) + 0x54a;
    *(undefined2 *)(param_2 + 0x1c) = 0x54d;
    sVar3 = 0x546;
LAB_0040aaa7:
    *(short *)(param_2 + 0x18) = sVar3;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x96:
    uVar1 = 0x96c;
    goto LAB_0040cc7e;
  case 0x97:
    *(undefined2 *)(param_2 + 0x14) = 0xf3;
    *(undefined2 *)(param_2 + 0x22) = 0xf4;
    *(undefined2 *)(param_2 + 0x1a) = 0xf5;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x44) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.875;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 6.5;
    local_10 = 3.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0xa0),&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 0.0;
    pvVar8 = (void *)(param_2 + 0x70);
    goto LAB_0040bf72;
  case 0x98:
    *(undefined4 *)(param_2 + 0x14) = 0x96e096d;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    uVar2 = 0x531;
    goto LAB_0040cc5a;
  case 0x99:
    uVar1 = 0x96f;
    goto LAB_0040cc7e;
  case 0x9a:
    uVar1 = 0x970;
    goto LAB_0040cc7e;
  case 0x9b:
    uVar1 = 0x971;
LAB_0040cc7e:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
LAB_0040cc55:
    uVar2 = 0x131;
LAB_0040cc5a:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | uVar2;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  default:
    goto switchD_0040a9e2_default;
  }
  *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0040efc0 @ 0040efc0  kind=gamemisc  attributed-by=caller-vote  size=76 */

void __cdecl FUN_0040efc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 1;
  *param_3 = 1;
  switch(param_1) {
  case 0x15:
  case 0x1c:
  case 0x2a:
  case 0x32:
  case 0x37:
  case 0x3f:
  case 0x45:
  case 0x46:
  case 0x57:
  case 0x58:
    *param_2 = 1;
    *param_3 = 3;
    break;
  case 0x16:
  case 0x23:
  case 0x24:
  case 0x36:
  case 0x38:
  case 0x3c:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x62:
  case 99:
  case 100:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x9a:
    *param_2 = 1;
    *param_3 = 5;
    return;
  }
  return;
}


/* FUN_0040f0a0 @ 0040f0a0  kind=gamemisc  attributed-by=caller-vote  size=192 */

void __cdecl FUN_0040f0a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 1;
  *param_3 = 1;
  switch(param_1) {
  case 0x11:
  case 0x31:
  case 0x67:
  case 0x71:
  case 0x72:
  case 0x9a:
    *param_2 = 0x2f;
    *param_3 = 0x51;
    return;
  default:
    *param_2 = 2;
    *param_3 = 4;
    return;
  case 0x13:
  case 0x14:
  case 0x19:
  case 0x1a:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x3c:
  case 0x3f:
  case 0x43:
  case 0x45:
  case 0x46:
    *param_2 = 3;
    *param_3 = 6;
    return;
  case 0x15:
  case 0x2e:
  case 0x2f:
  case 0x32:
  case 0x3a:
  case 0x4b:
  case 0x50:
  case 0x56:
  case 0x59:
  case 0x66:
  case 0x68:
  case 0x96:
    *param_2 = 0x1f;
    *param_3 = 0x2f;
    return;
  case 0x1c:
  case 0x3d:
  case 0x5a:
  case 0x9b:
    *param_2 = 0xe;
    *param_3 = 0x15;
    return;
  case 0x24:
  case 0x36:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x48:
  case 0x49:
  case 0x5b:
  case 99:
  case 0x98:
  case 0x99:
    *param_2 = 0x15;
    *param_3 = 0x1f;
    return;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x35:
  case 0x3b:
  case 0x58:
  case 0x69:
  case 0x6a:
  case 0x97:
    *param_2 = 9;
    *param_3 = 0xe;
    return;
  case 0x3e:
  case 0x52:
  case 0x55:
  case 0x61:
  case 0x6e:
  case 0x70:
    *param_2 = 0xb4;
    *param_3 = 0x4e0d;
    return;
  case 0x51:
  case 0x53:
  case 0x54:
  case 0x5e:
    *param_2 = 0x51;
    *param_3 = 0xb4;
    return;
  case 0x62:
  case 100:
    *param_2 = 6;
    *param_3 = 9;
    return;
  }
}


/* FUN_00412f80 @ 00412f80  kind=gamemisc  attributed-by=caller-vote  size=122 */

void __fastcall FUN_00412f80(int *param_1)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1[1] - *param_1) + -1;
  while (-1 < iVar5) {
    iVar3 = *param_1;
    uVar4 = (uint)(*(int *)(&DAT_0055aa68 + (iVar5 % 0x2c) * 4) + iVar5) %
            (uint)(param_1[1] - iVar3);
    iVar5 = iVar5 + -1;
    uVar2 = *(undefined1 *)(iVar3 + 1 + iVar5);
    *(undefined1 *)(iVar3 + 1 + iVar5) = *(undefined1 *)(uVar4 + iVar3);
    *(undefined1 *)(uVar4 + iVar3) = uVar2;
  }
  iVar5 = 0;
  if (param_1[1] != *param_1 && -1 < param_1[1] - *param_1) {
    do {
      pcVar1 = (char *)(*param_1 + iVar5);
      iVar5 = iVar5 + 1;
      *pcVar1 = -1 - *pcVar1;
    } while (iVar5 < param_1[1] - *param_1);
  }
  return;
}


/* FUN_00413210 @ 00413210  kind=gamemisc  attributed-by=caller-vote  size=40 */

void __thiscall FUN_00413210(void *this,undefined4 *param_1,int *param_2)

{
  uint *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_2;
  puVar1 = (uint *)(param_2[1] - (int)pvVar2);
  if (pvVar2 == (void *)param_2[1]) {
    pvVar2 = (void *)0x0;
  }
  FUN_00413240(this,param_1,pvVar2,puVar1);
  return;
}


/* FUN_00413240 @ 00413240  kind=gamemisc  attributed-by=caller-vote  size=379 */

uint __thiscall FUN_00413240(void *this,undefined4 *param_1,void *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined4 *puVar4;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *unaff_ESI;
  size_t sVar5;
  undefined *puVar6;
  uint *local_8;
  
  local_8 = this;
  uVar2 = FUN_00468e30(*(int *)((int)this + 4),"SELECT 1 FROM blobs WHERE key = ?",0xffffffff,
                       &local_8,(int *)0x0);
  if (uVar2 != 0) {
    return uVar2 & 0xffffff00;
  }
  puVar4 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar4 = (undefined4 *)*param_1;
  }
  uVar2 = FUN_00469510((int *)local_8,1,puVar4,0xffffffff,(undefined *)0x0);
  if (uVar2 == 0) {
    uVar2 = FUN_00469cb0(local_8);
    FUN_0046aa30((int *)local_8);
    puVar1 = param_3;
    if (uVar2 == 100) {
      while (pbVar3 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                      FUN_00468e30(*(int *)((int)this + 4),"UPDATE blobs SET value=? WHERE key=?",
                                   0xffffffff,&param_3,(int *)0x0),
            pbVar3 == (basic_ostream<char,struct_std::char_traits<char>_> *)0x0) {
        FUN_00469150((int *)param_3,1,param_2,(size_t)puVar1,(undefined *)0x0);
        puVar6 = (undefined *)0x0;
        sVar5 = 0xffffffff;
        puVar4 = FUN_00412c40(param_1);
        FUN_00469510((int *)param_3,2,puVar4,sVar5,puVar6);
        FUN_00469cb0(param_3);
        uVar2 = FUN_0046aa30((int *)param_3);
        if (uVar2 != 0x11) {
          return CONCAT31((int3)(uVar2 >> 8),1);
        }
      }
    }
    else {
      while (puVar6 = (undefined *)
                      FUN_00468e30(*(int *)((int)this + 4),
                                   "INSERT INTO blobs(key, value) VALUES(?, ?)",0xffffffff,&param_3,
                                   (int *)0x0), puVar6 == (undefined *)0x0) {
        sVar5 = 0xffffffff;
        puVar4 = FUN_00412c40(param_1);
        FUN_00469510((int *)param_3,1,puVar4,sVar5,puVar6);
        FUN_00469150((int *)param_3,2,param_2,(size_t)puVar1,(undefined *)0x0);
        FUN_00469cb0(param_3);
        uVar2 = FUN_0046aa30((int *)param_3);
        if (uVar2 != 0x11) {
          return CONCAT31((int3)(uVar2 >> 8),1);
        }
      }
      this_00 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                             "DATABASE WRITE ERROR");
      pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         ((basic_ostream<char,std::char_traits<char>_> *)this_00,unaff_ESI);
    }
    return (uint)pbVar3 & 0xffffff00;
  }
  return uVar2 & 0xffffff00;
}


/* FUN_00413640 @ 00413640  kind=gamemisc  attributed-by=caller-vote  size=139 */

void __cdecl FUN_00413640(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *_ArgList;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bb83;
  local_10 = ExceptionList;
  uVar2 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _ArgList = operator_new(0x18);
  local_8 = 0;
  if (_ArgList == (void *)0x0) {
    _ArgList = (void *)0x0;
  }
  else {
    local_8 = 1;
    puVar1 = (undefined4 *)param_1[4];
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)((int)_ArgList + 0x10) = 0;
    }
    else if (puVar1 == param_1) {
      uVar3 = (**(code **)*puVar1)(_ArgList);
      *(undefined4 *)((int)_ArgList + 0x10) = uVar3;
    }
    else {
      uVar3 = (**(code **)*puVar1)(0,uVar2);
      *(undefined4 *)((int)_ArgList + 0x10) = uVar3;
    }
  }
  _beginthread(FUN_004135d0,0,_ArgList);
  ExceptionList = local_10;
  return;
}


/* FUN_00414470 @ 00414470  kind=gamemisc  attributed-by=caller-vote  size=223 */

uint __thiscall FUN_00414470(void *this,float param_1,char param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  
  uVar1 = *(ushort *)((int)this + 0x10);
  uVar2 = (uint)uVar1;
  if (1 < (short)uVar1) {
    fVar6 = FUN_00407d60((float)(int)(short)uVar1);
    if ((float)fVar6 - param_1 <= 0.0) {
      *(undefined2 *)((int)this + 0x10) = 1;
      return 1;
    }
    fVar6 = FUN_00411090((float)fVar6 - param_1);
    iVar4 = (int)fVar6;
    iVar5 = (int)*(short *)((int)this + 0x10);
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    if (param_2 != '\0') {
      fVar6 = FUN_00407d60((float)iVar5);
      fVar7 = (float)fVar6 + param_1;
      if (0.9999 < fVar7) {
        fVar7 = 0.9999;
      }
      fVar6 = FUN_00411090(fVar7);
      iVar5 = (int)fVar6;
    }
    iVar3 = rand();
    iVar5 = (iVar5 - iVar4) + 1;
    uVar2 = iVar3 / iVar5;
    *(short *)((int)this + 0x10) = (short)(iVar3 % iVar5) + (short)iVar4;
  }
  return uVar2;
}


/* FUN_00416a20 @ 00416a20  kind=gamemisc  attributed-by=caller-vote  size=100 */

undefined4 * __thiscall FUN_00416a20(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  if ((uint)param_1[5] < 0x10) {
    if (param_1[4] + 1 != 0) {
      memmove(this,param_1,param_1[4] + 1);
    }
  }
  else {
    *(undefined4 *)this = *param_1;
    *param_1 = 0;
  }
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return this;
}


/* FUN_00416a90 @ 00416a90  kind=gamemisc  attributed-by=caller-vote  size=106 */

undefined4 * __thiscall FUN_00416a90(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  if ((uint)param_1[5] < 8) {
    if (param_1[4] + 1 != 0) {
      memmove(this,param_1,(param_1[4] + 1) * 2);
    }
  }
  else {
    *(undefined4 *)this = *param_1;
    *param_1 = 0;
  }
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  return this;
}


/* FUN_00416b90 @ 00416b90  kind=gamemisc  attributed-by=caller-vote  size=65 */

void __thiscall FUN_00416b90(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((short)*param_1 == 0) {
    FUN_00417410(this,param_1,0);
    return;
  }
  piVar2 = param_1;
  do {
    iVar1 = *piVar2;
    piVar2 = (int *)((int)piVar2 + 2);
  } while ((short)iVar1 != 0);
  FUN_00417410(this,param_1,(int)piVar2 - ((int)param_1 + 2) >> 1);
  return;
}


/* FUN_00416c50 @ 00416c50  kind=gamemisc  attributed-by=caller-vote  size=85 */

void __thiscall FUN_00416c50(void *this,undefined4 *param_1)

{
  if ((uint)param_1[5] < 0x10) {
    if (param_1[4] + 1 != 0) {
      memmove(this,param_1,param_1[4] + 1);
    }
  }
  else {
    if (this != (void *)0x0) {
      *(undefined4 *)this = *param_1;
    }
    *param_1 = 0;
  }
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return;
}


/* FUN_00416cb0 @ 00416cb0  kind=gamemisc  attributed-by=caller-vote  size=66 */

void __thiscall FUN_00416cb0(void *this,int param_1,size_t param_2,char param_3)

{
  if (param_2 == 1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      this = *(void **)this;
    }
    *(char *)((int)this + param_1) = param_3;
    return;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(void **)this;
  }
  memset((void *)(param_1 + (int)this),(int)param_3,param_2);
  return;
}


/* FUN_00416d60 @ 00416d60  kind=gamemisc  attributed-by=caller-vote  size=256 */

void __thiscall FUN_00416d60(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  void *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054bbf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = param_1 | 7;
  if (uVar3 < 0x7fffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    param_1 = uVar3;
    if ((uVar3 / 3 < uVar2) && (param_1 = uVar2 + uVar1, 0x7ffffffe - uVar2 < uVar1)) {
      param_1 = 0x7ffffffe;
    }
  }
  uVar3 = param_1 + 1;
  local_8 = 0;
  local_18 = (void *)0x0;
  if ((uVar3 != 0) &&
     ((0x7fffffff < uVar3 || (local_18 = operator_new(uVar3 * 2), local_18 == (void *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  if (param_2 != 0) {
    _Src = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      _Src = *(void **)this;
    }
    if (param_2 != 0) {
      memcpy(local_18,_Src,param_2 * 2);
    }
  }
  if (7 < *(uint *)((int)this + 0x14)) {
    operator_delete(*(void **)this);
  }
  *(void **)this = local_18;
  *(uint *)((int)this + 0x14) = param_1;
  *(int *)((int)this + 0x10) = param_2;
  if (7 < param_1) {
    this = local_18;
  }
  *(undefined2 *)((int)this + param_2 * 2) = 0;
  ExceptionList = local_10;
  return;
}


/* FUN_004170c0 @ 004170c0  kind=gamemisc  attributed-by=caller-vote  size=168 */

int * __thiscall FUN_004170c0(void *this,uint param_1,char param_2)

{
  uint uVar1;
  size_t sVar2;
  
  sVar2 = *(size_t *)((int)this + 0x10);
  if (-sVar2 - 1 <= param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (param_1 != 0) {
    uVar1 = sVar2 + param_1;
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      FUN_004016f0(this,uVar1,sVar2);
      if (uVar1 == 0) {
        return this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (0xf < *(uint *)((int)this + 0x14)) {
        **(undefined1 **)this = 0;
        return this;
      }
      *(undefined1 *)this = 0;
      return this;
    }
    FUN_00416cb0(this,*(int *)((int)this + 0x10),param_1,param_2);
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar1) = 0;
      return this;
    }
    *(undefined1 *)((int)this + uVar1) = 0;
  }
  return this;
}


/* FUN_004172f0 @ 004172f0  kind=gamemisc  attributed-by=caller-vote  size=273 */

int * __thiscall FUN_004172f0(void *this,int *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar2 = param_1[4] - param_2;
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  if (this == param_1) {
    uVar2 = uVar2 + param_2;
    if (*(uint *)((int)this + 0x10) < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::_Xout_of_range("invalid string position");
    }
    *(uint *)((int)this + 0x10) = uVar2;
    pvVar1 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar1 = *(void **)this;
    }
    *(undefined2 *)((int)pvVar1 + uVar2 * 2) = 0;
    FUN_00417d50(this,0,param_2);
    return this;
  }
  if (0x7ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar2) {
    FUN_00416d60(this,uVar2,*(int *)((int)this + 0x10));
    if (uVar2 == 0) {
      return this;
    }
  }
  else if (uVar2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (7 < *(uint *)((int)this + 0x14)) {
      **(undefined2 **)this = 0;
      return this;
    }
    *(undefined2 *)this = 0;
    return this;
  }
  if (7 < (uint)param_1[5]) {
    param_1 = (int *)*param_1;
  }
  pvVar1 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(void **)this;
  }
  if (uVar2 != 0) {
    memcpy(pvVar1,(void *)((int)param_1 + param_2 * 2),uVar2 * 2);
  }
  *(uint *)((int)this + 0x10) = uVar2;
  if (*(uint *)((int)this + 0x14) < 8) {
    *(undefined2 *)((int)this + uVar2 * 2) = 0;
    return this;
  }
  *(undefined2 *)(*(int *)this + uVar2 * 2) = 0;
  return this;
}


/* FUN_00417410 @ 00417410  kind=gamemisc  attributed-by=caller-vote  size=246 */

int * __thiscall FUN_00417410(void *this,int *param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(uint *)((int)this + 0x14);
    piVar3 = this;
    if (7 < uVar1) {
      piVar3 = *(int **)this;
    }
    if (piVar3 <= param_1) {
      pvVar2 = this;
      if (7 < uVar1) {
        pvVar2 = *(void **)this;
      }
      if (param_1 < (int *)((int)pvVar2 + *(int *)((int)this + 0x10) * 2)) {
        pvVar2 = this;
        if (7 < uVar1) {
          pvVar2 = *(void **)this;
        }
        piVar3 = FUN_004172f0(this,this,(int)param_1 - (int)pvVar2 >> 1,param_2);
        return piVar3;
      }
    }
  }
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    FUN_00416d60(this,param_2,*(int *)((int)this + 0x10));
    if (param_2 == 0) {
      return this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (7 < *(uint *)((int)this + 0x14)) {
      **(undefined2 **)this = 0;
      return this;
    }
    *(undefined2 *)this = 0;
    return this;
  }
  pvVar2 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(void **)this;
  }
  if (param_2 != 0) {
    memcpy(pvVar2,param_1,param_2 * 2);
  }
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 8) {
    *(undefined2 *)((int)this + param_2 * 2) = 0;
    return this;
  }
  *(undefined2 *)(*(int *)this + param_2 * 2) = 0;
  return this;
}


/* FUN_00417d50 @ 00417d50  kind=gamemisc  attributed-by=caller-vote  size=165 */

int * __thiscall FUN_00417d50(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  if (param_2 < uVar1 - param_1) {
    if (param_2 != 0) {
      pvVar2 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
        pvVar2 = *(void **)this;
      }
      iVar3 = uVar1 - param_2;
      pvVar2 = (void *)((int)pvVar2 + param_1 * 2);
      if (iVar3 - param_1 != 0) {
        memmove(pvVar2,(void *)((int)pvVar2 + param_2 * 2),(iVar3 - param_1) * 2);
      }
      *(int *)((int)this + 0x10) = iVar3;
      if (7 < *(uint *)((int)this + 0x14)) {
        *(undefined2 *)(*(int *)this + iVar3 * 2) = 0;
        return this;
      }
      *(undefined2 *)((int)this + iVar3 * 2) = 0;
    }
    return this;
  }
  *(uint *)((int)this + 0x10) = param_1;
  if (*(uint *)((int)this + 0x14) < 8) {
    *(undefined2 *)((int)this + param_1 * 2) = 0;
    return this;
  }
  *(undefined2 *)(*(int *)this + param_1 * 2) = 0;
  return this;
}


/* FUN_00419ef0 @ 00419ef0  kind=gamemisc  attributed-by=caller-vote  size=132 */

uint __thiscall FUN_00419ef0(void *this,uint param_1,uint param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  ushort *puVar2;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = *(uint *)((int)this + 0x10) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(void **)this;
  }
  uVar1 = param_4;
  if (param_2 < param_4) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    puVar2 = (ushort *)((int)this + param_1 * 2);
    do {
      if (*puVar2 != *param_3) {
        uVar1 = (-(uint)(*puVar2 < *param_3) & 0xfffffffe) + 1;
        goto LAB_00419f46;
      }
      puVar2 = puVar2 + 1;
      param_3 = param_3 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  uVar1 = 0;
LAB_00419f46:
  if (uVar1 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(param_2 != param_4);
  }
  return uVar1;
}


/* FUN_0041ae40 @ 0041ae40  kind=gamemisc  attributed-by=caller-vote  size=43 */

bool FUN_0041ae40(void *param_1,ushort *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_2 + 8);
  if (7 < *(uint *)(param_2 + 10)) {
    param_2 = *(ushort **)param_2;
  }
  uVar2 = FUN_00419ef0(param_1,0,*(uint *)((int)param_1 + 0x10),param_2,*puVar1);
  return (int)uVar2 < 0;
}


/* FUN_0041c9e0 @ 0041c9e0  kind=gamemisc  attributed-by=caller-vote  size=213 */

int __thiscall FUN_0041c9e0(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((((int)param_1 < 0) || ((int)param_2 < 0)) || (0x1fffff < (int)param_1)) ||
     (0x1fffff < (int)param_2)) {
    return 0;
  }
  if (param_3 == 0) {
    param_3 = FUN_00406290(this,(int)(param_1 + ((int)param_1 >> 0x1f & 0x1fU)) >> 5,
                           (int)(param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5);
  }
  else {
    iVar1 = *(int *)(param_3 + 0x60) * 0x100;
    iVar1 = (int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3;
    if ((int)param_1 < iVar1) {
      return 0;
    }
    iVar2 = *(int *)(param_3 + 100) * 0x100;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    if ((int)param_2 < iVar2) {
      return 0;
    }
    if (iVar1 + 0x20 <= (int)param_1) {
      return 0;
    }
    if (iVar2 + 0x20 <= (int)param_2) {
      return 0;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = param_2 & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  uVar4 = param_1 & 0x8000001f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
  }
  return *(int *)(param_3 + 0xac) + (uVar3 * 0x20 + uVar4) * 8;
}


/* FUN_0041d160 @ 0041d160  kind=gamemisc  attributed-by=caller-vote  size=38 */

int __thiscall FUN_0041d160(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(char *)(iVar1 + (int)this) = (char)(int)*(float *)(param_1 + iVar1 * 4);
    iVar1 = iVar2;
  } while (iVar2 < 3);
  return (int)this;
}


/* FUN_0041d190 @ 0041d190  kind=gamemisc  attributed-by=caller-vote  size=174 */

void * __cdecl FUN_0041d190(int param_1,int param_2,void *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = (undefined4 *)(param_1 + 0x120);
    puVar2 = (undefined4 *)((int)param_3 + 0x128);
    iVar1 = param_1 - (int)param_3;
    do {
      FUN_00402a70(param_3,(undefined1 *)(iVar1 + -0x128 + (int)puVar2));
      puVar2[-4] = puVar3[-2];
      puVar2[-3] = puVar3[-1];
      puVar2[-2] = *puVar3;
      puVar2[-1] = puVar3[1];
      *puVar2 = puVar3[2];
      puVar2[1] = puVar3[3];
      puVar2[2] = puVar3[4];
      puVar2[3] = puVar3[5];
      *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar3 + 6);
      puVar2[5] = puVar3[7];
      puVar2[6] = puVar3[8];
      puVar2[7] = puVar3[9];
      puVar2 = puVar2 + 0x52;
      param_3 = (void *)((int)param_3 + 0x148);
      puVar3 = puVar3 + 0x52;
    } while (iVar1 + -0x128 + (int)puVar2 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0041d270 @ 0041d270  kind=gamemisc  attributed-by=caller-vote  size=197 */

undefined4 __cdecl FUN_0041d270(void *param_1,void *param_2,char *param_3)

{
  float *pfVar1;
  float fVar2;
  uint3 uVar3;
  uint in_EAX;
  undefined2 uVar4;
  uint *puVar5;
  int iVar6;
  
  while( true ) {
    if (param_1 == param_2) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
    in_EAX = FUN_004078f0(param_1,param_3);
    if ((char)in_EAX == '\0') break;
    iVar6 = 0;
    puVar5 = (uint *)(param_3 + 0x118);
    do {
      in_EAX = *(uint *)(((int)param_1 - (int)param_3) + (int)puVar5);
      if ((in_EAX != *puVar5) ||
         (in_EAX = *(uint *)(((int)param_1 - (int)param_3) + 4 + (int)puVar5), in_EAX != puVar5[1]))
      goto LAB_0041d32e;
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar6 < 3);
    fVar2 = *(float *)((int)param_1 + 0x130);
    pfVar1 = (float *)(param_3 + 0x130);
    uVar4 = (undefined2)(in_EAX >> 0x10);
    in_EAX = (uint)CONCAT21(uVar4,(fVar2 == *pfVar1) << 6 | (NAN(fVar2) || NAN(*pfVar1)) << 2 | 2U |
                                  fVar2 < *pfVar1) << 8;
    if (fVar2 != *pfVar1) break;
    fVar2 = *(float *)((int)param_1 + 0x134);
    pfVar1 = (float *)(param_3 + 0x134);
    uVar3 = CONCAT21(uVar4,(fVar2 == *pfVar1) << 6 | (NAN(fVar2) || NAN(*pfVar1)) << 2 | 2U |
                           fVar2 < *pfVar1);
    in_EAX = (uint)uVar3 << 8;
    if ((((fVar2 != *pfVar1) ||
         (in_EAX = CONCAT31(uVar3,*(char *)((int)param_1 + 0x138)),
         *(char *)((int)param_1 + 0x138) != param_3[0x138])) ||
        (in_EAX = *(uint *)((int)param_1 + 0x13c), in_EAX != *(uint *)(param_3 + 0x13c))) ||
       (in_EAX = *(uint *)((int)param_1 + 0x140), in_EAX != *(uint *)(param_3 + 0x140))) break;
    param_1 = (void *)((int)param_1 + 0x148);
    param_3 = param_3 + 0x148;
  }
LAB_0041d32e:
  return in_EAX & 0xffffff00;
}


/* FUN_0041d680 @ 0041d680  kind=gamemisc  attributed-by=caller-vote  size=61 */

void * __cdecl FUN_0041d680(undefined1 *param_1,undefined1 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_0041d820(param_3,param_1);
    }
    param_1 = param_1 + 0x148;
    param_3 = (void *)((int)param_3 + 0x148);
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0041d6c0 @ 0041d6c0  kind=gamemisc  attributed-by=caller-vote  size=96 */

void __cdecl FUN_0041d6c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = puVar2[-2];
        param_3[1] = puVar2[-1];
        param_3[2] = *puVar2;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
      }
      param_3 = param_3 + 3;
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 3;
    } while (puVar1 != param_2);
  }
  return;
}


/* FUN_0041d800 @ 0041d800  kind=gamemisc  attributed-by=caller-vote  size=28 */

undefined4 * __thiscall FUN_0041d800(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}


/* FUN_0041dae0 @ 0041dae0  kind=gamemisc  attributed-by=caller-vote  size=355 */

int * __thiscall FUN_0041dae0(void *this,int *param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bf50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    if (*param_1 == param_1[1]) {
      pvVar2 = *(void **)this;
    }
    else {
      uVar3 = (param_1[1] - *param_1) / 0x148;
      uVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x148;
      if (uVar1 < uVar3) {
        if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x148) < uVar3) {
          if (*(void **)this != (void *)0x0) {
            operator_delete(*(void **)this);
          }
          uVar3 = FUN_0041e390(this,(param_1[1] - *param_1) / 0x148);
          if ((char)uVar3 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          pvVar2 = FUN_0041d680((undefined1 *)*param_1,(undefined1 *)param_1[1],*(void **)this);
        }
        else {
          puVar4 = (undefined1 *)(uVar1 * 0x148 + *param_1);
          FUN_0041d190(*param_1,(int)puVar4,*(void **)this);
          pvVar2 = FUN_0041d680(puVar4,(undefined1 *)param_1[1],*(void **)((int)this + 4));
        }
      }
      else {
        FUN_0041d190(*param_1,param_1[1],*(void **)this);
        pvVar2 = (void *)(((param_1[1] - *param_1) / 0x148) * 0x148 + *(int *)this);
      }
    }
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_0041e300 @ 0041e300  kind=gamemisc  attributed-by=caller-vote  size=22 */

void __thiscall FUN_0041e300(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 0x148;
  return;
}


/* FUN_0041e390 @ 0041e390  kind=gamemisc  attributed-by=caller-vote  size=104 */

uint __thiscall FUN_0041e390(void *this,uint param_1)

{
  uint in_EAX;
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (0xc7ce0c < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x148);
  if (pvVar1 != (void *)0x0) {
    *(void **)this = pvVar1;
    *(void **)((int)this + 4) = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x148);
    *(void **)((int)this + 8) = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0041e840 @ 0041e840  kind=gamemisc  attributed-by=caller-vote  size=162 */

void __thiscall FUN_0041e840(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x14)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x14;
  if (0xcccccccU - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  uVar3 = iVar1 + param_1;
  if (0xccccccc - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_0041e450(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_0041e450(this,uVar2);
  return;
}


/* FUN_0041ebc0 @ 0041ebc0  kind=gamemisc  attributed-by=caller-vote  size=385 */

void __thiscall FUN_0041ebc0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 1) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(piVar1[3] + *piVar1);
    piVar1[3] = piVar1[3] + 1;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 1) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(piVar1[3] + *piVar1);
    piVar1[3] = piVar1[3] + 1;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(piVar1[3] + *piVar1);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(piVar1[3] + *piVar1);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 8) {
    piVar1[3] = iVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(piVar1[3] + *piVar1);
  piVar1[3] = piVar1[3] + 8;
  return;
}


/* FUN_0041ed50 @ 0041ed50  kind=gamemisc  attributed-by=caller-vote  size=202 */

void __thiscall FUN_0041ed50(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *param_1 = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    param_1[1] = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 1) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 1;
  }
  piVar1 = *(int **)this;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 8) {
    piVar1[3] = iVar2;
    return;
  }
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(*piVar1 + piVar1[3]);
  piVar1[3] = piVar1[3] + 8;
  return;
}


/* FUN_0041ee20 @ 0041ee20  kind=gamemisc  attributed-by=caller-vote  size=1708 */

void __thiscall FUN_0041ee20(void *this,void *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  void *local_190;
  void *local_18c;
  undefined4 local_188;
  undefined4 *local_184;
  int *local_180;
  int *local_17c;
  void *local_178;
  int local_174;
  undefined2 local_170 [2];
  undefined4 local_16c;
  undefined4 local_168;
  undefined2 local_164;
  undefined1 local_162;
  undefined2 local_160;
  undefined1 local_15c [256];
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c026;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar8 = *(int **)this;
  local_178 = param_1;
  iVar7 = piVar8[1] - *piVar8;
  local_174 = param_2;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(*piVar8 + piVar8[3]);
    piVar8[3] = piVar8[3] + 4;
  }
  piVar8 = *(int **)this;
  iVar7 = piVar8[1] - *piVar8;
  local_180 = (int *)0x0;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    local_180 = *(int **)(*piVar8 + piVar8[3]);
    piVar8[3] = piVar8[3] + 4;
  }
  local_190 = (void *)0x0;
  local_18c = (void *)0x0;
  local_188 = 0;
  local_8 = 0;
  if (0 < (int)local_180) {
    do {
      local_160 = 1;
      local_170[0] = 0;
      local_16c = 0;
      local_168 = 0;
      local_164 = 0;
      local_162 = 0;
      local_5c = 0;
      memset(local_15c,0,0x100);
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      local_3c = 0x3d924925;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = -1;
      if (iVar6 + 0x118 <= iVar7) {
        memcpy(local_170,(void *)(*piVar8 + iVar6),0x118);
        iVar7 = iVar6 + 0x118;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar7 = *piVar8;
      if (piVar8[1] - iVar7 < piVar8[3] + 0x18) {
        piVar8[3] = piVar8[1] - iVar7;
      }
      else {
        iVar6 = piVar8[3];
        local_58 = *(undefined8 *)(iVar7 + iVar6);
        local_50 = *(undefined8 *)(iVar7 + 8 + iVar6);
        local_48 = *(undefined8 *)(iVar7 + 0x10 + iVar6);
        piVar8[3] = piVar8[3] + 0x18;
      }
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_40 = *(undefined4 *)(*piVar8 + iVar6);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_3c = *(undefined4 *)(*piVar8 + iVar6);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 1 <= iVar7) {
        local_38 = *(undefined1 *)(*piVar8 + iVar6);
        iVar7 = iVar6 + 1;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_34 = *(undefined4 *)(iVar6 + *piVar8);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_30 = *(undefined4 *)(iVar6 + *piVar8);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_2c = *(int *)(iVar6 + *piVar8);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      if ((*(int *)((int)local_178 + 0x800160) + -3 <= local_2c) || (local_2c < 0)) {
        FUN_0041f5b0(&local_190,(undefined1 *)local_170);
      }
      local_180 = (int *)((int)local_180 + -1);
    } while (local_180 != (int *)0x0);
    local_180 = (int *)0x0;
  }
  iVar7 = local_174;
  if ((((int)local_18c - (int)local_190) / 0x148 !=
       (*(int *)(local_174 + 0x34) - (int)*(char **)(local_174 + 0x30)) / 0x148) ||
     (uVar4 = FUN_0041d270(local_190,local_18c,*(char **)(local_174 + 0x30)), (char)uVar4 == '\0'))
  {
    *(undefined1 *)(iVar7 + 0x75) = 1;
    FUN_0041dae0((void *)(iVar7 + 0x30),(int *)&local_190);
  }
  piVar8 = *(int **)this;
  iVar7 = piVar8[1] - *piVar8;
  local_17c = (int *)0x0;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    local_17c = *(int **)(piVar8[3] + *piVar8);
    piVar8[3] = piVar8[3] + 4;
  }
  piVar8 = local_17c;
  if (0 < (int)local_17c) {
    do {
      local_180 = piVar8;
      iVar6 = local_174;
      piVar8 = *(int **)this;
      iVar7 = *piVar8;
      local_20 = local_20 & 0xffffffff;
      local_18 = 0;
      if (piVar8[1] - iVar7 < piVar8[3] + 0x14) {
        piVar8[3] = piVar8[1] - iVar7;
      }
      else {
        iVar1 = piVar8[3];
        local_28 = *(undefined8 *)(iVar1 + iVar7);
        local_20 = *(ulonglong *)(iVar1 + 8 + iVar7);
        local_18 = *(int *)(iVar1 + 0x10 + iVar7);
        piVar8[3] = piVar8[3] + 0x14;
      }
      if ((*(int *)((int)local_178 + 0x800160) + -3 <= local_18) || (local_18 < 0)) {
        FUN_0041ff00(local_178,(float)local_28,local_28._4_4_,(int)local_20,
                     (undefined1 *)((int)&local_20 + 4),local_174);
        FUN_0041f4d0((void *)(iVar6 + 0x68),(undefined4 *)&local_28);
      }
      piVar8 = (int *)((int)local_180 + -1);
    } while ((int *)((int)local_180 + -1) != (int *)0x0);
    local_180 = (int *)0x0;
    if (0 < (int)local_17c) {
      local_180 = (int *)0x0;
      puVar5 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar8 = (int *)**(int **)(local_174 + 4);
      iVar7 = local_174;
      local_184 = puVar5;
      local_17c = piVar8;
      if (piVar8 != *(int **)(local_174 + 4)) {
        do {
          if (((*(byte *)(piVar8 + 0x10) & 2) != 0) &&
             (local_17c = piVar8,
             iVar6 = FUN_00406050(local_178,piVar8[4],piVar8[5],piVar8[6],piVar8[7],
                                  piVar8[8] - 0x10000,piVar8[9] - (uint)((uint)piVar8[8] < 0x10000),
                                  local_174), iVar7 = local_174, (*(byte *)(iVar6 + 3) & 0x1f) == 0)
             ) {
            iVar7 = FUN_0052dfb0(puVar5,(undefined4 *)puVar5[1],&local_17c);
            if (local_180 == (int *)0x15555554) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("list<T> too long");
            }
            puVar5[1] = iVar7;
            local_180 = (int *)((int)local_180 + 1);
            **(int **)(iVar7 + 4) = iVar7;
            iVar7 = local_174;
          }
          piVar8 = (int *)*piVar8;
          local_17c = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar7 + 4));
      }
      for (puVar2 = (undefined4 *)*puVar5; puVar2 != puVar5; puVar2 = (undefined4 *)*puVar2) {
        piVar8 = (int *)puVar2[2];
        if (piVar8 != *(int **)(iVar7 + 4)) {
          *(int *)piVar8[1] = *piVar8;
          *(int *)(*piVar8 + 4) = piVar8[1];
          operator_delete(piVar8);
          *(int *)(local_174 + 8) = *(int *)(local_174 + 8) + -1;
          iVar7 = local_174;
        }
      }
      puVar2 = (undefined4 *)*puVar5;
      *puVar5 = puVar5;
      puVar5[1] = puVar5;
      while (puVar2 != puVar5) {
        puVar3 = (undefined4 *)*puVar2;
        operator_delete(puVar2);
        puVar2 = puVar3;
      }
      operator_delete(puVar5);
    }
  }
  piVar8 = *(int **)this;
  iVar7 = piVar8[1] - *piVar8;
  local_17c = (int *)0x0;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    local_17c = *(int **)(piVar8[3] + *piVar8);
    piVar8[3] = piVar8[3] + 4;
  }
  if ((local_17c == (int *)(*(int *)(local_174 + 0x1c) - *(int *)(local_174 + 0x18) >> 2)) &&
     (iVar7 = 0, 0 < (int)local_17c)) {
    do {
      piVar8 = *(int **)this;
      if (piVar8[1] - *piVar8 < piVar8[3] + 4) {
        piVar8[3] = piVar8[1] - *piVar8;
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(local_174 + 0x18) + iVar7 * 4) + 0x38) =
             *(undefined4 *)(piVar8[3] + *piVar8);
        piVar8[3] = piVar8[3] + 4;
      }
      piVar8 = *(int **)this;
      if (piVar8[1] - *piVar8 < piVar8[3] + 4) {
        piVar8[3] = piVar8[1] - *piVar8;
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(local_174 + 0x18) + iVar7 * 4) + 0x3c) =
             *(undefined4 *)(piVar8[3] + *piVar8);
        piVar8[3] = piVar8[3] + 4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)local_17c);
  }
  piVar8 = *(int **)this;
  iVar7 = piVar8[1] - *piVar8;
  local_178 = (void *)0x0;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    local_178 = *(void **)(piVar8[3] + *piVar8);
    piVar8[3] = piVar8[3] + 4;
  }
  if ((local_178 == (void *)((*(int *)(local_174 + 0x10) - *(int *)(local_174 + 0xc)) / 0x188)) &&
     (0 < (int)local_178)) {
    iVar7 = 0;
    do {
      piVar8 = *(int **)this;
      if (piVar8[1] - *piVar8 < piVar8[3] + 1) {
        piVar8[3] = piVar8[1] - *piVar8;
      }
      else {
        *(undefined1 *)(*(int *)(local_174 + 0xc) + 0x30 + iVar7) =
             *(undefined1 *)(piVar8[3] + *piVar8);
        piVar8[3] = piVar8[3] + 1;
      }
      iVar7 = iVar7 + 0x188;
      local_178 = (void *)((int)local_178 + -1);
    } while (local_178 != (void *)0x0);
  }
  if (local_190 != (void *)0x0) {
    operator_delete(local_190);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0041f4d0 @ 0041f4d0  kind=gamemisc  attributed-by=caller-vote  size=216 */

void __thiscall FUN_0041f4d0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041e840(this,1);
    }
    puVar1 = (undefined4 *)(*(int *)this + (((int)param_1 - (int)puVar2) / 0x14) * 0x14);
    puVar2 = *(undefined4 **)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(puVar1 + 3);
      *(undefined1 *)((int)puVar2 + 0xd) = *(undefined1 *)((int)puVar1 + 0xd);
      *(undefined1 *)((int)puVar2 + 0xe) = *(undefined1 *)((int)puVar1 + 0xe);
      *(undefined1 *)((int)puVar2 + 0xf) = *(undefined1 *)((int)puVar1 + 0xf);
      puVar2[4] = puVar1[4];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041e840(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
      *(undefined1 *)((int)puVar1 + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
      *(undefined1 *)((int)puVar1 + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
      *(undefined1 *)((int)puVar1 + 0xf) = *(undefined1 *)((int)param_1 + 0xf);
      puVar1[4] = param_1[4];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
  return;
}


/* FUN_0041f880 @ 0041f880  kind=gamemisc  attributed-by=caller-vote  size=338 */

void __thiscall FUN_0041f880(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(piVar1[3] + *piVar1) = *(undefined4 *)((int)this + 4);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(*piVar1 + piVar1[3]) = *(undefined4 *)(param_1 + 4);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(*piVar1 + piVar1[3]) = *(undefined4 *)(param_1 + 8);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(piVar1[3] + *piVar1) = *(undefined4 *)(param_1 + 0xc);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(piVar1[3] + *piVar1) = *(undefined4 *)(param_1 + 0x10);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 1);
  *(undefined1 *)(*piVar1 + piVar1[3]) = *(undefined1 *)(param_1 + 0x14);
  piVar1[3] = piVar1[3] + 1;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 1);
  *(undefined1 *)(*piVar1 + piVar1[3]) = *(undefined1 *)(param_1 + 0x15);
  piVar1[3] = piVar1[3] + 1;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(piVar1[3] + *piVar1) = *(undefined4 *)(param_1 + 0x18);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(piVar1[3] + *piVar1) = *(undefined4 *)(param_1 + 0x1c);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 8);
  *(undefined8 *)(*piVar1 + piVar1[3]) = *(undefined8 *)(param_1 + 0x20);
  piVar1[3] = piVar1[3] + 8;
  return;
}


/* FUN_0041f9e0 @ 0041f9e0  kind=gamemisc  attributed-by=caller-vote  size=178 */

void __thiscall FUN_0041f9e0(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(piVar1[3] + *piVar1) = *(undefined4 *)((int)this + 4);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(*piVar1 + piVar1[3]) = *param_1;
  piVar1[3] = piVar1[3] + 4;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(piVar1[3] + *piVar1) = param_1[1];
  piVar1[3] = piVar1[3] + 4;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 1);
  *(undefined1 *)(piVar1[3] + *piVar1) = *(undefined1 *)(param_1 + 2);
  piVar1[3] = piVar1[3] + 1;
  piVar1 = *(int **)this;
  FUN_00413180(piVar1,(piVar1[1] - *piVar1) + 8);
  *(undefined8 *)(piVar1[3] + *piVar1) = *(undefined8 *)(param_1 + 3);
  piVar1[3] = piVar1[3] + 8;
  return;
}


/* FUN_0041faa0 @ 0041faa0  kind=gamemisc  attributed-by=caller-vote  size=953 */

void __thiscall FUN_0041faa0(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  size_t _Size;
  void *pvVar8;
  int local_c;
  
  iVar4 = param_1;
  piVar2 = *(int **)this;
  FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
  *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)((int)this + 4);
  piVar2[3] = piVar2[3] + 4;
  if (*(char *)(param_1 + 0x75) == '\0') {
    piVar2 = *(int **)this;
    FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
    *(undefined4 *)(piVar2[3] + *piVar2) = 0;
    piVar2[3] = piVar2[3] + 4;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x34);
    iVar3 = *(int *)(param_1 + 0x30);
    piVar2 = *(int **)this;
    FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
    *(int *)(*piVar2 + piVar2[3]) = (iVar6 - iVar3) / 0x148;
    piVar2[3] = piVar2[3] + 4;
    pvVar8 = *(void **)(param_1 + 0x30);
    if (pvVar8 != *(void **)(param_1 + 0x34)) {
      do {
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 0x118);
        memcpy((void *)(piVar2[3] + *piVar2),pvVar8,0x118);
        piVar2[3] = piVar2[3] + 0x118;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 0x18);
        puVar5 = (undefined8 *)(piVar2[3] + *piVar2);
        *puVar5 = *(undefined8 *)((int)pvVar8 + 0x118);
        puVar5[1] = *(undefined8 *)((int)pvVar8 + 0x120);
        puVar5[2] = *(undefined8 *)((int)pvVar8 + 0x128);
        piVar2[3] = piVar2[3] + 0x18;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(piVar2[3] + *piVar2) = *(undefined4 *)((int)pvVar8 + 0x130);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)((int)pvVar8 + 0x134);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 1);
        *(undefined1 *)(*piVar2 + piVar2[3]) = *(undefined1 *)((int)pvVar8 + 0x138);
        piVar2[3] = piVar2[3] + 1;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(piVar2[3] + *piVar2) = *(undefined4 *)((int)pvVar8 + 0x13c);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(piVar2[3] + *piVar2) = *(undefined4 *)((int)pvVar8 + 0x140);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        puVar1 = (undefined4 *)((int)pvVar8 + 0x144);
        pvVar8 = (void *)((int)pvVar8 + 0x148);
        *(undefined4 *)(*piVar2 + piVar2[3]) = *puVar1;
        piVar2[3] = piVar2[3] + 4;
      } while (pvVar8 != *(void **)(param_1 + 0x34));
    }
  }
  piVar2 = *(int **)this;
  iVar6 = (*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68)) / 0x14;
  FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
  *(int *)(piVar2[3] + *piVar2) = iVar6;
  piVar2[3] = piVar2[3] + 4;
  pvVar8 = *(void **)(param_1 + 0x68);
  iVar7 = *(int *)(param_1 + 0x6c) - (int)pvVar8;
  iVar3 = iVar7 >> 0x1f;
  if (iVar7 / 0x14 + iVar3 != iVar3) {
    _Size = iVar6 * 0x14;
    piVar2 = *(int **)this;
    FUN_00413180(piVar2,(piVar2[1] - *piVar2) + _Size);
    memcpy((void *)(*piVar2 + piVar2[3]),pvVar8,_Size);
    piVar2[3] = piVar2[3] + _Size;
  }
  piVar2 = *(int **)this;
  iVar6 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
  FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
  *(int *)(*piVar2 + piVar2[3]) = iVar6;
  piVar2[3] = piVar2[3] + 4;
  param_1 = 0;
  if (0 < iVar6) {
    do {
      iVar3 = *(int *)(*(int *)(iVar4 + 0x18) + param_1 * 4);
      piVar2 = *(int **)this;
      FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
      *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)(iVar3 + 0x38);
      piVar2[3] = piVar2[3] + 4;
      iVar3 = *(int *)(*(int *)(iVar4 + 0x18) + param_1 * 4);
      piVar2 = *(int **)this;
      FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
      *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)(iVar3 + 0x3c);
      piVar2[3] = piVar2[3] + 4;
      param_1 = param_1 + 1;
    } while (param_1 < iVar6);
  }
  piVar2 = *(int **)this;
  param_1 = (*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) / 0x188;
  FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
  *(int *)(piVar2[3] + *piVar2) = param_1;
  piVar2[3] = piVar2[3] + 4;
  if (0 < param_1) {
    local_c = 0;
    do {
      piVar2 = *(int **)this;
      iVar6 = *(int *)(iVar4 + 0xc);
      FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 1);
      *(undefined1 *)(piVar2[3] + *piVar2) = *(undefined1 *)(iVar6 + local_c + 0x30);
      piVar2[3] = piVar2[3] + 1;
      local_c = local_c + 0x188;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* FUN_004200d0 @ 004200d0  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_004200d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004267f0(param_1,param_2);
  if ((void *)(iVar1 + 8) != (void *)0x0) {
    FUN_004227e0((void *)(iVar1 + 8),param_3);
  }
  return iVar1;
}


/* FUN_00420100 @ 00420100  kind=gamemisc  attributed-by=caller-vote  size=86 */

int FUN_00420100(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00426870(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
    *(undefined1 *)(iVar1 + 0x14) = *(undefined1 *)(param_3 + 3);
    *(undefined1 *)(iVar1 + 0x15) = *(undefined1 *)((int)param_3 + 0xd);
    *(undefined1 *)(iVar1 + 0x16) = *(undefined1 *)((int)param_3 + 0xe);
    *(undefined1 *)(iVar1 + 0x17) = *(undefined1 *)((int)param_3 + 0xf);
    *(undefined4 *)(iVar1 + 0x18) = param_3[4];
  }
  return iVar1;
}


/* FUN_00420160 @ 00420160  kind=gamemisc  attributed-by=caller-vote  size=130 */

int FUN_00420160(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c0a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_004268f0(param_1,param_2);
  local_8 = 1;
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    FUN_00421f20((void *)(iVar1 + 0x10),param_3 + 2);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_004202b0 @ 004202b0  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_004202b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004268b0(param_1,param_2);
  if ((void *)(iVar1 + 8) != (void *)0x0) {
    FUN_00422a00((void *)(iVar1 + 8),param_3);
  }
  return iVar1;
}


/* FUN_004202e0 @ 004202e0  kind=gamemisc  attributed-by=caller-vote  size=130 */

int FUN_004202e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c101;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_004268f0(param_1,param_2);
  local_8 = 1;
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    FUN_004226a0((void *)(iVar1 + 0x10),param_3 + 2);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_00420380 @ 00420380  kind=gamemisc  attributed-by=caller-vote  size=57 */

int FUN_00420380(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00426930(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    FUN_00413710((void *)(iVar1 + 0x10),(undefined1 *)(param_3 + 2));
  }
  return iVar1;
}


/* FUN_00420400 @ 00420400  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_00420400(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00426970(param_1,param_2);
  if ((void *)(iVar1 + 8) != (void *)0x0) {
    FUN_00422c90((void *)(iVar1 + 8),param_3);
  }
  return iVar1;
}


/* FUN_00420430 @ 00420430  kind=gamemisc  attributed-by=caller-vote  size=64 */

int FUN_00420430(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004269b0(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
    FUN_00422da0((void *)(iVar1 + 0x18),param_3 + 4);
  }
  return iVar1;
}


/* FUN_00420470 @ 00420470  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_00420470(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004268b0(param_1,param_2);
  if ((void *)(iVar1 + 8) != (void *)0x0) {
    FUN_00422e10((void *)(iVar1 + 8),param_3);
  }
  return iVar1;
}


/* FUN_004204a0 @ 004204a0  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_004204a0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004269f0(param_1,param_2);
  if ((void *)(iVar1 + 8) != (void *)0x0) {
    FUN_0041d820((void *)(iVar1 + 8),param_3);
  }
  return iVar1;
}


/* FUN_004204d0 @ 004204d0  kind=gamemisc  attributed-by=caller-vote  size=92 */

void __thiscall FUN_004204d0(void *this,undefined1 *param_1,undefined1 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c120;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004218b0(this,(undefined4 *)**(undefined4 **)this,param_1,param_2);
  ExceptionList = local_10;
  return;
}


/* FUN_00420bb0 @ 00420bb0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_00420bb0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c1a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00420080(param_1,(undefined4 *)param_1[1],(undefined8 *)(param_2 + 2));
    if (*(int *)((int)this + 4) == 0x5555554) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00420d50 @ 00420d50  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_00420d50(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c1e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00420160(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0xaaaaaa9) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00420e20 @ 00420e20  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_00420e20(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00420100(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0x9249248) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00420ef0 @ 00420ef0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_00420ef0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c220;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004202b0(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0x3333332) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00420fc0 @ 00420fc0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_00420fc0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004202e0(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0xaaaaaa9) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00421090 @ 00421090  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_00421090(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c260;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00420380(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0xdd67c7) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00421160 @ 00421160  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_00421160(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004203c0(param_1,(undefined4 *)param_1[1],(undefined8 *)(param_2 + 2));
    if (*(int *)((int)this + 4) == 0x7fffffe) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00421230 @ 00421230  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_00421230(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c2a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00420400(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0x3fffffe) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00421300 @ 00421300  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_00421300(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c2c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00420430(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0x2aaaaa9) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00421570 @ 00421570  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_00421570(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c320;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004204a0(param_1,(undefined4 *)param_1[1],(undefined1 *)(param_2 + 2));
    if (*(int *)((int)this + 4) == 0xc30c2f) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00421640 @ 00421640  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_00421640(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c340;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00549300(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0xffffffe) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00421710 @ 00421710  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_00421710(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c360;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004200d0(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0x2222221) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004217e0 @ 004217e0  kind=gamemisc  attributed-by=caller-vote  size=155 */

void __thiscall FUN_004217e0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c380;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00420100(param_1,(undefined4 *)param_1[1],param_2);
    if (*(int *)((int)this + 4) == 0x9249248) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = param_2 + 5;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004218b0 @ 004218b0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void __thiscall FUN_004218b0(void *this,undefined4 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c3a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004204a0(param_1,(undefined4 *)param_1[1],param_2);
    if (*(int *)((int)this + 4) == 0xc30c2f) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = param_2 + 0x148;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00421e30 @ 00421e30  kind=gamemisc  attributed-by=caller-vote  size=20 */

undefined4 * __thiscall FUN_00421e30(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return this;
}


/* FUN_00421f20 @ 00421f20  kind=gamemisc  attributed-by=caller-vote  size=127 */

undefined4 * __thiscall FUN_00421f20(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c3f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_004268f0((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00420c80(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_004226a0 @ 004226a0  kind=gamemisc  attributed-by=caller-vote  size=127 */

undefined4 * __thiscall FUN_004226a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c638;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_004269f0((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00421570(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_00422740 @ 00422740  kind=gamemisc  attributed-by=caller-vote  size=127 */

undefined4 * __thiscall FUN_00422740(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c668;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_00426a30((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00421640(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_004227e0 @ 004227e0  kind=gamemisc  attributed-by=caller-vote  size=174 */

undefined4 * __thiscall FUN_004227e0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  *(undefined1 *)((int)this + 0x5c) = *(undefined1 *)(param_1 + 0x17);
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined1 *)((int)this + 100) = *(undefined1 *)(param_1 + 0x19);
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  return this;
}


/* FUN_00422a00 @ 00422a00  kind=gamemisc  attributed-by=caller-vote  size=134 */

undefined4 * __thiscall FUN_00422a00(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined1 *)((int)this + 0x14) = *(undefined1 *)(param_1 + 5);
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined1 *)((int)this + 0x44) = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)((int)this + 0x45) = *(undefined1 *)((int)param_1 + 0x45);
  *(undefined1 *)((int)this + 0x46) = *(undefined1 *)((int)param_1 + 0x46);
  return this;
}


/* FUN_00422c90 @ 00422c90  kind=gamemisc  attributed-by=caller-vote  size=102 */

undefined4 * __thiscall FUN_00422c90(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)((int)this + 0x25) = *(undefined1 *)((int)param_1 + 0x25);
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  return this;
}


/* FUN_00422da0 @ 00422da0  kind=gamemisc  attributed-by=caller-vote  size=106 */

undefined4 * __thiscall FUN_00422da0(void *this,undefined4 *param_1)

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
  *(undefined1 *)((int)this + 0x30) = *(undefined1 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  return this;
}


/* FUN_00422e10 @ 00422e10  kind=gamemisc  attributed-by=caller-vote  size=112 */

undefined4 * __thiscall FUN_00422e10(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
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
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  return this;
}


/* FUN_00426870 @ 00426870  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_00426870(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1c);
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


/* FUN_004268f0 @ 004268f0  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_004268f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
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


/* FUN_00426930 @ 00426930  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_00426930(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x128);
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


/* FUN_00426970 @ 00426970  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_00426970(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x40);
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


/* FUN_004269b0 @ 004269b0  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_004269b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x60);
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


/* FUN_004269f0 @ 004269f0  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_004269f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x150);
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


/* FUN_00426b80 @ 00426b80  kind=gamemisc  attributed-by=caller-vote  size=155 */

void __thiscall FUN_00426b80(void *this,int *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)this;
  puVar4 = (undefined4 *)puVar7[1];
  cVar1 = *(char *)((int)puVar4 + 0xd);
  puVar3 = puVar7;
  puVar5 = puVar4;
  while (cVar1 == '\0') {
    iVar2 = puVar5[5];
    if (((int)param_2[1] < iVar2) || (((int)param_2[1] <= iVar2 && (*param_2 <= (uint)puVar5[4]))))
    {
      if ((*(char *)((int)puVar7 + 0xd) != '\0') &&
         (((int)param_2[1] <= iVar2 && (((int)param_2[1] < iVar2 || (*param_2 < (uint)puVar5[4])))))
         ) {
        puVar7 = puVar5;
      }
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
      puVar5 = puVar3;
    }
    puVar3 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0xd);
  }
  if (*(char *)((int)puVar7 + 0xd) == '\0') {
    puVar4 = (undefined4 *)*puVar7;
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    do {
      if (((int)puVar4[5] < (int)param_2[1]) ||
         (((int)puVar4[5] <= (int)param_2[1] && ((uint)puVar4[4] <= *param_2)))) {
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
        puVar7 = puVar4;
      }
      puVar4 = puVar5;
    } while (*(char *)((int)puVar5 + 0xd) == '\0');
  }
  *param_1 = (int)puVar3;
  param_1[1] = (int)puVar7;
  return;
}


/* FUN_00426d30 @ 00426d30  kind=gamemisc  attributed-by=caller-vote  size=125 */

void __thiscall FUN_00426d30(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x40000000) {
      _Dst = operator_new(param_1 * 4);
      if (_Dst != (void *)0x0) goto LAB_00426d65;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00426d65:
  memmove(_Dst,*(void **)this,*(int *)((int)this + 4) - (int)*(void **)this & 0xfffffffc);
  pvVar1 = *(void **)this;
  iVar2 = *(int *)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  *(void **)((int)this + 8) = (void *)((int)_Dst + param_1 * 4);
  *(void **)this = _Dst;
  *(void **)((int)this + 4) = (void *)((int)_Dst + (iVar2 - (int)pvVar1 >> 2) * 4);
  return;
}


/* FUN_00426eb0 @ 00426eb0  kind=gamemisc  attributed-by=caller-vote  size=115 */

void __thiscall FUN_00426eb0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 <= (uint)(*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2)) {
    return;
  }
  iVar2 = *(int *)((int)this + 4) - *(int *)this >> 2;
  if (0x3fffffffU - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar3 = iVar2 + param_1;
  uVar1 = *(int *)((int)this + 8) - *(int *)this >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar3;
    }
    FUN_00426d30(this,uVar1);
    return;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < uVar3) {
    uVar1 = uVar3;
  }
  FUN_00426d30(this,uVar1);
  return;
}


/* FUN_004272d0 @ 004272d0  kind=gamemisc  attributed-by=caller-vote  size=3290 */

void __thiscall FUN_004272d0(void *this,undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int *local_130;
  undefined4 local_12c;
  int local_128;
  int *local_124;
  undefined4 local_120;
  void *local_11c;
  int local_118;
  int **local_114;
  int local_110;
  int *local_10c;
  int local_108;
  undefined8 local_104;
  int local_fc;
  undefined4 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_ac;
  uint uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int iStack_70;
  int local_6c;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  uint local_50;
  uint uStack_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float local_28;
  int local_24;
  int local_20;
  int *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_0054c9d9;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_11c = this;
  FUN_004d3df0(*(int *)((int)this + 4));
  local_128 = 0;
  if (0 < (int)(*(int *)((int)this + 0x2c) - *(int *)((int)this + 0x28) & 0xfffffffcU)) {
    do {
      local_110 = local_128 * 4;
      iVar7 = *(int *)(*(int *)((int)this + 0x28) + local_110);
      if (iVar7 != 0) {
        FUN_00420e20((void *)(iVar7 + 0x30),*(undefined4 **)(iVar7 + 0x30),
                     *(undefined4 **)param_1[6],(undefined4 *)param_1[6]);
        FUN_00420ef0((void *)(*(int *)(*(int *)((int)this + 0x28) + local_110) + 0x18),
                     *(undefined4 **)(*(int *)(*(int *)((int)this + 0x28) + local_110) + 0x18),
                     *(undefined4 **)*param_1,(undefined4 *)*param_1);
        iVar5 = local_110;
        iVar7 = *(int *)((int)this + 4);
        FUN_00530600((void *)(iVar7 + 4),&local_108,
                     (uint *)(*(int *)(*(int *)((int)this + 0x28) + local_110) + 0x10));
        if (local_108 == *(int *)(iVar7 + 4)) {
          local_118 = 0;
        }
        else {
          local_118 = *(int *)(local_108 + 0x18);
        }
        piVar9 = *(int **)param_1[4];
        local_10c = piVar9;
        if (piVar9 != (int *)param_1[4]) {
          do {
            local_68 = piVar9[2] - *(uint *)(local_118 + 0x10);
            iStack_64 = (piVar9[3] - *(int *)(local_118 + 0x14)) -
                        (uint)((uint)piVar9[2] < *(uint *)(local_118 + 0x10));
            local_60 = piVar9[4] - *(uint *)(local_118 + 0x18);
            iStack_5c = (piVar9[5] - *(int *)(local_118 + 0x1c)) -
                        (uint)((uint)piVar9[4] < *(uint *)(local_118 + 0x18));
            local_58 = piVar9[6] - *(uint *)(local_118 + 0x20);
            iStack_54 = (piVar9[7] - *(int *)(local_118 + 0x24)) -
                        (uint)((uint)piVar9[6] < *(uint *)(local_118 + 0x20));
            local_3c = (float)CONCAT44(iStack_64,local_68) * 1.5258789e-05;
            local_114 = (int **)(float)CONCAT44(iStack_54,local_58);
            local_38 = (float)CONCAT44(iStack_5c,local_60) * 1.5258789e-05;
            local_34 = (float)local_114 * 1.5258789e-05;
            if (local_38 * local_38 + local_3c * local_3c + local_34 * local_34 < 40000.0) {
              iVar7 = *(int *)(*(int *)((int)local_11c + 0x28) + local_128 * 4);
              puVar10 = *(undefined4 **)(iVar7 + 0x28);
              local_10c = piVar9;
              iVar5 = FUN_00420470(puVar10,(undefined4 *)puVar10[1],piVar9 + 2);
              if (*(int *)(iVar7 + 0x2c) == 0x3333332) goto LAB_00427fb9;
              *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 1;
              puVar10[1] = iVar5;
              **(int **)(iVar5 + 4) = iVar5;
            }
            piVar9 = (int *)*piVar9;
            this = local_11c;
            iVar5 = local_110;
            local_10c = piVar9;
          } while (piVar9 != (int *)param_1[4]);
        }
        piVar9 = *(int **)param_1[2];
        if (piVar9 != (int *)param_1[2]) {
          do {
            local_48 = (float)*(longlong *)(local_118 + 0x10) * 1.5258789e-05;
            local_10c = (int *)(float)*(longlong *)(local_118 + 0x20);
            local_44 = (float)*(longlong *)(local_118 + 0x18) * 1.5258789e-05;
            uVar1 = *(undefined8 *)(piVar9 + 2);
            fStack_2c = (float)((ulonglong)uVar1 >> 0x20);
            fStack_2c = fStack_2c - local_44;
            local_40 = (float)local_10c * 1.5258789e-05;
            local_30 = (float)uVar1;
            local_30 = local_30 - local_48;
            local_28 = (float)piVar9[4] - local_40;
            if (fStack_2c * fStack_2c + local_30 * local_30 + local_28 * local_28 < 40000.0) {
              iVar7 = *(int *)(*(int *)((int)this + 0x28) + iVar5);
              puVar10 = *(undefined4 **)(iVar7 + 0x20);
              iVar5 = FUN_004f3ba0(puVar10,(undefined4 *)puVar10[1],piVar9 + 2);
              if (*(int *)(iVar7 + 0x24) == 0x7fffffe) goto LAB_00427fb9;
              *(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + 1;
              puVar10[1] = iVar5;
              **(int **)(iVar5 + 4) = iVar5;
            }
            piVar9 = (int *)*piVar9;
            this = local_11c;
            iVar5 = local_110;
          } while (piVar9 != (int *)param_1[2]);
        }
        pvVar4 = local_11c;
        FUN_00421710((void *)(*(int *)(*(int *)((int)local_11c + 0x28) + local_110) + 0x38),
                     *(undefined4 **)(*(int *)(*(int *)((int)local_11c + 0x28) + local_110) + 0x38),
                     *(undefined4 **)param_1[8],(undefined4 *)param_1[8]);
        FUN_00420fc0((void *)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x40),
                     *(undefined4 **)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x40),
                     *(undefined4 **)param_1[10],(undefined4 *)param_1[10]);
        FUN_00421300((void *)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x48),
                     *(undefined4 **)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x48),
                     *(undefined4 **)param_1[0xc],(undefined4 *)param_1[0xc]);
        FUN_00420d50((void *)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x50),
                     *(undefined4 **)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x50),
                     *(undefined4 **)param_1[0xe],(undefined4 *)param_1[0xe]);
        FUN_00421090((void *)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x58),
                     *(undefined4 **)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x58),
                     *(undefined4 **)param_1[0x10],(undefined4 *)param_1[0x10]);
        FUN_00421160((void *)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x60),
                     *(undefined4 **)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x60),
                     *(undefined4 **)param_1[0x12],(undefined4 *)param_1[0x12]);
        FUN_00421160((void *)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x68),
                     *(undefined4 **)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x68),
                     *(undefined4 **)param_1[0x14],(undefined4 *)param_1[0x14]);
        FUN_00420bb0((void *)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x70),
                     *(undefined4 **)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x70),
                     *(undefined4 **)param_1[0x16],(undefined4 *)param_1[0x16]);
        FUN_00421230((void *)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x78),
                     *(undefined4 **)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x78),
                     *(undefined4 **)param_1[0x18],(undefined4 *)param_1[0x18]);
        iVar5 = local_110;
        EnterCriticalSection
                  ((LPCRITICAL_SECTION)(*(int *)(*(int *)((int)pvVar4 + 0x28) + local_110) + 0x98));
        FUN_00422740(&local_124,
                     (undefined4 *)(*(int *)(*(int *)((int)pvVar4 + 0x28) + iVar5) + 0x80));
        local_8 = 0;
        FUN_00422740(&local_130,
                     (undefined4 *)(*(int *)(*(int *)((int)pvVar4 + 0x28) + iVar5) + 0x88));
        local_8._0_1_ = 1;
        iVar7 = *(int *)(*(int *)((int)pvVar4 + 0x28) + iVar5);
        piVar9 = *(int **)(iVar7 + 0x80);
        piVar8 = (int *)*piVar9;
        *piVar9 = (int)piVar9;
        *(int *)(*(int *)(iVar7 + 0x80) + 4) = *(int *)(iVar7 + 0x80);
        *(undefined4 *)(iVar7 + 0x84) = 0;
        if (piVar8 != *(int **)(iVar7 + 0x80)) {
          do {
            piVar9 = (int *)*piVar8;
            operator_delete(piVar8);
            piVar8 = piVar9;
            iVar5 = local_110;
          } while (piVar9 != (int *)*(int *)(iVar7 + 0x80));
        }
        iVar7 = *(int *)(*(int *)((int)pvVar4 + 0x28) + iVar5);
        piVar9 = *(int **)(iVar7 + 0x88);
        piVar8 = (int *)*piVar9;
        *piVar9 = (int)piVar9;
        *(int *)(*(int *)(iVar7 + 0x88) + 4) = *(int *)(iVar7 + 0x88);
        *(undefined4 *)(iVar7 + 0x8c) = 0;
        if (piVar8 != *(int **)(iVar7 + 0x88)) {
          do {
            piVar9 = (int *)*piVar8;
            operator_delete(piVar8);
            piVar8 = piVar9;
            iVar5 = local_110;
          } while (piVar9 != (int *)*(int *)(iVar7 + 0x88));
        }
        LeaveCriticalSection
                  ((LPCRITICAL_SECTION)(*(int *)(*(int *)((int)pvVar4 + 0x28) + iVar5) + 0x98));
        piVar9 = (int *)*local_124;
        if (piVar9 != local_124) {
          do {
            FUN_004d3df0(*(int *)((int)local_11c + 4));
            uVar11 = piVar9[2];
            uVar12 = piVar9[3];
            if ((((-1 < (int)uVar11) && (-1 < (int)uVar12)) && ((int)uVar11 < 0x10000)) &&
               ((int)uVar12 < 0x10000)) {
              local_10c = (int *)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x3fU)) >> 6);
              iVar7 = (int)(((int)uVar11 >> 0x1f & 0x3fU) + uVar11) >> 6;
              if (((-1 < iVar7) && (-1 < (int)local_10c)) &&
                 ((iVar7 < 0x400 &&
                  (((int)local_10c < 0x400 &&
                   (iVar7 = *(int *)(*(int *)((int)local_11c + 4) + 0xbc +
                                    (int)(local_10c + iVar7 * 0x100) * 4), iVar7 != 0)))))) {
                uVar11 = uVar11 & 0x8000003f;
                if ((int)uVar11 < 0) {
                  uVar11 = (uVar11 - 1 | 0xffffffc0) + 1;
                }
                uVar12 = uVar12 & 0x8000003f;
                if ((int)uVar12 < 0) {
                  uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
                }
                local_10c = *(int **)(iVar7 + 0x10018 + (uVar11 * 0x40 + uVar12) * 4);
                if (local_10c != (int *)0x0) {
                  FUN_004217e0((void *)(*(int *)(*(int *)((int)local_11c + 0x28) + local_110) + 0x30
                                       ),
                               *(undefined4 **)
                                (*(int *)(*(int *)((int)local_11c + 0x28) + local_110) + 0x30),
                               (undefined4 *)local_10c[0x1a],(undefined4 *)local_10c[0x1b]);
                  local_24 = local_10c[0x18];
                  puVar2 = (undefined1 *)local_10c[0xd];
                  local_20 = local_10c[0x19];
                  puVar3 = (undefined1 *)local_10c[0xc];
                  local_114 = &local_1c;
                  local_1c = (int *)0x0;
                  local_18 = 0;
                  local_1c = (int *)FUN_004269f0((undefined4 *)0x0,(undefined4 *)0x0);
                  local_8._0_1_ = 2;
                  FUN_004204d0(&local_1c,puVar3,puVar2);
                  local_8._0_1_ = 3;
                  iVar7 = *(int *)(*(int *)((int)local_11c + 0x28) + local_110);
                  puVar10 = *(undefined4 **)(iVar7 + 0x40);
                  iVar5 = FUN_004202e0(puVar10,(undefined4 *)puVar10[1],&local_24);
                  if (*(int *)(iVar7 + 0x44) == 0xaaaaaa9) {
LAB_00427fb9:
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("list<T> too long");
                  }
                  *(int *)(iVar7 + 0x44) = *(int *)(iVar7 + 0x44) + 1;
                  puVar10[1] = iVar5;
                  local_8._0_1_ = 1;
                  **(int **)(iVar5 + 4) = iVar5;
                  piVar8 = (int *)*local_1c;
                  *local_1c = (int)local_1c;
                  local_1c[1] = (int)local_1c;
                  local_18 = 0;
                  if (piVar8 != local_1c) {
                    do {
                      piVar6 = (int *)*piVar8;
                      operator_delete(piVar8);
                      piVar8 = piVar6;
                    } while (piVar6 != local_1c);
                  }
                  operator_delete(local_1c);
                  piVar8 = local_10c;
                  iVar7 = 0;
                  if (0 < (local_10c[4] - local_10c[3]) / 0x188) {
                    local_118 = 0;
                    do {
                      puVar10 = (undefined4 *)(piVar8[3] + local_118);
                      local_74 = piVar9[2];
                      local_f4 = *puVar10;
                      local_ec = puVar10[2];
                      local_e8 = puVar10[3];
                      local_e4 = puVar10[4];
                      local_e0 = puVar10[5];
                      iStack_70 = piVar9[3];
                      local_104 = *(undefined8 *)(piVar9 + 2);
                      local_dc = puVar10[6];
                      local_d8 = puVar10[7];
                      local_d4 = puVar10[8];
                      local_c4 = *(undefined1 *)(puVar10 + 0xc);
                      local_c0 = puVar10[0xd];
                      local_bc = puVar10[0xe];
                      local_b4 = puVar10[0x10];
                      local_b0 = puVar10[0x11];
                      local_d0 = puVar10[9];
                      local_cc = puVar10[10];
                      iVar5 = *(int *)(*(int *)((int)local_11c + 0x28) + local_110);
                      local_114 = *(int ***)(iVar5 + 0x48);
                      local_10c = (int *)(iVar5 + 0x48);
                      local_c8 = puVar10[0xb];
                      local_fc = iVar7;
                      local_6c = iVar7;
                      piVar6 = (int *)FUN_00420430(local_114,local_114[1],(undefined4 *)&local_104);
                      if (local_10c[1] == 0x2aaaaa9) goto LAB_00427fb9;
                      local_10c[1] = local_10c[1] + 1;
                      local_118 = local_118 + 0x188;
                      local_114[1] = piVar6;
                      iVar7 = iVar7 + 1;
                      *(int **)piVar6[1] = piVar6;
                    } while (iVar7 < (piVar8[4] - piVar8[3]) / 0x188);
                  }
                }
              }
            }
            FUN_004d5c60(*(int *)((int)local_11c + 4));
            piVar9 = (int *)*piVar9;
          } while (piVar9 != local_124);
        }
        piVar9 = (int *)*local_130;
        this = local_11c;
        if (piVar9 != local_130) {
          do {
            FUN_004d3df0(*(int *)((int)this + 4));
            local_118 = 0;
            do {
              local_10c = (int *)0x0;
              do {
                uStack_4c = ((int)((piVar9[3] * 0x40 >> 0x1f & 7U) + piVar9[3] * 0x40) >> 3) +
                            (int)local_10c;
                local_50 = ((int)((piVar9[2] * 0x40 >> 0x1f & 7U) + piVar9[2] * 0x40) >> 3) +
                           local_118;
                if ((((-1 < (int)local_50) && (-1 < (int)uStack_4c)) && ((int)local_50 < 0x2000)) &&
                   ((int)uStack_4c < 0x2000)) {
                  iVar7 = (int)(((int)(local_50 * 8) >> 0x1f & 0x3fU) + local_50 * 8) >> 6;
                  iVar5 = (int)(((int)(uStack_4c * 8) >> 0x1f & 0x3fU) + uStack_4c * 8) >> 6;
                  this = local_11c;
                  if (((-1 < iVar7) && (-1 < iVar5)) &&
                     ((iVar7 < 0x400 &&
                      ((iVar5 < 0x400 &&
                       (iVar7 = *(int *)(*(int *)((int)local_11c + 4) + 0xbc +
                                        (iVar7 * 0x400 + iVar5) * 4), iVar7 != 0)))))) {
                    uVar11 = local_50 & 0x80000007;
                    if ((int)uVar11 < 0) {
                      uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
                    }
                    uVar12 = uStack_4c & 0x80000007;
                    if ((int)uVar12 < 0) {
                      uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
                    }
                    iVar7 = iVar7 + 0x14018 + (uVar12 + uVar11 * 8) * 0x68;
                    if (iVar7 != 0) {
                      local_9c = *(undefined4 *)(iVar7 + 0x2c);
                      local_98 = *(undefined4 *)(iVar7 + 0x30);
                      local_94 = *(undefined4 *)(iVar7 + 0x34);
                      local_90 = *(undefined4 *)(iVar7 + 0x38);
                      local_8c = *(undefined4 *)(iVar7 + 0x3c);
                      local_88 = *(undefined1 *)(iVar7 + 0x40);
                      local_87 = *(undefined1 *)(iVar7 + 0x41);
                      local_84 = *(undefined4 *)(iVar7 + 0x44);
                      local_80 = *(undefined4 *)(iVar7 + 0x48);
                      local_7c = *(undefined4 *)(iVar7 + 0x4c);
                      local_78 = *(undefined4 *)(iVar7 + 0x50);
                      iVar7 = *(int *)(*(int *)((int)local_11c + 0x28) + local_110);
                      puVar10 = *(undefined4 **)(iVar7 + 0x78);
                      local_a4 = 0;
                      local_ac = local_50;
                      uStack_a8 = uStack_4c;
                      iVar5 = FUN_00420400(puVar10,(undefined4 *)puVar10[1],&local_ac);
                      if (*(int *)(iVar7 + 0x7c) == 0x3fffffe) goto LAB_00427fb9;
                      *(int *)(iVar7 + 0x7c) = *(int *)(iVar7 + 0x7c) + 1;
                      puVar10[1] = iVar5;
                      **(int **)(iVar5 + 4) = iVar5;
                      this = local_11c;
                    }
                  }
                }
                local_10c = (int *)((int)local_10c + 1);
              } while ((int)local_10c < 8);
              local_118 = local_118 + 1;
            } while (local_118 < 8);
            FUN_004d5c60(*(int *)((int)this + 4));
            piVar9 = (int *)*piVar9;
          } while (piVar9 != local_130);
        }
        piVar9 = (int *)*local_130;
        *local_130 = (int)local_130;
        local_130[1] = (int)local_130;
        local_12c = 0;
        if (piVar9 != local_130) {
          do {
            piVar8 = (int *)*piVar9;
            operator_delete(piVar9);
            piVar9 = piVar8;
          } while (piVar8 != local_130);
        }
        operator_delete(local_130);
        piVar9 = (int *)*local_124;
        *local_124 = (int)local_124;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        local_124[1] = (int)local_124;
        local_120 = 0;
        if (piVar9 != local_124) {
          do {
            piVar8 = (int *)*piVar9;
            operator_delete(piVar9);
            piVar9 = piVar8;
          } while (piVar8 != local_124);
        }
        operator_delete(local_124);
      }
      local_128 = local_128 + 1;
    } while (local_128 < *(int *)((int)this + 0x2c) - *(int *)((int)this + 0x28) >> 2);
  }
  FUN_004d5c60(*(int *)((int)this + 4));
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00428070 @ 00428070  kind=gamemisc  attributed-by=caller-vote  size=16 */

void __thiscall FUN_00428070(void *this,undefined4 *param_1)

{
  *param_1 = **(undefined4 **)this;
  return;
}


/* FUN_00428170 @ 00428170  kind=gamemisc  attributed-by=caller-vote  size=96 */

void __thiscall FUN_00428170(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  FUN_004d3df0(*(int *)((int)this + 4));
  FUN_00420bb0(param_1,(undefined4 *)*param_1,(undefined4 *)**(undefined4 **)((int)this + 0x3c),
               *(undefined4 **)((int)this + 0x3c));
  piVar1 = *(int **)((int)this + 0x3c);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)((int)this + 0x3c) + 4) = *(int *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x40) = 0;
  if (piVar2 != *(int **)((int)this + 0x3c)) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 0x3c));
  }
  FUN_004d5c60(*(int *)((int)this + 4));
  return;
}


/* FUN_004281d0 @ 004281d0  kind=gamemisc  attributed-by=caller-vote  size=96 */

void __thiscall FUN_004281d0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  FUN_004d3df0(*(int *)((int)this + 4));
  FUN_00421710(param_1,(undefined4 *)*param_1,(undefined4 *)**(undefined4 **)((int)this + 0x44),
               *(undefined4 **)((int)this + 0x44));
  piVar1 = *(int **)((int)this + 0x44);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)((int)this + 0x44) + 4) = *(int *)((int)this + 0x44);
  *(undefined4 *)((int)this + 0x48) = 0;
  if (piVar2 != *(int **)((int)this + 0x44)) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 0x44));
  }
  FUN_004d5c60(*(int *)((int)this + 4));
  return;
}


/* FUN_00428230 @ 00428230  kind=gamemisc  attributed-by=caller-vote  size=96 */

void __thiscall FUN_00428230(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  FUN_004d3df0(*(int *)((int)this + 4));
  FUN_00420ef0(param_1,(undefined4 *)*param_1,(undefined4 *)**(undefined4 **)((int)this + 0x34),
               *(undefined4 **)((int)this + 0x34));
  piVar1 = *(int **)((int)this + 0x34);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)((int)this + 0x34) + 4) = *(int *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x38) = 0;
  if (piVar2 != *(int **)((int)this + 0x34)) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 0x34));
  }
  FUN_004d5c60(*(int *)((int)this + 4));
  return;
}


/* FUN_00429240 @ 00429240  kind=gamemisc  attributed-by=caller-vote  size=51 */

undefined4 * __thiscall FUN_00429240(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0042cf00(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    FUN_00416a90(puVar1 + 5,param_1 + 1);
  }
  return puVar1;
}


/* FUN_00429570 @ 00429570  kind=gamemisc  attributed-by=caller-vote  size=559 */

void __thiscall
FUN_00429570(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x5d1745b < *(uint *)((int)this + 4)) {
    if (7 < (uint)param_5[10]) {
      operator_delete((void *)param_5[5]);
    }
    param_5[10] = 7;
    param_5[9] = 0;
    *(undefined2 *)(param_5 + 5) = 0;
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
        goto LAB_0042977a;
      }
LAB_004296d1:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_004296d1;
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
LAB_0042977a:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_00429e40 @ 00429e40  kind=gamemisc  attributed-by=caller-vote  size=525 */

undefined4 * __thiscall
FUN_00429e40(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  uint uStack_34;
  undefined4 local_24;
  void *local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054cbd0;
  local_10 = ExceptionList;
  uStack_34 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_00429570(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if (*param_3 < param_2[4]) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_00429570(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if ((int)((undefined4 *)piVar1[2])[4] < *param_3) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_00429570(this,param_1,'\0',(undefined4 *)piVar1[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    iVar2 = param_2[4];
    local_1c = *param_3;
    bVar6 = SBORROW4(iVar2,local_1c);
    iVar3 = iVar2 - local_1c;
    puVar4 = &uStack_34;
    if (local_1c < iVar2) {
      local_18 = param_2;
      FUN_004dad80((int *)&local_18);
      if (local_18[4] < local_1c) {
        if (*(char *)(local_18[2] + 0xd) != '\0') {
          FUN_00429570(this,param_1,'\0',local_18,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_00429570(this,param_1,'\x01',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      bVar6 = SBORROW4(param_2[4],local_1c);
      iVar3 = param_2[4] - local_1c;
      puVar4 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar4;
    if (bVar6 != iVar3 < 0) {
      local_18 = param_2;
      FUN_00407a50((int *)&local_18);
      if ((local_18 == piVar1) || (local_1c < local_18[4])) {
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_00429570(this,param_1,'\0',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_00429570(this,param_1,'\x01',local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_0042a830(this,&local_24,'\0',param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0042a070 @ 0042a070  kind=gamemisc  attributed-by=caller-vote  size=468 */

undefined4 * __thiscall
FUN_0042a070(void *this,undefined4 *param_1,ushort *param_2,ushort *param_3,int *param_4)

{
  ushort *puVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uStack_2c;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  puStack_c = &LAB_0054cbf0;
  local_10 = ExceptionList;
  uStack_2c = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    puVar4 = *(ushort **)this;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    puVar5 = *(ushort **)this;
    puVar4 = param_2;
    if (param_2 != *(ushort **)puVar5) {
      if (param_2 == puVar5) {
        puVar4 = param_3;
        if (7 < *(uint *)(param_3 + 10)) {
          puVar4 = *(ushort **)param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        uVar3 = FUN_00419ef0((void *)(*(int *)(puVar5 + 4) + 0x10),0,
                             *(uint *)(*(int *)(puVar5 + 4) + 0x20),puVar4,*(uint *)(param_3 + 8));
        if (-1 < (int)uVar3) goto LAB_0042a211;
        puVar4 = *(ushort **)(*(int *)this + 8);
        cVar7 = '\0';
        goto LAB_0042a0b9;
      }
      puVar5 = param_2 + 8;
      if (7 < *(uint *)(param_2 + 0x12)) {
        puVar5 = *(ushort **)puVar5;
      }
      uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
      if ((int)uVar3 < 0) {
        param_3 = param_2;
        FUN_004dad80((int *)&param_3);
        puVar5 = param_3;
        bVar2 = FUN_0041ae40(param_3 + 8,puVar1);
        if (!bVar2) goto LAB_0042a1b6;
        if (*(char *)(*(int *)(puVar5 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a0b9;
        }
      }
      else {
LAB_0042a1b6:
        bVar2 = FUN_0041ae40(param_2 + 8,puVar1);
        if (!bVar2) {
LAB_0042a211:
          local_8 = 0xffffffff;
          puVar6 = (undefined4 *)FUN_004c7c50(this,&local_1c,(undefined4 *)0x0,puVar1,param_4);
          *param_1 = *puVar6;
          ExceptionList = local_10;
          return param_1;
        }
        param_3 = param_2;
        FUN_00407a50((int *)&param_3);
        puVar4 = param_3;
        if ((param_3 != (ushort *)*local_18) &&
           (bVar2 = FUN_0041ae40(puVar1,param_3 + 8), this = local_18, !bVar2)) goto LAB_0042a211;
        this = local_18;
        puVar5 = param_2;
        if (*(char *)(*(int *)(param_2 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a0b9;
        }
      }
      cVar7 = '\0';
      puVar4 = puVar5;
      goto LAB_0042a0b9;
    }
    puVar5 = param_2 + 8;
    if (7 < *(uint *)(param_2 + 0x12)) {
      puVar5 = *(ushort **)puVar5;
    }
    local_14 = (undefined1 *)&uStack_2c;
    uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042a211;
  }
  cVar7 = '\x01';
LAB_0042a0b9:
  FUN_004c6d20(this,param_1,cVar7,(undefined4 *)puVar4,puVar1,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0042a830 @ 0042a830  kind=gamemisc  attributed-by=caller-vote  size=294 */

void __thiscall FUN_0042a830(void *this,undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_3;
  puStack_c = &LAB_0054cc70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar4 = *(undefined4 **)this;
  local_8 = 0;
  local_18 = true;
  if (*(char *)((int)puVar4[1] + 0xd) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar3;
      if (param_2 == '\0') {
        local_18 = *param_3 < (int)puVar4[4];
      }
      else {
        local_18 = *param_3 <= (int)puVar4[4];
      }
      if (local_18 == false) {
        puVar3 = (undefined4 *)puVar4[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  _param_2 = puVar4;
  if (local_18) {
    if (puVar4 == (undefined4 *)**(int **)this) {
      local_18 = true;
      goto LAB_0042a8c1;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar2 = param_4;
  puVar3 = _param_2;
  if (*piVar1 <= (int)_param_2[4]) {
    if (7 < (uint)param_4[10]) {
      operator_delete((void *)param_4[5]);
    }
    piVar2[10] = 7;
    piVar2[9] = 0;
    *(undefined2 *)(piVar2 + 5) = 0;
    operator_delete(piVar2);
    *param_1 = puVar3;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_0042a8c1:
  puVar4 = (undefined4 *)FUN_00429570(this,(undefined4 *)&param_2,local_18,puVar4,piVar1,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0042c6f0 @ 0042c6f0  kind=gamemisc  attributed-by=caller-vote  size=19 */

bool __thiscall FUN_0042c6f0(void *this,int *param_1)

{
  return *(int *)this != *param_1;
}


/* FUN_0042c710 @ 0042c710  kind=gamemisc  attributed-by=caller-vote  size=261 */

void __thiscall FUN_0042c710(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d070;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = *(int **)this;
  piVar4 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar2 = (int *)piVar1[1];
    do {
      if (piVar2[4] < *param_1) {
        piVar3 = (int *)piVar2[2];
      }
      else {
        piVar3 = (int *)*piVar2;
        piVar4 = piVar2;
      }
      piVar2 = piVar3;
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  if ((piVar4 == piVar1) || (*param_1 < piVar4[4])) {
    local_30 = *param_1;
    local_34 = 7;
    local_38 = 0;
    local_48[0] = (void *)((uint)local_48[0] & 0xffff0000);
    local_8 = 0;
    FUN_00416a90(local_2c,local_48);
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar1 = FUN_00429240(this,&local_30);
    FUN_00429e40(this,&local_4c,piVar4,piVar1 + 4,piVar1);
    if (7 < local_18) {
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    if (7 < local_34) {
      operator_delete(local_48[0]);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0042cea0 @ 0042cea0  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_0042cea0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x2c);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042ceae. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_0042cf00 @ 0042cf00  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * __fastcall FUN_0042cf00(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x2c);
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


/* FUN_0042d3d0 @ 0042d3d0  kind=gamemisc  attributed-by=caller-vote  size=77 */

undefined4 * __thiscall FUN_0042d3d0(void *this,ushort *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = (undefined4 *)(*(undefined4 **)this)[1];
  cVar1 = *(char *)((int)puVar5 + 0xd);
  puVar2 = *(undefined4 **)this;
  while (cVar1 == '\0') {
    puVar3 = param_1;
    if (7 < *(uint *)(param_1 + 10)) {
      puVar3 = *(ushort **)param_1;
    }
    uVar4 = FUN_00419ef0(puVar5 + 4,0,puVar5[8],puVar3,*(uint *)(param_1 + 8));
    if ((int)uVar4 < 0) {
      puVar6 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar6 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0xd);
  }
  return puVar2;
}


/* FUN_0042e220 @ 0042e220  kind=gamemisc  attributed-by=caller-vote  size=54 */

undefined4 __thiscall FUN_0042e220(void *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    return *(undefined4 *)((int)this + (param_1 * 0x400 + param_2) * 4 + 0x4000bc);
  }
  return 0;
}


/* FUN_0042e880 @ 0042e880  kind=gamemisc  attributed-by=caller-vote  size=121 */

int __thiscall FUN_0042e880(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x10000)) &&
     ((int)param_2 < 0x10000)) {
    iVar1 = FUN_00406210(this,(int)(param_1 + ((int)param_1 >> 0x1f & 0x3fU)) >> 6,
                         (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fU)) >> 6);
    if (iVar1 != 0) {
      uVar2 = param_1 & 0x8000003f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
      }
      uVar3 = param_2 & 0x8000003f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
      }
      return iVar1 + 0x18 + (uVar2 * 0x40 + uVar3) * 0x10;
    }
  }
  return 0;
}


/* FUN_0042e920 @ 0042e920  kind=gamemisc  attributed-by=caller-vote  size=56 */

void __cdecl FUN_0042e920(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    puVar2 = param_1;
    do {
      *puVar1 = *puVar2;
      puVar1[1] = puVar1[(int)(param_1 + (1 - (int)param_3))];
      puVar1[2] = puVar2[2];
      puVar2 = puVar2 + 3;
      puVar1 = puVar1 + 3;
    } while (puVar2 != param_2);
  }
  return;
}


/* FUN_0042e9a0 @ 0042e9a0  kind=gamemisc  attributed-by=caller-vote  size=239 */

facet * __cdecl FUN_0042e9a0(locale *param_1)

{
  int iVar1;
  uint uVar2;
  _Locimp *p_Var3;
  facet *pfVar4;
  bad_cast local_24 [12];
  _Lockit local_18 [4];
  facet *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cd39;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_18,0);
  local_8 = 0;
  local_14 = DAT_00583e04;
  uVar2 = std::locale::id::operator_unsigned_int((id *)id_exref);
  iVar1 = *(int *)param_1;
  if (uVar2 < *(uint *)(iVar1 + 0xc)) {
    pfVar4 = *(facet **)(*(int *)(iVar1 + 8) + uVar2 * 4);
    if (pfVar4 != (facet *)0x0) goto LAB_0042ea72;
  }
  else {
    pfVar4 = (facet *)0x0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_0042ea1f:
    if (pfVar4 != (facet *)0x0) goto LAB_0042ea72;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (uVar2 < *(uint *)(p_Var3 + 0xc)) {
      pfVar4 = *(facet **)(*(int *)(p_Var3 + 8) + uVar2 * 4);
      goto LAB_0042ea1f;
    }
  }
  pfVar4 = local_14;
  if (local_14 == (facet *)0x0) {
    uVar2 = std::codecvt<char,char,int>::_Getcat(&local_14,param_1);
    pfVar4 = local_14;
    if (uVar2 == 0xffffffff) {
      std::bad_cast::bad_cast(local_24,"bad cast");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_24,(ThrowInfo *)&DAT_005779e4);
    }
    DAT_00583e04 = local_14;
    (**(code **)(*(int *)local_14 + 4))();
    Facet_Register(pfVar4);
  }
LAB_0042ea72:
  std::_Lockit::~_Lockit(local_18);
  ExceptionList = local_10;
  return pfVar4;
}


/* FUN_0042ea90 @ 0042ea90  kind=gamemisc  attributed-by=caller-vote  size=273 */

basic_istream<char,std::char_traits<char>_> * __thiscall
FUN_0042ea90(void *this,char *param_1,uint param_2,int *param_3,int param_4)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0055668d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    *(undefined ***)this = &PTR_0055b4f8;
    *(code **)((int)this + 0x70) = _vftable__exref;
    *(code **)((int)this + 0x70) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x10);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00,false);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ifstream<char,std::char_traits<char>_> */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)((int)this + *(int *)(*(int *)this + 4))
       = &std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x70;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  local_8._0_1_ = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x55) = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this_00);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x58) = DAT_00583e00;
  *(undefined4 *)((int)this + 0x50) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(char **)param_1;
  }
  pbVar1 = FUN_0042f890(this_00,param_1,param_2 | 1,param_3);
  if (pbVar1 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*(int *)this + 4) + (int)this),2
               ,false);
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_0042ecd0 @ 0042ecd0  kind=gamemisc  attributed-by=caller-vote  size=108 */

void __thiscall FUN_0042ecd0(void *this)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ifstream<char,std::char_traits<char>_> */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)
   (*(int *)(*(int *)((int)this + -0x70) + 4) + -0x70 + (int)this) =
       &std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(int *)((int)this + -0x70) + 4);
  *(int *)(iVar1 + -0x74 + (int)this) = iVar1 + -0x70;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  *(basic_filebuf<char,std::char_traits<char>_>_vftable **)((int)this + -0x60) =
       &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((*(int *)((int)this + -0x10) != 0) && (**(int **)((int)this + -0x54) == (int)this + -0x1c)) {
    uVar2 = *(undefined4 *)((int)this + -0x24);
    **(int **)((int)this + -0x54) = *(int *)((int)this + -0x28);
    **(undefined4 **)((int)this + -0x44) = uVar2;
    **(undefined4 **)((int)this + -0x34) = 0;
  }
  if (*(char *)((int)this + -0x14) != '\0') {
    FUN_0042f480((basic_streambuf<char,std::char_traits<char>_> *)((int)this + -0x60));
  }
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)((int)this + -0x60));
                    /* WARNING: Could not recover jumptable at 0x0042ed36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)((int)this + -0x58));
  return;
}


/* FUN_0042ed40 @ 0042ed40  kind=gamemisc  attributed-by=caller-vote  size=108 */

void __thiscall FUN_0042ed40(void *this)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ofstream<char,std::char_traits<char>_> */
  *(basic_ofstream<char,std::char_traits<char>_>_vftable **)
   (*(int *)(*(int *)((int)this + -0x60) + 4) + -0x60 + (int)this) =
       &std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(int *)((int)this + -0x60) + 4);
  *(int *)(iVar1 + -100 + (int)this) = iVar1 + -0x60;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  *(basic_filebuf<char,std::char_traits<char>_>_vftable **)((int)this + -0x5c) =
       &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((*(int *)((int)this + -0xc) != 0) && (**(int **)((int)this + -0x50) == (int)this + -0x18)) {
    uVar2 = *(undefined4 *)((int)this + -0x20);
    **(int **)((int)this + -0x50) = *(int *)((int)this + -0x24);
    **(undefined4 **)((int)this + -0x40) = uVar2;
    **(undefined4 **)((int)this + -0x30) = 0;
  }
  if (*(char *)((int)this + -0x10) != '\0') {
    FUN_0042f480((basic_streambuf<char,std::char_traits<char>_> *)((int)this + -0x5c));
  }
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)((int)this + -0x5c));
                    /* WARNING: Could not recover jumptable at 0x0042eda6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)((int)this + -0x58));
  return;
}


/* FUN_0042edb0 @ 0042edb0  kind=gamemisc  attributed-by=caller-vote  size=41 */

undefined1 __thiscall FUN_0042edb0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 - (int)this;
  do {
    if (*(char *)this != *(char *)((int)this + iVar2)) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    this = (void *)((int)this + 1);
  } while (iVar1 < 3);
  return 1;
}


/* FUN_0042f070 @ 0042f070  kind=gamemisc  attributed-by=caller-vote  size=331 */

/* WARNING: Removing unreachable block (ram,0x0042f0db) */

void __fastcall FUN_0042f070(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  size_t sVar3;
  char *pcVar4;
  size_t _Count;
  char *local_30;
  undefined8 local_2c;
  undefined1 local_24;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d298;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_1[0x10] != 0) && (*(char *)((int)param_1 + 0x45) != '\0')) &&
     (iVar1 = (**(code **)(*param_1 + 0xc))(0xffffffff,local_14), iVar1 != -1)) {
    local_2c = 0;
    local_18 = 0xf;
    local_1c = 8;
    local_24 = 0;
    local_8 = 0;
LAB_0042f0f7:
    pcVar4 = (char *)&local_2c;
    if (0xf < local_18) {
      pcVar4 = (char *)local_2c;
    }
    iVar1 = std::codecvt<char,char,int>::unshift
                      ((codecvt<char,char,int> *)param_1[0x10],param_1 + 0x12,pcVar4,
                       pcVar4 + local_1c,&local_30);
    if (iVar1 == 0) {
      *(undefined1 *)((int)param_1 + 0x45) = 0;
    }
    else if (iVar1 != 1) goto LAB_0042f188;
    puVar2 = &local_2c;
    if (0xf < local_18) {
      puVar2 = (undefined8 *)(char *)local_2c;
    }
    _Count = (int)local_30 - (int)puVar2;
    if (_Count != 0) {
      puVar2 = &local_2c;
      if (0xf < local_18) {
        puVar2 = (undefined8 *)(char *)local_2c;
      }
      sVar3 = fwrite(puVar2,1,_Count,(FILE *)param_1[0x14]);
      if (_Count != sVar3) goto LAB_0042f188;
    }
    if (*(char *)((int)param_1 + 0x45) == '\0') goto LAB_0042f188;
    if (_Count == 0) {
      FUN_004170c0(&local_2c,8,'\0');
    }
    goto LAB_0042f0f7;
  }
LAB_0042f19f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_0042f188:
  if (0xf < local_18) {
    operator_delete((char *)local_2c);
  }
  goto LAB_0042f19f;
}


/* FUN_0042f250 @ 0042f250  kind=gamemisc  attributed-by=caller-vote  size=200 */

void __thiscall FUN_0042f250(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d2c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x55555556) {
      puVar3 = operator_new(param_1 * 3);
      if (puVar3 != (undefined1 *)0x0) goto LAB_0042f2ac;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0042f2ac:
  local_8 = 0;
  FUN_0042e960(*(undefined1 **)this,*(undefined1 **)((int)this + 4),puVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined1 **)((int)this + 8) = puVar3 + param_1 * 3;
  *(undefined1 **)((int)this + 4) = puVar3 + ((iVar1 - iVar2) / 3) * 3;
  *(undefined1 **)this = puVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_0042f330 @ 0042f330  kind=gamemisc  attributed-by=caller-vote  size=153 */

void __thiscall FUN_0042f330(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 3)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 3;
  if (0x55555555U - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 3;
  uVar3 = iVar1 + param_1;
  if (0x55555555 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_0042f250(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_0042f250(this,uVar2);
  return;
}


/* FUN_0042f480 @ 0042f480  kind=gamemisc  attributed-by=caller-vote  size=91 */

basic_streambuf<char,std::char_traits<char>_> * __fastcall
FUN_0042f480(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  char cVar1;
  int iVar2;
  basic_streambuf<char,std::char_traits<char>_> *pbVar3;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    pbVar3 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  }
  else {
    cVar1 = FUN_0042f070((int *)param_1);
    pbVar3 = param_1;
    if (cVar1 == '\0') {
      pbVar3 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
    iVar2 = fclose(*(FILE **)(param_1 + 0x50));
    if (iVar2 != 0) {
      pbVar3 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
  }
  param_1[0x4c] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  param_1[0x45] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init
            ((basic_streambuf<char,std::char_traits<char>_> *)param_1);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x48) = DAT_00583e00;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return pbVar3;
}


/* FUN_0042f890 @ 0042f890  kind=gamemisc  attributed-by=caller-vote  size=269 */

basic_streambuf<char,std::char_traits<char>_> * __thiscall
FUN_0042f890(void *this,char *param_1,int param_2,int *param_3)

{
  bool bVar1;
  _iobuf *p_Var2;
  locale *plVar3;
  facet *this_00;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d2e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0x50) == 0) {
    p_Var2 = std::_Fiopen(param_1,param_2,(int)param_3);
    if (p_Var2 != (_iobuf *)0x0) {
      *(undefined1 *)((int)this + 0x4c) = 1;
      *(undefined1 *)((int)this + 0x45) = 0;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
      *(char ***)((int)this + 0xc) = &p_Var2->_base;
      *(char ***)((int)this + 0x10) = &p_Var2->_base;
      *(int **)((int)this + 0x2c) = &p_Var2->_cnt;
      *(int **)((int)this + 0x30) = &p_Var2->_cnt;
      *(_iobuf **)((int)this + 0x1c) = p_Var2;
      *(_iobuf **)((int)this + 0x20) = p_Var2;
      *(_iobuf **)((int)this + 0x50) = p_Var2;
      *(undefined4 *)((int)this + 0x48) = DAT_00583e00;
      *(undefined4 *)((int)this + 0x40) = 0;
      plVar3 = (locale *)std::basic_streambuf<char,std::char_traits<char>_>::getloc(this);
      local_8 = 0;
      this_00 = FUN_0042e9a0(plVar3);
      bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this_00);
      if (bVar1) {
        *(undefined4 *)((int)this + 0x40) = 0;
      }
      else {
        *(facet **)((int)this + 0x40) = this_00;
        std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
      }
      local_8 = 0xffffffff;
      if (param_3 != (int *)0x0) {
        puVar4 = (undefined4 *)(**(code **)(*param_3 + 8))();
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
      }
      ExceptionList = local_10;
      return this;
    }
  }
  ExceptionList = local_10;
  return (basic_streambuf<char,std::char_traits<char>_> *)0x0;
}


/* FUN_0042ff40 @ 0042ff40  kind=gamemisc  attributed-by=caller-vote  size=243 */

undefined1 * __thiscall FUN_0042ff40(void *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d360;
  local_10 = ExceptionList;
  puVar4 = *(undefined1 **)((int)this + 4);
  uVar3 = ((int)puVar4 - *(int *)this) / 3;
  if (param_1 < uVar3) {
    puVar2 = *(undefined1 **)this;
    puVar1 = puVar2 + param_1 * 3;
    if (puVar1 == puVar2) {
      *(undefined1 **)((int)this + 4) = puVar2;
      return puVar1;
    }
    if (puVar1 == puVar4) {
      return puVar1;
    }
    ExceptionList = &local_10;
    puVar4 = (undefined1 *)FUN_0042e920(puVar4,puVar4,puVar1);
  }
  else {
    if (param_1 <= uVar3) {
      return (undefined1 *)(((int)puVar4 - *(int *)this) * 0x55555556);
    }
    ExceptionList = &local_10;
    FUN_0042f330(this,param_1 - uVar3);
    local_8 = 0;
    FUN_0046b250();
    puVar4 = (undefined1 *)
             (*(int *)((int)this + 4) + (param_1 - (*(int *)((int)this + 4) - *(int *)this) / 3) * 3
             );
  }
  *(undefined1 **)((int)this + 4) = puVar4;
  ExceptionList = local_10;
  return puVar4;
}


/* FUN_00430730 @ 00430730  kind=gamemisc  attributed-by=caller-vote  size=77 */

undefined1 * __thiscall FUN_00430730(void *this,int param_1,int param_2,int param_3)

{
  if ((((-1 < param_1) && (-1 < param_2)) && (-1 < param_3)) &&
     (((param_1 < *(int *)((int)this + 0x44) && (param_2 < *(int *)((int)this + 0x48))) &&
      (param_3 < *(int *)((int)this + 0x4c))))) {
    return (undefined1 *)
           (((*(int *)((int)this + 0x48) * param_3 + param_2) * *(int *)((int)this + 0x44) + param_1
            ) * 3 + *(int *)((int)this + 0x30));
  }
  return &DAT_00583dfc;
}


/* FUN_00430780 @ 00430780  kind=gamemisc  attributed-by=caller-vote  size=227 */

undefined4 * __cdecl FUN_00430780(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054d3c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  local_8 = 0;
  if ((char)*param_3 == '\0') {
    iVar4 = 0;
  }
  else {
    piVar6 = param_3;
    do {
      iVar4 = *piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
    } while ((char)iVar4 != '\0');
    iVar4 = (int)piVar6 - ((int)param_3 + 1);
  }
  uVar1 = param_1[4];
  uVar5 = iVar4 + param_2[4];
  if (((uVar1 <= uVar5) && (param_1[5] != uVar5)) &&
     (bVar2 = FUN_00401840(param_1,uVar5,'\x01'), bVar2)) {
    param_1[4] = uVar1;
    puVar3 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar3 + uVar1) = 0;
  }
  FUN_004311f0(param_1,param_2,0,0xffffffff);
  if ((char)*param_3 == '\0') {
    uVar5 = 0;
  }
  else {
    piVar6 = param_3;
    do {
      iVar4 = *piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
    } while ((char)iVar4 != '\0');
    uVar5 = (int)piVar6 - ((int)param_3 + 1);
  }
  FUN_004312e0(param_1,param_3,uVar5);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00430870 @ 00430870  kind=gamemisc  attributed-by=caller-vote  size=161 */

undefined4 * __thiscall FUN_00430870(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d401;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = FUN_004f7ba0(this);
  *(undefined2 *)(puVar2 + 3) = 0;
  local_8 = 1;
  if (puVar2 + 4 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 5;
    puVar2[4] = *param_1;
    *puVar1 = 0;
    puVar2[6] = 0;
    uVar3 = FUN_00407be0((undefined4 *)0x0,(undefined4 *)0x0);
    *puVar1 = uVar3;
    *puVar1 = param_1[1];
    param_1[1] = uVar3;
    uVar3 = puVar2[6];
    puVar2[6] = param_1[2];
    param_1[2] = uVar3;
  }
  ExceptionList = local_10;
  return puVar2;
}


/* FUN_00430930 @ 00430930  kind=gamemisc  attributed-by=caller-vote  size=515 */

void __thiscall
FUN_00430930(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x9249247 < *(uint *)((int)this + 4)) {
    FUN_004311a0(param_5);
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
        goto LAB_00430b0e;
      }
LAB_00430a65:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_00430a65;
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
LAB_00430b0e:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_00430b40 @ 00430b40  kind=gamemisc  attributed-by=caller-vote  size=525 */

undefined4 * __thiscall
FUN_00430b40(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  uint uStack_34;
  undefined4 local_24;
  void *local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054d420;
  local_10 = ExceptionList;
  uStack_34 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_00430930(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if (*param_3 < param_2[4]) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_00430930(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if ((int)((undefined4 *)piVar1[2])[4] < *param_3) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_00430930(this,param_1,'\0',(undefined4 *)piVar1[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    iVar2 = param_2[4];
    local_1c = *param_3;
    bVar6 = SBORROW4(iVar2,local_1c);
    iVar3 = iVar2 - local_1c;
    puVar4 = &uStack_34;
    if (local_1c < iVar2) {
      local_18 = param_2;
      FUN_004dad80((int *)&local_18);
      if (local_18[4] < local_1c) {
        if (*(char *)(local_18[2] + 0xd) != '\0') {
          FUN_00430930(this,param_1,'\0',local_18,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_00430930(this,param_1,'\x01',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      bVar6 = SBORROW4(param_2[4],local_1c);
      iVar3 = param_2[4] - local_1c;
      puVar4 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar4;
    if (bVar6 != iVar3 < 0) {
      local_18 = param_2;
      FUN_00407a50((int *)&local_18);
      if ((local_18 == piVar1) || (local_1c < local_18[4])) {
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_00430930(this,param_1,'\0',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_00430930(this,param_1,'\x01',local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_00430d70(this,&local_24,'\0',param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00430d70 @ 00430d70  kind=gamemisc  attributed-by=caller-vote  size=257 */

void __thiscall FUN_00430d70(void *this,undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054d440;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_18 = true;
  piVar4 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar1 = (int *)piVar1[1];
    do {
      piVar4 = piVar1;
      if (param_2 == '\0') {
        local_18 = *param_3 < piVar4[4];
      }
      else {
        local_18 = *param_3 <= piVar4[4];
      }
      if (local_18 == false) {
        piVar1 = (int *)piVar4[2];
      }
      else {
        piVar1 = (int *)*piVar4;
      }
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    piVar1 = *(int **)this;
  }
  _param_2 = piVar4;
  if (local_18 != false) {
    if (piVar4 == (int *)*piVar1) {
      ppiVar2 = (int **)&param_2;
      local_18 = true;
      goto LAB_00430e04;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar1 = _param_2;
  if (*param_3 <= _param_2[4]) {
    FUN_004311a0(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  ppiVar2 = &param_3;
LAB_00430e04:
  puVar3 = (undefined4 *)FUN_00430930(this,ppiVar2,local_18,piVar4,param_3,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_00430fa0 @ 00430fa0  kind=gamemisc  attributed-by=caller-vote  size=61 */

undefined4 * __thiscall FUN_00430fa0(void *this,undefined4 *param_1)

{
  if (this != param_1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      operator_delete(*(void **)this);
    }
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)this = 0;
    FUN_00416c50(this,param_1);
  }
  return this;
}


/* FUN_00430fe0 @ 00430fe0  kind=gamemisc  attributed-by=caller-vote  size=54 */

void __thiscall FUN_00430fe0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((char)*param_1 == '\0') {
    FUN_00401a40(this,param_1,0);
    return;
  }
  piVar2 = param_1;
  do {
    iVar1 = *piVar2;
    piVar2 = (int *)((int)piVar2 + 1);
  } while ((char)iVar1 != '\0');
  FUN_00401a40(this,param_1,(int)piVar2 - ((int)param_1 + 1));
  return;
}


/* FUN_00431020 @ 00431020  kind=gamemisc  attributed-by=caller-vote  size=318 */

int * __thiscall FUN_00431020(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d4a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar6 = *(int **)this;
  piVar9 = piVar6;
  if (*(char *)(piVar6[1] + 0xd) == '\0') {
    piVar7 = (int *)piVar6[1];
    do {
      if (piVar7[4] < *param_1) {
        piVar8 = (int *)piVar7[2];
      }
      else {
        piVar8 = (int *)*piVar7;
        piVar9 = piVar7;
      }
      piVar7 = piVar8;
    } while (*(char *)((int)piVar8 + 0xd) == '\0');
  }
  if ((piVar9 == piVar6) || (*param_1 < piVar9[4])) {
    iVar1 = *param_1;
    local_18 = 0;
    local_14 = this;
    puVar4 = (undefined4 *)FUN_00407be0((undefined4 *)0x0,(undefined4 *)0x0);
    local_8 = 0;
    local_28 = iVar1;
    local_1c = puVar4;
    puVar5 = (undefined4 *)FUN_00407be0((undefined4 *)0x0,(undefined4 *)0x0);
    local_20 = 0;
    local_18 = 0;
    local_8 = CONCAT31(local_8._1_3_,1);
    local_24 = puVar4;
    local_1c = puVar5;
    piVar6 = FUN_00430870(local_14,&local_28);
    FUN_00430b40(local_14,&param_1,piVar9,piVar6 + 4,piVar6);
    puVar3 = local_24;
    puVar4 = (undefined4 *)*local_24;
    *local_24 = local_24;
    local_24[1] = local_24;
    piVar9 = param_1;
    while (param_1 = piVar9, puVar4 != puVar3) {
      puVar2 = (undefined4 *)*puVar4;
      operator_delete(puVar4);
      puVar4 = puVar2;
      piVar9 = param_1;
    }
    operator_delete(local_24);
    puVar4 = (undefined4 *)*puVar5;
    *puVar5 = puVar5;
    puVar5[1] = puVar5;
    while (puVar4 != puVar5) {
      puVar3 = (undefined4 *)*puVar4;
      operator_delete(puVar4);
      puVar4 = puVar3;
    }
    operator_delete(puVar5);
  }
  ExceptionList = local_10;
  return piVar9 + 5;
}


/* FUN_004311a0 @ 004311a0  kind=gamemisc  attributed-by=caller-vote  size=74 */

void FUN_004311a0(void *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)((int)param_1 + 0x14);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)((int)param_1 + 0x14) + 4) = *(int *)((int)param_1 + 0x14);
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  if (piVar2 != *(int **)((int)param_1 + 0x14)) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)((int)param_1 + 0x14));
  }
  operator_delete(*(void **)((int)param_1 + 0x14));
  operator_delete(param_1);
  return;
}


/* FUN_004311f0 @ 004311f0  kind=gamemisc  attributed-by=caller-vote  size=237 */

int * __thiscall FUN_004311f0(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  size_t sVar1;
  uint uVar2;
  void *pvVar3;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar2 = param_1[4] - param_2;
  sVar1 = *(size_t *)((int)this + 0x10);
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (-sVar1 - 1 <= param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (param_3 != 0) {
    uVar2 = sVar1 + param_3;
    if (uVar2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      FUN_004016f0(this,uVar2,sVar1);
      if (uVar2 == 0) {
        return this;
      }
    }
    else if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (0xf < *(uint *)((int)this + 0x14)) {
        **(undefined1 **)this = 0;
        return this;
      }
      *(undefined1 *)this = 0;
      return this;
    }
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(void **)this;
    }
    if (param_3 != 0) {
      memcpy((void *)(*(int *)((int)this + 0x10) + (int)pvVar3),(void *)(param_2 + (int)param_1),
             param_3);
    }
    *(uint *)((int)this + 0x10) = uVar2;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar2) = 0;
      return this;
    }
    *(undefined1 *)((int)this + uVar2) = 0;
  }
  return this;
}


/* FUN_004312e0 @ 004312e0  kind=gamemisc  attributed-by=caller-vote  size=287 */

int * __thiscall FUN_004312e0(void *this,int *param_1,uint param_2)

{
  uint uVar1;
  size_t sVar2;
  int *piVar3;
  void *pvVar4;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(uint *)((int)this + 0x14);
    piVar3 = this;
    if (0xf < uVar1) {
      piVar3 = *(int **)this;
    }
    if (piVar3 <= param_1) {
      pvVar4 = this;
      if (0xf < uVar1) {
        pvVar4 = *(void **)this;
      }
      if (param_1 < (int *)(*(int *)((int)this + 0x10) + (int)pvVar4)) {
        if (0xf < uVar1) {
          piVar3 = FUN_004311f0(this,this,(int)param_1 - *(int *)this,param_2);
          return piVar3;
        }
        piVar3 = FUN_004311f0(this,this,(int)param_1 - (int)this,param_2);
        return piVar3;
      }
    }
  }
  sVar2 = *(size_t *)((int)this + 0x10);
  if (-sVar2 - 1 <= param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (param_2 != 0) {
    uVar1 = sVar2 + param_2;
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      FUN_004016f0(this,uVar1,sVar2);
      if (uVar1 == 0) {
        return this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (0xf < *(uint *)((int)this + 0x14)) {
        **(undefined1 **)this = 0;
        return this;
      }
      *(undefined1 *)this = 0;
      return this;
    }
    pvVar4 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(void **)this;
    }
    if (param_2 != 0) {
      memcpy((void *)(*(int *)((int)this + 0x10) + (int)pvVar4),param_1,param_2);
    }
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar1) = 0;
      return this;
    }
    *(undefined1 *)((int)this + uVar1) = 0;
  }
  return this;
}


/* FUN_0045f030 @ 0045f030  kind=gamemisc  attributed-by=caller-vote  size=67 */

void __thiscall FUN_0045f030(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_004d9b70(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0xccccccb) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00469150 @ 00469150  kind=gamemisc  attributed-by=caller-vote  size=30 */

void __cdecl FUN_00469150(int *param_1,int param_2,void *param_3,size_t param_4,undefined *param_5)

{
  FUN_004709e0(param_1,param_2,param_3,param_4,param_5,'\0');
  return;
}


/* FUN_0046b250 @ 0046b250  kind=gamemisc  attributed-by=caller-vote  size=1 */

void FUN_0046b250(void)

{
  return;
}


/* FUN_004709e0 @ 004709e0  kind=gamemisc  attributed-by=caller-vote  size=182 */

uint __cdecl
FUN_004709e0(int *param_1,int param_2,void *param_3,size_t param_4,undefined *param_5,char param_6)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_004bfc30(param_1,param_2);
  if (uVar1 == 0) {
    if (param_3 != (void *)0x0) {
      piVar2 = (int *)(param_1[0x11] + param_2 * 0x28 + -0x28);
      uVar1 = FUN_004b79e0(piVar2,param_3,param_4,param_6,param_5);
      if ((uVar1 == 0) && (param_6 != '\0')) {
        uVar1 = FUN_004aec30(piVar2,(uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d
                                                   ));
      }
      FUN_004961f0(*param_1,uVar1,(byte *)0x0);
      uVar1 = FUN_0048ca70(*param_1,uVar1);
    }
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
      return uVar1;
    }
  }
  else if ((param_5 != (undefined *)0x0) && (param_5 != (undefined *)0xffffffff)) {
    (*(code *)param_5)(param_3);
  }
  return uVar1;
}


/* FUN_004c6470 @ 004c6470  kind=gamemisc  attributed-by=caller-vote  size=58 */

float * __thiscall FUN_004c6470(void *this,byte *param_1)

{
  *(float *)this = (float)*param_1;
  *(float *)((int)this + 4) = (float)param_1[1];
  *(float *)((int)this + 8) = (float)param_1[2];
  return this;
}


/* FUN_004c6540 @ 004c6540  kind=gamemisc  attributed-by=caller-vote  size=24 */

undefined4 * __thiscall FUN_004c6540(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return this;
}


/* FUN_004c6560 @ 004c6560  kind=gamemisc  attributed-by=caller-vote  size=22 */

undefined4 * __thiscall FUN_004c6560(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return this;
}


/* FUN_004c67a0 @ 004c67a0  kind=gamemisc  attributed-by=caller-vote  size=58 */

undefined4 * __thiscall FUN_004c67a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_004ce6a0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    FUN_00416a90(puVar1 + 6,param_1 + 2);
  }
  return puVar1;
}


/* FUN_004c67e0 @ 004c67e0  kind=gamemisc  attributed-by=caller-vote  size=52 */

undefined4 * __thiscall FUN_004c67e0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0042cf00(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_00416a90(puVar1 + 4,param_1);
    puVar1[10] = param_1[6];
  }
  return puVar1;
}


/* FUN_004c6820 @ 004c6820  kind=gamemisc  attributed-by=caller-vote  size=58 */

undefined4 * __thiscall FUN_004c6820(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_004ce6a0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_00416a90(puVar1 + 4,param_1);
    puVar1[10] = param_1[6];
    puVar1[0xb] = param_1[7];
  }
  return puVar1;
}


/* FUN_004c6860 @ 004c6860  kind=gamemisc  attributed-by=caller-vote  size=123 */

void __cdecl FUN_004c6860(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 0x12;
    do {
      puVar2 = (undefined4 *)*puVar3;
      if (puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar3[1];
        for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
          if ((void *)*puVar2 != (void *)0x0) {
            operator_delete((void *)*puVar2);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
          }
        }
        operator_delete((void *)*puVar3);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar2 = puVar3 + 0x50;
      puVar3 = puVar3 + 0x62;
    } while (puVar2 != param_2);
  }
  return;
}


/* FUN_004c68e0 @ 004c68e0  kind=gamemisc  attributed-by=caller-vote  size=518 */

void __thiscall
FUN_004c68e0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0xaaaaaa8 < *(uint *)((int)this + 4)) {
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
        goto LAB_004c6ac1;
      }
LAB_004c6a18:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_004c6a18;
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
LAB_004c6ac1:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004c6af0 @ 004c6af0  kind=gamemisc  attributed-by=caller-vote  size=559 */

void __thiscall
FUN_004c6af0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x5555553 < *(uint *)((int)this + 4)) {
    if (7 < (uint)param_5[0xb]) {
      operator_delete((void *)param_5[6]);
    }
    param_5[0xb] = 7;
    param_5[10] = 0;
    *(undefined2 *)(param_5 + 6) = 0;
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
        goto LAB_004c6cfa;
      }
LAB_004c6c51:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_004c6c51;
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
LAB_004c6cfa:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004c6d20 @ 004c6d20  kind=gamemisc  attributed-by=caller-vote  size=559 */

void __thiscall
FUN_004c6d20(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x5d1745b < *(uint *)((int)this + 4)) {
    if (7 < (uint)param_5[9]) {
      operator_delete((void *)param_5[4]);
    }
    param_5[9] = 7;
    param_5[8] = 0;
    *(undefined2 *)(param_5 + 4) = 0;
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
        goto LAB_004c6f2a;
      }
LAB_004c6e81:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_004c6e81;
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
LAB_004c6f2a:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004c6f50 @ 004c6f50  kind=gamemisc  attributed-by=caller-vote  size=559 */

void __thiscall
FUN_004c6f50(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x5555553 < *(uint *)((int)this + 4)) {
    if (7 < (uint)param_5[9]) {
      operator_delete((void *)param_5[4]);
    }
    param_5[9] = 7;
    param_5[8] = 0;
    *(undefined2 *)(param_5 + 4) = 0;
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
        goto LAB_004c715a;
      }
LAB_004c70b1:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_004c70b1;
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
LAB_004c715a:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004c7380 @ 004c7380  kind=gamemisc  attributed-by=caller-vote  size=475 */

undefined4 * __thiscall
FUN_004c7380(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  uint uStack_30;
  undefined4 local_20 [2];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar5 = param_3;
  puStack_c = &LAB_00554370;
  local_10 = ExceptionList;
  uStack_30 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_004c68e0(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_30;
    puVar6 = &uStack_30;
    if (*param_3 < param_2[4]) {
LAB_004c73ff:
      local_14 = (undefined1 *)puVar6;
      FUN_004c68e0(local_18,param_1,'\x01',param_2,piVar5,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    local_14 = (undefined1 *)&uStack_30;
    if ((int)((undefined4 *)piVar1[2])[4] < *param_3) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_004c68e0(this,param_1,'\0',(undefined4 *)piVar1[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[4];
    bVar8 = SBORROW4(iVar3,iVar2);
    iVar4 = iVar3 - iVar2;
    puVar6 = &uStack_30;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_004dad80((int *)&param_3);
      iVar4 = *piVar5;
      if (param_3[4] < iVar4) {
        puVar6 = (uint *)local_14;
        if (*(char *)(param_3[2] + 0xd) != '\0') {
          FUN_004c68e0(local_18,param_1,'\0',param_3,piVar5,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_004c73ff;
      }
      bVar8 = SBORROW4(param_2[4],iVar4);
      iVar4 = param_2[4] - iVar4;
      puVar6 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar6;
    if (bVar8 != iVar4 < 0) {
      param_3 = param_2;
      FUN_00407a50((int *)&param_3);
      if ((param_3 == piVar1) || (*piVar5 < param_3[4])) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_004c68e0(local_18,param_1,'\x01',param_3,piVar5,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004c68e0(local_18,param_1,'\0',param_2,piVar5,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar7 = (undefined4 *)FUN_004c79b0(local_18,local_20,'\0',piVar5,param_4);
  *param_1 = *puVar7;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004c7570 @ 004c7570  kind=gamemisc  attributed-by=caller-vote  size=565 */

undefined4 * __thiscall
FUN_004c7570(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uStack_34;
  undefined4 local_24;
  int *local_20;
  void *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00554390;
  local_10 = ExceptionList;
  uStack_34 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_004c6af0(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    puVar3 = &uStack_34;
    if ((*param_3 < param_2[4]) ||
       ((local_14 = (undefined1 *)&uStack_34, *param_3 <= param_2[4] &&
        (local_14 = (undefined1 *)&uStack_34, puVar3 = &uStack_34, param_3[1] < param_2[5])))) {
LAB_004c7601:
      local_14 = (undefined1 *)puVar3;
      FUN_004c6af0(local_1c,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar5 = (undefined4 *)piVar1[2];
    if (((int)puVar5[4] < *param_3) ||
       ((local_14 = (undefined1 *)&uStack_34, (int)puVar5[4] <= *param_3 &&
        (local_14 = (undefined1 *)&uStack_34, (int)puVar5[5] < param_3[1])))) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004c6af0(this,param_1,'\0',puVar5,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    if ((*param_3 < param_2[4]) ||
       ((puVar3 = &uStack_34, *param_3 <= param_2[4] &&
        (puVar3 = &uStack_34, param_3[1] < param_2[5])))) {
      local_20 = param_2;
      FUN_004dad80((int *)&local_20);
      piVar2 = local_20;
      uVar4 = FUN_004ce3b0(local_20 + 4,param_3);
      puVar3 = (uint *)local_14;
      if ((char)uVar4 != '\0') {
        if (*(char *)(piVar2[2] + 0xd) != '\0') {
          FUN_004c6af0(local_1c,param_1,'\0',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_004c7601;
      }
    }
    local_14 = (undefined1 *)puVar3;
    uVar4 = FUN_004ce3b0(param_2 + 4,param_3);
    if ((char)uVar4 != '\0') {
      local_20 = param_2;
      FUN_00407a50((int *)&local_20);
      piVar2 = local_20;
      if ((local_20 == piVar1) || (uVar4 = FUN_004ce3b0(param_3,local_20 + 4), (char)uVar4 != '\0'))
      {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_004c6af0(local_1c,param_1,'\x01',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004c6af0(local_1c,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_004c7ad0(local_1c,&local_24,'\0',param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004c77c0 @ 004c77c0  kind=gamemisc  attributed-by=caller-vote  size=468 */

undefined4 * __thiscall
FUN_004c77c0(void *this,undefined4 *param_1,ushort *param_2,ushort *param_3,int *param_4)

{
  ushort *puVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uStack_2c;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  puStack_c = &LAB_005543b0;
  local_10 = ExceptionList;
  uStack_2c = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    puVar4 = *(ushort **)this;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    puVar5 = *(ushort **)this;
    puVar4 = param_2;
    if (param_2 != *(ushort **)puVar5) {
      if (param_2 == puVar5) {
        puVar4 = param_3;
        if (7 < *(uint *)(param_3 + 10)) {
          puVar4 = *(ushort **)param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        uVar3 = FUN_00419ef0((void *)(*(int *)(puVar5 + 4) + 0x10),0,
                             *(uint *)(*(int *)(puVar5 + 4) + 0x20),puVar4,*(uint *)(param_3 + 8));
        if (-1 < (int)uVar3) goto LAB_004c7961;
        puVar4 = *(ushort **)(*(int *)this + 8);
        cVar7 = '\0';
        goto LAB_004c7809;
      }
      puVar5 = param_2 + 8;
      if (7 < *(uint *)(param_2 + 0x12)) {
        puVar5 = *(ushort **)puVar5;
      }
      uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
      if ((int)uVar3 < 0) {
        param_3 = param_2;
        FUN_004dad80((int *)&param_3);
        puVar5 = param_3;
        bVar2 = FUN_0041ae40(param_3 + 8,puVar1);
        if (!bVar2) goto LAB_004c7906;
        if (*(char *)(*(int *)(puVar5 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_004c7809;
        }
      }
      else {
LAB_004c7906:
        bVar2 = FUN_0041ae40(param_2 + 8,puVar1);
        if (!bVar2) {
LAB_004c7961:
          local_8 = 0xffffffff;
          puVar6 = (undefined4 *)FUN_004c7de0(this,&local_1c,(undefined4 *)0x0,puVar1,param_4);
          *param_1 = *puVar6;
          ExceptionList = local_10;
          return param_1;
        }
        param_3 = param_2;
        FUN_00407a50((int *)&param_3);
        puVar4 = param_3;
        if ((param_3 != (ushort *)*local_18) &&
           (bVar2 = FUN_0041ae40(puVar1,param_3 + 8), this = local_18, !bVar2)) goto LAB_004c7961;
        this = local_18;
        puVar5 = param_2;
        if (*(char *)(*(int *)(param_2 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_004c7809;
        }
      }
      cVar7 = '\0';
      puVar4 = puVar5;
      goto LAB_004c7809;
    }
    puVar5 = param_2 + 8;
    if (7 < *(uint *)(param_2 + 0x12)) {
      puVar5 = *(ushort **)puVar5;
    }
    local_14 = (undefined1 *)&uStack_2c;
    uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
    if (-1 < (int)uVar3) goto LAB_004c7961;
  }
  cVar7 = '\x01';
LAB_004c7809:
  FUN_004c6f50(this,param_1,cVar7,(undefined4 *)puVar4,puVar1,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004c79b0 @ 004c79b0  kind=gamemisc  attributed-by=caller-vote  size=255 */

void __thiscall FUN_004c79b0(void *this,undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_3;
  puStack_c = &LAB_005543d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_18 = true;
  piVar5 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar3 = (int *)piVar1[1];
    do {
      piVar5 = piVar3;
      if (param_2 == '\0') {
        local_18 = *param_3 < piVar5[4];
      }
      else {
        local_18 = *param_3 <= piVar5[4];
      }
      if (local_18 == false) {
        piVar3 = (int *)piVar5[2];
      }
      else {
        piVar3 = (int *)*piVar5;
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar5;
  if (local_18 != false) {
    if (piVar5 == (int *)*piVar1) {
      local_18 = true;
      goto LAB_004c7a43;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar1 = _param_2;
  if (*piVar2 <= _param_2[4]) {
    operator_delete(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_004c7a43:
  puVar4 = (undefined4 *)FUN_004c68e0(this,(undefined4 *)&param_2,local_18,piVar5,piVar2,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004c7ad0 @ 004c7ad0  kind=gamemisc  attributed-by=caller-vote  size=360 */

void __thiscall FUN_004c7ad0(void *this,undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar3 = param_3;
  puStack_c = &LAB_005543f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar5 = *(undefined4 **)this;
  local_8 = 0;
  local_18 = true;
  if (*(char *)((int)puVar5[1] + 0xd) == '\0') {
    iVar1 = *param_3;
    puVar6 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar6;
      iVar2 = puVar5[4];
      if (param_2 == '\0') {
        if ((iVar1 < iVar2) || ((iVar1 <= iVar2 && (param_3[1] < (int)puVar5[5])))) {
          local_18 = true;
          goto LAB_004c7b71;
        }
        local_18 = false;
LAB_004c7b67:
        puVar6 = (undefined4 *)puVar5[2];
      }
      else {
        if ((iVar2 < iVar1) || ((iVar2 <= iVar1 && ((int)puVar5[5] < param_3[1])))) {
          local_18 = true;
        }
        else {
          local_18 = false;
        }
        local_18 = !local_18;
        if (!local_18) goto LAB_004c7b67;
LAB_004c7b71:
        puVar6 = (undefined4 *)*puVar5;
      }
    } while (*(char *)((int)puVar6 + 0xd) == '\0');
  }
  _param_2 = puVar5;
  if (local_18) {
    if (puVar5 == (undefined4 *)**(int **)this) {
      local_18 = true;
      goto LAB_004c7b92;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar4 = param_4;
  puVar6 = _param_2;
  if ((*piVar3 <= (int)_param_2[4]) &&
     ((*piVar3 < (int)_param_2[4] || (piVar3[1] <= (int)_param_2[5])))) {
    if (7 < (uint)param_4[0xb]) {
      operator_delete((void *)param_4[6]);
    }
    piVar4[0xb] = 7;
    piVar4[10] = 0;
    *(undefined2 *)(piVar4 + 6) = 0;
    operator_delete(piVar4);
    *param_1 = puVar6;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_004c7b92:
  puVar5 = (undefined4 *)FUN_004c6af0(this,(undefined4 *)&param_2,local_18,puVar5,piVar3,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004c7c50 @ 004c7c50  kind=gamemisc  attributed-by=caller-vote  size=365 */

void __thiscall
FUN_004c7c50(void *this,undefined4 *param_1,undefined4 *param_2,ushort *param_3,int *param_4)

{
  ushort *this_00;
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_3;
  puStack_c = &LAB_00554410;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = true;
  puVar3 = *(undefined4 **)this;
  puVar5 = (undefined4 *)(*(undefined4 **)this)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      puVar4 = (ushort *)(puVar5 + 4);
      if (7 < (uint)puVar5[9]) {
        puVar4 = *(ushort **)puVar4;
      }
      uVar2 = FUN_00419ef0(this_00,0,*(uint *)(this_00 + 8),puVar4,puVar5[8]);
      local_18 = (int)uVar2 < 0;
    }
    else {
      puVar4 = this_00;
      if (7 < *(uint *)(this_00 + 10)) {
        puVar4 = *(ushort **)this_00;
      }
      uVar2 = FUN_00419ef0(puVar5 + 4,0,puVar5[8],puVar4,*(uint *)(this_00 + 8));
      local_18 = -1 < (int)uVar2;
    }
    puVar3 = puVar5;
    if (local_18 == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar3;
  if (local_18 != false) {
    if (puVar3 == (undefined4 *)**(int **)this) {
      local_18 = true;
      goto LAB_004c7d0e;
    }
    FUN_004dad80((int *)&param_2);
  }
  puVar5 = param_2;
  puVar4 = this_00;
  if (7 < *(uint *)(this_00 + 10)) {
    puVar4 = *(ushort **)this_00;
  }
  uVar2 = FUN_00419ef0(param_2 + 4,0,param_2[8],puVar4,*(uint *)(this_00 + 8));
  piVar1 = param_4;
  if (-1 < (int)uVar2) {
    if (7 < (uint)param_4[9]) {
      operator_delete((void *)param_4[4]);
    }
    piVar1[9] = 7;
    piVar1[8] = 0;
    *(undefined2 *)(piVar1 + 4) = 0;
    operator_delete(piVar1);
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_004c7d0e:
  puVar3 = (undefined4 *)FUN_004c6d20(this,&param_2,local_18,puVar3,this_00,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004c7de0 @ 004c7de0  kind=gamemisc  attributed-by=caller-vote  size=365 */

void __thiscall
FUN_004c7de0(void *this,undefined4 *param_1,undefined4 *param_2,ushort *param_3,int *param_4)

{
  ushort *this_00;
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_3;
  puStack_c = &LAB_00554430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = true;
  puVar3 = *(undefined4 **)this;
  puVar5 = (undefined4 *)(*(undefined4 **)this)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      puVar4 = (ushort *)(puVar5 + 4);
      if (7 < (uint)puVar5[9]) {
        puVar4 = *(ushort **)puVar4;
      }
      uVar2 = FUN_00419ef0(this_00,0,*(uint *)(this_00 + 8),puVar4,puVar5[8]);
      local_18 = (int)uVar2 < 0;
    }
    else {
      puVar4 = this_00;
      if (7 < *(uint *)(this_00 + 10)) {
        puVar4 = *(ushort **)this_00;
      }
      uVar2 = FUN_00419ef0(puVar5 + 4,0,puVar5[8],puVar4,*(uint *)(this_00 + 8));
      local_18 = -1 < (int)uVar2;
    }
    puVar3 = puVar5;
    if (local_18 == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar3;
  if (local_18 != false) {
    if (puVar3 == (undefined4 *)**(int **)this) {
      local_18 = true;
      goto LAB_004c7e9e;
    }
    FUN_004dad80((int *)&param_2);
  }
  puVar5 = param_2;
  puVar4 = this_00;
  if (7 < *(uint *)(this_00 + 10)) {
    puVar4 = *(ushort **)this_00;
  }
  uVar2 = FUN_00419ef0(param_2 + 4,0,param_2[8],puVar4,*(uint *)(this_00 + 8));
  piVar1 = param_4;
  if (-1 < (int)uVar2) {
    if (7 < (uint)param_4[9]) {
      operator_delete((void *)param_4[4]);
    }
    piVar1[9] = 7;
    piVar1[8] = 0;
    *(undefined2 *)(piVar1 + 4) = 0;
    operator_delete(piVar1);
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_004c7e9e:
  puVar3 = (undefined4 *)FUN_004c6f50(this,&param_2,local_18,puVar3,this_00,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004c7f70 @ 004c7f70  kind=gamemisc  attributed-by=caller-vote  size=126 */

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


/* FUN_004c8020 @ 004c8020  kind=gamemisc  attributed-by=caller-vote  size=128 */

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


/* FUN_004c8120 @ 004c8120  kind=gamemisc  attributed-by=caller-vote  size=8 */

undefined4 __cdecl FUN_004c8120(undefined4 param_1)

{
  return param_1;
}


/* FUN_004c8130 @ 004c8130  kind=gamemisc  attributed-by=caller-vote  size=23 */

void __cdecl FUN_004c8130(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}


/* FUN_004c8150 @ 004c8150  kind=gamemisc  attributed-by=caller-vote  size=21 */

void __cdecl FUN_004c8150(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


/* FUN_004c8190 @ 004c8190  kind=gamemisc  attributed-by=caller-vote  size=229 */

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


/* FUN_004cde20 @ 004cde20  kind=gamemisc  attributed-by=caller-vote  size=22 */

undefined4 * __thiscall FUN_004cde20(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return this;
}


/* FUN_004cde60 @ 004cde60  kind=gamemisc  attributed-by=caller-vote  size=130 */

int * __thiscall FUN_004cde60(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_c [2];
  
  piVar3 = *(int **)this;
  piVar4 = piVar3;
  if (*(char *)(piVar3[1] + 0xd) == '\0') {
    piVar1 = (int *)piVar3[1];
    do {
      if (piVar1[4] < *param_1) {
        piVar2 = (int *)piVar1[2];
      }
      else {
        piVar2 = (int *)*piVar1;
        piVar4 = piVar1;
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  }
  if ((piVar4 != piVar3) && (piVar4[4] <= *param_1)) {
    return piVar4 + 5;
  }
  local_c[0] = *param_1;
  local_c[1] = 0;
  piVar3 = FUN_0052df80(this,local_c);
  FUN_004c7380(this,&param_1,piVar4,piVar3 + 4,piVar3);
  return param_1 + 5;
}


/* FUN_004cdef0 @ 004cdef0  kind=gamemisc  attributed-by=caller-vote  size=257 */

void __thiscall FUN_004cdef0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_50;
  void *local_4c [4];
  undefined4 local_3c;
  uint local_38;
  int local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005548a0;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = FUN_004f7c60(this,param_1);
  if (piVar1 != *(int **)this) {
    if ((piVar1[4] <= *param_1) && ((piVar1[4] < *param_1 || (piVar1[5] <= param_1[1]))))
    goto LAB_004cdfd0;
  }
  local_38 = 7;
  local_3c = 0;
  local_4c[0] = (void *)((uint)local_4c[0] & 0xffff0000);
  local_8 = 0;
  local_34 = *param_1;
  local_30 = param_1[1];
  FUN_00416a90(local_2c,local_4c);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar2 = FUN_004c67a0(this,&local_34);
  FUN_004c7570(this,&local_50,piVar1,piVar2 + 4,piVar2);
  if (7 < local_18) {
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  if (7 < local_38) {
    operator_delete(local_4c[0]);
  }
LAB_004cdfd0:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004ce000 @ 004ce000  kind=gamemisc  attributed-by=caller-vote  size=219 */

void __thiscall FUN_004ce000(void *this,ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005548d8;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (ushort *)FUN_0042d3d0(this,param_1);
  if (puVar1 != *(ushort **)this) {
    puVar2 = puVar1 + 8;
    if (7 < *(uint *)(puVar1 + 0x12)) {
      puVar2 = *(ushort **)puVar2;
    }
    uVar3 = FUN_00419ef0(param_1,0,*(uint *)(param_1 + 8),puVar2,*(uint *)(puVar1 + 0x10));
    if (-1 < (int)uVar3) goto LAB_004ce0ba;
  }
  local_1c = 7;
  local_20 = 0;
  local_30[0] = (void *)((uint)local_30[0] & 0xffff0000);
  FUN_004172f0(local_30,(int *)param_1,0,0xffffffff);
  local_18 = 0;
  local_8 = 0;
  piVar4 = FUN_004c67e0(this,local_30);
  FUN_0042a070(this,&local_34,puVar1,(ushort *)(piVar4 + 4),piVar4);
  if (7 < local_1c) {
    operator_delete(local_30[0]);
  }
LAB_004ce0ba:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004ce0e0 @ 004ce0e0  kind=gamemisc  attributed-by=caller-vote  size=226 */

void __thiscall FUN_004ce0e0(void *this,ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_38;
  void *local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554908;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (ushort *)FUN_0042d3d0(this,param_1);
  if (puVar1 != *(ushort **)this) {
    puVar2 = puVar1 + 8;
    if (7 < *(uint *)(puVar1 + 0x12)) {
      puVar2 = *(ushort **)puVar2;
    }
    uVar3 = FUN_00419ef0(param_1,0,*(uint *)(param_1 + 8),puVar2,*(uint *)(puVar1 + 0x10));
    if (-1 < (int)uVar3) goto LAB_004ce1a1;
  }
  local_20 = 7;
  local_24 = 0;
  local_34[0] = (void *)((uint)local_34[0] & 0xffff0000);
  FUN_004172f0(local_34,(int *)param_1,0,0xffffffff);
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  piVar4 = FUN_004c6820(this,local_34);
  FUN_004c77c0(this,&local_38,puVar1,(ushort *)(piVar4 + 4),piVar4);
  if (7 < local_20) {
    operator_delete(local_34[0]);
  }
LAB_004ce1a1:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004ce3b0 @ 004ce3b0  kind=gamemisc  attributed-by=caller-vote  size=39 */

uint FUN_004ce3b0(int *param_1,int *param_2)

{
  if ((*param_2 <= *param_1) &&
     ((*param_2 < *param_1 || (param_1 = (int *)param_1[1], param_2[1] <= (int)param_1)))) {
    return (uint)param_1 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* FUN_004ce580 @ 004ce580  kind=gamemisc  attributed-by=caller-vote  size=102 */

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


/* FUN_004ce5f0 @ 004ce5f0  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_004ce5f0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ce5fe. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_004ce620 @ 004ce620  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_004ce620(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x48);
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


/* FUN_004ce6a0 @ 004ce6a0  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * __fastcall FUN_004ce6a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x30);
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


/* FUN_004d1a70 @ 004d1a70  kind=gamemisc  attributed-by=caller-vote  size=1805 */

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


/* FUN_004d24a0 @ 004d24a0  kind=gamemisc  attributed-by=caller-vote  size=87 */

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


/* FUN_004d3df0 @ 004d3df0  kind=gamemisc  attributed-by=caller-vote  size=14 */

void __fastcall FUN_004d3df0(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8000c0));
  return;
}


/* FUN_004d3e10 @ 004d3e10  kind=gamemisc  attributed-by=caller-vote  size=189 */

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


/* FUN_004d3ed0 @ 004d3ed0  kind=gamemisc  attributed-by=caller-vote  size=680 */

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


/* FUN_004d4470 @ 004d4470  kind=gamemisc  attributed-by=caller-vote  size=69 */

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


/* FUN_004d5c60 @ 004d5c60  kind=gamemisc  attributed-by=caller-vote  size=14 */

void __fastcall FUN_004d5c60(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8000c0));
  return;
}


/* FUN_004d81b0 @ 004d81b0  kind=gamemisc  attributed-by=caller-vote  size=494 */

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


/* FUN_004d8dc0 @ 004d8dc0  kind=gamemisc  attributed-by=caller-vote  size=25 */

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


/* FUN_004d8de0 @ 004d8de0  kind=gamemisc  attributed-by=caller-vote  size=25 */

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


/* FUN_004d8e30 @ 004d8e30  kind=gamemisc  attributed-by=caller-vote  size=39 */

float10 __fastcall FUN_004d8e30(double *param_1)

{
  return (float10)(*param_1 * *param_1 + param_1[1] * param_1[1]);
}


/* FUN_004d8e60 @ 004d8e60  kind=gamemisc  attributed-by=caller-vote  size=265 */

void __thiscall FUN_004d8e60(void *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  void *local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (((*(uint *)((int)this + 0x3c) & 2) == 0) &&
     (uVar1 = **(uint **)((int)this + 0x20), uVar1 != 0)) {
    uVar2 = *(uint *)((int)this + 0x38);
    if (*(uint *)((int)this + 0x38) < uVar1) {
      uVar2 = uVar1;
    }
    local_c = 0xf;
    local_10 = 0;
    local_20[0] = (void *)((uint)local_20[0]._1_3_ << 8);
    FUN_00401a40(local_20,(int *)**(undefined4 **)((int)this + 0x10),
                 uVar2 - (int)**(undefined4 **)((int)this + 0x10));
    FUN_00416a20(param_1,local_20);
    if (0xf < local_c) {
      operator_delete(local_20[0]);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else {
    if (((*(uint *)((int)this + 0x3c) & 4) == 0) && (**(int **)((int)this + 0x1c) != 0)) {
      local_c = 0xf;
      local_10 = 0;
      local_20[0] = (void *)((uint)local_20[0]._1_3_ << 8);
      FUN_00401a40(local_20,(int *)**(undefined4 **)((int)this + 0xc),
                   (**(int **)((int)this + 0x2c) + **(int **)((int)this + 0x1c)) -
                   (int)**(undefined4 **)((int)this + 0xc));
    }
    else {
      local_c = 0xf;
      local_10 = 0;
      local_20[0] = (void *)((uint)local_20[0]._1_3_ << 8);
    }
    FUN_00416a20(param_1,local_20);
    if (0xf < local_c) {
      operator_delete(local_20[0]);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d8f70 @ 004d8f70  kind=gamemisc  attributed-by=caller-vote  size=31 */

void * __thiscall FUN_004d8f70(void *this,void *param_1)

{
  FUN_004d8e60((void *)((int)this + 0x18),param_1);
  return param_1;
}


/* FUN_004d8f90 @ 004d8f90  kind=gamemisc  attributed-by=caller-vote  size=115 */

void __thiscall FUN_004d8f90(void *this,int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4) & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  if (uVar2 == 1) {
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    *param_1 = (*(int *)((int)this + 100) - *param_1) + -1;
  }
  else if (uVar2 == 2) {
    *param_1 = (*(int *)((int)this + 100) - *param_1) + -1;
    *param_2 = (*(int *)((int)this + 0x68) - *param_2) + -1;
  }
  else if (uVar2 == 3) {
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    *param_2 = (*(int *)((int)this + 0x68) - iVar1) + -1;
  }
  if (*(char *)((int)this + 8) != '\0') {
    *param_2 = (*(int *)((int)this + 0x68) - *param_2) + -1;
  }
  return;
}


/* FUN_004e1230 @ 004e1230  kind=gamemisc  attributed-by=caller-vote  size=78 */

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


