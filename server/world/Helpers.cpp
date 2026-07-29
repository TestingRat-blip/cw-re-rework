// Helpers (world) -- server. 170 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers.h"

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


/* FUN_00402bc0 @ 00402bc0  kind=gamemisc  attributed-by=caller-vote  size=6 */

int __fastcall FUN_00402bc0(int *param_1)

{
  return *param_1 + 0x10;
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


/* FUN_00407a30 @ 00407a30  kind=gamemisc  attributed-by=caller-vote  size=23 */

int * __thiscall FUN_00407a30(void *this,int *param_1)

{
  *param_1 = *(int *)this;
  FUN_00407a50(this);
  return param_1;
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


/* FUN_0041d800 @ 0041d800  kind=gamemisc  attributed-by=caller-vote  size=28 */

undefined4 * __thiscall FUN_0041d800(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
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


/* FUN_004d3df0 @ 004d3df0  kind=gamemisc  attributed-by=caller-vote  size=14 */

void __fastcall FUN_004d3df0(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8000c0));
  return;
}


/* FUN_004d5c60 @ 004d5c60  kind=gamemisc  attributed-by=caller-vote  size=14 */

void __fastcall FUN_004d5c60(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8000c0));
  return;
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


/* FUN_004f39e0 @ 004f39e0  kind=gamemisc  attributed-by=caller-vote  size=147 */

void __cdecl FUN_004f39e0(int param_1,int param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar2 = *(float *)(param_1 + iVar4 * 0xc);
    pfVar1 = (float *)(param_1 + -0xc + iVar4 * 0xc);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar4 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar3 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -8 + param_3 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    iVar3 = param_3 + -1;
  }
  FUN_004f5bc0(param_1,iVar3,param_2,param_4);
  return;
}


/* FUN_004f3ba0 @ 004f3ba0  kind=gamemisc  attributed-by=caller-vote  size=70 */

int FUN_004f3ba0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004f7b60(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
    *(undefined4 *)(iVar1 + 0x14) = param_3[3];
    *(undefined4 *)(iVar1 + 0x18) = param_3[4];
    *(undefined4 *)(iVar1 + 0x1c) = param_3[5];
  }
  return iVar1;
}


/* FUN_004f3e70 @ 004f3e70  kind=gamemisc  attributed-by=caller-vote  size=518 */

void __thiscall
FUN_004f3e70(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x7fffffd < *(uint *)((int)this + 4)) {
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
        goto LAB_004f4051;
      }
LAB_004f3fa8:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_004f3fa8;
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
LAB_004f4051:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004f49d0 @ 004f49d0  kind=gamemisc  attributed-by=caller-vote  size=138 */

void __cdecl FUN_004f49d0(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  
  uVar7 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  pfVar6 = param_1;
  if (param_1 != param_2) {
    while (pfVar6 = pfVar6 + 3, pfVar6 != param_2) {
      fVar2 = *pfVar6;
      uVar5 = *(undefined8 *)(pfVar6 + 1);
      uVar4 = *(undefined8 *)(pfVar6 + 1);
      if (fVar2 < *param_1 || fVar2 == *param_1) {
        fVar3 = pfVar6[-3];
        pfVar8 = pfVar6;
        while (fVar3 < fVar2) {
          *pfVar8 = fVar3;
          pfVar8[1] = pfVar8[-2];
          pfVar8[2] = pfVar8[-1];
          fVar3 = pfVar8[-6];
          pfVar8 = pfVar8 + -3;
        }
        *pfVar8 = fVar2;
        *(undefined8 *)(pfVar8 + 1) = uVar5;
      }
      else {
        if (param_1 != pfVar6) {
          pfVar8 = pfVar6 + 4;
          do {
            pfVar8[-4] = pfVar8[-7];
            pfVar8[-3] = pfVar8[-6];
            pfVar8[-2] = pfVar8[-5];
            pfVar1 = pfVar8 + -7;
            pfVar8 = pfVar8 + -3;
          } while (pfVar1 != param_1);
        }
        *param_1 = fVar2;
        *(undefined8 *)(param_1 + 1) = uVar4;
      }
    }
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f4dd0 @ 004f4dd0  kind=gamemisc  attributed-by=caller-vote  size=345 */

void __cdecl FUN_004f4dd0(int param_1,int param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar7 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar5 = (param_2 - param_1) / 0xc;
  iVar12 = iVar5 / 2;
  if (0 < iVar12) {
    iVar10 = iVar12 * 2 + 2;
    iVar8 = param_1 + iVar12 * 0xc + 8;
    do {
      puVar1 = (undefined8 *)(iVar8 + -0x10);
      fVar3 = *(float *)(iVar8 + -0x14);
      iVar8 = iVar8 + -0xc;
      uVar6 = *puVar1;
      iVar10 = iVar10 + -2;
      iVar12 = iVar12 + -1;
      iVar11 = iVar10;
      iVar9 = iVar12;
      while (iVar13 = iVar11, iVar13 < iVar5) {
        fVar4 = *(float *)(param_1 + iVar13 * 0xc);
        pfVar2 = (float *)(param_1 + -0xc + iVar13 * 0xc);
        if (*pfVar2 <= fVar4 && fVar4 != *pfVar2) {
          iVar13 = iVar13 + -1;
        }
        *(undefined4 *)(param_1 + iVar9 * 0xc) = *(undefined4 *)(param_1 + iVar13 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar13 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar13 * 0xc);
        iVar9 = iVar13;
        iVar11 = iVar13 * 2 + 2;
      }
      if (iVar13 == iVar5) {
        *(undefined4 *)(param_1 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -0xc + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -8 + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -4 + iVar5 * 0xc);
        iVar9 = iVar5 + -1;
      }
      while (iVar12 < iVar9) {
        iVar11 = (iVar9 + -1) / 2;
        fVar4 = *(float *)(param_1 + iVar11 * 0xc);
        if (fVar4 <= fVar3) break;
        *(float *)(param_1 + iVar9 * 0xc) = fVar4;
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar11 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar11 * 0xc);
        iVar9 = iVar11;
      }
      *(float *)(param_1 + iVar9 * 0xc) = fVar3;
      *(undefined8 *)(param_1 + 4 + iVar9 * 0xc) = uVar6;
    } while (0 < iVar12);
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f55b0 @ 004f55b0  kind=gamemisc  attributed-by=caller-vote  size=899 */

void __cdecl FUN_004f55b0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  
  fVar1 = *param_1;
  iVar5 = ((int)param_3 - (int)param_1) / 0xc;
  if (iVar5 < 0x29) {
    fVar2 = *param_2;
    if (fVar1 < fVar2) {
      fVar3 = param_2[1];
      fVar4 = param_2[2];
      *param_2 = fVar1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = fVar2;
      param_1[1] = fVar3;
      param_1[2] = fVar4;
    }
    fVar1 = *param_3;
    if (*param_2 < fVar1) {
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (*param_1 < fVar1) {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        param_2[2] = param_1[2];
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
      }
    }
  }
  else {
    iVar5 = iVar5 + 1;
    iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
    fVar2 = param_1[iVar5 * 3];
    if (fVar1 < fVar2) {
      fVar3 = param_1[iVar5 * 3 + 2];
      fVar4 = param_1[iVar5 * 3 + 1];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = param_1[1];
      param_1[iVar5 * 3 + 2] = param_1[2];
      *param_1 = fVar2;
      param_1[2] = fVar3;
      param_1[1] = fVar4;
    }
    fVar1 = param_1[iVar5 * 6];
    if (param_1[iVar5 * 3] < fVar1) {
      fVar2 = param_1[iVar5 * 6 + 1];
      fVar3 = param_1[iVar5 * 6 + 2];
      param_1[iVar5 * 6] = param_1[iVar5 * 3];
      param_1[iVar5 * 6 + 1] = param_1[iVar5 * 3 + 1];
      param_1[iVar5 * 6 + 2] = param_1[iVar5 * 3 + 2];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = fVar2;
      param_1[iVar5 * 3 + 2] = fVar3;
      fVar1 = param_1[iVar5 * 3];
      if (*param_1 < fVar1) {
        param_1[iVar5 * 3] = *param_1;
        param_1[iVar5 * 3 + 1] = param_1[1];
        param_1[iVar5 * 3 + 2] = param_1[2];
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
      }
    }
    fVar1 = *param_2;
    pfVar6 = param_2 + iVar5 * -3;
    if (*pfVar6 < fVar1) {
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      *param_2 = *pfVar6;
      param_2[1] = pfVar6[1];
      param_2[2] = pfVar6[2];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
    }
    fVar1 = param_2[iVar5 * 3];
    if (*param_2 < fVar1) {
      fVar2 = param_2[iVar5 * 3 + 1];
      fVar3 = param_2[iVar5 * 3 + 2];
      param_2[iVar5 * 3] = *param_2;
      param_2[iVar5 * 3 + 1] = param_2[1];
      param_2[iVar5 * 3 + 2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (*pfVar6 < fVar1) {
        *param_2 = *pfVar6;
        param_2[1] = pfVar6[1];
        param_2[2] = pfVar6[2];
        *pfVar6 = fVar1;
        pfVar6[1] = fVar2;
        pfVar6[2] = fVar3;
      }
    }
    pfVar7 = param_3 + iVar5 * -6;
    pfVar6 = param_3 + iVar5 * -3;
    fVar1 = *pfVar6;
    if (*pfVar7 < fVar1) {
      fVar2 = pfVar6[2];
      fVar3 = pfVar6[1];
      *pfVar6 = *pfVar7;
      pfVar6[1] = pfVar7[1];
      pfVar6[2] = pfVar7[2];
      *pfVar7 = fVar1;
      pfVar7[2] = fVar2;
      pfVar7[1] = fVar3;
    }
    fVar1 = *param_3;
    if (*pfVar6 < fVar1) {
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      *param_3 = *pfVar6;
      param_3[1] = pfVar6[1];
      param_3[2] = pfVar6[2];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
      fVar1 = *pfVar6;
      if (*pfVar7 < fVar1) {
        fVar2 = pfVar6[1];
        *pfVar6 = *pfVar7;
        pfVar6[1] = pfVar7[1];
        pfVar6[2] = pfVar7[2];
        *pfVar7 = fVar1;
        pfVar7[1] = fVar2;
        pfVar7[2] = fVar3;
      }
    }
    fVar1 = *param_2;
    if (param_1[iVar5 * 3] < fVar1) {
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      *param_2 = param_1[iVar5 * 3];
      param_2[1] = param_1[iVar5 * 3 + 1];
      param_2[2] = param_1[iVar5 * 3 + 2];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = fVar2;
      param_1[iVar5 * 3 + 2] = fVar3;
    }
    fVar1 = *pfVar6;
    if (*param_2 < fVar1) {
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      *pfVar6 = *param_2;
      pfVar6[1] = param_2[1];
      pfVar6[2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (param_1[iVar5 * 3] < fVar1) {
        *param_2 = param_1[iVar5 * 3];
        param_2[1] = param_1[iVar5 * 3 + 1];
        param_2[2] = param_1[iVar5 * 3 + 2];
        param_1[iVar5 * 3] = fVar1;
        param_1[iVar5 * 3 + 1] = fVar2;
        param_1[iVar5 * 3 + 2] = fVar3;
        return;
      }
    }
  }
  return;
}


/* FUN_004f5bc0 @ 004f5bc0  kind=gamemisc  attributed-by=caller-vote  size=113 */

void __cdecl FUN_004f5bc0(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    fVar1 = *(float *)(param_1 + iVar2 * 0xc);
    if (fVar1 < *param_4 || fVar1 == *param_4) break;
    *(float *)(param_1 + param_2 * 0xc) = fVar1;
    *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar2 * 0xc);
    param_2 = iVar2;
  }
  *(float *)(param_1 + param_2 * 0xc) = *param_4;
  *(float *)(param_1 + 4 + param_2 * 0xc) = param_4[1];
  *(float *)(param_1 + 8 + param_2 * 0xc) = param_4[2];
  return;
}


/* FUN_004f5f40 @ 004f5f40  kind=gamemisc  attributed-by=caller-vote  size=310 */

void __cdecl FUN_004f5f40(float *param_1,float *param_2,int param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  undefined4 local_c [2];
  
  iVar3 = (int)param_2 - (int)param_1;
  do {
    iVar3 = iVar3 / 0xc;
    if (iVar3 < 0x21) {
LAB_004f6018:
      if (1 < iVar3) {
        FUN_004f49d0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar3) {
        if (1 < ((int)param_2 - (int)param_1) / 0xc) {
          FUN_004f4dd0((int)param_1,(int)param_2);
        }
        FUN_004f6330(param_1,(int)param_2);
        return;
      }
      goto LAB_004f6018;
    }
    puVar2 = (undefined4 *)FUN_004f6a60(local_c,param_1,param_2);
    pfVar4 = (float *)*puVar2;
    pfVar1 = (float *)puVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)pfVar4 - (int)param_1) / 0xc < ((int)param_2 - (int)pfVar1) / 0xc) {
      FUN_004f5f40(param_1,pfVar4,param_3,param_4);
      param_1 = pfVar1;
      pfVar4 = param_2;
    }
    else {
      FUN_004f5f40(pfVar1,param_2,param_3,param_4);
    }
    iVar3 = (int)pfVar4 - (int)param_1;
    param_2 = pfVar4;
  } while( true );
}


/* FUN_004f6330 @ 004f6330  kind=gamemisc  attributed-by=caller-vote  size=192 */

void __cdecl FUN_004f6330(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (1 < (param_2 - (int)param_1) / 0xc) {
    puVar1 = (undefined4 *)(param_2 + -8);
    do {
      local_10 = *puVar1;
      local_14 = (float)puVar1[-1];
      local_c = puVar1[1];
      puVar1[-1] = *param_1;
      *puVar1 = param_1[1];
      puVar1[1] = param_1[2];
      FUN_004f39e0((int)param_1,0,((-4 - (int)param_1) + (int)puVar1) / 0xc,&local_14);
      puVar1 = puVar1 + -3;
    } while (1 < ((8 - (int)param_1) + (int)puVar1) / 0xc);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f6a60 @ 004f6a60  kind=gamemisc  attributed-by=caller-vote  size=170 */

void __cdecl FUN_004f6a60(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *local_64;
  
  uVar5 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_64 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_004f55b0(param_2,local_64,param_3 + -3);
  pfVar6 = local_64 + 3;
  for (; param_2 < local_64; local_64 = local_64 + -3) {
    if ((*local_64 < local_64[-3]) || (local_64[-3] < *local_64)) break;
  }
  pfVar4 = pfVar6;
  pfVar9 = local_64;
  if (pfVar6 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)pfVar6)) / 0xc) {
      fVar1 = *local_64;
      do {
        pfVar4 = pfVar6;
        if ((fVar1 < *pfVar6) || (*pfVar6 < fVar1)) goto joined_r0x004f6b93;
        if ((fVar1 < pfVar6[3]) || (pfVar6[3] < fVar1)) {
          pfVar6 = pfVar6 + 3;
          pfVar4 = pfVar6;
          goto joined_r0x004f6b93;
        }
        if ((fVar1 < pfVar6[6]) || (pfVar6[6] < fVar1)) {
          pfVar6 = pfVar6 + 6;
          pfVar4 = pfVar6;
          goto joined_r0x004f6b93;
        }
        if ((fVar1 < pfVar6[9]) || (pfVar6[9] < fVar1)) {
          pfVar6 = pfVar6 + 9;
          pfVar4 = pfVar6;
          goto joined_r0x004f6b93;
        }
        pfVar6 = pfVar6 + 0xc;
      } while ((int)pfVar6 < (int)(param_3 + -9));
    }
    pfVar4 = pfVar6;
    if (pfVar6 < param_3) {
      do {
        pfVar4 = pfVar6;
        if ((*local_64 < *pfVar6) || (*pfVar6 < *local_64)) break;
        pfVar6 = pfVar6 + 3;
        pfVar4 = pfVar6;
      } while (pfVar6 < param_3);
    }
  }
joined_r0x004f6b93:
  do {
    if (param_3 <= pfVar4) {
joined_r0x004f6be9:
      for (; param_2 < local_64; local_64 = local_64 + -3) {
        fVar1 = local_64[-3];
        pfVar7 = pfVar9;
        if (fVar1 <= *pfVar9) {
          if (fVar1 < *pfVar9) break;
          fVar2 = pfVar9[-3];
          pfVar7 = pfVar9 + -3;
          uVar3 = *(undefined8 *)(pfVar9 + -2);
          *pfVar7 = fVar1;
          pfVar9[-2] = local_64[-2];
          pfVar9[-1] = local_64[-1];
          local_64[-3] = fVar2;
          *(undefined8 *)(local_64 + -2) = uVar3;
        }
        pfVar9 = pfVar7;
      }
      if (local_64 == param_2) {
        if (pfVar4 == param_3) {
          *param_1 = pfVar9;
          param_1[1] = pfVar6;
          __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (pfVar6 != pfVar4) {
          fVar1 = *pfVar9;
          uVar3 = *(undefined8 *)(pfVar9 + 1);
          *pfVar9 = *pfVar6;
          pfVar9[1] = pfVar6[1];
          pfVar9[2] = pfVar6[2];
          *pfVar6 = fVar1;
          *(undefined8 *)(pfVar6 + 1) = uVar3;
        }
        fVar1 = *pfVar9;
        uVar3 = *(undefined8 *)(pfVar9 + 1);
        *pfVar9 = *pfVar4;
        pfVar9[1] = pfVar4[1];
        pfVar9[2] = pfVar4[2];
        *pfVar4 = fVar1;
        *(undefined8 *)(pfVar4 + 1) = uVar3;
        pfVar6 = pfVar6 + 3;
        pfVar4 = pfVar4 + 3;
        pfVar9 = pfVar9 + 3;
      }
      else {
        pfVar7 = local_64 + -3;
        if (pfVar4 == param_3) {
          pfVar10 = pfVar9 + -3;
          if (pfVar7 != pfVar10) {
            fVar1 = *pfVar7;
            uVar3 = *(undefined8 *)(local_64 + -2);
            *pfVar7 = *pfVar10;
            local_64[-2] = pfVar9[-2];
            local_64[-1] = pfVar9[-1];
            *pfVar10 = fVar1;
            *(undefined8 *)(pfVar9 + -2) = uVar3;
          }
          fVar1 = *pfVar10;
          uVar3 = *(undefined8 *)(pfVar9 + -2);
          pfVar8 = pfVar6 + -3;
          *pfVar10 = *pfVar8;
          pfVar9[-2] = pfVar6[-2];
          pfVar9[-1] = pfVar6[-1];
          *pfVar8 = fVar1;
          *(undefined8 *)(pfVar6 + -2) = uVar3;
          pfVar6 = pfVar8;
          local_64 = pfVar7;
          pfVar9 = pfVar10;
        }
        else {
          fVar1 = *pfVar4;
          uVar3 = *(undefined8 *)(pfVar4 + 1);
          *pfVar4 = *pfVar7;
          pfVar4[1] = local_64[-2];
          pfVar4[2] = local_64[-1];
          *pfVar7 = fVar1;
          *(undefined8 *)(local_64 + -2) = uVar3;
          pfVar4 = pfVar4 + 3;
          local_64 = pfVar7;
        }
      }
      goto joined_r0x004f6b93;
    }
    fVar1 = *pfVar4;
    pfVar7 = pfVar6;
    if (*pfVar9 <= fVar1) {
      if (*pfVar9 < fVar1) goto joined_r0x004f6be9;
      pfVar7 = pfVar6 + 3;
      fVar2 = *pfVar6;
      uVar3 = *(undefined8 *)(pfVar6 + 1);
      *pfVar6 = fVar1;
      pfVar6[1] = pfVar4[1];
      pfVar6[2] = pfVar4[2];
      *pfVar4 = fVar2;
      *(undefined8 *)(pfVar4 + 1) = uVar3;
    }
    pfVar6 = pfVar7;
    pfVar4 = pfVar4 + 3;
  } while( true );
}


/* FUN_004f7620 @ 004f7620  kind=gamemisc  attributed-by=caller-vote  size=52 */

undefined4 * __thiscall FUN_004f7620(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = *param_2;
  *(undefined4 *)((int)this + 0x10) = param_2[1];
  *(undefined4 *)((int)this + 0x14) = param_2[2];
  return this;
}


/* FUN_004f7660 @ 004f7660  kind=gamemisc  attributed-by=caller-vote  size=166 */

undefined4 * __fastcall FUN_004f7660(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return param_1;
}


/* FUN_004f7be0 @ 004f7be0  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * __fastcall FUN_004f7be0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x20);
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


/* FUN_004f7c60 @ 004f7c60  kind=gamemisc  attributed-by=caller-vote  size=63 */

undefined4 * __thiscall FUN_004f7c60(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (((int)puVar1[4] < *param_1) ||
         (((int)puVar1[4] <= *param_1 && ((int)puVar1[5] < param_1[1])))) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  return puVar3;
}


/* FUN_0052df80 @ 0052df80  kind=gamemisc  attributed-by=caller-vote  size=44 */

undefined4 * __thiscall FUN_0052df80(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0052ed60(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
  }
  return puVar1;
}


/* FUN_0052ed60 @ 0052ed60  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * __fastcall FUN_0052ed60(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
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


/* FUN_00530550 @ 00530550  kind=gamemisc  attributed-by=caller-vote  size=14 */

void __thiscall FUN_00530550(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)this;
  return;
}


/* FUN_00549300 @ 00549300  kind=gamemisc  attributed-by=caller-vote  size=40 */

void FUN_00549300(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00426a30(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
  }
  return;
}


/* FUN_00549330 @ 00549330  kind=gamemisc  attributed-by=caller-vote  size=264 */

basic_istream<char,std::char_traits<char>_> * __thiscall
FUN_00549330(void *this,char *param_1,uint param_2,int *param_3,int param_4)

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
  pbVar1 = FUN_0042f890(this_00,param_1,param_2 | 1,param_3);
  if (pbVar1 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*(int *)this + 4) + (int)this),2
               ,false);
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_00549440 @ 00549440  kind=gamemisc  attributed-by=caller-vote  size=264 */

basic_ostream<char,std::char_traits<char>_> * __thiscall
FUN_00549440(void *this,char *param_1,uint param_2,int *param_3,int param_4)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005566ed;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    *(undefined ***)this = &PTR_0055b510;
    *(code **)((int)this + 0x60) = _vftable__exref;
    *(code **)((int)this + 0x60) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 4);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00,false);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ofstream<char,std::char_traits<char>_> */
  *(basic_ofstream<char,std::char_traits<char>_>_vftable **)((int)this + *(int *)(*(int *)this + 4))
       = &std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x60;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  local_8._0_1_ = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x49) = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this_00);
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = DAT_00583e00;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  pbVar1 = FUN_0042f890(this_00,param_1,param_2 | 2,param_3);
  if (pbVar1 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*(int *)this + 4) + (int)this),2
               ,false);
  }
  ExceptionList = local_10;
  return this;
}


/* Facet_Register @ 0054a710  kind=gamemisc  attributed-by=caller-vote  size=40 */

/* Library Function - Multiple Matches With Same Base Name
    private: static void __cdecl std::locale::facet::_Facet_Register(class std::locale::facet *)
    void __cdecl std::_Facet_Register(class std::_Facet_base *)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cdecl Facet_Register(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = DAT_005842f4;
    puVar1[1] = param_1;
  }
  DAT_005842f4 = puVar1;
  return;
}


