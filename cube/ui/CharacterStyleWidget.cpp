// CharacterStyleWidget (ui) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "CharacterStyleWidget.h"

/* cube::CharacterStyleWidget::deleting_destructor_for_NamedObject @ 00428e40  kind=game  attributed-by=rtti  size=10274 */

void __thiscall
cube::CharacterStyleWidget::deleting_destructor_for_NamedObject(CharacterStyleWidget *this)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  float10 fVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  wchar_t *pwVar20;
  undefined4 uVar21;
  char *pcVar22;
  int iStack_19c;
  undefined1 local_198 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_188 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_180 [14];
  undefined4 local_148;
  undefined4 local_144;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_130 [6];
  int local_e4;
  int local_e0;
  undefined1 local_dc [4];
  int local_d8;
  int local_d4;
  CharacterStyleWidget *local_d0;
  int local_cc;
  float local_c8;
  int local_c4;
  undefined1 *local_c0;
  undefined1 local_bc [56];
  undefined1 local_84 [4];
  int local_80;
  undefined1 local_7c [4];
  pair<unsigned___int64,unsigned___int64> *local_78;
  undefined4 local_74;
  undefined1 local_6c [8];
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2136;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_c0 = (undefined1 *)0x0;
  local_198._0_4_ =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_188[0].vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  local_d0 = this;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_130);
  local_8 = 0;
  local_c0 = (undefined1 *)0x1;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_198,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_180);
  local_8 = 1;
                    /* inlined destructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (local_198 + *(int *)(local_198._0_4_ + 4)) =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable
  ;
  *(int *)((int)&iStack_19c + *(int *)(local_198._0_4_ + 4)) = *(int *)(local_198._0_4_ + 4) + -0x68
  ;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_180);
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_180[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  local_148 = 0;
  local_144 = 0;
  local_8 = 3;
  switch((this->CharacterStyleWidget_data).offset_0x2c) {
  case 0:
    pwVar20 = L"Human";
    break;
  case 1:
    pwVar20 = L"Elf";
    break;
  case 2:
    pwVar20 = L"Dwarf";
    break;
  case 3:
    pwVar20 = L"Orc";
    break;
  case 4:
    pwVar20 = L"Goblin";
    break;
  case 5:
    pwVar20 = L"Lizard";
    break;
  case 6:
    pwVar20 = L"Undead";
    break;
  case 7:
    pwVar20 = L"Frogman";
    break;
  default:
    goto LAB_00428f7c;
  }
  FUN_0040e6f0(local_188,pwVar20);
LAB_00428f7c:
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74._2_2_ << 0x10);
  FUN_0040f7a0(L"Race",4);
  local_8._0_1_ = 4;
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c._2_2_ << 0x10);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 5;
  FUN_00639b30(&local_3c,&local_74,0,0,0x41700000,0x41d80000,0x41400000,0x40400000,&local_5c,
               &local_4c,&local_24,0,0xbf800000,1);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffff0000);
  FUN_0040f7a0(L"Race",4);
  local_8._0_1_ = 6;
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 7;
  FUN_00639b30(&local_3c,&local_74,0,0,0x41700000,0x41d80000,0x41400000,0,&local_5c,&local_4c,
               &local_24,0,0xbf800000,1);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  uVar7 = (uint)local_3c >> 0x10;
  local_3c = (undefined4 *)(uVar7 << 0x10);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)(uVar7 << 0x10);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 8;
  uVar3 = FUN_00411bc0(&local_74);
  uVar21 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar18 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar9 = &local_24;
  puVar13 = &local_4c;
  puVar12 = &local_5c;
  uVar17 = 0x40400000;
  uVar15 = 0x41400000;
  local_8._0_1_ = 9;
  uVar14 = 0x41d80000;
  fVar11 = (float10)FUN_00627d50(0x41d80000,0x41400000,0x40400000,puVar12,puVar13,puVar9,1,
                                 0xbf800000,1);
  local_c0 = (undefined1 *)(float)fVar11;
  FUN_00639b30(&local_3c,uVar3,0,0,((float)local_c0 - 110.0) * 0.5 + 100.0,uVar14,uVar15,uVar17,
               puVar12,puVar13,puVar9,uVar18,uVar19,uVar21);
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 10;
  uVar3 = FUN_00411bc0(&local_74);
  uVar21 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar18 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar9 = &local_24;
  puVar13 = &local_4c;
  puVar12 = &local_5c;
  uVar17 = 0;
  uVar15 = 0x41400000;
  local_8._0_1_ = 0xb;
  uVar14 = 0x41d80000;
  fVar11 = (float10)FUN_00627d50(0x41d80000,0x41400000,0,puVar12,puVar13,puVar9,1,0xbf800000,1);
  local_c0 = (undefined1 *)(float)fVar11;
  FUN_00639b30(&local_3c,uVar3,0,0,((float)local_c0 - 110.0) * 0.5 + 100.0,uVar14,uVar15,uVar17,
               puVar12,puVar13,puVar9,uVar18,uVar19,uVar21);
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 0xc;
  FUN_0040b4e0();
  puVar9 = &local_3c;
  if (7 < local_28) {
    puVar9 = local_3c;
  }
  FUN_0040f3c0(puVar9,local_2c,local_144);
  local_8._0_1_ = 3;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  if ((this->CharacterStyleWidget_data).offset_0x34 == 0) {
    pcVar22 = "Male";
  }
  else {
    pcVar22 = "Female";
  }
  FUN_0040e440(local_188,pcVar22);
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffff0000);
  FUN_0040f7a0(L"Gender",6);
  local_8._0_1_ = 0xd;
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0xe;
  FUN_00639b30(&local_3c,&local_74,0,0,0x41700000,0x42640000,0x41400000,0x40400000,&local_5c,
               &local_4c,&local_24,0,0xbf800000,1);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffff0000);
  FUN_0040f7a0(L"Gender",6);
  local_8._0_1_ = 0xf;
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x10;
  FUN_00639b30(&local_3c,&local_74,0,0,0x41700000,0x42640000,0x41400000,0,&local_5c,&local_4c,
               &local_24,0,0xbf800000,1);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  uVar7 = (uint)local_3c >> 0x10;
  local_3c = (undefined4 *)(uVar7 << 0x10);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)(uVar7 << 0x10);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0x11;
  uVar3 = FUN_00411bc0(&local_74);
  uVar21 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar18 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar9 = &local_24;
  puVar13 = &local_4c;
  puVar12 = &local_5c;
  uVar17 = 0x40400000;
  uVar15 = 0x41400000;
  local_8._0_1_ = 0x12;
  uVar14 = 0x42640000;
  fVar11 = (float10)FUN_00627d50(0x42640000,0x41400000,0x40400000,puVar12,puVar13,puVar9,1,
                                 0xbf800000,1);
  local_c0 = (undefined1 *)(float)fVar11;
  FUN_00639b30(&local_3c,uVar3,0,0,((float)local_c0 - 110.0) * 0.5 + 100.0,uVar14,uVar15,uVar17,
               puVar12,puVar13,puVar9,uVar18,uVar19,uVar21);
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x13;
  uVar3 = FUN_00411bc0(&local_3c);
  uVar21 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar18 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar9 = &local_24;
  puVar13 = &local_4c;
  puVar12 = &local_5c;
  uVar17 = 0;
  uVar15 = 0x41400000;
  local_8._0_1_ = 0x14;
  uVar14 = 0x42640000;
  fVar11 = (float10)FUN_00627d50(0x42640000,0x41400000,0,puVar12,puVar13,puVar9,1,0xbf800000,1);
  local_c0 = (undefined1 *)(float)fVar11;
  FUN_00639b30(&local_74,uVar3,0,0,((float)local_c0 - 110.0) * 0.5 + 100.0,uVar14,uVar15,uVar17,
               puVar12,puVar13,puVar9,uVar18,uVar19,uVar21);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x15;
  FUN_0040b4e0();
  puVar9 = &local_3c;
  if (7 < local_28) {
    puVar9 = local_3c;
  }
  FUN_0040f3c0(puVar9,local_2c,local_144);
  local_8._0_1_ = 3;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  switch((this->CharacterStyleWidget_data).offset_0x30) {
  case 0:
    pwVar20 = L"Warrior";
    break;
  case 1:
    pwVar20 = L"Ranger";
    break;
  case 2:
    pwVar20 = L"Mage";
    break;
  case 3:
    pwVar20 = L"Rogue";
    break;
  default:
    goto LAB_00429aac;
  }
  FUN_0040e6f0(local_188,pwVar20);
LAB_00429aac:
  FUN_0040eb60(L"Class");
  local_8._0_1_ = 0x16;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x17;
  FUN_00639b30(&local_3c,&local_74,0,0,0x41700000,0x42ae0000,0x41400000,0x40400000,&local_5c,
               &local_4c,&local_24,0,0xbf800000,1);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"Class");
  local_8._0_1_ = 0x18;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x19;
  FUN_00639b30(&local_3c,&local_74,0,0,0x41700000,0x42ae0000,0x41400000,0,&local_5c,&local_4c,
               &local_24,0,0xbf800000,1);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x1a;
  uVar3 = FUN_00411bc0(&local_3c);
  uVar21 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar18 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar9 = &local_24;
  puVar13 = &local_4c;
  puVar12 = &local_5c;
  uVar17 = 0x40400000;
  uVar15 = 0x41400000;
  local_8._0_1_ = 0x1b;
  uVar14 = 0x42ae0000;
  fVar11 = (float10)FUN_00627d50(0x42ae0000,0x41400000,0x40400000,puVar12,puVar13,puVar9,1,
                                 0xbf800000,1);
  local_c0 = (undefined1 *)(float)fVar11;
  FUN_00639b30(&local_74,uVar3,0,0,((float)local_c0 - 110.0) * 0.5 + 100.0,uVar14,uVar15,uVar17,
               puVar12,puVar13,puVar9,uVar18,uVar19,uVar21);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x1c;
  uVar3 = FUN_00411bc0(&local_3c);
  uVar21 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar18 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar9 = &local_24;
  puVar13 = &local_4c;
  puVar12 = &local_5c;
  uVar17 = 0;
  uVar15 = 0x41400000;
  local_8._0_1_ = 0x1d;
  uVar14 = 0x42ae0000;
  fVar11 = (float10)FUN_00627d50(0x42ae0000,0x41400000,0,puVar12,puVar13,puVar9,1,0xbf800000,1);
  local_c0 = (undefined1 *)(float)fVar11;
  FUN_00639b30(&local_74,uVar3,0,0,((float)local_c0 - 110.0) * 0.5 + 100.0,uVar14,uVar15,uVar17,
               puVar12,puVar13,puVar9,uVar18,uVar19,uVar21);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x1e;
  FUN_0040b4e0();
  puVar9 = &local_3c;
  if (7 < local_28) {
    puVar9 = local_3c;
  }
  FUN_0040f3c0(puVar9,local_2c,local_144);
  local_8._0_1_ = 3;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  iVar4 = (this->CharacterStyleWidget_data).offset_0x38 + 1;
  pbVar5 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e6f0(local_188,L"Face ");
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar5,iVar4);
  FUN_0040eb60(L"Face");
  local_8._0_1_ = 0x1f;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x20;
  FUN_00639b30(&local_3c,&local_74,0,0,0x41700000,0x42ea0000,0x41400000,0x40400000,&local_5c,
               &local_4c,&local_24,0,0xbf800000,1);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"Face");
  local_8._0_1_ = 0x21;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x22;
  FUN_00639b30(&local_3c,&local_74,0,0,0x41700000,0x42ea0000,0x41400000,0,&local_5c,&local_4c,
               &local_24,0,0xbf800000,1);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x23;
  uVar3 = FUN_00411bc0(&local_3c);
  uVar21 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar18 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar9 = &local_24;
  puVar13 = &local_4c;
  puVar12 = &local_5c;
  uVar17 = 0x40400000;
  uVar15 = 0x41400000;
  local_8._0_1_ = 0x24;
  uVar14 = 0x42ea0000;
  fVar11 = (float10)FUN_00627d50(0x42ea0000,0x41400000,0x40400000,puVar12,puVar13,puVar9,1,
                                 0xbf800000,1);
  local_c0 = (undefined1 *)(float)fVar11;
  FUN_00639b30(&local_74,uVar3,0,0,((float)local_c0 - 110.0) * 0.5 + 100.0,uVar14,uVar15,uVar17,
               puVar12,puVar13,puVar9,uVar18,uVar19,uVar21);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x25;
  uVar3 = FUN_00411bc0(&local_3c);
  uVar21 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar18 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar9 = &local_24;
  puVar13 = &local_4c;
  puVar12 = &local_5c;
  uVar17 = 0;
  uVar15 = 0x41400000;
  local_8._0_1_ = 0x26;
  uVar14 = 0x42ea0000;
  fVar11 = (float10)FUN_00627d50(0x42ea0000,0x41400000,0,puVar12,puVar13,puVar9,1,0xbf800000,1);
  local_c0 = (undefined1 *)(float)fVar11;
  FUN_00639b30(&local_74,uVar3,0,0,((float)local_c0 - 110.0) * 0.5 + 100.0,uVar14,uVar15,uVar17,
               puVar12,puVar13,puVar9,uVar18,uVar19,uVar21);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x27;
  FUN_0040b4e0();
  puVar9 = &local_3c;
  if (7 < local_28) {
    puVar9 = local_3c;
  }
  FUN_0040f3c0(puVar9,local_2c,local_144);
  local_8._0_1_ = 3;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  iVar4 = (this->CharacterStyleWidget_data).offset_0x3c + 1;
  pbVar5 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e6f0(local_188,L"Haircut ");
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar5,iVar4);
  FUN_0040eb60(L"Haircut");
  local_8._0_1_ = 0x28;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x29;
  FUN_00639b30(&local_3c,&local_74,0,0,0x41700000,0x43130000,0x41400000,0x40400000,&local_5c,
               &local_4c,&local_24,0,0xbf800000,1);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"Haircut");
  local_8._0_1_ = 0x2a;
  FUN_0040eb60(L"resource1.dat");
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0x2b;
  FUN_00639b30(&local_3c,&local_74,0,0,0x41700000,0x43130000,0x41400000,0,&local_5c,&local_4c,
               &local_24,0,0xbf800000,1);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x2c;
  uVar3 = FUN_00411bc0(&local_3c);
  uVar21 = 1;
  local_24 = 0;
  uVar19 = 0xbf800000;
  uVar18 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  puVar9 = &local_24;
  puVar13 = &local_4c;
  puVar12 = &local_5c;
  uVar17 = 0x40400000;
  uVar15 = 0x41400000;
  local_8._0_1_ = 0x2d;
  uVar14 = 0x43130000;
  fVar11 = (float10)FUN_00627d50(0x43130000,0x41400000,0x40400000,puVar12,puVar13,puVar9,1,
                                 0xbf800000,1);
  local_c0 = (undefined1 *)(float)fVar11;
  FUN_00639b30(&local_74,uVar3,0,0,((float)local_c0 - 110.0) * 0.5 + 100.0,uVar14,uVar15,uVar17,
               puVar12,puVar13,puVar9,uVar18,uVar19,uVar21);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
  local_8._0_1_ = 3;
  if (local_60 < 8) {
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x2e;
    uVar3 = FUN_00411bc0(&local_3c);
    uVar21 = 1;
    local_24 = 0;
    uVar19 = 0xbf800000;
    uVar18 = 1;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_5c = 0x3f800000;
    local_58 = 0x3f800000;
    local_54 = 0x3f800000;
    local_50 = 0x3f800000;
    puVar9 = &local_24;
    puVar13 = &local_4c;
    puVar12 = &local_5c;
    uVar17 = 0;
    uVar15 = 0x41400000;
    local_8._0_1_ = 0x2f;
    uVar14 = 0x43130000;
    fVar11 = (float10)FUN_00627d50(0x43130000,0x41400000,0,puVar12,puVar13,puVar9,1,0xbf800000,1);
    local_c0 = (undefined1 *)(float)fVar11;
    FUN_00639b30(&local_74,uVar3,0,0,((float)local_c0 - 110.0) * 0.5 + 100.0,uVar14,uVar15,uVar17,
                 puVar12,puVar13,puVar9,uVar18,uVar19,uVar21);
    if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c);
    }
    local_28 = 7;
    local_2c = 0;
    local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_74);
    }
    cVar2 = FUN_006294c0();
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_24 = 0;
    if (cVar2 == '\0') {
      local_24 = 0x3f800000;
    }
    iVar4 = *(int *)((this->CharacterStyleWidget_data).offset_0x4 + 0x3c);
    puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x118) * 0x10 + *(int *)(iVar4 + 0x144));
    *puVar9 = local_24;
    puVar9[1] = 0x3f800000;
    puVar9[2] = 0x3f800000;
    puVar9[3] = 0x3f800000;
    cVar2 = FUN_006294c0();
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_24 = 0;
    if (cVar2 == '\0') {
      local_24 = 0x3f800000;
    }
    iVar4 = *(int *)((this->CharacterStyleWidget_data).offset_0x8 + 0x3c);
    puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x118) * 0x10 + *(int *)(iVar4 + 0x144));
    *puVar9 = local_24;
    puVar9[1] = 0x3f800000;
    puVar9[2] = 0x3f800000;
    puVar9[3] = 0x3f800000;
    cVar2 = FUN_006294c0();
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_24 = 0;
    if (cVar2 == '\0') {
      local_24 = 0x3f800000;
    }
    iVar4 = *(int *)((this->CharacterStyleWidget_data).offset_0x14 + 0x3c);
    puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x118) * 0x10 + *(int *)(iVar4 + 0x144));
    *puVar9 = local_24;
    puVar9[1] = 0x3f800000;
    puVar9[2] = 0x3f800000;
    puVar9[3] = 0x3f800000;
    cVar2 = FUN_006294c0();
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_24 = 0;
    if (cVar2 == '\0') {
      local_24 = 0x3f800000;
    }
    iVar4 = *(int *)((this->CharacterStyleWidget_data).offset_0x18 + 0x3c);
    puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x118) * 0x10 + *(int *)(iVar4 + 0x144));
    *puVar9 = local_24;
    puVar9[1] = 0x3f800000;
    puVar9[2] = 0x3f800000;
    puVar9[3] = 0x3f800000;
    cVar2 = FUN_006294c0();
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_24 = 0;
    if (cVar2 == '\0') {
      local_24 = 0x3f800000;
    }
    iVar4 = *(int *)((this->CharacterStyleWidget_data).offset_0xc + 0x3c);
    puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x118) * 0x10 + *(int *)(iVar4 + 0x144));
    *puVar9 = local_24;
    puVar9[1] = 0x3f800000;
    puVar9[2] = 0x3f800000;
    puVar9[3] = 0x3f800000;
    cVar2 = FUN_006294c0();
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_24 = 0;
    if (cVar2 == '\0') {
      local_24 = 0x3f800000;
    }
    iVar4 = *(int *)((this->CharacterStyleWidget_data).offset_0x10 + 0x3c);
    puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x118) * 0x10 + *(int *)(iVar4 + 0x144));
    *puVar9 = local_24;
    puVar9[1] = 0x3f800000;
    puVar9[2] = 0x3f800000;
    puVar9[3] = 0x3f800000;
    cVar2 = FUN_006294c0();
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_24 = 0;
    if (cVar2 == '\0') {
      local_24 = 0x3f800000;
    }
    iVar4 = *(int *)((this->CharacterStyleWidget_data).offset_0x1c + 0x3c);
    puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x118) * 0x10 + *(int *)(iVar4 + 0x144));
    *puVar9 = local_24;
    puVar9[1] = 0x3f800000;
    puVar9[2] = 0x3f800000;
    puVar9[3] = 0x3f800000;
    cVar2 = FUN_006294c0();
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_24 = 0;
    if (cVar2 == '\0') {
      local_24 = 0x3f800000;
    }
    iVar4 = *(int *)((this->CharacterStyleWidget_data).offset_0x20 + 0x3c);
    puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x118) * 0x10 + *(int *)(iVar4 + 0x144));
    *puVar9 = local_24;
    puVar9[1] = 0x3f800000;
    puVar9[2] = 0x3f800000;
    puVar9[3] = 0x3f800000;
    cVar2 = FUN_006294c0();
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_24 = 0;
    if (cVar2 == '\0') {
      local_24 = 0x3f800000;
    }
    iVar4 = *(int *)((this->CharacterStyleWidget_data).offset_0x24 + 0x3c);
    puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x118) * 0x10 + *(int *)(iVar4 + 0x144));
    *puVar9 = local_24;
    puVar9[1] = 0x3f800000;
    puVar9[2] = 0x3f800000;
    puVar9[3] = 0x3f800000;
    cVar2 = FUN_006294c0();
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_24 = 0;
    if (cVar2 == '\0') {
      local_24 = 0x3f800000;
    }
    iVar4 = *(int *)((this->CharacterStyleWidget_data).offset_0x28 + 0x3c);
    puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x118) * 0x10 + *(int *)(iVar4 + 0x144));
    *puVar9 = local_24;
    puVar9[1] = 0x3f800000;
    puVar9[2] = 0x3f800000;
    puVar9[3] = 0x3f800000;
    piVar1 = *(int **)((this->CharacterStyleWidget_data).offset_0x0 + 0x134);
    (**(code **)(*piVar1 + 0x104))(piVar1,0,0);
    piVar1 = *(int **)((this->CharacterStyleWidget_data).offset_0x0 + 0x134);
    (**(code **)(*piVar1 + 0x104))(piVar1,1,0);
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x30;
    FUN_0040b4e0();
    puVar9 = &local_3c;
    if (7 < local_28) {
      puVar9 = local_3c;
    }
    FUN_0040f3c0(puVar9,local_2c,local_144);
    local_8._0_1_ = 3;
    if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c);
    }
    FUN_0040e6f0(local_188,L"Hair color");
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x31;
    uVar3 = FUN_00411bc0(&local_3c);
    uVar21 = 1;
    local_24 = 0;
    uVar19 = 0xbf800000;
    uVar18 = 1;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0x3f800000;
    local_5c = 0x3f800000;
    local_58 = 0x3f800000;
    local_54 = 0x3f800000;
    local_50 = 0x3f800000;
    puVar9 = &local_24;
    puVar13 = &local_4c;
    puVar12 = &local_5c;
    uVar17 = 0x40400000;
    uVar15 = 0x41400000;
    local_8._0_1_ = 0x32;
    uVar14 = 0x43360000;
    fVar11 = (float10)FUN_00627d50(0x43360000,0x41400000,0x40400000,puVar12,puVar13,puVar9,1,
                                   0xbf800000,1);
    local_c0 = (undefined1 *)(float)fVar11;
    FUN_00639b30(&local_74,uVar3,0,0,(float)local_c0 * 0.5,uVar14,uVar15,uVar17,puVar12,puVar13,
                 puVar9,uVar18,uVar19,uVar21);
    if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c);
    }
    local_28 = 7;
    local_2c = 0;
    local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
    local_8._0_1_ = 3;
    if (local_60 < 8) {
      FUN_0040eb60(L"resource1.dat");
      local_8._0_1_ = 0x33;
      uVar3 = FUN_00411bc0(&local_3c);
      uVar21 = 1;
      local_24 = 0;
      uVar19 = 0xbf800000;
      uVar18 = 1;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_5c = 0x3f800000;
      local_58 = 0x3f800000;
      local_54 = 0x3f800000;
      local_50 = 0x3f800000;
      puVar9 = &local_24;
      puVar13 = &local_4c;
      puVar12 = &local_5c;
      uVar17 = 0;
      uVar15 = 0x41400000;
      local_8._0_1_ = 0x34;
      uVar14 = 0x43360000;
      fVar11 = (float10)FUN_00627d50(0x43360000,0x41400000,0,puVar12,puVar13,puVar9,1,0xbf800000,1);
      local_c0 = (undefined1 *)(float)fVar11;
      FUN_00639b30(&local_74,uVar3,0,0,(float)local_c0 * 0.5,uVar14,uVar15,uVar17,puVar12,puVar13,
                   puVar9,uVar18,uVar19,uVar21);
      if (local_28 < 8) {
        local_28 = 7;
        local_2c = 0;
        local_3c = (undefined4 *)((uint)local_3c & 0xffff0000);
        FUN_00593e50();
        local_c0 = (undefined1 *)((int)&(this->CharacterStyleWidget_data).offset_0x40 + 3);
        FUN_00428920(local_c0);
        FUN_00428920(&(this->CharacterStyleWidget_data).offset_0x40);
        FUN_005aea70();
        local_8 = CONCAT31(local_8._1_3_,0x35);
        uVar3 = FUN_0040eac0(0x3f800000,0,0,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0x3f800000,0x3e800000,0,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0x3f800000,0x3f000000,0,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0x3f800000,0x3f800000,0,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0x3f000000,0x3f800000,0,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0,0x3f800000,0,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0,0x3f800000,0x3f000000,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0,0x3f800000,0x3f800000,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0,0x3f000000,0x3f800000,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0,0x3e800000,0x3f800000,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0,0,0x3f800000,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0x3e800000,0,0x3f800000,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0x3f000000,0,0x3f800000,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0x3f400000,0,0x3f800000,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0x3f800000,0,0x3f800000,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = FUN_0040eac0(0x3f000000,0x3f000000,0x3f000000,0x3f800000);
        FUN_0042bd20(uVar3);
        uVar3 = 0;
        FUN_006294d0(local_84);
        pfVar6 = (float *)FUN_00428970(uVar3);
        local_e4 = (int)*pfVar6;
        uVar3 = 1;
        FUN_006294d0(local_7c);
        pfVar6 = (float *)FUN_00428970(uVar3);
        local_e0 = (int)*pfVar6;
        local_c4 = 0;
        local_80 = FUN_0042c070();
        if (0 < local_80) {
          iVar4 = 0;
          do {
            iVar10 = 0;
            local_d8 = 0;
            local_78 = (pair<unsigned___int64,unsigned___int64> *)FUN_00428980(iVar4);
            iVar4 = local_c4 * 0x11;
            local_d4 = iVar4 + 0xd;
            local_cc = 0xc5;
            do {
              std::pair<unsigned___int64,unsigned___int64>::
              operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                        ((pair<unsigned___int64,unsigned___int64> *)&local_24,local_78);
              if (iVar10 < 3) {
                local_c8 = (float)iVar10 * 0.25 + 0.2;
                pfVar6 = (float *)FUN_00428970(0);
                *pfVar6 = local_c8 * *pfVar6;
                pfVar6 = (float *)FUN_00428970(1);
                *pfVar6 = local_c8 * *pfVar6;
                pfVar6 = (float *)FUN_00428970(2);
                *pfVar6 = local_c8 * *pfVar6;
              }
              if (3 < iVar10) {
                puVar9 = &local_24;
                puVar16 = local_bc;
                FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
                uVar3 = FUN_00428990(puVar16,puVar9);
                uVar3 = FUN_004a8f40(local_6c,((float)iVar10 - 3.0) * 0.25,uVar3);
                FUN_004289e0(uVar3);
              }
              iVar10 = *(int *)(local_d0->Object_data).offset_0x0;
              uVar3 = FUN_0040eac0(0,0,0,0x3f800000);
              uVar14 = FUN_0040ea50(0x41880000,0x41880000);
              uVar15 = FUN_0040ea50((float)local_d4,(float)local_cc);
              (**(code **)(iVar10 + 0x18))(uVar15,uVar14,uVar3);
              local_c8 = (float)(local_cc + 0x11);
              puVar9 = &local_24;
              iVar10 = *(int *)(local_d0->Object_data).offset_0x0;
              uVar3 = FUN_0040ea50(0x41700000,0x41700000);
              uVar14 = FUN_0040ea50((float)(iVar4 + 0xe),(float)((int)local_c8 + -0x10));
              (**(code **)(iVar10 + 0x18))(uVar14,uVar3,puVar9);
              iVar10 = local_cc;
              if ((((local_d4 <= local_e4) && (local_cc <= local_e0)) &&
                  (local_e4 < local_c4 * 0x11 + 0x1e)) && (local_e0 < local_cc + 0x11)) {
                pfVar6 = (float *)FUN_00428970(2);
                uVar7 = (int)(*pfVar6 * 255.0) & 0xff;
                pfVar6 = (float *)FUN_00428970(1);
                uVar8 = (int)(*pfVar6 * 255.0) & 0xff;
                pfVar6 = (float *)FUN_00428970(0);
                uVar3 = FUN_0040ea70((int)(*pfVar6 * 255.0) & 0xff,uVar8,uVar7);
                FUN_00428920(uVar3);
              }
              local_cc = iVar10 + 0x11;
              iVar10 = local_d8 + 1;
              local_d8 = iVar10;
            } while (local_cc < 0x13c);
            iVar4 = local_c4 + 1;
            local_c4 = iVar4;
          } while (iVar4 < local_80);
        }
        cVar2 = FUN_00428940(local_dc);
        if (cVar2 != '\0') {
          FUN_0042c080(1);
        }
        FUN_005fb860();
        std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                  ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *
                   )local_198);
        ExceptionList = local_10;
        __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
        return;
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_74);
}


/* cube::CharacterStyleWidget::vfunction11_for_NamedObject @ 0042bb00  kind=game  attributed-by=rtti  size=536 */

void __thiscall cube::CharacterStyleWidget::vfunction11_for_NamedObject(void)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_0062a650(0x42c80000,0x41400000,1);
  uVar4 = 1;
  uVar3 = 0x41400000;
  fVar1 = (float10)FUN_0062f600(0x41400000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar3,uVar4);
  FUN_0062a650(0x42c80000,0x42280000,1);
  uVar4 = 1;
  uVar3 = 0x42280000;
  fVar1 = (float10)FUN_0062f600(0x42280000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar3,uVar4);
  FUN_0062a650(0x42c80000,0x42900000,1);
  uVar4 = 1;
  uVar3 = 0x42900000;
  fVar1 = (float10)FUN_0062f600(0x42900000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar3,uVar4);
  FUN_0062a650(0x42c80000,0x42cc0000,1);
  uVar4 = 1;
  uVar3 = 0x42cc0000;
  fVar1 = (float10)FUN_0062f600(0x42cc0000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar3,uVar4);
  FUN_0062a650(0x42c80000,0x43040000,1);
  uVar4 = 1;
  uVar3 = 0x43040000;
  fVar1 = (float10)FUN_0062f600(0x43040000,1);
  fVar2 = (float10)FUN_0062f600();
  FUN_0062a650(((float)fVar1 - (float)fVar2) - 15.0,uVar3,uVar4);
  return;
}


