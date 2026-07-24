// OptionsWidget (ui) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "OptionsWidget.h"

/* cube::OptionsWidget::deleting_destructor_for_NamedObject @ 004d0230  kind=game  attributed-by=rtti  size=16733 */

void __thiscall cube::OptionsWidget::deleting_destructor_for_NamedObject(OptionsWidget *this)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar5;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this_00;
  undefined4 *puVar6;
  float10 fVar7;
  float fVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined *puVar20;
  undefined4 uVar21;
  wchar_t *pwVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar25;
  undefined1 *puVar26;
  int iStack_2ac;
  undefined1 local_2a8 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_298 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_290 [14];
  undefined4 local_258;
  undefined4 local_254;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_240 [6];
  float local_1f8;
  undefined1 local_1f4 [24];
  undefined1 local_1dc [24];
  undefined1 local_1c4 [24];
  undefined1 local_1ac [24];
  undefined1 local_194 [24];
  undefined1 local_17c [24];
  undefined1 local_164 [24];
  undefined1 local_14c [24];
  undefined1 local_134 [24];
  undefined1 local_11c [24];
  undefined1 local_104 [24];
  undefined1 local_ec [24];
  undefined1 local_d4 [24];
  undefined1 local_bc [24];
  undefined1 local_a4 [24];
  undefined1 local_8c [24];
  undefined4 local_74;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8b8a;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1f8 = 0.0;
  local_2a8._0_4_ =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_298[0].vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_240);
  local_8 = 0;
  local_1f8 = 1.4013e-45;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_2a8,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_290);
  local_8 = 1;
                    /* inlined destructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (local_2a8 + *(int *)(local_2a8._0_4_ + 4)) =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable
  ;
  *(int *)((int)&iStack_2ac + *(int *)(local_2a8._0_4_ + 4)) = *(int *)(local_2a8._0_4_ + 4) + -0x68
  ;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_290);
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_290[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  local_258 = 0;
  local_254 = 0;
  local_8 = 3;
  if (this->field318_0x1d4 == 0) {
    pwVar22 = L"Windowed";
  }
  else {
    pwVar22 = L"Fullscreen";
  }
  FUN_0040e6f0(local_298,pwVar22);
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74._2_2_ << 0x10);
  FUN_0040f7a0(L"Mode",4);
  local_8._0_1_ = 4;
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c._2_2_ << 0x10);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  local_8._0_1_ = 5;
  FUN_00639b30(&local_4c,&local_74,0,0,0x41700000,0x41d80000,0x41400000,0x40400000,&local_24,
               &local_34,&local_5c,0,0xbf800000,1);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffff0000);
  FUN_0040f7a0(L"Mode",4);
  local_8._0_1_ = 6;
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 7;
  FUN_00639b30(&local_4c,&local_74,0,0,0x41700000,0x41d80000,0x41400000,0,&local_5c,&local_34,
               &local_24,0,0xbf800000,1);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  uVar2 = (uint)local_4c >> 0x10;
  local_4c = (undefined4 *)(uVar2 << 0x10);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)(uVar2 << 0x10);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 8;
  uVar4 = FUN_00411bc0(&local_74);
  uVar23 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar17 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar6 = &local_24;
  puVar16 = &local_34;
  puVar15 = &local_5c;
  uVar13 = 0x40400000;
  uVar11 = 0x41400000;
  local_8._0_1_ = 9;
  uVar10 = 0x41d80000;
  fVar7 = (float10)FUN_00627d50(0x41d80000,0x41400000,0x40400000,puVar15,puVar16,puVar6,1,0xbf800000
                                ,1);
  local_1f8 = (float)fVar7;
  FUN_00639b30(&local_4c,uVar4,0,0,(local_1f8 - 250.0) * 0.5 + 240.0,uVar10,uVar11,uVar13,puVar15,
               puVar16,puVar6,uVar17,uVar19,uVar23);
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 10;
  uVar4 = FUN_00411bc0(&local_74);
  uVar23 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar17 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar6 = &local_24;
  puVar16 = &local_34;
  puVar15 = &local_5c;
  uVar13 = 0;
  uVar11 = 0x41400000;
  local_8._0_1_ = 0xb;
  uVar10 = 0x41d80000;
  fVar7 = (float10)FUN_00627d50(0x41d80000,0x41400000,0,puVar15,puVar16,puVar6,1,0xbf800000,1);
  local_1f8 = (float)fVar7;
  FUN_00639b30(&local_4c,uVar4,0,0,(local_1f8 - 250.0) * 0.5 + 240.0,uVar10,uVar11,uVar13,puVar15,
               puVar16,puVar6,uVar17,uVar19,uVar23);
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 0xc;
  FUN_0040b4e0();
  puVar6 = &local_4c;
  if (7 < local_38) {
    puVar6 = local_4c;
  }
  FUN_0040f3c0(puVar6,local_3c,local_254);
  local_8._0_1_ = 3;
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  iVar1 = *(int *)&this->field_0x160;
  if (iVar1 != *(int *)&this->field_0x164) {
    iVar24 = *(int *)(iVar1 + 4 + this->field336_0x204 * 8);
    puVar20 = &DAT_00703420;
    pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                       (local_298,*(int *)(iVar1 + this->field336_0x204 * 8));
    this_00 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e6f0(pbVar5,puVar20);
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(this_00,iVar24);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffff0000);
  FUN_0040f7a0(L"Resolution",10);
  local_8._0_1_ = 0xd;
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0xe;
  FUN_00639b30(&local_4c,&local_74,0,0,0x41700000,0x42640000,0x41400000,0x40400000,&local_5c,
               &local_34,&local_24,0,0xbf800000,1);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffff0000);
  FUN_0040f7a0(L"Resolution",10);
  local_8._0_1_ = 0xf;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x10;
  FUN_00639b30(&local_4c,&local_74,0,0,0x41700000,0x42640000,0x41400000,0,&local_5c,&local_34,
               &local_24,0,0xbf800000,1);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x11;
  uVar4 = FUN_00411bc0(&local_4c);
  uVar23 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar17 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar6 = &local_24;
  puVar16 = &local_34;
  puVar15 = &local_5c;
  uVar13 = 0x40400000;
  uVar11 = 0x41400000;
  local_8._0_1_ = 0x12;
  uVar10 = 0x42640000;
  fVar7 = (float10)FUN_00627d50(0x42640000,0x41400000,0x40400000,puVar15,puVar16,puVar6,1,0xbf800000
                                ,1);
  local_1f8 = (float)fVar7;
  FUN_00639b30(&local_74,uVar4,0,0,(local_1f8 - 250.0) * 0.5 + 240.0,uVar10,uVar11,uVar13,puVar15,
               puVar16,puVar6,uVar17,uVar19,uVar23);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x13;
  uVar4 = FUN_00411bc0(&local_4c);
  uVar23 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar17 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar6 = &local_24;
  puVar16 = &local_34;
  puVar15 = &local_5c;
  uVar13 = 0;
  uVar11 = 0x41400000;
  local_8._0_1_ = 0x14;
  uVar10 = 0x42640000;
  fVar7 = (float10)FUN_00627d50(0x42640000,0x41400000,0,puVar15,puVar16,puVar6,1,0xbf800000,1);
  local_1f8 = (float)fVar7;
  FUN_00639b30(&local_74,uVar4,0,0,(local_1f8 - 250.0) * 0.5 + 240.0,uVar10,uVar11,uVar13,puVar15,
               puVar16,puVar6,uVar17,uVar19,uVar23);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x15;
  FUN_0040b4e0();
  puVar6 = &local_4c;
  if (7 < local_38) {
    puVar6 = local_4c;
  }
  FUN_0040f3c0(puVar6,local_3c,local_254);
  local_8._0_1_ = 3;
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  if (this->field327_0x1e0 < 1) {
    pwVar22 = L"Disabled";
    pbVar5 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)local_298;
  }
  else {
    pwVar22 = L"x";
    pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                       (local_298,this->field327_0x1e0 * 2);
  }
  FUN_0040e6f0(pbVar5,pwVar22);
  FUN_0040eb60(L"Anti-aliasing");
  local_8._0_1_ = 0x16;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x17;
  FUN_00639b30(&local_4c,&local_74,0,0,0x41700000,0x42ae0000,0x41400000,0x40400000,&local_5c,
               &local_34,&local_24,0,0xbf800000,1);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"Anti-aliasing");
  local_8._0_1_ = 0x18;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x19;
  FUN_00639b30(&local_4c,&local_74,0,0,0x41700000,0x42ae0000,0x41400000,0,&local_5c,&local_34,
               &local_24,0,0xbf800000,1);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x1a;
  uVar4 = FUN_00411bc0(&local_4c);
  uVar23 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar17 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar6 = &local_24;
  puVar16 = &local_34;
  puVar15 = &local_5c;
  uVar13 = 0x40400000;
  uVar11 = 0x41400000;
  local_8._0_1_ = 0x1b;
  uVar10 = 0x42ae0000;
  fVar7 = (float10)FUN_00627d50(0x42ae0000,0x41400000,0x40400000,puVar15,puVar16,puVar6,1,0xbf800000
                                ,1);
  local_1f8 = (float)fVar7;
  FUN_00639b30(&local_74,uVar4,0,0,(local_1f8 - 250.0) * 0.5 + 240.0,uVar10,uVar11,uVar13,puVar15,
               puVar16,puVar6,uVar17,uVar19,uVar23);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x1c;
  uVar4 = FUN_00411bc0(&local_4c);
  uVar23 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar17 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar6 = &local_24;
  puVar16 = &local_34;
  puVar15 = &local_5c;
  uVar13 = 0;
  uVar11 = 0x41400000;
  local_8._0_1_ = 0x1d;
  uVar10 = 0x42ae0000;
  fVar7 = (float10)FUN_00627d50(0x42ae0000,0x41400000,0,puVar15,puVar16,puVar6,1,0xbf800000,1);
  local_1f8 = (float)fVar7;
  FUN_00639b30(&local_74,uVar4,0,0,(local_1f8 - 250.0) * 0.5 + 240.0,uVar10,uVar11,uVar13,puVar15,
               puVar16,puVar6,uVar17,uVar19,uVar23);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x1e;
  FUN_0040b4e0();
  puVar6 = &local_4c;
  if (7 < local_38) {
    puVar6 = local_4c;
  }
  FUN_0040f3c0(puVar6,local_3c,local_254);
  local_8._0_1_ = 3;
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  puVar20 = &DAT_006fd728;
  pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_298,this->field328_0x1e4);
  FUN_0040e6f0(pbVar5,puVar20);
  FUN_0040eb60(L"Render Distance");
  local_8._0_1_ = 0x1f;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x20;
  FUN_00639b30(&local_4c,&local_74,0,0,0x41700000,0x42ea0000,0x41400000,0x40400000,&local_5c,
               &local_34,&local_24,0,0xbf800000,1);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"Render Distance");
  local_8._0_1_ = 0x21;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x22;
  FUN_00639b30(&local_4c,&local_74,0,0,0x41700000,0x42ea0000,0x41400000,0,&local_5c,&local_34,
               &local_24,0,0xbf800000,1);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x23;
  uVar4 = FUN_00411bc0(&local_4c);
  uVar23 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar17 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar6 = &local_24;
  puVar16 = &local_34;
  puVar15 = &local_5c;
  uVar13 = 0x40400000;
  uVar11 = 0x41400000;
  local_8._0_1_ = 0x24;
  uVar10 = 0x42ea0000;
  fVar7 = (float10)FUN_00627d50(0x42ea0000,0x41400000,0x40400000,puVar15,puVar16,puVar6,1,0xbf800000
                                ,1);
  local_1f8 = (float)fVar7;
  FUN_00639b30(&local_74,uVar4,0,0,(local_1f8 - 250.0) * 0.5 + 240.0,uVar10,uVar11,uVar13,puVar15,
               puVar16,puVar6,uVar17,uVar19,uVar23);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x25;
  uVar4 = FUN_00411bc0(&local_4c);
  uVar23 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar17 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar6 = &local_24;
  puVar16 = &local_34;
  puVar15 = &local_5c;
  uVar13 = 0;
  uVar11 = 0x41400000;
  local_8._0_1_ = 0x26;
  uVar10 = 0x42ea0000;
  fVar7 = (float10)FUN_00627d50(0x42ea0000,0x41400000,0,puVar15,puVar16,puVar6,1,0xbf800000,1);
  local_1f8 = (float)fVar7;
  FUN_00639b30(&local_74,uVar4,0,0,(local_1f8 - 250.0) * 0.5 + 240.0,uVar10,uVar11,uVar13,puVar15,
               puVar16,puVar6,uVar17,uVar19,uVar23);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x27;
  FUN_0040b4e0();
  puVar6 = &local_4c;
  if (7 < local_38) {
    puVar6 = local_4c;
  }
  FUN_0040f3c0(puVar6,local_3c,local_254);
  local_8._0_1_ = 3;
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  puVar20 = &DAT_006fd728;
  pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_298,this->field329_0x1e8);
  FUN_0040e6f0(pbVar5,puVar20);
  FUN_0040eb60(L"Sound FX Volume");
  local_8._0_1_ = 0x28;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x29;
  FUN_00639b30(&local_4c,&local_74,0,0,0x41700000,0x43130000,0x41400000,0x40400000,&local_5c,
               &local_34,&local_24,0,0xbf800000,1);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"Sound FX Volume");
  local_8._0_1_ = 0x2a;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x2b;
  FUN_00639b30(&local_4c,&local_74,0,0,0x41700000,0x43130000,0x41400000,0,&local_5c,&local_34,
               &local_24,0,0xbf800000,1);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x2c;
  uVar4 = FUN_00411bc0(&local_4c);
  uVar23 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar17 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar6 = &local_24;
  puVar16 = &local_34;
  puVar15 = &local_5c;
  uVar13 = 0x40400000;
  uVar11 = 0x41400000;
  local_8._0_1_ = 0x2d;
  uVar10 = 0x43130000;
  fVar7 = (float10)FUN_00627d50(0x43130000,0x41400000,0x40400000,puVar15,puVar16,puVar6,1,0xbf800000
                                ,1);
  local_1f8 = (float)fVar7;
  FUN_00639b30(&local_74,uVar4,0,0,(local_1f8 - 250.0) * 0.5 + 240.0,uVar10,uVar11,uVar13,puVar15,
               puVar16,puVar6,uVar17,uVar19,uVar23);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x2e;
  uVar4 = FUN_00411bc0(&local_4c);
  uVar23 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar17 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar6 = &local_24;
  puVar16 = &local_34;
  puVar15 = &local_5c;
  uVar13 = 0;
  uVar11 = 0x41400000;
  local_8._0_1_ = 0x2f;
  uVar10 = 0x43130000;
  fVar7 = (float10)FUN_00627d50(0x43130000,0x41400000,0,puVar15,puVar16,puVar6,1,0xbf800000,1);
  local_1f8 = (float)fVar7;
  FUN_00639b30(&local_74,uVar4,0,0,(local_1f8 - 250.0) * 0.5 + 240.0,uVar10,uVar11,uVar13,puVar15,
               puVar16,puVar6,uVar17,uVar19,uVar23);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x30;
  FUN_0040b4e0();
  puVar6 = &local_4c;
  if (7 < local_38) {
    puVar6 = local_4c;
  }
  FUN_0040f3c0(puVar6,local_3c,local_254);
  local_8._0_1_ = 3;
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  puVar20 = &DAT_006fd728;
  pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_298,this->field330_0x1ec);
  FUN_0040e6f0(pbVar5,puVar20);
  FUN_0040eb60(L"Music Volume");
  local_8._0_1_ = 0x31;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x32;
  FUN_00639b30(&local_4c,&local_74,0,0,0x41700000,0x43310000,0x41400000,0x40400000,&local_5c,
               &local_34,&local_24,0,0xbf800000,1);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"Music Volume");
  local_8._0_1_ = 0x33;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x34;
  FUN_00639b30(&local_4c,&local_74,0,0,0x41700000,0x43310000,0x41400000,0,&local_5c,&local_34,
               &local_24,0,0xbf800000,1);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x35;
  uVar4 = FUN_00411bc0(&local_4c);
  uVar23 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar17 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar6 = &local_24;
  puVar16 = &local_34;
  puVar15 = &local_5c;
  uVar13 = 0x40400000;
  uVar11 = 0x41400000;
  local_8._0_1_ = 0x36;
  uVar10 = 0x43310000;
  fVar7 = (float10)FUN_00627d50(0x43310000,0x41400000,0x40400000,puVar15,puVar16,puVar6,1,0xbf800000
                                ,1);
  local_1f8 = (float)fVar7;
  FUN_00639b30(&local_74,uVar4,0,0,(local_1f8 - 250.0) * 0.5 + 240.0,uVar10,uVar11,uVar13,puVar15,
               puVar16,puVar6,uVar17,uVar19,uVar23);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x37;
  uVar4 = FUN_00411bc0(local_8c);
  uVar23 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar17 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar6 = &local_24;
  puVar16 = &local_34;
  puVar15 = &local_5c;
  uVar13 = 0;
  uVar11 = 0x41400000;
  local_8._0_1_ = 0x38;
  uVar10 = 0x43310000;
  fVar7 = (float10)FUN_00627d50(0x43310000,0x41400000,0,puVar15,puVar16,puVar6,1,0xbf800000,1);
  local_1f8 = (float)fVar7;
  FUN_00639b30(&local_4c,uVar4,0,0,(local_1f8 - 250.0) * 0.5 + 240.0,uVar10,uVar11,uVar13,puVar15,
               puVar16,puVar6,uVar17,uVar19,uVar23);
  FUN_0040f4a0(1,0);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x39;
  FUN_00411b90(&local_74);
  local_8._0_1_ = 3;
  FUN_00593e50();
  puVar20 = &DAT_006fd728;
  pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_298,this->field331_0x1f0);
  FUN_0040e6f0(pbVar5,puVar20);
  FUN_0040eb60(L"Camera Speed");
  local_8._0_1_ = 0x3a;
  FUN_0040eb60(L"resource1.dat");
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 0;
  local_8._0_1_ = 0x3b;
  uVar4 = FUN_0040eac0(0,0,0,0);
  uVar10 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar11 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  puVar26 = local_164;
  uVar14 = 0x40400000;
  uVar12 = 0x41400000;
  uVar23 = 0x434f0000;
  uVar19 = 0x41700000;
  uVar17 = 0;
  uVar13 = 0;
  puVar6 = &local_4c;
  FUN_00411320(puVar6,puVar26,0,0,0x41700000,0x434f0000,0x41400000,0x40400000,uVar11,uVar10,uVar4,
               uVar18,uVar21,uVar25);
  FUN_00639b30(puVar6,puVar26,uVar13,uVar17,uVar19,uVar23,uVar12,uVar14,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"Camera Speed");
  local_8._0_1_ = 0x3c;
  FUN_0040eb60(L"resource1.dat");
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 0;
  local_8._0_1_ = 0x3d;
  uVar4 = FUN_0040eac0(0,0,0,0);
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  puVar26 = local_1dc;
  uVar14 = 0;
  uVar12 = 0x41400000;
  uVar23 = 0x434f0000;
  uVar19 = 0x41700000;
  uVar17 = 0;
  uVar13 = 0;
  puVar9 = local_164;
  FUN_00411320(puVar9,puVar26,0,0,0x41700000,0x434f0000,0x41400000,0,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00639b30(puVar9,puVar26,uVar13,uVar17,uVar19,uVar23,uVar12,uVar14,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x3e;
  uVar4 = FUN_00411bc0(local_8c);
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 1;
  local_8._0_1_ = 0x3f;
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar13 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  uVar14 = 0x40400000;
  uVar12 = 0x41400000;
  uVar23 = 0x434f0000;
  fVar7 = (float10)FUN_00627d50(0x434f0000,0x41400000,0x40400000,uVar13,uVar11,uVar10,uVar18,uVar21,
                                uVar25);
  local_1f8 = (float)fVar7;
  puVar26 = local_1c4;
  fVar8 = (local_1f8 - 250.0) * 0.5 + 240.0;
  uVar19 = 0;
  uVar17 = 0;
  FUN_00411320(puVar26,uVar4,0,0,fVar8);
  FUN_00639b30(puVar26,uVar4,uVar17,uVar19,fVar8,uVar23,uVar12,uVar14,uVar13,uVar11,uVar10,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x40;
  uVar4 = FUN_00411bc0(local_8c);
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 1;
  local_8._0_1_ = 0x41;
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0,0,0,0);
  uVar13 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  uVar14 = 0;
  uVar12 = 0x41400000;
  uVar23 = 0x434f0000;
  fVar7 = (float10)FUN_00627d50();
  local_1f8 = (float)fVar7;
  puVar26 = local_1f4;
  fVar8 = (local_1f8 - 250.0) * 0.5 + 240.0;
  uVar19 = 0;
  uVar17 = 0;
  FUN_00411320(puVar26,uVar4,0,0,fVar8);
  FUN_00639b30(puVar26,uVar4,uVar17,uVar19,fVar8,uVar23,uVar12,uVar14,uVar13,uVar11,uVar10,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x42;
  FUN_00411b90(local_11c);
  local_8._0_1_ = 3;
  FUN_00593e50();
  puVar20 = &DAT_006fd728;
  pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_298,this->field332_0x1f4);
  FUN_0040e6f0(pbVar5,puVar20);
  FUN_0040eb60(L"Camera Smoothness");
  local_8._0_1_ = 0x43;
  FUN_0040eb60(L"resource1.dat");
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 0;
  local_8._0_1_ = 0x44;
  uVar4 = FUN_0040eac0(0,0,0,0);
  uVar10 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar11 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  puVar26 = local_bc;
  uVar14 = 0x40400000;
  uVar12 = 0x41400000;
  uVar23 = 0x436d0000;
  uVar19 = 0x41700000;
  uVar17 = 0;
  uVar13 = 0;
  puVar9 = local_11c;
  FUN_00411320(puVar9,puVar26,0,0,0x41700000,0x436d0000,0x41400000,0x40400000,uVar11,uVar10,uVar4,
               uVar18,uVar21,uVar25);
  FUN_00639b30(puVar9,puVar26,uVar13,uVar17,uVar19,uVar23,uVar12,uVar14,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"Camera Smoothness");
  local_8._0_1_ = 0x45;
  FUN_0040eb60(L"resource1.dat");
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 0;
  local_8._0_1_ = 0x46;
  uVar4 = FUN_0040eac0(0,0,0,0);
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  puVar26 = local_134;
  uVar14 = 0;
  uVar12 = 0x41400000;
  uVar23 = 0x436d0000;
  uVar19 = 0x41700000;
  uVar17 = 0;
  uVar13 = 0;
  puVar9 = local_bc;
  FUN_00411320(puVar9,puVar26,0,0,0x41700000,0x436d0000,0x41400000,0,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00639b30(puVar9,puVar26,uVar13,uVar17,uVar19,uVar23,uVar12,uVar14,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x47;
  uVar4 = FUN_00411bc0(local_8c);
  uVar25 = 1;
  local_8._0_1_ = 0x48;
  uVar21 = 0xbf800000;
  uVar18 = 1;
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar13 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  uVar14 = 0x40400000;
  uVar12 = 0x41400000;
  uVar23 = 0x436d0000;
  fVar7 = (float10)FUN_00627d50(0x436d0000,0x41400000,0x40400000,uVar13,uVar11,uVar10,uVar18,uVar21,
                                uVar25);
  local_1f8 = (float)fVar7;
  puVar26 = local_194;
  fVar8 = (local_1f8 - 250.0) * 0.5 + 240.0;
  uVar19 = 0;
  uVar17 = 0;
  FUN_00411320(puVar26,uVar4,0,0,fVar8);
  FUN_00639b30(puVar26,uVar4,uVar17,uVar19,fVar8,uVar23,uVar12,uVar14,uVar13,uVar11,uVar10,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x49;
  uVar4 = FUN_00411bc0(local_8c);
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 1;
  local_8._0_1_ = 0x4a;
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0,0,0,0);
  uVar13 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  uVar14 = 0;
  uVar12 = 0x41400000;
  uVar23 = 0x436d0000;
  fVar7 = (float10)FUN_00627d50(0x436d0000,0x41400000,0,uVar13,uVar11,uVar10,uVar18,uVar21,uVar25);
  local_1f8 = (float)fVar7;
  puVar26 = local_104;
  fVar8 = (local_1f8 - 250.0) * 0.5 + 240.0;
  uVar19 = 0;
  uVar17 = 0;
  FUN_00411320(puVar26,uVar4,0,0,fVar8);
  FUN_00639b30(puVar26,uVar4,uVar17,uVar19,fVar8,uVar23,uVar12,uVar14,uVar13,uVar11,uVar10,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x4b;
  FUN_00411b90(local_d4);
  local_8._0_1_ = 3;
  FUN_00593e50();
  puVar20 = &DAT_0070350c;
  if (this->field333_0x1f8 == 0) {
    puVar20 = &DAT_00703510;
  }
  FUN_0040e440(local_298,puVar20);
  FUN_0040eb60(L"Invert Y Axis");
  local_8._0_1_ = 0x4c;
  FUN_0040eb60(L"resource1.dat");
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 0;
  local_8._0_1_ = 0x4d;
  uVar4 = FUN_0040eac0(0,0,0,0);
  uVar10 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar11 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  puVar26 = local_ec;
  uVar14 = 0x40400000;
  uVar12 = 0x41400000;
  uVar23 = 0x43858000;
  uVar19 = 0x41700000;
  uVar17 = 0;
  uVar13 = 0;
  puVar9 = local_d4;
  FUN_00411320(puVar9,puVar26,0,0,0x41700000,0x43858000,0x41400000,0x40400000,uVar11,uVar10,uVar4,
               uVar18,uVar21,uVar25);
  FUN_00639b30(puVar9,puVar26,uVar13,uVar17,uVar19,uVar23,uVar12,uVar14,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"Invert Y Axis");
  local_8._0_1_ = 0x4e;
  FUN_0040eb60(L"resource1.dat");
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 0;
  local_8._0_1_ = 0x4f;
  uVar4 = FUN_0040eac0(0,0,0,0);
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  puVar26 = local_14c;
  uVar14 = 0;
  uVar12 = 0x41400000;
  uVar23 = 0x43858000;
  uVar19 = 0x41700000;
  uVar17 = 0;
  uVar13 = 0;
  puVar9 = local_ec;
  FUN_00411320(puVar9,puVar26,0,0,0x41700000,0x43858000,0x41400000,0,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00639b30(puVar9,puVar26,uVar13,uVar17,uVar19,uVar23,uVar12,uVar14,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x50;
  uVar4 = FUN_00411bc0(local_8c);
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 1;
  local_8._0_1_ = 0x51;
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar13 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  uVar14 = 0x40400000;
  uVar12 = 0x41400000;
  uVar23 = 0x43858000;
  fVar7 = (float10)FUN_00627d50(0x43858000,0x41400000,0x40400000,uVar13,uVar11,uVar10,uVar18,uVar21,
                                uVar25);
  local_1f8 = (float)fVar7;
  puVar26 = local_17c;
  fVar8 = (local_1f8 - 250.0) * 0.5 + 240.0;
  uVar19 = 0;
  uVar17 = 0;
  FUN_00411320(puVar26,uVar4,0,0,fVar8);
  FUN_00639b30(puVar26,uVar4,uVar17,uVar19,fVar8,uVar23,uVar12,uVar14,uVar13,uVar11,uVar10,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x52;
  uVar4 = FUN_00411bc0(local_8c);
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 1;
  local_8._0_1_ = 0x53;
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0,0,0,0);
  uVar13 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  uVar14 = 0;
  uVar12 = 0x41400000;
  uVar23 = 0x43858000;
  fVar7 = (float10)FUN_00627d50();
  local_1f8 = (float)fVar7;
  puVar26 = local_1ac;
  fVar8 = (local_1f8 - 250.0) * 0.5 + 240.0;
  uVar19 = 0;
  uVar17 = 0;
  FUN_00411320();
  FUN_00639b30(puVar26,uVar4,uVar17,uVar19,fVar8,uVar23,uVar12,uVar14,uVar13,uVar11,uVar10,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x54;
  FUN_00411b90(local_a4);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00593e50();
  if (this->field335_0x200 < 1) {
    puVar26 = &DAT_00703530;
    pbVar5 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)local_298;
  }
  else {
    puVar26 = &DAT_00703538;
    pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                       (local_298,(int)(1000 / (longlong)this->field335_0x200));
  }
  FUN_0040e440(pbVar5,puVar26);
  FUN_0040eb60(L"FPS Limit");
  local_8._0_1_ = 0x55;
  FUN_0040eb60(L"resource1.dat");
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 0;
  local_8._0_1_ = 0x56;
  uVar4 = FUN_0040eac0(0,0,0,0);
  uVar10 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar11 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  puVar26 = local_1ac;
  uVar14 = 0x40400000;
  uVar12 = 0x41400000;
  uVar23 = 0x43948000;
  uVar19 = 0x41700000;
  uVar17 = 0;
  uVar13 = 0;
  puVar9 = local_a4;
  FUN_00411320(puVar9,puVar26,0,0,0x41700000,0x43948000,0x41400000,0x40400000,uVar11,uVar10,uVar4,
               uVar18,uVar21,uVar25);
  FUN_00639b30(puVar9,puVar26,uVar13,uVar17,uVar19,uVar23,uVar12,uVar14,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"FPS Limit");
  local_8._0_1_ = 0x57;
  FUN_0040eb60(L"resource1.dat");
  uVar25 = 1;
  local_8._0_1_ = 0x58;
  uVar21 = 0xbf800000;
  uVar18 = 0;
  uVar4 = FUN_0040eac0(0,0,0,0);
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  puVar26 = local_17c;
  uVar14 = 0;
  uVar12 = 0x41400000;
  uVar23 = 0x43948000;
  uVar19 = 0x41700000;
  uVar17 = 0;
  uVar13 = 0;
  puVar9 = local_a4;
  FUN_00411320(puVar9,puVar26,0,0,0x41700000,0x43948000,0x41400000,0,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00639b30(puVar9,puVar26,uVar13,uVar17,uVar19,uVar23,uVar12,uVar14,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x59;
  uVar4 = FUN_00411bc0(local_8c);
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 1;
  local_8._0_1_ = 0x5a;
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar13 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  uVar14 = 0x40400000;
  uVar12 = 0x41400000;
  uVar23 = 0x43948000;
  fVar7 = (float10)FUN_00627d50(0x43948000,0x41400000,0x40400000,uVar13,uVar11,uVar10,uVar18,uVar21,
                                uVar25);
  local_1f8 = (float)fVar7;
  puVar26 = local_14c;
  fVar8 = (local_1f8 - 250.0) * 0.5 + 240.0;
  uVar19 = 0;
  uVar17 = 0;
  FUN_00411320(puVar26,uVar4,0,0,fVar8);
  FUN_00639b30(puVar26,uVar4,uVar17,uVar19,fVar8,uVar23,uVar12,uVar14,uVar13,uVar11,uVar10,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x5b;
  uVar4 = FUN_00411bc0(local_8c);
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 1;
  local_8._0_1_ = 0x5c;
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0,0,0,0);
  uVar13 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  uVar14 = 0;
  uVar12 = 0x41400000;
  uVar23 = 0x43948000;
  fVar7 = (float10)FUN_00627d50(0x43948000,0x41400000,0,uVar13,uVar11,uVar10,uVar18,uVar21,uVar25);
  local_1f8 = (float)fVar7;
  puVar26 = local_ec;
  fVar8 = (local_1f8 - 250.0) * 0.5 + 240.0;
  uVar19 = 0;
  uVar17 = 0;
  FUN_00411320(puVar26,uVar4,0,0,fVar8);
  FUN_00639b30(puVar26,uVar4,uVar17,uVar19,fVar8,uVar23,uVar12,uVar14,uVar13,uVar11,uVar10,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x5d;
  FUN_00411b90(local_d4);
  local_8._0_1_ = 3;
  FUN_00593e50();
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_298,this->field334_0x1fc)
  ;
  FUN_0040eb60(L"Language");
  local_8._0_1_ = 0x5e;
  FUN_0040eb60(L"resource1.dat");
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 0;
  local_8._0_1_ = 0x5f;
  uVar4 = FUN_0040eac0(0,0,0,0);
  uVar10 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar11 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  puVar26 = local_104;
  uVar14 = 0x40400000;
  uVar12 = 0x41400000;
  uVar23 = 0x43a38000;
  uVar19 = 0x41700000;
  uVar17 = 0;
  uVar13 = 0;
  puVar9 = local_a4;
  FUN_00411320(puVar9,puVar26,0,0,0x41700000,0x43a38000,0x41400000,0x40400000,uVar11,uVar10,uVar4,
               uVar18,uVar21,uVar25);
  FUN_00639b30(puVar9,puVar26,uVar13,uVar17,uVar19,uVar23,uVar12,uVar14,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"Language");
  local_8._0_1_ = 0x60;
  FUN_0040eb60(L"resource1.dat");
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 0;
  local_8._0_1_ = 0x61;
  uVar4 = FUN_0040eac0(0,0,0,0);
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  puVar26 = local_194;
  uVar14 = 0;
  uVar12 = 0x41400000;
  uVar23 = 0x43a38000;
  uVar19 = 0x41700000;
  uVar17 = 0;
  uVar13 = 0;
  puVar9 = local_a4;
  FUN_00411320();
  FUN_00639b30(puVar9,puVar26,uVar13,uVar17,uVar19,uVar23,uVar12,uVar14,uVar11,uVar10,uVar4,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x62;
  uVar4 = FUN_00411bc0(local_8c);
  uVar25 = 1;
  local_8._0_1_ = 99;
  uVar21 = 0xbf800000;
  uVar18 = 1;
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar13 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  uVar14 = 0x40400000;
  uVar12 = 0x41400000;
  uVar23 = 0x43a38000;
  fVar7 = (float10)FUN_00627d50();
  local_1f8 = (float)fVar7;
  puVar26 = local_134;
  fVar8 = (local_1f8 - 250.0) * 0.5 + 240.0;
  uVar19 = 0;
  uVar17 = 0;
  FUN_00411320();
  FUN_00639b30(puVar26,uVar4,uVar17,uVar19,fVar8,uVar23,uVar12,uVar14,uVar13,uVar11,uVar10,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 100;
  uVar4 = FUN_00411bc0(local_8c);
  uVar25 = 1;
  uVar21 = 0xbf800000;
  uVar18 = 1;
  local_8._0_1_ = 0x65;
  uVar10 = FUN_0040eac0(0,0,0,0);
  uVar11 = FUN_0040eac0(0,0,0,0);
  uVar13 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  uVar14 = 0;
  uVar12 = 0x41400000;
  uVar23 = 0x43a38000;
  fVar7 = (float10)FUN_00627d50();
  local_1f8 = (float)fVar7;
  puVar26 = local_bc;
  fVar8 = (local_1f8 - 250.0) * 0.5 + 240.0;
  uVar19 = 0;
  uVar17 = 0;
  FUN_00411320();
  FUN_00639b30(puVar26,uVar4,uVar17,uVar19,fVar8,uVar23,uVar12,uVar14,uVar13,uVar11,uVar10,uVar18,
               uVar21,uVar25);
  FUN_00593e50();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00593e50();
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  FUN_00411cf0();
  cVar3 = FUN_006294c0();
  if (cVar3 == '\0') {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
  FUN_0040f8e0(uVar4);
  FUN_004288e0(uVar4);
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             local_2a8);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::OptionsWidget::vfunction11_for_NamedObject @ 004d46d0  kind=game  attributed-by=rtti  size=1491 */

void __thiscall cube::OptionsWidget::vfunction11_for_NamedObject(void)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_0062a650(0x43700000,0x41400000,1);
  uVar6 = 1;
  uVar5 = 0x41400000;
  fVar1 = (float10)FUN_0062f600(0x41400000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar5,uVar6);
  FUN_0062a650(0x43700000,0x42280000,1);
  uVar6 = 1;
  uVar5 = 0x42280000;
  fVar1 = (float10)FUN_0062f600(0x42280000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar5,uVar6);
  FUN_0062a650(0x43700000,0x42900000,1);
  uVar6 = 1;
  uVar5 = 0x42900000;
  fVar1 = (float10)FUN_0062f600(0x42900000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar5,uVar6);
  FUN_0062a650(0x43700000,0x42cc0000,1);
  uVar6 = 1;
  uVar5 = 0x42cc0000;
  fVar1 = (float10)FUN_0062f600(0x42cc0000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar5,uVar6);
  FUN_0062a650(0x43700000,0x43040000,1);
  uVar6 = 1;
  uVar5 = 0x43040000;
  fVar1 = (float10)FUN_0062f600(0x43040000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar5,uVar6);
  FUN_0062a650(0x43700000,0x43220000,1);
  uVar6 = 1;
  uVar5 = 0x43220000;
  fVar1 = (float10)FUN_0062f600(0x43220000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar5,uVar6);
  FUN_0062a650(0x43700000,0x43400000,1);
  uVar6 = 1;
  uVar5 = 0x43400000;
  fVar1 = (float10)FUN_0062f600(0x43400000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar5,uVar6);
  FUN_0062a650(0x43700000,0x435e0000,1);
  uVar6 = 1;
  uVar5 = 0x435e0000;
  fVar1 = (float10)FUN_0062f600(0x435e0000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar5,uVar6);
  FUN_0062a650(0x43700000,0x437c0000,1);
  uVar6 = 1;
  uVar5 = 0x437c0000;
  fVar1 = (float10)FUN_0062f600(0x437c0000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar5,uVar6);
  FUN_0062a650(0x43700000,0x438d0000,1);
  uVar6 = 1;
  uVar5 = 0x438d0000;
  fVar1 = (float10)FUN_0062f600(0x438d0000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar5,uVar6);
  FUN_0062a650(0x43700000,0x439c0000,1);
  uVar6 = 1;
  uVar5 = 0x439c0000;
  fVar1 = (float10)FUN_0062f600(0x439c0000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar5,uVar6);
  uVar5 = 1;
  fVar1 = (float10)FUN_006291d0(1);
  fVar2 = (float10)FUN_006291d0();
  FUN_0062a650(0x41a00000,((float)fVar1 - (float)fVar2) - 20.0,uVar5);
  fVar1 = (float10)FUN_0062f600();
  uVar5 = 1;
  fVar2 = (float10)FUN_006291d0(1);
  fVar3 = (float10)FUN_006291d0();
  fVar4 = ((float)fVar2 - (float)fVar3) - 20.0;
  fVar2 = (float10)FUN_0062f600(fVar4);
  FUN_0062a650((((float)fVar1 - 40.0) - (float)fVar2) * 0.5 + 20.0,fVar4,uVar5);
  fVar1 = (float10)FUN_0062f600();
  uVar5 = 1;
  fVar2 = (float10)FUN_006291d0(1);
  fVar3 = (float10)FUN_006291d0();
  fVar4 = ((float)fVar2 - (float)fVar3) - 20.0;
  fVar2 = (float10)FUN_0062f600(fVar4);
  FUN_0062a650(((float)fVar1 - 20.0) - (float)fVar2,fVar4,uVar5);
  return;
}


