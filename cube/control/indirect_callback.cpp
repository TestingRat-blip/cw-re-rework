// indirect_callback (control) -- cube. 19 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_callback.h"

/* FUN_004814f0 @ 004814f0  kind=gamemisc  attributed-by=role:callback  size=193 */

void FUN_004814f0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800890) + 0x3c);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  if (*(int *)(iVar1 + iVar2 * 4) == 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x80088c) + 0x3c);
    iVar2 = *(int *)(iVar1 + 0x68);
    iVar1 = *(int *)(iVar1 + 0x94);
    if (*(int *)(iVar1 + iVar2 * 4) == 0) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x800880) + 0x3c);
      iVar2 = *(int *)(iVar1 + 0x68);
      iVar1 = *(int *)(iVar1 + 0x94);
      if (*(int *)(iVar1 + iVar2 * 4) == 0) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x800888) + 0x3c);
        iVar2 = *(int *)(iVar1 + 0x68);
        iVar1 = *(int *)(iVar1 + 0x94);
        if (*(int *)(iVar1 + iVar2 * 4) != 0) {
          *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
          iVar1 = *(int *)(in_ECX + 0x800874);
          goto LAB_0048159b;
        }
        iVar1 = *(int *)(*(int *)(in_ECX + 0x800894) + 0x3c);
        iVar2 = *(int *)(iVar1 + 0x68);
        iVar1 = *(int *)(iVar1 + 0x94);
        if (*(int *)(iVar1 + iVar2 * 4) == 0) {
          return;
        }
        goto LAB_0048158e;
      }
    }
    *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
    iVar1 = *(int *)(in_ECX + 0x800888);
  }
  else {
LAB_0048158e:
    *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
    iVar1 = *(int *)(in_ECX + 0x80088c);
  }
LAB_0048159b:
  *(undefined4 *)
   (*(int *)(*(int *)(iVar1 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar1 + 0x3c) + 0x68) * 4) = 1;
  return;
}


/* FUN_004816f0 @ 004816f0  kind=gamemisc  attributed-by=role:callback  size=1568 */

void __thiscall FUN_004816f0(void *this)

{
  void *_Src;
  void *_Dst;
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iStack_278;
  basic_iostream<char,std::char_traits<char>_> local_274;
  basic_streambuf<char,std::char_traits<char>_> local_25c [2];
  undefined1 local_254 [8];
  undefined4 *local_24c;
  undefined4 *local_23c;
  undefined4 *local_22c;
  undefined4 local_224;
  uint local_220;
  basic_ios<char,std::char_traits<char>_> local_20c [5];
  int iStack_1c8;
  basic_iostream<char,std::char_traits<char>_> local_1c4;
  basic_streambuf<char,std::char_traits<char>_> local_1ac [2];
  undefined1 local_1a4 [8];
  undefined4 *local_19c;
  undefined4 *local_18c;
  undefined4 *local_17c;
  undefined4 local_174;
  uint local_170;
  basic_ios<char,std::char_traits<char>_> local_15c [5];
  int iStack_118;
  basic_iostream<char,std::char_traits<char>_> local_114;
  basic_streambuf<char,std::char_traits<char>_> local_fc [2];
  undefined1 local_f4 [8];
  undefined4 *local_ec;
  undefined4 *local_dc;
  undefined4 *local_cc;
  undefined4 local_c4;
  uint local_c0;
  basic_ios<char,std::char_traits<char>_> local_ac [6];
  int local_64;
  int local_60;
  void *local_5c;
  void *local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6498;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = 0;
  puVar1 = *(undefined4 **)(*(int *)((int)this + 0x800984) + *(int *)((int)this + 0x800a0c) * 4);
  local_5c = this;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,local_14);
  }
  _Dst = (void *)(*(int *)((int)this + 0x800984) + *(int *)((int)this + 0x800a0c) * 4);
  _Src = (void *)((int)_Dst + 4);
  memmove(_Dst,_Src,*(int *)((int)this + 0x800988) - (int)_Src & 0xfffffffc);
  *(int *)((int)this + 0x800988) = *(int *)((int)this + 0x800988) + -4;
  local_58 = (void *)0x0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_8 = 0;
  iVar5 = *(int *)((int)this + 0x800988) - *(int *)((int)this + 0x800984) >> 2;
  FUN_005870c0(4);
  *(int *)((int)local_58 + local_4c) = iVar5;
  local_4c = local_4c + 4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280(&DAT_00700e68,3);
  local_64 = (int)this + 0x1001008;
  local_8._0_1_ = 1;
  FUN_004499c0(local_2c,&local_58);
  local_8._0_1_ = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_274.vbtablePtr =
       (basic_iostream<char,std::char_traits<char>_>_vbtable *)
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_274.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
       (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_20c);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_48 = 1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (&local_274,(basic_streambuf<char,std::char_traits<char>_> *)local_25c);
  local_8 = 3;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_274.vbtablePtr +
   (local_274.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_278 + (local_274.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_274.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_25c);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_25c[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_224 = 0;
  local_220 = 0;
  local_8._0_1_ = 5;
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_274.basic_ostream<char,std::char_traits<char>_>,*(int *)((int)this + 0x800a0c));
  uVar3 = FUN_0040e140(local_2c);
  local_8._0_1_ = 6;
  FUN_00449720(uVar3);
  local_8._0_1_ = 5;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 5;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  iVar5 = iVar5 + 1;
  if (*(int *)((int)this + 0x800a0c) < iVar5) {
    uVar7 = 1;
    iVar6 = *(int *)((int)this + 0x800a0c);
    do {
      local_1c4.vbtablePtr =
           (basic_iostream<char,std::char_traits<char>_>_vbtable *)
           &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vbtable;
      local_1c4.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
           (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
      std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                (local_15c);
      local_48 = uVar7 | 2;
      local_8 = CONCAT31(local_8._1_3_,7);
      std::basic_iostream<char,std::char_traits<char>_>::
      basic_iostream<char,std::char_traits<char>_>
                (&local_1c4,(basic_streambuf<char,std::char_traits<char>_> *)local_1ac);
      local_8 = 8;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_1c4.vbtablePtr +
       (local_1c4.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_1c8 +
              (local_1c4.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_1c4.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>(local_1ac);
      local_1ac[0] = (basic_streambuf<char,std::char_traits<char>_>)
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
      local_174 = 0;
      local_170 = 0;
      local_60 = iVar6 + 1;
      local_8._0_1_ = 10;
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                (&local_1c4.basic_ostream<char,std::char_traits<char>_>,local_60);
      local_114.vbtablePtr =
           (basic_iostream<char,std::char_traits<char>_>_vbtable *)
           &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vbtable;
      local_114.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
           (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
      std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                (local_ac);
      uVar7 = uVar7 | 6;
      local_8 = CONCAT31(local_8._1_3_,0xb);
      local_48 = uVar7;
      std::basic_iostream<char,std::char_traits<char>_>::
      basic_iostream<char,std::char_traits<char>_>
                (&local_114,(basic_streambuf<char,std::char_traits<char>_> *)local_fc);
      local_8 = 0xc;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_114.vbtablePtr +
       (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_118 +
              (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>(local_fc);
      local_fc[0] = (basic_streambuf<char,std::char_traits<char>_>)
                    &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                     vftable;
      local_c4 = 0;
      local_c0 = 0;
      local_8._0_1_ = 0xe;
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                (&local_114.basic_ostream<char,std::char_traits<char>_>,iVar6);
      uVar3 = FUN_0040e140(local_44);
      local_8._0_1_ = 0xf;
      uVar4 = FUN_0040e140(local_2c);
      local_8._0_1_ = 0x10;
      FUN_00449920(uVar4,uVar3);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      local_8._0_1_ = 10;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_114.vbtablePtr +
       (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_118 +
              (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      local_fc[0] = (basic_streambuf<char,std::char_traits<char>_>)
                    &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                     vftable;
      if ((local_c0 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)local_f4._4_4_);
      }
      std::basic_streambuf<char,std::char_traits<char>_>::setg
                (local_fc,(char *)0x0,(char *)0x0,(char *)0x0);
      *local_ec = 0;
      *local_dc = 0;
      *local_cc = 0;
      local_c0 = local_c0 & 0xfffffffe;
      local_c4 = 0;
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(local_fc);
      std::basic_iostream<char,std::char_traits<char>_>::
      ~basic_iostream<char,std::char_traits<char>_>
                ((basic_iostream<char,std::char_traits<char>_> *)local_f4);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_ac);
      local_8._0_1_ = 5;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_1c4.vbtablePtr +
       (local_1c4.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_1c8 +
              (local_1c4.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_1c4.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      local_1ac[0] = (basic_streambuf<char,std::char_traits<char>_>)
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
      if ((local_170 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)local_1a4._4_4_);
      }
      std::basic_streambuf<char,std::char_traits<char>_>::setg
                (local_1ac,(char *)0x0,(char *)0x0,(char *)0x0);
      *local_19c = 0;
      *local_18c = 0;
      *local_17c = 0;
      local_170 = local_170 & 0xfffffffe;
      local_174 = 0;
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(local_1ac);
      std::basic_iostream<char,std::char_traits<char>_>::
      ~basic_iostream<char,std::char_traits<char>_>
                ((basic_iostream<char,std::char_traits<char>_> *)local_1a4);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_15c);
      iVar6 = local_60;
      uVar2 = (undefined1)local_8;
    } while (local_60 < iVar5);
  }
  local_8._0_1_ = uVar2;
  FUN_0049d650();
  local_8 = (uint)local_8._1_3_ << 8;
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_274.vbtablePtr +
   (local_274.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_278 + (local_274.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_274.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  local_25c[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if ((local_220 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)local_254._4_4_);
  }
  std::basic_streambuf<char,std::char_traits<char>_>::setg
            (local_25c,(char *)0x0,(char *)0x0,(char *)0x0);
  *local_24c = 0;
  *local_23c = 0;
  *local_22c = 0;
  local_220 = local_220 & 0xfffffffe;
  local_224 = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_25c);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_254);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_20c);
  if (local_58 == (void *)0x0) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_58);
}


/* FUN_00481d30 @ 00481d30  kind=gamemisc  attributed-by=role:callback  size=647 */

void FUN_00481d30(void)

{
  void *_Src;
  void *_Dst;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  LPCSTR **pppCVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  void *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  LPCSTR *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  LPCSTR *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e64f0;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *(int *)(in_ECX + 0x800a10);
  local_14 = uVar2;
  if ((-1 < iVar5) && (iVar5 < *(int *)(in_ECX + 0x8009e0) - *(int *)(in_ECX + 0x8009dc) >> 2)) {
    uVar3 = FUN_004516e0(local_5c,"Save\\world_",
                         *(int *)(*(int *)(in_ECX + 0x8009dc) + iVar5 * 4) + 8,uVar2);
    local_8 = 0;
    FUN_00451550(local_74,uVar3,&DAT_00701e5c);
    local_8._0_1_ = 2;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    uVar3 = FUN_004516e0(local_2c,"Save\\map_",
                         *(int *)(*(int *)(in_ECX + 0x8009dc) + *(int *)(in_ECX + 0x800a10) * 4) + 8
                         ,uVar2);
    local_8._0_1_ = 3;
    FUN_00451550(local_44,uVar3,&DAT_00701e5c);
    local_8 = CONCAT31(local_8._1_3_,5);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    pppCVar4 = local_74;
    if (0xf < local_60) {
      pppCVar4 = (LPCSTR **)local_74[0];
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    DeleteFileA((LPCSTR)pppCVar4);
    pppCVar4 = local_44;
    if (0xf < local_30) {
      pppCVar4 = (LPCSTR **)local_44[0];
    }
    DeleteFileA((LPCSTR)pppCVar4);
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x8009dc) + *(int *)(in_ECX + 0x800a10) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    _Dst = (void *)(*(int *)(in_ECX + 0x8009dc) + *(int *)(in_ECX + 0x800a10) * 4);
    _Src = (void *)((int)_Dst + 4);
    memmove(_Dst,_Src,*(int *)(in_ECX + 0x8009e0) - (int)_Src & 0xfffffffc);
    *(int *)(in_ECX + 0x8009e0) = *(int *)(in_ECX + 0x8009e0) + -4;
    iVar5 = *(int *)(in_ECX + 0x8009e0) - *(int *)(in_ECX + 0x8009dc) >> 2;
    if (iVar5 < *(int *)(in_ECX + 0x800a10)) {
      *(int *)(in_ECX + 0x800a10) = iVar5 + -1;
    }
    local_84 = (void *)0x0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_8._0_1_ = 6;
    iVar5 = *(int *)(in_ECX + 0x8009e0) - *(int *)(in_ECX + 0x8009dc) >> 2;
    FUN_005870c0(4);
    *(int *)((int)local_84 + local_78) = iVar5;
    local_78 = local_78 + 4;
    FUN_00403350(&DAT_00700e68);
    local_8._0_1_ = 7;
    FUN_004499c0(local_2c,&local_84);
    local_8 = CONCAT31(local_8._1_3_,6);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        FUN_004878a0();
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    FUN_004a23d0();
    if (local_84 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_84);
    }
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (LPCSTR *)((uint)local_44[0] & 0xffffff00);
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_74[0]);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00481fe0 @ 00481fe0  kind=gamemisc  attributed-by=role:callback  size=424 */

void FUN_00481fe0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 local_74;
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6540;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = 7;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800894) + 0x3c);
  local_4c = 0;
  *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 1;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x80088c) + 0x3c);
  *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  FUN_0040f7a0(L"edit",4);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00636a00(&local_44,local_5c,1);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44);
  }
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_8 = 0xffffffff;
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 2;
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
  FUN_0040f7a0(L"edit",4);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00636a00(&local_2c,&local_74,1);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004821a0 @ 004821a0  kind=gamemisc  attributed-by=role:callback  size=873 */

void FUN_004821a0(void)

{
  char cVar1;
  undefined4 *puVar2;
  Creature *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  Creature *pCVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int in_ECX;
  char ****ppppcVar9;
  char *pcVar10;
  int iVar11;
  Creature *local_78;
  undefined8 local_74;
  void *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  char ***local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e65ae;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar11 = *(int *)(*(int *)(in_ECX + 0x800880) + 0x3c);
  local_18 = 7;
  *(undefined4 *)(*(int *)(iVar11 + 0x94) + *(int *)(iVar11 + 0x68) * 4) = 0;
  local_1c = 0;
  iVar11 = *(int *)(*(int *)(in_ECX + 0x80088c) + 0x3c);
  *(undefined4 *)(*(int *)(iVar11 + 0x94) + *(int *)(iVar11 + 0x68) * 4) = 1;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_14 = uVar4;
  FUN_0040f7a0(L"edit",4);
  local_8 = 0;
  uVar5 = FUN_00635550(local_5c,local_2c,1);
  local_8._0_1_ = 1;
  FUN_00659f50(local_44,uVar5,uVar4);
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  ppppcVar9 = local_44;
  if (0xf < local_30) {
    ppppcVar9 = (char ****)local_44[0];
  }
  pcVar10 = (char *)(*(int *)(in_ECX + 0x8006d0) + 0x1168);
  do {
    cVar1 = *(char *)ppppcVar9;
    *pcVar10 = cVar1;
    ppppcVar9 = (char ****)((int)ppppcVar9 + 1);
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(*(int *)(in_ECX + 0x8006d0) + 400) = 1;
  local_6c = (void *)0x0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  iVar11 = *(int *)(in_ECX + 0x800988) - *(int *)(in_ECX + 0x800984) >> 2;
  local_8._0_1_ = 5;
  FUN_005870c0(4);
  *(int *)((int)local_6c + local_60) = iVar11 + 1;
  local_60 = local_60 + 4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280(&DAT_00700e68,3);
  local_8._0_1_ = 6;
  FUN_004499c0(local_2c,&local_6c);
  local_8._0_1_ = 5;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  *(int *)(in_ECX + 0x800a0c) = iVar11;
  FUN_00487520();
  local_78 = operator_new(0x1e60);
  local_8._0_1_ = 7;
  if (local_78 == (Creature *)0x0) {
    pCVar6 = (Creature *)0x0;
  }
  else {
    local_74 = 0;
    pCVar6 = cube::Creature::Creature(local_78,(undefined4 *)&local_74);
  }
  local_8._0_1_ = 5;
  local_78 = pCVar6;
  local_74._4_4_ = pCVar6;
  FUN_0044b040(*(int *)(in_ECX + 0x8006d0) + 0x10);
  pCVar3 = local_74._4_4_;
  iVar11 = *(int *)(in_ECX + 0x8006d0);
  FUN_0044ad30(iVar11 + 0x11dc);
  pCVar3[0x11e].Creature_data.offset_0x4 = *(undefined4 *)(iVar11 + 0x11e8);
  FUN_0042c5e0(iVar11 + 0x11ec);
  *(undefined4 *)&pCVar3[0x130].Creature_data = *(undefined4 *)(iVar11 + 0x1304);
  pCVar3[0x130].Creature_data.offset_0x4 = *(undefined4 *)(iVar11 + 0x1308);
  pCVar3[0x135].vftablePtr = pCVar6[1].vftablePtr;
  *(undefined4 *)&pCVar3[0x135].Creature_data = *(undefined4 *)&pCVar6[1].Creature_data;
  pCVar3[0x135].Creature_data.offset_0x4 = pCVar6[1].Creature_data.offset_0x4;
  pCVar3[0x135].Creature_data.offset_0x8 = pCVar6[1].Creature_data.offset_0x8;
  pCVar3[0x136].vftablePtr = pCVar6[2].vftablePtr;
  *(undefined4 *)&pCVar3[0x136].Creature_data = *(undefined4 *)&pCVar6[2].Creature_data;
  pvVar7 = operator_new(0x40);
  local_74 = CONCAT44(pvVar7,(undefined4)local_74);
  local_8._0_1_ = 8;
  if (pvVar7 == (void *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)FUN_0044a7e0();
  }
  pCVar3[0x1d2].Creature_data.offset_0x4 = puVar8;
  local_8 = CONCAT31(local_8._1_3_,5);
  puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
  *puVar8 = *puVar2;
  *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar8[2] = puVar2[2];
  puVar8[3] = puVar2[3];
  *(undefined1 *)(puVar8 + 4) = *(undefined1 *)(puVar2 + 4);
  *(undefined1 *)((int)puVar8 + 0x11) = *(undefined1 *)((int)puVar2 + 0x11);
  *(undefined1 *)((int)puVar8 + 0x12) = *(undefined1 *)((int)puVar2 + 0x12);
  puVar8 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28) + 0x14);
  if ((undefined4 *)(pCVar3[0x1d2].Creature_data.offset_0x4 + 0x14) != puVar8) {
    puVar8 = (undefined4 *)*puVar8;
    FUN_004571d0(*puVar8,puVar8);
  }
  FUN_0066add0(&local_78);
  FUN_0049d650();
  if (local_6c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c);
  }
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00483e70 @ 00483e70  kind=gamemisc  attributed-by=role:callback  size=756 */

void FUN_00483e70(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int in_ECX;
  float10 fVar4;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6693;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800888) + 0x3c);
  *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
  if ((*(int *)(in_ECX + 0x800a0c) < 0) ||
     (*(int *)(in_ECX + 0x800988) - *(int *)(in_ECX + 0x800984) >> 2 <= *(int *)(in_ECX + 0x800a0c))
     ) {
    *(undefined4 *)(in_ECX + 0x1c0) = 0x40a00000;
    *(undefined4 *)(in_ECX + 0x1bc) = 0x40a00000;
    *(undefined4 *)(in_ECX + 0x1b0) = 0x42b40000;
    *(undefined4 *)(in_ECX + 0x1b4) = 0;
    *(undefined4 *)(in_ECX + 0x1b8) = 0;
    *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(in_ECX + 0x1b0);
    *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(in_ECX + 0x1b4);
    *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(in_ECX + 0x1b8);
    iVar1 = *(int *)(*(int *)(in_ECX + 0x800880) + 0x3c);
    *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 1;
    FUN_00446330(local_14);
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x1168) = 0;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x60) = 0;
    iVar1 = *(int *)(in_ECX + 0x8006d0);
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    iVar1 = *(int *)(in_ECX + 0x8006d0);
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x8006d0) + 0x5c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x8006d0) + 0x180) = 0x3f800000;
    *(undefined4 *)(*(int *)(in_ECX + 0x8006d0) + 400) = 1;
    fVar4 = (float10)FUN_00444db0();
    *(float *)(*(int *)(in_ECX + 0x8006d0) + 0x16c) = (float)fVar4;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xaa8) = 3;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xaa9) = 0;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xab5) = 1;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x990) = 3;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x991) = 0;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x99d) = 1;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x53d) = 1;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x60) = 0;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x140) = 1;
    pvVar2 = *(void **)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
    if (pvVar2 != (void *)0x0) {
      FUN_0043c790();
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    pvVar2 = operator_new(0x40);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044a7e0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28) = uVar3;
    local_18 = 7;
    local_1c = 0;
    local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
    FUN_0040f7a0(&PTR_006fccac,0);
    local_8 = 1;
    FUN_00636ad0(&local_2c);
    local_8 = 0xffffffff;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c = (void *)((uint)local_2c & 0xffff0000);
    FUN_0042bd90();
    FUN_0042c080(0);
  }
  else {
    FUN_004806c0();
    iVar1 = *(int *)(*(int *)(in_ECX + 0x80088c) + 0x3c);
    *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 1;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00484170 @ 00484170  kind=gamemisc  attributed-by=role:callback  size=187 */

void FUN_00484170(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x80088c) + 0x3c);
  *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
  *(undefined4 *)(in_ECX + 0x1c0) = 0x40a00000;
  *(undefined4 *)(in_ECX + 0x1bc) = 0x40a00000;
  *(undefined4 *)(in_ECX + 0x1b0) = 0x42b40000;
  *(undefined4 *)(in_ECX + 0x1b4) = 0;
  *(undefined4 *)(in_ECX + 0x1b8) = 0x43340000;
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(in_ECX + 0x1b0);
  *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(in_ECX + 0x1b4);
  *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(in_ECX + 0x1b8);
  if (*(int *)(in_ECX + 0x800a10) < *(int *)(in_ECX + 0x8009e0) - *(int *)(in_ECX + 0x8009dc) >> 2)
  {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x8009dc) + *(int *)(in_ECX + 0x800a10) * 4);
    FUN_0046f620(*(undefined4 *)(iVar1 + 0x20),iVar1 + 8);
    return;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800890) + 0x3c);
  *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 1;
  return;
}


/* FUN_00498d0b @ 00498d0b  kind=gamemisc  attributed-by=role:callback  size=10740 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_00498d0b(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CRefTime *pCVar4;
  long lVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  pair<unsigned___int64,unsigned___int64> *ppVar12;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar13;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *this;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  int unaff_EDI;
  int iVar19;
  float10 fVar20;
  float fVar21;
  undefined4 uStack00000008;
  int in_stack_00000010;
  undefined3 uStack00000014;
  char cStack00000017;
  float *in_stack_00000018;
  float *in_stack_0000001c;
  CRefTime *in_stack_00000020;
  int *in_stack_00000024;
  undefined4 *in_stack_00000028;
  int *in_stack_0000002c;
  int *in_stack_00000030;
  int iStack00000034;
  float *in_stack_00000040;
  float *in_stack_00000048;
  undefined1 *in_stack_00000054;
  uint in_stack_00000060;
  uint in_stack_00000064;
  float *in_stack_00000068;
  uint in_stack_0000006c;
  int iStack00000070;
  CRefTime *in_stack_00000074;
  undefined1 *puStack0000007c;
  float *pfStack00000080;
  float fStack00000084;
  float fStack00000088;
  float in_stack_0000008c;
  undefined1 *in_stack_00000090;
  undefined1 *in_stack_00000094;
  int *in_stack_0000009c;
  int *in_stack_000000a0;
  int in_stack_000000a4;
  float *in_stack_000000a8;
  float in_stack_000000ac;
  int in_stack_000000b4;
  undefined4 in_stack_000000bc;
  undefined4 in_stack_000000c4;
  float in_stack_000000d0;
  float in_stack_000000d4;
  undefined4 in_stack_000000d8;
  undefined1 *in_stack_000000e0;
  float in_stack_000000e4;
  int in_stack_000000fc;
  int in_stack_00000104;
  float *in_stack_00000110;
  undefined1 *in_stack_00000114;
  int in_stack_00000118;
  int iStack000001ac;
  int iStack000001b0;
  float in_stack_000001c0;
  undefined1 *in_stack_000001c4;
  undefined4 uStack000001cc;
  int iStack000001d0;
  uint in_stack_00004758;
  void *in_stack_00004760;
  _func_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr
  *p_Var22;
  
  iStack00000034 = in_stack_00000118;
  puStack0000007c = in_stack_00000114;
  if (*(int *)(unaff_EDI + 0x800940) != 0) {
    iVar19 = *(int *)(*(int *)(unaff_EDI + 0x800940) + 0x188);
    *(undefined4 *)(unaff_EDI + 0x800a70) = *(undefined4 *)(iVar19 + 8);
    *(undefined4 *)(unaff_EDI + 0x800a74) = *(undefined4 *)(iVar19 + 0xc);
  }
  if ((0.0 <= in_stack_000000d0) && (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != '1')) {
    FUN_00424b70();
    FUN_00451510();
    FUN_0042c460();
    FUN_0042c800();
    FUN_0042c7a0();
    FUN_0042c4a0();
    fVar20 = (float10)FUN_00412350();
    in_stack_00000018 = (float *)(float)fVar20;
    if (0.0 < (float)in_stack_00000018) {
      FUN_0042c5b0();
    }
  }
  if ((*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\"') &&
     (puStack0000007c != (undefined1 *)0x0 || in_stack_00000118 != 0)) {
    iVar19 = *(int *)(unaff_EDI + 0x8006d0);
    iVar3 = FUN_0043caa0();
    if (*(int *)(iVar19 + 0x6c) < iVar3) {
      *(undefined1 **)(iVar19 + 0x1a0) = puStack0000007c;
      *(int *)(iVar19 + 0x1a4) = iStack00000034;
    }
  }
  if (*(char *)(unaff_EDI + 0x14) != '\0') {
    iVar19 = *(int *)(unaff_EDI + 0x8006d0);
    *(undefined4 *)(iVar19 + 0x1a0) = *(undefined4 *)(iVar19 + 8);
    *(undefined4 *)(iVar19 + 0x1a4) = *(undefined4 *)(iVar19 + 0xc);
  }
  cVar2 = *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68);
  if ((((cVar2 == '\x1e') || (cVar2 == '\x1f')) || (cVar2 == ' ')) || (cVar2 == '!')) {
    FUN_0043caa0();
    FUN_0042c5b0();
  }
  pCVar4 = (CRefTime *)FUN_004120b0();
  lVar5 = CRefTime::Millisecs(pCVar4);
  iVar19 = (int)((lVar5 >> 0x1f & 7U) + lVar5) >> 3;
  pCVar4 = (CRefTime *)FUN_004120b0();
  lVar5 = CRefTime::Millisecs(pCVar4);
  pfVar6 = (float *)(iVar19 + -1);
  iStack000001d0 = iVar19 + 1;
  iVar19 = (int)(lVar5 + (lVar5 >> 0x1f & 7U)) >> 3;
  pfStack00000080 = pfVar6;
  if ((int)pfVar6 <= iStack000001d0) {
    in_stack_000001c4 = (undefined1 *)(iVar19 + -1);
    iVar19 = iVar19 + 1;
    puVar9 = in_stack_000001c4;
    in_stack_000000fc = iVar19;
    do {
      puVar18 = puVar9;
      in_stack_00000054 = puVar9;
      pfStack00000080 = pfVar6;
      if ((int)puVar9 <= iVar19) {
        do {
          in_stack_00000054 = puVar9;
          in_stack_00000104 = FUN_0042f640();
          if (in_stack_00000104 != 0) {
            FUN_0046f440();
            FUN_0060a9f0();
            cVar2 = FUN_004688d0();
            iVar19 = in_stack_00000010;
            while (cVar2 != '\0') {
              pfVar6 = (float *)FUN_0042c6c0();
              in_stack_0000001c = pfVar6;
              FUN_0042c7a0();
              FUN_0043b4a0();
              fVar20 = (float10)FUN_004120f0();
              in_stack_00000020 = (CRefTime *)(float)fVar20;
              if ((float)in_stack_00000020 <= 16.0) {
                FUN_00428970();
                FUN_0040ea90();
                FUN_0042c460();
                FUN_0042c7a0();
                FUN_0042c7a0();
                FUN_0043b4a0();
                fVar20 = (float10)FUN_004120f0();
                in_stack_00000048 = (float *)(float)fVar20;
                if (((float)in_stack_00000090 < 0.0) ||
                   ((float)in_stack_00000020 < (float)in_stack_00000090)) {
                  in_stack_00000090 = in_stack_00000020;
                  _iStack000001ac = 0;
                  FUN_00411e30();
                }
                if (((float)in_stack_00000040 < 0.0) ||
                   ((float)in_stack_00000048 < (float)in_stack_00000040)) {
                  FUN_00428970();
                  FUN_0040ea90();
                  FUN_0042c460();
                  FUN_0042c800();
                  cVar2 = FUN_0059ee90();
                  if (cVar2 != '\0') {
                    FUN_00411e30();
                    uVar7 = *(uint *)((int)*pfVar6 + 0x20) & 0x80000001;
                    if ((int)uVar7 < 0) {
                      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                    }
                    uVar8 = 0;
                    if (uVar7 != 0) {
                      FUN_00428970();
                      FUN_00428970();
                      uVar8 = FUN_00458bf0();
                    }
                    puStack0000007c = (undefined1 *)(uVar8 & 0xffffff00);
                    in_stack_00000064 = in_stack_00000064 & 0xffffff00;
                    in_stack_00000060 = in_stack_00000060 & 0xffffff00;
                    in_stack_0000006c = 0;
                    in_stack_00000094 = puStack0000007c;
                    in_stack_00000068 = (float *)FUN_00428970();
                    in_stack_00000018 = (float *)FUN_00428970();
                    in_stack_00000028 = (undefined4 *)FUN_00428970();
                    in_stack_00000110 = (float *)FUN_00428970();
                    do {
                      in_stack_00000020 = (CRefTime *)0x0;
                      do {
                        iVar3 = 0;
                        do {
                          in_stack_0000008c = *in_stack_00000018;
                          in_stack_000000bc = *in_stack_00000028;
                          FUN_00412080();
                          FUN_0043b610();
                          FUN_0042c580();
                          FUN_0042c580();
                          FUN_0042c580();
                          FUN_0043b610();
                          FUN_0042c800();
                          FUN_0042c800();
                          FUN_0042c4a0();
                          FUN_004248a0();
                          if (0.0 < *in_stack_00000110) {
                            FUN_00488d60();
                            pfVar6 = (float *)FUN_00428970();
                            in_stack_0000008c = *pfVar6;
                            in_stack_00000094 = (undefined1 *)((uint)in_stack_00000094 & 0xff);
                            if (in_stack_0000008c < 0.0) {
                              in_stack_00000094 = (undefined1 *)0x1;
                            }
                            pfVar6 = (float *)FUN_00428970();
                            in_stack_00000064 = in_stack_00000064 & 0xff;
                            if (*pfVar6 < 0.0) {
                              in_stack_00000064 = 1;
                            }
                            in_stack_00000060 = in_stack_00000060 & 0xff;
                            if (0.0 < in_stack_0000008c) {
                              in_stack_00000060 = 1;
                            }
                            puStack0000007c = (undefined1 *)((uint)puStack0000007c & 0xff);
                            if (0.0 < *pfVar6) {
                              puStack0000007c = in_stack_000000e0;
                            }
                          }
                          iVar3 = iVar3 + 1;
                        } while (iVar3 < 2);
                        in_stack_00000020 = in_stack_00000020 + 1;
                      } while ((int)in_stack_00000020 < 2);
                      in_stack_0000006c = in_stack_0000006c + 1;
                    } while ((int)in_stack_0000006c < 2);
                    if (((((char)in_stack_00000094 != '\0') && ((char)in_stack_00000060 != '\0')) &&
                        ((char)in_stack_00000064 != '\0')) && ((char)puStack0000007c != '\0')) {
                      *(undefined4 *)(iVar19 + 0x800a70) = 0;
                      in_stack_00000040 = in_stack_00000048;
                      *(undefined4 *)(iVar19 + 0x800a74) = 0;
                      FUN_00411e30();
                    }
                  }
                }
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar2 = FUN_004688d0();
              pfVar6 = pfStack00000080;
            }
          }
          puVar9 = in_stack_00000054 + 1;
          iVar19 = in_stack_000000fc;
          puVar18 = in_stack_000001c4;
          in_stack_00000054 = puVar9;
        } while ((int)puVar9 <= in_stack_000000fc);
      }
      pfVar6 = (float *)((int)pfVar6 + 1);
      puVar9 = puVar18;
      pfStack00000080 = pfVar6;
    } while ((int)pfVar6 <= iStack000001d0);
  }
  iVar19 = in_stack_00000010;
  if (*(float *)(*(int *)(in_stack_00000010 + 0x8006d0) + 0x16c) <= 0.0) {
    *(undefined4 *)(in_stack_00000010 + 0x800a70) = 0;
    *(undefined4 *)(in_stack_00000010 + 0x800a74) = 0;
    FUN_0040ea90();
    FUN_004511e0();
  }
  in_stack_00000068 = (float *)FUN_00428970();
  iVar3 = (int)*in_stack_00000068 + -1;
  iStack00000070 = iVar3;
  if (iVar3 <= (int)*in_stack_00000068 + 1) {
    in_stack_000000a0 = (int *)FUN_00428970();
    do {
      in_stack_000000b4 = *in_stack_000000a0 + -1;
      if (in_stack_000000b4 <= *in_stack_000000a0 + 1) {
        do {
          iVar10 = FUN_00434d10();
          if (iVar10 != 0) {
            in_stack_000000a4 = iVar10 + 0x30;
            iVar10 = -1;
            FUN_0060a9f0();
            FUN_0042f030();
            cVar2 = FUN_004688d0();
            iVar3 = iStack00000070;
            while (iStack00000070 = iVar3, cVar2 != '\0') {
              iStack00000034 = iVar10 + 1;
              puVar9 = (undefined1 *)FUN_0042c6d0();
              in_stack_00000054 = puVar9;
              cVar2 = FUN_0043e550();
              iVar10 = iStack00000034;
              if (cVar2 != '\0') {
                in_stack_00000020 = (CRefTime *)(puVar9 + 0x118);
                FUN_0042c7a0();
                FUN_0042c4a0();
                fVar20 = (float10)FUN_00424860();
                in_stack_00000018 = (float *)(float)fVar20;
                iVar10 = iStack00000034;
                in_stack_0000001c = in_stack_00000018;
                if ((float)in_stack_00000018 <= 16.0) {
                  FUN_0042c7a0();
                  FUN_0042c4a0();
                  fVar20 = (float10)FUN_00424860();
                  in_stack_00000018 = (float *)(float)fVar20;
                  iVar10 = iStack00000034;
                  if ((float)in_stack_00000018 <= 100.0) {
                    FUN_0042c7a0();
                    FUN_0042c4a0();
                    fVar20 = (float10)FUN_00424860();
                    in_stack_00000048 = (float *)(float)fVar20;
                    cVar2 = FUN_0043e4a0();
                    if (cVar2 == '\0') {
                      pfStack00000080 = (float *)((float)in_stack_00000048 + 16.0);
                      pfVar6 = (float *)((float)in_stack_0000001c + 16.0);
                    }
                    else {
                      pfStack00000080 = in_stack_00000048;
                      pfVar6 = in_stack_0000001c;
                    }
                    if (((float)in_stack_00000074 < 0.0) ||
                       ((float)pfVar6 < (float)in_stack_00000074)) {
                      _iStack000001ac = 0;
                      in_stack_00000074 = (CRefTime *)pfVar6;
                      FUN_0042c500();
                      FUN_00411e30();
                      FUN_0042c500();
                      FUN_00411e30();
                    }
                    if ((((float)in_stack_00000040 < 0.0) ||
                        (iVar10 = iStack00000034, (float)pfStack00000080 < (float)in_stack_00000040)
                        ) && ((cVar2 = FUN_0059ee90(), iVar10 = iStack00000034, cVar2 != '\0' &&
                              (in_stack_00000060 = FUN_004ec400(), iVar10 = iStack00000034,
                              in_stack_00000060 != 0)))) {
                      FUN_00423e70();
                      FUN_004120b0();
                      FUN_004120b0();
                      FUN_004120b0();
                      FUN_004120f0();
                      FUN_004122c0();
                      FUN_004120f0();
                      FUN_004122c0();
                      FUN_004120f0();
                      FUN_00424a60();
                      FUN_00424730();
                      switch(*in_stack_00000054) {
                      case 3:
                      case 4:
                        FUN_00424610();
                      case 0xc:
                      case 0xd:
                        FUN_00424810();
                        FUN_00424a60();
                        FUN_004244f0();
                        FUN_0047b5f0();
                        break;
                      default:
                        FUN_00424610();
                      }
                      FUN_00424820();
                      FUN_00424810();
                      uVar7 = FUN_00424a60();
                      puStack0000007c = (undefined1 *)(uVar7 & 0xffffff00);
                      in_stack_0000006c = in_stack_0000006c & 0xffffff00;
                      in_stack_00000064 = in_stack_00000064 & 0xffffff00;
                      in_stack_00000094 = (undefined1 *)0x0;
                      in_stack_00000090 = puStack0000007c;
                      in_stack_00000018 = (float *)FUN_00428970();
                      do {
                        in_stack_00000020 = (CRefTime *)0x0;
                        do {
                          iVar3 = 0;
                          do {
                            FUN_0047b5f0();
                            FUN_00424820();
                            FUN_00424810();
                            FUN_0040ea90();
                            FUN_004248a0();
                            FUN_004248a0();
                            if (0.0 < *in_stack_00000018) {
                              FUN_00488d60();
                              in_stack_00000028 = (undefined4 *)FUN_00428970();
                              in_stack_00000028 = (undefined4 *)*in_stack_00000028;
                              puStack0000007c = (undefined1 *)((uint)puStack0000007c & 0xff);
                              if ((float)in_stack_00000028 < 0.0) {
                                puStack0000007c = (undefined1 *)0x1;
                              }
                              pfVar6 = (float *)FUN_00428970();
                              in_stack_0000006c = in_stack_0000006c & 0xff;
                              if (*pfVar6 < 0.0) {
                                in_stack_0000006c = 1;
                              }
                              in_stack_00000064 = in_stack_00000064 & 0xff;
                              if (0.0 < (float)in_stack_00000028) {
                                in_stack_00000064 = 1;
                              }
                              in_stack_00000090 = (undefined1 *)((uint)in_stack_00000090 & 0xff);
                              if (0.0 < *pfVar6) {
                                in_stack_00000090 = in_stack_000000e0;
                              }
                            }
                            iVar10 = iStack00000034;
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < 2);
                          in_stack_00000020 = in_stack_00000020 + 1;
                        } while ((int)in_stack_00000020 < 2);
                        in_stack_00000094 = in_stack_00000094 + 1;
                      } while ((int)in_stack_00000094 < 2);
                      if (((((char)puStack0000007c != '\0') && ((char)in_stack_00000064 != '\0')) &&
                          ((char)in_stack_0000006c != '\0')) && ((char)in_stack_00000090 != '\0')) {
                        in_stack_00000040 = pfStack00000080;
                        FUN_0042c500();
                        FUN_00411e30();
                        *(undefined4 *)(iVar19 + 0x800a70) = 0;
                        *(undefined4 *)(iVar19 + 0x800a74) = 0;
                        FUN_0042c500();
                        FUN_00411e30();
                      }
                    }
                  }
                }
              }
              FUN_0044b580();
              FUN_0042f030();
              cVar2 = FUN_004688d0();
              iVar3 = iStack00000070;
            }
          }
          in_stack_000000b4 = in_stack_000000b4 + 1;
        } while (in_stack_000000b4 <= *in_stack_000000a0 + 1);
      }
      iVar3 = iVar3 + 1;
      iStack00000070 = iVar3;
    } while (iVar3 <= (int)*in_stack_00000068 + 1);
  }
  if ((*(int *)(iVar19 + 0x800a70) == 0 && *(int *)(iVar19 + 0x800a74) == 0) &&
     (piVar11 = (int *)FUN_00428970(), *piVar11 < 0)) {
    if (iStack000001ac != 0 || iStack000001b0 != 0) {
      *(int *)(iVar19 + 0x800a70) = iStack000001ac;
      *(int *)(iVar19 + 0x800a74) = iStack000001b0;
    }
    piVar11 = (int *)FUN_00428970();
    if (-1 < *piVar11) {
      FUN_00411e30();
    }
  }
  if ((*in_stack_0000009c < 0) && (piVar11 = (int *)FUN_00428970(), -1 < *piVar11)) {
    FUN_00411e30();
  }
  if ((0.0 <= in_stack_000000d4) && (*(int *)(iVar19 + 0x8006d8) != 0)) {
    FUN_0042c7a0();
    FUN_0042c4a0();
    fVar20 = (float10)FUN_00424860();
    in_stack_00000018 = (float *)(float)fVar20;
    if ((float)in_stack_00000018 < in_stack_000000d4 * in_stack_000000d4) {
      FUN_0042c7a0();
      FUN_0042c4a0();
      FUN_00423f20();
      FUN_00451510();
      FUN_0042c460();
      FUN_0042c800();
      FUN_0042c5b0();
    }
  }
  FUN_00632870();
  FUN_0042f030();
  FUN_0060a9f0();
  cVar2 = FUN_004a8f20();
  while (cVar2 != '\0') {
    in_stack_00000030 = (int *)FUN_00468c80();
    iVar3 = *in_stack_00000030;
    if ((iVar3 != *(int *)(iVar19 + 0x8006d0)) &&
       (((iVar10 = *(int *)(iVar19 + 0x8006d0), *(char *)(iVar10 + 0x68) != 'j' ||
         (*(int *)(iVar3 + 0x198) != *(int *)(iVar10 + 8))) ||
        (*(int *)(iVar3 + 0x19c) != *(int *)(iVar10 + 0xc))))) {
      pCVar4 = (CRefTime *)FUN_004120b0();
      CRefTime::Millisecs(pCVar4);
      pCVar4 = (CRefTime *)FUN_004120b0();
      CRefTime::Millisecs(pCVar4);
      pCVar4 = (CRefTime *)FUN_004120b0();
      CRefTime::Millisecs(pCVar4);
      iVar3 = FUN_004718b0();
      fVar21 = ((float)iVar3 / 255.0) * in_stack_000000e4;
      in_stack_00000048 = (float *)0x43480000;
      if (fVar21 < 0.3) {
        in_stack_00000048 = (float *)(((fVar21 * 0.9) / 0.3) * 200.0 + 20.0);
      }
      FUN_00428970();
      FUN_0040ea90();
      FUN_0042c460();
      FUN_0042c800();
      cVar2 = FUN_0059ee90();
      if (cVar2 != '\0') {
        FUN_00428970();
        FUN_0040ea90();
        FUN_0042c460();
        FUN_00412080();
        FUN_0043b610();
        piVar11 = in_stack_00000030;
        FUN_0042c800();
        FUN_0042c800();
        FUN_0042c4a0();
        FUN_004248a0();
        if ((*(char *)(*piVar11 + 0x68) == 'k') || (*(char *)(*piVar11 + 0x68) == 'j')) {
          pfVar6 = (float *)FUN_00428970();
          *pfVar6 = *pfVar6 + 2.0;
        }
        if ((((*(int *)(*piVar11 + 0x198) == 0 && *(int *)(*piVar11 + 0x19c) == 0) ||
             (iVar3 = FUN_0042f000(), iVar3 == 0)) || (*(char *)(iVar3 + 0x68) != 'j')) &&
           (pfVar6 = (float *)FUN_00428970(), 0.0 < *pfVar6)) {
          FUN_00488d60();
          if ((char)piVar11[2] == '\0') {
            pfVar6 = (float *)FUN_00428970();
            if ((-1.0 <= *pfVar6) && (*pfVar6 <= 1.0)) {
              pfVar6 = (float *)FUN_00428970();
              if ((-1.0 <= *pfVar6) && (*pfVar6 <= 1.0)) goto LAB_0049a235;
            }
          }
          else {
LAB_0049a235:
            FUN_004279e0();
            FUN_004279f0();
            FUN_0040ea90();
            FUN_00451510();
            FUN_0046d220();
            FUN_004279e0();
            FUN_004279f0();
            FUN_0040ea90();
            FUN_00451510();
            FUN_00412850();
            in_stack_00000068 = (float *)FUN_00428970();
            if (*in_stack_00000068 <= 50.0 && *in_stack_00000068 != 50.0) {
              *in_stack_00000068 = 50.0;
            }
            if ((char)in_stack_00000030[2] == '\0') {
              if (((*(char *)(iVar19 + 0x8007b4) == '\0') &&
                  (*(char *)(*in_stack_00000030 + 0x60) != '\0')) ||
                 (*in_stack_00000030 == *(int *)(iVar19 + 0x8006d0))) goto LAB_0049b14a;
              if (*(char *)(*in_stack_00000030 + 0x60) == '\x01') {
                FUN_00444680();
              }
              FUN_00636040();
              if (*(char *)(iVar19 + 0x8007b4) == '\0') {
                FUN_00428d80();
                FUN_00428da0();
                cVar2 = FUN_004688d0();
                while (cVar2 != '\0') {
                  in_stack_00000020 = (CRefTime *)FUN_0042c6c0();
                  FUN_0042b800();
                  cVar2 = FUN_004391d0();
                  if (cVar2 != '\0') {
                    piVar11 = (int *)FUN_0040f8e0();
                    (**(code **)(*piVar11 + 8))();
                    FUN_006368e0();
                    FUN_00411a90();
                  }
                  FUN_00468d30();
                  FUN_00428da0();
                  cVar2 = FUN_004688d0();
                }
              }
              else {
                FUN_00428d80();
                FUN_00428da0();
                cVar2 = FUN_004688d0();
                while (cVar2 != '\0') {
                  in_stack_00000018 = (float *)FUN_0042c6c0();
                  FUN_0042b800();
                  cVar2 = FUN_004391d0();
                  if (cVar2 != '\0') {
                    FUN_00411a90();
                  }
                  FUN_00468d30();
                  FUN_00428da0();
                  cVar2 = FUN_004688d0();
                }
              }
            }
            else if (*(char *)(*in_stack_00000030 + 0x60) == '\x01') {
              cVar2 = FUN_00444680();
              if (cVar2 == '\0') {
                FUN_00636040();
              }
              else {
                FUN_00636040();
              }
            }
            else if (*(char *)(*in_stack_00000030 + 0x60) == '\x06') {
              FUN_00636040();
            }
            else {
              FUN_00636040();
            }
            piVar11 = (int *)FUN_00411c70();
            (**(code **)(*piVar11 + 8))();
            FUN_00636b70();
            piVar11 = (int *)FUN_0040f8e0();
            (**(code **)(*piVar11 + 8))();
            FUN_006368e0();
            FUN_00608f20();
            FUN_0040eb60();
            FUN_00633dd0();
            FUN_00593e50();
            FUN_0040eb60();
            FUN_00633dd0();
            FUN_00593e50();
            FUN_0040eb60();
            FUN_00633dd0();
            FUN_00593e50();
            FUN_0046f440();
            FUN_0060a9f0();
            cVar2 = FUN_004688d0();
            while (cVar2 != '\0') {
              in_stack_00000028 = (undefined4 *)FUN_0042c6c0();
              in_stack_00000018 = (float *)*in_stack_00000028;
              iVar3 = FUN_00411320();
              if (iVar3 != 0) {
                piVar11 = (int *)FUN_00411320();
                (**(code **)(*piVar11 + 0x34))();
                FUN_00636990();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar2 = FUN_004688d0();
            }
            FUN_0040eb60();
            iStack00000070 = FUN_00633d70();
            FUN_00593e50();
            piVar11 = (int *)FUN_00411c70();
            (**(code **)(*piVar11 + 8))();
            FUN_00636b70();
            FUN_0040eb60();
            in_stack_000000c4 = FUN_00633d70();
            FUN_00593e50();
            piVar11 = (int *)FUN_00411c70();
            (**(code **)(*piVar11 + 8))();
            FUN_00636b70();
            FUN_00411c70();
            FUN_0040ef70();
            FUN_00428970();
            FUN_0040ea50();
            FUN_00468df0();
            FUN_00411c70();
            FUN_004288b0();
            piVar11 = (int *)FUN_00411c70();
            (**(code **)(*piVar11 + 4))();
            iVar3 = *in_stack_0000002c;
            in_stack_00000024 = (int *)(iVar3 + 0x1168);
            _uStack00000014 = (int *)(iVar3 + 0x1169);
            piVar11 = in_stack_00000024;
            do {
              iVar10 = *piVar11;
              piVar11 = (int *)((int)piVar11 + 1);
            } while ((char)iVar10 != '\0');
            if (piVar11 == _uStack00000014) {
              if ((*(ushort *)(iVar3 + 0x7e) & 0x200) == 0) {
                if (*(char *)(iVar3 + 0x60) == '\x03') {
                  FUN_0040eb60();
                  FUN_005a0ed0();
                  FUN_00636a00();
                  FUN_00593e50();
                }
                else {
                  FUN_0040eb60();
                  FUN_0040eb60();
                  FUN_00636a00();
                  FUN_00593e50();
                }
              }
              else {
                FUN_0040eb60();
                FUN_005a0ed0();
                FUN_00636a00();
                FUN_00593e50();
              }
              FUN_00593e50();
            }
            else {
              FUN_00403350();
              FUN_0040eb60();
              FUN_00487ea0();
              FUN_00593e50();
              FUN_00403eb0();
            }
            std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                      ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        *)&stack0x00000b68,3,1);
            FUN_00608f20();
            FUN_0040eb60();
            FUN_00633dd0();
            FUN_00593e50();
            FUN_0040eac0();
            if ((*(char *)(*in_stack_0000002c + 0x60) == '\0') ||
               (*(char *)(*in_stack_0000002c + 0x60) == '\x06')) {
LAB_0049ad01:
              ppVar12 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
              std::pair<unsigned___int64,unsigned___int64>::
              operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                        ((pair<unsigned___int64,unsigned___int64> *)&stack0x00001414,ppVar12);
            }
            else {
              fVar20 = (float10)FUN_0043ca60();
              in_stack_00000024 = (int *)(float)fVar20;
              fVar20 = (float10)FUN_0043ca60();
              _uStack00000014 = (int *)(float)fVar20;
              if ((float)_uStack00000014 + 0.3 < (float)in_stack_00000024) goto LAB_0049ad01;
              fVar20 = (float10)FUN_0043ca60();
              in_stack_00000024 = (int *)(float)fVar20;
              fVar20 = (float10)FUN_0043ca60();
              _uStack00000014 = (int *)(float)fVar20;
              if ((float)_uStack00000014 + 0.1 < (float)in_stack_00000024) goto LAB_0049ad01;
              fVar20 = (float10)FUN_0043ca60();
              in_stack_00000024 = (int *)(float)fVar20;
              fVar20 = (float10)FUN_0043ca60();
              _uStack00000014 = (int *)(float)fVar20;
              if ((float)_uStack00000014 - 0.1 < (float)in_stack_00000024) goto LAB_0049ad01;
            }
            FUN_0046f440();
            FUN_0060a9f0();
            cVar2 = FUN_004688d0();
            while (cVar2 != '\0') {
              FUN_0042c6c0();
              FUN_00411320();
              _uStack00000014 = (int *)FUN_00488bb0();
              if (_uStack00000014 != (int *)0x0) {
                FUN_004288e0();
                (**(code **)(*_uStack00000014 + 4))();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar2 = FUN_004688d0();
            }
            FUN_0040eb60();
            FUN_0059aa60();
            FUN_00480e00();
            FUN_00424ba0();
            FUN_00593e50();
            FUN_00593e50();
            if (*(byte *)(*in_stack_0000002c + 0x1a8) != 0) {
              uVar7 = (uint)*(byte *)(*in_stack_0000002c + 0x1a8);
              p_Var22 = endl_exref;
              pbVar13 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e440();
              this = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                               (pbVar13,uVar7);
              std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                        ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)this,p_Var22);
            }
            FUN_0040eb60();
            FUN_00411bc0();
            FUN_00636a00();
            FUN_00593e50();
            FUN_00593e50();
            FUN_0040eb60();
            FUN_00411b90();
            FUN_00593e50();
            FUN_00444db0();
            iVar3 = FUN_0068d910();
            std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                      ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)&stack0x00000b78,
                       (int)*(float *)(*in_stack_0000002c + 0x16c));
            pbVar13 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e440();
            std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar13,iVar3);
            FUN_0040eb60();
            FUN_00411bc0();
            FUN_00636a00();
            FUN_00593e50();
            FUN_00593e50();
            FUN_00411c70();
            FUN_0042f590();
            FUN_00423e70();
            piVar11 = in_stack_0000002c;
            _uStack00000014 = *(int **)(*in_stack_0000002c + 0x16c);
            fVar20 = (float10)FUN_00444db0();
            in_stack_00000024 = (int *)(float)fVar20;
            FUN_00411c70();
            FUN_0042f590();
            FUN_00424730();
            piVar14 = (int *)FUN_00411c70();
            (**(code **)(*piVar14 + 4))();
            FUN_00411c70();
            FUN_0042f590();
            FUN_00423e70();
            in_stack_00000010 = *(int *)(*piVar11 + 0x16c);
            fVar20 = (float10)FUN_00444db0();
            in_stack_00000020 = (CRefTime *)(float)fVar20;
            FUN_00411c70();
            FUN_0042f590();
            FUN_00424730();
            piVar11 = (int *)FUN_00411c70();
            (**(code **)(*piVar11 + 4))();
            FUN_004da480();
            std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                      ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        *)&stack0x00000b60);
            FUN_004da480();
          }
        }
      }
    }
LAB_0049b14a:
    FUN_00468dd0();
    FUN_0060a9f0();
    cVar2 = FUN_004a8f20();
  }
  if (*(char *)(iVar19 + 0x800704) == '\0') {
    if (DAT_0076b040 == '\0') {
      if (*(char *)(iVar19 + 0x14) == '\0') {
        FUN_0042c7a0();
        FUN_0042c4a0();
      }
      else {
        FUN_00423e70();
        FUN_00428970();
        FUN_00424610();
        FUN_0040ea90();
        FUN_00488e50();
        FUN_00411e30();
      }
    }
  }
  else {
    FUN_00423e70();
    FUN_00428970();
    FUN_00424610();
    if (*(char *)(iVar19 + 0xb) != '\0') {
      FUN_0040ea90();
      FUN_00488e50();
      FUN_00451510();
      FUN_00412850();
    }
    if (*(char *)(iVar19 + 0xc) != '\0') {
      FUN_0040ea90();
      FUN_00488e50();
      FUN_00451510();
      FUN_00412850();
    }
    if (*(char *)(iVar19 + 0xd) != '\0') {
      FUN_0040ea90();
      FUN_00488e50();
      FUN_00451510();
      FUN_00412850();
    }
    if (*(char *)(iVar19 + 0xe) != '\0') {
      FUN_0040ea90();
      FUN_00488e50();
      FUN_00451510();
      FUN_00412850();
    }
    if (*(char *)(iVar19 + 0x13) != '\0') {
      FUN_0040ea90();
      FUN_00488e50();
      FUN_00451510();
      FUN_00412850();
    }
    if (*(char *)(iVar19 + 0x12) != '\0') {
      FUN_0040ea90();
      FUN_00488e50();
      FUN_00451510();
      FUN_00412850();
    }
  }
  DAT_0076b138 = *(undefined1 *)(iVar19 + 0xf);
  DAT_0076b139 = *(undefined1 *)(iVar19 + 0x11);
  DAT_0076b13a = *(undefined1 *)(iVar19 + 0x10);
  if ((cStack00000017 == '\0') && (*(char *)(iVar19 + 0x800704) == '\0')) {
    _uStack00000014 = (int *)((uint)_uStack00000014 & 0xffffff);
    if (((*(char *)(iVar19 + 0x18) != '\0') && (DAT_0076b14e == '\0')) &&
       ((iVar3 = *(int *)(iVar19 + 0x8006d0), *(char *)(iVar3 + 0x68) == '\0' ||
        (iVar10 = FUN_0043d1a0(), iVar10 < *(int *)(iVar3 + 0x6c))))) {
      *(undefined1 *)(iVar3 + 0x68) = 0x69;
      *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
    }
    DAT_0076b14e = *(char *)(iVar19 + 0x18);
    iVar3 = FUN_00487f50();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
LAB_0049bf70:
      if (((*(char *)(*(int *)(iVar19 + 0x8006d0) + 0x68) != '0') && (*(char *)(iVar19 + 4) != '\0')
          ) && (FUN_00445410(), *(char *)(*(int *)(iVar19 + 0x8006d0) + 0x1020) == '\x14')) {
        FUN_0046ebe0();
        FUN_0042f3e0();
        FUN_0042c5e0();
      }
    }
    else {
      iStack00000070 = 1;
      iVar3 = 1;
      do {
        piVar11 = (int *)FUN_00468c60();
        if (*piVar11 == 0) goto LAB_0049bf4d;
        if (*(char *)(iVar19 + 4 + iVar3) == '\0') {
          puVar17 = (uint *)FUN_00468c60();
          if (*puVar17 == (uint)*(byte *)(*(int *)(iVar19 + 0x8006d0) + 0x68)) {
            puVar15 = (undefined4 *)FUN_00468c60();
            switch(*puVar15) {
            case 8:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x68;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 10:
              in_stack_000000ac = *(float *)(iVar19 + 0x8006d0);
              iVar10 = FUN_0043d1a0();
              if (iVar10 < *(int *)((int)in_stack_000000ac + 0x6c)) {
                *(undefined1 *)((int)in_stack_000000ac + 0x68) = 3;
                uVar16 = FUN_0043d1a0();
                *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = uVar16;
              }
              break;
            case 0x18:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x17;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 0x19:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x37;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 0x1b:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x1a;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 0x23:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 0x24:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x25;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 0x3b:
              iVar10 = *(int *)(iVar19 + 0x8006d0);
              if (*(char *)(iVar10 + 0x141) != '\x01') {
                *(undefined1 *)(iVar10 + 0x68) = 0x3c;
                FUN_0043caa0();
                FUN_0049bf44();
                return;
              }
              *(undefined1 *)(iVar10 + 0x68) = 0x3d;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 0x3f:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0xb;
              FUN_0043caa0();
              FUN_0049bf44();
              return;
            case 0x40:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x10;
              FUN_0043caa0();
              FUN_0049bf44();
              return;
            }
          }
          goto LAB_0049bf4d;
        }
        _uStack00000014 = (int *)CONCAT13(1,uStack00000014);
        cVar2 = FUN_0043e350();
        if ((cVar2 == '\0') && (iVar3 == 1 || iVar3 + -1 < 0)) goto LAB_0049bf4d;
        FUN_00468c60();
        cVar2 = FUN_0043e5a0();
        if (cVar2 == '\0') goto LAB_0049bf4d;
        if (*(char *)(*(int *)(iVar19 + 0x8006d0) + 0x1020) == '\x14') {
          FUN_0046ebe0();
          FUN_0042f3e0();
          FUN_0042c5e0();
        }
        puVar15 = (undefined4 *)FUN_00468c60();
        switch(*puVar15) {
        case 3:
        case 4:
        case 0x17:
        case 0x1f:
        case 0x21:
        case 0x25:
        case 0x2d:
        case 0x2e:
        case 0x41:
        case 0x42:
        case 0x5e:
        case 0x5f:
          FUN_004456a0();
          break;
        case 5:
          if (0.0 < *(float *)(*(int *)(iVar19 + 0x8006d0) + 0x170)) {
            *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 5;
            goto code_r0x0049bd98;
          }
          break;
        default:
          FUN_00468c60();
          in_stack_00000048 = *(float **)(iVar19 + 0x8006d0);
          fVar20 = (float10)FUN_00444ae0();
          in_stack_000000ac = (float)fVar20;
          if (in_stack_000000ac <= in_stack_00000048[0x5c]) {
            puVar9 = (undefined1 *)FUN_00468c60();
            pfVar6 = in_stack_00000048;
code_r0x0049bd93:
            *(undefined1 *)(pfVar6 + 0x1a) = *puVar9;
            goto code_r0x0049bd98;
          }
          break;
        case 8:
        case 0x18:
        case 0x19:
        case 0x1b:
        case 0x3b:
        case 0x3f:
        case 0x40:
          puVar17 = (uint *)FUN_00468c60();
          if ((uint)*(byte *)(*(int *)(iVar19 + 0x8006d0) + 0x68) != *puVar17) {
            puVar9 = (undefined1 *)FUN_00468c60();
            pfVar6 = *(float **)(iVar19 + 0x8006d0);
            goto code_r0x0049bd93;
          }
          break;
        case 10:
          if (*(char *)(*(int *)(iVar19 + 0x8006d0) + 0x68) != '\n') {
            *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 10;
            goto code_r0x0049bd98;
          }
          break;
        case 0xb:
          *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0xb;
code_r0x0049bd98:
          *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
          *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x128) = 0;
          break;
        case 0x11:
          if (0.0 < *(float *)(*(int *)(iVar19 + 0x8006d0) + 0x170)) {
            *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x11;
            goto code_r0x0049bd98;
          }
          break;
        case 0x14:
          if (0.0 < *(float *)(*(int *)(iVar19 + 0x8006d0) + 0x170)) {
            *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x14;
            goto code_r0x0049bd98;
          }
          break;
        case 0x1c:
          if ((0.0 < *(float *)(*(int *)(iVar19 + 0x8006d0) + 0x170)) &&
             (puVar17 = (uint *)FUN_00468c60(),
             (uint)*(byte *)(*(int *)(iVar19 + 0x8006d0) + 0x68) != *puVar17)) {
            puVar9 = (undefined1 *)FUN_00468c60();
            *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = *puVar9;
            *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
          }
          break;
        case 0x22:
          in_stack_00000018 = *(float **)(iVar19 + 0x8006d0);
          iVar10 = FUN_0043d1a0();
          if (iVar10 <= (int)in_stack_00000018[0x1b]) {
            *(undefined1 *)(in_stack_00000018 + 0x1a) = 0x22;
            *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
            iVar10 = *(int *)(iVar19 + 0x8006d0);
            *(undefined4 *)(iVar10 + 0x1a0) = *(undefined4 *)(iVar10 + 8);
            *(undefined4 *)(iVar10 + 0x1a4) = *(undefined4 *)(iVar10 + 0xc);
          }
          break;
        case 0x30:
          puVar9 = (undefined1 *)FUN_00468c60();
          *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = *puVar9;
          FUN_00411e30();
          iVar3 = *(int *)(iVar19 + 0x8006d0);
          fVar20 = (float10)FUN_00423f20();
          in_stack_00000018 = (float *)(float)fVar20;
          *(int *)(iVar3 + 0x11d8) = (int)(((float)in_stack_00000018 / 50.0) * 1000.0);
          iVar3 = *(int *)(iVar19 + 0x8006d0);
          in_stack_00000028 = (undefined4 *)(iVar3 + 0x34);
          fVar20 = (float10)FUN_00424860();
          in_stack_00000018 = (float *)(float)fVar20;
          if (0.0 < (float)in_stack_00000018) {
            FUN_004240f0();
            FUN_00412780();
            iVar3 = *(int *)(iVar19 + 0x8006d0);
            pfVar6 = (float *)FUN_00428970();
            if (5.0 < *pfVar6) {
              *pfVar6 = 5.0;
            }
          }
          goto code_r0x0049b8d5;
        case 0x32:
          FUN_00468e20();
          FUN_00411e30();
          in_stack_00000048 = *(float **)(iVar19 + 0x8006d0);
          puVar15 = (undefined4 *)FUN_00428970();
          *puVar15 = 0;
          fVar20 = (float10)FUN_00424860();
          in_stack_00000018 = (float *)(float)fVar20;
          if (0.0 < (float)in_stack_00000018) {
            FUN_004240f0();
            fVar20 = (float10)FUN_0043ed60();
            in_stack_00000018 = (float *)(float)fVar20;
            FUN_00412780();
            in_stack_00000048 = *(float **)(iVar19 + 0x8006d0);
            fVar20 = (float10)FUN_0043ed60();
            in_stack_00000018 = (float *)((float)fVar20 * 12.0 + 5.0);
            puVar15 = (undefined4 *)FUN_00428970();
            *puVar15 = in_stack_00000018;
          }
          in_stack_000001c0 = 7.00649e-44;
          puVar15 = (undefined4 *)FUN_00468910();
          uVar16 = FUN_0043e6a0();
          *puVar15 = uVar16;
          iVar3 = iStack00000070;
          break;
        case 0x36:
          puVar9 = (undefined1 *)FUN_00468c60();
          *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = *puVar9;
          FUN_004252f0();
          FUN_00411e30();
          iVar3 = *(int *)(iVar19 + 0x8006d0);
          fVar20 = (float10)FUN_00423f20();
          in_stack_00000018 = (float *)(float)fVar20;
          *(int *)(iVar3 + 0x11d8) = (int)(((float)in_stack_00000018 / 50.0) * 1000.0);
          fVar20 = (float10)FUN_00424860();
          in_stack_00000018 = (float *)(float)fVar20;
          if (2500.0 < (float)in_stack_00000018) {
            FUN_004240f0();
            FUN_00412780();
          }
          iVar3 = *(int *)(iVar19 + 0x8006d0);
          puVar15 = (undefined4 *)FUN_00428970();
          *puVar15 = 0x41700000;
code_r0x0049b8d5:
          *(undefined4 *)(iVar3 + 0x6c) = 0;
          *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x128) = 0;
          iVar3 = iStack00000070;
          break;
        case 0x60:
          *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x60;
          FUN_00468e20();
          FUN_00411e30();
          in_stack_0000001c = *(float **)(iVar19 + 0x8006d0);
          in_stack_00000048 = in_stack_0000001c + 0xd;
          puVar15 = (undefined4 *)FUN_00428970();
          *puVar15 = 0;
          fVar20 = (float10)FUN_00424860();
          in_stack_000000ac = (float)fVar20;
          if (0.0 < in_stack_000000ac) {
            FUN_004240f0();
            FUN_00412780();
            in_stack_0000001c = *(float **)(iVar19 + 0x8006d0);
            puVar15 = (undefined4 *)FUN_00428970();
            *puVar15 = 0x41a00000;
          }
          in_stack_0000001c[0x1b] = 0.0;
          *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x128) = 600;
          break;
        case 0x61:
          goto code_r0x0049b794;
        case 99:
          FUN_0042f160();
          in_stack_000000ac = 1.38729e-43;
          puVar15 = (undefined4 *)FUN_00468910();
          uVar16 = FUN_0043e6a0();
          *puVar15 = uVar16;
          iVar3 = iStack00000070;
          break;
        case 100:
          goto code_r0x0049b794;
        case 0x65:
          FUN_00595850();
          FUN_00484350();
          break;
        case 0x66:
code_r0x0049b794:
          FUN_00595850();
          break;
        case 0x67:
          FUN_00595850();
          FUN_00484350();
        }
LAB_0049bf4d:
        iStack00000070 = iVar3 + 1;
        iVar10 = FUN_00487f50();
        bVar1 = iVar3 < iVar10 + -1;
        iVar3 = iVar3 + 1;
      } while (bVar1);
      if (cStack00000017 == '\0') goto LAB_0049bf70;
    }
    if (((*(char *)(iVar19 + 5) == '\0') && (piVar11 = (int *)FUN_00468c60(), *piVar11 == 0x1c)) &&
       (*(char *)(*(int *)(iVar19 + 0x8006d0) + 0x68) == '\x1c')) {
      *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0;
    }
    if (((*(char *)(iVar19 + 4) == '\0') && (piVar11 = (int *)FUN_00468c60(), *piVar11 == 0x1d)) &&
       (*(char *)(*(int *)(iVar19 + 0x8006d0) + 0x68) == '\x1d')) {
      *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0;
    }
    if (cStack00000017 != '\0') {
      FUN_0042f160();
    }
  }
  if (*(int *)(iVar19 + 0x8006cc) != 0) {
    FUN_0046f440();
    FUN_0060a9f0();
    cVar2 = FUN_004688d0();
    while (cVar2 != '\0') {
      piVar11 = (int *)FUN_0042c6c0();
      if ((*piVar11 == *(int *)(*(int *)(iVar19 + 0x8006d0) + 8)) &&
         (piVar11[1] == *(int *)(*(int *)(iVar19 + 0x8006d0) + 0xc))) {
        FUN_0042c6c0();
        FUN_00486290();
      }
      FUN_00468d30();
      FUN_0060a9f0();
      cVar2 = FUN_004688d0();
    }
    FUN_0046f440();
    FUN_0060a9f0();
    cVar2 = FUN_004688d0();
    while (cVar2 != '\0') {
      piVar11 = (int *)FUN_0042c6c0();
      if ((*piVar11 == *(int *)(*(int *)(iVar19 + 0x8006d0) + 8)) &&
         (piVar11[1] == *(int *)(*(int *)(iVar19 + 0x8006d0) + 0xc))) {
        FUN_0042c6c0();
        FUN_004460a0();
      }
      FUN_00468d30();
      FUN_0060a9f0();
      cVar2 = FUN_004688d0();
    }
    FUN_0046f440();
    FUN_0060a9f0();
    cVar2 = FUN_004688d0();
    while (cVar2 != '\0') {
      piVar11 = (int *)FUN_0042c6c0();
      if ((*piVar11 == *(int *)(*(int *)(iVar19 + 0x8006d0) + 8)) &&
         (piVar11[1] == *(int *)(*(int *)(iVar19 + 0x8006d0) + 0xc))) {
        FUN_0042c6c0();
        FUN_004861a0();
      }
      FUN_00468d30();
      FUN_0060a9f0();
      cVar2 = FUN_004688d0();
    }
  }
  if (*(int *)(iVar19 + 0x8006c8) != 0) {
    FUN_004dc8e0();
  }
  iVar3 = *(int *)(iVar19 + 0x8006d0);
  cVar2 = *(char *)(iVar3 + 0x68);
  if ((((((cVar2 != 'S') && (cVar2 != 'j')) && (cVar2 != 'k')) && ((cVar2 != 'R' && (cVar2 != 'T')))
       ) && (cVar2 != '\b')) &&
     (((cVar2 != '#' && (cVar2 != 'O')) &&
      ((cVar2 != '\x1c' &&
       (((cVar2 != '\x1d' && (cVar2 != '$')) && (*(char *)(iVar19 + 5) == '\0')))))))) {
    if (*(char *)(iVar3 + 0x1020) == '\x14') {
      iVar10 = FUN_0043d1a0();
      iVar3 = *(int *)(iVar19 + 0x8006d0);
      if (iVar10 + 500 < *(int *)(iVar3 + 0x6c)) {
        *(undefined1 *)(iVar3 + 0x68) = 0x52;
        goto LAB_0049c2e6;
      }
    }
    if (10000 < *(int *)(iVar3 + 0x6c)) {
      *(undefined1 *)(iVar3 + 0x68) = 0;
    }
  }
LAB_0049c2e6:
  FUN_00423e70();
  in_stack_0000006c = FUN_00428970();
  FUN_00424610();
  in_stack_00000064 = FUN_00428970();
  FUN_004244f0();
  in_stack_00000060 = FUN_00428970();
  FUN_004243d0();
  FUN_0042c7a0();
  FUN_0042c4a0();
  fVar20 = (float10)FUN_00424860();
  in_stack_000000ac = (float)fVar20;
  if (2500.0 < in_stack_000000ac) {
    FUN_0042c5b0();
  }
  cVar2 = FUN_0047fa10();
  if (((cVar2 == '\0') && (cVar2 = FUN_0047fa10(), cVar2 == '\0')) &&
     ((cVar2 = FUN_0047fa10(), cVar2 == '\0' && (cVar2 = FUN_0047fa10(), cVar2 == '\0')))) {
    in_stack_000000d8 = 0;
    fStack00000084 = 1.0;
    FUN_004aba20();
    in_stack_00000074 = (CRefTime *)FUN_004120b0();
    FUN_004120b0();
    FUN_00412200();
    FUN_00468ca0();
    FUN_0042c9b0();
    in_stack_00000020 = (CRefTime *)FUN_004120b0();
    FUN_004120b0();
    FUN_00412200();
    FUN_00468ca0();
    FUN_0042c9b0();
    cVar2 = FUN_0047fa10();
    if ((cVar2 == '\0') && (cVar2 = FUN_0047fa10(), cVar2 == '\0')) {
      cVar2 = *(char *)(*(int *)(iVar19 + 0x8006d0) + 0x68);
      if ((cVar2 == 'T') || (cVar2 == 'S')) {
        FUN_00428970();
        FUN_004120b0();
        FUN_00412220();
      }
      else {
        if ((cVar2 == 'j') || (cVar2 == 'k')) {
          FUN_00428970();
        }
        else {
          FUN_00428970();
        }
        FUN_004120b0();
        FUN_00412220();
        FUN_004122e0();
      }
      FUN_004122e0();
    }
    else {
      FUN_004120b0();
      FUN_00412220();
    }
    FUN_004120b0();
    FUN_004573d0();
  }
  else {
    FUN_00487fe0();
    FUN_0042c460();
    in_stack_00000020 = (CRefTime *)FUN_004120b0();
    pCVar4 = (CRefTime *)FUN_004120b0();
    in_stack_00000074 = pCVar4;
    CRefTime::Millisecs(in_stack_00000020);
    CRefTime::Millisecs(pCVar4);
    fStack00000084 = (float)FUN_004347a0();
    if (fStack00000084 != 0.0) {
      FUN_004348b0();
      FUN_00434b70();
      FUN_004120b0();
      FUN_00412080();
    }
    FUN_00412080();
    FUN_004120b0();
    FUN_0042c9b0();
  }
  in_stack_00000054 = (undefined1 *)(iVar19 + 0x140);
  FUN_0042c5b0();
  FUN_0040ea90();
  FUN_00488e50();
  pfVar6 = in_stack_000000a8;
  FUN_00451510();
  FUN_0042c460();
  FUN_0042c9d0();
  fStack00000088 = *pfVar6;
  in_stack_0000001c = (float *)0x0;
  FUN_004120b0();
  fStack00000084 = (float)FUN_004120b0();
  in_stack_000000ac = (float)FUN_004120b0();
  do {
    in_stack_00000048 = (float *)0x0;
    do {
      iVar19 = 0;
      do {
        FUN_00459c00();
        FUN_00459c00();
        FUN_00459c00();
        FUN_00459c00();
        FUN_0043b610();
        FUN_0042c6e0();
        FUN_0042c800();
        FUN_0042f860();
        cVar2 = FUN_0043b480();
        if (cVar2 != '\0') {
          fVar20 = (float10)FUN_005a35d0();
          in_stack_000001c0 = (float)fVar20;
          if (*in_stack_000000a8 - in_stack_000001c0 < fStack00000088) {
            fStack00000088 = *in_stack_000000a8 - in_stack_000001c0;
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < 2);
      in_stack_00000048 = (float *)((int)in_stack_00000048 + 1);
    } while ((int)in_stack_00000048 < 2);
    in_stack_0000001c = (float *)((int)in_stack_0000001c + 1);
  } while ((int)in_stack_0000001c < 2);
  *in_stack_000000a8 = fStack00000088;
  FUN_00451510();
  FUN_0042c460();
  FUN_0042c7a0();
  FUN_0042c5b0();
  iVar19 = in_stack_00000010;
  *(float *)(in_stack_00000010 + 0x1cc) = *in_stack_000000a8;
  FUN_0042c5b0();
  in_stack_000000d8 = FUN_004120b0();
  fStack00000088 = (float)FUN_004120b0();
  FUN_004120b0();
  FUN_0042f860();
  cVar2 = FUN_0043b480();
  if (cVar2 != '\0') {
    FUN_0042c7a0();
    FUN_0042c4a0();
    fVar20 = (float10)FUN_00424860();
    fStack00000084 = (float)fVar20;
    if (0.0 < fStack00000084) {
      FUN_004240f0();
      fVar20 = (float10)FUN_005a35d0();
      fStack00000084 = (float)fVar20;
      if (0.0 <= fStack00000084) {
        FUN_00451510();
        FUN_0042c460();
        FUN_0042c800();
        FUN_0042c5b0();
      }
    }
  }
  FUN_00423e70();
  FUN_0042c4a0();
  FUN_00424990();
  FUN_00424610();
  FUN_004244f0();
  FUN_004243d0();
  FUN_00423e70();
  FUN_004243d0();
  FUN_004244f0();
  FUN_00424610();
  FUN_00468e70();
  FUN_0042c4a0();
  FUN_00424990();
  FUN_00412260();
  FUN_00411df0();
  FUN_00412260();
  FUN_00411df0();
  FUN_00423e70();
  in_stack_00000048 = (float *)(*(float *)(iVar19 + 0x1e8) * 0.5);
  FUN_00488b80();
  fVar20 = (float10)FUN_0040e420();
  fStack00000084 = (float)fVar20;
  FUN_00488b80();
  fVar20 = (float10)FUN_0040e420();
  fStack00000084 = (float)fVar20;
  FUN_00434b80();
  FUN_004243d0();
  FUN_004244f0();
  FUN_00424610();
  FUN_00412080();
  FUN_0043b610();
  FUN_00468e70();
  FUN_0042c7a0();
  FUN_0042c4a0();
  FUN_00424990();
  uStack000001cc = 0;
  FUN_004aba20();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar19 + 0x8005d0));
  FUN_00469060();
  FUN_0043abc0();
  FUN_004120f0();
  FUN_00469060();
  FUN_0043abc0();
  FUN_004120f0();
  FUN_0040ea50();
  FUN_0062f720();
  FUN_004120f0();
  FUN_004120f0();
  FUN_0040ea50();
  FUN_0062f720();
  in_stack_00000048 = (float *)(iVar19 + 0x2c4);
  FUN_0046f870();
  if (*(int *)(iVar19 + 0x8006c8) == 0) {
    pCVar4 = (CRefTime *)FUN_004120b0();
    CRefTime::Millisecs(pCVar4);
    pCVar4 = (CRefTime *)FUN_004120b0();
    CRefTime::Millisecs(pCVar4);
    FUN_0040ea30();
    FUN_00469000();
    FUN_00486560();
  }
  else {
    FUN_0046f440();
    FUN_0060a9f0();
    cVar2 = FUN_004688d0();
    while (cVar2 != '\0') {
      iVar19 = FUN_00468c90();
      if ((*(int *)(iVar19 + 8) != 0) && (*(char *)(*(int *)(iVar19 + 8) + 0x60) == '\0')) {
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        FUN_0040ea30();
        FUN_00469000();
        FUN_00486560();
      }
      FUN_00468d70();
      FUN_0060a9f0();
      cVar2 = FUN_004688d0();
      iVar19 = in_stack_00000010;
    }
  }
  in_stack_0000001c = (float *)(iVar19 + 0x2cc);
  FUN_0046f870();
  fStack00000084 = (float)(iVar19 + 0x2d4);
  FUN_0046f870();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar2 = FUN_004688d0();
  while (cVar2 != '\0') {
    FUN_0042c6c0();
    in_stack_00000048 = (float *)FUN_00428970();
    uStack000001cc = FUN_00428970();
    iVar19 = FUN_00434d10();
    if ((iVar19 != 0) && (*(char *)(iVar19 + 0x74) != '\0')) {
      FUN_00486560();
    }
    iVar19 = FUN_00434a90();
    if ((iVar19 != 0) && (*(char *)(iVar19 + 8) != '\0')) {
      FUN_00469000();
      FUN_00486560();
    }
    FUN_00468d30();
    FUN_0060a9f0();
    cVar2 = FUN_004688d0();
    iVar19 = in_stack_00000010;
  }
  FUN_00469060();
  FUN_004120f0();
  FUN_00469060();
  FUN_004120f0();
  FUN_0040ea50();
  FUN_0062f720();
  if (*(int *)(iVar19 + 0x8006cc) == 0) {
    FUN_0046f870();
    FUN_0046f870();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar19 + 0x8005d0));
  FUN_00601e90();
  FUN_00659fb0();
  FUN_004da480();
  FUN_004da480();
  FUN_004da480();
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             &stack0x00000e2c);
  FUN_00593e50();
  FUN_00593e50();
  FUN_005fb860();
  FUN_005fb860();
  FUN_00467c70();
  uStack00000008 = 0x49d389;
  ExceptionList = in_stack_00004760;
  __security_check_cookie(in_stack_00004758 ^ (uint)&stack0x0000000c);
  return;
}


/* FUN_004c5a00 @ 004c5a00  kind=gamemisc  attributed-by=role:callback  size=86 */

void FUN_004c5a00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x160) != 0) {
    FUN_004c6350();
    iVar1 = *(int *)(in_ECX + 0x198);
    iVar2 = *(int *)(in_ECX + 0x1b4);
    if ((iVar2 < *(int *)(in_ECX + 0x19c) - iVar1 >> 2) &&
       (iVar3 = *(int *)(iVar1 + iVar2 * 4), iVar3 < *(int *)(in_ECX + 0x1a4) + -1)) {
      *(int *)(iVar1 + iVar2 * 4) = iVar3 + 1;
      FUN_004c6610(0);
      FUN_004c64c0();
      return;
    }
  }
  return;
}


/* FUN_004c5a60 @ 004c5a60  kind=gamemisc  attributed-by=role:callback  size=328 */

void FUN_004c5a60(void)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  int in_ECX;
  float10 fVar3;
  int iVar4;
  int iVar5;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var6;
  
  if (((*(int *)(in_ECX + 0x160) != 0) && (iVar5 = *(int *)(in_ECX + 0x1b0), -1 < iVar5)) &&
     (iVar4 = *(int *)(in_ECX + 0x1b4), iVar4 != iVar5)) {
    p_Var6 = endl_exref;
    pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_00449150(cout_exref,"tab: ",iVar4,&DAT_006fcfbc);
    pbVar2 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,iVar4);
    pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar2);
    pbVar2 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,iVar5);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)pbVar2,p_Var6);
    *(undefined4 *)(in_ECX + 0x1b4) = *(undefined4 *)(in_ECX + 0x1b0);
    FUN_004c6350();
    iVar5 = *(int *)(in_ECX + 0x1b4);
    if (((*(int *)(**(int **)(in_ECX + 0x160) + iVar5 * 0xc) ==
          *(int *)(**(int **)(in_ECX + 0x160) + 4 + iVar5 * 0xc)) || (iVar5 < 0)) ||
       (*(int *)(in_ECX + 0x19c) - *(int *)(in_ECX + 0x198) >> 2 <= iVar5)) {
      *(undefined4 *)(in_ECX + 0x18c) = 0xffffffff;
      *(undefined4 *)(in_ECX + 400) = 0xffffffff;
    }
    else {
      fVar3 = (float10)FUN_0062f600();
      iVar5 = *(int *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4);
      *(int *)(in_ECX + 0x18c) = *(int *)(in_ECX + 0x1b4);
      *(int *)(in_ECX + 400) =
           iVar5 * (int)(((float)fVar3 - 10.0) / (float)(*(int *)(in_ECX + 0x1a8) + 5));
    }
    FUN_004c6610(0);
    FUN_004c64c0();
    FUN_00484320(0x56);
    FUN_004815c0(in_ECX);
  }
  return;
}


/* FUN_004c5bb0 @ 004c5bb0  kind=gamemisc  attributed-by=role:callback  size=401 */

void FUN_004c5bb0(void)

{
  int iVar1;
  int iVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  basic_ostream<char,std::char_traits<char>_> *this;
  int in_ECX;
  int iVar4;
  float10 fVar5;
  undefined4 *puVar6;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var7;
  undefined1 local_10 [4];
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (((*(int *)(in_ECX + 0x160) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0xf4) & 1) != 0)) &&
     (0 < *(int *)(in_ECX + 0x1a4))) {
    fVar5 = (float10)FUN_006291d0();
    iVar4 = (int)((float)fVar5 - 70.0);
    iVar1 = iVar4 / *(int *)(in_ECX + 0x1a4);
    iVar2 = FUN_0062b510(local_10);
    puVar6 = &DAT_006fcfbc;
    iVar2 = (int)((*(float *)(*(int *)(in_ECX + 4) + 0xd8) - *(float *)(*(int *)(in_ECX + 4) + 0xe0)
                  ) + *(float *)(iVar2 + 4));
    if (iVar2 < 0x23) {
      iVar2 = 0x23;
    }
    local_c = iVar4 - iVar1;
    if (local_c + 0x23 < iVar2) {
      iVar2 = local_c + 0x23;
    }
    p_Var7 = endl_exref;
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)cout_exref,iVar4);
    this = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar3,puVar6);
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,iVar1);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var7);
    if (0 < local_c) {
      *(int *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4) =
           ((iVar2 + -0x23) * (*(int *)(in_ECX + 0x1a4) + -1)) / local_c;
    }
    if (*(int *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4) < 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4) = 0;
    }
    if (*(int *)(in_ECX + 0x1a4) <=
        *(int *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4)) {
      *(int *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4) =
           *(int *)(in_ECX + 0x1a4) + -1;
    }
    FUN_004c6610(0);
    puVar6 = (undefined4 *)FUN_0062b510(local_10);
    FUN_0062a650(*puVar6,(float)iVar2,1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c60f0 @ 004c60f0  kind=gamemisc  attributed-by=role:callback  size=74 */

void FUN_004c60f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x160) != 0) {
    FUN_004c6350();
    iVar1 = *(int *)(in_ECX + 0x198);
    iVar2 = *(int *)(in_ECX + 0x1b4);
    if ((iVar2 < *(int *)(in_ECX + 0x19c) - iVar1 >> 2) &&
       (iVar3 = *(int *)(iVar1 + iVar2 * 4), 0 < iVar3)) {
      *(int *)(iVar1 + iVar2 * 4) = iVar3 + -1;
      FUN_004c6610(0);
      FUN_004c64c0();
      return;
    }
  }
  return;
}


/* FUN_004d4cb0 @ 004d4cb0  kind=gamemisc  attributed-by=role:callback  size=98 */

void FUN_004d4cb0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x204);
  *piVar1 = *piVar1 + -1;
  uVar3 = *(uint *)(in_ECX + 0x204);
  if (*piVar1 < 0) {
    uVar3 = 0;
  }
  *(uint *)(in_ECX + 0x204) = uVar3;
  iVar2 = *(int *)(in_ECX + 0x160);
  if (iVar2 != *(int *)(in_ECX + 0x164)) {
    *(undefined4 *)(in_ECX + 0x1d8) =
         *(undefined4 *)(iVar2 + (uVar3 % (uint)(*(int *)(in_ECX + 0x164) - iVar2 >> 3)) * 8);
    *(undefined4 *)(in_ECX + 0x1dc) =
         *(undefined4 *)
          (iVar2 + 4 +
          (*(uint *)(in_ECX + 0x204) % (uint)(*(int *)(in_ECX + 0x164) - iVar2 >> 3)) * 8);
  }
  return;
}


/* FUN_004d4d20 @ 004d4d20  kind=gamemisc  attributed-by=role:callback  size=114 */

void FUN_004d4d20(void)

{
  int iVar1;
  int in_ECX;
  
  *(int *)(in_ECX + 0x204) = *(int *)(in_ECX + 0x204) + 1;
  iVar1 = *(int *)(in_ECX + 0x164) - *(int *)(in_ECX + 0x160) >> 3;
  if (iVar1 <= *(int *)(in_ECX + 0x204)) {
    *(int *)(in_ECX + 0x204) = iVar1 + -1;
  }
  iVar1 = *(int *)(in_ECX + 0x160);
  if (iVar1 != *(int *)(in_ECX + 0x164)) {
    *(undefined4 *)(in_ECX + 0x1d8) =
         *(undefined4 *)
          (iVar1 + (*(uint *)(in_ECX + 0x204) % (uint)(*(int *)(in_ECX + 0x164) - iVar1 >> 3)) * 8);
    *(undefined4 *)(in_ECX + 0x1dc) =
         *(undefined4 *)
          (iVar1 + 4 +
          (*(uint *)(in_ECX + 0x204) % (uint)(*(int *)(in_ECX + 0x164) - iVar1 >> 3)) * 8);
  }
  return;
}


/* FUN_00586780 @ 00586780  kind=gamemisc  attributed-by=role:callback  size=281 */

void FUN_00586780(undefined1 *param_1,int *param_2)

{
  char cVar1;
  undefined4 extraout_EDX;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char local_2c [36];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar3 = *param_2;
  uVar4 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar5 = 0x67452301;
  uVar6 = 0xefcdab89;
  uVar7 = 0x98badcfe;
  uVar8 = 0x10325476;
  if (iVar3 == param_2[1]) {
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    pcVar2 = "";
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
    uVar5 = 0x67452301;
    uVar6 = 0xefcdab89;
    uVar7 = 0x98badcfe;
    uVar8 = 0x10325476;
    FUN_005856b0(iVar3,param_2[1] - iVar3);
    FUN_00584eb0();
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    if (local_2c[0] == '\0') {
      iVar3 = 0;
    }
    else {
      pcVar2 = local_2c;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iVar3 = (int)pcVar2 - (int)(local_2c + 1);
    }
    pcVar2 = local_2c;
  }
  FUN_0040c280(pcVar2,iVar3);
  __security_check_cookie
            (local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
             uVar10);
  return;
}


/* FUN_00586ce0 @ 00586ce0  kind=gamemisc  attributed-by=role:callback  size=139 */

void FUN_00586ce0(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  GetModuleFileNameA((HMODULE)0x0,local_10c,0x103);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if (local_10c[0] == '\0') {
    iVar2 = 0;
  }
  else {
    pcVar3 = local_10c;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar2 = (int)pcVar3 - (int)(local_10c + 1);
  }
  FUN_0040c280(local_10c,iVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar4);
  return;
}


/* FUN_00586d70 @ 00586d70  kind=gamemisc  attributed-by=role:callback  size=138 */

undefined4 FUN_00586d70(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 *local_8;
  
  local_8 = operator_new(0xc);
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    *local_8 = 0;
    local_8[1] = 0;
    local_8[2] = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x51a0);
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&local_8);
  if (*(int *)(in_ECX + 0x51a4) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x51a4) = *(int *)(in_ECX + 0x51a4) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x51a0) + 4) + 8);
}


/* FUN_00586e00 @ 00586e00  kind=gamemisc  attributed-by=role:callback  size=529 */

undefined4 FUN_00586e00(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *in_ECX;
  int iVar9;
  int *piVar10;
  uint in_stack_00000018;
  basic_istream<char,std::char_traits<char>_> local_d0 [3];
  int aiStack_c4 [25];
  basic_ios<char,std::char_traits<char>_> local_60 [6];
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f12b9;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = in_ECX;
  FUN_004cb100(local_d0,&param_1,0x20,0x40,1);
  local_8._0_1_ = 1;
  if (*(int *)((int)aiStack_c4 +
              (local_d0[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) == 0) {
    std::basic_istream<char,std::char_traits<char>_>::seekg(local_d0,0,2);
    puVar6 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(local_d0);
    iVar5 = puVar6[2] + *puVar6;
    iVar9 = puVar6[3] + puVar6[1] + (uint)CARRY4(puVar6[2],*puVar6);
    std::basic_istream<char,std::char_traits<char>_>::seekg(local_d0,0,0);
    puVar7 = operator_new(0xc);
    local_8._0_1_ = 3;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      local_18 = puVar7;
      FUN_005870c0(iVar5);
    }
    puVar3 = local_14;
    piVar10 = local_14 + 0x1468;
    local_14 = (undefined4 *)*piVar10;
    local_8._0_1_ = 1;
    local_18 = puVar7;
    iVar8 = FUN_00583cb0(local_14,local_14[1],&local_18);
    iVar1 = puVar3[0x1469];
    if (iVar1 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    puVar3[0x1469] = iVar1 + 1;
    local_14[1] = iVar8;
    **(int **)(iVar8 + 4) = iVar8;
    if (iVar5 != 0 || iVar9 != 0) {
      std::basic_istream<char,std::char_traits<char>_>::read
                (local_d0,(char *)**(undefined4 **)(*(int *)(*piVar10 + 4) + 8),
                 CONCAT44(uVar4,iVar9));
    }
  }
  else {
    local_14 = operator_new(0xc);
    local_8._0_1_ = 2;
    local_18 = local_14;
    if (local_14 == (undefined4 *)0x0) {
      local_14 = (undefined4 *)0x0;
    }
    else {
      *local_14 = 0;
      local_14[1] = 0;
      local_14[2] = 0;
      FUN_005870c0(0);
    }
    iVar9 = in_ECX[0x1468];
    piVar10 = in_ECX + 0x1468;
    local_8._0_1_ = 1;
    iVar5 = FUN_00583cb0(iVar9,*(undefined4 *)(iVar9 + 4),&local_14);
    if (in_ECX[0x1469] == 0x15555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    in_ECX[0x1469] = in_ECX[0x1469] + 1;
    *(int *)(iVar9 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
  }
  uVar2 = *(undefined4 *)(*(int *)(*piVar10 + 4) + 8);
  std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
            ((basic_ifstream<char,std::char_traits<char>_> *)local_60);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_60);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  ExceptionList = local_10;
  return uVar2;
}


/* FUN_00587460 @ 00587460  kind=gamemisc  attributed-by=role:callback  size=509 */

void __thiscall FUN_00587460(undefined4 param_1,undefined4 param_2)

{
  BOOL BVar1;
  int iVar2;
  int iStack_2f0;
  basic_iostream<char,std::char_traits<char>_> local_2ec;
  basic_streambuf<char,std::char_traits<char>_> local_2d4 [2];
  basic_iostream<char,std::char_traits<char>_> local_2cc [2];
  undefined4 local_29c;
  undefined4 local_298;
  code *local_284 [18];
  DWORD local_23c;
  DWORD local_238;
  ulong local_234 [2];
  void *local_22c [5];
  uint local_218;
  CHAR local_214 [256];
  CHAR local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f13e6;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_234[1] = 0;
  BVar1 = GetVolumeInformationA
                    ((LPCSTR)0x0,local_114,0xff,local_234,&local_238,&local_23c,local_214,0xff);
  local_2ec.vbtablePtr =
       (basic_iostream<char,std::char_traits<char>_>_vbtable *)
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_2ec.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
       (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
  local_284[0] = _vftable__exref;
  local_8 = 0;
  local_234[1] = 2;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (&local_2ec,(basic_streambuf<char,std::char_traits<char>_> *)local_2d4);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_2ec.vbtablePtr +
   (local_2ec.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_2f0 + (local_2ec.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_2ec.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_2d4);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_2d4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_29c = 0;
  local_298 = 0;
  local_8 = 3;
  if (BVar1 != 0) {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              (&local_2ec.basic_ostream<char,std::char_traits<char>_>,local_234[0]);
  }
  iVar2 = FUN_0040e140(local_22c);
  if (0xf < local_218) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_22c[0]);
  }
  if (*(int *)(iVar2 + 0x10) == 0) {
    FUN_00449150(&local_2ec.basic_ostream<char,std::char_traits<char>_>,"default");
  }
  FUN_0040e140(param_2);
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_2ec.vbtablePtr +
   (local_2ec.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_2f0 + (local_2ec.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_2ec.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  local_2d4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_0040b4e0();
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_2d4);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            (local_2cc);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)local_284);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


