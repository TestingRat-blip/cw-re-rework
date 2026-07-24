// CharacterWidget (ui) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "CharacterWidget.h"

/* cube::CharacterWidget::deleting_destructor_for_NamedObject @ 00434e30  kind=game  attributed-by=rtti  size=16666 */

void __thiscall cube::CharacterWidget::deleting_destructor_for_NamedObject(CharacterWidget *this)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar4;
  undefined4 ****ppppuVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar10;
  pair<unsigned___int64,unsigned___int64> *ppVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  void **ppvVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined *puVar27;
  int iStack_370;
  undefined1 local_36c [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_35c [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_354 [14];
  undefined4 local_31c;
  undefined4 local_318;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_304 [6];
  undefined1 local_2b9;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  int *local_2a8;
  undefined1 local_2a4 [24];
  undefined1 local_28c [24];
  undefined1 local_274 [24];
  undefined1 local_25c [24];
  undefined1 local_244 [24];
  undefined1 local_22c [24];
  undefined1 local_214 [24];
  undefined1 local_1fc [24];
  undefined1 local_1e4 [24];
  undefined1 local_1cc [24];
  undefined1 local_1b4 [24];
  undefined1 local_19c [24];
  undefined1 local_184 [24];
  undefined1 local_16c [24];
  undefined1 local_154 [24];
  undefined1 local_13c [24];
  undefined1 local_124 [24];
  undefined1 local_10c [24];
  undefined1 local_f4 [24];
  undefined1 local_dc [24];
  undefined1 local_c4 [24];
  pair<unsigned___int64,unsigned___int64> local_ac [16];
  undefined1 local_9c [24];
  void *local_84 [4];
  undefined4 local_74;
  uint local_70;
  undefined4 ***local_6c [4];
  undefined4 local_5c;
  uint local_58;
  int local_54;
  int local_50;
  undefined4 ***local_4c [2];
  undefined4 local_44;
  undefined4 local_40;
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
  puStack_c = &LAB_006e2902;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2ac = 0.0;
  local_54 = 10;
  local_50 = 0x14;
  local_36c._0_4_ =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_35c[0].vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_304);
  local_8 = 0;
  local_2ac = 1.4013e-45;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_36c,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_354);
  local_8 = 1;
                    /* inlined destructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (local_36c + *(int *)(local_36c._0_4_ + 4)) =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable
  ;
  *(int *)((int)&iStack_370 + *(int *)(local_36c._0_4_ + 4)) = *(int *)(local_36c._0_4_ + 4) + -0x68
  ;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_354);
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_354[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  local_31c = 0;
  local_318 = 0;
  local_8 = 3;
  iVar12 = *(int *)((this->CharacterWidget_data).offset_0x0 + 0x8006d0);
  pcVar14 = (char *)(iVar12 + 0x1168);
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = (undefined4 ***)((uint)local_4c[0] & 0xffffff00);
  if (*pcVar14 == '\0') {
    iVar12 = 0;
  }
  else {
    pcVar13 = pcVar14;
    do {
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    iVar12 = (int)pcVar13 - (iVar12 + 0x1169);
  }
  FUN_0040c280(pcVar14,iVar12);
  local_8._0_1_ = 4;
  uVar3 = FUN_006089c0(local_6c,local_4c);
  local_8._0_1_ = 5;
  FUN_00424ba0(local_35c,uVar3);
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  local_58 = 7;
  local_5c = 0;
  uVar1 = (uint)local_6c[0] >> 0x10;
  local_6c[0] = (undefined4 ***)(uVar1 << 0x10);
  local_8._0_1_ = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c[0]);
  }
  local_58 = 7;
  local_5c = 0;
  local_6c[0] = (undefined4 ***)(uVar1 << 0x10);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 6;
  uVar3 = FUN_00411bc0(local_84);
  local_2b8 = 0.0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_44 = 0x3f800000;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_8._0_1_ = 7;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)local_54,(float)local_50,0x41400000,0x40400000,
               &local_44,&local_24,&local_34,0x10,0x43340000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  local_58 = 7;
  local_5c = 0;
  local_6c[0] = (undefined4 ***)((uint)local_6c[0] & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 8;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 9;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)local_54,(float)local_50,0x41400000,0,&local_34,
               &local_24,&local_44,0x10,0x43340000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  local_50 = local_50 + 0x10;
  local_38 = 7;
  local_3c = 0;
  local_4c[0] = (undefined4 ***)((uint)local_4c[0] & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 10;
  FUN_0040b4e0();
  ppppuVar5 = local_4c;
  if (7 < local_38) {
    ppppuVar5 = (undefined4 ****)local_4c[0];
  }
  FUN_0040f3c0(ppppuVar5,local_3c,local_318);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c[0]);
  }
  iVar12 = *(int *)(*(int *)((this->CharacterWidget_data).offset_0x0 + 0x8006d0) + 400);
  pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e6f0(local_35c,L"LVL ");
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,iVar12);
  switch(*(undefined1 *)(*(int *)((this->CharacterWidget_data).offset_0x0 + 0x8006d0) + 0x140)) {
  case 1:
    FUN_0040e440(local_35c," Warrior");
    cVar2 = *(char *)(*(int *)((this->CharacterWidget_data).offset_0x0 + 0x8006d0) + 0x141);
    if (cVar2 == '\0') {
      pcVar14 = " | Berserker";
    }
    else {
      if (cVar2 != '\x01') goto LAB_004353f8;
      pcVar14 = " | Guardian";
    }
    break;
  case 2:
    FUN_0040e440(local_35c," Ranger");
    cVar2 = *(char *)(*(int *)((this->CharacterWidget_data).offset_0x0 + 0x8006d0) + 0x141);
    if (cVar2 == '\0') {
      pcVar14 = " | Sniper";
    }
    else {
      if (cVar2 != '\x01') goto LAB_004353f8;
      pcVar14 = " | Scout";
    }
    break;
  case 3:
    FUN_0040e440(local_35c," Mage");
    cVar2 = *(char *)(*(int *)((this->CharacterWidget_data).offset_0x0 + 0x8006d0) + 0x141);
    if (cVar2 == '\0') {
      pcVar14 = " | Fire";
    }
    else {
      if (cVar2 != '\x01') goto LAB_004353f8;
      pcVar14 = " | Water";
    }
    break;
  case 4:
    FUN_0040e440(local_35c," Rogue");
    cVar2 = *(char *)(*(int *)((this->CharacterWidget_data).offset_0x0 + 0x8006d0) + 0x141);
    if (cVar2 == '\0') {
      pcVar14 = " | Assassin";
    }
    else {
      if (cVar2 != '\x01') goto LAB_004353f8;
      pcVar14 = " | Ninja";
    }
    break;
  default:
    goto LAB_004353f8;
  }
  FUN_0040e440(local_35c,pcVar14);
LAB_004353f8:
  local_58 = 7;
  local_5c = 0;
  local_6c[0] = (undefined4 ***)((uint)local_6c[0] & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0xb;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0xc;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)local_54,(float)local_50,0x41400000,0x40400000,
               &local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  local_58 = 7;
  local_5c = 0;
  local_6c[0] = (undefined4 ***)((uint)local_6c[0] & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0xd;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0x3f800000;
  local_30 = 0x3f000000;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0xe;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)local_54,(float)local_50,0x41400000,0,&local_34,
               &local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  local_50 = local_50 + 0x14;
  local_38 = 7;
  local_3c = 0;
  local_4c[0] = (undefined4 ***)((uint)local_4c[0] & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 0xf;
  FUN_0040b4e0();
  ppppuVar5 = local_4c;
  if (7 < local_38) {
    ppppuVar5 = (undefined4 ****)local_4c[0];
  }
  FUN_0040f3c0(ppppuVar5,local_3c,local_318);
  local_8._0_1_ = 3;
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c[0]);
  }
  FUN_0040e6f0(local_35c,L"Power");
  local_58 = 7;
  local_5c = 0;
  local_6c[0] = (undefined4 ***)((uint)local_6c[0] & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0x10;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x11;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)local_54,(float)local_50,0x41200000,0x40400000,
               &local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x12;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x13;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)local_54,(float)local_50,0x41200000,0,&local_34,
               &local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x14;
  FUN_0040b4e0();
  ppppuVar5 = local_6c;
  if (7 < local_58) {
    ppppuVar5 = (undefined4 ****)local_6c[0];
  }
  FUN_0040f3c0(ppppuVar5,local_5c,local_318);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  iVar12 = FUN_00445f10();
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_35c,iVar12);
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x15;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x16;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)(local_54 + 0x96),(float)local_50,0x41200000,
               0x40400000,&local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x17;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0x3e99999a;
  local_30 = 0x3f19999a;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x18;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)(local_54 + 0x96),(float)local_50,0x41200000,0,
               &local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  local_50 = local_50 + 0x14;
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x19;
  FUN_0040b4e0();
  ppppuVar5 = local_6c;
  if (7 < local_58) {
    ppppuVar5 = (undefined4 ****)local_6c[0];
  }
  FUN_0040f3c0(ppppuVar5,local_5c,local_318);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040e6f0(local_35c,&DAT_006fd6fc);
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x1a;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x1b;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)local_54,(float)local_50,0x41200000,0x40400000,
               &local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x1c;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x1d;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)local_54,(float)local_50,0x41200000,0,&local_34,
               &local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x1e;
  FUN_0040b4e0();
  ppppuVar5 = local_6c;
  if (7 < local_58) {
    ppppuVar5 = (undefined4 ****)local_6c[0];
  }
  FUN_0040f3c0(ppppuVar5,local_5c,local_318);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  fVar15 = (float10)FUN_00444db0();
  fVar15 = (float10)FUN_00439110((float)fVar15);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_35c,(float)fVar15);
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x1f;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x20;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)(local_54 + 0x96),(float)local_50,0x41200000,
               0x40400000,&local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x21;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0x3e99999a;
  local_30 = 0x3f19999a;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x22;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)(local_54 + 0x96),(float)local_50,0x41200000,0,
               &local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  local_50 = local_50 + 0x10;
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x23;
  FUN_0040b4e0();
  ppppuVar5 = local_6c;
  if (7 < local_58) {
    ppppuVar5 = (undefined4 ****)local_6c[0];
  }
  FUN_0040f3c0(ppppuVar5,local_5c,local_318);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040e6f0(local_35c,L"ARMOR");
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x24;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x25;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)local_54,(float)local_50,0x41200000,0x40400000,
               &local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x26;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x27;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)local_54,(float)local_50,0x41200000,0,&local_34,
               &local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x28;
  FUN_0040b4e0();
  ppppuVar5 = local_6c;
  if (7 < local_58) {
    ppppuVar5 = (undefined4 ****)local_6c[0];
  }
  FUN_0040f3c0(ppppuVar5,local_5c,local_318);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  fVar15 = (float10)FUN_0043cff0();
  fVar15 = (float10)FUN_00439110((float)fVar15);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_35c,(float)fVar15);
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x29;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x2a;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)(local_54 + 0x96),(float)local_50,0x41200000,
               0x40400000,&local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x2b;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0x3e99999a;
  local_30 = 0x3f19999a;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x2c;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)(local_54 + 0x96),(float)local_50,0x41200000,0,
               &local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  local_50 = local_50 + 0x10;
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x2d;
  FUN_0040b4e0();
  ppppuVar5 = local_6c;
  if (7 < local_58) {
    ppppuVar5 = (undefined4 ****)local_6c[0];
  }
  FUN_0040f3c0(ppppuVar5,local_5c,local_318);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040e6f0(local_35c,L"RESI");
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x2e;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x2f;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)local_54,(float)local_50,0x41200000,0x40400000,
               &local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x30;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x31;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)local_54,(float)local_50,0x41200000,0,&local_34,
               &local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x32;
  FUN_0040b4e0();
  ppppuVar5 = local_6c;
  if (7 < local_58) {
    ppppuVar5 = (undefined4 ****)local_6c[0];
  }
  FUN_0040f3c0(ppppuVar5,local_5c,local_318);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  fVar15 = (float10)FUN_004467a0();
  fVar15 = (float10)FUN_00439110((float)fVar15);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_35c,(float)fVar15);
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x33;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x34;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)(local_54 + 0x96),(float)local_50,0x41200000,
               0x40400000,&local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x35;
  uVar3 = FUN_00411bc0(local_84);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0x3e99999a;
  local_30 = 0x3f19999a;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_8._0_1_ = 0x36;
  FUN_00639b30(local_6c,uVar3,0,0x40000000,(float)(local_54 + 0x96),(float)local_50,0x41200000,0,
               &local_34,&local_24,&local_44,0,0xbf800000,1);
  if (7 < local_70) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_84[0]);
  }
  local_70 = 7;
  local_74 = 0;
  local_84[0] = (void *)((uint)local_84[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c[0]);
  }
  local_50 = local_50 + 0x10;
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x37;
  FUN_0040b4e0();
  ppppuVar5 = local_4c;
  if (7 < local_38) {
    ppppuVar5 = (undefined4 ****)local_4c[0];
  }
  FUN_0040f3c0(ppppuVar5,local_3c,local_318);
  local_8._0_1_ = 3;
  if (7 < local_38) {
    iVar12 = local_38 + 1;
    ppppuVar5 = (undefined4 ****)local_4c[0];
    FUN_0046dcb0(&local_2b9);
    FUN_0040f8c0(ppppuVar5,iVar12);
  }
  local_38 = 7;
  FUN_0040f2d0(0);
  FUN_0040e6f0(local_35c,L"CRIT");
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x38;
  uVar3 = FUN_00411bc0(local_9c);
  local_8._0_1_ = 0x39;
  piVar6 = (int *)FUN_00428970(1);
  local_2a8 = (int *)FUN_00428970(0);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0x40400000;
  uVar22 = 0x41200000;
  fVar17 = (float)*local_2a8;
  ppvVar18 = local_84;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(ppvVar18,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0x40400000,uVar9,uVar8,uVar7,
               uVar24,uVar25,uVar26);
  FUN_00639b30(ppvVar18,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x3a;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x3b;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0;
  uVar22 = 0x41200000;
  fVar17 = (float)*local_2a8;
  ppppuVar5 = local_6c;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(ppppuVar5,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00639b30(ppppuVar5,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x3c;
  FUN_00411b90(local_244);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_00411740(&DAT_006fd728);
  fVar15 = (float10)FUN_0043e9e0();
  local_2ac = (float)fVar15;
  fVar15 = (float10)FUN_00439110(local_2ac * 100.0);
  pbVar10 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                      (local_35c,(float)fVar15);
  FUN_0040e6f0(pbVar10);
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x3d;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x3e;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0x40400000;
  uVar22 = 0x41200000;
  fVar17 = (float)(*local_2a8 + 0x96);
  puVar19 = local_274;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0x40400000,uVar9,uVar8,uVar7,
               uVar24,uVar25,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x3f;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x40;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0);
  uVar9 = FUN_0040eac0(0x3e99999a,0x3f19999a,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0;
  uVar22 = 0x41200000;
  fVar17 = (float)(*local_2a8 + 0x96);
  puVar19 = local_184;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0,uVar9,uVar8,uVar7,uVar24,uVar25
               ,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  *piVar6 = *piVar6 + 0x10;
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x41;
  FUN_00411b90(local_1b4);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040e6f0(local_35c,L"TEMPO");
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x42;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x43;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0x40400000;
  uVar22 = 0x41200000;
  fVar17 = (float)*local_2a8;
  puVar19 = local_154;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0x40400000,uVar9,uVar8,uVar7,
               uVar24,uVar25,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x44;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  local_8._0_1_ = 0x45;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0;
  uVar22 = 0x41200000;
  fVar17 = (float)*local_2a8;
  puVar19 = local_1cc;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0,uVar9,uVar8,uVar7,uVar24,uVar25
               ,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x46;
  FUN_00411b90(local_1e4);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_00411740(&DAT_006fd728);
  fVar15 = (float10)FUN_00447700();
  local_2ac = (float)fVar15;
  fVar15 = (float10)FUN_00439110(local_2ac * 100.0);
  pbVar10 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                      (local_35c,(float)fVar15);
  FUN_0040e6f0(pbVar10);
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x47;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x48;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0x40400000;
  uVar22 = 0x41200000;
  fVar17 = (float)(*local_2a8 + 0x96);
  puVar19 = local_22c;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0x40400000,uVar9,uVar8,uVar7,
               uVar24,uVar25,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x49;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  local_8._0_1_ = 0x4a;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0);
  uVar9 = FUN_0040eac0(0x3e99999a,0x3f19999a,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0;
  uVar22 = 0x41200000;
  fVar17 = (float)(*local_2a8 + 0x96);
  puVar19 = local_214;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0,uVar9,uVar8,uVar7,uVar24,uVar25
               ,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  *piVar6 = *piVar6 + 0x10;
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x4b;
  FUN_00411b90(local_25c);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040e6f0(local_35c,&DAT_006fd738);
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x4c;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  local_8._0_1_ = 0x4d;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0x40400000;
  uVar22 = 0x41200000;
  fVar17 = (float)*local_2a8;
  puVar19 = local_28c;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0x40400000,uVar9,uVar8,uVar7,
               uVar24,uVar25,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x4e;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x4f;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0;
  uVar22 = 0x41200000;
  fVar17 = (float)*local_2a8;
  puVar19 = local_2a4;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0,uVar9,uVar8,uVar7,uVar24,uVar25
               ,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x50;
  FUN_00411b90(local_16c);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_00411740(&DAT_006fd728);
  fVar15 = (float10)FUN_00446150();
  local_2ac = (float)fVar15 * 10.0;
  iVar12 = FUN_00411740();
  fVar15 = (float10)FUN_00411d10(0x40000000,(float)(*(int *)(iVar12 + 400) + -1) * 0.25);
  local_2b0 = (float)fVar15;
  fVar15 = (float10)FUN_00439110(local_2ac / local_2b0 + 100.0);
  pbVar10 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                      (local_35c,(float)fVar15);
  FUN_0040e6f0(pbVar10);
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x51;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x52;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0x40400000;
  uVar22 = 0x41200000;
  fVar17 = (float)(*local_2a8 + 0x96);
  puVar19 = local_19c;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0x40400000,uVar9,uVar8,uVar7,
               uVar24,uVar25,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x53;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  local_8._0_1_ = 0x54;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0);
  uVar9 = FUN_0040eac0(0x3e99999a,0x3f19999a,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0;
  uVar22 = 0x41200000;
  fVar17 = (float)(*local_2a8 + 0x96);
  puVar19 = local_1fc;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0,uVar9,uVar8,uVar7,uVar24,uVar25
               ,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x55;
  FUN_00411b90(local_13c);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_00411740(&DAT_006fd740);
  fVar15 = (float10)FUN_00446150();
  fVar15 = (float10)FUN_00439110((float)fVar15);
  fVar16 = (float)fVar15;
  pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
           FUN_0040e6f0(local_35c,&DAT_006fd744);
  pbVar10 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,fVar16);
  FUN_0040e6f0(pbVar10);
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x56;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x57;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0x40400000;
  uVar22 = 0x41200000;
  fVar17 = (float)(*local_2a8 + 200);
  puVar19 = local_10c;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0x40400000,uVar9,uVar8,uVar7,
               uVar24,uVar25,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x58;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  local_8._0_1_ = 0x59;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0);
  uVar9 = FUN_0040eac0(0x3e99999a,0x3f19999a,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0;
  uVar22 = 0x41200000;
  fVar17 = (float)(*local_2a8 + 200);
  puVar19 = local_124;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0,uVar9,uVar8,uVar7,uVar24,uVar25
               ,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  *piVar6 = *piVar6 + 0x10;
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x5a;
  FUN_00411b90(local_c4);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040e6f0(local_35c,L"Weapon Rating");
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x5b;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  local_8._0_1_ = 0x5c;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0x40400000;
  uVar22 = 0x41200000;
  fVar17 = (float)*local_2a8;
  puVar19 = local_f4;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0x40400000,uVar9,uVar8,uVar7,
               uVar24,uVar25,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x5d;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x5e;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0;
  uVar22 = 0x41200000;
  fVar17 = (float)*local_2a8;
  puVar19 = local_dc;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0,uVar9,uVar8,uVar7,uVar24,uVar25
               ,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00593e50();
  local_2ac = 0.0;
  iVar12 = FUN_00411740();
  if (*(char *)(iVar12 + 0x990) == '\x03') {
    iVar12 = FUN_00411740();
    iVar12 = FUN_00411740(*(undefined1 *)(iVar12 + 0x99c));
    fVar15 = (float10)FUN_00445f60((float)(int)*(short *)(iVar12 + 0x9a0));
    local_2b0 = (float)fVar15;
    iVar12 = FUN_00411740(0);
    fVar15 = (float10)FUN_00445f60((float)*(int *)(iVar12 + 400));
    local_2ac = local_2b0 / (float)fVar15 + 0.0;
  }
  iVar12 = FUN_00411740();
  if (*(char *)(iVar12 + 0xaa8) == '\x03') {
    iVar12 = FUN_00411740();
    iVar12 = FUN_00411740(*(undefined1 *)(iVar12 + 0xab4));
    fVar15 = (float10)FUN_00445f60((float)(int)*(short *)(iVar12 + 0xab8));
    local_2b0 = (float)fVar15;
    iVar12 = FUN_00411740(0);
    fVar15 = (float10)FUN_00445f60((float)*(int *)(iVar12 + 400));
    local_2b4 = (float)fVar15;
    local_2ac = local_2b0 / local_2b4 + local_2ac;
  }
  FUN_00411740();
  cVar2 = FUN_00444230();
  if (cVar2 == '\0') {
    local_2ac = local_2ac * 0.5;
  }
  FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  if (0.8 <= local_2ac) {
    if (1.1 <= local_2ac) {
      if (1.2 <= local_2ac) {
        if (1.5 <= local_2ac) {
          if (1.8 <= local_2ac) {
            uVar3 = 0;
            goto LAB_00438527;
          }
          uVar3 = 0x3f800000;
          uVar8 = 0;
          uVar7 = 0x3f000000;
        }
        else {
          uVar3 = 0x3f800000;
          uVar8 = 0x3e800000;
          uVar7 = 0x3e800000;
        }
      }
      else {
        uVar3 = 0;
        uVar8 = 0x3f800000;
        uVar7 = 0;
      }
    }
    else {
      uVar3 = 0x3f800000;
LAB_00438527:
      uVar8 = 0x3f800000;
      uVar7 = 0x3f800000;
    }
  }
  else {
    uVar3 = 0x3f333333;
    uVar8 = 0x3f333333;
    uVar7 = 0x3f333333;
  }
  ppVar11 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0(uVar7,uVar8,uVar3,0x3f800000);
  std::pair<unsigned___int64,unsigned___int64>::
  operator=<std::pair<unsigned___int64,unsigned___int64>,0>(local_ac,ppVar11);
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x5f;
  FUN_00411b90(local_dc);
  local_8._0_1_ = 3;
  FUN_00593e50();
  puVar27 = &DAT_006fd728;
  pbVar10 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                      (local_35c,(int)(local_2ac * 100.0 + 0.5));
  FUN_0040e6f0(pbVar10,puVar27);
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x60;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x61;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0x40400000;
  uVar22 = 0x41200000;
  fVar17 = (float)(*local_2a8 + 0x96);
  uVar21 = 0x40000000;
  uVar20 = 0;
  puVar19 = local_f4;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0x40400000,uVar9,uVar8,uVar7,
               uVar24,uVar25,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x62;
  uVar3 = FUN_00411bc0(local_9c);
  uVar25 = 1;
  uVar24 = 0xbf800000;
  uVar23 = 0;
  local_8._0_1_ = 99;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0);
  fVar16 = (float)*piVar6;
  ppVar11 = local_ac;
  uVar22 = 0;
  uVar21 = 0x41200000;
  fVar17 = (float)(*local_2a8 + 0x96);
  puVar19 = local_c4;
  uVar20 = 0x40000000;
  uVar9 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0,ppVar11,uVar8,uVar7,uVar23,
               uVar24,uVar25);
  FUN_00639b30(puVar19,uVar3,uVar9,uVar20,fVar17,fVar16,uVar21,uVar22,ppVar11,uVar8,uVar7,uVar23,
               uVar24,uVar25);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  *piVar6 = *piVar6 + 0x10;
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 100;
  FUN_00411b90(local_124);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040e6f0(local_35c,L"Armor Rating");
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x65;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x66;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0x40400000;
  uVar22 = 0x41200000;
  fVar17 = (float)*local_2a8;
  puVar19 = local_10c;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320();
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x67;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x68;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0;
  uVar22 = 0x41200000;
  fVar17 = (float)*local_2a8;
  puVar19 = local_13c;
  uVar21 = 0x40000000;
  uVar20 = 0;
  FUN_00411320();
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00593e50();
  iVar12 = FUN_00411740();
  if (*(char *)(iVar12 + 0x878) == '\a') {
    iVar12 = FUN_00411740();
    iVar12 = FUN_00411740(*(undefined1 *)(iVar12 + 0x884));
    fVar15 = (float10)FUN_00445f60((float)(int)*(short *)(iVar12 + 0x888));
    local_2b4 = (float)fVar15;
    iVar12 = FUN_00411740(0);
    fVar15 = (float10)FUN_00445f60((float)*(int *)(iVar12 + 400));
    local_2b0 = (float)fVar15;
    local_2b8 = local_2b4 / local_2b0 + 0.0;
  }
  iVar12 = FUN_00411740();
  if (*(char *)(iVar12 + 0x530) == '\x04') {
    iVar12 = FUN_00411740();
    iVar12 = FUN_00411740(*(undefined1 *)(iVar12 + 0x53c));
    fVar15 = (float10)FUN_00445f60((float)(int)*(short *)(iVar12 + 0x540));
    local_2b4 = (float)fVar15 * 2.0;
    iVar12 = FUN_00411740(0);
    fVar15 = (float10)FUN_00445f60((float)*(int *)(iVar12 + 400));
    local_2b0 = (float)fVar15;
    local_2b8 = local_2b4 / local_2b0 + local_2b8;
  }
  iVar12 = FUN_00411740();
  if (*(char *)(iVar12 + 0x760) == '\x05') {
    iVar12 = FUN_00411740();
    iVar12 = FUN_00411740(*(undefined1 *)(iVar12 + 0x76c));
    fVar15 = (float10)FUN_00445f60((float)(int)*(short *)(iVar12 + 0x770));
    local_2b4 = (float)fVar15;
    iVar12 = FUN_00411740(0);
    fVar15 = (float10)FUN_00445f60((float)*(int *)(iVar12 + 400));
    local_2b0 = (float)fVar15;
    local_2b8 = local_2b4 / local_2b0 + local_2b8;
  }
  iVar12 = FUN_00411740();
  if (*(char *)(iVar12 + 0x648) == '\x06') {
    iVar12 = FUN_00411740();
    iVar12 = FUN_00411740(*(undefined1 *)(iVar12 + 0x654));
    fVar15 = (float10)FUN_00445f60((float)(int)*(short *)(iVar12 + 0x658));
    local_2b4 = (float)fVar15;
    iVar12 = FUN_00411740(0);
    fVar15 = (float10)FUN_00445f60((float)*(int *)(iVar12 + 400));
    local_2b0 = (float)fVar15;
    local_2b8 = local_2b4 / local_2b0 + local_2b8;
  }
  local_2b8 = local_2b8 / 5.0;
  if (local_2b8 < 0.8) {
    uVar8 = 0x3f333333;
    uVar7 = 0x3f333333;
    uVar3 = 0x3f333333;
    goto LAB_00438e0d;
  }
  if (1.1 <= local_2b8) {
    if (local_2b8 < 1.2) {
      uVar8 = 0;
      uVar7 = 0x3f800000;
      uVar3 = 0;
      goto LAB_00438e0d;
    }
    if (local_2b8 < 1.5) {
      uVar8 = 0x3f800000;
      uVar7 = 0x3e800000;
      uVar3 = 0x3e800000;
      goto LAB_00438e0d;
    }
    if (local_2b8 < 1.8) {
      uVar8 = 0x3f800000;
      uVar7 = 0;
      uVar3 = 0x3f000000;
      goto LAB_00438e0d;
    }
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3f800000;
  }
  uVar7 = 0x3f800000;
  uVar3 = 0x3f800000;
LAB_00438e0d:
  ppVar11 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0(uVar3,uVar7,uVar8,0x3f800000);
  std::pair<unsigned___int64,unsigned___int64>::
  operator=<std::pair<unsigned___int64,unsigned___int64>,0>(local_ac,ppVar11);
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x69;
  FUN_00411b90(local_dc);
  local_8._0_1_ = 3;
  FUN_00593e50();
  puVar27 = &DAT_006fd728;
  pbVar10 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                      (local_35c,(int)(local_2b8 * 100.0 + 0.5));
  FUN_0040e6f0(pbVar10,puVar27);
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x6a;
  uVar3 = FUN_00411bc0(local_9c);
  uVar26 = 1;
  uVar25 = 0xbf800000;
  uVar24 = 0;
  local_8._0_1_ = 0x6b;
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0x3f800000);
  uVar9 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  fVar16 = (float)*piVar6;
  uVar23 = 0x40400000;
  uVar22 = 0x41200000;
  fVar17 = (float)(*local_2a8 + 0x96);
  uVar21 = 0x40000000;
  uVar20 = 0;
  puVar19 = local_f4;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0x40400000,uVar9,uVar8,uVar7,
               uVar24,uVar25,uVar26);
  FUN_00639b30(puVar19,uVar3,uVar20,uVar21,fVar17,fVar16,uVar22,uVar23,uVar9,uVar8,uVar7,uVar24,
               uVar25,uVar26);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x6c;
  uVar3 = FUN_00411bc0(local_9c);
  uVar25 = 1;
  uVar24 = 0xbf800000;
  uVar23 = 0;
  local_8 = CONCAT31(local_8._1_3_,0x6d);
  uVar7 = FUN_0040eac0(0,0,0,0);
  uVar8 = FUN_0040eac0(0,0,0,0);
  fVar16 = (float)*piVar6;
  ppVar11 = local_ac;
  uVar22 = 0;
  uVar21 = 0x41200000;
  fVar17 = (float)(*local_2a8 + 0x96);
  puVar19 = local_c4;
  uVar20 = 0x40000000;
  uVar9 = 0;
  FUN_00411320(puVar19,uVar3,0,0x40000000,fVar17,fVar16,0x41200000,0,ppVar11,uVar8,uVar7,uVar23,
               uVar24,uVar25);
  FUN_00639b30(puVar19,uVar3,uVar9,uVar20,fVar17,fVar16,uVar21,uVar22,ppVar11,uVar8,uVar7,uVar23,
               uVar24,uVar25);
  FUN_00593e50();
  FUN_00593e50();
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             local_36c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


