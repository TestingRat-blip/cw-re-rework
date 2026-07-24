// SkillWidget (ui) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "SkillWidget.h"

/* cube::SkillWidget::deleting_destructor_for_NamedObject @ 004dd810  kind=game  attributed-by=rtti  size=7856 */

void __thiscall cube::SkillWidget::deleting_destructor_for_NamedObject(SkillWidget *this)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar4;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined *puVar18;
  undefined4 uVar19;
  int iStack_16c;
  undefined1 local_168 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_158 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_150 [3];
  undefined4 *local_144;
  undefined4 local_118;
  uint local_114;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_100 [6];
  int local_b8;
  int local_b4;
  undefined4 *local_b0;
  float local_ac;
  byte local_a5;
  void *local_a4 [5];
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [2];
  undefined4 local_6c;
  undefined4 local_68;
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
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e93c8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_b0 = (undefined4 *)0x0;
  local_168._0_4_ =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_158[0].vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_100);
  local_8 = 0;
  local_b0 = (undefined4 *)0x1;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_168,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_150);
  local_8 = 1;
                    /* inlined destructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (local_168 + *(int *)(local_168._0_4_ + 4)) =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable
  ;
  *(int *)((int)&iStack_16c + *(int *)(local_168._0_4_ + 4)) = *(int *)(local_168._0_4_ + 4) + -0x68
  ;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_150);
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_150[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  local_118 = 0;
  local_114 = 0;
  local_8 = 3;
  FUN_0040e6f0(local_158,L"Skills");
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c._2_2_ << 0x10);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 4;
  uVar2 = FUN_00411bc0(local_74);
  local_8._0_1_ = 5;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  FUN_00639b30(&local_2c,uVar2,0,0,0x41700000,0x41c80000,0x41400000,0x40400000,&local_3c,&local_4c,
               &local_5c,0,0xbf800000,1);
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74[0]);
  }
  local_60 = 7;
  local_64 = 0;
  local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 6;
  uVar2 = FUN_00411bc0(local_74);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 7;
  FUN_00639b30(&local_2c,uVar2,0,0,0x41700000,0x41c80000,0x41400000,0,&local_5c,&local_4c,&local_3c,
               0,0xbf800000,1);
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74[0]);
  }
  local_60 = 7;
  local_64 = 0;
  local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 8;
  FUN_0040b4e0();
  puVar6 = &local_2c;
  if (7 < local_18) {
    puVar6 = local_2c;
  }
  FUN_0040f3c0(puVar6,local_1c,local_114);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  iVar8 = 0;
  iVar9 = 0;
  piVar3 = (int *)&(this->SkillWidget_data).field_0x4;
  iVar7 = 5;
  do {
    iVar8 = iVar8 + piVar3[-1];
    iVar9 = iVar9 + *piVar3;
    piVar3 = piVar3 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar8 = *(int *)&(this->SkillWidget_data).field_0x28 + iVar9 + iVar8;
  iVar7 = *(int *)(*(int *)((this->SkillWidget_data).offset_0x30 + 0x8006d0) + 400) * 2 + -2;
  pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
           FUN_0040e440(local_158,"Points: ",iVar8,&DAT_00701904);
  pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,iVar8);
  pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e440(pbVar5);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,iVar7);
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 9;
  uVar2 = FUN_00411bc0(local_74);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 10;
  FUN_00639b30(&local_2c,uVar2,0,0,0x41700000,0x42340000,0x41200000,0x40000000,&local_5c,&local_4c,
               &local_3c,0,0xbf800000,1);
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74[0]);
  }
  local_60 = 7;
  local_64 = 0;
  local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0xb;
  uVar2 = FUN_00411bc0(local_74);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_8._0_1_ = 0xc;
  FUN_00639b30(&local_2c,uVar2,0,0,0x41700000,0x42340000,0x41200000,0,&local_5c,&local_4c,&local_3c,
               0,0xbf800000,1);
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74[0]);
  }
  local_60 = 7;
  local_64 = 0;
  local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_a5 = 0;
  iVar7 = *(int *)((this->SkillWidget_data).offset_0x30 + 0x8006d0);
  iVar8 = 0x1138;
  do {
    if (*(int *)((int)this + iVar8 + -0xfd8) != *(int *)(iVar8 + iVar7)) {
      local_a5 = 1;
      break;
    }
    iVar8 = iVar8 + 4;
  } while (iVar8 < 0x1164);
  local_ac = (float)(uint)local_a5;
  if ((this->SkillWidget_data).offset_0x2c != (uint)*(byte *)(iVar7 + 0x141)) {
    local_ac = 1.4013e-45;
  }
  iVar7 = FUN_004df9c0();
  local_a5 = iVar7 <= *(int *)(*(int *)((this->SkillWidget_data).offset_0x30 + 0x8006d0) + 0x1304);
  if (0 < iVar7) {
    local_b8 = (iVar7 / 100) / 100;
    local_b4 = (iVar7 / 100) % 100;
    fVar10 = (float10)FUN_00627ce0();
    local_b0 = (undefined4 *)(float)fVar10;
    iVar8 = (int)((float)local_b0 - 65.0);
    if (local_a5 == '\0') {
      local_18 = 7;
      local_1c = 0;
      local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
      FUN_0040f7a0(&PTR_006fccac,0);
      local_8._0_1_ = 0xd;
      if ((local_114 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*local_144);
      }
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
                (local_150,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
                (local_150,(wchar_t *)0x0,(wchar_t *)0x0);
      local_114 = local_114 & 0xfffffffe;
      puVar6 = &local_2c;
      if (7 < local_18) {
        puVar6 = local_2c;
      }
      local_118 = 0;
      FUN_0040f3c0(puVar6,local_1c,local_114);
      local_8._0_1_ = 3;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c);
      }
      FUN_0040e440(local_158,"Not enough money.");
      local_18 = 7;
      local_1c = 0;
      local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
      FUN_0040f7a0(L"resource1.dat",0xd);
      local_8._0_1_ = 0xe;
      uVar2 = FUN_00411bc0(local_74);
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0x3f800000;
      local_5c = 0x3f800000;
      local_58 = 0x3f800000;
      local_54 = 0x3f800000;
      local_50 = 0x3f800000;
      local_8._0_1_ = 0xf;
      FUN_00639b30(&local_2c,uVar2,0,0,0x41700000,(float)iVar8,0x41200000,0x40000000,&local_5c,
                   &local_4c,&local_3c,0,0xbf800000,1);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
      FUN_0040f7a0(L"resource1.dat",0xd);
      local_8._0_1_ = 0x10;
      uVar2 = FUN_00411bc0(local_74);
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_5c = 0x3f800000;
      local_58 = 0x3e800000;
      local_54 = 0x3e800000;
      local_50 = 0x3f800000;
      local_8._0_1_ = 0x11;
      FUN_00639b30(&local_2c,uVar2,0,0,0x41700000,(float)iVar8,0x41200000,0,&local_5c,&local_4c,
                   &local_3c,0,0xbf800000,1);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c);
      }
    }
    else {
      cVar1 = FUN_0047f030();
      if (cVar1 == '\0') {
        local_18 = 7;
        local_1c = 0;
        local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
        FUN_0040f7a0(&PTR_006fccac,0);
        local_8._0_1_ = 0x12;
        if ((local_114 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          operator_delete((void *)*local_144);
        }
        std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
                  (local_150,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
        std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
                  (local_150,(wchar_t *)0x0,(wchar_t *)0x0);
        local_114 = local_114 & 0xfffffffe;
        puVar6 = &local_2c;
        if (7 < local_18) {
          puVar6 = local_2c;
        }
        local_118 = 0;
        FUN_0040f3c0(puVar6,local_1c,local_114);
        local_8._0_1_ = 3;
        if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c);
        }
        FUN_0040e440(local_158,"Requires class trainer.");
        local_18 = 7;
        local_1c = 0;
        local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
        FUN_0040f7a0(L"resource1.dat",0xd);
        local_8._0_1_ = 0x13;
        uVar2 = FUN_00411bc0(local_74);
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0x3f800000;
        local_5c = 0x3f800000;
        local_58 = 0x3f800000;
        local_54 = 0x3f800000;
        local_50 = 0x3f800000;
        local_8._0_1_ = 0x14;
        FUN_00639b30(&local_2c,uVar2,0,0,0x41700000,(float)iVar8,0x41200000,0x40000000,&local_5c,
                     &local_4c,&local_3c,0,0xbf800000,1);
        if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_74[0]);
        }
        local_60 = 7;
        local_64 = 0;
        local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
        local_8._0_1_ = 3;
        if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
        FUN_0040f7a0(L"resource1.dat",0xd);
        local_8._0_1_ = 0x15;
        uVar2 = FUN_00411bc0(local_74);
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_5c = 0x3f800000;
        local_58 = 0x3e800000;
        local_54 = 0x3e800000;
        local_50 = 0x3f800000;
        local_8._0_1_ = 0x16;
        FUN_00639b30(&local_2c,uVar2,0,0,0x41700000,(float)iVar8,0x41200000,0,&local_5c,&local_4c,
                     &local_3c,0,0xbf800000,1);
        if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_74[0]);
        }
        local_60 = 7;
        local_64 = 0;
        local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
        local_8._0_1_ = 3;
        if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c);
        }
        local_a5 = '\0';
      }
    }
    iVar8 = iVar8 + 0x14;
    local_18 = 7;
    local_1c = 0;
    local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
    FUN_0040f7a0(&PTR_006fccac,0);
    local_8._0_1_ = 0x17;
    FUN_0040b4e0();
    puVar6 = &local_2c;
    if (7 < local_18) {
      puVar6 = local_2c;
    }
    FUN_0040f3c0(puVar6,local_1c,local_114);
    local_8._0_1_ = 3;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    puVar18 = &DAT_006ffd80;
    pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                       (local_158,iVar7 % 100);
    FUN_0040e440(pbVar5,puVar18);
    local_18 = 7;
    local_1c = 0;
    local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
    FUN_0040f7a0(L"resource1.dat",0xd);
    local_8._0_1_ = 0x18;
    uVar2 = FUN_00411bc0(local_74);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0x3f800000;
    local_5c = 0x3f800000;
    local_58 = 0x3f800000;
    local_54 = 0x3f800000;
    local_50 = 0x3f800000;
    local_8._0_1_ = 0x19;
    FUN_00639b30(&local_2c,uVar2,0,0,0x435c0000,(float)iVar8,0x41200000,0x40000000,&local_5c,
                 &local_4c,&local_3c,2,0xbf800000,1);
    if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_74[0]);
    }
    local_60 = 7;
    local_64 = 0;
    local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x1a;
    uVar2 = FUN_00411bc0(&local_2c);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_5c = 0x3f4ccccd;
    local_58 = 0x3f000000;
    local_54 = 0;
    local_50 = 0x3f800000;
    local_8._0_1_ = 0x1b;
    FUN_00639b30(local_8c,uVar2,0,0,0x435c0000,(float)iVar8,0x41200000,0,&local_5c,&local_4c,
                 &local_3c,2,0xbf800000,1);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x1c;
    FUN_0040b4e0();
    puVar6 = &local_2c;
    if (7 < local_18) {
      puVar6 = local_2c;
    }
    FUN_0040f3c0(puVar6,local_1c,local_114);
    local_8._0_1_ = 3;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    puVar18 = &DAT_006ffd84;
    pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_158,local_b4);
    FUN_0040e440(pbVar5,puVar18);
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x1d;
    uVar2 = FUN_00411bc0(&local_2c);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0x3f800000;
    local_5c = 0x3f800000;
    local_58 = 0x3f800000;
    local_54 = 0x3f800000;
    local_50 = 0x3f800000;
    local_8._0_1_ = 0x1e;
    FUN_00639b30(local_8c,uVar2,0,0,0x43340000,(float)iVar8,0x41200000,0x40000000,&local_5c,
                 &local_4c,&local_3c,2,0xbf800000,1);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x1f;
    uVar2 = FUN_00411bc0(&local_2c);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_5c = 0x3f333333;
    local_58 = 0x3f333333;
    local_54 = 0x3f333333;
    local_50 = 0x3f800000;
    local_8._0_1_ = 0x20;
    FUN_00639b30(local_8c,uVar2,0,0,0x43340000,(float)iVar8,0x41200000,0,&local_5c,&local_4c,
                 &local_3c,2,0xbf800000,1);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x21;
    FUN_0040b4e0();
    puVar6 = &local_2c;
    if (7 < local_18) {
      puVar6 = local_2c;
    }
    FUN_0040f3c0(puVar6,local_1c,local_114);
    local_8._0_1_ = 3;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    puVar18 = &DAT_006ffd88;
    pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_158,local_b8);
    FUN_0040e440(pbVar5,puVar18);
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x22;
    uVar2 = FUN_00411bc0(&local_2c);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0x3f800000;
    local_5c = 0x3f800000;
    local_58 = 0x3f800000;
    local_54 = 0x3f800000;
    local_50 = 0x3f800000;
    local_8._0_1_ = 0x23;
    FUN_00639b30(local_8c,uVar2,0,0,0x430c0000,(float)iVar8,0x41200000,0x40000000,&local_5c,
                 &local_4c,&local_3c,2,0xbf800000,1);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x24;
    uVar2 = FUN_00411bc0(&local_2c);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_5c = 0x3f800000;
    local_58 = 0x3f666666;
    local_54 = 0;
    local_50 = 0x3f800000;
    local_8._0_1_ = 0x25;
    FUN_00639b30(local_8c,uVar2,0,0,0x430c0000,(float)iVar8,0x41200000,0,&local_5c,&local_4c,
                 &local_3c,2,0xbf800000,1);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x26;
    FUN_0040b4e0();
    puVar6 = &local_2c;
    if (7 < local_18) {
      puVar6 = local_2c;
    }
    FUN_0040f3c0(puVar6,local_1c,local_114);
    local_8._0_1_ = 3;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    FUN_0040e440(local_158,"COST:");
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x27;
    uVar2 = FUN_00411bc0(&local_2c);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0x3f800000;
    local_5c = 0x3f800000;
    local_58 = 0x3f800000;
    local_54 = 0x3f800000;
    local_50 = 0x3f800000;
    local_8._0_1_ = 0x28;
    FUN_00639b30(local_8c,uVar2,0,0,0x41700000,(float)iVar8,0x41200000,0x40000000,&local_5c,
                 &local_4c,&local_3c,0,0xbf800000,1);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x29;
    uVar2 = FUN_00411bc0(&local_2c);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_5c = 0x3f800000;
    local_58 = 0x3f800000;
    local_54 = 0x3f800000;
    local_50 = 0x3f800000;
    local_8._0_1_ = 0x2a;
    FUN_00639b30(local_8c,uVar2,0,0,0x41700000,(float)iVar8,0x41200000,0,&local_5c,&local_4c,
                 &local_3c,0,0xbf800000,1);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
  }
  if (local_ac._0_1_ != '\0') {
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x2b;
    FUN_0040b4e0();
    puVar6 = &local_2c;
    if (7 < local_18) {
      puVar6 = local_2c;
    }
    FUN_0040f3c0(puVar6,local_1c,local_114);
    local_8._0_1_ = 3;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    FUN_0040e440(local_158,"Learn");
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x2c;
    uVar2 = FUN_00411bc0(&local_2c);
    uVar19 = 1;
    local_3c = 0;
    uVar17 = 0xbf800000;
    uVar16 = 1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0x3f800000;
    local_5c = 0x3f800000;
    local_58 = 0x3f800000;
    local_54 = 0x3f800000;
    local_50 = 0x3f800000;
    puVar6 = &local_3c;
    puVar15 = &local_4c;
    puVar14 = &local_5c;
    uVar13 = 0x40400000;
    local_8._0_1_ = 0x2d;
    uVar12 = 0x41400000;
    fVar10 = (float10)FUN_00627ce0(0x41400000,0x40400000,puVar14,puVar15,puVar6,1,0xbf800000,1);
    local_ac = (float)fVar10;
    fVar11 = local_ac - 20.0;
    fVar10 = (float10)FUN_00627d50(fVar11);
    local_ac = (float)fVar10;
    FUN_00639b30(local_8c,uVar2,0,0,local_ac / 3.0,fVar11,uVar12,uVar13,puVar14,puVar15,puVar6,
                 uVar16,uVar17,uVar19);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    if (local_a5 == '\0') {
      local_5c = 0x3f000000;
      local_58 = 0x3f000000;
      local_54 = 0x3f000000;
      local_50 = 0x3f800000;
      local_b0 = &local_5c;
    }
    else {
      cVar1 = FUN_004df880();
      local_38 = 0x3f800000;
      local_34 = 0x3f800000;
      local_30 = 0x3f800000;
      local_3c = 0;
      if (cVar1 == '\0') {
        local_3c = 0x3f800000;
      }
      local_4c = local_3c;
      local_48 = 0x3f800000;
      local_44 = 0x3f800000;
      local_40 = 0x3f800000;
      local_b0 = &local_4c;
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x2e;
    uVar2 = FUN_00411bc0(local_8c);
    uVar19 = 1;
    local_6c = 0;
    uVar17 = 0xbf800000;
    uVar16 = 1;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    puVar6 = &local_6c;
    puVar15 = &local_24;
    local_8._0_1_ = 0x2f;
    uVar13 = 0;
    uVar12 = 0x41400000;
    puVar14 = local_b0;
    fVar10 = (float10)FUN_00627ce0(0x41400000,0,local_b0,puVar15,puVar6,1,0xbf800000,1);
    local_ac = (float)fVar10;
    fVar11 = local_ac - 20.0;
    fVar10 = (float10)FUN_00627d50(fVar11);
    local_ac = (float)fVar10;
    FUN_00639b30(local_a4,uVar2,0,0,local_ac / 3.0,fVar11,uVar12,uVar13,puVar14,puVar15,puVar6,
                 uVar16,uVar17,uVar19);
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    local_78 = 7;
    local_7c = 0;
    local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_a4[0]);
    }
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x30;
    FUN_0040b4e0();
    puVar6 = &local_2c;
    if (7 < local_18) {
      puVar6 = local_2c;
    }
    FUN_0040f3c0(puVar6,local_1c,local_114);
    local_8._0_1_ = 3;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    FUN_0040e440(local_158,"Cancel");
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x31;
    uVar2 = FUN_00411bc0(local_8c);
    uVar19 = 1;
    local_24 = 0;
    uVar17 = 0xbf800000;
    uVar16 = 1;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0x3f800000;
    local_3c = 0x3f800000;
    local_38 = 0x3f800000;
    local_34 = 0x3f800000;
    local_30 = 0x3f800000;
    puVar6 = &local_24;
    puVar15 = &local_6c;
    puVar14 = &local_3c;
    uVar13 = 0x40400000;
    local_8._0_1_ = 0x32;
    uVar12 = 0x41400000;
    fVar10 = (float10)FUN_00627ce0(0x41400000,0x40400000,puVar14,puVar15,puVar6,1,0xbf800000,1);
    local_ac = (float)fVar10;
    fVar11 = local_ac - 20.0;
    fVar10 = (float10)FUN_00627d50(fVar11);
    local_ac = (float)fVar10;
    FUN_00639b30(local_a4,uVar2,0,0,(local_ac * 2.0) / 3.0,fVar11,uVar12,uVar13,puVar14,puVar15,
                 puVar6,uVar16,uVar17,uVar19);
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    local_78 = 7;
    local_7c = 0;
    local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_a4[0]);
    }
    cVar1 = FUN_004df760();
    if (cVar1 == '\0') {
      local_6c = 0x3f800000;
      local_68 = 0x3f800000;
      local_64 = 0x3f800000;
      local_60 = 0x3f800000;
      local_b0 = &local_6c;
    }
    else {
      local_24 = 0;
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      local_b0 = &local_24;
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x33;
    uVar2 = FUN_00411bc0(local_8c);
    uVar19 = 1;
    local_3c = 0;
    uVar17 = 0xbf800000;
    uVar16 = 1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    puVar6 = &local_3c;
    puVar15 = &local_4c;
    local_8._0_1_ = 0x34;
    uVar13 = 0;
    uVar12 = 0x41400000;
    puVar14 = local_b0;
    fVar10 = (float10)FUN_00627ce0(0x41400000,0,local_b0,puVar15,puVar6,1,0xbf800000,1);
    local_ac = (float)fVar10;
    fVar11 = local_ac - 20.0;
    fVar10 = (float10)FUN_00627d50(fVar11);
    local_ac = (float)fVar10;
    FUN_00639b30(local_a4,uVar2,0,0,(local_ac * 2.0) / 3.0,fVar11,uVar12,uVar13,puVar14,puVar15,
                 puVar6,uVar16,uVar17,uVar19);
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    local_78 = 7;
    local_7c = 0;
    local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
    if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_a4[0]);
    }
  }
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             local_168);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


