// helpers_ctor_like (game_misc) -- server. 19 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_ctor_like.h"

/* FUN_004063d0 @ 004063d0  kind=gamemisc  attributed-by=role:ctor-like  size=35 */

int __fastcall FUN_004063d0(int param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return param_1;
}


/* FUN_00409270 @ 00409270  kind=gamemisc  attributed-by=role:ctor-like  size=448 */

undefined4 * __thiscall FUN_00409270(void *this,undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char **ppcVar7;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bae8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 0;
  local_20 = 0;
  puVar5 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  cVar2 = *(char *)((int)this + 0xaa8);
  local_18 = (char *)((int)this + 0xaa8);
  local_8 = 0;
  local_24 = puVar5;
  if ((cVar2 != '\x03') ||
     ((pcVar1 = local_18, *(char *)((int)this + 0xaa9) != '\x06' &&
      (pcVar1 = local_18, *(char *)((int)this + 0xaa9) != '\a')))) {
    cVar3 = *(char *)((int)this + 0x990);
    pcVar1 = (char *)((int)this + 0x990);
    if ((cVar3 != '\x03') ||
       ((*(char *)((int)this + 0x991) != '\x06' && (*(char *)((int)this + 0x991) != '\a')))) {
      switch(*(undefined1 *)((int)this + 0x68)) {
      case 2:
      case 4:
      case 7:
      case 8:
      case 10:
      case 0x12:
      case 0x27:
      case 0x29:
        if (cVar3 == '\x03') {
          ppcVar7 = &local_14;
          local_14 = pcVar1;
LAB_004093da:
          FUN_004d6620(&local_24,ppcVar7);
        }
        break;
      default:
        if (cVar2 == '\x03') {
          FUN_004d6620(&local_24,&local_18);
        }
        if ((*pcVar1 == '\x03') && (*(char *)((int)this + 0x991) == '\f')) {
LAB_004093d7:
          local_18 = pcVar1;
          ppcVar7 = &local_18;
          goto LAB_004093da;
        }
        break;
      case 0xb:
      case 0xc:
      case 0x10:
      case 0x11:
      case 0x14:
      case 0x36:
      case 0x56:
      case 0x5b:
      case 0x60:
        if (cVar3 == '\x03') {
          local_14 = pcVar1;
          FUN_004d6620(&local_24,&local_14);
        }
        pcVar1 = local_18;
        if (*local_18 == '\x03') goto LAB_004093d7;
        break;
      case 0x28:
      case 0x2a:
        if (cVar2 == '\x03') {
          ppcVar7 = &local_14;
          local_14 = local_18;
          goto LAB_004093da;
        }
      }
      puVar5 = local_24;
      *param_1 = 0;
      param_1[1] = 0;
      local_24 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
      *param_1 = puVar5;
      uVar4 = param_1[1];
      param_1[1] = local_20;
      local_20 = uVar4;
      goto LAB_0040940f;
    }
  }
  local_14 = pcVar1;
  iVar6 = FUN_0052dfb0(puVar5,(undefined4 *)puVar5[1],&local_14);
  puVar5[1] = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  local_20 = 1;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  *param_1 = puVar5;
  local_20 = param_1[1];
  param_1[1] = 1;
LAB_0040940f:
  FUN_00423710((int *)&local_24);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00417170 @ 00417170  kind=gamemisc  attributed-by=role:ctor-like  size=183 */

int * __thiscall FUN_00417170(void *this,uint param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x10);
  if (-iVar2 - 1U <= param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (param_1 != 0) {
    uVar1 = iVar2 + param_1;
    if (0x7ffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      FUN_00416d60(this,uVar1,iVar2);
      if (uVar1 == 0) {
        return this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (7 < *(uint *)((int)this + 0x14)) {
        **(undefined2 **)this = 0;
        return this;
      }
      *(undefined2 *)this = 0;
      return this;
    }
    FUN_00416d00(this,*(int *)((int)this + 0x10),param_1,param_2);
    *(uint *)((int)this + 0x10) = uVar1;
    if (7 < *(uint *)((int)this + 0x14)) {
      *(undefined2 *)(*(int *)this + uVar1 * 2) = 0;
      return this;
    }
    *(undefined2 *)((int)this + uVar1 * 2) = 0;
  }
  return this;
}


/* FUN_004181d0 @ 004181d0  kind=gamemisc  attributed-by=role:ctor-like  size=172 */

ushort * __cdecl FUN_004181d0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  void *local_c;
  int local_8;
  
  local_c = (void *)0x0;
  local_8 = 0;
  while( true ) {
    while( true ) {
      iVar2 = local_8;
      if (*param_1 < 0x80) {
        bVar3 = (&DAT_0055ac88)[*param_1];
      }
      else {
        bVar3 = 0;
      }
      if ((bVar3 & 1) != 0) break;
      param_1 = param_1 + 1;
    }
    uVar1 = *param_1;
    if (uVar1 == 0x3c) break;
    if (uVar1 == 0x26) {
      param_1 = FUN_00419c90(param_1,&local_c);
    }
    else {
      if (uVar1 == 0) {
        return param_1;
      }
      param_1 = param_1 + 1;
    }
  }
  if (local_c != (void *)0x0) {
    memmove((void *)((int)local_c + local_8 * -2),local_c,(int)param_1 - (int)local_c);
    param_1[-iVar2] = 0;
    return param_1 + 1;
  }
  *param_1 = 0;
  return param_1 + 1;
}


/* FUN_004194e0 @ 004194e0  kind=gamemisc  attributed-by=role:ctor-like  size=178 */

ushort * __cdecl FUN_004194e0(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  void *local_c;
  int local_8;
  
  local_c = (void *)0x0;
  local_8 = 0;
  while( true ) {
    while( true ) {
      iVar2 = local_8;
      if (*param_1 < 0x80) {
        bVar3 = (&DAT_0055ac88)[*param_1];
      }
      else {
        bVar3 = 0;
      }
      if ((bVar3 & 2) != 0) break;
      param_1 = param_1 + 1;
    }
    uVar1 = *param_1;
    if (uVar1 == param_2) break;
    if (uVar1 == 0x26) {
      param_1 = FUN_00419c90(param_1,&local_c);
    }
    else {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = param_1 + 1;
    }
  }
  if (local_c != (void *)0x0) {
    memmove((void *)((int)local_c + local_8 * -2),local_c,(int)param_1 - (int)local_c);
    param_1[-iVar2] = 0;
    return param_1 + 1;
  }
  *param_1 = 0;
  return param_1 + 1;
}


/* FUN_0041d720 @ 0041d720  kind=gamemisc  attributed-by=role:ctor-like  size=159 */

undefined4 * __thiscall FUN_0041d720(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bf10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_0041e320(this,(param_1[1] - *param_1) / 0x11c);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    puVar2 = FUN_0041d500((undefined4 *)*param_1,(undefined4 *)param_1[1],*(undefined4 **)this);
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_00422890 @ 00422890  kind=gamemisc  attributed-by=role:ctor-like  size=115 */

undefined4 * __fastcall FUN_00422890(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0x3f000000;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}


/* FUN_00422a90 @ 00422a90  kind=gamemisc  attributed-by=role:ctor-like  size=94 */

int __fastcall FUN_00422a90(int param_1)

{
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return param_1;
}


/* FUN_00422af0 @ 00422af0  kind=gamemisc  attributed-by=role:ctor-like  size=30 */

undefined4 * __fastcall FUN_00422af0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}


/* FUN_00422d00 @ 00422d00  kind=gamemisc  attributed-by=role:ctor-like  size=99 */

undefined4 * __fastcall FUN_00422d00(undefined4 *param_1)

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
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}


/* FUN_00423510 @ 00423510  kind=gamemisc  attributed-by=role:ctor-like  size=484 */

undefined4 * __fastcall FUN_00423510(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c7c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_004268b0((undefined4 *)0x0,(undefined4 *)0x0);
  *param_1 = uVar1;
  local_8 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_004f7b60((undefined4 *)0x0,(undefined4 *)0x0);
  param_1[2] = uVar1;
  local_8._0_1_ = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = FUN_004268b0((undefined4 *)0x0,(undefined4 *)0x0);
  param_1[4] = uVar1;
  local_8._0_1_ = 2;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = FUN_00426870((undefined4 *)0x0,(undefined4 *)0x0);
  param_1[6] = uVar1;
  local_8._0_1_ = 3;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = FUN_004267f0((undefined4 *)0x0,(undefined4 *)0x0);
  param_1[8] = uVar1;
  local_8._0_1_ = 4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = FUN_004268f0((undefined4 *)0x0,(undefined4 *)0x0);
  param_1[10] = uVar1;
  local_8._0_1_ = 5;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = FUN_004269b0((undefined4 *)0x0,(undefined4 *)0x0);
  param_1[0xc] = uVar1;
  local_8._0_1_ = 6;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = FUN_004268f0((undefined4 *)0x0,(undefined4 *)0x0);
  param_1[0xe] = uVar1;
  local_8._0_1_ = 7;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = FUN_00426930((undefined4 *)0x0,(undefined4 *)0x0);
  param_1[0x10] = uVar1;
  local_8._0_1_ = 8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar1 = FUN_004f7b60((undefined4 *)0x0,(undefined4 *)0x0);
  param_1[0x12] = uVar1;
  local_8._0_1_ = 9;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar1 = FUN_004f7b60((undefined4 *)0x0,(undefined4 *)0x0);
  param_1[0x14] = uVar1;
  local_8._0_1_ = 10;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar1 = FUN_00407ba0((undefined4 *)0x0,(undefined4 *)0x0);
  param_1[0x16] = uVar1;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar1 = FUN_00426970((undefined4 *)0x0,(undefined4 *)0x0);
  param_1[0x18] = uVar1;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00427fd0 @ 00427fd0  kind=gamemisc  attributed-by=role:ctor-like  size=159 */

int * __thiscall FUN_00427fd0(void *this,uint param_1,undefined2 param_2)

{
  if (param_1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (0x7ffffffe < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_1) {
    FUN_00416d60(this,param_1,*(int *)((int)this + 0x10));
    if (param_1 == 0) {
      return this;
    }
  }
  else if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (*(uint *)((int)this + 0x14) < 8) {
      *(undefined2 *)this = 0;
      return this;
    }
    **(undefined2 **)this = 0;
    return this;
  }
  FUN_00416d00(this,0,param_1,param_2);
  *(uint *)((int)this + 0x10) = param_1;
  if (*(uint *)((int)this + 0x14) < 8) {
    *(undefined2 *)((int)this + param_1 * 2) = 0;
    return this;
  }
  *(undefined2 *)(*(int *)this + param_1 * 2) = 0;
  return this;
}


/* FUN_00428ef0 @ 00428ef0  kind=gamemisc  attributed-by=role:ctor-like  size=336 */

basic_istream<wchar_t,std::char_traits<wchar_t>_> *
FUN_00428ef0(basic_istream<wchar_t,std::char_traits<wchar_t>_> *param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  wchar_t wVar4;
  locale *plVar5;
  facet *this;
  undefined4 *puVar6;
  basic_istream<wchar_t,std::char_traits<wchar_t>_> *pbVar7;
  int iVar8;
  int *local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054ca68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar8 = 0;
  bVar2 = false;
  if (*(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) + 4))();
  }
  local_8 = 0;
  bVar3 = std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::_Ipfx
                    ((basic_istream<wchar_t,std::char_traits<wchar_t>_> *)param_1,false);
  local_8 = 1;
  if (bVar3) {
    plVar5 = (locale *)std::ios_base::getloc((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
    local_8._0_1_ = 2;
    this = FUN_0042af50(plVar5);
    local_8._0_1_ = 1;
    if ((local_20 != (int *)0x0) &&
       (puVar6 = (undefined4 *)(**(code **)(*local_20 + 8))(), puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    param_2[4] = 0;
    puVar6 = param_2;
    if (7 < (uint)param_2[5]) {
      puVar6 = (undefined4 *)*param_2;
    }
    *(undefined2 *)puVar6 = 0;
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar1 = *(int *)(*(int *)param_1 + 4);
    local_1c = *(uint *)(param_1 + iVar1 + 0x20);
    if ((*(int *)(param_1 + iVar1 + 0x24) < 0) ||
       (((*(int *)(param_1 + iVar1 + 0x24) < 1 && (local_1c == 0)) || (0x7ffffffd < local_1c)))) {
      local_1c = 0x7ffffffe;
    }
    wVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sgetc
                      (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                        (param_1 + iVar1 + 0x38));
    while (local_1c != 0) {
      if (wVar4 == L'\xffff') {
        pbVar7 = (basic_istream<wchar_t,std::char_traits<wchar_t>_> *)FUN_00429060();
        return pbVar7;
      }
      bVar3 = std::ctype<wchar_t>::is((ctype<wchar_t> *)this,0x48,wVar4);
      if (bVar3) break;
      FUN_00417170(param_2,1,wVar4);
      local_1c = local_1c - 1;
      bVar2 = true;
      wVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::snextc
                        (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                          (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38));
    }
  }
  local_8 = 1;
  iVar1 = *(int *)(*(int *)param_1 + 4);
  *(undefined4 *)(param_1 + iVar1 + 0x20) = 0;
  *(undefined4 *)(param_1 + iVar1 + 0x24) = 0;
  if (!bVar2) {
    iVar8 = 2;
  }
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (param_1 + *(int *)(*(int *)param_1 + 4)),iVar8,false);
  local_8 = 0xffffffff;
  if (*(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004c6580 @ 004c6580  kind=gamemisc  attributed-by=role:ctor-like  size=363 */

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


/* FUN_004c82a0 @ 004c82a0  kind=gamemisc  attributed-by=role:ctor-like  size=156 */

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


/* FUN_004d9960 @ 004d9960  kind=gamemisc  attributed-by=role:ctor-like  size=104 */

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


/* FUN_004e1ed0 @ 004e1ed0  kind=gamemisc  attributed-by=role:ctor-like  size=156 */

undefined4 * __thiscall FUN_004e1ed0(void *this,int *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554f00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_004ce580(this,(param_1[1] - *param_1) / 0xc);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    uVar1 = FUN_004e1d70((undefined4 *)*param_1,(undefined4 *)param_1[1],*(undefined4 **)this);
    *(undefined4 *)((int)this + 4) = uVar1;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_004e2190 @ 004e2190  kind=gamemisc  attributed-by=role:ctor-like  size=185 */

undefined4 * __fastcall FUN_004e2190(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return param_1;
}


/* FUN_004f7490 @ 004f7490  kind=gamemisc  attributed-by=role:ctor-like  size=161 */

undefined4 * __fastcall FUN_004f7490(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  param_1[0x46] = 0;
  memset(param_1 + 6,0,0x100);
  param_1[0x47] = 0xffffffff;
  param_1[0x48] = 0xffffffff;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  return param_1;
}


