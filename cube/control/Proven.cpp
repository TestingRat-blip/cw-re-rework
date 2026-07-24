// Proven (control) -- cube. 5 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Proven.h"

/* GameController_load_skill_tooltip @ 004a5710  kind=game  attributed-by=ledger  size=2785 */

void FUN_004a5710(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *in_ECX;
  int *piVar6;
  int *piVar7;
  float fVar8;
  undefined4 *puVar9;
  int *local_258;
  int *local_254;
  undefined4 local_250;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 *local_240;
  undefined4 local_23c;
  int local_238;
  char local_232;
  char local_231;
  int local_230;
  undefined1 local_22c [64];
  undefined1 local_1ec [24];
  undefined1 local_1d4 [24];
  undefined1 local_1bc [24];
  undefined1 local_1a4 [24];
  undefined1 local_18c [24];
  undefined1 local_174 [24];
  undefined1 local_15c [24];
  undefined1 local_144 [24];
  undefined1 local_12c [24];
  undefined1 local_114 [24];
  undefined1 local_fc [24];
  undefined1 local_e4 [24];
  float local_cc [2];
  float local_c4 [2];
  undefined1 local_bc [8];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4 [8];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c [8];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [2];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_34;
  uint local_30;
  void *local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e7da1;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = 7;
  local_64 = 0;
  local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
  local_24c = in_ECX;
  local_14 = uVar3;
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8 = 0;
  iVar4 = FUN_00639800(local_74);
  local_8 = 0xffffffff;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74[0]);
  }
  local_60 = 7;
  local_64 = 0;
  local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
  if (iVar4 == 0) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_258 = (int *)0x0;
  local_254 = (int *)0x0;
  local_250 = 0;
  local_8 = 1;
  local_248 = 0;
  local_244 = 0;
  local_248 = FUN_0046d520(uVar3);
  local_8._0_1_ = 2;
  local_240 = (undefined4 *)0x0;
  local_23c = 0;
  local_240 = (undefined4 *)FUN_00630a10();
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  local_8._0_1_ = 4;
  if (param_1 == 6) {
    switch(*(undefined1 *)
            (*(int *)&in_ECX[0x12f78].
                      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                      .field_0x1c + 0x140)) {
    case 1:
      uVar5 = FUN_00594bf0(local_18c,0x36);
      FUN_00467fa0(uVar5);
      break;
    case 2:
      uVar5 = FUN_00594bf0(local_1bc,0x15);
      FUN_00467fa0(uVar5);
      break;
    case 3:
      if (*(int *)(*(int *)&in_ECX[0x12f7d].
                            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                            .field_0x3c + 0x18c) == 1) {
        uVar5 = FUN_00594bf0(local_1ec,0x22);
        FUN_00467fa0(uVar5);
      }
      else {
        uVar5 = FUN_00594bf0(local_1d4,0x58);
        FUN_00467fa0(uVar5);
      }
      break;
    case 4:
      uVar5 = FUN_00594bf0(local_12c,0x30);
      FUN_00467fa0(uVar5);
      break;
    default:
      goto switchD_004a5897_default;
    }
  }
  else if (param_1 == 7) {
    switch(*(undefined1 *)
            (*(int *)&in_ECX[0x12f78].
                      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                      .field_0x1c + 0x140)) {
    case 1:
      uVar5 = FUN_00594bf0(local_174,0x56);
      FUN_00467fa0(uVar5);
      break;
    case 2:
      uVar5 = FUN_00594bf0(local_114,0x32);
      FUN_00467fa0(uVar5);
      break;
    case 3:
      uVar5 = FUN_00594bf0(local_fc,0x67);
      FUN_00467fa0(uVar5);
      break;
    case 4:
      uVar5 = FUN_00594bf0(local_15c,0x4f);
      FUN_00467fa0(uVar5);
      break;
    default:
      goto switchD_004a5897_default;
    }
  }
  else {
    if (param_1 != 8) {
      uVar5 = FUN_005a5a60(local_2c,param_1);
      FUN_00467fa0(uVar5);
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      goto switchD_004a5897_default;
    }
    switch(*(undefined1 *)
            (*(int *)&in_ECX[0x12f78].
                      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                      .field_0x1c + 0x140)) {
    case 1:
      if (*(int *)(*(int *)&in_ECX[0x12f7d].
                            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                            .field_0x3c + 0x18c) == 0) {
        uVar5 = FUN_00594bf0(local_5c,0x66);
        FUN_00467fa0(uVar5);
      }
      else {
        uVar5 = FUN_00594bf0(local_a4,0x65);
        FUN_00467fa0(uVar5);
      }
      break;
    case 2:
      if (*(int *)(*(int *)&in_ECX[0x12f7d].
                            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                            .field_0x3c + 0x18c) == 1) {
        uVar5 = FUN_00594bf0(local_bc,100);
        FUN_00467fa0(uVar5);
      }
      else {
        uVar5 = FUN_00594bf0(local_8c,99);
        FUN_00467fa0(uVar5);
      }
      break;
    case 3:
      uVar5 = FUN_00594bf0(local_e4,0x31);
      FUN_00467fa0(uVar5);
      break;
    case 4:
      if (*(int *)(*(int *)&in_ECX[0x12f7d].
                            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                            .field_0x3c + 0x18c) == 1) {
        uVar5 = FUN_00594bf0(local_144,0x60);
        FUN_00467fa0(uVar5);
      }
      else {
        uVar5 = FUN_00594bf0(local_1a4,0x61);
        FUN_00467fa0(uVar5);
      }
      break;
    default:
      goto switchD_004a5897_default;
    }
  }
  FUN_00593e50();
switchD_004a5897_default:
  puVar9 = &local_248;
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            (in_ECX,param_1,param_2);
  uVar5 = FUN_0040eb60(L"description:");
  local_8._0_1_ = 5;
  uVar5 = FUN_004517d0(local_2c,uVar5,&local_44,puVar9);
  local_8._0_1_ = 6;
  FUN_004e4a20(uVar5,&local_248,&local_258);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_8._0_1_ = 4;
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  if (0 < param_2) {
    FUN_0040eb60(L"skill:level");
    local_8._0_1_ = 7;
    FUN_004e4a20(local_2c,&local_248,&local_258);
    local_8._0_1_ = 4;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    uVar5 = FUN_0040eb60(L"details:");
    local_8._0_1_ = 8;
    uVar5 = FUN_004517d0(local_2c,uVar5,&local_44);
    local_8._0_1_ = 9;
    FUN_004e4a20(uVar5,&local_248,&local_258);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    local_8._0_1_ = 4;
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
  }
  local_8._0_1_ = 4;
  local_18 = 7;
  local_1c = 0;
  puVar9 = &local_248;
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            (in_ECX,param_1,param_2 + 1);
  FUN_0040eb60(L"skill:nextlevel");
  local_8._0_1_ = 10;
  FUN_004e4a20(local_2c,&local_248,&local_258,puVar9);
  local_8._0_1_ = 4;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  uVar5 = FUN_0040eb60(L"details:");
  local_8._0_1_ = 0xb;
  uVar5 = FUN_004517d0(local_2c,uVar5,&local_44);
  local_8._0_1_ = 0xc;
  FUN_004e4a20(uVar5,&local_248,&local_258);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_8._0_1_ = 4;
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  if (local_258 != local_254) {
    local_238 = 0xc;
    piVar7 = local_258;
    do {
      piVar6 = *(int **)*piVar7;
      local_231 = '\x01';
      local_230 = param_3;
      if (piVar6 != (int *)*piVar7) {
        do {
          (**(code **)(**(int **)&in_ECX[0x12f79].field_0x4 + 0x38))(local_22c);
          piVar1 = piVar6 + 2;
          FUN_0065e720(piVar1,local_22c,(float)local_238,0,0,0,0,local_c4,local_cc,0,1,0xffffffff,0)
          ;
          fVar8 = local_cc[0] - local_c4[0];
          iVar4 = FUN_00428db0(0,piVar6[6],&DAT_007020b8,1);
          if (((((iVar4 == 0) || (iVar4 = FUN_00428db0(0,piVar6[6],&DAT_007020bc,1), iVar4 == 0)) ||
               (iVar4 = FUN_00428db0(0,piVar6[6],&DAT_007020c0,1), iVar4 == 0)) ||
              ((iVar4 = FUN_00428db0(0,piVar6[6],&DAT_007020c4,1), iVar4 == 0 ||
               (iVar4 = FUN_00428db0(0,piVar6[6],&DAT_007020c8,1), iVar4 == 0)))) ||
             ((iVar4 = FUN_00428db0(0,piVar6[6],&DAT_007020cc,1), iVar4 == 0 ||
              ((cVar2 = FUN_00439190(piVar1,&DAT_00701ba8), cVar2 != '\0' ||
               (cVar2 = FUN_00439190(piVar1,&DAT_006fd42c), cVar2 != '\0')))))) {
LAB_004a5f29:
            local_232 = '\x01';
          }
          else {
            cVar2 = FUN_00439190(piVar1,&DAT_006fd740);
            local_232 = '\0';
            if (cVar2 != '\0') goto LAB_004a5f29;
          }
          if (local_231 == '\0') {
            if (local_232 == '\0') {
              local_230 = local_230 + local_238;
            }
            else {
              local_230 = local_230 + 3;
            }
          }
          iVar4 = FUN_00428db0(0,piVar6[6],&DAT_007020bc,1);
          local_231 = iVar4 == 0;
          if ((local_232 == '\0') && (param_3 + param_6 < (int)fVar8 + local_230)) {
            param_4 = param_4 + 4 + local_238;
            local_230 = param_3;
          }
          local_84 = 0;
          local_80 = 0;
          local_7c = 0;
          local_78 = 0;
          local_b4 = 0;
          local_b0 = 0;
          local_ac = 0;
          local_a8 = 0x3f800000;
          local_9c = 0x3f800000;
          local_98 = 0x3f800000;
          local_94 = 0x3f800000;
          local_90 = 0x3f800000;
          FUN_0065bc70(piVar6 + 2,(float)local_230,(float)param_4,(float)local_238,0x40400000,0,0,0,
                       &local_9c,&local_b4,&local_84,0,1);
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          FUN_0065bc70(piVar6 + 2,(float)local_230,(float)param_4,(float)local_238,0,0,0,0,
                       piVar6 + 8,&local_24,&local_54,0,1);
          local_230 = local_230 + (int)fVar8;
          iVar4 = FUN_00428db0(0,piVar6[6],&DAT_006fd42c,1);
          if ((iVar4 == 0) || (iVar4 = FUN_00428db0(0,piVar6[6],&DAT_006fd744,1), iVar4 == 0)) {
            local_230 = local_230 + -9;
          }
          piVar6 = (int *)*piVar6;
          in_ECX = local_24c;
        } while (piVar6 != (int *)*piVar7);
      }
      param_4 = param_4 + 0x12;
      piVar7 = piVar7 + 2;
      local_238 = 10;
    } while (piVar7 != local_254);
  }
  if (local_30 < 8) {
    local_44 = (void *)((uint)local_44 & 0xffff0000);
    local_30 = 7;
    local_34 = 0;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004777f0(&local_24c,*local_240,local_240);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_240);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_44);
}


/* GameController_load_specialization_text @ 004a62c0  kind=game  attributed-by=ledger  size=1934 */

void FUN_004a62c0(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  int local_16c;
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 *local_15c;
  undefined4 local_158;
  int *local_154;
  int *local_150;
  undefined4 local_14c;
  int local_148;
  char local_142;
  char local_141;
  int local_140;
  undefined1 local_13c [64];
  undefined1 local_fc [24];
  undefined1 local_e4 [24];
  undefined1 local_cc [24];
  float local_b4 [2];
  float local_ac [2];
  undefined1 local_a4 [8];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c [8];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74 [8];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [8];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e7e48;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_14 = uVar4;
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8 = 0;
  local_168 = FUN_00639800(local_2c);
  local_8 = 0xffffffff;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  if (local_168 == 0) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_154 = (int *)0x0;
  local_150 = (int *)0x0;
  local_14c = 0;
  local_8 = 1;
  local_164 = 0;
  local_160 = 0;
  local_164 = FUN_0046d520(uVar4);
  local_8._0_1_ = 2;
  local_15c = (undefined4 *)0x0;
  local_158 = 0;
  local_15c = (undefined4 *)FUN_00630a10();
  local_8._0_1_ = 3;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 3;
  uVar2 = uVar1;
  switch(param_1) {
  case 1:
    if (param_2 == 0) {
      local_8._0_1_ = uVar1;
      FUN_0040eb60(L"specialization:warrior:berserker");
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004e4a20(local_8c,&local_164,&local_154);
    }
    else {
      uVar2 = (undefined1)local_8;
      if (param_2 != 1) goto switchD_004a63de_default;
      FUN_0040eb60(L"specialization:warrior:guardian");
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_004e4a20(local_a4,&local_164,&local_154);
    }
    break;
  case 2:
    if (param_2 == 0) {
      local_8._0_1_ = uVar1;
      FUN_0040eb60(L"specialization:ranger:sniper");
      local_8 = CONCAT31(local_8._1_3_,7);
      FUN_004e4a20(local_5c,&local_164,&local_154);
    }
    else {
      uVar2 = (undefined1)local_8;
      if (param_2 != 1) goto switchD_004a63de_default;
      local_8._0_1_ = uVar1;
      FUN_0040eb60(L"specialization:ranger:scout");
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_004e4a20(local_74,&local_164,&local_154);
    }
    break;
  case 3:
    if (param_2 == 0) {
      local_8._0_1_ = uVar1;
      FUN_0040eb60(L"specialization:mage:fire");
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_004e4a20(local_e4,&local_164,&local_154);
    }
    else {
      uVar2 = (undefined1)local_8;
      if (param_2 != 1) goto switchD_004a63de_default;
      local_8._0_1_ = uVar1;
      FUN_0040eb60(L"specialization:mage:water");
      local_8 = CONCAT31(local_8._1_3_,9);
      FUN_004e4a20(local_44,&local_164,&local_154);
    }
    break;
  case 4:
    if (param_2 == 0) {
      local_8._0_1_ = uVar1;
      FUN_0040eb60(L"specialization:rogue:assassin");
      local_8 = CONCAT31(local_8._1_3_,10);
      FUN_004e4a20(local_cc,&local_164,&local_154);
    }
    else {
      uVar2 = (undefined1)local_8;
      if (param_2 != 1) goto switchD_004a63de_default;
      local_8._0_1_ = uVar1;
      FUN_0040eb60(L"specialization:rogue:ninja");
      local_8 = CONCAT31(local_8._1_3_,0xb);
      FUN_004e4a20(local_fc,&local_164,&local_154);
    }
    break;
  default:
    goto switchD_004a63de_default;
  }
  local_8._0_1_ = 3;
  FUN_00593e50();
  uVar2 = (undefined1)local_8;
switchD_004a63de_default:
  local_8._0_1_ = uVar2;
  if (local_154 != local_150) {
    local_148 = 0xc;
    piVar6 = local_150;
    piVar8 = local_154;
    do {
      piVar7 = *(int **)*piVar8;
      local_141 = '\x01';
      local_140 = param_3;
      if (piVar7 != (int *)*piVar8) {
        do {
          (**(code **)(**(int **)(local_16c + 0x800710) + 0x38))(local_13c);
          piVar6 = piVar7 + 2;
          FUN_0065e720(piVar6,local_13c,(float)local_148,0,0,0,0,local_ac,local_b4,0,1,0xffffffff,0)
          ;
          fVar9 = local_b4[0] - local_ac[0];
          iVar5 = FUN_00428db0(0,piVar7[6],&DAT_007020b8,1);
          if (((((iVar5 == 0) || (iVar5 = FUN_00428db0(0,piVar7[6],&DAT_007020bc,1), iVar5 == 0)) ||
               (iVar5 = FUN_00428db0(0,piVar7[6],&DAT_007020c0,1), iVar5 == 0)) ||
              ((iVar5 = FUN_00428db0(0,piVar7[6],&DAT_007020c4,1), iVar5 == 0 ||
               (iVar5 = FUN_00428db0(0,piVar7[6],&DAT_007020c8,1), iVar5 == 0)))) ||
             ((iVar5 = FUN_00428db0(0,piVar7[6],&DAT_007020cc,1), iVar5 == 0 ||
              ((cVar3 = FUN_00439190(piVar6,&DAT_00701ba8), cVar3 != '\0' ||
               (cVar3 = FUN_00439190(piVar6,&DAT_006fd42c), cVar3 != '\0')))))) {
LAB_004a679b:
            local_142 = '\x01';
          }
          else {
            cVar3 = FUN_00439190(piVar6,&DAT_006fd740);
            local_142 = '\0';
            if (cVar3 != '\0') goto LAB_004a679b;
          }
          if (local_141 == '\0') {
            if (local_142 == '\0') {
              local_140 = local_140 + local_148;
            }
            else {
              local_140 = local_140 + 3;
            }
          }
          iVar5 = FUN_00428db0(0,piVar7[6],&DAT_007020bc,1);
          local_141 = iVar5 == 0;
          if ((local_142 == '\0') && (param_3 + param_6 < (int)fVar9 + local_140)) {
            param_4 = param_4 + 4 + local_148;
            local_140 = param_3;
          }
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0x3f800000;
          local_6c = 0x3f800000;
          local_68 = 0x3f800000;
          local_64 = 0x3f800000;
          local_60 = 0x3f800000;
          FUN_0065bc70(piVar7 + 2,(float)local_140,(float)param_4,(float)local_148,0x40400000,0,0,0,
                       &local_6c,&local_54,&local_3c,0,1);
          local_84 = 0;
          local_80 = 0;
          local_7c = 0;
          local_78 = 0;
          local_9c = 0;
          local_98 = 0;
          local_94 = 0;
          local_90 = 0;
          FUN_0065bc70(piVar7 + 2,(float)local_140,(float)param_4,(float)local_148,0,0,0,0,
                       piVar7 + 8,&local_9c,&local_84,0,1);
          local_140 = local_140 + (int)fVar9;
          iVar5 = FUN_00428db0(0,piVar7[6],&DAT_006fd42c,1);
          if ((iVar5 == 0) || (iVar5 = FUN_00428db0(0,piVar7[6],&DAT_006fd744,1), iVar5 == 0)) {
            local_140 = local_140 + -9;
          }
          piVar7 = (int *)*piVar7;
          piVar6 = local_150;
        } while (piVar7 != (int *)*piVar8);
      }
      param_4 = param_4 + 0x12;
      piVar8 = piVar8 + 2;
      local_148 = 10;
    } while (piVar8 != piVar6);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004777f0(&local_16c,*local_15c,local_15c);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_15c);
}


/* GameController_load_game_assets @ 004ee230  kind=game  attributed-by=ledger  size=187427 */
// (decompilation unavailable)
undefined FUN_004ee230(void) { }

/* GameController_processNetworkTick @ 005fc1b0  kind=game  attributed-by=ledger  size=23279 */

void FUN_005fc1b0(int *param_1,int param_2,int param_3,int param_4,int param_5,float *param_6,
                 float param_7,int param_8,uint *param_9,char param_10)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  longlong *plVar11;
  float *pfVar12;
  float *pfVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  int *in_ECX;
  int iVar18;
  int iVar19;
  uint *puVar20;
  int **ppiVar21;
  bool bVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  longlong lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  longlong lVar39;
  undefined8 uVar40;
  int *piStack_c10;
  uint *puStack_c0c;
  undefined4 uStack_c08;
  int *piStack_c04;
  int *piStack_c00;
  undefined4 uStack_bfc;
  int *piStack_bf0;
  uint *local_bec;
  uint *puStack_be8;
  undefined8 local_be4;
  float *local_bdc;
  float local_bd8;
  float local_bd4;
  float *pfStack_bd0;
  float fStack_bcc;
  float local_bc8;
  float local_bc4;
  int *local_bc0;
  int *local_bbc;
  float local_bb8;
  undefined8 local_bb4;
  float local_bac;
  int *local_ba8;
  float local_ba4;
  float fStack_ba0;
  float fStack_b9c;
  float fStack_b98;
  int *local_b94;
  int *local_b90;
  float local_b8c;
  float fStack_b88;
  float fStack_b84;
  float local_b80;
  float local_b7c;
  undefined8 uStack_b74;
  float local_b6c;
  float local_b68;
  float local_b64;
  int iStack_b60;
  undefined8 uStack_b5c;
  float local_b54;
  undefined8 uStack_b4c;
  undefined4 uStack_b44;
  float *local_b3c;
  undefined8 uStack_b34;
  int iStack_b2c;
  int iStack_b28;
  int iStack_b24;
  int iStack_b20;
  undefined8 uStack_b1c;
  undefined8 uStack_b14;
  int *piStack_b08;
  float fStack_b04;
  int iStack_b00;
  int iStack_af4;
  int iStack_af0;
  undefined8 uStack_aec;
  float fStack_ae4;
  float fStack_ae0;
  float fStack_adc;
  float fStack_ad8;
  float fStack_ad4;
  float fStack_ad0;
  float fStack_acc;
  float fStack_ac8;
  float fStack_ac4;
  float fStack_ac0;
  float fStack_abc;
  float fStack_ab8;
  float fStack_ab4;
  float fStack_ab0;
  float fStack_aac;
  float fStack_aa8;
  float fStack_aa4;
  float fStack_aa0;
  float fStack_a9c;
  float fStack_a98;
  float fStack_a94;
  float fStack_a90;
  float fStack_a8c;
  float fStack_a88;
  float fStack_a84;
  float fStack_a80;
  float fStack_a7c;
  float fStack_a78;
  float fStack_a74;
  float fStack_a70;
  float fStack_a6c;
  float fStack_a68;
  float fStack_a64;
  float fStack_a60;
  uint *puStack_a5c;
  float fStack_a58;
  int *piStack_a54;
  int *piStack_a50;
  uint *puStack_a4c;
  float fStack_a48;
  int *piStack_a44;
  float fStack_a40;
  float fStack_a3c;
  int *piStack_a38;
  float fStack_a34;
  int *piStack_a30;
  float fStack_a2c;
  float fStack_a28;
  float fStack_a24;
  float fStack_a20;
  float fStack_a1c;
  float fStack_a18;
  float fStack_a14;
  float fStack_a10;
  float fStack_a0c;
  float fStack_a08;
  float fStack_a04;
  float fStack_a00;
  float fStack_9fc;
  float fStack_9f8;
  float fStack_9f4;
  float fStack_9f0;
  float fStack_9ec;
  float fStack_9e8;
  float fStack_9e4;
  float fStack_9e0;
  float fStack_9dc;
  float fStack_9d8;
  float fStack_9d4;
  float fStack_9d0;
  float fStack_9cc;
  float fStack_9c8;
  uint *puStack_9c4;
  float fStack_9c0;
  int *piStack_9bc;
  float fStack_9b8;
  float fStack_9b4;
  int *piStack_9b0;
  float fStack_9ac;
  float fStack_9a8;
  float fStack_9a4;
  float fStack_9a0;
  float fStack_99c;
  float fStack_998;
  float fStack_994;
  float fStack_990;
  float fStack_98c;
  float fStack_988;
  float fStack_984;
  float fStack_980;
  float fStack_97c;
  float fStack_978;
  float fStack_974;
  float fStack_964;
  int *piStack_960;
  float fStack_95c;
  float fStack_958;
  int iStack_954;
  undefined8 uStack_950;
  float afStack_948 [3];
  undefined1 auStack_93c [20];
  float local_928;
  int *local_924;
  float local_920;
  int *local_91c;
  float local_918;
  float local_914;
  float local_910;
  float local_90c;
  float local_908;
  float local_904;
  float local_900;
  float local_8fc;
  float local_8f8;
  undefined8 local_8f4;
  float local_8ec;
  float fStack_8dc;
  float fStack_8d8;
  float fStack_8d4;
  float fStack_8d0;
  float fStack_8cc;
  float fStack_8c8;
  float fStack_8c4;
  float fStack_8c0;
  float fStack_8bc;
  float fStack_8b8;
  float afStack_8b4 [4];
  float fStack_8a4;
  int *piStack_8a0;
  float fStack_89c;
  float fStack_898;
  float fStack_894;
  float fStack_890;
  float fStack_88c;
  float fStack_888;
  float fStack_884;
  float fStack_880;
  undefined8 uStack_85c;
  undefined8 uStack_854;
  float fStack_84c;
  float fStack_848;
  float fStack_844;
  float fStack_840;
  float fStack_83c;
  float fStack_838;
  int iStack_828;
  int iStack_824;
  int iStack_820;
  undefined8 uStack_81c;
  undefined8 uStack_814;
  undefined8 uStack_80c;
  float local_7f0 [4];
  float local_7e0;
  float local_7dc [4];
  float local_7cc;
  float local_7c8;
  float local_7c4;
  uint *local_7c0;
  float local_7bc;
  float local_7b8;
  float local_7b4;
  float fStack_7b0;
  float fStack_7ac;
  float fStack_7a8;
  float fStack_7a4;
  float fStack_7a0;
  undefined8 uStack_784;
  undefined8 uStack_77c;
  undefined8 uStack_774;
  float fStack_76c;
  float fStack_75c;
  float fStack_758;
  float fStack_754;
  float fStack_744;
  float fStack_740;
  float fStack_73c;
  undefined4 uStack_72c;
  undefined4 uStack_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  float fStack_71c;
  float fStack_718;
  float fStack_714;
  float fStack_710;
  float fStack_70c;
  float fStack_708;
  float fStack_704;
  int *piStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  float fStack_6d4;
  float fStack_6d0;
  int iStack_6cc;
  float fStack_6c8;
  int iStack_6c4;
  int iStack_6c0;
  undefined8 uStack_6bc;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  int iStack_6a4;
  int iStack_6a0;
  int iStack_69c;
  int iStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  float local_670 [4];
  float local_660;
  float local_65c;
  float local_658;
  float local_654;
  float local_650;
  float local_64c;
  float local_648;
  float local_644;
  float local_640;
  float local_63c;
  float local_638;
  float local_634;
  float fStack_62c;
  float fStack_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  float fStack_618;
  int iStack_614;
  uint uStack_610;
  int iStack_60c;
  float fStack_608;
  int iStack_604;
  uint uStack_600;
  uint uStack_5fc;
  uint uStack_5f8;
  uint uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  int local_56c [8];
  float fStack_54c;
  float fStack_548;
  float fStack_534;
  int iStack_530;
  float fStack_52c;
  int iStack_528;
  uint uStack_520;
  uint uStack_51c;
  uint uStack_518;
  undefined8 uStack_514;
  uint uStack_50c;
  int iStack_508;
  undefined8 uStack_504;
  int iStack_4fc;
  float fStack_4f8;
  int iStack_4f4;
  int iStack_4f0;
  undefined8 uStack_4ec;
  undefined1 auStack_4e4 [20];
  uint local_4d0 [11];
  int iStack_4a4;
  uint uStack_4a0;
  int iStack_49c;
  float local_498;
  int iStack_47c;
  uint uStack_478;
  uint uStack_474;
  uint auStack_470 [3];
  undefined1 auStack_464 [20];
  float local_450 [12];
  float fStack_420;
  float fStack_414;
  float afStack_408 [17];
  float afStack_3c4 [20];
  float afStack_374 [23];
  undefined4 auStack_318 [20];
  undefined4 auStack_2c8 [16];
  undefined4 auStack_288 [19];
  undefined1 auStack_23c [12];
  undefined1 auStack_230 [12];
  undefined1 auStack_224 [48];
  undefined4 auStack_1f4 [48];
  undefined4 auStack_134 [2];
  undefined8 auStack_12c [30];
  uint uStack_3c;
  void *pvStack_34;
  undefined4 uStack_2c;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_006f4adb;
  local_14 = ExceptionList;
  local_1c = DAT_0076aa78 ^ (uint)&piStack_bf0;
  uStack_bfc = (int *)(DAT_0076aa78 ^ (uint)&stack0xfffff408);
  ExceptionList = &local_14;
  dVar24 = 0.39269909262657166;
  local_bbc = param_1;
  local_b3c = param_6;
  in_ECX[0x20002e] = in_ECX[0x20002e] + param_8;
  piStack_c00 = (int *)0x5fc21c;
  local_ba8 = in_ECX;
  libm_sse2_tan_precise();
  local_bdc = (float *)(1.0 / (float)dVar24);
  local_bd4 = -((float)local_bdc / ((float)param_4 / (float)param_5));
  piStack_c00 = (int *)0x5fc26f;
  local_450[0] = local_bd4;
  FUN_00423e70();
  fVar29 = (((float)param_2 - (float)param_4 * 0.5) / (float)param_4) * 2.0;
  fVar26 = (((float)param_3 - (float)param_5 * 0.5) / (float)param_5) * 2.0;
  fVar34 = ((fVar29 * local_670[0] + fVar26 * local_660) - local_650 * 0.1) + local_640;
  local_640 = fVar34;
  local_63c = ((fVar29 * local_670[1] + fVar26 * local_65c) - local_64c * 0.1) + local_63c;
  local_638 = ((fVar29 * local_670[2] + fVar26 * local_658) - local_648 * 0.1) + local_638;
  fVar27 = fVar34 * 0.0;
  local_634 = ((fVar29 * local_670[3] + fVar26 * local_654) - local_644 * 0.1) + local_634;
  pfVar10 = local_670;
  pfVar12 = local_7f0;
  for (iVar18 = 0x10; fVar23 = local_7f0[3], fVar29 = local_7f0[2], fVar26 = local_7f0[1],
      iVar18 != 0; iVar18 = iVar18 + -1) {
    *pfVar12 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar12 = pfVar12 + 1;
  }
  local_7f0[0] = local_670[0] * local_bd4 + local_660 * 0.0 + local_650 * 0.0 + fVar27;
  fVar30 = local_660 * 0.0 + local_670[0] * 0.0;
  local_7e0 = (float)local_bdc * local_660 + local_670[0] * 0.0 + local_650 * 0.0 + fVar27;
  local_7dc[3] = local_650 * 1.0001 + fVar30 + fVar34;
  local_7c0 = (uint *)((fVar30 - local_650 * 0.10001) + fVar27);
  fVar27 = local_7bc * 0.0;
  local_7f0[1] = local_7f0[1] * local_bd4 + local_7dc[0] * 0.0 + local_7cc * 0.0 + fVar27;
  fVar34 = fVar26 * 0.0 + local_7dc[0] * 0.0;
  local_7dc[0] = (float)local_bdc * local_7dc[0] + fVar26 * 0.0 + local_7cc * 0.0 + fVar27;
  fVar26 = local_7cc * 0.10001;
  local_7cc = local_7cc * 1.0001 + fVar34 + local_7bc;
  local_7bc = (fVar34 - fVar26) + fVar27;
  fVar26 = local_7b8 * 0.0;
  local_bec = (uint *)(local_ba8 + 1);
  local_7f0[2] = local_7f0[2] * local_bd4 + local_7dc[1] * 0.0 + local_7c8 * 0.0 + fVar26;
  fVar34 = fVar29 * 0.0 + local_7dc[1] * 0.0;
  local_7dc[1] = (float)local_bdc * local_7dc[1] + fVar29 * 0.0 + local_7c8 * 0.0 + fVar26;
  fVar29 = local_7c8 * 0.10001;
  local_7c8 = local_7c8 * 1.0001 + fVar34 + local_7b8;
  fVar27 = local_7b4 * 0.0;
  local_7b8 = (fVar34 - fVar29) + fVar26;
  local_7f0[3] = local_7f0[3] * local_bd4 + local_7dc[2] * 0.0 + local_7c4 * 0.0 + fVar27;
  fVar29 = fVar23 * 0.0 + local_7dc[2] * 0.0;
  local_7dc[2] = (float)local_bdc * local_7dc[2] + fVar23 * 0.0 + local_7c4 * 0.0 + fVar27;
  fVar26 = local_7c4 * 0.10001;
  local_7c4 = local_7c4 * 1.0001 + fVar29 + local_7b4;
  local_7b4 = (fVar29 - fVar26) + fVar27;
  pfVar10 = local_7f0;
  pfVar12 = local_450;
  for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
    *pfVar12 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar12 = pfVar12 + 1;
  }
  puVar6 = local_bec;
  puVar20 = local_4d0;
  for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
    *puVar20 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar20 = puVar20 + 1;
  }
  local_498 = local_498 - 80.0;
  piStack_c00 = (int *)0x5fc701;
  FUN_00423e70();
  local_bc4 = local_918;
  local_bd8 = local_928;
  local_bdc = (float *)local_908;
  local_bc0 = local_924;
  local_bac = local_914;
  local_8f8 = local_918 * 0.0 + local_928 * 0.0 + local_908 * 300.0 + local_8f8;
  local_bb4 = (double)CONCAT44(local_920,local_904);
  local_ba4 = local_910;
  local_be4._0_4_ = (int *)local_900;
  local_b94 = local_91c;
  local_bd4 = local_90c;
  local_8f4 = CONCAT44(local_910 * 0.0 + local_920 * 0.0 + local_900 * 300.0 + local_8f4._4_4_,
                       local_914 * 0.0 + (float)local_924 * 0.0 + local_904 * 300.0 +
                       (float)local_8f4);
  local_b7c = local_8fc;
  local_8ec = local_90c * 0.0 + (float)local_91c * 0.0 + local_8fc * 300.0 + local_8ec;
  if (param_7 != 1.0) {
    local_bac = local_914 * param_7;
    local_bd8 = local_928 * param_7;
    local_ba4 = local_910 * param_7;
    local_bc0 = (int *)((float)local_924 * param_7);
    local_bd4 = local_90c * param_7;
    local_bdc = (float *)(local_908 * param_7);
    local_b94 = (int *)((float)local_91c * param_7);
    local_bc4 = local_918 * param_7;
    local_be4._0_4_ = (int *)(local_900 * param_7);
    local_b7c = local_8fc * param_7;
    local_bb4 = (double)CONCAT44(local_920 * param_7,local_904 * param_7);
  }
  local_b90 = (int *)0x0;
  dVar24 = 0.0;
  piStack_c00 = (int *)0x5fc961;
  libm_sse2_cos_precise();
  local_b64 = (float)dVar24;
  dVar24 = (double)(float)local_b90;
  piStack_c00 = (int *)0x5fc97f;
  libm_sse2_sin_precise();
  pfVar10 = local_b3c;
  fVar26 = (float)dVar24;
  local_b6c = local_b64 * local_bd8 + fVar26 * local_bc4;
  local_bb8 = local_b64 * local_bc4 - local_bd8 * fVar26;
  uStack_b74._4_4_ = local_b64 * (float)local_bc0 + fVar26 * local_bac;
  local_b8c = local_b64 * local_bac - (float)local_bc0 * fVar26;
  local_b68 = local_b64 * local_bb4._4_4_ + fVar26 * local_ba4;
  local_b80 = local_b64 * local_ba4 - local_bb4._4_4_ * fVar26;
  local_bd8 = local_b64 * (float)local_b94 + fVar26 * local_bd4;
  local_b90 = (int *)(*local_b3c * 0.017453292);
  local_b64 = local_b64 * local_bd4 - (float)local_b94 * fVar26;
  dVar24 = (double)(float)local_b90;
  piStack_c00 = (int *)0x5fca95;
  libm_sse2_cos_precise();
  local_bc8 = (float)dVar24;
  dVar24 = (double)(float)local_b90;
  piStack_c00 = (int *)0x5fcaad;
  libm_sse2_sin_precise();
  fVar26 = (float)dVar24;
  local_908 = local_bc8 * (float)local_bdc - local_bb8 * fVar26;
  local_904 = local_b8c * fVar26;
  local_b8c = local_bc8 * local_b8c + fVar26 * (float)local_bb4;
  local_904 = local_bc8 * (float)local_bb4 - local_904;
  local_900 = local_b80 * fVar26;
  local_b80 = local_bc8 * local_b80 + fVar26 * (float)(int *)local_be4;
  local_900 = local_bc8 * (float)(int *)local_be4 - local_900;
  local_b54 = local_bc8 * local_b64 + fVar26 * local_b7c;
  local_b90 = (int *)(pfVar10[2] * 0.017453292);
  local_8fc = local_bc8 * local_b7c - local_b64 * fVar26;
  dVar24 = (double)(float)local_b90;
  piStack_c00 = (int *)0x5fcbc6;
  local_bc8 = local_bc8 * local_bb8 + fVar26 * (float)local_bdc;
  libm_sse2_cos_precise();
  local_bb8 = (float)dVar24;
  dVar24 = (double)(float)local_b90;
  piStack_c00 = (int *)0x5fcbde;
  libm_sse2_sin_precise();
  piVar14 = local_ba8;
  fVar26 = (float)dVar24;
  local_928 = fVar26 * local_bc8 + local_bb8 * local_b6c;
  local_918 = local_bb8 * local_bc8 - local_b6c * fVar26;
  local_924 = (int *)(fVar26 * local_b8c + local_bb8 * uStack_b74._4_4_);
  local_914 = local_bb8 * local_b8c - uStack_b74._4_4_ * fVar26;
  local_920 = fVar26 * local_b80 + local_bb8 * local_b68;
  local_56c[0] = param_4 + -0x140;
  local_910 = local_bb8 * local_b80 - local_b68 * fVar26;
  local_56c[2] = param_4 + -0x14;
  local_91c = (int *)(fVar26 * local_b54 + local_bb8 * local_bd8);
  local_90c = local_bb8 * local_b54 - local_bd8 * fVar26;
  piStack_c04 = (int *)local_ba8[0x29];
  piStack_c00 = local_56c;
  local_56c[1] = 0x140;
  local_56c[3] = 0x14;
  uStack_c08 = 8.797988e-39;
  (**(code **)(*piStack_c04 + 300))();
  piStack_c10 = (int *)piVar14[0x29];
  uStack_c08 = 1.4013e-45;
  puStack_c0c = (uint *)0x7;
  (**(code **)(*piStack_c10 + 0xe4))();
  FUN_00447d10();
  FUN_00448100(0x49742400);
  uStack_6fc = 0;
  uStack_6f8 = 0;
  uStack_6f4 = 0;
  uStack_6f0 = 0;
  fStack_744 = 0.0;
  fStack_740 = 0.0;
  fStack_73c = 0.0;
  puVar3 = auStack_1f4;
  puVar16 = auStack_134;
  iVar18 = 0x10;
  do {
    *puVar16 = 0;
    puVar16[1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)(puVar16 + 2) = 0;
    puVar3[2] = 0;
    puVar16 = puVar16 + 4;
    puVar3 = puVar3 + 3;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  FUN_00448f10(auStack_134,auStack_1f4);
  fVar26 = pfStack_bd0[1];
  local_ba4 = *pfStack_bd0;
  if (param_7 < 0.35) {
    local_bdc = (float *)__alldiv(local_ba4,fVar26,0x10000,0);
    local_bd4 = (float)((int)((int)local_bdc + ((int)local_bdc >> 0x1f & 0x3fffU)) >> 0xe);
    if (((int)fVar26 < 1) && ((int)fVar26 < 0)) {
      local_bd4 = (float)((int)local_bd4 + -1);
    }
    fVar26 = pfStack_bd0[3];
    local_ba4 = pfStack_bd0[2];
    iVar18 = __alldiv(local_ba4,fVar26,0x10000,0);
    local_bc0 = (int *)((int)(iVar18 + (iVar18 >> 0x1f & 0x3fffU)) >> 0xe);
    if (((int)fVar26 < 1) && ((int)fVar26 < 0)) {
      local_bc0 = (int *)((int)local_bc0 - 1);
    }
    FUN_005cade0(&fStack_704,local_bdc,iVar18);
    if (-1 < (int)fStack_704) {
      local_bd4 = fStack_704;
      local_bc0 = piStack_700;
    }
    iVar18 = *(int *)(piVar14[0x2b] + 0xb8);
    uVar4 = __alldiv(*(undefined4 *)(iVar18 + 0x18),*(undefined4 *)(iVar18 + 0x1c),0x10000,0);
    uVar5 = __alldiv(*(undefined4 *)(iVar18 + 0x10),*(undefined4 *)(iVar18 + 0x14),0x10000,0);
    piVar14 = local_bbc;
    FUN_00477e10(uVar5,uVar4);
    local_bd8 = (float)-(int)param_9;
    fVar26 = local_bd8;
    fVar27 = local_bd8;
    if ((uint *)-(int)param_9 == param_9 || (int)local_bd8 < (int)param_9) {
      do {
        fStack_ba0 = fVar27;
        if ((int)fVar26 <= (int)param_9) {
          puVar6 = (uint *)((int)local_bd8 + (int)local_bd4);
          local_bc8 = (float)((int)local_bc0 + (int)fVar26);
          local_bec = (uint *)((int)param_9 + (1 - (int)fVar26));
          puStack_be8 = puVar6;
          do {
            if (((((-1 < (int)puVar6) && (-1 < (int)local_bc8)) && ((int)puVar6 < 0x400)) &&
                (((int)local_bc8 < 0x400 &&
                 (piVar15 = (int *)piVar14[(int)puVar6 * 0x400 + (int)local_bc8 + 0x10002c],
                 puVar6 = puStack_be8, local_b90 = piVar15, piVar15 != (int *)0x0)))) &&
               ((piVar15[0xb] != 0 && ((char)piVar15[10] != '\0')))) {
              EnterCriticalSection((LPCRITICAL_SECTION)(piVar14 + 0x200036));
              if (piVar15[0xb] != 0) {
                FUN_00423e70();
                pfVar10 = pfStack_bd0;
                fStack_a94 = fStack_a94 * 32.0;
                fStack_a90 = fStack_a90 * 32.0;
                fStack_aa4 = fStack_aa4 * 32.0;
                fStack_a88 = fStack_a88 * 32.0;
                fStack_a8c = fStack_a8c * 32.0;
                fStack_aa0 = fStack_aa0 * 32.0;
                fStack_a9c = fStack_a9c * 32.0;
                fStack_a98 = fStack_a98 * 32.0;
                fStack_a7c = fStack_a7c * 32.0;
                fStack_a84 = fStack_a84 * 32.0;
                fStack_a80 = fStack_a80 * 32.0;
                fStack_a78 = fStack_a78 * 32.0;
                uVar7 = piVar15[9];
                piStack_bf0 = (int *)(fStack_a94 * 0.0 + fStack_aa4 * 0.0);
                fStack_a74 = ((float)piStack_bf0 - fStack_a84) + fStack_a74;
                local_bc4 = fStack_a90 * 0.0 + fStack_aa0 * 0.0;
                fStack_a70 = (local_bc4 - fStack_a80) + fStack_a70;
                local_bb8 = fStack_a8c * 0.0 + fStack_a9c * 0.0;
                fStack_a6c = (local_bb8 - fStack_a7c) + fStack_a6c;
                local_ba8 = (int *)(fStack_a88 * 0.0 + fStack_a98 * 0.0);
                fStack_a68 = ((float)local_ba8 - fStack_a78) + fStack_a68;
                fStack_b9c = (float)(uVar7 * 0x1000000 - (int)pfStack_bd0[2]);
                fStack_b98 = (float)(((((int)(uVar7 << 8) >> 0x1f) << 0x10 | (uVar7 & 0xffffff) >> 8
                                      ) - (int)pfStack_bd0[3]) -
                                    (uint)(uVar7 * 0x1000000 < (uint)pfStack_bd0[2]));
                local_bb4 = (double)CONCAT44(fStack_b98,fStack_b9c);
                uStack_b5c = local_bb4 * 0.00390625;
                lVar36 = FUN_0068d946();
                local_bdc = (float *)(float)lVar36;
                uVar7 = local_b90[8];
                fStack_bcc = (float)local_bdc * 1.5258789e-05;
                local_b64 = (float)(uVar7 * 0x1000000 - (int)*pfVar10);
                iStack_b60 = ((((int)(uVar7 << 8) >> 0x1f) << 0x10 | (uVar7 & 0xffffff) >> 8) -
                             (int)pfVar10[1]) - (uint)(uVar7 * 0x1000000 < (uint)*pfVar10);
                local_bb4 = (double)CONCAT44(iStack_b60,local_b64);
                uStack_b4c = local_bb4 * 0.00390625;
                local_be4 = lVar36;
                lVar36 = FUN_0068d946();
                local_bdc = (float *)(float)lVar36;
                fVar26 = (float)local_bdc * 1.5258789e-05;
                fStack_a74 = fStack_aa4 * fVar26 + fStack_a94 * fStack_bcc + fStack_a74;
                fStack_a70 = fStack_aa0 * fVar26 + fStack_a90 * fStack_bcc + fStack_a70;
                fStack_a6c = fStack_a9c * fVar26 + fStack_a8c * fStack_bcc + fStack_a6c;
                fStack_a68 = fStack_a98 * fVar26 + fStack_a88 * fStack_bcc + fStack_a68;
                if (local_b90[7] < 0) {
                  fStack_a74 = ((float)piStack_bf0 - fStack_a84 * 0.5) + fStack_a74;
                  fStack_a70 = (local_bc4 - fStack_a80 * 0.5) + fStack_a70;
                  fStack_a6c = (local_bb8 - fStack_a7c * 0.5) + fStack_a6c;
                  fStack_a68 = ((float)local_ba8 - fStack_a78 * 0.5) + fStack_a68;
                }
                else {
                  fVar26 = (float)local_b90[7] * 0.00390625 + 1.0;
                  if (fVar26 != 1.0) {
                    fStack_a84 = fStack_a84 * fVar26;
                    fStack_a80 = fStack_a80 * fVar26;
                    fStack_a7c = fStack_a7c * fVar26;
                    fStack_a78 = fStack_a78 * fVar26;
                  }
                }
                uStack_72c = 0x3e4ccccd;
                uStack_728 = 0x3ecccccd;
                uStack_724 = 0x3f800000;
                uStack_720 = 0x3f800000;
                uVar7 = (int)puStack_be8 + (int)local_bc8 * 2 & 0x80000003;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                }
                fStack_958 = 1.0;
                fStack_95c = (float)(int)uVar7 * 0.1 + 0.8;
                fStack_964 = fStack_95c * 0.2;
                piStack_960 = (int *)(fStack_95c * 0.4);
                fStack_95c = fStack_95c * 1.0;
                if (1.0 < fStack_964) {
                  fStack_964 = 1.0;
                }
                if (1.0 < (float)piStack_960) {
                  piStack_960 = (int *)0x3f800000;
                }
                if (1.0 < fStack_95c) {
                  fStack_95c = 1.0;
                }
                uStack_b74 = lVar36;
                FUN_00448280(&fStack_964);
                FUN_004482a0(&fStack_aa4,auStack_93c,auStack_464);
                FUN_004e6df0();
                uStack_5c0 = 0x3f800000;
                uStack_5bc = 0x3f800000;
                uStack_5b8 = 0x3f800000;
                uStack_5b4 = 0x3f800000;
                FUN_00448280(&uStack_5c0);
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(piVar14 + 0x200036));
              puVar6 = puStack_be8;
            }
            local_bc8 = (float)((int)local_bc8 + 1);
            local_bec = (uint *)((int)local_bec + -1);
          } while (local_bec != (uint *)0x0);
          local_bec = (uint *)0x0;
          fVar26 = fStack_ba0;
        }
        local_bd8 = (float)((int)local_bd8 + 1);
        fVar27 = fStack_ba0;
      } while ((int)local_bd8 <= (int)param_9);
    }
  }
  else {
    local_bdc = (float *)__alldiv(local_ba4,fVar26,0x10000,0);
    local_b90 = (int *)((int)((int)local_bdc + ((int)local_bdc >> 0x1f & 0xffU)) >> 8);
    if (((int)fVar26 < 1) && ((int)fVar26 < 0)) {
      local_b90 = (int *)((int)local_b90 + -1);
    }
    fVar26 = pfStack_bd0[3];
    local_ba4 = pfStack_bd0[2];
    uVar7 = __alldiv(local_ba4,fVar26,0x10000,0);
    iVar18 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 0xffU)) >> 8;
    if (((int)fVar26 < 1) && ((int)fVar26 < 0)) {
      iVar18 = iVar18 + -1;
    }
    local_ba8 = (int *)-(int)param_9;
    local_bec = param_9;
    puStack_be8 = param_9;
    piStack_bf0 = local_ba8;
    if (param_9 == (uint *)0x0) {
      uVar8 = (uint)local_bdc & 0x800000ff;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xffffff00) + 1;
      }
      if ((int)uVar8 < 0x80) {
        piStack_bf0 = (int *)0xffffffff;
      }
      else {
        local_bec = (uint *)0x1;
      }
      uVar7 = uVar7 & 0x800000ff;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
      }
      if ((int)uVar7 < 0x80) {
        local_ba8 = (int *)0xffffffff;
      }
      else {
        puStack_be8 = (uint *)0x1;
      }
    }
    puVar6 = puStack_be8;
    if ((int)piStack_bf0 <= (int)local_bec) {
      do {
        local_bc0 = local_ba8;
        if ((int)local_ba8 <= (int)puVar6) {
          fVar26 = (float)((int)local_b90 + (int)piStack_bf0);
          puVar20 = puStack_be8;
          local_bc8 = fVar26;
          do {
            fVar27 = (float)(iVar18 + (int)local_bc0);
            local_bb8 = fVar27;
            if ((((-1 < (int)fVar26) && (-1 < (int)fVar27)) && ((int)fVar26 < 0x10000)) &&
               ((int)fVar27 < 0x10000)) {
              EnterCriticalSection((LPCRITICAL_SECTION)(piVar14 + 0x200036));
              piVar15 = uStack_bfc;
              if (piVar14[((int)(((int)local_bc8 >> 0x1f & 0x3fU) + (int)local_bc8) >> 6) * 0x400 +
                          ((int)((int)fVar27 + ((int)fVar27 >> 0x1f & 0x3fU)) >> 6) + 0x2c] == 0) {
                fVar26 = 0.0;
              }
              else {
                uVar7 = (uint)local_bc8 & 0x8000003f;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
                }
                uVar8 = (uint)local_bb8 & 0x8000003f;
                if ((int)uVar8 < 0) {
                  uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
                }
                fVar26 = (float)((uVar7 * 0x40 + uVar8) * 0x34 +
                                piVar14[((int)(((int)local_bc8 >> 0x1f & 0x3fU) + (int)local_bc8) >>
                                        6) * 0x400 +
                                        ((int)((int)fVar27 + ((int)fVar27 >> 0x1f & 0x3fU)) >> 6) +
                                        0x2c]);
              }
              uStack_bfc = (int *)((uint)uStack_bfc & 0xffffff);
              if (fVar26 != 0.0) {
                uStack_bfc = (int *)CONCAT13(*(undefined1 *)((int)fVar26 + 0x30),(int3)piVar15);
              }
              local_bc4 = fVar26;
              fStack_b9c = (float)FUN_00487da0((int)((int)local_bc8 + ((int)local_bc8 >> 0x1f & 7U))
                                               >> 3,(int)((int)local_bb8 +
                                                         ((int)local_bb8 >> 0x1f & 7U)) >> 3);
              iVar19 = FUN_00601cc0((int)local_bc8 << 8,(int)local_bb8 << 8);
              if ((param_10 != '\0') &&
                 (((fVar26 == 0.0 || (*(int *)((int)fVar26 + 8) == 0)) ||
                  (*(int *)((int)fVar26 + 0x2c) != 0)))) {
                iVar9 = piVar14[0x2b];
                if ((int)(*(int *)(iVar9 + 0x24) - *(int *)(iVar9 + 0x20) & 0xfffffffcU) < 0x281d) {
                  local_b94 = (int *)0x0;
                }
                else {
                  local_b94 = *(int **)(*(int *)(iVar9 + 0x20) + 0x281c);
                }
                local_bd8 = 0.0;
                if (iVar19 != 0) {
                  local_bd8 = (float)(*(int *)(iVar19 + 0x1c) + -100) * 0.125;
                }
                if ((fVar26 != 0.0) && (*(int *)((int)fVar26 + 8) != 0)) {
                  local_bd8 = ((float)*(int *)((int)fVar26 + 0x2c) / 250.0 - 1.0) * 20.0 + local_bd8
                  ;
                }
                uStack_85c = 0x3e99999a3e4ccccd;
                if (uStack_bfc._3_1_ != '\0') {
                  if (((uint)uStack_bfc & 0x1000000) == 0) {
                    uStack_694 = 0x3e4ccccd;
                    uStack_690 = 0x3eb33333;
                    uStack_85c = 0x3eb333333e4ccccd;
                    uStack_68c = 0x3f800000;
                    uStack_688 = 0x3f800000;
                  }
                  else {
                    uStack_6b4 = 0x3e4ccccd;
                    uStack_6b0 = 0x3ecccccd;
                    uStack_85c = 0x3ecccccd3e4ccccd;
                    uStack_6ac = 0x3f800000;
                    uStack_6a8 = 0x3f800000;
                  }
                }
                uStack_854 = 0x3f8000003f800000;
                fStack_ae4 = 1.0;
                fStack_ae0 = 0.0;
                fStack_adc = 0.0;
                fStack_ad8 = 0.0;
                fStack_ad4 = 0.0;
                fStack_ad0 = 1.0;
                fStack_acc = 0.0;
                fStack_ac8 = 0.0;
                fStack_ac4 = 0.0;
                fStack_ac0 = 0.0;
                fStack_abc = 1.0;
                fStack_ab8 = 0.0;
                fStack_ab4 = 0.0;
                fStack_ab0 = 0.0;
                fStack_aac = 0.0;
                fStack_aa8 = 1.0;
                uVar40 = FUN_0068d946();
                fVar26 = *pfStack_bd0;
                fStack_b88 = pfStack_bd0[1];
                local_b7c = pfStack_bd0[2];
                local_b68 = pfStack_bd0[3];
                local_b80 = pfStack_bd0[4];
                fStack_b84 = pfStack_bd0[5];
                uStack_b14 = uVar40;
                uVar37 = __allmul(fVar26,fStack_b88,uVar40);
                uVar37 = __alldiv(uVar37,0x10000,0);
                uStack_784 = uVar37;
                uVar40 = __allmul((uint)uStack_b14,(int)((ulonglong)uVar40 >> 0x20),local_b7c,
                                  local_b68);
                uVar40 = __alldiv(uVar40,0x10000,0);
                uStack_77c = uVar40;
                uVar38 = __allmul(uStack_b14,local_b80,fStack_b84);
                uVar38 = __alldiv(uVar38,0x10000,0);
                uStack_774 = uVar38;
                uVar7 = __alldiv((undefined4)uStack_784,(int)((ulonglong)uVar37 >> 0x20),0x10000,0);
                uStack_520 = uVar7;
                uVar8 = __alldiv((undefined4)uStack_77c,(int)((ulonglong)uVar40 >> 0x20),0x10000,0);
                uStack_51c = uVar8;
                uStack_518 = __alldiv(uStack_774,0x10000,0);
                uStack_478 = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
                local_bdc = (float *)(uVar7 << 0x10);
                auStack_470[0] = ((int)uVar8 >> 0x1f) << 0x10 | uVar8 >> 0x10;
                fStack_bcc = (float)(uVar8 << 0x10);
                fStack_ba0 = (float)(((int)uStack_518 >> 0x1f) << 0x10 | uStack_518 >> 0x10);
                local_bd4 = (float)(uStack_518 << 0x10);
                iStack_47c = (int)local_bdc;
                uStack_474 = (uint)fStack_bcc;
                uVar40 = __alldiv(0,(uVar7 >> 0x10) << 0x15 | (uVar7 & 0xffff) << 5,0x10000,0);
                uStack_81c = uVar40;
                uVar40 = __alldiv((int)fStack_bcc << 0x15,
                                  (uVar8 >> 0x10) << 0x15 | (uint)fStack_bcc >> 0xb,0x10000,0);
                uStack_814 = uVar40;
                lVar36 = __alldiv((int)local_bd4 << 0x15,
                                  (int)fStack_ba0 << 0x15 | (uint)local_bd4 >> 0xb,0x10000,0);
                iStack_b2c = 0x200000;
                iStack_b28 = 0;
                local_bb4 = 2097152.0;
                uStack_b5c = 8192.0;
                uStack_80c = lVar36;
                uVar40 = FUN_0068d946();
                local_bdc = (float *)((ulonglong)uVar40 >> 0x20);
                fStack_bcc = (float)uVar40;
                uVar37 = __allmul(uVar40,fVar26,fStack_b88);
                uVar37 = __alldiv(uVar37,0x10000,0);
                local_bd4 = (float)((ulonglong)uVar37 >> 0x20);
                uStack_514 = uVar37;
                uVar40 = __allmul(uVar40,local_b7c,local_b68);
                uVar40 = __alldiv(uVar40,0x10000,0);
                iVar19 = (int)((ulonglong)uVar40 >> 0x20);
                fStack_b88 = (float)uVar40;
                uStack_50c = (uint)fStack_b88;
                iStack_508 = iVar19;
                uVar40 = __allmul(fStack_bcc,local_bdc,local_b80,fStack_b84);
                lVar36 = __alldiv(uVar40,0x10000,0);
                iStack_6cc = (uint)uVar37 - (uint)uStack_81c;
                local_bd4 = (float)(((int)local_bd4 - uStack_81c._4_4_) -
                                   (uint)((uint)uVar37 < (uint)uStack_81c));
                iStack_6c4 = (int)fStack_b88 - (uint)uStack_814;
                iStack_6c0 = (iVar19 - uStack_814._4_4_) -
                             (uint)((uint)fStack_b88 < (uint)uStack_814);
                uStack_6bc = lVar36 - uStack_80c;
                fStack_6c8 = local_bd4;
                iStack_4fc = iStack_6cc;
                fStack_4f8 = local_bd4;
                iStack_4f4 = iStack_6c4;
                iStack_4f0 = iStack_6c0;
                uStack_504 = lVar36;
                uStack_4ec = uStack_6bc;
                FUN_0042c900(0xffff0000,0xffffffff);
                fStack_714 = (float)CONCAT44(fStack_6c8,iStack_6cc) * 1.5258789e-05;
                fStack_710 = (float)CONCAT44(iStack_6c0,iStack_6c4) * 1.5258789e-05;
                fStack_ab4 = fStack_710 * fStack_ad4 + fStack_714 * fStack_ae4 + fStack_ab4;
                fStack_ab0 = fStack_710 * fStack_ad0 + fStack_714 * fStack_ae0 + fStack_ab0;
                fStack_aac = fStack_710 * fStack_acc + fStack_714 * fStack_adc + fStack_aac;
                fStack_aa8 = fStack_710 * fStack_ac8 + fStack_714 * fStack_ad8 + fStack_aa8;
                local_b8c = (float)*(longlong *)(pfStack_bd0 + 4) * 0.125;
                lVar36 = FUN_0068d946();
                uStack_b74._0_4_ = local_bd8 * 65536.0;
                lVar39 = FUN_0068d946();
                piVar14 = local_bbc;
                uStack_b1c = lVar39 - lVar36;
                local_bd8 = (float)((int)piStack_bf0 << 5);
                fVar29 = (float)((int)local_bc0 << 5);
                fVar34 = (float)(lVar39 - lVar36) * 1.5258789e-05;
                fStack_ab4 = local_bd8 * fStack_ae4 + fVar29 * fStack_ad4 + fVar34 * fStack_ac4 +
                             fStack_ab4;
                fVar27 = local_bd8 * fStack_ae0;
                fStack_ae0 = fStack_ae0 * 4.0;
                fVar26 = fVar29 * fStack_acc;
                fStack_ab0 = fVar27 + fVar29 * fStack_ad0 + fVar34 * fStack_ac0 + fStack_ab0;
                fVar27 = local_bd8 * fStack_adc;
                fStack_adc = fStack_adc * 4.0;
                fStack_acc = fStack_acc * 4.0;
                fStack_aac = fVar27 + fVar26 + fVar34 * fStack_abc + fStack_aac;
                local_bd8 = local_bd8 * fStack_ad8;
                fStack_ad8 = fStack_ad8 * 4.0;
                fStack_ad4 = fStack_ad4 * 4.0;
                fStack_ac4 = fStack_ac4 * 4.0;
                fStack_aa8 = local_bd8 + fVar29 * fStack_ac8 + fVar34 * fStack_ab8 + fStack_aa8;
                fStack_ac8 = fStack_ac8 * 4.0;
                fStack_ae4 = fStack_ae4 * 4.0;
                fStack_ac0 = fStack_ac0 * 4.0;
                fStack_ad0 = fStack_ad0 * 4.0;
                fStack_abc = fStack_abc * 4.0;
                fStack_ab8 = fStack_ab8 * 4.0;
                FUN_004482a0(&fStack_ae4,auStack_93c,auStack_464);
                FUN_00448280(&uStack_85c);
                FUN_004e6df0();
                uStack_5f0 = 0x3f800000;
                uStack_5ec = 0x3f800000;
                uStack_5e8 = 0x3f800000;
                uStack_5e4 = 0x3f800000;
                FUN_00448280(&uStack_5f0);
                fVar26 = local_bc4;
              }
              if ((fVar26 != 0.0) && (*(int *)((int)fVar26 + 8) != 0)) {
                iVar19 = *(int *)((int)fVar26 + 0x2c);
                iVar9 = iVar19 - param_8;
                *(int *)((int)fVar26 + 0x2c) = iVar9;
                local_bdc = (float *)((float)*(int *)((int)fVar26 + 4) - (float)iVar19 * 0.1);
                if (iVar9 < 0) {
                  iVar9 = 0;
                }
                local_8f8 = 1.0;
                local_8f4 = 0x3f8000003f800000;
                local_8ec = 1.0;
                *(int *)((int)fVar26 + 0x2c) = iVar9;
                FUN_00423e70();
                uVar40 = FUN_0068d946();
                fStack_84c = *pfStack_bd0;
                fStack_840 = pfStack_bd0[3];
                fStack_848 = pfStack_bd0[1];
                fStack_83c = pfStack_bd0[4];
                fStack_844 = pfStack_bd0[2];
                fStack_838 = pfStack_bd0[5];
                uStack_aec = uVar40;
                FUN_0042c900(uVar40);
                uStack_5fc = __alldiv(fStack_84c,fStack_848,0x10000,0);
                uVar7 = __alldiv(fStack_844,fStack_840,0x10000,0);
                uStack_5f8 = uVar7;
                uStack_5f4 = __alldiv(fStack_83c,fStack_838,0x10000,0);
                fStack_b88 = (float)(((int)uStack_5fc >> 0x1f) << 0x10 | uStack_5fc >> 0x10);
                iStack_614 = uStack_5fc << 0x10;
                fStack_608 = (float)(((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10);
                iStack_60c = uVar7 << 0x10;
                uStack_600 = ((int)uStack_5f4 >> 0x1f) << 0x10 | uStack_5f4 >> 0x10;
                iStack_604 = uStack_5f4 << 0x10;
                uStack_610 = (uint)fStack_b88;
                iStack_4a4 = iStack_614;
                uStack_4a0 = (uint)fStack_b88;
                iStack_49c = iStack_60c;
                local_498 = fStack_608;
                FUN_0042c900(0x200000,0);
                iStack_b24 = 0x200000;
                iStack_b20 = 0;
                local_bb4 = 2097152.0;
                uStack_b4c = 8192.0;
                uVar40 = FUN_0068d946();
                pfVar10 = pfStack_bd0;
                fStack_62c = *pfStack_bd0;
                fStack_61c = pfStack_bd0[4];
                fStack_628 = pfStack_bd0[1];
                fStack_624 = pfStack_bd0[2];
                fStack_620 = pfStack_bd0[3];
                fStack_618 = pfStack_bd0[5];
                FUN_0042c900(uVar40);
                puVar16 = (undefined4 *)FUN_0042c7a0(auStack_23c,&iStack_614);
                uStack_6ec = *puVar16;
                uStack_6dc = puVar16[4];
                uStack_6e8 = puVar16[1];
                uStack_6e4 = puVar16[2];
                uStack_6e0 = puVar16[3];
                uStack_6d8 = puVar16[5];
                FUN_0042c900(0xffff0000,0xffffffff);
                fStack_71c = (float)CONCAT44(uStack_6e8,uStack_6ec) * 1.5258789e-05;
                fStack_718 = (float)CONCAT44(uStack_6e0,uStack_6e4) * 1.5258789e-05;
                fStack_9f4 = fStack_a14 * fStack_718 + fStack_a24 * fStack_71c + fStack_9f4;
                fStack_9f0 = fStack_a10 * fStack_718 + fStack_a20 * fStack_71c + fStack_9f0;
                fStack_9ec = fStack_a0c * fStack_718 + fStack_a1c * fStack_71c + fStack_9ec;
                fStack_9e8 = fStack_a08 * fStack_718 + fStack_a18 * fStack_71c + fStack_9e8;
                local_b64 = (float)*(longlong *)(pfVar10 + 4) * 0.125;
                lVar36 = FUN_0068d946();
                local_be4._0_4_ = (int *)((float)local_bdc * 65536.0);
                lVar39 = FUN_0068d946();
                piVar14 = local_bbc;
                fVar26 = local_bc4;
                uStack_b34 = lVar39 - lVar36;
                fVar29 = (float)((int)local_bc0 << 5);
                fVar34 = (float)(lVar39 - lVar36) * 1.5258789e-05;
                fVar27 = (float)((int)piStack_bf0 << 5);
                fStack_9f4 = fStack_a24 * fVar27 + fStack_a14 * fVar29 + fStack_a04 * fVar34 +
                             fStack_9f4;
                fStack_9f0 = fStack_a20 * fVar27 + fStack_a10 * fVar29 + fStack_a00 * fVar34 +
                             fStack_9f0;
                fStack_9ec = fStack_a1c * fVar27 + fStack_a0c * fVar29 + fStack_9fc * fVar34 +
                             fStack_9ec;
                fStack_9e8 = fStack_a18 * fVar27 + fStack_a08 * fVar29 + fStack_9f8 * fVar34 +
                             fStack_9e8;
                if (*(int *)((int)local_bc4 + 8) == 0) {
                  fStack_a20 = fStack_a20 * 4.0;
                  fStack_a24 = fStack_a24 * 4.0;
                  fStack_a1c = fStack_a1c * 4.0;
                  fStack_a14 = fStack_a14 * 4.0;
                  fStack_a18 = fStack_a18 * 4.0;
                  fStack_a08 = fStack_a08 * 4.0;
                  fStack_a10 = fStack_a10 * 4.0;
                  fStack_a04 = fStack_a04 * 4.0;
                  fStack_a0c = fStack_a0c * 4.0;
                  fStack_9f8 = fStack_9f8 * 4.0;
                  fStack_a00 = fStack_a00 * 4.0;
                  fStack_9fc = fStack_9fc * 4.0;
                }
                FUN_004482a0(&fStack_a24,auStack_93c,auStack_464);
                if (((fStack_b9c == 0.0) || (*(int *)((int)fStack_b9c + 0x34) == 0)) ||
                   (*(char *)((int)fStack_b9c + 0x41) != '\x01')) {
LAB_005fe9f8:
                  if ((param_10 != '\0') && (((uint)uStack_bfc & 0x1000000) == 0)) {
                    local_8f8 = local_8f8 * 0.6;
                    local_8f4 = CONCAT44(local_8f4._4_4_ * 0.6,(float)local_8f4 * 0.6);
                  }
                }
                else {
                  fStack_70c = local_bc8;
                  fStack_708 = local_bb8;
                  cVar2 = FUN_00468840(&fStack_70c);
                  if (cVar2 == '\0') goto LAB_005fe9f8;
                }
                FUN_00448280(&local_8f8);
                FUN_004e6df0();
                uStack_5a0 = 0x3f800000;
                uStack_59c = 0x3f800000;
                uStack_598 = 0x3f800000;
                uStack_594 = 0x3f800000;
                FUN_00448280(&uStack_5a0);
              }
              if (((piVar14[0x20002c] != 0) && (fVar26 != 0.0)) &&
                 (piVar15 = (int *)**(int **)((int)fVar26 + 0x20),
                 piVar15 != *(int **)((int)fVar26 + 0x20))) {
                do {
                  FUN_00423e70();
                  pfVar10 = pfStack_bd0;
                  fStack_75c = (float)__alldiv(*pfStack_bd0,pfStack_bd0[1],0x10000,0);
                  fStack_758 = (float)__alldiv(pfVar10[2],pfVar10[3],0x10000,0);
                  fStack_754 = (float)__alldiv(pfVar10[4],pfVar10[5],0x10000,0);
                  piVar14 = local_bbc;
                  iStack_828 = (int)*(undefined8 *)(piVar15 + 2);
                  iStack_824 = (int)((ulonglong)*(undefined8 *)(piVar15 + 2) >> 0x20);
                  local_644 = (float)(iStack_828 - (int)fStack_75c);
                  local_640 = (float)(iStack_824 - (int)fStack_758);
                  iStack_820 = piVar15[4] - (int)fStack_754;
                  local_63c = (float)iStack_820;
                  afStack_8b4[2] =
                       fStack_8cc * local_640 + fStack_8dc * local_644 + fStack_8bc * local_63c +
                       afStack_8b4[2];
                  _iStack_828 = CONCAT44(iStack_824 - (int)fStack_758,iStack_828 - (int)fStack_75c);
                  afStack_8b4[3] =
                       fStack_8c8 * local_640 + fStack_8d8 * local_644 + fStack_8b8 * local_63c +
                       afStack_8b4[3];
                  fStack_8a4 = fStack_8c4 * local_640 + fStack_8d4 * local_644 +
                               afStack_8b4[0] * local_63c + fStack_8a4;
                  uStack_5e0 = 0x3f800000;
                  piStack_8a0 = (int *)(fStack_8c0 * local_640 + fStack_8d0 * local_644 +
                                        afStack_8b4[1] * local_63c + (float)piStack_8a0);
                  uStack_5dc = 0x3f800000;
                  uStack_5d8 = 0x3f800000;
                  uStack_5d4 = 0x3f800000;
                  fStack_8dc = fStack_8dc * 5.0;
                  fStack_8d8 = fStack_8d8 * 5.0;
                  fStack_8cc = fStack_8cc * 5.0;
                  fStack_8d4 = fStack_8d4 * 5.0;
                  fStack_8c8 = fStack_8c8 * 5.0;
                  fStack_8d0 = fStack_8d0 * 5.0;
                  fStack_8bc = fStack_8bc * 5.0;
                  fStack_8c4 = fStack_8c4 * 5.0;
                  fStack_8b8 = fStack_8b8 * 5.0;
                  fStack_8c0 = fStack_8c0 * 5.0;
                  afStack_8b4[0] = afStack_8b4[0] * 5.0;
                  afStack_8b4[1] = afStack_8b4[1] * 5.0;
                  FUN_00448280(&uStack_5e0);
                  FUN_004482a0(&fStack_8dc,piVar14 + 0x11,auStack_4e4);
                  FUN_004e6df0();
                  piVar15 = (int *)*piVar15;
                } while (piVar15 != (int *)*(int *)((int)local_bc4 + 0x20));
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(piVar14 + 0x200036));
              fVar26 = local_bc8;
              puVar20 = puStack_be8;
            }
            local_bc0 = (int *)((int)local_bc0 + 1);
            puVar6 = puStack_be8;
          } while ((int)local_bc0 <= (int)puVar20);
        }
        piStack_bf0 = (int *)((int)piStack_bf0 + 1);
      } while ((int)piStack_bf0 <= (int)local_bec);
    }
  }
  if (param_10 != '\0') {
    uVar4 = __alldiv(pfStack_bd0[2],pfStack_bd0[3],0x10000,0);
    uVar5 = __alldiv(*pfStack_bd0,pfStack_bd0[1],0x10000,0);
    iVar18 = FUN_005cb0d0(uVar5,uVar4);
    if (iVar18 != 0) {
      piVar15 = (int *)(iVar18 + 0x1404c);
      local_bdc = (float *)0x8;
      do {
        local_bd4 = 1.12104e-44;
        do {
          lVar36 = local_be4;
          lVar39 = uStack_b74;
          if ((*piVar15 != 0) && (*(char *)((int)piVar15 + 0xd) != '\x02')) {
            iVar18 = piVar14[0x2b];
            if ((int)(*(int *)(iVar18 + 0x24) - *(int *)(iVar18 + 0x20) & 0xfffffffcU) < 0x2801) {
              local_b7c = 0.0;
            }
            else {
              local_b7c = *(float *)(*(int *)(iVar18 + 0x20) + 0x2800);
            }
            FUN_00423e70();
            if (*piVar15 == 1) {
              fStack_b9c = (float)piVar15[-8] * 65536.0;
              uVar40 = FUN_0068d946();
              uVar7 = (int)(float)uVar40 - (int)pfStack_bd0[4];
              uStack_b34 = CONCAT44((((int)((ulonglong)uVar40 >> 0x20) - (int)pfStack_bd0[5]) -
                                    (uint)((uint)(float)uVar40 < (uint)pfStack_bd0[4])) +
                                    (uint)(0xff9bffff < uVar7),uVar7 + 0x640000);
              uVar7 = piVar15[7] * 0x100 + 0x80;
              iStack_b24 = uVar7 * 0x10000 - (int)pfStack_bd0[2];
              fVar27 = (float)uStack_b34 * 1.5258789e-05;
              iStack_b20 = ((((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10) - (int)pfStack_bd0[3]) -
                           (uint)(uVar7 * 0x10000 < (uint)pfStack_bd0[2]);
              uVar7 = piVar15[6] * 0x100 + 0x80;
              fVar26 = (float)CONCAT44(iStack_b20,iStack_b24) * 1.5258789e-05;
              uStack_b1c = CONCAT44(((((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10) -
                                    (int)pfStack_bd0[1]) -
                                    (uint)(uVar7 * 0x10000 < (uint)*pfStack_bd0),
                                    uVar7 * 0x10000 - (int)*pfStack_bd0);
              fStack_414 = (float)uStack_b1c * 1.5258789e-05;
              fStack_a34 = (float)piStack_a54 * fVar26 + fStack_a64 * fStack_414 +
                           (float)piStack_a44 * fVar27 + fStack_a34;
              piStack_a30 = (int *)((float)piStack_a50 * fVar26 + fStack_a60 * fStack_414 +
                                    fStack_a40 * fVar27 + (float)piStack_a30);
              fStack_a2c = (float)puStack_a4c * fVar26 + (float)puStack_a5c * fStack_414 +
                           fStack_a3c * fVar27 + fStack_a2c;
              fVar26 = fStack_a48 * fVar26 + fStack_a58 * fStack_414;
            }
            else {
              local_b64 = (float)piVar15[-8] * 65536.0;
              uVar40 = FUN_0068d946();
              uVar7 = (int)(float)uVar40 - (int)pfStack_bd0[4];
              iStack_b2c = uVar7 + 0x640000;
              iStack_b28 = (((int)((ulonglong)uVar40 >> 0x20) - (int)pfStack_bd0[5]) -
                           (uint)((uint)(float)uVar40 < (uint)pfStack_bd0[4])) +
                           (uint)(0xff9bffff < uVar7);
              iStack_af4 = piVar15[-0xb] - (int)pfStack_bd0[2];
              iStack_af0 = (piVar15[-10] - (int)pfStack_bd0[3]) -
                           (uint)((uint)piVar15[-0xb] < (uint)pfStack_bd0[2]);
              fVar27 = (float)CONCAT44(iStack_b28,iStack_b2c) * 1.5258789e-05;
              fStack_b04 = (float)(piVar15[-0xd] - (int)*pfStack_bd0);
              iStack_b00 = (piVar15[-0xc] - (int)pfStack_bd0[1]) -
                           (uint)((uint)piVar15[-0xd] < (uint)*pfStack_bd0);
              fVar26 = (float)CONCAT44(iStack_af0,iStack_af4) * 1.5258789e-05;
              fStack_420 = (float)CONCAT44(iStack_b00,fStack_b04) * 1.5258789e-05;
              fStack_a34 = (float)piStack_a54 * fVar26 + fStack_420 * fStack_a64 +
                           (float)piStack_a44 * fVar27 + fStack_a34;
              piStack_a30 = (int *)((float)piStack_a50 * fVar26 + fStack_420 * fStack_a60 +
                                    fStack_a40 * fVar27 + (float)piStack_a30);
              fStack_a2c = (float)puStack_a4c * fVar26 + fStack_420 * (float)puStack_a5c +
                           fStack_a3c * fVar27 + fStack_a2c;
              fVar26 = fStack_a48 * fVar26 + fStack_420 * fStack_a58;
            }
            local_ba8 = piStack_a38;
            fStack_bcc = fVar26 + (float)piStack_a38 * fVar27 + fStack_a28;
            local_be4._0_4_ = (int *)((float)piVar14[0x20002e] * 0.02 * 0.017453292);
            dVar24 = (double)(float)(int *)local_be4;
            piStack_bf0 = piStack_a50;
            local_bec = puStack_a5c;
            puStack_be8 = puStack_a4c;
            local_bd8 = fStack_a58;
            local_bc8 = fStack_a48;
            local_bc4 = fStack_a40;
            local_bc0 = piStack_a44;
            local_bb8 = fStack_a3c;
            fStack_ba0 = fStack_a2c;
            local_b94 = piStack_a54;
            local_b90 = piStack_a30;
            fStack_b84 = fStack_a60;
            local_b80 = fStack_a64;
            local_b68 = fStack_a34;
            fStack_a28 = fStack_bcc;
            libm_sse2_cos_precise();
            uStack_b74._0_4_ = (float)dVar24;
            dVar24 = (double)(float)(int *)local_be4;
            libm_sse2_sin_precise();
            fVar26 = (float)dVar24;
            fStack_a64 = (float)local_b94 * fVar26 + local_b80 * (float)uStack_b74;
            piStack_a54 = (int *)((float)local_b94 * (float)uStack_b74 - fVar26 * local_b80);
            fStack_a60 = (float)piStack_bf0 * fVar26 + fStack_b84 * (float)uStack_b74;
            piStack_a50 = (int *)((float)piStack_bf0 * (float)uStack_b74 - fVar26 * fStack_b84);
            puStack_a5c = (uint *)((float)puStack_be8 * fVar26 +
                                  (float)local_bec * (float)uStack_b74);
            puStack_a4c = (uint *)((float)puStack_be8 * (float)uStack_b74 -
                                  fVar26 * (float)local_bec);
            fStack_a58 = local_bc8 * fVar26 + local_bd8 * (float)uStack_b74;
            fStack_a48 = local_bc8 * (float)uStack_b74 - fVar26 * local_bd8;
            fVar26 = 8.0 / param_7;
            if (2.0 <= fVar26) {
              if (10.0 < fVar26) {
                fVar26 = 10.0;
                goto LAB_005ff554;
              }
              if (fVar26 != 1.0) goto LAB_005ff554;
            }
            else {
              fVar26 = 2.0;
LAB_005ff554:
              fStack_a64 = fStack_a64 * fVar26;
              fStack_a60 = fVar26 * fStack_a60;
              puStack_a5c = (uint *)(fVar26 * (float)puStack_a5c);
              fStack_a58 = fVar26 * fStack_a58;
              piStack_a54 = (int *)(fVar26 * (float)piStack_a54);
              piStack_a50 = (int *)(fVar26 * (float)piStack_a50);
              puStack_a4c = (uint *)(fVar26 * (float)puStack_a4c);
              fStack_a48 = fVar26 * fStack_a48;
              local_bc0 = (int *)(fVar26 * (float)local_bc0);
              local_bc4 = fVar26 * local_bc4;
              local_ba8 = (int *)(fVar26 * (float)local_ba8);
              local_bb8 = fVar26 * local_bb8;
              piStack_a44 = local_bc0;
              fStack_a40 = local_bc4;
              fStack_a3c = local_bb8;
              piStack_a38 = local_ba8;
            }
            fVar26 = (float)-*(int *)((int)local_b7c + 0x44) * 0.5;
            fVar27 = (float)-*(int *)((int)local_b7c + 0x48) * 0.5;
            fStack_a34 = fStack_a64 * fVar26 + (float)piStack_a54 * fVar27 + (float)local_bc0 * 0.0
                         + local_b68;
            piStack_a30 = (int *)(fStack_a60 * fVar26 + (float)piStack_a50 * fVar27 +
                                  local_bc4 * 0.0 + (float)local_b90);
            fStack_a2c = (float)puStack_a5c * fVar26 + (float)puStack_a4c * fVar27 + local_bb8 * 0.0
                         + fStack_ba0;
            fStack_a28 = fStack_a58 * fVar26 + fStack_a48 * fVar27 + (float)local_ba8 * 0.0 +
                         fStack_bcc;
            piStack_bf0 = piStack_a50;
            puStack_be8 = puStack_a4c;
            local_bc8 = fStack_a48;
            FUN_004482a0(&fStack_a64,piVar14 + 0x11,auStack_464);
            uStack_5d0 = 0x3f800000;
            uStack_5cc = 0x3f800000;
            uStack_5c8 = 0x3f800000;
            uStack_5c4 = 0x3f800000;
            FUN_00448280(&uStack_5d0);
            FUN_004e6df0();
            lVar39 = CONCAT44(uStack_b74._4_4_,(float)uStack_b74);
            lVar36 = CONCAT44(local_be4._4_4_,(int *)local_be4);
          }
          piVar1 = local_bbc;
          uStack_b74._4_4_ = (float)((ulonglong)lVar39 >> 0x20);
          local_be4._4_4_ = (undefined4)((ulonglong)lVar36 >> 0x20);
          if (piVar15[-7] == 1) {
            uStack_b74._0_4_ = (float)piVar14[0x2b];
            iVar18 = *(int *)((int)(float)uStack_b74 + 0xb8);
            fStack_52c = *(float *)(iVar18 + 0x18);
            fStack_534 = *(float *)(iVar18 + 0x10);
            iStack_530 = *(int *)(iVar18 + 0x14);
            iStack_528 = *(int *)(iVar18 + 0x1c);
            fStack_bcc = (float)piVar15[-0xd];
            fStack_ba0 = (float)piVar15[-0xc];
            iStack_6a4 = (int)fStack_534 - (int)fStack_bcc;
            iStack_6a0 = (iStack_530 - (int)fStack_ba0) -
                         (uint)((uint)fStack_534 < (uint)fStack_bcc);
            fVar26 = (float)piVar15[-0xb];
            fStack_b88 = (float)piVar15[-10];
            iStack_69c = (int)fStack_52c - (int)fVar26;
            iStack_698 = (iStack_528 - (int)fStack_b88) - (uint)((uint)fStack_52c < (uint)fVar26);
            fStack_6d4 = (float)CONCAT44(iStack_6a0,iStack_6a4) * 1.5258789e-05;
            local_be4._0_4_ = (int *)(float)CONCAT44(iStack_698,iStack_69c);
            fStack_6d0 = (float)(int *)local_be4 * 1.5258789e-05;
            piVar14 = piVar1;
            lVar36 = CONCAT44(local_be4._4_4_,(int *)local_be4);
            lVar39 = CONCAT44(uStack_b74._4_4_,(float)uStack_b74);
            if (262144.0 < fStack_6d0 * fStack_6d0 + fStack_6d4 * fStack_6d4) {
              if ((int)(*(int *)((int)(float)uStack_b74 + 0x24) -
                        *(int *)((int)(float)uStack_b74 + 0x20) & 0xfffffffcU) < 0x2805) {
                local_bc4 = 0.0;
              }
              else {
                local_bc4 = *(float *)(*(int *)((int)(float)uStack_b74 + 0x20) + 0x2804);
              }
              FUN_00423e70();
              local_b8c = (float)piVar15[-8] * 65536.0;
              uVar40 = FUN_0068d946();
              uVar7 = (int)(float)uVar40 - (int)pfStack_bd0[4];
              uStack_b4c = (double)CONCAT44((((int)((ulonglong)uVar40 >> 0x20) - (int)pfStack_bd0[5]
                                             ) - (uint)((uint)(float)uVar40 < (uint)pfStack_bd0[4]))
                                            + (uint)(0xff9bffff < uVar7),uVar7 + 0x640000);
              uStack_b5c = (double)CONCAT44(((int)fStack_b88 - (int)pfStack_bd0[3]) -
                                            (uint)((uint)fVar26 < (uint)pfStack_bd0[2]),
                                            (int)fVar26 - (int)pfStack_bd0[2]);
              fVar31 = (float)(longlong)uStack_b4c * 1.5258789e-05;
              fVar28 = (float)(longlong)uStack_b5c * 1.5258789e-05;
              local_bb4 = (double)CONCAT44(((int)fStack_ba0 - (int)pfStack_bd0[1]) -
                                           (uint)((uint)fStack_bcc < (uint)*pfStack_bd0),
                                           (int)fStack_bcc - (int)*pfStack_bd0);
              fVar32 = fVar28 * fStack_9d4;
              fVar33 = fVar28 * fStack_9d0;
              afStack_408[0] = (float)(longlong)local_bb4 * 1.5258789e-05;
              fVar35 = fVar28 * fStack_9cc;
              fVar26 = fStack_9e4 * afStack_408[0];
              fVar27 = (float)puStack_9c4 * fVar31;
              fVar29 = fStack_9e0 * afStack_408[0];
              fVar34 = fStack_9c0 * fVar31;
              fVar23 = fStack_9dc * afStack_408[0];
              fVar30 = (float)piStack_9bc * fVar31;
              fVar25 = 8.0 / param_7;
              local_be4._0_4_ =
                   (int *)(fStack_9d8 * afStack_408[0] + fVar28 * fStack_9c8 + fStack_9b8 * fVar31 +
                          fStack_9a8);
              if (2.0 <= fVar25) {
                if (10.0 < fVar25) {
                  fVar25 = 10.0;
                  goto LAB_005ffb3e;
                }
                if (fVar25 != 1.0) goto LAB_005ffb3e;
              }
              else {
                fVar25 = 2.0;
LAB_005ffb3e:
                fStack_9e4 = fVar25 * fStack_9e4;
                fStack_9e0 = fVar25 * fStack_9e0;
                fStack_9dc = fVar25 * fStack_9dc;
                fStack_9d8 = fVar25 * fStack_9d8;
                fStack_9d4 = fVar25 * fStack_9d4;
                fStack_9d0 = fVar25 * fStack_9d0;
                fStack_9cc = fVar25 * fStack_9cc;
                fStack_9c8 = fVar25 * fStack_9c8;
                puStack_9c4 = (uint *)(fVar25 * (float)puStack_9c4);
                fStack_9c0 = fVar25 * fStack_9c0;
                piStack_9bc = (int *)(fVar25 * (float)piStack_9bc);
                fStack_9b8 = fVar25 * fStack_9b8;
              }
              fVar28 = (float)-*(int *)((int)local_bc4 + 0x48) * 0.5;
              fVar25 = (float)-*(int *)((int)local_bc4 + 0x44) * 0.5;
              fStack_9b4 = fVar28 * fStack_9d4 + fVar25 * fStack_9e4 + (float)puStack_9c4 * 0.0 +
                           fVar32 + fVar26 + fVar27 + fStack_9b4;
              piStack_9b0 = (int *)(fVar28 * fStack_9d0 + fVar25 * fStack_9e0 + fStack_9c0 * 0.0 +
                                   fVar33 + fVar29 + fVar34 + (float)piStack_9b0);
              fStack_9ac = fVar28 * fStack_9cc + fVar25 * fStack_9dc + (float)piStack_9bc * 0.0 +
                           fVar35 + fVar23 + fVar30 + fStack_9ac;
              fStack_9a8 = fVar28 * fStack_9c8 + fVar25 * fStack_9d8 + fStack_9b8 * 0.0 +
                           (float)(int *)local_be4;
              local_bec = puStack_9c4;
              local_bd8 = fStack_9c0;
              fStack_bcc = fStack_9b8;
              local_bc0 = piStack_9bc;
              FUN_004482a0(&fStack_9e4,piVar1 + 0x11,auStack_464);
              uStack_5b0 = 0x3f800000;
              uStack_5ac = 0x3f800000;
              uStack_5a8 = 0x3f800000;
              uStack_5a4 = 0x3f800000;
              FUN_00448280(&uStack_5b0);
              FUN_004e6df0();
              lVar36 = CONCAT44(local_be4._4_4_,(int *)local_be4);
              lVar39 = CONCAT44(uStack_b74._4_4_,(float)uStack_b74);
            }
          }
          uStack_b74 = lVar39;
          local_be4 = lVar36;
          piVar15 = piVar15 + 0x1a;
          local_bd4 = (float)((int)local_bd4 + -1);
        } while (local_bd4 != 0.0);
        local_bdc = (float *)((int)local_bdc + -1);
        local_bd4 = 0.0;
      } while (local_bdc != (float *)0x0);
    }
  }
  (**(code **)(*(int *)piVar14[0x29] + 0xe4))((int *)piVar14[0x29],0xae,0);
  fVar26 = local_bc8;
  pfVar10 = (float *)((int)local_bc8 + 0x44);
  puVar6 = auStack_470;
  puVar20 = puStack_c0c;
  for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
    *puVar20 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar20 = puVar20 + 1;
  }
  pfVar12 = afStack_948;
  pfVar13 = pfVar10;
  for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
    *pfVar13 = *pfVar12;
    pfVar12 = pfVar12 + 1;
    pfVar13 = pfVar13 + 1;
  }
  *pfVar10 = *pfVar10 * 0.125;
  *(float *)((int)local_bc8 + 0x48) = *(float *)((int)local_bc8 + 0x48) * 0.125;
  *(float *)((int)local_bc8 + 0x4c) = *(float *)((int)local_bc8 + 0x4c) * 0.125;
  *(float *)((int)local_bc8 + 0x50) = *(float *)((int)local_bc8 + 0x50) * 0.125;
  *(float *)((int)local_bc8 + 0x54) = *(float *)((int)local_bc8 + 0x54) * 0.125;
  *(float *)((int)local_bc8 + 0x58) = *(float *)((int)local_bc8 + 0x58) * 0.125;
  *(float *)((int)local_bc8 + 0x5c) = *(float *)((int)local_bc8 + 0x5c) * 0.125;
  *(float *)((int)local_bc8 + 0x60) = *(float *)((int)local_bc8 + 0x60) * 0.125;
  *(float *)((int)local_bc8 + 100) = *(float *)((int)local_bc8 + 100) * 0.125;
  *(float *)((int)local_bc8 + 0x68) = *(float *)((int)local_bc8 + 0x68) * 0.125;
  *(float *)((int)local_bc8 + 0x6c) = *(float *)((int)local_bc8 + 0x6c) * 0.125;
  *(float *)((int)local_bc8 + 0x70) = *(float *)((int)local_bc8 + 0x70) * 0.125;
  FUN_00447d10();
  FUN_00448100(0x4e6e6b28);
  uStack_b4c._0_4_ = 0;
  uStack_b4c = 0.0;
  uStack_b44 = 0;
  uStack_2c = 0;
  piVar14 = *(int **)(*(int *)((int)fVar26 + 0xac) + 4);
  piVar15 = (int *)*piVar14;
  local_bb4 = (double)CONCAT44(piVar15,(float)local_bb4);
  uVar40 = uStack_b14;
  if (piVar15 != piVar14) {
    puStack_c0c = (uint *)0x1;
    do {
      uStack_bfc = *(int **)((int)piVar15 + 0x18);
      lVar36 = uStack_b74;
      if ((uStack_bfc != (int *)0x0) &&
         ((((char)uStack_bfc[0x18] == '\0' ||
           (((char)uStack_bfc[0x18] == '\x01' &&
            ((*(ushort *)((int)uStack_bfc + 0x7e) & 0x2000) != 0)))) ||
          ((1.6 <= param_7 &&
           (((((cVar2 = (char)uStack_bfc[0x50], cVar2 == -0x7c || (cVar2 == -0x80)) ||
              (cVar2 == -0x7e)) || ((cVar2 == -0x7f || (cVar2 == -0x7d)))) ||
            ((cVar2 == -0x7b || ((cVar2 == -0x7a || (cVar2 == -0x79)))))))))))) {
        puVar6 = param_9;
        if ((int)param_9 < 1) {
          puVar6 = puStack_c0c;
        }
        piStack_bf0 = (int *)*local_bdc;
        uStack_b74._4_4_ = local_bdc[1];
        local_bc0 = (int *)((int)piStack_bf0 - uStack_bfc[4]);
        local_bbc = (int *)(((int)uStack_b74._4_4_ - uStack_bfc[5]) -
                           (uint)(piStack_bf0 < (int *)uStack_bfc[4]));
        local_ba8 = (int *)(float)CONCAT44(local_bbc,local_bc0);
        fVar26 = local_bc8;
        lVar36 = CONCAT44(uStack_b74._4_4_,(float)uStack_b74);
        if (ABS((float)local_ba8 * 1.5258789e-05) <= (float)((int)puVar6 << 8)) {
          local_b80 = local_bdc[2];
          fStack_b98 = local_bdc[3];
          local_b68 = (float)((int)local_b80 - uStack_bfc[6]);
          local_b64 = (float)(((int)fStack_b98 - uStack_bfc[7]) -
                             (uint)((uint)local_b80 < (uint)uStack_bfc[6]));
          local_ba8 = (int *)(float)CONCAT44(local_b64,local_b68);
          lVar36 = CONCAT44(uStack_b74._4_4_,(float)uStack_b74);
          if (ABS((float)local_ba8 * 1.5258789e-05) <= (float)((int)puVar6 << 8)) {
            piStack_960 = (int *)*(undefined8 *)(uStack_bfc + 4);
            fStack_95c = (float)((ulonglong)*(undefined8 *)(uStack_bfc + 4) >> 0x20);
            bVar22 = piStack_960 < piStack_bf0;
            piStack_960 = (int *)((int)piStack_960 - (int)piStack_bf0);
            fStack_95c = (float)(((int)fStack_95c - (int)uStack_b74._4_4_) - (uint)bVar22);
            fStack_958 = (float)*(undefined8 *)(uStack_bfc + 6);
            iStack_954 = (int)((ulonglong)*(undefined8 *)(uStack_bfc + 6) >> 0x20);
            bVar22 = (uint)fStack_958 < (uint)local_b80;
            fStack_958 = (float)((int)fStack_958 - (int)local_b80);
            iStack_954 = (iStack_954 - (int)fStack_b98) - (uint)bVar22;
            uStack_950._0_4_ = (float)*(undefined8 *)(uStack_bfc + 8);
            uStack_950._4_4_ = (int)((ulonglong)*(undefined8 *)(uStack_bfc + 8) >> 0x20);
            uStack_950 = CONCAT44((uStack_950._4_4_ - (int)local_bdc[5]) -
                                  (uint)((uint)(float)uStack_950 < (uint)local_bdc[4]),
                                  (int)(float)uStack_950 - (int)local_bdc[4]);
            uStack_774._0_4_ = (float)CONCAT44(fStack_95c,piStack_960) * 1.5258789e-05;
            uStack_774._4_4_ = (float)CONCAT44(iStack_954,fStack_958) * 1.5258789e-05;
            local_ba8 = (int *)(float)uStack_950;
            fStack_76c = (float)local_ba8 * 1.5258789e-05;
            fStack_75c = *(float *)((int)local_bc8 + 0x54) * uStack_774._4_4_ +
                         (float)uStack_774 * *(float *)((int)local_bc8 + 0x44) +
                         *(float *)((int)local_bc8 + 100) * fStack_76c +
                         *(float *)((int)local_bc8 + 0x74);
            fStack_758 = *(float *)((int)local_bc8 + 0x48) * (float)uStack_774 +
                         *(float *)((int)local_bc8 + 0x58) * uStack_774._4_4_ +
                         *(float *)((int)local_bc8 + 0x68) * fStack_76c +
                         *(float *)((int)local_bc8 + 0x78);
            fStack_754 = *(float *)((int)local_bc8 + 0x4c) * (float)uStack_774 +
                         *(float *)((int)local_bc8 + 0x5c) * uStack_774._4_4_ +
                         *(float *)((int)local_bc8 + 0x6c) * fStack_76c +
                         *(float *)((int)local_bc8 + 0x7c);
            fVar27 = 1.0 / (*(float *)((int)local_bc8 + 0x50) * (float)uStack_774 +
                            *(float *)((int)local_bc8 + 0x60) * uStack_774._4_4_ +
                            *(float *)((int)local_bc8 + 0x70) * fStack_76c +
                           *(float *)((int)local_bc8 + 0x80));
            local_8ec = fVar27 * fStack_754;
            fStack_b04 = -local_8ec;
            local_8f4 = CONCAT44(fVar27 * fStack_758,fVar27 * fStack_75c);
            piStack_b08 = uStack_bfc;
            FUN_00601f00(&piStack_b08);
            lVar36 = CONCAT44(uStack_b74._4_4_,(float)uStack_b74);
          }
        }
      }
      uStack_b74 = lVar36;
      FUN_005c3ea0();
      piVar15 = (int *)local_bb4._4_4_;
    } while (local_bb4._4_4_ != (float)*(int *)(*(int *)((int)fVar26 + 0xac) + 4));
    uVar40 = uStack_b14;
  }
  uStack_b14._4_4_ = (undefined4)((ulonglong)uVar40 >> 0x20);
  uStack_b14._0_4_ = (uint)uVar40;
  uStack_b14._0_4_ = (uint)uStack_b14 & 0xffffff00;
  FUN_005fa9e0((int)uStack_b4c,uStack_b4c._4_4_,uStack_b4c._4_4_ - (int)uStack_b4c >> 3,
               (uint)uStack_b14);
  iVar18 = *(int *)(*(int *)((int)fVar26 + 0xac) + 0xb8);
  piStack_bf0 = *(int **)(iVar18 + 0x10);
  uStack_b74._4_4_ = *(float *)(iVar18 + 0x14);
  local_bc0 = *(int **)(iVar18 + 0x18);
  fStack_b98 = *(float *)(iVar18 + 0x1c);
  puStack_c0c = (uint *)((float)CONCAT44((int)uStack_b74._4_4_ + -0x80,piStack_bf0) * 1.5258789e-05)
  ;
  local_bbc = (int *)((int)fStack_b98 + -0x80);
  piStack_c00 = (int *)0x0;
  local_ba8 = (int *)((float)CONCAT44(local_bbc,local_bc0) * 1.5258789e-05);
  fVar27 = (float)local_ba8 * (float)local_ba8 + (float)puStack_c0c * (float)puStack_c0c + 0.0;
  local_b80 = (float)local_bc0;
  fStack_83c = (float)local_ba8;
  if (0.0 < fVar27) {
    dVar24 = (double)fVar27;
    fStack_840 = (float)puStack_c0c;
    libm_sse2_sqrt_precise();
    puStack_c0c = (uint *)((float)puStack_c0c * (1.0 / (float)dVar24) * 300.0);
    fStack_83c = (float)local_ba8 * (1.0 / (float)dVar24) * 300.0;
  }
  fStack_840 = (float)puStack_c0c;
  puStack_c0c = (uint *)((float)puStack_c0c * 65536.0);
  uVar40 = FUN_0068d946();
  pfVar13 = local_bdc;
  uVar7 = (int)(float)uVar40 - (int)*local_bdc;
  local_bc0 = (int *)(uVar7 + (int)piStack_bf0);
  local_bbc = (int *)((((int)((ulonglong)uVar40 >> 0x20) - (int)local_bdc[1]) -
                      (uint)((uint)(float)uVar40 < (uint)*local_bdc)) + (int)uStack_b74._4_4_ +
                     (uint)CARRY4(uVar7,(uint)piStack_bf0));
  fStack_54c = (float)CONCAT44(local_bbc,local_bc0) * 1.5258789e-05;
  puStack_c0c = (uint *)(fStack_83c * 65536.0);
  uVar40 = FUN_0068d946();
  pfVar12 = pfVar13 + 2;
  uVar7 = (int)(float)uVar40 - (int)*pfVar12;
  local_bc0 = (int *)(uVar7 + (int)local_b80);
  local_bbc = (int *)((((int)((ulonglong)uVar40 >> 0x20) - (int)pfVar13[3]) -
                      (uint)((uint)(float)uVar40 < (uint)*pfVar12)) + (int)fStack_b98 +
                     (uint)CARRY4(uVar7,(uint)local_b80));
  puStack_c0c = (uint *)(float)CONCAT44(local_bbc,local_bc0);
  *(float *)((int)fVar26 + 0x84) = fStack_54c;
  fStack_548 = (float)puStack_c0c * 1.5258789e-05;
  *(undefined4 *)((int)fVar26 + 0x8c) = 0;
  *(float *)((int)fVar26 + 0x88) = fStack_548;
  uStack_59c = 0x3ecccccd;
  uStack_598 = 0x3ecccccd;
  dVar24 = (double)((float)piStack_c00 + 0.25 + 1.0);
  uStack_594 = 0x3ecccccd;
  uStack_590 = 0x3f800000;
  libm_sse2_sqrt_precise();
  local_63c = 1.0 / (float)dVar24;
  local_644 = local_63c * 0.0;
  local_640 = local_63c * 0.5;
  uStack_57c = 0x3e4ccccd;
  uStack_578 = 0x3e99999a;
  uStack_574 = 0x3ecccccd;
  uStack_570 = 0x3f800000;
  local_56c[4] = 0x3f800000;
  local_56c[5] = 0x3f800000;
  local_56c[6] = 0x3f800000;
  local_56c[7] = 0x3f800000;
  FUN_00448170(local_56c + 4,&uStack_57c,&local_644,&uStack_59c);
  fStack_b84 = (float)(int)uStack_b4c;
  if ((int)uStack_b4c != uStack_b4c._4_4_) {
    local_ba8 = (int *)(5.0 / param_7);
    local_b90 = (int *)(4.0 / param_7);
    do {
      FUN_00423e70();
      plVar11 = (longlong *)FUN_0042c7a0(auStack_230,local_bdc);
      fStack_744 = (float)*plVar11 * 1.5258789e-05;
      fStack_740 = (float)plVar11[1] * 1.5258789e-05;
      puStack_c0c = (uint *)(float)plVar11[2];
      fStack_73c = (float)puStack_c0c * 1.5258789e-05;
      fStack_980 = fStack_9a0 * fStack_740 + (float)piStack_9b0 * fStack_744 +
                   fStack_990 * fStack_73c + fStack_980;
      fStack_97c = fStack_99c * fStack_740 + fStack_9ac * fStack_744 + fStack_98c * fStack_73c +
                   fStack_97c;
      fStack_978 = fStack_998 * fStack_740 + fStack_9a8 * fStack_744 + fStack_988 * fStack_73c +
                   fStack_978;
      fStack_974 = fStack_994 * fStack_740 + fStack_9a4 * fStack_744 + fStack_984 * fStack_73c +
                   fStack_974;
      if ((float)local_ba8 != 1.0) {
        piStack_9b0 = (int *)((float)local_ba8 * (float)piStack_9b0);
        fStack_9ac = (float)local_ba8 * fStack_9ac;
        fStack_9a8 = (float)local_ba8 * fStack_9a8;
        fStack_9a4 = (float)local_ba8 * fStack_9a4;
        fStack_9a0 = (float)local_ba8 * fStack_9a0;
        fStack_99c = (float)local_ba8 * fStack_99c;
        fStack_998 = (float)local_ba8 * fStack_998;
        fStack_994 = (float)local_ba8 * fStack_994;
        fStack_990 = (float)local_ba8 * fStack_990;
        fStack_98c = (float)local_ba8 * fStack_98c;
        fStack_988 = (float)local_ba8 * fStack_988;
        fStack_984 = (float)local_ba8 * fStack_984;
      }
      local_56c[0] = 0;
      local_56c[1] = 0;
      local_56c[2] = 0;
      local_56c[3] = 0x3f800000;
      uStack_bfc = piStack_9b0;
      FUN_00448280(local_56c);
      piVar14 = *(int **)(*(int *)((int)fVar26 + 0xa8) + 0x1c);
      (**(code **)(*piVar14 + 0xe4))(piVar14,0xe,0);
      local_b94 = local_b90;
      iVar18 = *local_b90;
      if (*(char *)(iVar18 + 0x60) == '\x01') {
        iVar19 = *(int *)((int)fVar26 + 0xac);
        if ((0x2808 < (int)(*(int *)(iVar19 + 0x24) - *(int *)(iVar19 + 0x20) & 0xfffffffcU)) &&
           (uStack_bfc = *(int **)(*(int *)(iVar19 + 0x20) + 0x2808), uStack_bfc != (int *)0x0)) {
          ppiVar21 = &piStack_9bc;
          pfVar12 = local_7dc;
          for (iVar19 = 0x10; iVar19 != 0; iVar19 = iVar19 + -1) {
            *pfVar12 = (float)*ppiVar21;
            ppiVar21 = ppiVar21 + 1;
            pfVar12 = pfVar12 + 1;
          }
          fVar26 = *(float *)(iVar18 + 0x137c) * 0.017453292;
          dVar24 = (double)fVar26;
          libm_sse2_cos_precise();
          local_bec = (uint *)(float)dVar24;
          dVar24 = (double)fVar26;
          libm_sse2_sin_precise();
          fVar26 = local_bd4;
          fVar29 = (float)dVar24;
          local_b7c = (float)local_bec * uStack_c08 + fVar29 * fStack_9ac;
          local_7cc = (float)local_bec * local_7cc - fVar29 * uStack_c08;
          local_b8c = fVar29 * local_7c8 + (float)local_bec * local_7dc[1];
          local_7c8 = (float)local_bec * local_7c8 - local_7dc[1] * fVar29;
          local_ba4 = fVar29 * local_7c4 + (float)local_bec * local_7dc[2];
          local_7c4 = (float)local_bec * local_7c4 - local_7dc[2] * fVar29;
          fVar27 = local_7dc[3] * fVar29;
          local_7dc[3] = fVar29 * (float)local_7c0 + (float)local_bec * local_7dc[3];
          local_bec = (uint *)((float)local_bec * (float)local_7c0 - fVar27);
          fVar34 = (float)-uStack_bfc[0x13] * 0.5;
          fVar29 = (float)-uStack_bfc[0x12] * 0.5;
          fVar27 = (float)-uStack_bfc[0x11] * 0.5;
          fStack_7ac = fVar29 * local_7cc + fVar27 * local_b7c + fVar34 * local_7bc + fStack_7ac;
          fStack_7a8 = fVar29 * local_7c8 + fVar27 * local_b8c + fVar34 * local_7b8 + fStack_7a8;
          fStack_7a4 = fVar29 * local_7c4 + fVar27 * local_ba4 + fVar34 * local_7b4 + fStack_7a4;
          fStack_7a0 = fVar29 * (float)local_bec + fVar27 * local_7dc[3] + fVar34 * fStack_7b0 +
                       fStack_7a0;
          local_7dc[0] = local_b7c;
          local_7dc[1] = local_b8c;
          local_7dc[2] = local_ba4;
          local_7c0 = local_bec;
          FUN_004482a0(local_7dc,piStack_c00,&iStack_4fc);
          goto LAB_0060150b;
        }
      }
      else if (*(char *)(iVar18 + 0x60) == '\x03') {
        cVar2 = *(char *)(iVar18 + 0x140);
        piStack_c10 = (int *)0x0;
        if (cVar2 == -0x7d) {
          iVar18 = *(int *)((int)fVar26 + 0xac);
          if ((int)(*(int *)(iVar18 + 0x24) - *(int *)(iVar18 + 0x20) & 0xfffffffcU) < 0x265d) {
            piStack_c10 = (int *)0x0;
          }
          else {
            piStack_c10 = *(int **)(*(int *)(iVar18 + 0x20) + 0x265c);
          }
        }
        if (cVar2 == -0x7c) {
          iVar18 = *(int *)((int)fVar26 + 0xac);
          if ((int)(*(int *)(iVar18 + 0x24) - *(int *)(iVar18 + 0x20) & 0xfffffffcU) < 0x264d) {
            piStack_c10 = (int *)0x0;
          }
          else {
            piStack_c10 = *(int **)(*(int *)(iVar18 + 0x20) + 0x264c);
          }
        }
        if (cVar2 == -0x80) {
          iVar18 = *(int *)((int)fVar26 + 0xac);
          if ((int)(*(int *)(iVar18 + 0x24) - *(int *)(iVar18 + 0x20) & 0xfffffffcU) < 0x2651) {
            piStack_c10 = (int *)0x0;
          }
          else {
            piStack_c10 = *(int **)(*(int *)(iVar18 + 0x20) + 0x2650);
          }
        }
        if (cVar2 == -0x7e) {
          iVar18 = *(int *)((int)fVar26 + 0xac);
          if ((int)(*(int *)(iVar18 + 0x24) - *(int *)(iVar18 + 0x20) & 0xfffffffcU) < 0x2659) {
            piStack_c10 = (int *)0x0;
          }
          else {
            piStack_c10 = *(int **)(*(int *)(iVar18 + 0x20) + 0x2658);
          }
        }
        if (cVar2 == -0x7f) {
          iVar18 = *(int *)((int)fVar26 + 0xac);
          if ((int)(*(int *)(iVar18 + 0x24) - *(int *)(iVar18 + 0x20) & 0xfffffffcU) < 0x2655) {
            piStack_c10 = (int *)0x0;
          }
          else {
            piStack_c10 = *(int **)(*(int *)(iVar18 + 0x20) + 0x2654);
          }
        }
        if (cVar2 == -0x7b) {
          iVar18 = *(int *)((int)fVar26 + 0xac);
          if ((int)(*(int *)(iVar18 + 0x24) - *(int *)(iVar18 + 0x20) & 0xfffffffcU) < 0x2661) {
            piStack_c10 = (int *)0x0;
          }
          else {
            piStack_c10 = *(int **)(*(int *)(iVar18 + 0x20) + 0x2660);
          }
        }
        if (cVar2 == -0x7a) {
          iVar18 = *(int *)((int)fVar26 + 0xac);
          if ((int)(*(int *)(iVar18 + 0x24) - *(int *)(iVar18 + 0x20) & 0xfffffffcU) < 0x2665) {
            piStack_c10 = (int *)0x0;
          }
          else {
            piStack_c10 = *(int **)(*(int *)(iVar18 + 0x20) + 0x2664);
          }
        }
        if (cVar2 == -0x79) {
          iVar18 = *(int *)((int)fVar26 + 0xac);
          if ((int)(*(int *)(iVar18 + 0x24) - *(int *)(iVar18 + 0x20) & 0xfffffffcU) < 0x2669)
          goto LAB_00601510;
          piStack_c10 = *(int **)(*(int *)(iVar18 + 0x20) + 0x2668);
        }
        if (piStack_c10 != (int *)0x0) {
          ppiVar21 = &piStack_9bc;
          pfVar10 = afStack_8b4;
          for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
            *pfVar10 = (float)*ppiVar21;
            ppiVar21 = ppiVar21 + 1;
            pfVar10 = pfVar10 + 1;
          }
          local_b7c = afStack_8b4[1] * 0.5;
          local_b8c = afStack_8b4[2] * 0.5;
          uStack_c08 = uStack_c08 * 0.5;
          puStack_c0c = (uint *)(afStack_8b4[3] * 0.5);
          piStack_c04 = (int *)(fStack_8a4 * 0.5);
          piStack_bf0 = (int *)((float)piStack_8a0 * 0.5);
          local_ba4 = fStack_89c * 0.5;
          fStack_ba0 = fStack_898 * 0.5;
          local_bac = fStack_894 * 0.5;
          fStack_b98 = fStack_890 * 0.5;
          fStack_88c = fStack_88c * 0.5;
          fStack_888 = fStack_888 * 0.5;
          fVar26 = -*(float *)((int)local_b68 + 8) * 0.017453292;
          dVar24 = (double)fVar26;
          fStack_894 = local_bac;
          fStack_890 = fStack_b98;
          libm_sse2_cos_precise();
          uStack_bfc = (int *)(float)dVar24;
          dVar24 = (double)fVar26;
          libm_sse2_sin_precise();
          fVar27 = (float)dVar24;
          afStack_8b4[0] = (float)piStack_c04 * fVar27;
          piStack_c04 = (int *)((float)piStack_c04 * (float)uStack_bfc - uStack_c08 * fVar27);
          afStack_8b4[0] = uStack_c08 * (float)uStack_bfc + afStack_8b4[0];
          afStack_8b4[1] = local_b7c * (float)uStack_bfc + (float)piStack_bf0 * fVar27;
          piStack_bf0 = (int *)((float)piStack_bf0 * (float)uStack_bfc - local_b7c * fVar27);
          fVar26 = local_b8c * (float)uStack_bfc + local_ba4 * fVar27;
          fStack_89c = local_ba4 * (float)uStack_bfc - local_b8c * fVar27;
          afStack_8b4[3] = (float)puStack_c0c * (float)uStack_bfc + fStack_ba0 * fVar27;
          pfVar10 = (float *)((float)-piStack_c10[0x11] * 0.5);
          local_be4._0_4_ = (int *)((float)-piStack_c10[0x12] * 0.5);
          local_bb8 = (float)-piStack_c10[0x13] * 0.5;
          fStack_898 = fStack_ba0 * (float)uStack_bfc - (float)puStack_c0c * fVar27;
          fStack_884 = afStack_8b4[0] * (float)pfVar10 +
                       (float)piStack_c04 * (float)(int *)local_be4 + local_bac * local_bb8 +
                       fStack_884;
          fStack_880 = afStack_8b4[1] * (float)pfVar10 +
                       (float)piStack_bf0 * (float)(int *)local_be4 + fStack_b98 * local_bb8 +
                       fStack_880;
          afStack_8b4[2] = fVar26;
          fStack_8a4 = (float)piStack_c04;
          piStack_8a0 = piStack_bf0;
          pfVar12 = (float *)FUN_004128d0(2,3);
          pfVar13 = (float *)FUN_004128d0(2,1);
          fVar26 = *pfVar13 * (float)(int *)local_be4 + fVar26 * (float)pfVar10;
          pfVar13 = (float *)FUN_004128d0(2,2);
          *pfVar12 = fVar26 + *pfVar13 * local_bb8 + *pfVar12;
          pfVar12 = (float *)FUN_004128d0(3,3);
          pfVar13 = (float *)FUN_004128d0(3,0);
          piStack_c04 = (int *)(*pfVar13 * (float)pfVar10);
          pfVar13 = (float *)FUN_004128d0(3,1);
          piStack_c04 = (int *)((float)piStack_c04 + *pfVar13 * (float)(int *)local_be4);
          pfVar13 = (float *)FUN_004128d0(3,2);
          fVar26 = local_bd4;
          *pfVar12 = (float)piStack_c04 + *pfVar13 * local_bb8 + *pfVar12;
          FUN_004482a0(afStack_8b4,piStack_c00,&iStack_4fc);
LAB_0060150b:
          FUN_004e6df0();
        }
      }
      else {
        piStack_c04 = (int *)FUN_0042c6d0();
        iVar18 = *piStack_c04;
        uStack_bfc = (int *)(*(int *)((int)fVar26 + 0xac) + 0x1c);
        iVar19 = FUN_004120c0((int)*(short *)(iVar18 + 0x8c));
        if (iVar19 != 0) {
          ppiVar21 = &piStack_9bc;
          pfVar12 = afStack_3c4;
          for (iVar19 = 0x10; iVar19 != 0; iVar19 = iVar19 + -1) {
            *pfVar12 = (float)*ppiVar21;
            ppiVar21 = ppiVar21 + 1;
            pfVar12 = pfVar12 + 1;
          }
          puVar16 = (undefined4 *)FUN_00428970(2);
          FUN_00424610(*puVar16);
          iVar19 = (int)*(short *)(iVar18 + 0x8c);
          FUN_004120c0(iVar19);
          iVar18 = FUN_0047b5f0();
          fVar26 = (float)-iVar18 * 0.5;
          FUN_004120c0(iVar19);
          iVar18 = FUN_00424820(fVar26);
          fVar27 = (float)-iVar18 * 0.5;
          FUN_004120c0(iVar19);
          iVar18 = FUN_00424810(fVar27);
          FUN_00424a60((float)-iVar18 * 0.5,fVar27,fVar26);
          fVar26 = local_bd4;
          FUN_004482a0(afStack_3c4,piStack_c00,&iStack_4fc);
          FUN_004120c0((int)*(short *)(*piStack_c04 + 0x8c));
          FUN_004e6df0();
        }
        iVar18 = *piStack_c04;
        uStack_bfc = (int *)(*(int *)((int)fVar26 + 0xac) + 0x1c);
        iVar19 = FUN_004120c0((int)*(short *)(iVar18 + 0x8e));
        if (iVar19 != 0) {
          ppiVar21 = &piStack_9bc;
          pfVar12 = afStack_374;
          for (iVar19 = 0x10; iVar19 != 0; iVar19 = iVar19 + -1) {
            *pfVar12 = (float)*ppiVar21;
            ppiVar21 = ppiVar21 + 1;
            pfVar12 = pfVar12 + 1;
          }
          puVar16 = (undefined4 *)FUN_00428970(2);
          FUN_00424610(*puVar16);
          iVar19 = (int)*(short *)(iVar18 + 0x8e);
          FUN_004120c0(iVar19);
          iVar18 = FUN_0047b5f0();
          fVar26 = (float)-iVar18 * 0.5;
          FUN_004120c0(iVar19);
          iVar18 = FUN_00424820(fVar26);
          fVar27 = (float)-iVar18 * 0.5;
          FUN_004120c0(iVar19);
          iVar18 = FUN_00424810(fVar27);
          FUN_00424a60((float)-iVar18 * 0.5,fVar27,fVar26);
          fVar26 = local_bd4;
          FUN_004482a0(afStack_374,piStack_c00,&iStack_4fc);
          FUN_004120c0((int)*(short *)(*piStack_c04 + 0x8e));
          goto LAB_0060150b;
        }
      }
LAB_00601510:
      FUN_00423e70();
      piVar14 = (int *)FUN_0042c6d0();
      piStack_bf0 = piVar14;
      uVar4 = FUN_0042c7a0(auStack_224,puStack_be8);
      FUN_0042c4a0(uVar4);
      FUN_00424990(&uStack_4a0);
      FUN_00424730(fStack_b9c,fStack_b9c,fStack_b9c);
      piVar15 = (int *)FUN_00434b70();
      (**(code **)(*piVar15 + 0xe4))(piVar15,0xe,1);
      iVar18 = *piVar14;
      if (*(char *)(iVar18 + 0x60) == '\x01') {
        puStack_c0c = (uint *)FUN_004120c0(0xa02);
        if (puStack_c0c != (uint *)0x0) {
          ppiVar21 = &piStack_9b0;
          puVar16 = auStack_318;
          for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
            *puVar16 = *ppiVar21;
            ppiVar21 = ppiVar21 + 1;
            puVar16 = puVar16 + 1;
          }
          puVar16 = (undefined4 *)FUN_00428970(2);
          FUN_00424610(*puVar16);
          iVar18 = FUN_0047b5f0();
          fVar26 = (float)-iVar18 * 0.5;
          iVar18 = FUN_00424820(fVar26);
          fVar27 = (float)-iVar18 * 0.5;
          iVar18 = FUN_00424810(fVar27);
          FUN_00424a60((float)-iVar18 * 0.5,fVar27,fVar26);
          fVar26 = local_bc8;
          FUN_004482a0(auStack_318,pfVar10,&iStack_4f0);
          uVar4 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
          FUN_00448280(uVar4);
          goto LAB_00601c55;
        }
      }
      else if (*(char *)(iVar18 + 0x60) == '\x03') {
        cVar2 = *(char *)(iVar18 + 0x140);
        piStack_c04 = (int *)0x0;
        uStack_c08 = (float)CONCAT13(cVar2,(undefined3)uStack_c08);
        if (cVar2 == -0x7d) {
          piStack_c04 = (int *)FUN_004120c0(0x997);
          cVar2 = uStack_c08._3_1_;
        }
        if (cVar2 == -0x7c) {
          piStack_c04 = (int *)FUN_004120c0(0x993);
          cVar2 = uStack_c08._3_1_;
        }
        if (cVar2 == -0x80) {
          piStack_c04 = (int *)FUN_004120c0(0x994);
          cVar2 = uStack_c08._3_1_;
        }
        if (cVar2 == -0x7e) {
          piStack_c04 = (int *)FUN_004120c0(0x996);
          cVar2 = uStack_c08._3_1_;
        }
        if (cVar2 == -0x7f) {
          piStack_c04 = (int *)FUN_004120c0(0x995);
          cVar2 = uStack_c08._3_1_;
        }
        if (cVar2 == -0x7b) {
          piStack_c04 = (int *)FUN_004120c0(0x998);
          cVar2 = uStack_c08._3_1_;
        }
        if (cVar2 == -0x7a) {
          piStack_c04 = (int *)FUN_004120c0(0x999);
          cVar2 = uStack_c08._3_1_;
        }
        if (cVar2 == -0x79) {
          piStack_c04 = (int *)FUN_004120c0(0x99a);
        }
        if (piStack_c04 != (int *)0x0) {
          ppiVar21 = &piStack_9b0;
          pfVar12 = afStack_408;
          for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
            *pfVar12 = (float)*ppiVar21;
            ppiVar21 = ppiVar21 + 1;
            pfVar12 = pfVar12 + 1;
          }
          FUN_00424730(0x3f000000,0x3f000000,0x3f000000);
          puVar6 = (uint *)FUN_00428970(2);
          FUN_00424610(*puVar6 ^ 0x80000000);
          iVar18 = FUN_0047b5f0();
          fVar26 = (float)-iVar18 * 0.5;
          iVar18 = FUN_00424820(fVar26);
          fVar27 = (float)-iVar18 * 0.5;
          iVar18 = FUN_00424810(fVar27);
          FUN_00424a60((float)-iVar18 * 0.5,fVar27,fVar26);
          uVar4 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
          fVar26 = local_bc8;
          FUN_00448280(uVar4);
          FUN_004482a0(afStack_408,(int)fVar26 + 0x44,&iStack_4f0);
LAB_00601c55:
          FUN_004e6df0();
        }
      }
      else {
        puStack_c0c = (uint *)(int)*(short *)(iVar18 + 0x8c);
        iVar18 = FUN_004120c0(puStack_c0c);
        piVar15 = (int *)local_be4;
        if (iVar18 != 0) {
          ppiVar21 = &piStack_9b0;
          puVar16 = auStack_288;
          for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
            *puVar16 = *ppiVar21;
            ppiVar21 = ppiVar21 + 1;
            puVar16 = puVar16 + 1;
          }
          puVar16 = (undefined4 *)FUN_00428970(2);
          FUN_00424610(*puVar16);
          puVar6 = puStack_c0c;
          FUN_004120c0(puStack_c0c);
          iVar18 = FUN_0047b5f0();
          fVar26 = (float)-iVar18 * 0.5;
          FUN_004120c0(puVar6);
          iVar18 = FUN_00424820(fVar26);
          fVar27 = (float)-iVar18 * 0.5;
          FUN_004120c0(puVar6);
          iVar18 = FUN_00424810(fVar27);
          FUN_00424a60((float)-iVar18 * 0.5,fVar27,fVar26);
          uVar4 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
          fVar26 = local_bc8;
          FUN_00448280(uVar4);
          FUN_004482a0(auStack_288,(int)fVar26 + 0x44,&iStack_4f0);
          FUN_004120c0((int)*(short *)(*piVar15 + 0x8c));
          FUN_004e6df0();
          piVar14 = piVar15;
        }
        puStack_be8 = (uint *)*piVar14;
        puStack_c0c = (uint *)(*(int *)((int)fVar26 + 0xac) + 0x1c);
        iVar18 = FUN_004120c0((int)*(short *)((int)puStack_be8 + 0x8e));
        puVar6 = puStack_be8;
        if (iVar18 != 0) {
          ppiVar21 = &piStack_9b0;
          puVar16 = auStack_2c8;
          for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
            *puVar16 = *ppiVar21;
            ppiVar21 = ppiVar21 + 1;
            puVar16 = puVar16 + 1;
          }
          puVar16 = (undefined4 *)FUN_00428970(2);
          FUN_00424610(*puVar16);
          iVar19 = (int)*(short *)((int)puVar6 + 0x8e);
          FUN_004120c0(iVar19);
          iVar18 = FUN_0047b5f0();
          fVar26 = (float)-iVar18 * 0.5;
          FUN_004120c0(iVar19);
          iVar18 = FUN_00424820(fVar26);
          fVar27 = (float)-iVar18 * 0.5;
          FUN_004120c0(iVar19);
          iVar18 = FUN_00424810(fVar27);
          FUN_00424a60((float)-iVar18 * 0.5,fVar27,fVar26);
          uVar4 = 0x3f800000;
          pbVar17 = (byte *)FUN_004120a0(2);
          fVar26 = (float)*pbVar17 / 255.0;
          pbVar17 = (byte *)FUN_004120a0(1);
          fVar27 = (float)*pbVar17 / 255.0;
          pbVar17 = (byte *)FUN_004120a0(0);
          uVar4 = FUN_0040eac0((float)*pbVar17 / 255.0,fVar27,fVar26,uVar4);
          fVar26 = local_bc8;
          FUN_00448280(uVar4);
          FUN_004482a0(auStack_2c8,(int)fVar26 + 0x44,&iStack_4f0);
          FUN_004120c0((int)*(short *)(*(int *)local_be4 + 0x8e));
          goto LAB_00601c55;
        }
      }
      fStack_b84 = (float)((int)fStack_b88 + 8);
    } while (fStack_b84 != (float)uStack_b4c._4_4_);
  }
  FUN_005fb860();
  ExceptionList = pvStack_34;
  __security_check_cookie(uStack_3c ^ (uint)&piStack_c10);
  return;
}


/* GameController_updateSubsystems @ 0060c510  kind=game  attributed-by=ledger  size=60126 */
// (decompilation unavailable)
undefined FUN_0060c510(void) { }

