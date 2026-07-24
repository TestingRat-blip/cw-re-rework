// Game (game_misc) -- server. 16 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Game.h"

/* getElemPtr4 @ 004013d0  kind=gamemisc  attributed-by=ledger  size=13 */

int __thiscall FUN_004013d0(void *this,int param_1)

{
  return (int)(void *)((int)this + param_1 * 4);
}


/* unproven -- kind is GAME @ 00411090  kind=gamemisc  attributed-by=ledger  size=52 */

float10 __cdecl FUN_00411090(float param_1)

{
  return (float10)((1.0 / (1.0 - param_1) - 1.0) * 20.0 + 1.0);
}


/* resize_dword_array @ 00413420  kind=gamemisc  attributed-by=ledger  size=306 */

void __thiscall FUN_00413420(void *this,uint param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  void *local_8;
  
  if (param_1 != *(uint *)((int)this + 0x1c)) {
    if (((int)param_1 < 0) || (param_1 == 0)) {
      if (*(void **)((int)this + 0x18) != (void *)0x0) {
        operator_delete(*(void **)((int)this + 0x18));
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) - param_2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      return;
    }
    local_8 = operator_new(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 4));
    if (local_8 == (void *)0x0) {
      local_8 = (void *)0x0;
    }
    else {
      iVar3 = param_1 - 1;
      if (-1 < iVar3) {
        iVar1 = (int)local_8 + 2;
        do {
          iVar3 = iVar3 + -1;
          *(undefined4 *)(iVar1 + -2) = 0;
          iVar1 = iVar1 + 4;
        } while (-1 < iVar3);
      }
    }
    if ((int)param_1 < *(int *)((int)this + 0x1c)) {
      if (0 < (int)param_1) {
        puVar4 = (undefined1 *)((int)local_8 + 2);
        uVar5 = param_1;
        do {
          puVar2 = puVar4 + *(int *)((int)this + 0x18) + (-2 - (int)local_8);
          puVar4[-2] = *puVar2;
          puVar4[-1] = puVar2[1];
          *puVar4 = puVar2[2];
          puVar4[1] = puVar2[3];
          uVar5 = uVar5 - 1;
          puVar4 = puVar4 + 4;
        } while (uVar5 != 0);
      }
    }
    else {
      iVar3 = 0;
      if (0 < *(int *)((int)this + 0x1c)) {
        puVar4 = (undefined1 *)(param_2 * 4 + 2 + (int)local_8);
        do {
          puVar2 = (undefined1 *)(*(int *)((int)this + 0x18) + iVar3 * 4);
          iVar3 = iVar3 + 1;
          puVar4[-2] = *puVar2;
          puVar4[-1] = puVar2[1];
          *puVar4 = puVar2[2];
          puVar4[1] = puVar2[3];
          puVar4 = puVar4 + 4;
        } while (iVar3 < *(int *)((int)this + 0x1c));
      }
    }
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0x18));
    }
    *(void **)((int)this + 0x18) = local_8;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) - param_2;
    *(uint *)((int)this + 0x1c) = param_1;
  }
  return;
}


/* unproven ctor -- GAME @ 004c84b0  kind=game  attributed-by=ledger  size=87 */

int __fastcall FUN_004c84b0(int param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_00406ef0((undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x184) = 0;
  return param_1;
}


/* checked cell read -- GAME @ 004d23f0  kind=game  attributed-by=ledger  size=167 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_004d23f0(void *this,int param_1)

{
  if (param_1 < 0) {
    if ((DAT_00584250 & 1) == 0) {
      DAT_00584250 = DAT_00584250 | 1;
    }
    _DAT_0058424c = 0;
    _DAT_0058424e = 0x100;
    return &DAT_0058424c;
  }
  if (*(int *)((int)this + 0x1c) <= param_1) {
    if ((DAT_00584250 & 2) == 0) {
      DAT_00584250 = DAT_00584250 | 2;
    }
    _DAT_00584254 = 0;
    _DAT_00584256 = 0;
    return &DAT_00584254;
  }
  return (undefined *)(*(int *)((int)this + 0x18) + param_1 * 4);
}


/* seedInit @ 004d83a0  kind=game  attributed-by=ledger  size=663 */

void __thiscall FUN_004d83a0(void *this,uint param_1,int *param_2)

{
  void *pvVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  int *piVar6;
  undefined4 uVar7;
  char *unaff_EBX;
  undefined **ppuVar8;
  basic_iostream<char,std::char_traits<char>_>_vbtable *pbVar9;
  undefined **local_ec [2];
  basic_streambuf<char,std::char_traits<char>_> local_e4 [2];
  undefined1 local_dc [8];
  undefined4 *local_d4;
  undefined4 *local_c4;
  undefined4 *local_b4;
  undefined4 local_ac;
  uint local_a8;
  code *local_94 [18];
  int *local_4c;
  int local_48;
  basic_iostream<char,std::char_traits<char>_>_vbtable local_44;
  undefined4 local_3c;
  int local_38;
  int local_34;
  void *local_30;
  basic_iostream<char,std::char_traits<char>_>_vbtable *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554c38;
  local_10 = ExceptionList;
  pcVar2 = (char *)(DAT_00583cc8 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_4c = param_2;
  local_34 = 0;
  *(uint *)((int)this + 0x800164) = param_1;
  local_30 = this;
  local_14 = pcVar2;
  srand(param_1);
  iVar3 = rand();
  *(int *)((int)this + 0x800188) = iVar3 % 100000;
  iVar3 = 4;
  piVar6 = (int *)((int)this + 0x800168);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 0x14;
  piVar6 = (int *)((int)local_30 + 0x80018c);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x8001dc);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x8001e4);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x8001ec);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x8001f4);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 8;
  piVar6 = (int *)((int)local_30 + 0x8001fc);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 6;
  piVar6 = (int *)((int)local_30 + 0x80021c);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 6;
  piVar6 = (int *)((int)local_30 + 0x800234);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 10;
  piVar6 = (int *)((int)local_30 + 0x80024c);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 4;
  piVar6 = (int *)((int)local_30 + 0x800274);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x800284);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 4;
  piVar6 = (int *)((int)local_30 + 0x800178);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x80028c);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 2;
  piVar6 = (int *)((int)local_30 + 0x800294);
  do {
    iVar4 = rand();
    *piVar6 = iVar4 % 100000;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  local_34 = 0x400;
  piVar6 = (int *)((int)local_30 + 0xbc);
  do {
    local_48 = 0x400;
    do {
      iVar3 = local_48;
      if (*piVar6 != 0) {
        if (*(char *)((int)local_30 + 0xb4) == '\0') {
          iVar3 = 0x10018;
          do {
            iVar4 = 0x40;
            do {
              FUN_004d81b0(local_30,*(int *)(*piVar6 + iVar3));
              iVar3 = iVar3 + 4;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          } while (iVar3 < 0x14018);
        }
        iVar3 = local_48;
        if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar6)(1);
        }
        *piVar6 = 0;
      }
      if ((void *)piVar6[0x100000] != (void *)0x0) {
        operator_delete((void *)piVar6[0x100000]);
        piVar6[0x100000] = 0;
      }
      pvVar1 = local_30;
      piVar6 = piVar6 + 1;
      local_48 = iVar3 + -1;
    } while (local_48 != 0);
    local_34 = local_34 + -1;
  } while (local_34 != 0);
  FUN_00412c50((int)local_30 + 0xac);
  *(undefined4 *)((int)pvVar1 + 0x8000f0) = 0x4b002080;
  *(undefined4 *)((int)pvVar1 + 0x8000f4) = 0x4b002080;
  *(undefined4 *)((int)pvVar1 + 0x8000f8) = 0;
  if ((int *)((int)pvVar1 + 0x94) != local_4c) {
    FUN_00401920((int *)((int)pvVar1 + 0x94),local_4c,0,0xffffffff);
  }
  if ((*(char *)((int)pvVar1 + 0xb4) == '\0') && (*(int *)((int)pvVar1 + 0xa4) != 0)) {
    ppuVar8 = &PTR_0055b2c0;
    local_ec[0] = &PTR_00571718;
    local_94[0] = _vftable__exref;
    local_8 = 0;
    local_34 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)&stack0xffffff04,
               (basic_streambuf<char,std::char_traits<char>_> *)local_e4);
    local_8 = 1;
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     (local_dc +
     ((basic_iostream<char,std::char_traits<char>_>_vbtable *)ppuVar8)->
     basic_ios<char,std::char_traits<char>_>_offset + -0x20) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)(&local_e4[-7].field_0x0 +
            ((basic_iostream<char,std::char_traits<char>_>_vbtable *)ppuVar8)->
            basic_ios<char,std::char_traits<char>_>_offset) =
         ((basic_iostream<char,std::char_traits<char>_>_vbtable *)ppuVar8)->
         basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(local_e4);
    local_e4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_ac = 0;
    local_a8 = 0;
    local_8 = 3;
    pbVar5 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)local_ec,"Save/world_");
    pbVar5 = FUN_004c6580(pbVar5,pcVar2);
    FUN_00412710(pbVar5,unaff_EBX);
    piVar6 = FUN_004d8f70(&stack0xffffff04,local_2c);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00413010((void *)((int)pvVar1 + 0xac),piVar6);
    if (0xf < local_18) {
      operator_delete(local_2c[0]);
    }
    local_44.basic_iostream<char,std::char_traits<char>_>_offset = 0;
    local_44.basic_ios<char,std::char_traits<char>_>_offset = 0;
    local_3c = 0;
    local_38 = 0;
    local_8._0_1_ = 5;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (basic_iostream<char,std::char_traits<char>_>_vbtable *)
                  ((uint)local_2c[0] & 0xffffff00);
    FUN_00401a40(local_2c,(int *)&DAT_0056d08c,4);
    pbVar9 = &local_44;
    local_8 = CONCAT31(local_8._1_3_,6);
    uVar7 = FUN_00413130((void *)((int)pvVar1 + 0xac),local_2c,
                         &pbVar9->basic_iostream<char,std::char_traits<char>_>_offset);
    if (0xf < local_18) {
      pbVar9 = local_2c[0];
      operator_delete(local_2c[0]);
    }
    if ((char)uVar7 != '\0') {
      iVar4 = local_44.basic_ios<char,std::char_traits<char>_>_offset -
              local_44.basic_iostream<char,std::char_traits<char>_>_offset;
      iVar3 = iVar4;
      if (local_38 + 4 <= iVar4) {
        *(undefined4 *)((int)pvVar1 + 0x800160) =
             *(undefined4 *)
              ((int)(int *)local_44.basic_iostream<char,std::char_traits<char>_>_offset + local_38);
        iVar3 = local_38 + 4;
      }
      local_38 = iVar4;
      if (iVar3 + 4 <= iVar4) {
        *(undefined4 *)((int)pvVar1 + 0x80015c) =
             *(undefined4 *)
              ((int)(int *)local_44.basic_iostream<char,std::char_traits<char>_>_offset + iVar3);
        local_38 = iVar3 + 4;
      }
    }
    if ((basic_iostream<char,std::char_traits<char>_>_vbtable *)
        local_44.basic_iostream<char,std::char_traits<char>_>_offset !=
        (basic_iostream<char,std::char_traits<char>_>_vbtable *)0x0) {
      pbVar9 = (basic_iostream<char,std::char_traits<char>_>_vbtable *)
               local_44.basic_iostream<char,std::char_traits<char>_>_offset;
      operator_delete((void *)local_44.basic_iostream<char,std::char_traits<char>_>_offset);
      local_44.basic_iostream<char,std::char_traits<char>_>_offset = 0;
      local_44.basic_ios<char,std::char_traits<char>_>_offset = 0;
      local_3c = 0;
    }
    local_8 = 0xffffffff;
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     (local_dc + pbVar9->basic_ios<char,std::char_traits<char>_>_offset + -0x20) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)(&local_e4[-7].field_0x0 + pbVar9->basic_ios<char,std::char_traits<char>_>_offset) =
         pbVar9->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    local_e4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    if ((local_a8 & 1) != 0) {
      operator_delete(*(void **)local_dc._4_4_);
    }
    std::basic_streambuf<char,std::char_traits<char>_>::setg
              (local_e4,(char *)0x0,(char *)0x0,(char *)0x0);
    *local_d4 = 0;
    *local_c4 = 0;
    *local_b4 = 0;
    local_a8 = local_a8 & 0xfffffffe;
    local_ac = 0;
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_e4);
    std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_dc);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)local_94);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* unproven ctor -- GAME @ 004f3630  kind=game  attributed-by=ledger  size=186 */

int * __cdecl FUN_004f3630(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_00406ef0(param_1 + 0x12);
  param_1[0x5e] = -1;
  param_1[0x5f] = -1;
  param_1[0x60] = -1;
  param_1[0x61] = 0;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  param_1[6] = param_2[4];
  param_1[7] = param_2[5];
  param_1[8] = param_3;
  iVar1 = rand();
  *param_1 = iVar1 % 3 + 0x15;
  param_1[9] = 0x40600000;
  param_1[10] = 0x40000000;
  param_1[0xb] = 0x40400000;
  return param_1;
}


/* sort_routine_4f5cc0 @ 004f5cc0  kind=gamemisc  attributed-by=ledger  size=310 */

void __cdecl FUN_004f5cc0(float *param_1,float *param_2,int param_3,undefined4 param_4)

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
LAB_004f5d98:
      if (1 < iVar3) {
        FUN_004f4860(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar3) {
        if (1 < ((int)param_2 - (int)param_1) / 0xc) {
          FUN_004f4b50((int)param_1,(int)param_2);
        }
        FUN_004f61c0(param_1,(int)param_2);
        return;
      }
      goto LAB_004f5d98;
    }
    puVar2 = (undefined4 *)FUN_004f64a0(local_c,param_1,param_2);
    pfVar4 = (float *)*puVar2;
    pfVar1 = (float *)puVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)pfVar4 - (int)param_1) / 0xc < ((int)param_2 - (int)pfVar1) / 0xc) {
      FUN_004f5cc0(param_1,pfVar4,param_3,param_4);
      param_1 = pfVar1;
      pfVar4 = param_2;
    }
    else {
      FUN_004f5cc0(pfVar1,param_2,param_3,param_4);
    }
    iVar3 = (int)pfVar4 - (int)param_1;
    param_2 = pfVar4;
  } while( true );
}


/* grid_cell_accessor -- GAME @ 004f84a0  kind=game  attributed-by=ledger  size=127 */

undefined1 * __thiscall FUN_004f84a0(void *this,int param_1,int param_2,int param_3)

{
  FUN_0052dde0(this,&param_1,&param_2);
  if ((((-1 < param_1) && (-1 < param_2)) && (-1 < param_3)) &&
     (((param_1 < *(int *)((int)this + 0xc) && (param_2 < *(int *)((int)this + 0x10))) &&
      (param_3 < *(int *)((int)this + 0x14))))) {
    return (undefined1 *)
           (*(int *)((int)this + 0x18) +
           ((*(int *)((int)this + 0x10) * param_3 + param_2) * *(int *)((int)this + 0xc) + param_1)
           * 2);
  }
  if ((DAT_005842cc & 1) == 0) {
    DAT_005842cc = DAT_005842cc | 1;
    DAT_005842c9 = 0;
  }
  DAT_005842c8 = 1;
  return &DAT_005842c8;
}


/* structure_populator_CONTESTED @ 005104e0  kind=game  attributed-by=ledger  size=7192 */

void __thiscall FUN_005104e0(void *this,int param_1,uint *param_2,int *param_3)

{
  undefined1 *puVar1;
  CombatBehavior_vftable **ppCVar2;
  CombatBehavior_vftable **ppCVar3;
  vfunction2 *pvVar4;
  longlong lVar5;
  longlong lVar6;
  SequentialBehavior *pSVar7;
  Spawn *pSVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  _Container_base0 *p_Var11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  Spawn *pSVar15;
  int iVar16;
  WalkPathBehavior *pWVar17;
  Spawn *pSVar18;
  int *piVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  undefined4 *puVar23;
  SequentialBehavior_data *pSVar24;
  uint *puVar25;
  _Container_base0 *this_00;
  void *pvVar26;
  Spawn_data *pSVar27;
  code *pcVar28;
  uint uVar29;
  bool bVar30;
  float10 fVar31;
  float fVar32;
  double dVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined4 local_798;
  int local_794;
  int local_790;
  undefined4 local_788;
  undefined4 local_784;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 local_774;
  undefined4 local_770;
  undefined4 local_76c;
  undefined4 local_768;
  undefined4 local_764;
  undefined4 local_760;
  undefined4 local_75c;
  undefined4 local_758;
  undefined4 local_754;
  undefined4 local_750;
  undefined4 local_74c;
  undefined4 local_748;
  undefined4 local_744;
  undefined4 local_740;
  undefined4 local_73c;
  undefined4 local_738;
  undefined4 local_734;
  undefined4 local_730;
  undefined4 local_72c;
  undefined4 local_728;
  undefined4 local_724;
  undefined4 local_720;
  undefined4 local_71c;
  undefined4 local_718;
  undefined4 local_714;
  undefined4 local_710;
  undefined4 local_70c;
  undefined4 local_708;
  undefined4 local_704;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined4 local_6d8;
  undefined4 local_6d4;
  undefined4 local_6d0;
  undefined4 local_6cc;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined4 local_6b4;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined4 local_6a4;
  undefined8 local_6a0;
  undefined4 local_698;
  Spawn *local_694;
  undefined4 local_690;
  RandomWalkBehavior *local_68c;
  undefined4 local_688;
  CompanionBehavior *local_684;
  undefined4 local_680;
  CombatBehavior *local_67c;
  undefined4 local_678;
  RandomWalkBehavior *local_674;
  undefined4 local_670;
  WalkPathBehavior *local_66c;
  undefined4 local_668;
  CombatBehavior *local_664;
  undefined4 local_660;
  Spawn *local_65c;
  undefined4 local_658;
  RandomWalkBehavior *local_654;
  undefined4 local_650;
  RandomInteractionBehavior *local_64c;
  undefined4 local_648;
  WalkPathBehavior *local_644;
  undefined4 local_640;
  CombatBehavior *local_63c;
  undefined4 local_638;
  float local_634;
  undefined4 local_630;
  float local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  int local_574;
  int local_570;
  undefined4 local_568;
  undefined4 local_564;
  int local_55c;
  int local_558;
  undefined4 local_550;
  undefined4 local_54c;
  int local_544;
  int local_540;
  undefined4 local_538;
  undefined4 local_534;
  int local_52c;
  int local_528;
  undefined4 local_520;
  undefined4 local_51c;
  int local_514;
  int local_510;
  undefined4 local_508;
  undefined4 local_504;
  int local_4fc;
  int local_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  int local_4e4;
  int local_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  int local_4cc;
  int local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  int local_4b4;
  int local_4b0;
  undefined4 local_4a8;
  undefined4 local_4a4;
  int local_49c;
  int local_498;
  undefined4 local_490;
  undefined4 local_48c;
  WalkPathBehavior *local_484;
  int local_480;
  Spawn *local_478;
  void *local_474;
  uint local_470;
  void *local_46c;
  int local_468;
  undefined4 local_464;
  float local_460;
  int local_45c;
  void *local_458;
  void *local_454;
  undefined4 local_450;
  uint local_44c;
  uint local_448;
  uint local_444;
  uint *local_440;
  uint local_43c;
  uint local_438;
  SequentialBehavior_data *local_434;
  undefined4 *local_430;
  undefined4 *local_42c;
  undefined4 local_428;
  SequentialBehavior *local_424;
  void *local_420;
  void *local_41c;
  undefined4 local_418;
  uint *local_414;
  WalkPathBehavior *local_410;
  SequentialBehavior *local_40c;
  uint *local_408;
  Spawn *local_404;
  char local_3fd;
  uint local_3fc;
  uint local_3f8;
  uint local_3f4;
  uint local_3f0;
  int local_3e4;
  int local_3e0;
  int local_3dc;
  int local_3d8;
  CombatBehavior_vftable *local_3cc [2];
  int local_3c4;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  SequentialBehavior_data *local_3b4;
  SequentialBehavior *local_3b0;
  uint local_3ac;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined1 local_39c;
  undefined4 local_398;
  WalkPathBehavior_vftable *local_394;
  undefined8 local_38c;
  undefined4 *local_384;
  undefined4 *local_380;
  undefined4 local_37c;
  WalkPathBehavior_vftable *local_378;
  undefined2 local_374 [2];
  undefined4 local_370;
  undefined4 local_36c;
  undefined2 local_368;
  undefined1 local_366;
  undefined2 local_364;
  undefined1 local_360 [256];
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  uint local_244 [4];
  uint local_234;
  uint local_230;
  SequentialBehavior_data *local_22c;
  SequentialBehavior *local_228;
  uint local_224;
  uint local_220;
  uint uStack_21c;
  uint local_218;
  undefined1 local_214;
  uint local_210;
  uint local_20c;
  undefined8 local_204;
  _Container_base0 *local_1fc;
  _Container_base0 *local_1f8;
  undefined4 local_1f4;
  uint local_1f0;
  undefined2 local_1ec [2];
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined2 local_1e0;
  undefined1 local_1de;
  undefined2 local_1dc;
  undefined1 local_1d8 [256];
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  int local_a8 [2];
  undefined8 local_a0;
  int local_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  uint local_44;
  uint *local_40;
  uint *local_3c;
  SequentialBehavior *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  SequentialBehavior_data *local_1c;
  SequentialBehavior *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00555dfd;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_45c = param_1;
  local_474 = this;
  if (param_2[6] == 0) goto LAB_00513386;
  local_430 = (undefined4 *)0x0;
  local_42c = (undefined4 *)0x0;
  local_428 = 0;
  local_420 = (void *)0x0;
  local_41c = (void *)0x0;
  local_418 = 0;
  local_3fd = '\0';
  local_46c = (void *)0x0;
  local_468 = 0;
  local_464 = 0;
  local_8 = 2;
  if (param_2[6] == 4) {
    local_74c = 9;
    puVar23 = &local_74c;
LAB_005106f2:
    FUN_004f2be0(&local_46c,puVar23);
  }
  else {
    local_614 = 0;
    FUN_004f2be0(&local_46c,&local_614);
    local_61c = 1;
    FUN_004f2be0(&local_46c,&local_61c);
    local_624 = 2;
    FUN_004f2be0(&local_46c,&local_624);
    local_6a8 = 3;
    FUN_004f2be0(&local_46c,&local_6a8);
    local_6b0 = 4;
    FUN_004f2be0(&local_46c,&local_6b0);
    local_6b8 = 5;
    FUN_004f2be0(&local_46c,&local_6b8);
    local_6c0 = 1;
    FUN_004f2be0(&local_46c,&local_6c0);
    local_6d8 = 7;
    FUN_004f2be0(&local_46c,&local_6d8);
    local_6e0 = 8;
    FUN_004f2be0(&local_46c,&local_6e0);
    if ((param_2[6] != 0xd) && (param_2[6] != 2)) {
      local_6e8 = 6;
      FUN_004f2be0(&local_46c,&local_6e8);
    }
    if (param_2[6] == 3) {
      local_6f0 = 10;
      puVar23 = &local_6f0;
      goto LAB_005106f2;
    }
  }
  switch(*(undefined4 *)
          ((int)local_46c + (param_2[8] % (uint)(local_468 - (int)local_46c >> 2)) * 4)) {
  case 1:
    local_3fd = '\x01';
    local_6f8 = 0xf;
    FUN_004f2be0(&local_420,&local_6f8);
    local_700 = 0x10;
    FUN_004f2be0(&local_420,&local_700);
    FUN_004f7540(&local_49c);
    local_8._0_1_ = 4;
    uVar14 = rand();
    uVar14 = uVar14 & 0x80000003;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
    }
    if (uVar14 == 0) {
      local_718 = 0x11;
      puVar23 = &local_718;
LAB_005107ca:
      FUN_004f2be0(&local_49c,puVar23);
    }
    else {
      if (uVar14 == 1) {
        local_710 = 0x29;
        puVar23 = &local_710;
        goto LAB_005107ca;
      }
      if (uVar14 == 2) {
        local_708 = 0x61;
        puVar23 = &local_708;
        goto LAB_005107ca;
      }
    }
    uVar14 = rand();
    uVar14 = uVar14 & 0x80000003;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
    }
    switch(uVar14) {
    case 0:
      local_720 = 0x28;
      FUN_004f2be0(&local_490,&local_720);
      local_728 = 0x25;
      FUN_004f2be0(&local_490,&local_728);
      local_730 = 0x26;
      FUN_004f2be0(&local_490,&local_730);
      local_738 = 0x27;
      puVar23 = &local_738;
      break;
    case 1:
      local_740 = 0x3b;
      puVar23 = &local_740;
      break;
    case 2:
      local_748 = 0x29;
      puVar23 = &local_748;
      break;
    case 3:
      local_750 = 0x60;
      puVar23 = &local_750;
      break;
    default:
      goto switchD_005107ed_default;
    }
    FUN_004f2be0(&local_490,puVar23);
switchD_005107ed_default:
    FUN_005285c0(&local_430,&local_49c);
    local_498 = local_49c;
    local_48c = local_490;
    local_758 = 0xf;
    FUN_004f2be0(&local_49c,&local_758);
    local_760 = 0x10;
    FUN_004f2be0(&local_49c,&local_760);
    local_768 = 0xf;
    FUN_004f2be0(&local_490,&local_768);
    local_770 = 0x10;
    FUN_004f2be0(&local_490,&local_770);
    FUN_005285c0(&local_430,&local_49c);
    piVar19 = &local_49c;
    break;
  case 2:
    local_3fd = '\x01';
    local_778 = 2;
    FUN_004f2be0(&local_420,&local_778);
    local_79c = 3;
    FUN_004f2be0(&local_420,&local_79c);
    FUN_004f7540(&local_4b4);
    local_8._0_1_ = 5;
    iVar20 = rand();
    iVar20 = iVar20 % 3;
    if (iVar20 == 0) {
      local_7b4 = 0x5e;
      puVar23 = &local_7b4;
LAB_005109df:
      FUN_004f2be0(&local_4b4,puVar23);
    }
    else {
      if (iVar20 == 1) {
        local_7ac = 0x4f;
        puVar23 = &local_7ac;
        goto LAB_005109df;
      }
      if (iVar20 == 2) {
        local_7a4 = 0x52;
        puVar23 = &local_7a4;
        goto LAB_005109df;
      }
    }
    uVar14 = rand();
    uVar14 = uVar14 & 0x80000003;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
    }
    switch(uVar14) {
    case 0:
      local_7bc = 0x1e;
      puVar23 = &local_7bc;
      break;
    case 1:
      local_6cc = 0x1a;
      puVar23 = &local_6cc;
      break;
    case 2:
      local_580 = 0x13;
      puVar23 = &local_580;
      break;
    case 3:
      local_698 = 0x21;
      puVar23 = &local_698;
      break;
    case 4:
      local_588 = 0x1f;
      puVar23 = &local_588;
      break;
    case 5:
      local_7b8 = 0x20;
      puVar23 = &local_7b8;
      break;
    default:
      goto switchD_005109fe_default;
    }
    FUN_004f2be0(&local_4a8,puVar23);
switchD_005109fe_default:
    FUN_005285c0(&local_430,&local_4b4);
    local_4b0 = local_4b4;
    local_4a4 = local_4a8;
    local_590 = 2;
    FUN_004f2be0(&local_4b4,&local_590);
    local_6a4 = 3;
    FUN_004f2be0(&local_4b4,&local_6a4);
    local_598 = 2;
    FUN_004f2be0(&local_4a8,&local_598);
    local_72c = 3;
    FUN_004f2be0(&local_4a8,&local_72c);
    FUN_005285c0(&local_430,&local_4b4);
    piVar19 = &local_4b4;
    break;
  case 3:
    local_3fd = '\x01';
    local_5a0 = 9;
    FUN_004f2be0(&local_420,&local_5a0);
    local_6ac = 10;
    FUN_004f2be0(&local_420,&local_6ac);
    FUN_004f7540(&local_514);
    local_8._0_1_ = 6;
    uVar14 = rand();
    uVar14 = uVar14 & 0x80000001;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xfffffffe) + 1;
    }
    if (uVar14 == 0) {
      local_76c = 0x2f;
      puVar23 = &local_76c;
LAB_00510bb8:
      FUN_004f2be0(&local_514,puVar23);
    }
    else if (uVar14 == 1) {
      local_5a8 = 0x58;
      puVar23 = &local_5a8;
      goto LAB_00510bb8;
    }
    iVar20 = rand();
    iVar20 = iVar20 % 3;
    if (iVar20 == 0) {
      local_5b8 = 0x57;
      puVar23 = &local_5b8;
LAB_00510c08:
      FUN_004f2be0(&local_508,puVar23);
    }
    else {
      if (iVar20 == 1) {
        local_6b4 = 0x5b;
        puVar23 = &local_6b4;
        goto LAB_00510c08;
      }
      if (iVar20 == 2) {
        local_5b0 = 0x21;
        puVar23 = &local_5b0;
        goto LAB_00510c08;
      }
    }
    FUN_005285c0(&local_430,&local_514);
    local_510 = local_514;
    local_504 = local_508;
    local_734 = 9;
    FUN_004f2be0(&local_514,&local_734);
    local_5c0 = 10;
    FUN_004f2be0(&local_514,&local_5c0);
    local_6bc = 9;
    FUN_004f2be0(&local_508,&local_6bc);
    local_5c8 = 10;
    FUN_004f2be0(&local_508,&local_5c8);
    FUN_005285c0(&local_430,&local_514);
    piVar19 = &local_514;
    break;
  case 4:
    local_3fd = '\x01';
    local_7a0 = 7;
    FUN_004f2be0(&local_420,&local_7a0);
    local_5d0 = 8;
    FUN_004f2be0(&local_420,&local_5d0);
    FUN_004f7540(&local_52c);
    local_8._0_1_ = 7;
    local_6c4 = 7;
    FUN_004f2be0(&local_52c,&local_6c4);
    local_5d8 = 8;
    FUN_004f2be0(&local_52c,&local_5d8);
    iVar20 = rand();
    iVar20 = iVar20 % 3;
    if (iVar20 == 0) {
      local_6d0 = 0x3c;
      puVar23 = &local_6d0;
LAB_00510d95:
      FUN_004f2be0(&local_520,puVar23);
    }
    else {
      if (iVar20 == 1) {
        local_5e0 = 0x35;
        puVar23 = &local_5e0;
        goto LAB_00510d95;
      }
      if (iVar20 == 2) {
        local_6c8 = 0x3a;
        puVar23 = &local_6c8;
        goto LAB_00510d95;
      }
    }
    FUN_005285c0(&local_430,&local_52c);
    local_528 = local_52c;
    local_51c = local_520;
    local_5e8 = 7;
    FUN_004f2be0(&local_52c,&local_5e8);
    local_73c = 8;
    FUN_004f2be0(&local_52c,&local_73c);
    local_5f0 = 7;
    FUN_004f2be0(&local_520,&local_5f0);
    local_6d4 = 8;
    FUN_004f2be0(&local_520,&local_6d4);
    FUN_005285c0(&local_430,&local_52c);
    piVar19 = &local_52c;
    break;
  case 5:
    local_3fd = '\x01';
    local_5f8 = 4;
    FUN_004f2be0(&local_420,&local_5f8);
    local_774 = 5;
    FUN_004f2be0(&local_420,&local_774);
    FUN_004f7540(&local_55c);
    local_8._0_1_ = 8;
    local_600 = 0x58;
    FUN_004f2be0(&local_55c,&local_600);
    local_6dc = 0x57;
    FUN_004f2be0(&local_550,&local_6dc);
    local_608 = 0x37;
    FUN_004f2be0(&local_550,&local_608);
    local_744 = 0x3c;
    FUN_004f2be0(&local_550,&local_744);
    FUN_005285c0(&local_430,&local_55c);
    local_558 = local_55c;
    local_54c = local_550;
    local_610 = 4;
    FUN_004f2be0(&local_55c,&local_610);
    local_6e4 = 5;
    FUN_004f2be0(&local_55c,&local_6e4);
    local_618 = 4;
    FUN_004f2be0(&local_550,&local_618);
    local_7b0 = 5;
    FUN_004f2be0(&local_550,&local_7b0);
    FUN_005285c0(&local_430,&local_55c);
    piVar19 = &local_55c;
    break;
  case 6:
    local_620 = 0x46;
    FUN_004f2be0(&local_420,&local_620);
    local_6ec = 0x45;
    FUN_004f2be0(&local_420,&local_6ec);
    FUN_004f7540(&local_574);
    local_8._0_1_ = 9;
    local_628 = 0x47;
    FUN_004f2be0(&local_574,&local_628);
    local_578 = 0x47;
    FUN_004f2be0(&local_568,&local_578);
    FUN_005285c0(&local_430,&local_574);
    local_570 = local_574;
    local_564 = local_568;
    local_630 = 0x46;
    FUN_004f2be0(&local_574,&local_630);
    local_6f4 = 0x45;
    FUN_004f2be0(&local_574,&local_6f4);
    local_638 = 0x46;
    FUN_004f2be0(&local_568,&local_638);
    local_77c = 0x45;
    FUN_004f2be0(&local_568,&local_77c);
    FUN_005285c0(&local_430,&local_574);
    piVar19 = &local_574;
    break;
  case 7:
    local_640 = 0x34;
    FUN_004f2be0(&local_420,&local_640);
    FUN_004f7540(&local_544);
    local_8._0_1_ = 10;
    local_6fc = 0x3e;
    FUN_004f2be0(&local_544,&local_6fc);
    local_648 = 0x3e;
    FUN_004f2be0(&local_538,&local_648);
    FUN_005285c0(&local_430,&local_544);
    local_540 = local_544;
    local_534 = local_538;
    local_754 = 0x3c;
    FUN_004f2be0(&local_544,&local_754);
    local_650 = 0x3c;
    FUN_004f2be0(&local_538,&local_650);
    FUN_005285c0(&local_430,&local_544);
    local_534 = local_538;
    local_704 = 0x34;
    FUN_004f2be0(&local_544,&local_704);
    local_658 = 0x34;
    FUN_004f2be0(&local_538,&local_658);
    FUN_005285c0(&local_430,&local_544);
    piVar19 = &local_544;
    break;
  case 8:
    local_7a8 = 0x66;
    FUN_004f2be0(&local_420,&local_7a8);
    local_660 = 0x69;
    FUN_004f2be0(&local_420,&local_660);
    local_70c = 0x68;
    FUN_004f2be0(&local_420,&local_70c);
    FUN_004f7540(&local_4fc);
    local_8._0_1_ = 0xb;
    local_668 = 0x68;
    FUN_004f2be0(&local_4fc,&local_668);
    local_75c = 0x68;
    FUN_004f2be0(&local_4f0,&local_75c);
    FUN_005285c0(&local_430,&local_4fc);
    local_4f8 = local_4fc;
    local_4ec = local_4f0;
    local_670 = 0x66;
    FUN_004f2be0(&local_4fc,&local_670);
    local_714 = 0x66;
    FUN_004f2be0(&local_4f0,&local_714);
    FUN_005285c0(&local_430,&local_4fc);
    local_4f8 = local_4fc;
    local_4ec = local_4f0;
    local_678 = 0x69;
    FUN_004f2be0(&local_4fc,&local_678);
    local_798 = 0x69;
    FUN_004f2be0(&local_4f0,&local_798);
    FUN_005285c0(&local_430,&local_4fc);
    piVar19 = &local_4fc;
    break;
  case 9:
    local_680 = 0x56;
    FUN_004f2be0(&local_420,&local_680);
    local_71c = 0x6a;
    FUN_004f2be0(&local_420,&local_71c);
    FUN_004f7540(&local_794);
    local_8._0_1_ = 0xc;
    local_688 = 0x56;
    FUN_004f2be0(&local_794,&local_688);
    local_764 = 0x56;
    FUN_004f2be0(&local_788,&local_764);
    FUN_005285c0(&local_430,&local_794);
    local_790 = local_794;
    local_784 = local_788;
    local_690 = 0x6a;
    FUN_004f2be0(&local_794,&local_690);
    local_724 = 0x6a;
    FUN_004f2be0(&local_788,&local_724);
    FUN_005285c0(&local_430,&local_794);
    piVar19 = &local_794;
    break;
  case 10:
    local_57c = 0x23;
    FUN_004f2be0(&local_420,&local_57c);
    local_584 = 0x5a;
    FUN_004f2be0(&local_420,&local_584);
    local_58c = 0x5b;
    FUN_004f2be0(&local_420,&local_58c);
    FUN_004f7540(&local_4e4);
    local_8._0_1_ = 0xd;
    local_594 = 0x23;
    FUN_004f2be0(&local_4e4,&local_594);
    local_59c = 0x23;
    FUN_004f2be0(&local_4d8,&local_59c);
    FUN_005285c0(&local_430,&local_4e4);
    local_4e0 = local_4e4;
    local_4d4 = local_4d8;
    local_5a4 = 0x5a;
    FUN_004f2be0(&local_4e4,&local_5a4);
    local_5ac = 0x5a;
    FUN_004f2be0(&local_4d8,&local_5ac);
    FUN_005285c0(&local_430,&local_4e4);
    local_4e0 = local_4e4;
    local_4d4 = local_4d8;
    local_5b4 = 0x5b;
    FUN_004f2be0(&local_4e4,&local_5b4);
    local_5bc = 0x5b;
    FUN_004f2be0(&local_4d8,&local_5bc);
    FUN_005285c0(&local_430,&local_4e4);
    piVar19 = &local_4e4;
    break;
  default:
    local_3fd = '\x01';
    local_5c4 = 0xb;
    FUN_004f2be0(&local_420,&local_5c4);
    local_5cc = 0xc;
    FUN_004f2be0(&local_420,&local_5cc);
    local_4cc = 0;
    local_4c8 = 0;
    local_4c4 = 0;
    local_4c0 = 0;
    local_4bc = 0;
    local_4b8 = 0;
    local_8._0_1_ = 3;
    local_5d4 = 0x2e;
    FUN_004f2be0(&local_4cc,&local_5d4);
    local_5dc = 0x13;
    FUN_004f2be0(&local_4c0,&local_5dc);
    local_5e4 = 0x21;
    FUN_004f2be0(&local_4c0,&local_5e4);
    local_5ec = 0x1a;
    FUN_004f2be0(&local_4c0,&local_5ec);
    FUN_005285c0(&local_430,&local_4cc);
    local_4c8 = local_4cc;
    local_4bc = local_4c0;
    local_5f4 = 0xb;
    FUN_004f2be0(&local_4cc,&local_5f4);
    local_5fc = 0xc;
    FUN_004f2be0(&local_4cc,&local_5fc);
    local_604 = 0xb;
    FUN_004f2be0(&local_4c0,&local_604);
    local_60c = 0xc;
    FUN_004f2be0(&local_4c0,&local_60c);
    FUN_005285c0(&local_430,&local_4cc);
    piVar19 = &local_4cc;
  }
  FUN_004f77a0(piVar19);
  local_480 = -1;
  uVar34 = __alldiv(*param_2,param_2[1],0x10000,0);
  iVar20 = (int)uVar34;
  local_bc = iVar20;
  uVar34 = __alldiv(param_2[2],param_2[3],0x10000,0);
  local_b8 = (int)uVar34;
  local_a8[0] = (int)(iVar20 + (iVar20 >> 0x1f & 0xffU)) >> 8;
  local_a8[1] = (int)(local_b8 + (local_b8 >> 0x1f & 0xffU)) >> 8;
  iVar20 = 0;
  piVar19 = (int *)(param_1 + 0x60);
  do {
    if (local_a8[iVar20] != *piVar19) goto LAB_005118fa;
    iVar20 = iVar20 + 1;
    piVar19 = piVar19 + 1;
  } while (iVar20 < 2);
  puVar21 = (uint *)*param_3;
  local_404 = (Spawn *)((param_3[1] - (int)puVar21) / 0x18);
  iVar20 = 0;
  local_460 = 0.0;
  if (0 < (int)local_404) {
    puVar25 = puVar21 + 2;
    do {
      fVar31 = FUN_0052c820(param_2,puVar21,puVar25);
      local_478 = (Spawn *)(float)fVar31;
      fVar32 = 1.0 - (float)local_478;
      if (0.0 < fVar32) {
        fVar32 = fVar32 * fVar32;
      }
      else {
        fVar32 = 0.0;
      }
      if (local_460 < fVar32) {
        local_480 = iVar20;
        local_460 = fVar32;
      }
      iVar20 = iVar20 + 1;
      puVar21 = puVar21 + 6;
      puVar25 = puVar25 + 6;
    } while (iVar20 < (int)local_404);
  }
LAB_005118fa:
  puVar21 = (uint *)param_3[1];
  puVar25 = (uint *)*param_3;
  local_460 = 0.0;
  if (0 < ((int)puVar21 - (int)puVar25) / 0x18) {
    do {
      local_2c = puVar25[(int)local_460 * 6];
      local_28 = puVar25[(int)local_460 * 6 + 1];
      local_24 = puVar25[(int)local_460 * 6 + 2];
      local_20 = puVar25[(int)local_460 * 6 + 3];
      local_1c = (SequentialBehavior_data *)puVar25[(int)local_460 * 6 + 4];
      local_18 = (SequentialBehavior *)puVar25[(int)local_460 * 6 + 5];
      local_458 = (void *)0x0;
      local_454 = (void *)0x0;
      local_450 = 0;
      local_8._0_1_ = 0xe;
      if (puVar25 != puVar21) {
        do {
          local_98 = *puVar25 - local_2c;
          iStack_94 = (puVar25[1] - local_28) - (uint)(*puVar25 < local_2c);
          local_90 = puVar25[2] - local_24;
          iStack_8c = (puVar25[3] - local_20) - (uint)(puVar25[2] < local_24);
          local_88 = (int)puVar25[4] - (int)local_1c;
          iStack_84 = (puVar25[5] - (int)local_18) - (uint)((undefined1 *)puVar25[4] < local_1c);
          local_b4 = (float)CONCAT44(iStack_94,local_98) * 1.5258789e-05;
          local_404 = (Spawn *)(float)CONCAT44(iStack_84,local_88);
          fStack_b0 = (float)CONCAT44(iStack_8c,local_90) * 1.5258789e-05;
          local_ac = (float)local_404 * 1.5258789e-05;
          local_a0 = CONCAT44(fStack_b0,local_b4);
          fVar32 = fStack_b0 * fStack_b0 + local_b4 * local_b4;
          if ((25.0 < fVar32) && (fVar32 < 16384.0)) {
            local_44c = local_28;
            local_448 = local_20;
            local_444 = local_24;
            local_438 = local_2c;
            local_434 = local_1c;
            local_424 = local_18;
            FUN_004e1420(&local_458,puVar25);
          }
          puVar25 = puVar25 + 6;
        } while (puVar25 != (uint *)param_3[1]);
      }
      uVar14 = local_2c;
      pcVar28 = rand_exref;
      local_44c = local_28;
      local_448 = local_20;
      local_444 = local_24;
      local_438 = local_2c;
      local_434 = local_1c;
      local_424 = local_18;
      if (local_460 == (float)local_480) {
LAB_00511ba9:
        if (local_420 == local_41c) {
LAB_00512b3e:
          if (local_430 != local_42c) {
            iVar20 = (int)local_42c - (int)local_430;
            uVar14 = rand();
            uVar14 = uVar14 % (uint)(iVar20 / 0x18);
            local_408 = local_430;
            local_43c = uVar14 * 3;
            if (local_430[uVar14 * 6] == local_430[uVar14 * 6 + 1]) {
              local_8._0_1_ = 2;
              if (local_458 != (void *)0x0) {
                std::_Container_base0::_Orphan_all((_Container_base0 *)&local_458);
                goto LAB_00511b6a;
              }
              goto LAB_00513285;
            }
            pSVar15 = operator_new(0x10f0);
            if (pSVar15 == (Spawn *)0x0) {
              local_404 = (Spawn *)0x0;
            }
            else {
              local_404 = cube::Spawn::Spawn(pSVar15);
            }
            pSVar15 = local_404;
            (local_404->Spawn_data).offset_0x24 = 1;
            puVar1 = &(local_404->Spawn_data).field_0x76;
            *(ushort *)puVar1 = *(ushort *)puVar1 | 0x1000;
            local_478 = local_404;
            iVar20 = rand();
            puVar1 = &(pSVar15->Spawn_data).field_0xc;
            (pSVar15->Spawn_data).offset_0x50 = (float)(iVar20 % 0x168);
            *(uint *)puVar1 = local_438;
            *(uint *)&(pSVar15->Spawn_data).field_0x10 = local_44c;
            *(uint *)&(pSVar15->Spawn_data).field_0x14 = local_444;
            *(uint *)&(pSVar15->Spawn_data).field_0x18 = local_448;
            *(SequentialBehavior_data **)&(pSVar15->Spawn_data).field_0x1c = local_434;
            *(SequentialBehavior **)&(pSVar15->Spawn_data).field_0x20 = local_424;
            iVar20 = local_408[uVar14 * 6 + 1];
            iVar16 = local_408[local_43c * 2];
            uVar14 = rand();
            (pSVar15->Spawn_data).offset_0x28 =
                 *(undefined4 *)
                  (local_408[local_43c * 2] + (uVar14 % (uint)(iVar20 - iVar16 >> 2)) * 4);
            (pSVar15->Spawn_data).offset_0x30 = param_2[9];
            (pSVar15->Spawn_data).offset_0x54 = (char)param_2[10];
            local_410 = operator_new(0xc);
            local_8._0_1_ = 0x1a;
            if (local_410 == (WalkPathBehavior *)0x0) {
              local_424 = (SequentialBehavior *)0x0;
            }
            else {
              local_424 = cube::SequentialBehavior::SequentialBehavior
                                    ((SequentialBehavior *)local_410);
            }
            pSVar7 = local_424;
            local_8._0_1_ = 0xe;
            local_410 = operator_new(0x14);
            local_8._0_1_ = 0x1b;
            if (local_410 == (WalkPathBehavior *)0x0) {
              local_664 = (CombatBehavior *)0x0;
            }
            else {
              local_664 = cube::CombatBehavior::CombatBehavior
                                    ((CombatBehavior *)local_410,0x41a00000);
            }
            pvVar4 = (vfunction2 *)(pSVar7->SequentialBehavior_data).offset_0x0;
            pSVar24 = &pSVar7->SequentialBehavior_data;
            local_8._0_1_ = 0xe;
            local_434 = pSVar24;
            iVar16 = FUN_0052dfb0((undefined4 *)pvVar4,*(undefined4 **)(pvVar4 + 4),&local_664);
            iVar20 = (pSVar7->SequentialBehavior_data).offset_0x4;
            if (iVar20 == 0x15555554) {
LAB_005133a4:
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("list<T> too long");
            }
            (pSVar7->SequentialBehavior_data).offset_0x4 = iVar20 + 1;
            *(int *)(pvVar4 + 4) = iVar16;
            **(int **)(iVar16 + 4) = iVar16;
            local_410 = operator_new(0x1c);
            local_8._0_1_ = 0x1c;
            if (local_410 == (WalkPathBehavior *)0x0) {
              pWVar17 = (WalkPathBehavior *)0x0;
            }
            else {
              pWVar17 = cube::WalkPathBehavior::WalkPathBehavior(local_410,0x40000000);
            }
            local_484 = (WalkPathBehavior *)&pWVar17->WalkPathBehavior_data;
            local_8._0_1_ = 0xe;
            FUN_004e1420(local_484,(undefined4 *)puVar1);
            pvVar4 = (vfunction2 *)pSVar24->offset_0x0;
            local_66c = pWVar17;
            iVar16 = FUN_0052dfb0((undefined4 *)pvVar4,*(undefined4 **)(pvVar4 + 4),&local_66c);
            iVar20 = (pSVar7->SequentialBehavior_data).offset_0x4;
            if (iVar20 == 0x15555554) goto LAB_005133a4;
            (pSVar7->SequentialBehavior_data).offset_0x4 = iVar20 + 1;
            *(int *)(pvVar4 + 4) = iVar16;
            **(int **)(iVar16 + 4) = iVar16;
            if (local_458 != local_454) {
              local_470 = 3;
              pvVar26 = local_458;
              do {
                iVar20 = (int)local_454 - (int)pvVar26;
                uVar13 = rand();
                pvVar26 = local_458;
                uVar13 = uVar13 % (uint)(iVar20 / 0x18);
                local_40c = *(SequentialBehavior **)((int)local_458 + uVar13 * 0x18 + 0xc);
                local_414 = *(uint **)((int)local_458 + uVar13 * 0x18 + 8);
                puVar21 = *(uint **)((int)local_458 + uVar13 * 0x18 + 4);
                uVar14 = *(uint *)((int)local_458 + uVar13 * 0x18);
                local_34 = *(uint *)((int)local_458 + uVar13 * 0x18 + 0x10);
                local_30 = *(uint *)((int)local_458 + uVar13 * 0x18 + 0x14);
                iVar20 = local_45c;
                local_440 = puVar21;
                local_44 = uVar14;
                local_40 = puVar21;
                local_3c = local_414;
                local_38 = local_40c;
                uVar34 = __alldiv((uint)local_414,(uint)local_40c,0x10000,0);
                uVar13 = (uint)uVar34;
                uVar34 = __alldiv(uVar14,(uint)puVar21,0x10000,0);
                iVar20 = FUN_00406100(local_474,(uint)uVar34,uVar13,iVar20);
                if (iVar20 != 0) {
                  uVar13 = *(uint *)(iVar20 + 0x14);
                  uVar29 = ((int)uVar13 >> 0x1f) << 0x10 | uVar13 >> 0x10;
                  uVar13 = uVar13 << 0x10;
                  while( true ) {
                    local_34 = uVar13;
                    local_30 = uVar29;
                    iVar20 = FUN_00406050(local_474,uVar14,(uint)local_440,(uint)local_414,
                                          (uint)local_40c,uVar13,uVar29,local_45c);
                    if (((*(byte *)(iVar20 + 3) & 0x1f) == 0) ||
                       ((*(byte *)(iVar20 + 3) & 0x1f) == 2)) break;
                    bVar30 = 0xfffeffff < uVar13;
                    uVar13 = uVar13 + 0x10000;
                    uVar29 = uVar29 + bVar30;
                  }
                  FUN_004e1420(local_484,&local_44);
                  pvVar26 = local_458;
                }
                local_470 = local_470 + -1;
              } while (local_470 != 0);
              local_470 = 0;
              pSVar24 = local_434;
            }
            local_410 = operator_new(8);
            local_8._0_1_ = 0x1d;
            if (local_410 == (WalkPathBehavior *)0x0) {
              local_674 = (RandomWalkBehavior *)0x0;
            }
            else {
              local_674 = cube::RandomWalkBehavior::RandomWalkBehavior
                                    ((RandomWalkBehavior *)local_410);
            }
            pvVar4 = (vfunction2 *)pSVar24->offset_0x0;
            local_8._0_1_ = 0xe;
            iVar20 = FUN_0052dfb0((undefined4 *)pvVar4,*(undefined4 **)(pvVar4 + 4),&local_674);
            if (pSVar24->offset_0x4 == 0x15555554) goto LAB_005133a4;
            pSVar24->offset_0x4 = pSVar24->offset_0x4 + 1;
            *(int *)(pvVar4 + 4) = iVar20;
            **(int **)(iVar20 + 4) = iVar20;
            *(SequentialBehavior **)&local_404[1].Spawn_data.field_0x120 = local_424;
            FUN_004f2be0((void *)(local_45c + 0x18),&local_478);
            uVar14 = local_43c;
            if (local_408[local_43c * 2 + 3] != local_408[local_43c * 2 + 4]) {
              iVar20 = rand();
              pSVar15 = local_478;
              local_40c = (SequentialBehavior *)0x0;
              local_440 = (uint *)(iVar20 % 3 + 1);
              if (0 < (int)local_440) {
                do {
                  pSVar18 = operator_new(0x10f0);
                  if (pSVar18 == (Spawn *)0x0) {
                    pSVar18 = (Spawn *)0x0;
                  }
                  else {
                    pSVar18 = cube::Spawn::Spawn(pSVar18);
                  }
                  *(undefined4 *)&(pSVar18->Spawn_data).field_0xc =
                       *(undefined4 *)&(pSVar15->Spawn_data).field_0xc;
                  *(undefined4 *)&(pSVar18->Spawn_data).field_0x10 =
                       *(undefined4 *)&(pSVar15->Spawn_data).field_0x10;
                  *(undefined4 *)&(pSVar18->Spawn_data).field_0x14 =
                       *(undefined4 *)&(pSVar15->Spawn_data).field_0x14;
                  *(undefined4 *)&(pSVar18->Spawn_data).field_0x18 =
                       *(undefined4 *)&(pSVar15->Spawn_data).field_0x18;
                  *(undefined4 *)&(pSVar18->Spawn_data).field_0x1c =
                       *(undefined4 *)&(pSVar15->Spawn_data).field_0x1c;
                  *(undefined4 *)&(pSVar18->Spawn_data).field_0x20 =
                       *(undefined4 *)&(pSVar15->Spawn_data).field_0x20;
                  (pSVar18->Spawn_data).offset_0x24 = 1;
                  puVar1 = &(pSVar18->Spawn_data).field_0x76;
                  *(ushort *)puVar1 = *(ushort *)puVar1 | 0x1000;
                  iVar20 = local_408[uVar14 * 2 + 4];
                  iVar16 = local_408[local_43c * 2 + 3];
                  local_694 = pSVar18;
                  uVar14 = rand();
                  (pSVar18->Spawn_data).offset_0x28 =
                       *(undefined4 *)
                        (local_408[local_43c * 2 + 3] + (uVar14 % (uint)(iVar20 - iVar16 >> 2)) * 4)
                  ;
                  (pSVar18->Spawn_data).offset_0x30 = param_2[9];
                  (pSVar18->Spawn_data).offset_0x54 = (char)param_2[10];
                  local_410 = operator_new(0xc);
                  local_8._0_1_ = 0x1e;
                  if (local_410 == (WalkPathBehavior *)0x0) {
                    local_404 = (Spawn *)0x0;
                  }
                  else {
                    local_404 = (Spawn *)cube::SequentialBehavior::SequentialBehavior
                                                   ((SequentialBehavior *)local_410);
                  }
                  pSVar8 = local_404;
                  local_8._0_1_ = 0xe;
                  local_410 = operator_new(0x14);
                  local_8._0_1_ = 0x1f;
                  if (local_410 == (WalkPathBehavior *)0x0) {
                    local_67c = (CombatBehavior *)0x0;
                  }
                  else {
                    local_67c = cube::CombatBehavior::CombatBehavior
                                          ((CombatBehavior *)local_410,0x41a00000);
                  }
                  pSVar27 = &pSVar8->Spawn_data;
                  local_414 = *(uint **)pSVar27;
                  local_8._0_1_ = 0xe;
                  uVar14 = FUN_0052dfb0(local_414,(undefined4 *)local_414[1],&local_67c);
                  iVar20 = (pSVar8->Spawn_data).offset_0x4;
                  if (iVar20 == 0x15555554) goto LAB_005133a4;
                  (pSVar8->Spawn_data).offset_0x4 = iVar20 + 1;
                  local_414[1] = uVar14;
                  **(uint **)(uVar14 + 4) = uVar14;
                  local_410 = operator_new(0x10);
                  local_8._0_1_ = 0x20;
                  if (local_410 == (WalkPathBehavior *)0x0) {
                    local_684 = (CompanionBehavior *)0x0;
                  }
                  else {
                    local_684 = cube::CompanionBehavior::CompanionBehavior
                                          ((CompanionBehavior *)local_410);
                  }
                  (local_684->CompanionBehavior_data).offset_0x4 = (pSVar15->Spawn_data).offset_0x44
                  ;
                  (local_684->CompanionBehavior_data).offset_0x8 = (pSVar15->Spawn_data).offset_0x48
                  ;
                  local_414 = *(uint **)pSVar27;
                  local_8._0_1_ = 0xe;
                  uVar14 = FUN_0052dfb0(local_414,(undefined4 *)local_414[1],&local_684);
                  iVar20 = (pSVar8->Spawn_data).offset_0x4;
                  if (iVar20 == 0x15555554) goto LAB_005133a4;
                  (pSVar8->Spawn_data).offset_0x4 = iVar20 + 1;
                  local_414[1] = uVar14;
                  **(uint **)(uVar14 + 4) = uVar14;
                  local_410 = operator_new(8);
                  local_8._0_1_ = 0x21;
                  if (local_410 == (WalkPathBehavior *)0x0) {
                    local_68c = (RandomWalkBehavior *)0x0;
                  }
                  else {
                    local_68c = cube::RandomWalkBehavior::RandomWalkBehavior
                                          ((RandomWalkBehavior *)local_410);
                  }
                  local_414 = *(uint **)pSVar27;
                  local_8._0_1_ = 0xe;
                  uVar14 = FUN_0052dfb0(local_414,(undefined4 *)local_414[1],&local_68c);
                  iVar20 = (pSVar8->Spawn_data).offset_0x4;
                  if (iVar20 == 0x15555554) goto LAB_005133a4;
                  (pSVar8->Spawn_data).offset_0x4 = iVar20 + 1;
                  local_414[1] = uVar14;
                  **(uint **)(uVar14 + 4) = uVar14;
                  *(Spawn **)&pSVar18[1].Spawn_data.field_0x120 = local_404;
                  FUN_004f2be0((void *)(local_45c + 0x18),&local_694);
                  local_40c = (SequentialBehavior *)((int)&local_40c->vftablePtr + 1);
                  uVar14 = local_43c;
                } while ((int)local_40c < (int)local_440);
              }
            }
          }
        }
        else {
          if (local_3fd != '\0') {
            local_1dc = 1;
            local_214 = 1;
            local_210 = 0;
            local_20c = 0;
            local_204 = 0;
            local_1fc = (_Container_base0 *)0x0;
            local_1f8 = (_Container_base0 *)0x0;
            local_1f4 = 0;
            local_1f0 = 0;
            local_1ec[0] = 0;
            local_1e8 = 0;
            local_1e4 = 0;
            local_1e0 = 0;
            local_1de = 0;
            local_d8 = 0;
            memset(local_1d8,0,0x100);
            local_d4 = 0;
            local_d0 = 0;
            local_cc = 0xffffffff;
            local_c8 = 0xffffffff;
            local_c4 = 0xffffffff;
            local_c0 = 0;
            local_80 = 0x4019999a;
            uStack_7c = 0x4019999a;
            local_78 = 0x3f000000;
            local_8 = CONCAT31(local_8._1_3_,0xf);
            local_244[0] = 0x41;
            local_220 = 0x4019999a;
            uStack_21c = 0x4019999a;
            local_218 = 0x3f000000;
            local_224 = rand();
            local_224 = local_224 & 0x80000003;
            if ((int)local_224 < 0) {
              local_224 = (local_224 - 1 | 0xfffffffc) + 1;
            }
            local_408 = (uint *)0x0;
            do {
              local_404 = (Spawn *)(((int)local_408 >> 0x1f) << 0x10 | (uint)local_408 >> 0x10);
              uVar13 = 0;
              local_40c = (SequentialBehavior *)((int)local_408 << 0x10);
              do {
                iVar20 = local_45c;
                local_3fc = uVar14 + (int)local_40c;
                local_3f8 = (int)local_404 + CARRY4(uVar14,(uint)local_40c) + local_44c;
                local_3f4 = local_444 + uVar13 * 0x10000;
                local_22c = local_434;
                local_3f0 = local_448 + (((int)uVar13 >> 0x1f) << 0x10 | uVar13 >> 0x10) +
                            (uint)CARRY4(local_444,uVar13 * 0x10000);
                local_228 = local_424;
                local_244[2] = local_3fc;
                local_244[3] = local_3f8;
                local_234 = local_3f4;
                local_230 = local_3f0;
                cVar12 = FUN_005287b0(local_474,(int)local_244,local_45c,'\x01');
                if (cVar12 != '\0') {
                  puVar21 = *(uint **)(iVar20 + 0x10);
                  puVar25 = (uint *)(iVar20 + 0xc);
                  local_408 = puVar25;
                  if (local_244 < puVar21) {
                    puVar22 = (uint *)*puVar25;
                    if (local_244 < puVar22) goto LAB_00511f39;
                    if (puVar21 == *(uint **)(iVar20 + 0x14)) {
                      FUN_004ce8e0(puVar25,1);
                    }
                    puVar21 = *(uint **)(iVar20 + 0x10);
                    puVar22 = (uint *)((((int)local_244 - (int)puVar22) / 0x188) * 0x188 + *puVar25)
                    ;
                    local_8 = CONCAT31(local_8._1_3_,0x10);
                    local_440 = puVar21;
                    local_414 = puVar21;
                    local_404 = (Spawn *)puVar21;
                    if (puVar21 != (uint *)0x0) {
                      *puVar21 = *puVar22;
                      puVar21[2] = puVar22[2];
                      puVar21[3] = puVar22[3];
                      puVar21[4] = puVar22[4];
                      puVar21[5] = puVar22[5];
                      puVar21[6] = puVar22[6];
                      puVar21[7] = puVar22[7];
                      puVar21[8] = puVar22[8];
                      puVar21[9] = puVar22[9];
                      puVar21[10] = puVar22[10];
                      puVar21[0xb] = puVar22[0xb];
                      *(char *)(puVar21 + 0xc) = (char)puVar22[0xc];
                      puVar21[0xd] = puVar22[0xd];
                      puVar21[0xe] = puVar22[0xe];
                      puVar21[0x10] = puVar22[0x10];
                      puVar21[0x11] = puVar22[0x11];
                      FUN_004c82a0(puVar21 + 0x12,(int *)(puVar22 + 0x12));
                      puVar21[0x15] = puVar22[0x15];
                      FUN_00413710(puVar21 + 0x16,(undefined1 *)(puVar22 + 0x16));
                      puVar21[0x5c] = puVar22[0x5c];
                      puVar21[0x5d] = puVar22[0x5d];
                      *(uint *)((int)local_404 + 0x178) = puVar22[0x5e];
                      *(uint *)((int)local_404 + 0x17c) = puVar22[0x5f];
                      *(uint *)((int)local_404 + 0x180) = puVar22[0x60];
                      *(uint *)((int)local_404 + 0x184) = puVar22[0x61];
                      puVar25 = local_408;
                    }
                  }
                  else {
LAB_00511f39:
                    if (puVar21 == *(uint **)(iVar20 + 0x14)) {
                      FUN_004ce8e0(puVar25,1);
                    }
                    puVar21 = *(uint **)(iVar20 + 0x10);
                    local_8 = CONCAT31(local_8._1_3_,0x11);
                    local_440 = puVar21;
                    local_414 = puVar21;
                    if (puVar21 != (uint *)0x0) {
                      *puVar21 = local_244[0];
                      puVar21[2] = local_244[2];
                      puVar21[3] = local_244[3];
                      puVar21[4] = local_234;
                      puVar21[5] = local_230;
                      puVar21[6] = (uint)local_22c;
                      puVar21[7] = (uint)local_228;
                      puVar21[8] = local_224;
                      puVar21[9] = local_220;
                      puVar21[10] = uStack_21c;
                      puVar21[0xb] = local_218;
                      *(undefined1 *)(puVar21 + 0xc) = local_214;
                      puVar21[0xd] = local_210;
                      puVar21[0xe] = local_20c;
                      puVar21[0x10] = (uint)local_204;
                      puVar21[0x11] = local_204._4_4_;
                      FUN_004c82a0(puVar21 + 0x12,(int *)&local_1fc);
                      puVar21[0x15] = local_1f0;
                      FUN_00413710(puVar21 + 0x16,(undefined1 *)local_1ec);
                      puVar21[0x5c] = local_d4;
                      puVar21[0x5d] = local_d0;
                      puVar21[0x5e] = local_cc;
                      puVar21[0x5f] = local_c8;
                      puVar21[0x60] = local_c4;
                      puVar21[0x61] = local_c0;
                      puVar25 = local_408;
                    }
                  }
                  puVar25[1] = puVar25[1] + 0x188;
                  local_438 = local_244[2];
                  local_44c = local_244[3];
                  local_444 = local_234;
                  local_448 = local_230;
                  local_434 = local_22c;
                  local_424 = local_228;
                  goto LAB_005120c1;
                }
                uVar13 = uVar13 + 1;
                uVar14 = local_438;
              } while ((int)uVar13 < 3);
              local_408 = (uint *)((int)local_408 + 1);
            } while ((int)local_408 < 3);
LAB_005120c1:
            uVar35 = FUN_0054a946();
            local_43c = 0;
            do {
              local_414 = (uint *)(local_43c * 0x10000 - (uint)uVar35);
              local_404 = (Spawn *)(((((int)local_43c >> 0x1f) << 0x10 | local_43c >> 0x10) -
                                    (int)(uVar35 >> 0x20)) -
                                   (uint)(local_43c * 0x10000 < (uint)uVar35));
              local_408 = (undefined4 *)0x0;
              do {
                puVar25 = local_408;
                puVar21 = local_414;
                local_40c = (SequentialBehavior *)(uVar35 >> 0x20);
                local_470 = (uint)uVar35;
                local_364 = 1;
                local_39c = 1;
                local_398 = 0;
                local_394 = (WalkPathBehavior_vftable *)0x0;
                local_38c = 0;
                local_384 = (undefined4 *)0x0;
                local_380 = (undefined4 *)0x0;
                local_37c = 0;
                local_378 = (WalkPathBehavior_vftable *)0x0;
                local_374[0] = 0;
                local_370 = 0;
                local_36c = 0;
                local_368 = 0;
                local_366 = 0;
                local_260 = 0;
                memset(local_360,0,0x100);
                local_25c = 0;
                local_258 = 0;
                local_254 = 0xffffffff;
                local_250 = 0xffffffff;
                uStack_24c = 0xffffffff;
                local_248 = 0;
                local_8 = CONCAT31(local_8._1_3_,0x12);
                uVar14 = rand();
                uVar14 = uVar14 & 0x80000003;
                if ((int)uVar14 < 0) {
                  uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
                }
                if (uVar14 == 1) {
                  local_68 = 0x3f800000;
                  uStack_64 = 0x3f800000;
                  local_3a8 = 0x3f8000003f800000;
                  local_60 = 0x3f000000;
                  local_3a0 = 0x3f000000;
                  local_3cc[0] = (CombatBehavior_vftable *)0x10;
                }
                else if (uVar14 == 2) {
                  local_5c = 0x40400000;
                  uStack_58 = 0x40400000;
                  local_3a8 = 0x4040000040400000;
                  local_54 = 0x3f800000;
                  local_3a0 = 0x3f800000;
                  local_3cc[0] = (CombatBehavior_vftable *)0xc;
                }
                else if (uVar14 == 3) {
                  local_50 = 0x40000000;
                  uStack_4c = 0x40000000;
                  local_3a8 = 0x4000000040000000;
                  local_48 = 0x3dcccccd;
                  local_3a0 = 0x3dcccccd;
                  local_3cc[0] = (CombatBehavior_vftable *)0x45;
                }
                else {
                  local_74 = 0x40800000;
                  uStack_70 = 0x40800000;
                  local_3a8 = 0x4080000040800000;
                  local_6c = 0x40400000;
                  local_3a0 = 0x40400000;
                  local_3cc[0] = (CombatBehavior_vftable *)0x42;
                }
                local_3ac = rand();
                iVar20 = local_45c;
                local_3ac = local_3ac & 0x80000003;
                if ((int)local_3ac < 0) {
                  local_3ac = (local_3ac - 1 | 0xfffffffc) + 1;
                }
                uVar14 = (int)puVar25 * 0x10000 - local_470;
                local_3e4 = local_438 + (int)puVar21;
                local_3e0 = (int)&local_404->vftablePtr +
                            CARRY4(local_438,(uint)puVar21) + local_44c;
                local_3dc = local_444 + uVar14;
                local_3b4 = local_434;
                local_3d8 = local_448 +
                            (((((int)puVar25 >> 0x1f) << 0x10 | (uint)puVar25 >> 0x10) -
                             (int)local_40c) - (uint)((uint)((int)puVar25 * 0x10000) < local_470)) +
                            (uint)CARRY4(local_444,uVar14);
                local_3b0 = local_424;
                local_3c4 = local_3e4;
                local_3c0 = local_3e0;
                local_3bc = local_3dc;
                local_3b8 = local_3d8;
                cVar12 = FUN_005287b0(local_474,(int)local_3cc,local_45c,'\x01');
                if (cVar12 != '\0') {
                  ppCVar2 = *(CombatBehavior_vftable ***)(iVar20 + 0x10);
                  puVar21 = (uint *)(iVar20 + 0xc);
                  local_440 = puVar21;
                  if (local_3cc < ppCVar2) {
                    ppCVar3 = (CombatBehavior_vftable **)*puVar21;
                    if (local_3cc < ppCVar3) goto LAB_005124d3;
                    if (ppCVar2 == *(CombatBehavior_vftable ***)(iVar20 + 0x14)) {
                      FUN_004ce8e0(puVar21,1);
                    }
                    pWVar17 = *(WalkPathBehavior **)(iVar20 + 0x10);
                    puVar23 = (undefined4 *)
                              ((((int)local_3cc - (int)ppCVar3) / 0x188) * 0x188 + *puVar21);
                    local_6a0 = (double)CONCAT44(pWVar17,(undefined4)local_6a0);
                    local_8 = CONCAT31(local_8._1_3_,0x13);
                    local_484 = pWVar17;
                    local_410 = pWVar17;
                    if (pWVar17 != (WalkPathBehavior *)0x0) {
                      pWVar17->vftablePtr = (WalkPathBehavior_vftable *)*puVar23;
                      (pWVar17->WalkPathBehavior_data).offset_0x4 = puVar23[2];
                      (pWVar17->WalkPathBehavior_data).offset_0x8 = puVar23[3];
                      (pWVar17->WalkPathBehavior_data).offset_0xc = puVar23[4];
                      (pWVar17->WalkPathBehavior_data).offset_0x10 = puVar23[5];
                      (pWVar17->WalkPathBehavior_data).offset_0x14 = puVar23[6];
                      pWVar17[1].vftablePtr = (WalkPathBehavior_vftable *)puVar23[7];
                      pWVar17[1].WalkPathBehavior_data.offset_0x0 = puVar23[8];
                      pWVar17[1].WalkPathBehavior_data.offset_0x4 = puVar23[9];
                      pWVar17[1].WalkPathBehavior_data.offset_0x8 = puVar23[10];
                      pWVar17[1].WalkPathBehavior_data.offset_0xc = puVar23[0xb];
                      *(undefined1 *)&pWVar17[1].WalkPathBehavior_data.offset_0x10 =
                           *(undefined1 *)(puVar23 + 0xc);
                      pWVar17[1].WalkPathBehavior_data.offset_0x14 = puVar23[0xd];
                      pWVar17[2].vftablePtr = (WalkPathBehavior_vftable *)puVar23[0xe];
                      pWVar17[2].WalkPathBehavior_data.offset_0x4 = puVar23[0x10];
                      pWVar17[2].WalkPathBehavior_data.offset_0x8 = puVar23[0x11];
                      FUN_004c82a0(&pWVar17[2].WalkPathBehavior_data.offset_0xc,puVar23 + 0x12);
                      pWVar17[3].vftablePtr = (WalkPathBehavior_vftable *)puVar23[0x15];
                      FUN_00413710(&pWVar17[3].WalkPathBehavior_data,(undefined1 *)(puVar23 + 0x16))
                      ;
                      pWVar17[0xd].WalkPathBehavior_data.offset_0x0 = puVar23[0x5c];
                      pWVar17[0xd].WalkPathBehavior_data.offset_0x4 = puVar23[0x5d];
                      local_484[0xd].WalkPathBehavior_data.offset_0x8 = puVar23[0x5e];
                      local_484[0xd].WalkPathBehavior_data.offset_0xc = puVar23[0x5f];
                      local_484[0xd].WalkPathBehavior_data.offset_0x10 = puVar23[0x60];
                      local_484[0xd].WalkPathBehavior_data.offset_0x14 = puVar23[0x61];
                      puVar21 = local_440;
                    }
                  }
                  else {
LAB_005124d3:
                    if (ppCVar2 == *(CombatBehavior_vftable ***)(iVar20 + 0x14)) {
                      FUN_004ce8e0(puVar21,1);
                    }
                    pWVar17 = *(WalkPathBehavior **)(iVar20 + 0x10);
                    local_6a0 = (double)CONCAT44(pWVar17,(undefined4)local_6a0);
                    local_8 = CONCAT31(local_8._1_3_,0x14);
                    local_410 = pWVar17;
                    if (pWVar17 != (WalkPathBehavior *)0x0) {
                      pWVar17->vftablePtr = (WalkPathBehavior_vftable *)local_3cc[0];
                      (pWVar17->WalkPathBehavior_data).offset_0x4 = local_3c4;
                      (pWVar17->WalkPathBehavior_data).offset_0x8 = local_3c0;
                      (pWVar17->WalkPathBehavior_data).offset_0xc = local_3bc;
                      (pWVar17->WalkPathBehavior_data).offset_0x10 = local_3b8;
                      (pWVar17->WalkPathBehavior_data).offset_0x14 = local_3b4;
                      pWVar17[1].vftablePtr = (WalkPathBehavior_vftable *)local_3b0;
                      pWVar17[1].WalkPathBehavior_data.offset_0x0 = local_3ac;
                      pWVar17[1].WalkPathBehavior_data.offset_0x4 = (undefined4)local_3a8;
                      pWVar17[1].WalkPathBehavior_data.offset_0x8 = local_3a8._4_4_;
                      pWVar17[1].WalkPathBehavior_data.offset_0xc = local_3a0;
                      *(undefined1 *)&pWVar17[1].WalkPathBehavior_data.offset_0x10 = local_39c;
                      pWVar17[1].WalkPathBehavior_data.offset_0x14 = local_398;
                      pWVar17[2].vftablePtr = local_394;
                      pWVar17[2].WalkPathBehavior_data.offset_0x4 = (undefined4)local_38c;
                      pWVar17[2].WalkPathBehavior_data.offset_0x8 = local_38c._4_4_;
                      FUN_004c82a0(&pWVar17[2].WalkPathBehavior_data.offset_0xc,(int *)&local_384);
                      pWVar17[3].vftablePtr = local_378;
                      FUN_00413710(&pWVar17[3].WalkPathBehavior_data,(undefined1 *)local_374);
                      pWVar17[0xd].WalkPathBehavior_data.offset_0x0 = local_25c;
                      pWVar17[0xd].WalkPathBehavior_data.offset_0x4 = local_258;
                      pWVar17[0xd].WalkPathBehavior_data.offset_0x8 = local_254;
                      pWVar17[0xd].WalkPathBehavior_data.offset_0xc = local_250;
                      pWVar17[0xd].WalkPathBehavior_data.offset_0x10 = uStack_24c;
                      pWVar17[0xd].WalkPathBehavior_data.offset_0x14 = local_248;
                    }
                  }
                  puVar21[1] = puVar21[1] + 0x188;
                }
                puVar10 = local_380;
                puVar9 = local_384;
                puVar23 = local_384;
                if (local_384 != (undefined4 *)0x0) {
                  for (; puVar23 != puVar10; puVar23 = puVar23 + 3) {
                    if ((void *)*puVar23 != (void *)0x0) {
                      operator_delete((void *)*puVar23);
                      *puVar23 = 0;
                      puVar23[1] = 0;
                      puVar23[2] = 0;
                    }
                  }
                  operator_delete(puVar9);
                }
                uVar35 = CONCAT44(local_40c,local_470);
                local_408 = (uint *)((int)local_408 + 7);
              } while ((int)local_408 < 0xe);
              local_43c = local_43c + 7;
            } while ((int)local_43c < 0xe);
            local_8._0_1_ = 0xe;
            pcVar28 = rand_exref;
            if (local_1fc != (_Container_base0 *)0x0) {
              std::_Container_base0::_Orphan_all((_Container_base0 *)&local_1fc);
              p_Var11 = local_1f8;
              for (this_00 = local_1fc; this_00 != p_Var11; this_00 = this_00 + 0xc) {
                if (*(int *)this_00 != 0) {
                  std::_Container_base0::_Orphan_all(this_00);
                  operator_delete(*(void **)this_00);
                  *(undefined4 *)this_00 = 0;
                  *(undefined4 *)(this_00 + 4) = 0;
                  *(undefined4 *)(this_00 + 8) = 0;
                }
              }
              operator_delete(local_1fc);
              pcVar28 = rand_exref;
            }
          }
          iVar20 = (*pcVar28)();
          local_414 = (uint *)(((float)iVar20 * 6.2831855) / 32767.0);
          iVar20 = (*pcVar28)();
          local_408 = (undefined4 *)0x0;
          local_440 = (uint *)(iVar20 % 3 + 1);
          if (0 < (int)local_440) {
            local_6a0 = (double)(int)local_440;
            do {
              local_40c = (SequentialBehavior *)
                          (float)(((double)((int)local_408 * 2) * 3.141592653589793) / local_6a0 +
                                 (double)(float)local_414);
              pSVar15 = operator_new(0x10f0);
              if (pSVar15 == (Spawn *)0x0) {
                pSVar15 = (Spawn *)0x0;
              }
              else {
                pSVar15 = cube::Spawn::Spawn(pSVar15);
              }
              (pSVar15->Spawn_data).offset_0x24 = 1;
              puVar1 = &(pSVar15->Spawn_data).field_0x76;
              *(ushort *)puVar1 = *(ushort *)puVar1 | 0x1000;
              (pSVar15->Spawn_data).offset_0x50 = ((float)local_40c * 180.0) / 3.1415927 + 90.0;
              dVar33 = (double)(float)local_40c;
              local_65c = pSVar15;
              libm_sse2_sin_precise();
              local_62c = (float)dVar33 * 3.0 * 65536.0;
              uVar35 = FUN_0054a946();
              dVar33 = (double)(float)local_40c;
              lVar5 = uVar35 + CONCAT44(local_448,local_444);
              libm_sse2_cos_precise();
              local_634 = (float)dVar33 * 3.0 * 65536.0;
              uVar35 = FUN_0054a946();
              lVar6 = uVar35 + CONCAT44(local_44c,local_438);
              *(int *)&(pSVar15->Spawn_data).field_0xc = (int)lVar6;
              *(int *)&(pSVar15->Spawn_data).field_0x14 = (int)lVar5;
              *(int *)&(pSVar15->Spawn_data).field_0x10 = (int)((ulonglong)lVar6 >> 0x20);
              *(SequentialBehavior_data **)&(pSVar15->Spawn_data).field_0x1c = local_434;
              *(int *)&(pSVar15->Spawn_data).field_0x18 = (int)((ulonglong)lVar5 >> 0x20);
              *(SequentialBehavior **)&(pSVar15->Spawn_data).field_0x20 = local_424;
              iVar20 = (int)local_41c - (int)local_420;
              uVar14 = rand();
              (pSVar15->Spawn_data).offset_0x28 =
                   *(undefined4 *)((int)local_420 + (uVar14 % (uint)(iVar20 >> 2)) * 4);
              (pSVar15->Spawn_data).offset_0x30 = param_2[9];
              (pSVar15->Spawn_data).offset_0x54 = (char)param_2[10];
              local_410 = operator_new(0xc);
              local_8._0_1_ = 0x15;
              if (local_410 == (WalkPathBehavior *)0x0) {
                local_40c = (SequentialBehavior *)0x0;
              }
              else {
                local_40c = cube::SequentialBehavior::SequentialBehavior
                                      ((SequentialBehavior *)local_410);
              }
              pSVar7 = local_40c;
              local_8._0_1_ = 0xe;
              local_410 = operator_new(0x14);
              local_8._0_1_ = 0x16;
              if (local_410 == (WalkPathBehavior *)0x0) {
                local_63c = (CombatBehavior *)0x0;
              }
              else {
                local_63c = cube::CombatBehavior::CombatBehavior
                                      ((CombatBehavior *)local_410,0x41a00000);
              }
              puVar23 = (pSVar7->SequentialBehavior_data).offset_0x0;
              pSVar24 = &pSVar7->SequentialBehavior_data;
              local_8._0_1_ = 0xe;
              iVar16 = FUN_0052dfb0(puVar23,(undefined4 *)puVar23[1],&local_63c);
              iVar20 = (pSVar7->SequentialBehavior_data).offset_0x4;
              if (iVar20 == 0x15555554) goto LAB_005133a4;
              (pSVar7->SequentialBehavior_data).offset_0x4 = iVar20 + 1;
              puVar23[1] = iVar16;
              **(int **)(iVar16 + 4) = iVar16;
              local_410 = operator_new(0x1c);
              local_8._0_1_ = 0x17;
              if (local_410 == (WalkPathBehavior *)0x0) {
                pWVar17 = (WalkPathBehavior *)0x0;
              }
              else {
                pWVar17 = cube::WalkPathBehavior::WalkPathBehavior(local_410,0x40000000);
              }
              local_8._0_1_ = 0xe;
              FUN_004e1420(&pWVar17->WalkPathBehavior_data,
                           (undefined4 *)&(pSVar15->Spawn_data).field_0xc);
              puVar23 = pSVar24->offset_0x0;
              local_644 = pWVar17;
              iVar16 = FUN_0052dfb0(puVar23,(undefined4 *)puVar23[1],&local_644);
              iVar20 = (pSVar7->SequentialBehavior_data).offset_0x4;
              if (iVar20 == 0x15555554) goto LAB_005133a4;
              (pSVar7->SequentialBehavior_data).offset_0x4 = iVar20 + 1;
              puVar23[1] = iVar16;
              **(int **)(iVar16 + 4) = iVar16;
              if ((local_460 == (float)local_480) && (local_408 == (undefined4 *)0x0)) {
                puVar1 = &(pSVar15->Spawn_data).field_0x76;
                *(ushort *)puVar1 = *(ushort *)puVar1 | 0x200;
                pSVar15[1].Spawn_data.field_0x16c = 1;
              }
              local_410 = operator_new(8);
              local_8._0_1_ = 0x18;
              if (local_410 == (WalkPathBehavior *)0x0) {
                local_64c = (RandomInteractionBehavior *)0x0;
              }
              else {
                local_64c = cube::RandomInteractionBehavior::RandomInteractionBehavior
                                      ((RandomInteractionBehavior *)local_410);
              }
              puVar23 = pSVar24->offset_0x0;
              local_8._0_1_ = 0xe;
              iVar16 = FUN_0052dfb0(puVar23,(undefined4 *)puVar23[1],&local_64c);
              iVar20 = (pSVar7->SequentialBehavior_data).offset_0x4;
              if (iVar20 == 0x15555554) goto LAB_005133a4;
              (pSVar7->SequentialBehavior_data).offset_0x4 = iVar20 + 1;
              puVar23[1] = iVar16;
              **(int **)(iVar16 + 4) = iVar16;
              local_410 = operator_new(8);
              local_8._0_1_ = 0x19;
              if (local_410 == (WalkPathBehavior *)0x0) {
                local_654 = (RandomWalkBehavior *)0x0;
              }
              else {
                local_654 = cube::RandomWalkBehavior::RandomWalkBehavior
                                      ((RandomWalkBehavior *)local_410);
              }
              puVar23 = pSVar24->offset_0x0;
              local_8._0_1_ = 0xe;
              iVar16 = FUN_0052dfb0(puVar23,(undefined4 *)puVar23[1],&local_654);
              iVar20 = (pSVar7->SequentialBehavior_data).offset_0x4;
              if (iVar20 == 0x15555554) goto LAB_005133a4;
              (pSVar7->SequentialBehavior_data).offset_0x4 = iVar20 + 1;
              puVar23[1] = iVar16;
              **(int **)(iVar16 + 4) = iVar16;
              *(SequentialBehavior **)&pSVar15[1].Spawn_data.field_0x120 = local_40c;
              FUN_0040a840(&(pSVar15->Spawn_data).offset_0x28,
                           (int)&(pSVar15->Spawn_data).offset_0x70,(undefined4 *)0x0);
              FUN_004fb480((int)pSVar15,0);
              FUN_004f2be0((void *)(local_45c + 0x18),&local_65c);
              local_408 = (uint *)((int)local_408 + 1);
            } while ((int)local_408 < (int)local_440);
          }
        }
        local_8._0_1_ = 2;
        if (local_458 != (void *)0x0) {
          std::_Container_base0::_Orphan_all((_Container_base0 *)&local_458);
          operator_delete(local_458);
          local_458 = (void *)0x0;
          local_454 = (void *)0x0;
          local_450 = 0;
        }
      }
      else {
        uVar13 = rand();
        uVar13 = uVar13 & 0x80000001;
        bVar30 = uVar13 == 0;
        if ((int)uVar13 < 0) {
          bVar30 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar30) {
          uVar13 = rand();
          uVar13 = uVar13 & 0x80000001;
          bVar30 = uVar13 == 0;
          if ((int)uVar13 < 0) {
            bVar30 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar30) goto LAB_00511ba9;
          goto LAB_00512b3e;
        }
        if (local_458 != (void *)0x0) {
LAB_00511b6a:
          operator_delete(local_458);
          local_458 = (void *)0x0;
          local_454 = (void *)0x0;
          local_450 = 0;
        }
      }
LAB_00513285:
      puVar21 = (uint *)param_3[1];
      puVar25 = (uint *)*param_3;
      local_460 = (float)((int)local_460 + 1);
    } while ((int)local_460 < ((int)puVar21 - (int)puVar25) / 0x18);
  }
  local_8._0_1_ = 1;
  if (local_46c != (void *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_46c);
    operator_delete(local_46c);
    local_46c = (void *)0x0;
    local_468 = 0;
    local_464 = 0;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_420 != (void *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_420);
    operator_delete(local_420);
    local_420 = (void *)0x0;
    local_41c = (void *)0x0;
    local_418 = 0;
  }
  local_8 = 0xffffffff;
  if (local_430 != (undefined4 *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_430);
    FUN_004f3bf0(local_430,local_42c);
    operator_delete(local_430);
  }
LAB_00513386:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* UNRESOLVED_513760 @ 00513760  kind=gamemisc  attributed-by=ledger  size=7494 */

/* WARNING: Removing unreachable block (ram,0x00516958) */
/* WARNING: Removing unreachable block (ram,0x005169f1) */

void FUN_00513760(float param_1,uint param_2,float param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fVar8;
  uint uVar9;
  void *pvVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  code *pcVar18;
  uint uVar19;
  bool bVar20;
  float10 fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined4 *puVar34;
  float fVar35;
  int local_814 [4];
  int local_804 [4];
  int local_7f4 [4];
  int local_7e4 [4];
  int local_7d4 [4];
  int local_7c4 [4];
  int local_7b4 [4];
  int local_7a4 [4];
  int local_794;
  uint local_790;
  float local_78c [32];
  double local_70c;
  undefined2 local_704;
  undefined1 local_702;
  undefined1 local_701;
  double local_700;
  undefined2 local_6f8;
  undefined1 local_6f6;
  undefined2 local_6f4;
  undefined1 local_6f2;
  undefined2 local_6f0;
  undefined1 local_6ee;
  undefined1 local_6ed;
  double local_6ec;
  double local_6e4;
  double local_6dc;
  undefined2 local_6d4;
  undefined1 local_6d2;
  undefined1 local_6d1;
  undefined2 local_6d0;
  undefined1 local_6ce;
  undefined2 local_6cc;
  undefined1 local_6ca;
  undefined1 local_6c9;
  undefined2 local_6c8;
  undefined1 local_6c6;
  undefined2 local_6c4;
  undefined1 local_6c2;
  undefined2 local_6c0;
  undefined1 local_6be;
  undefined2 local_6bc;
  undefined1 local_6ba;
  undefined1 local_6b9;
  undefined2 local_6b8;
  undefined1 local_6b6;
  undefined1 local_6b5;
  undefined2 local_6b4;
  undefined1 local_6b2;
  undefined1 local_6b1;
  undefined2 local_6b0;
  undefined1 local_6ae;
  undefined1 local_6ad;
  undefined2 local_6ac;
  undefined1 local_6aa;
  undefined1 local_6a9;
  undefined2 local_6a8;
  undefined1 local_6a6;
  undefined2 local_6a4;
  undefined1 local_6a2;
  undefined2 local_6a0;
  undefined1 local_69e;
  undefined2 local_69c;
  undefined1 local_69a;
  undefined2 local_698;
  undefined1 local_696;
  undefined1 local_695;
  undefined2 local_694;
  undefined1 local_692;
  undefined2 local_690;
  undefined1 local_68e;
  undefined1 local_68d;
  undefined2 local_68c;
  undefined1 local_68a;
  undefined2 local_688;
  undefined1 local_686;
  undefined2 local_684;
  undefined1 local_682;
  undefined1 local_681;
  undefined2 local_680;
  undefined1 local_67e;
  int local_67c;
  float fStack_678;
  float local_674;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  float local_658;
  undefined4 local_654;
  undefined8 local_650;
  float local_648;
  float local_644;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  float local_628;
  undefined4 local_624;
  float local_620;
  uint local_61c;
  float local_618;
  double local_614;
  undefined8 local_60c;
  undefined8 local_604;
  float local_5fc;
  uint local_5f8;
  undefined4 local_5f4;
  float local_5f0;
  uint local_5ec;
  double local_5e8;
  float local_5e0;
  uint local_5dc;
  float local_5d8;
  undefined4 *local_5d4;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b8;
  undefined4 *local_5b4;
  undefined4 *local_5b0;
  int local_5ac;
  void *local_5a8;
  void *local_5a4;
  int local_5a0;
  float local_59c;
  float local_598;
  float local_594;
  byte local_58d;
  float local_58c [3];
  float local_580 [3];
  float local_574 [3];
  float local_568 [3];
  float local_55c [3];
  float local_550 [3];
  float local_544 [3];
  float local_538 [3];
  double local_52c;
  double local_524;
  double local_51c;
  double local_514;
  double local_50c;
  double local_504;
  double local_4fc;
  double local_4f4;
  double local_4ec;
  double local_4e4;
  double local_4dc;
  double local_4d4;
  double local_4cc;
  double local_4c4;
  double local_4bc;
  double local_4b4;
  double local_4ac;
  double local_4a4;
  undefined4 local_49c [2];
  undefined4 auStack_494 [9];
  undefined8 local_470;
  float local_468;
  undefined4 local_464;
  undefined4 local_45c [2];
  undefined4 auStack_454 [9];
  undefined8 local_430;
  float local_428;
  undefined4 local_424;
  float local_41c;
  float local_418;
  double local_410 [3];
  float local_3f8;
  float local_3f4;
  float local_3ec;
  float local_3e8;
  undefined4 local_3e0 [2];
  float local_3d8;
  uint local_3d4;
  uint local_3d0;
  uint local_3cc;
  int local_3c8;
  uint local_3c4;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a0 [2];
  void *local_398;
  float local_394;
  float local_390;
  float local_38c;
  uint local_388;
  float local_384;
  undefined8 local_374;
  float local_36c;
  undefined4 local_368;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  double local_2dc [3];
  uint local_2c4;
  int local_2c0;
  int local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  uint local_2ac;
  float local_2a8;
  int local_2a4;
  float local_2a0 [3];
  uint local_294;
  int local_290;
  int local_28c;
  uint local_288;
  float local_284;
  int local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  uint local_264;
  int local_260;
  int local_25c;
  uint local_258;
  int local_254;
  int local_250;
  uint local_24c;
  int local_248;
  int local_244;
  uint local_240;
  int local_23c;
  int local_238;
  float local_234;
  float local_230;
  float local_22c;
  double local_228;
  double local_220;
  undefined8 local_218;
  float local_210;
  undefined8 local_20c;
  float local_204;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float local_1f4;
  float fStack_1f0;
  float local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined8 local_1dc;
  float local_1d4;
  undefined8 local_1d0;
  float local_1c8;
  undefined8 local_1c4;
  float local_1bc;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float fStack_19c;
  float local_198;
  undefined8 local_194;
  undefined8 local_18c;
  float local_17c;
  float fStack_178;
  undefined4 local_174;
  float local_170 [3];
  undefined8 local_164;
  float local_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float local_14c;
  float fStack_148;
  float local_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float fStack_130;
  float local_12c;
  float local_128;
  float fStack_124;
  float local_120;
  float local_11c [4];
  float local_10c;
  float local_108;
  float local_104 [4];
  float local_f4;
  float local_f0;
  float local_ec [4];
  float fStack_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float fStack_b8;
  float local_b4;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  float local_6c;
  undefined8 local_68;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  float local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c [9];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_5dc = param_2;
  local_5d0 = param_3;
  local_5ac = param_5;
  local_5c0 = (float)param_4;
  local_5cc = local_5c0 * 0.25;
  local_5f8 = ((int)param_1 >> 0x1f) << 0x10 | (uint)param_1 >> 0x10;
  local_5d8 = param_1;
  local_5a0 = param_7;
  local_5c4 = local_5cc;
  uVar29 = FUN_0054a946();
  pvVar10 = local_5a8;
  uVar9 = local_5dc;
  iVar5 = (int)(uVar29 >> 0x20);
  uVar17 = (uint)uVar29;
  local_5c8 = (float)((int)param_1 * 0x10000 - uVar17);
  local_5f8 = (local_5f8 - iVar5) - (uint)((uint)((int)param_1 * 0x10000) < uVar17);
  local_660 = (double)CONCAT44(local_5f8,local_5c8);
  local_5ec = local_5dc * 0x10000 - uVar17;
  local_61c = ((((int)local_5dc >> 0x1f) << 0x10 | local_5dc >> 0x10) - iVar5) -
              (uint)(local_5dc * 0x10000 < uVar17);
  local_668 = (double)CONCAT44(local_61c,local_5ec);
  iVar5 = FUN_00406100(local_5a8,(uint)local_5d8,local_5dc,param_7);
  if (iVar5 == 0) {
    fVar21 = (float10)FUN_004f8b40(pvVar10,(int)local_5d8,uVar9);
    local_5fc = (float)fVar21;
    local_594 = local_5fc;
  }
  else {
    local_5fc = *(float *)(iVar5 + 8);
  }
  pcVar18 = rand_exref;
  local_5f4 = local_5fc * 50.0 + 120.0;
  iVar5 = rand();
  local_5a4 = (void *)((float)(iVar5 % 0x50) + local_5f4);
  local_624 = local_5fc * 100.0 + 50.0;
  iVar5 = rand();
  local_598 = 240.0;
  local_2c[0] = 240.0;
  local_2c[1] = (float)local_5a4;
  local_658 = (float)(iVar5 % 0x32) + local_624;
  local_2c[2] = local_658;
  iVar5 = rand();
  local_594 = (float)(iVar5 % 0x50) + local_5f4;
  iVar5 = rand();
  fStack_34 = local_594;
  local_38 = 240.0;
  local_30 = (float)(iVar5 % 0x32) + local_624;
  if (param_6 == 5) {
    local_5ac = (int)((float)local_5ac * 0.7);
    param_4 = (int)(local_5c0 * 0.2);
    if (3 < (int)(local_5c0 * 0.2)) {
      param_4 = 3;
    }
    if ((float)local_5ac < (float)(param_4 << 3)) {
      local_5ac = (int)(float)(param_4 << 3);
    }
LAB_00513b3e:
    if (local_5cc < 0.3) {
      local_5cc = 0.3;
    }
    fVar27 = 0.3;
    if (local_5c4 < 0.3) {
LAB_00513b5c:
      local_5c4 = fVar27;
    }
  }
  else {
    if (param_6 == 1) {
      local_5cc = local_5cc * 0.5;
      local_5ac = local_5ac * 2;
      local_5c4 = 0.1;
      goto LAB_00513b3e;
    }
    if (param_6 == 6) {
      local_5c4 = local_5cc * 0.5;
      goto LAB_00513b3e;
    }
    if (param_6 == 3) {
      local_5a4 = (void *)0x43340000;
      local_2c[1] = 180.0;
      local_5cc = 2.0;
      local_598 = 240.0;
      local_2c[0] = 240.0;
      local_658 = 120.0;
      local_2c[2] = 120.0;
      local_38 = 220.0;
      fStack_34 = 100.0;
      local_30 = 50.0;
      fVar27 = 2.0;
      goto LAB_00513b5c;
    }
    if (param_6 != 2) goto LAB_00513b3e;
    local_5cc = 1.5;
    local_5c4 = 1.5;
    local_598 = 255.0;
    local_2c[0] = 255.0;
    local_5a4 = (void *)0x437f0000;
    local_2c[1] = 255.0;
    local_658 = 255.0;
    local_2c[2] = 255.0;
    local_38 = 255.0;
    fStack_34 = 255.0;
    local_30 = 255.0;
  }
  local_58d = '\0';
  local_594 = (local_5fc - 0.5) * 10.0;
  if (0.0 <= local_5fc) {
    if (1.0 < local_5fc) {
      local_5fc = 1.0;
    }
  }
  else {
    local_5fc = 0.0;
  }
  iVar5 = rand();
  if ((((float)iVar5 / 32767.0 < local_594) || (param_6 == 4)) || (param_6 == 3)) {
    iVar5 = rand();
    local_5b0 = (undefined4 *)(float)(iVar5 % 0x14);
    iVar5 = rand();
    local_59c = (float)(iVar5 % 0x9b + 0x32);
    iVar5 = rand();
    local_5b4 = (undefined4 *)(float)(iVar5 % 100);
    if (0.0 <= (float)local_5b0) {
      if (255.0 < (float)local_5b0) {
        local_5b0 = (undefined4 *)0x437f0000;
      }
    }
    else {
      local_5b0 = (undefined4 *)0x0;
    }
    if (0.0 <= local_59c) {
      if (255.0 < local_59c) {
        local_59c = 255.0;
      }
    }
    else {
      local_59c = 0.0;
    }
    if (0.0 <= (float)local_5b4) {
      if (255.0 < (float)local_5b4) {
        local_5b4 = (undefined4 *)0x437f0000;
      }
    }
    else {
      local_5b4 = (undefined4 *)0x0;
    }
    local_11c[3] = (float)local_5b0;
    local_10c = local_59c;
    local_108 = (float)local_5b4;
    local_2c[6] = (float)local_5b0;
    local_2c[7] = local_59c;
    local_2c[8] = (float)local_5b4;
    iVar5 = rand();
    fVar27 = 0.0;
    local_310 = (float)local_5b4 + 0.0;
    local_41c = (float)(iVar5 % 100 + 0x32);
    local_318 = local_41c + (float)local_5b0;
    local_314 = local_41c + local_59c;
    if (0.0 <= local_318) {
      local_104[3] = local_318;
      if (255.0 < local_318) {
        local_104[3] = 255.0;
      }
    }
    else {
      local_104[3] = 0.0;
    }
    if (0.0 <= local_314) {
      local_f4 = local_314;
      if (255.0 < local_314) {
        local_f4 = 255.0;
      }
    }
    else {
      local_f4 = 0.0;
    }
    puVar7 = local_5b0;
    local_418 = local_41c;
    local_2c[3] = local_104[3];
    local_2c[4] = local_f4;
    if (0.0 <= local_310) {
      local_f0 = local_310;
      local_2c[5] = local_310;
      if (255.0 < local_310) {
        local_f0 = 255.0;
        local_2c[5] = local_f0;
      }
    }
    else {
      local_f0 = 0.0;
      local_2c[5] = local_f0;
    }
  }
  else {
    iVar5 = FUN_00406100(pvVar10,(uint)local_5d8,local_5dc,param_7);
    if (iVar5 == 0) {
      fVar21 = (float10)FUN_004f8570(pvVar10,local_5d8,local_5dc);
      fVar27 = (float)fVar21;
      local_594 = fVar27;
    }
    else {
      fVar27 = *(float *)(iVar5 + 4);
    }
    if (fVar27 <= 0.5) {
      uVar9 = rand();
      uVar9 = uVar9 & 0x80000001;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
      }
      if (uVar9 == 0) {
        iVar5 = rand();
        iVar15 = rand();
        local_2a0[0] = (float)(iVar5 % 0x37 + 200);
        local_2a0[1] = 0.0;
        local_2a0[2] = (float)(iVar15 % 200);
        pfVar6 = FUN_004e2840(local_55c,local_2a0);
        local_5b0 = (undefined4 *)*pfVar6;
        local_59c = pfVar6[1];
        local_5b4 = (undefined4 *)pfVar6[2];
        local_2c[6] = (float)local_5b0;
        local_2c[7] = local_59c;
        local_2c[8] = (float)local_5b4;
        iVar5 = rand();
        local_2e8 = (float)(iVar5 % 100 + 100);
        local_270 = local_2e8 + (float)local_5b0;
        local_268 = local_2e8 + (float)local_5b4;
        local_26c = local_2e8 + local_59c;
        puVar7 = local_5b0;
        local_2e4 = local_2e8;
        local_2e0 = local_2e8;
        pfVar6 = FUN_004e2840(local_574,&local_270);
        local_2c[3] = *pfVar6;
        local_2c[4] = pfVar6[1];
        local_2c[5] = pfVar6[2];
        local_58d = '\x01';
        fVar27 = 0.0;
      }
      else if (uVar9 == 1) {
        iVar5 = rand();
        local_594 = (float)(iVar5 % 0x14);
        iVar5 = rand();
        iVar15 = rand();
        local_27c = local_594;
        local_278 = (float)(iVar5 % 100 + 0x78);
        local_274 = (float)(iVar15 % 100);
        pfVar6 = FUN_004e2840(local_568,&local_27c);
        local_5b0 = (undefined4 *)*pfVar6;
        local_59c = pfVar6[1];
        local_5b4 = (undefined4 *)pfVar6[2];
        local_2c[6] = (float)local_5b0;
        local_2c[7] = local_59c;
        local_2c[8] = (float)local_5b4;
        iVar5 = rand();
        fVar27 = 0.0;
        local_3f8 = (float)(iVar5 % 0x96 + 100);
        local_2b8 = local_3f8 + (float)local_5b0;
        local_2b4 = local_3f8 + local_59c;
        local_2b0 = (float)local_5b4 + 0.0;
        puVar7 = local_5b0;
        local_3f4 = local_3f8;
        pfVar6 = FUN_004e2840(local_544,&local_2b8);
        local_2c[3] = *pfVar6;
        local_2c[4] = pfVar6[1];
        local_2c[5] = pfVar6[2];
      }
      else {
        local_5b4 = (undefined4 *)local_2c[8];
        local_59c = local_2c[7];
        local_5b0 = (undefined4 *)local_2c[6];
        fVar27 = 0.0;
        puVar7 = (undefined4 *)local_2c[6];
      }
    }
    else {
      iVar5 = rand();
      local_5b0 = (undefined4 *)(float)(iVar5 % 0x37 + 200);
      iVar5 = rand();
      local_59c = (float)(iVar5 % 100);
      iVar5 = rand();
      local_2c[6] = (float)local_5b0;
      local_2c[7] = local_59c;
      local_5b4 = (undefined4 *)(float)(iVar5 % 0x32);
      local_2c[8] = (float)local_5b4;
      iVar5 = rand();
      fVar27 = 0.0;
      local_3ec = (float)(iVar5 % 100 + 0x32);
      local_234 = (float)local_5b0 + local_3ec;
      local_230 = local_59c + local_3ec;
      local_22c = (float)local_5b4 + 0.0;
      puVar7 = local_5b0;
      local_3e8 = local_3ec;
      pfVar6 = FUN_004e2840(local_58c,&local_234);
      local_2c[3] = *pfVar6;
      local_2c[4] = pfVar6[1];
      local_2c[5] = pfVar6[2];
      local_58d = '\x01';
    }
  }
  if (param_6 == 2) {
    puVar7 = (undefined4 *)0x43160000;
    local_5b0 = (undefined4 *)0x43160000;
    local_2c[6] = 150.0;
    local_59c = 255.0;
    local_2c[7] = 255.0;
    local_2c[3] = 244.0;
    local_2c[4] = 255.0;
    local_2c[5] = 0.0;
    local_58d = '\0';
    local_5b4 = (undefined4 *)fVar27;
    local_2c[8] = fVar27;
  }
  if (local_5fc < 0.2) {
    local_5b8 = 1.0 - (local_5fc - 0.1) / 0.1;
    if (1.0 < local_5b8) {
      local_5b8 = 1.0;
    }
    local_5f4 = 1.0 - local_5b8;
    local_594 = local_5f4 * (float)puVar7;
    local_5c0 = local_5f4 * local_59c;
    local_5f0 = local_5f4 * (float)local_5b4;
    local_354 = local_594;
    local_350 = local_5c0;
    local_34c = local_5f0;
    pfVar6 = FUN_0052d870(local_538,(int)local_5d8,local_5dc);
    local_334 = pfVar6[2] * local_5b8;
    local_33c = local_5b8 * *pfVar6;
    local_5b4 = (undefined4 *)(local_334 + local_5f0);
    local_338 = local_5b8 * pfVar6[1];
    local_5b0 = (undefined4 *)(local_33c + local_594);
    local_594 = local_5f4 * local_2c[3];
    local_59c = local_338 + local_5c0;
    local_5c0 = local_5f4 * local_2c[4];
    local_5f0 = local_5f4 * local_2c[5];
    local_30c = (float)local_5b0;
    local_308 = local_59c;
    local_304 = (float)local_5b4;
    local_2f4 = local_594;
    local_2f0 = local_5c0;
    local_2ec = local_5f0;
    local_2c[6] = (float)local_5b0;
    local_2c[7] = local_59c;
    local_2c[8] = (float)local_5b4;
    pfVar6 = FUN_0052d870(local_550,(int)local_5d8,local_5dc);
    local_300 = *pfVar6 * local_5b8;
    local_2fc = pfVar6[1] * local_5b8;
    local_2f8 = pfVar6[2] * local_5b8;
    local_330 = local_300 + local_594;
    local_32c = local_2fc + local_5c0;
    local_328 = local_2f8 + local_5f0;
    local_360 = local_5b8 * 120.0;
    local_358 = local_5b8 * 80.0;
    local_348 = local_5f4 * local_598;
    local_344 = local_5f4 * (float)local_5a4;
    local_340 = local_5f4 * local_658;
    local_324 = local_360 + local_348;
    local_320 = local_360 + local_344;
    local_31c = local_358 + local_340;
    local_2c[0] = local_324;
    local_2c[1] = local_320;
    local_2c[2] = local_31c;
    local_35c = local_360;
    local_2c[3] = local_330;
    local_2c[4] = local_32c;
    local_2c[5] = local_328;
  }
  local_5b8 = 0.0;
  local_5a4 = (void *)0x0;
  if (param_6 == 3) {
    iVar5 = rand();
    local_5b8 = (0.5 - (float)iVar5 / 32767.0) * (float)local_5ac;
    iVar5 = rand();
    fVar27 = (float)param_4;
    local_5a4 = (void *)((0.5 - (float)iVar5 / 32767.0) * (float)local_5ac);
    iVar5 = *(int *)(param_7 + 0x60) * 0x100;
    if ((((float)(int)local_5d8 + local_5b8) - fVar27 < (float)iVar5) ||
       ((float)(iVar5 + 0x100) <= fVar27 + (float)(int)local_5d8 + local_5b8)) {
      local_5b8 = 0.0;
    }
    iVar5 = *(int *)(param_7 + 100) * 0x100;
    if ((((float)(int)local_5dc + (float)local_5a4) - fVar27 < (float)iVar5) ||
       ((float)(iVar5 + 0x100) <= fVar27 + (float)(int)local_5dc + (float)local_5a4)) {
      local_5a4 = (void *)0x0;
    }
  }
  fVar27 = (float)(int)(((float)(int)local_5d8 - local_5cc) - 1.0);
  fVar28 = (float)(int)fVar27;
  fVar22 = (float)(int)local_5d8 + local_5cc + 1.0;
  local_5bc = fVar28;
  local_598 = fVar27;
  local_594 = fVar22;
  if (fVar28 <= fVar22) {
    fVar26 = (float)(int)local_5dc + local_5cc + 1.0;
    puVar7 = (undefined4 *)(int)(((float)(int)local_5dc - local_5cc) - 1.0);
    local_648 = fVar26;
    local_5d4 = puVar7;
    do {
      local_5c0 = (float)(int)puVar7;
      if (local_5c0 <= fVar26) {
        local_618 = (float)((int)local_5d0 + local_5ac);
        fVar8 = (float)((int)local_5d0 + -2);
        local_5b4 = puVar7;
        local_5f0 = fVar8;
        local_5bc = fVar28;
        local_598 = fVar27;
        do {
          if ((int)fVar8 <= (int)local_618) {
            local_674 = (float)local_5ac + 2.0;
            local_628 = (float)(((int)local_618 - (int)local_5d0) + 2);
            fVar22 = local_618;
            do {
              fVar27 = local_598;
              local_644 = (float)(int)local_628 / local_674;
              if (local_644 < 0.0) {
                local_644 = 0.0;
              }
              fVar26 = local_644 * local_644;
              local_620 = local_598;
              local_59c = (1.0 - fVar26) * local_5cc + fVar26 * local_5c4;
              local_5b0 = local_5b4;
              if (param_6 == 3) {
                local_620 = (float)(int)(local_5b8 * fVar26 + fVar28);
                local_5b0 = (undefined4 *)(int)((float)local_5a4 * fVar26 + local_5c0);
              }
              if (local_59c <= 0.8) {
                uVar30 = __alldiv(local_5ec,local_61c,0x10000,0);
                uVar32 = __alldiv((uint)local_5c8,local_5f8,0x10000,0);
                local_228 = (double)((int)local_598 - (int)uVar32) / (double)local_59c;
                local_220 = (double)((int)local_5b4 - (int)uVar30) / (double)local_59c;
                local_4fc = local_228;
                local_4f4 = local_220;
              }
              else {
                uVar17 = ((int)local_5b4 >> 0x1f) << 0x10 | (uint)local_5b4 >> 0x10;
                uVar9 = (int)local_5b4 * 0x10000;
                if (param_6 == 6) {
                  local_604 = (double)CONCAT44((uVar17 - local_61c) - (uint)(uVar9 < local_5ec),
                                               uVar9 - local_5ec);
                  local_5e8 = (double)(longlong)local_604 * 1.52587890625e-05;
                  local_5e0 = 5.0 / local_59c;
                  local_630 = (double)CONCAT44(((((int)local_598 >> 0x1f) << 0x10 |
                                                (uint)local_598 >> 0x10) - local_5f8) -
                                               (uint)((uint)((int)local_598 * 0x10000) <
                                                     (uint)local_5c8),
                                               (int)local_598 * 0x10000 - (int)local_5c8);
                  local_638 = (double)(longlong)local_630;
                  local_6dc = local_638 * 1.52587890625e-05;
                  local_6ec = (double)(int)fVar22 * 0.025;
                  fVar21 = FUN_004d5d30(SUB84((double)(int)local_5b4 * 0.025,0),
                                        (int)((ulonglong)((double)(int)local_5b4 * 0.025) >> 0x20),
                                        local_6ec);
                  local_638 = (double)CONCAT44((float)fVar21,(undefined4)local_638);
                  local_6dc = (double)((float)fVar21 * local_5e0) + local_6dc / (double)local_59c;
                  fVar21 = FUN_004d5d30(SUB84((double)(int)fVar27 * 0.025,0),
                                        (int)((ulonglong)((double)(int)fVar27 * 0.025) >> 0x20),
                                        local_6ec + 8473.0);
                  local_638 = (double)CONCAT44((float)fVar21,(undefined4)local_638);
                  local_220 = (double)((float)fVar21 * local_5e0) + local_5e8 / (double)local_59c;
                  local_4c4 = local_6dc;
                  local_228 = local_6dc;
                  local_4bc = local_220;
                }
                else {
                  local_670 = (double)CONCAT44((uVar17 - local_61c) - (uint)(uVar9 < local_5ec),
                                               uVar9 - local_5ec);
                  local_67c = (int)local_598 * 0x10000 - (int)local_5c8;
                  fStack_678 = (float)(((((int)local_598 >> 0x1f) << 0x10 | (uint)local_598 >> 0x10)
                                       - local_5f8) -
                                      (uint)((uint)((int)local_598 * 0x10000) < (uint)local_5c8));
                  local_5e8 = (double)CONCAT44(fStack_678,local_67c);
                  local_228 = (local_5e8 * 1.52587890625e-05) / (double)local_59c;
                  local_220 = ((double)(longlong)local_670 * 1.52587890625e-05) / (double)local_59c;
                  local_4d4 = local_228;
                  local_4cc = local_220;
                }
              }
              fVar27 = local_620;
              if (local_220 * local_220 + local_228 * local_228 <= 1.0) {
                pvVar10 = (void *)FUN_00406100(local_5a8,(uint)local_620,(uint)local_5b0,local_5a0);
                if (pvVar10 == (void *)0x0) {
                  puVar7 = (undefined4 *)&DAT_005842c4;
                }
                else {
                  iVar5 = *(int *)((int)pvVar10 + 0x10);
                  if ((int)fVar22 < iVar5) {
                    puVar7 = (undefined4 *)&DAT_005842c4;
                  }
                  else if ((int)fVar22 < *(int *)((int)pvVar10 + 0x1c) + iVar5) {
                    puVar7 = (undefined4 *)FUN_00405f20(pvVar10,(int)fVar22 - iVar5);
                    if ((((*(byte *)((int)puVar7 + 3) & 0x1f) == 0) && ((int)fVar22 < 1)) &&
                       ((*(byte *)((int)puVar7 + 3) & 0x40) == 0)) {
                      puVar7 = (undefined4 *)&DAT_005842bc;
                    }
                  }
                  else {
                    puVar7 = (undefined4 *)&DAT_005842bc;
                    if (0 < (int)fVar22) {
                      puVar7 = &DAT_005842c0;
                    }
                  }
                }
                if ((*(byte *)((int)puVar7 + 3) & 0x40) == 0) {
                  fVar28 = 1.0 - local_644;
                  local_b0 = CONCAT44(local_2c[1] * fVar28,local_2c[0] * fVar28);
                  local_a8 = local_2c[2] * fVar28;
                  local_144 = local_30 * local_644;
                  local_44 = local_b0;
                  local_59c = local_2c[0] * fVar28 + local_38 * local_644;
                  _local_14c = CONCAT44(fStack_34 * local_644,local_38 * local_644);
                  local_620 = local_2c[1] * fVar28 + fStack_34 * local_644;
                  local_5e0 = local_a8 + local_144;
                  local_3c = local_a8;
                  if (param_6 == 2) {
                    uVar9 = rand();
                    uVar9 = uVar9 & 0x80000007;
                    bVar20 = uVar9 == 0;
                    if ((int)uVar9 < 0) {
                      bVar20 = (uVar9 - 1 | 0xfffffff8) == 0xffffffff;
                    }
                    if (bVar20) {
                      local_1ac = 0x42480000;
                      uStack_1a8 = 0x42480000;
                      local_44 = 0x4248000042480000;
                      local_1a4 = 0x42480000;
                      local_3c = 50.0;
                      local_5e0 = 50.0;
                      local_620 = 50.0;
                      local_59c = 50.0;
                    }
                  }
                  local_1e8 = 0x42480000;
                  uStack_1e4 = 0x42f00000;
                  local_1e0 = 0x42700000;
                  _local_bc = CONCAT44(120.0 - local_620,50.0 - local_59c);
                  local_b4 = 60.0 - local_5e0;
                  fVar21 = FUN_00523b90(local_5a8,fVar27,(uint)local_5b0,(int)fVar22,local_5a0);
                  local_120 = (float)fVar21;
                  local_638 = (double)CONCAT44(local_120,(undefined4)local_638);
                  local_128 = (float)_local_bc;
                  local_128 = local_120 * local_128;
                  fStack_124 = (float)((ulonglong)_local_bc >> 0x20);
                  fStack_124 = local_120 * fStack_124;
                  local_120 = local_120 * local_b4;
                  local_44 = CONCAT44(fStack_124 + local_620,local_128 + local_59c);
                  local_3c = local_120 + local_5e0;
                  iVar5 = 0;
                  if (param_6 == 6) {
                    do {
                      iVar15 = iVar5 + 1;
                      *(char *)((int)&local_68c + iVar5) =
                           (char)(int)*(float *)((int)&local_44 + iVar5 * 4);
                      iVar5 = iVar15;
                    } while (iVar15 < 3);
                    local_698 = local_68c;
                    local_696 = local_68a;
                    local_695 = 7;
                    puVar11 = &local_698;
                  }
                  else {
                    do {
                      iVar15 = iVar5 + 1;
                      *(char *)((int)&local_6c4 + iVar5) =
                           (char)(int)*(float *)((int)&local_44 + iVar5 * 4);
                      iVar5 = iVar15;
                    } while (iVar15 < 3);
                    local_6cc = local_6c4;
                    local_6ca = local_6c2;
                    local_6c9 = 0x27;
                    puVar11 = &local_6cc;
                  }
                  FUN_0041ff00(local_5a8,fVar27,(uint)local_5b0,(int)fVar22,(undefined1 *)puVar11,
                               local_5a0);
                }
              }
              fVar22 = (float)((int)fVar22 + -1);
              local_628 = (float)((int)local_628 + -1);
              fVar8 = local_5f0;
              fVar27 = local_598;
              fVar26 = local_648;
              fVar28 = local_5bc;
            } while ((int)local_5f0 <= (int)fVar22);
          }
          local_5b4 = (undefined4 *)((int)local_5b4 + 1);
          local_5c0 = (float)(int)local_5b4;
          puVar7 = local_5d4;
          fVar22 = local_594;
        } while (local_5c0 <= fVar26);
      }
      fVar27 = (float)((int)fVar27 + 1);
      fVar28 = (float)(int)fVar27;
    } while (fVar28 <= fVar22);
    local_5b4 = (undefined4 *)local_2c[8];
    local_59c = local_2c[7];
    local_5b0 = (undefined4 *)local_2c[6];
    local_5bc = fVar28;
    local_598 = fVar27;
  }
  if (param_6 == 6) {
    uVar9 = rand();
    uVar9 = uVar9 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    fVar22 = (float)(uVar9 + 5);
    local_674 = fVar22;
    iVar15 = rand();
    iVar5 = local_5a0;
    pvVar10 = local_5a8;
    local_5c0 = 0.0;
    fVar27 = ((float)iVar15 * 6.2831855) / 32767.0;
    local_638 = (double)CONCAT44(fVar27,(undefined4)local_638);
    if (0 < (int)fVar22) {
      local_6dc = (double)(int)fVar22;
      local_6ec = (double)(longlong)local_660 * 1.52587890625e-05;
      local_1f8 = 0.0;
      local_5e8 = (double)(longlong)local_668 * 1.52587890625e-05;
      local_618 = local_5cc * 0.75;
      do {
        local_5d4 = (undefined4 *)
                    (float)(((double)(int)local_5c0 * 3.141592653589793 * 2.0) / local_6dc +
                           (double)fVar27);
        dVar25 = (double)(float)local_5d4;
        libm_sse2_sin_precise();
        local_5bc = (float)dVar25;
        dVar25 = (double)(float)local_5d4;
        libm_sse2_cos_precise();
        local_200 = (float)dVar25;
        fStack_1fc = local_5bc;
        fVar27 = local_5bc * local_5cc;
        _local_a4 = CONCAT44(fVar27,local_200 * local_5cc);
        local_9c = local_1f8 * local_5cc;
        local_5bc = local_5bc * local_618 * 0.1;
        fVar22 = local_200 * local_5cc * 0.5;
        fVar27 = fVar27 * 0.5;
        local_150 = local_9c * 0.5;
        local_52c = (double)fVar22;
        local_524 = (double)fVar27;
        _local_158 = CONCAT44(fVar27,fVar22);
        local_51c = (double)local_150;
        local_604 = local_6ec + local_52c;
        local_630 = local_5e8 + local_524;
        local_670 = local_51c + (double)(int)local_5d0;
        local_5d4 = (undefined4 *)(local_618 * local_200 * 0.1);
        local_648 = local_618 * 0.05;
        local_594 = 0.0;
        do {
          iVar15 = 0;
          do {
            iVar16 = iVar15 + 1;
            *(char *)((int)&local_694 + iVar15) = (char)(int)local_2c[iVar15];
            iVar15 = iVar16;
          } while (iVar16 < 3);
          local_6f0 = local_694;
          local_6ee = local_692;
          local_6ed = 0x27;
          FUN_004d4820(pvVar10,(int)local_604,(int)local_630,(int)local_670,
                       (float)(10 - (int)local_594 / 0x14),(byte *)&local_6f0,iVar5,'\x01','\x01');
          local_604 = (double)(float)local_5d4 + local_604;
          local_630 = (double)local_5bc + local_630;
          local_514 = local_604;
          local_50c = local_630;
          iVar15 = rand();
          local_594 = (float)((int)local_594 + 7);
          local_670 = local_670 - (double)(((float)iVar15 * local_648) / 32767.0);
          local_504 = local_670;
        } while ((int)local_594 < 0x8d);
        local_5c0 = (float)((int)local_5c0 + 1);
        fVar27 = local_638._4_4_;
      } while ((int)local_5c0 < (int)local_674);
      local_5b4 = (undefined4 *)local_2c[8];
      local_59c = local_2c[7];
      local_5b0 = (undefined4 *)local_2c[6];
    }
    goto LAB_00515e0e;
  }
  if (param_6 == 1) {
LAB_00515718:
    iVar5 = local_5a0;
    pvVar10 = local_5a8;
    if (param_6 != 3) goto LAB_00515e0e;
  }
  else if (param_6 != 3) {
    local_5c4 = -1.0;
    iVar5 = (int)local_5d8 + 1;
    iVar15 = local_5dc + 1;
    local_5d4 = (undefined4 *)(4 - (int)local_5d0);
    local_594 = 2.8026e-45;
    local_598 = local_5d0;
    do {
      local_5bc = ((float)((int)local_5d4 + (int)local_598) * local_5cc) / 5.0;
      local_5c4 = local_5c4 + local_5bc;
      iVar16 = 0;
      do {
        iVar12 = iVar16 + 1;
        *(char *)((int)&local_6f8 + iVar16) = (char)(int)local_2c[iVar16];
        iVar16 = iVar12;
      } while (iVar12 < 3);
      local_6ac = local_6f8;
      local_6aa = local_6f6;
      local_6a9 = 0x27;
      FUN_004d4820(local_5a8,(int)((float)(int)local_5d8 - local_5c4),local_5dc,(int)local_598,
                   local_5bc,(byte *)&local_6ac,local_5a0,'\x01','\x01');
      iVar16 = 0;
      do {
        iVar12 = iVar16 + 1;
        *(char *)((int)&local_69c + iVar16) = (char)(int)local_2c[iVar16];
        iVar16 = iVar12;
      } while (iVar12 < 3);
      local_6d4 = local_69c;
      local_6d2 = local_69a;
      local_6d1 = 0x27;
      FUN_004d4820(local_5a8,(int)((float)iVar5 + local_5c4),local_5dc,(int)local_598,local_5bc,
                   (byte *)&local_6d4,local_5a0,'\x01','\x01');
      iVar16 = 0;
      do {
        iVar12 = iVar16 + 1;
        *(char *)((int)&local_6a0 + iVar16) = (char)(int)local_2c[iVar16];
        iVar16 = iVar12;
      } while (iVar12 < 3);
      local_6b4 = local_6a0;
      local_6b2 = local_69e;
      local_6b1 = 0x27;
      FUN_004d4820(local_5a8,(int)local_5d8,(int)((float)(int)local_5dc - local_5c4),(int)local_598,
                   local_5bc,(byte *)&local_6b4,local_5a0,'\x01','\x01');
      iVar16 = 0;
      do {
        iVar12 = iVar16 + 1;
        *(char *)((int)&local_680 + iVar16) = (char)(int)local_2c[iVar16];
        iVar16 = iVar12;
      } while (iVar12 < 3);
      local_704 = local_680;
      local_702 = local_67e;
      local_701 = 0x27;
      FUN_004d4820(local_5a8,(int)local_5d8,(int)((float)iVar15 + local_5c4),(int)local_598,
                   local_5bc,(byte *)&local_704,local_5a0,'\x01','\x01');
      local_598 = (float)((int)local_598 + -1);
      local_594 = (float)((int)local_594 + -1);
    } while (local_594 != 0.0);
    local_594 = 0.0;
    goto LAB_00515718;
  }
  local_5d4 = (undefined4 *)(local_5b8 * 65536.0);
  uVar29 = FUN_0054a946();
  lVar1 = uVar29 + CONCAT44(local_5f8,local_5c8);
  uVar30 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),0x10000,0);
  local_598 = (float)uVar30;
  local_5d4 = (undefined4 *)((float)local_5a4 * 65536.0);
  uVar29 = FUN_0054a946();
  lVar1 = uVar29 + CONCAT44(local_61c,local_5ec);
  uVar30 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),0x10000,0);
  local_5b8 = (float)uVar30;
  iVar5 = local_5a0;
  pvVar10 = local_5a8;
  if ((0x23f0 < (int)(*(int *)((int)local_5a8 + 0x24) - *(int *)((int)local_5a8 + 0x20) &
                     0xfffffffcU)) &&
     (local_5a4 = *(void **)(*(int *)((int)local_5a8 + 0x20) + 0x23f0), local_5a4 != (void *)0x0)) {
    local_78c[0x18] = 0.0;
    local_78c[0x19] = 0.0;
    local_78c[0x1a] = 0.0;
    local_78c[0x1b] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_7d4 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x60);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar5 = *(int *)((int)local_5a4 + 0x44);
    iVar15 = rand();
    pvVar10 = local_5a4;
    local_238 = (int)local_5d0 + local_5ac + -5 + iVar15 % 3;
    local_240 = (int)local_598 - iVar5 / 2;
    local_23c = (int)local_5b8 + 1;
    FUN_00524540(local_5a8,local_5a4,&local_240,0,0x28,0,local_5a0,'\0',local_7d4,0);
    local_78c[0xc] = 0.0;
    local_78c[0xd] = 0.0;
    local_78c[0xe] = 0.0;
    local_78c[0xf] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_7f4 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x30);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar5 = *(int *)((int)pvVar10 + 0x44);
    iVar15 = rand();
    pvVar10 = local_5a4;
    local_294 = (int)local_598 + 1;
    local_28c = (int)local_5d0 + local_5ac + -5 + iVar15 % 3;
    local_290 = (int)local_5b8 - iVar5 / 2;
    FUN_00524540(local_5a8,local_5a4,&local_294,1,0x28,0,local_5a0,'\0',local_7f4,0);
    local_78c[4] = 0.0;
    local_78c[5] = 0.0;
    local_78c[6] = 0.0;
    local_78c[7] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_814 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x10);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar5 = *(int *)((int)pvVar10 + 0x48);
    iVar15 = *(int *)((int)pvVar10 + 0x44);
    iVar16 = rand();
    pvVar10 = local_5a4;
    local_244 = (int)local_5d0 + local_5ac + -5 + iVar16 % 3;
    local_24c = (int)local_598 - iVar15 / 2;
    local_248 = (int)local_5b8 - iVar5;
    FUN_00524540(local_5a8,local_5a4,&local_24c,2,0x28,0,local_5a0,'\0',local_814,0);
    local_78c[0] = 0.0;
    local_78c[1] = 0.0;
    local_78c[2] = 0.0;
    local_78c[3] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_7e4 + iVar5) = (int)*(float *)((int)local_78c + iVar5);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar15 = *(int *)((int)pvVar10 + 0x44);
    iVar16 = *(int *)((int)pvVar10 + 0x48);
    iVar12 = rand();
    iVar5 = local_5a0;
    pvVar10 = local_5a8;
    local_258 = (int)local_598 - iVar16;
    local_250 = (int)local_5d0 + local_5ac + -5 + iVar12 % 3;
    local_254 = (int)local_5b8 - iVar15 / 2;
    FUN_00524540(local_5a8,local_5a4,&local_258,3,0x28,0,local_5a0,'\0',local_7e4,0);
    pcVar18 = rand_exref;
  }
  if ((0x23f4 < (int)(*(int *)((int)pvVar10 + 0x24) - *(int *)((int)pvVar10 + 0x20) & 0xfffffffcU))
     && (local_5a4 = *(void **)(*(int *)((int)pvVar10 + 0x20) + 0x23f4), local_5a4 != (void *)0x0))
  {
    local_78c[8] = 0.0;
    local_78c[9] = 0.0;
    local_78c[10] = 0.0;
    local_78c[0xb] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_7a4 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x20);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar5 = (*pcVar18)();
    pvVar10 = local_5a4;
    local_5d4 = (undefined4 *)((int)local_598 + 1);
    local_618 = (float)((int)local_5b8 + 1);
    local_2a4 = (int)local_5d0 + local_5ac + -5 + iVar5 % 3;
    local_2ac = (uint)local_5d4;
    local_2a8 = local_618;
    FUN_00524540(local_5a8,local_5a4,&local_2ac,0,0x28,0,local_5a0,'\0',local_7a4,0);
    local_78c[0x10] = 0.0;
    local_78c[0x11] = 0.0;
    local_78c[0x12] = 0.0;
    local_78c[0x13] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_7b4 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x40);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar5 = *(int *)((int)pvVar10 + 0x48);
    iVar15 = (*pcVar18)();
    pvVar10 = local_5a4;
    local_264 = (uint)local_5d4;
    local_260 = (int)local_5b8 - iVar5;
    local_25c = local_5ac + (int)local_5d0 + -5 + iVar15 % 3;
    FUN_00524540(local_5a8,local_5a4,&local_264,1,0x28,0,local_5a0,'\0',local_7b4,0);
    local_78c[0x1c] = 0.0;
    local_78c[0x1d] = 0.0;
    local_78c[0x1e] = 0.0;
    local_78c[0x1f] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_7c4 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x70);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    iVar5 = *(int *)((int)pvVar10 + 0x48);
    iVar15 = (*pcVar18)();
    pvVar10 = local_5a4;
    local_2c4 = (int)local_598 - iVar5;
    local_2c0 = (int)local_5b8 - iVar5;
    local_2bc = local_5ac + (int)local_5d0 + -5 + iVar15 % 3;
    FUN_00524540(local_5a8,local_5a4,&local_2c4,2,0x28,0,local_5a0,'\0',local_7c4,0);
    local_78c[0x14] = 0.0;
    local_78c[0x15] = 0.0;
    local_78c[0x16] = 0.0;
    local_78c[0x17] = 0.0;
    iVar5 = 0;
    do {
      iVar15 = iVar5 + 4;
      *(int *)((int)local_804 + iVar5) = (int)*(float *)((int)local_78c + iVar5 + 0x50);
      iVar5 = iVar15;
    } while (iVar15 < 0x10);
    puVar7 = *(undefined4 **)((int)pvVar10 + 0x48);
    local_5d4 = puVar7;
    iVar15 = (*pcVar18)();
    iVar5 = local_5a0;
    pvVar10 = local_5a8;
    local_288 = (int)local_598 - (int)puVar7;
    local_284 = local_618;
    local_280 = (int)local_5d0 + local_5ac + -5 + iVar15 % 3;
    FUN_00524540(local_5a8,local_5a4,&local_288,3,0x28,0,local_5a0,'\0',local_804,0);
  }
LAB_00515e0e:
  iVar15 = (*pcVar18)();
  if ((iVar15 % 10 == 0) && (0.2 < local_5fc)) {
    uVar9 = local_5ac + (int)local_5d0;
    local_3d8 = local_5c8;
    local_790 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
    local_3d4 = local_5f8;
    local_3d0 = local_5ec;
    local_3cc = local_61c;
    local_5d4 = *(undefined4 **)(iVar5 + 4);
    local_794 = uVar9 * 0x10000;
    local_3b4 = 0x3f800000;
    local_3b0 = 0x3f800000;
    local_3ac = 0x3f800000;
    local_3a8 = 2;
    local_3e0[0] = 0x3d;
    local_3c8 = local_794;
    local_3c4 = local_790;
    iVar15 = FUN_004c6770(local_5d4,(undefined4 *)local_5d4[1],local_3e0);
    if (*(int *)(iVar5 + 8) == 0x38e38e2) {
LAB_00515ef0:
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    local_5d4[1] = iVar15;
    **(int **)(iVar15 + 4) = iVar15;
  }
  if (param_6 == 5) {
    puVar7 = (undefined4 *)
             (int)((float)(((int)(local_5ac + (local_5ac >> 0x1f & 3U)) >> 2) + 6) +
                  (float)param_4 * 0.5);
    local_5b0 = puVar7;
    (*pcVar18)();
    (*pcVar18)();
    uVar9 = (*pcVar18)();
    uVar9 = uVar9 & 0x80000007;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
    }
    local_5d4 = (undefined4 *)((float)(int)uVar9 * 0.7853982);
    local_5b4 = (undefined4 *)0x0;
    if (0 < (int)puVar7) {
      local_59c = 0.0;
      do {
        uVar9 = (uint)local_5b4 & 0x80000001;
        bVar20 = uVar9 == 0;
        if ((int)uVar9 < 0) {
          bVar20 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar20) {
LAB_00515fcc:
          iVar5 = local_5ac;
          local_6ec = (double)(longlong)local_660 * 1.52587890625e-05;
          local_648 = ((float)(int)local_5b4 * 0.6) / (float)((int)puVar7 + -1) + 0.6;
          local_5e8 = (double)(longlong)local_668 * 1.52587890625e-05;
          local_6dc = (double)((float)local_5ac * local_648 + (float)(int)local_5d0);
          local_618 = (float)(int)local_5b4 * 3.1415927 * 0.25 + (float)local_5d4;
          dVar25 = (double)local_618;
          libm_sse2_sin_precise();
          local_5e0 = (float)dVar25;
          dVar25 = (double)local_618;
          libm_sse2_cos_precise();
          local_17c = (float)dVar25;
          local_174 = 0;
          fStack_178 = local_5e0;
          local_138 = local_5cc * 0.0;
          _local_140 = CONCAT44(local_5e0 * local_5cc,local_17c * local_5cc);
          local_4ec = (double)(local_17c * local_5cc);
          local_4e4 = (double)(local_5e0 * local_5cc);
          local_4dc = (double)local_138;
          local_6e4 = local_4ec + local_6ec;
          local_6ec = local_4e4 + local_5e8;
          local_5e8 = local_4dc + local_6dc;
          local_618 = 1.0 - local_648;
          _local_d4 = CONCAT44(local_2c[1] * local_618,local_2c[0] * local_618);
          local_cc = local_2c[2] * local_618;
          local_12c = local_648 * local_30;
          _local_134 = CONCAT44(local_648 * fStack_34,local_648 * local_38);
          local_80 = CONCAT44(local_2c[1] * local_618 + local_648 * fStack_34,
                              local_2c[0] * local_618 + local_648 * local_38);
          local_78 = local_cc + local_12c;
          local_15c = local_78;
          local_164 = local_80;
          iVar15 = 0;
          do {
            pfVar6 = (float *)((int)&local_164 + iVar15 * 4);
            if (*pfVar6 <= 0.0 && *pfVar6 != 0.0) {
              *(undefined4 *)((int)&local_164 + iVar15 * 4) = 0;
            }
            if (255.0 < *(float *)((int)&local_164 + iVar15 * 4)) {
              *(undefined4 *)((int)&local_164 + iVar15 * 4) = 0x437f0000;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < 3);
          local_4b4 = local_6e4;
          local_4ac = local_6ec;
          local_4a4 = local_5e8;
          iVar15 = (*pcVar18)();
          iVar16 = (int)local_59c + ((int)local_59c >> 0x1f & 3U);
          local_5d8 = (float)(iVar5 / 2 + iVar15 % (iVar5 / 2) +
                             (int)(CONCAT44(iVar16 >> 0x1f,iVar16 >> 2) / (longlong)(int)local_5b0))
          ;
          local_5dc = 0;
          fVar27 = (float)param_4 * 8.0 * local_618 + (float)param_4;
          puVar7 = local_5b0;
          if (-1 < (int)local_5d8 * 2) {
            fVar22 = (float)((int)local_5d8 * 2);
            local_618 = fVar27 * local_5e0;
            local_648 = fVar27 * local_17c;
            local_604 = (double)CONCAT44(fVar22,(undefined4)local_604);
            iVar5 = local_5a0;
            do {
              fVar27 = 1.0 - (float)(int)local_5dc / fVar22;
              local_5bc = 1.0 - fVar27 * fVar27;
              local_700 = ((double)((float)(int)local_5dc * 0.5) + local_5e8) * 65536.0;
              local_650 = (double)FUN_0054a946();
              local_70c = ((double)(local_5bc * local_618) + local_6ec) * 65536.0;
              local_640 = (double)FUN_0054a946();
              local_614 = ((double)(local_5bc * local_648) + local_6e4) * 65536.0;
              local_60c = (double)FUN_0054a946();
              iVar15 = FUN_00406050(pvVar10,SUB84(local_60c,0),(uint)((ulonglong)local_60c >> 0x20),
                                    (uint)local_640,local_640._4_4_,(uint)local_650,local_650._4_4_,
                                    iVar5);
              if ((*(byte *)(iVar15 + 3) & 0x40) == 0) {
                local_5f8 = (uint)local_650 + 0x10000;
                local_5fc = (float)(local_650._4_4_ + (0xfffeffff < (uint)local_650));
                iVar15 = FUN_00406050(pvVar10,(uint)local_60c,local_60c._4_4_,(uint)local_640,
                                      local_640._4_4_,local_5f8,(uint)local_5fc,iVar5);
                if ((*(byte *)(iVar15 + 3) & 0x40) == 0) {
                  iVar15 = 0;
                  do {
                    iVar16 = iVar15 + 1;
                    *(char *)((int)&local_6a8 + iVar15) =
                         (char)(int)*(float *)((int)&local_164 + iVar15 * 4);
                    iVar15 = iVar16;
                  } while (iVar16 < 3);
                  local_6bc = local_6a8;
                  local_6ba = local_6a6;
                  local_6b9 = 0x27;
                  uVar30 = __alldiv((uint)local_640,local_640._4_4_,0x10000,0);
                  local_594 = (float)uVar30;
                  uVar30 = __alldiv((uint)local_60c,local_60c._4_4_,0x10000,0);
                  local_5c0 = (float)uVar30;
                  puVar11 = &local_6bc;
                  iVar15 = iVar5;
                  uVar30 = __alldiv(local_5f8,(uint)local_5fc,0x10000,0);
                  FUN_0041ff00(pvVar10,local_5c0,(uint)local_594,(int)uVar30,(undefined1 *)puVar11,
                               iVar15);
                  iVar15 = 0;
                  do {
                    iVar16 = iVar15 + 1;
                    *(char *)((int)&local_6c0 + iVar15) =
                         (char)(int)*(float *)((int)&local_164 + iVar15 * 4);
                    iVar15 = iVar16;
                  } while (iVar16 < 3);
                  local_684 = local_6c0;
                  local_682 = local_6be;
                  puVar11 = &local_684;
                  local_681 = 0x27;
                  iVar15 = iVar5;
                  uVar30 = __alldiv((uint)local_650,local_650._4_4_,0x10000,0);
                  FUN_0041ff00(pvVar10,local_5c0,(uint)local_594,(int)uVar30,(undefined1 *)puVar11,
                               iVar15);
                  if (local_5dc == (int)local_5d8 * 2) {
LAB_00516682:
                    iVar15 = (*pcVar18)();
                    local_5c4 = (((float)iVar15 * local_5bc * 0.75) / 32767.0 + 0.25) *
                                (float)(int)local_5d8 * 0.5 + 2.0;
                    iVar15 = (*pcVar18)();
                    local_630 = (double)CONCAT44((((float)iVar15 * 0.5) / 32767.0 + 0.5) * local_5c4
                                                 ,(undefined4)local_630);
                    local_674 = local_5c4 * local_5e0 * 0.25 * 65536.0;
                    uVar29 = FUN_0054a946();
                    uVar19 = (uint)(uVar29 + (longlong)local_640);
                    local_5b8 = (float)(uVar29 + (longlong)local_640 >> 0x20);
                    local_638 = (double)CONCAT44(local_5c4 * local_17c * 0.25 * 65536.0,
                                                 (undefined4)local_638);
                    local_5c8 = (float)uVar19;
                    uVar29 = FUN_0054a946();
                    local_5a4 = (void *)(uVar29 + (longlong)local_60c);
                    local_5f0 = local_5c4 * 65536.0;
                    local_598 = (float)(uVar29 + (longlong)local_60c >> 0x20);
                    local_18c._4_4_ = (int)local_5b8;
                    local_194._0_4_ = (uint)local_5a4;
                    local_194._4_4_ = (int)local_598;
                    local_18c._0_4_ = uVar19;
                    uVar29 = FUN_0054a946();
                    local_61c = (uint)(uVar29 >> 0x20);
                    local_5ec = (uint)uVar29;
                    local_5bc = (float)(((int)local_5a4 - local_5ec) - 0x10000);
                    uVar9 = *(uint *)(iVar5 + 0x60);
                    iVar15 = (((int)local_598 - local_61c) - (uint)(local_5a4 < local_5ec)) -
                             (uint)((int)local_5a4 - local_5ec < 0x10000);
                    local_620 = (float)(uVar9 << 8);
                    uVar17 = ((int)local_620 >> 0x1f) << 0x10 | (uVar9 & 0xffffff) >> 8;
                    local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
                    uVar2 = CONCAT44(local_598,local_5a4);
                    if ((iVar15 <= (int)uVar17) &&
                       ((iVar15 < (int)uVar17 ||
                        (local_194 = CONCAT44(local_194._4_4_,(uint)local_194),
                        uVar2 = CONCAT44(local_598,local_5a4), (uint)local_5bc < uVar9 << 0x18)))) {
                      local_628 = ((float)(int)local_620 + local_5c4 + 1.0) * 65536.0;
                      local_194 = FUN_0054a946();
                      uVar29 = CONCAT44(local_61c,local_5ec);
                      uVar2 = local_194;
                    }
                    local_598 = (float)(uVar2 >> 0x20);
                    local_5a4 = (void *)uVar2;
                    local_61c = (uint)(uVar29 >> 0x20);
                    local_5ec = (uint)uVar29;
                    local_5c0 = (float)((uVar19 - local_5ec) - 0x10000);
                    uVar9 = *(uint *)(iVar5 + 100);
                    iVar15 = (((int)local_5b8 - local_61c) - (uint)(uVar19 < local_5ec)) -
                             (uint)(uVar19 - local_5ec < 0x10000);
                    local_594 = (float)(uVar9 << 8);
                    uVar17 = ((int)local_594 >> 0x1f) << 0x10 | (uVar9 & 0xffffff) >> 8;
                    local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
                    uVar3 = CONCAT44(local_5b8,uVar19);
                    if ((iVar15 <= (int)uVar17) &&
                       ((iVar15 < (int)uVar17 ||
                        (local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c),
                        uVar3 = CONCAT44(local_5b8,uVar19), (uint)local_5c0 < uVar9 << 0x18)))) {
                      local_644 = ((float)(int)local_594 + local_5c4 + 1.0) * 65536.0;
                      local_18c = FUN_0054a946();
                      uVar2 = CONCAT44(local_598,local_5a4);
                      uVar29 = CONCAT44(local_61c,local_5ec);
                      local_5c8 = (float)local_18c;
                      uVar3 = local_18c;
                    }
                    local_5b8 = (float)(uVar3 >> 0x20);
                    local_598 = (float)(uVar2 >> 0x20);
                    local_5a4 = (void *)uVar2;
                    local_61c = (uint)(uVar29 >> 0x20);
                    local_5ec = (uint)uVar29;
                    lVar1 = uVar29 + uVar2 + 0x10000;
                    local_5c0 = (float)lVar1;
                    uVar9 = (int)local_620 + 0x100;
                    uVar31 = local_194;
                    if (CONCAT44(((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10,uVar9 * 0x10000) <=
                        lVar1) {
                      fStack_678 = (((float)((int)local_620 + 0x100) - local_5c4) - 2.0) * 65536.0;
                      uVar31 = FUN_0054a946();
                      uVar29 = CONCAT44(local_61c,local_5ec);
                      uVar2 = uVar31;
                    }
                    local_598 = (float)(uVar2 >> 0x20);
                    local_5a4 = (void *)uVar2;
                    local_61c = (uint)(uVar29 >> 0x20);
                    local_5ec = (uint)uVar29;
                    local_594 = (float)((int)local_594 + 0x100);
                    local_194 = uVar31;
                    uVar31 = local_18c;
                    uVar4 = CONCAT44(local_5b8,local_5c8);
                    if (CONCAT44(((int)local_594 >> 0x1f) << 0x10 | (uint)local_594 >> 0x10,
                                 (int)local_594 * 0x10000) <=
                        (longlong)(uVar29 + CONCAT44(local_5b8,(int)uVar3) + 0x10000)) {
                      local_670 = (double)CONCAT44((((float)(int)local_594 - local_5c4) - 2.0) *
                                                   65536.0,(undefined4)local_670);
                      uVar31 = FUN_0054a946();
                      uVar2 = CONCAT44(local_598,local_5a4);
                      uVar29 = CONCAT44(local_61c,local_5ec);
                      uVar4 = uVar31;
                    }
                    local_5b8 = (float)(uVar4 >> 0x20);
                    local_5c8 = (float)uVar4;
                    local_598 = (float)(uVar2 >> 0x20);
                    local_5a4 = (void *)uVar2;
                    local_61c = (uint)(uVar29 >> 0x20);
                    local_5ec = (uint)uVar29;
                    iVar15 = 5;
                    fVar27 = local_2c[6];
                    fVar22 = local_2c[7];
                    fVar28 = local_2c[8];
                    fVar26 = local_2c[3];
                    fVar8 = local_2c[4];
                    fVar35 = local_2c[5];
                    local_18c = uVar31;
                    uVar30 = __alldiv(local_5f8,(uint)local_5fc,0x10000,0);
                    uVar32 = __alldiv((uint)local_5c8,(uint)local_5b8,0x10000,0);
                    uVar33 = __alldiv((uint)local_5a4,(uint)local_598,0x10000,0);
                    pvVar10 = local_5a8;
                    FUN_0050bd60((int)uVar33,(int)uVar32,(int)uVar30,local_5c4,local_630._4_4_,
                                 CONCAT44(fVar22,fVar27),fVar28,CONCAT44(fVar8,fVar26),fVar35,iVar15
                                 ,iVar5);
                    iVar5 = local_5a0;
                    if (local_58d != '\0') {
                      local_398 = local_5a4;
                      local_394 = local_598;
                      local_390 = local_5c8;
                      local_38c = local_5b8;
                      local_388 = local_5f8;
                      local_384 = local_5fc;
                      local_98 = CONCAT44(local_2c[7] / 255.0,local_2c[6] / 255.0);
                      local_36c = local_2c[8] / 255.0;
                      puVar7 = *(undefined4 **)(local_5a0 + 4);
                      local_630 = (double)CONCAT44(puVar7,(undefined4)local_630);
                      local_368 = 2;
                      local_3a0[0] = 0x3c;
                      local_374 = local_98;
                      local_90 = local_36c;
                      iVar15 = FUN_004c6770(puVar7,(undefined4 *)puVar7[1],local_3a0);
                      if (*(int *)(iVar5 + 8) == 0x38e38e2) goto LAB_00515ef0;
                      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
                      *(int *)((int)local_630._4_4_ + 4) = iVar15;
                      **(int **)(iVar15 + 4) = iVar15;
                    }
                  }
                  else {
                    uVar9 = local_5dc & 0x80000003;
                    bVar20 = uVar9 == 0;
                    if ((int)uVar9 < 0) {
                      bVar20 = (uVar9 - 1 | 0xfffffffc) == 0xffffffff;
                    }
                    if (bVar20) {
                      iVar15 = (*pcVar18)();
                      if (iVar15 % 3 == 0) goto LAB_00516682;
                    }
                  }
                }
              }
              local_5dc = local_5dc + 1;
              puVar7 = local_5b0;
              fVar22 = local_604._4_4_;
            } while ((int)local_5dc <= (int)local_5d8 * 2);
          }
        }
        else {
          iVar5 = (*pcVar18)();
          if (iVar5 % 3 == 0) goto LAB_00515fcc;
        }
        local_59c = (float)((int)local_59c + local_5ac);
        local_5b4 = (undefined4 *)((int)local_5b4 + 1);
      } while ((int)local_5b4 < (int)puVar7);
    }
  }
  else if (((param_6 == 0) || (param_6 == 4)) || (param_6 == 2)) {
    iVar15 = (*pcVar18)();
    local_5e0 = (float)(iVar15 % 5 + 4);
    iVar15 = (*pcVar18)();
    local_630 = (double)CONCAT44(((float)iVar15 * 6.2831855) / 32767.0,(undefined4)local_630);
    iVar15 = (*pcVar18)();
    local_5bc = ((float)iVar15 * 0.8) / 32767.0 + 0.6;
    iVar15 = (*pcVar18)();
    local_604 = (double)CONCAT44((((float)iVar15 * 1.25) / 32767.0 + 2.0) * local_5cc,
                                 (undefined4)local_604);
    puVar7 = local_5b0;
    fVar27 = local_59c;
    puVar34 = local_5b4;
    fVar22 = local_2c[3];
    fVar28 = local_2c[4];
    fVar26 = local_2c[5];
    iVar15 = param_6;
    uVar30 = __alldiv(local_5ec,local_61c,0x10000,0);
    uVar32 = __alldiv((uint)local_5c8,local_5f8,0x10000,0);
    FUN_0050bd60((int)uVar32,(int)uVar30,local_5ac + (int)local_5d0,local_604._4_4_,
                 local_604._4_4_ * local_5bc,CONCAT44(fVar27,puVar7),(float)puVar34,
                 CONCAT44(fVar28,fVar22),fVar26,iVar15,iVar5);
    iVar5 = local_5a0;
    local_5ec = 0;
    if (0 < (int)local_5e0) {
      local_6e4 = (double)(longlong)local_668 * 1.52587890625e-05;
      local_1ec = 0.0;
      local_614 = (double)(longlong)local_660 * 1.52587890625e-05;
      fStack_678 = local_5cc * 0.75;
      do {
        iVar15 = (*pcVar18)();
        fVar27 = ((float)iVar15 * 0.5) / 32767.0 + 0.5;
        local_670 = (double)CONCAT44(fVar27,(undefined4)local_670);
        local_70c = (double)(fVar27 * (float)local_5ac + (float)(int)local_5d0);
        fVar27 = ((float)(int)local_5ec * 3.1415927 * 2.0) / (float)(int)local_5e0 + local_630._4_4_
        ;
        dVar25 = (double)fVar27;
        local_604._4_4_ = fVar27;
        libm_sse2_sin_precise();
        local_5c8 = (float)dVar25;
        dVar25 = (double)local_604._4_4_;
        libm_sse2_cos_precise();
        local_1f4 = (float)dVar25;
        fStack_1f0 = local_5c8;
        local_8c = CONCAT44(local_5c8 * local_5cc,local_1f4 * local_5cc);
        local_210 = local_1ec * local_5cc;
        local_218 = local_8c;
        local_20c = CONCAT44(fStack_34,local_38);
        local_60c = (double)(local_1f4 * local_5cc * 0.5) + local_614;
        local_640 = (double)(local_210 * 0.5) + local_70c;
        local_650 = (double)(local_5c8 * local_5cc * 0.5) + local_6e4;
        local_204 = local_30;
        fVar27 = 1.0 - local_670._4_4_;
        local_594 = 8.40779e-45;
        _local_5c = CONCAT44(local_2c[1] * fVar27,local_2c[0] * fVar27);
        local_54 = local_2c[2] * fVar27;
        local_ec[1] = local_2c[1] * fVar27 + fStack_34 * local_670._4_4_;
        local_ec[0] = local_2c[0] * fVar27 + local_38 * local_670._4_4_;
        local_ec[2] = local_54 + local_30 * local_670._4_4_;
        local_624 = local_1f4 * fStack_678 * 0.5;
        local_5c8 = local_5c8 * fStack_678 * 0.5;
        local_604 = (double)CONCAT44(fStack_678 * 0.5,(undefined4)local_604);
        local_84 = local_210;
        do {
          if (((param_6 != 2) && (param_6 != 4)) && (1.5 < local_5cc)) {
            iVar15 = 0;
            do {
              iVar16 = iVar15 + 1;
              *(char *)((int)&local_658 + iVar15) = (char)(int)local_ec[iVar15];
              iVar15 = iVar16;
            } while (iVar16 < 3);
            local_5f4 = (float)CONCAT13(0x27,SUB43(local_658,0));
            FUN_004d4820(pvVar10,(int)local_60c,(int)local_650,(int)local_640,2.0,(byte *)&local_5f4
                         ,iVar5,'\x01','\x01');
          }
          local_60c = (double)local_624 + local_60c;
          local_650 = (double)local_5c8 + local_650;
          iVar15 = (*pcVar18)();
          local_594 = (float)((int)local_594 - 1);
          local_640 = (double)(((float)iVar15 * local_604._4_4_) / 32767.0) + local_640;
        } while (local_594 != 0.0);
        iVar15 = (*pcVar18)();
        iVar16 = *(int *)(iVar5 + 0x60) * 0x100;
        fVar27 = (((float)iVar15 * 1.25) / 32767.0 + 2.0) * local_5cc;
        if ((local_60c - (double)fVar27) - 1.0 < (double)iVar16) {
          local_60c = (double)((float)iVar16 + fVar27 + 1.0);
        }
        iVar15 = *(int *)(iVar5 + 100) * 0x100;
        if ((local_650 - (double)fVar27) - 1.0 < (double)iVar15) {
          local_650 = (double)((float)iVar15 + fVar27 + 1.0);
        }
        if ((double)(iVar16 + 0x100) <= (double)fVar27 + local_60c + 1.0) {
          local_60c = (double)(((float)(iVar16 + 0x100) - fVar27) - 2.0);
        }
        if ((double)(iVar15 + 0x100) <= (double)fVar27 + local_650 + 1.0) {
          local_650 = (double)(((float)(iVar15 + 0x100) - fVar27) - 2.0);
        }
        if (4 < (int)local_5ec) {
          local_640 = (double)(local_5bc * fVar27 * 0.5) + local_640;
        }
        fVar22 = local_5bc * fVar27 * 0.25;
        local_604 = (double)CONCAT44(fVar22,(undefined4)local_604);
        FUN_0050bd60((int)local_60c,(int)local_650,(int)((double)fVar22 + local_640),fVar27,
                     local_5bc * fVar27,CONCAT44(local_2c[7],local_2c[6]),local_2c[8],
                     CONCAT44(local_2c[4],local_2c[3]),local_2c[5],param_6,iVar5);
        if (local_58d != '\0') {
          local_410[0] = local_60c + 0.0;
          local_430 = 0x3f8000003f800000;
          local_428 = 1.0;
          local_424 = 2;
          local_410[1] = local_650 + 0.0;
          iVar15 = 0;
          local_410[2] = local_640 + (double)local_604._4_4_;
          do {
            local_700 = *(double *)((int)local_410 + iVar15) * 65536.0;
            uVar29 = FUN_0054a946();
            *(int *)((int)auStack_454 + iVar15) = (int)uVar29;
            *(int *)((int)auStack_454 + iVar15 + 4) = (int)(uVar29 >> 0x20);
            iVar15 = iVar15 + 8;
          } while (iVar15 < 0x18);
          local_68 = CONCAT44(local_2c[7] / 255.0,local_2c[6] / 255.0);
          local_428 = local_2c[8] / 255.0;
          puVar7 = *(undefined4 **)(iVar5 + 4);
          local_45c[0] = 0x3c;
          local_430 = local_68;
          local_604 = (double)CONCAT44(puVar7,(undefined4)local_604);
          local_60 = local_428;
          iVar15 = FUN_004c6770(puVar7,(undefined4 *)puVar7[1],local_45c);
          if (*(int *)(iVar5 + 8) == 0x38e38e2) goto LAB_00515ef0;
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          *(int *)((int)local_604._4_4_ + 4) = iVar15;
          **(int **)(iVar15 + 4) = iVar15;
          pvVar10 = local_5a8;
        }
        local_5ec = local_5ec + 1;
      } while ((int)local_5ec < (int)local_5e0);
    }
  }
  else if (param_6 == 6) {
    iVar15 = (*pcVar18)();
    local_5e0 = (float)(iVar15 % 5 + 8);
    iVar15 = (*pcVar18)();
    local_604 = (double)CONCAT44(((float)iVar15 * 6.2831855) / 32767.0,(undefined4)local_604);
    (*pcVar18)();
    (*pcVar18)();
    local_5bc = 0.0;
    if (0 < (int)local_5e0) {
      local_6e4 = (double)(longlong)local_668 * 1.52587890625e-05;
      local_198 = 0.0;
      local_614 = (double)(longlong)local_660 * 1.52587890625e-05;
      fStack_678 = local_5cc * 0.75;
      do {
        iVar15 = (*pcVar18)();
        fVar27 = ((float)iVar15 * 0.5) / 32767.0 + 0.5;
        local_670 = (double)CONCAT44(fVar27,(undefined4)local_670);
        local_70c = (double)((float)local_5ac * fVar27 + (float)(int)local_5d0);
        local_594 = ((float)(int)local_5bc * 3.1415927 * 2.0) / (float)(int)local_5e0 +
                    local_604._4_4_;
        dVar25 = (double)local_594;
        libm_sse2_sin_precise();
        local_644 = (float)dVar25;
        dVar25 = (double)local_594;
        libm_sse2_cos_precise();
        local_1a0 = (float)dVar25;
        fStack_19c = local_644;
        local_630 = (double)CONCAT44(local_594 + 1.5707964,(undefined4)local_630);
        dVar25 = (double)(local_594 + 1.5707964);
        libm_sse2_sin_precise();
        local_5c0 = (float)dVar25;
        dVar25 = (double)local_630._4_4_;
        libm_sse2_cos_precise();
        local_5f0 = (float)dVar25;
        local_74 = CONCAT44(fStack_19c * local_5cc,local_1a0 * local_5cc);
        local_1c8 = local_198 * local_5cc;
        local_1d0 = local_74;
        local_1dc = CONCAT44(fStack_34,local_38);
        fVar27 = 1.0 - local_670._4_4_;
        local_1d4 = local_30;
        local_660 = (double)(local_1a0 * local_5cc * 0.5) + local_614;
        local_668 = (double)(fStack_19c * local_5cc * 0.5) + local_6e4;
        local_60c = (double)(local_1c8 * 0.5) + local_70c;
        _local_c8 = CONCAT44(local_2c[1] * fVar27,local_2c[0] * fVar27);
        local_c0 = local_2c[2] * fVar27;
        local_2dc[0] = local_660;
        local_2dc[1] = local_668;
        local_2dc[2] = local_60c;
        local_5c8 = 0.0;
        local_5f4 = 0.0;
        local_104[1] = local_2c[1] * fVar27 + fStack_34 * local_670._4_4_;
        local_104[0] = local_2c[0] * fVar27 + local_38 * local_670._4_4_;
        local_104[2] = local_c0 + local_30 * local_670._4_4_;
        local_6c = local_1c8;
        do {
          local_594 = 6.5 - (float)(int)local_5f4 / 40.0;
          iVar15 = 0;
          do {
            iVar16 = iVar15 + 1;
            *(char *)((int)&local_6c8 + iVar15) = (char)(int)local_104[iVar15];
            iVar15 = iVar16;
          } while (iVar16 < 3);
          local_654 = (float)CONCAT13(0x27,CONCAT12(local_6c6,local_6c8));
          local_2dc[0] = local_660;
          local_2dc[1] = local_668;
          local_2dc[2] = local_60c;
          FUN_004d4820(pvVar10,(int)local_660,(int)local_668,(int)local_60c,local_594,
                       (byte *)&local_654,iVar5,'\x01','\x01');
          if (10 < (int)local_5c8) {
            local_628 = 7.00649e-45;
            do {
              iVar15 = (int)local_5c8 + -10;
              iVar16 = (*pcVar18)();
              if (iVar16 % 0x78 < iVar15) {
                iVar16 = 6;
                fVar27 = local_2c[6];
                fVar22 = local_2c[7];
                fVar28 = local_2c[8];
                fVar26 = local_2c[3];
                fVar8 = local_2c[4];
                fVar35 = local_2c[5];
                uVar9 = (*pcVar18)();
                uVar9 = uVar9 & 0x80000003;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                }
                fVar23 = (float)(int)(uVar9 + 4);
                uVar9 = (*pcVar18)();
                uVar9 = uVar9 & 0x80000003;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                }
                fVar24 = (float)(int)(uVar9 + 4);
                iVar12 = (*pcVar18)();
                iVar12 = (int)((double)(iVar12 % (2 - (int)(local_594 * -2.0))) + (local_60c - 3.0))
                ;
                iVar13 = (*pcVar18)();
                iVar13 = (int)((((double)(iVar13 % 0x14) + local_668) - 10.0) +
                              (double)(local_5c0 * 4.0));
                iVar14 = (*pcVar18)();
                FUN_0050bd60((int)((((double)(iVar14 % 0x14) + local_660) - 10.0) +
                                  (double)(local_5f0 * 4.0)),iVar13,iVar12,fVar24,fVar23,
                             CONCAT44(fVar22,fVar27),fVar28,CONCAT44(fVar8,fVar26),fVar35,iVar16,
                             iVar5);
                iVar5 = local_5a0;
              }
              iVar16 = (*pcVar18)();
              pvVar10 = local_5a8;
              if (iVar16 % 0x78 < iVar15) {
                iVar15 = 6;
                fVar27 = local_2c[6];
                fVar22 = local_2c[7];
                fVar28 = local_2c[8];
                fVar26 = local_2c[3];
                fVar8 = local_2c[4];
                fVar35 = local_2c[5];
                uVar9 = (*pcVar18)();
                uVar9 = uVar9 & 0x80000003;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                }
                fVar23 = (float)(int)(uVar9 + 4);
                uVar9 = (*pcVar18)();
                uVar9 = uVar9 & 0x80000003;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                }
                fVar24 = (float)(int)(uVar9 + 4);
                iVar16 = (*pcVar18)();
                iVar16 = (int)((double)(iVar16 % ((1 - (int)(local_594 * -2.0)) * 2)) +
                              (local_60c - 3.0));
                iVar12 = (*pcVar18)();
                iVar12 = (int)((((double)(iVar12 % 0x14) + local_668) - 10.0) -
                              (double)(local_5c0 * 4.0));
                iVar13 = (*pcVar18)();
                pvVar10 = local_5a8;
                FUN_0050bd60((int)((((double)(iVar13 % 0x14) + local_660) - 10.0) -
                                  (double)(local_5f0 * 4.0)),iVar12,iVar16,fVar24,fVar23,
                             CONCAT44(fVar22,fVar27),fVar28,CONCAT44(fVar8,fVar26),fVar35,iVar15,
                             iVar5);
              }
              local_628 = (float)((int)local_628 + -1);
              iVar5 = local_5a0;
            } while (local_628 != 0.0);
            local_628 = 0.0;
            if (local_58d != '\0') {
              local_470 = 0x3f8000003f800000;
              local_468 = 1.0;
              local_464 = 2;
              iVar15 = 0;
              do {
                local_700 = *(double *)((int)local_2dc + iVar15) * 65536.0;
                uVar29 = FUN_0054a946();
                iVar5 = local_5a0;
                *(int *)((int)auStack_494 + iVar15) = (int)uVar29;
                *(int *)((int)auStack_494 + iVar15 + 4) = (int)(uVar29 >> 0x20);
                iVar15 = iVar15 + 8;
              } while (iVar15 < 0x18);
              local_50 = CONCAT44(local_2c[7] / 255.0,local_2c[6] / 255.0);
              local_468 = local_2c[8] / 255.0;
              puVar7 = *(undefined4 **)(local_5a0 + 4);
              local_630 = (double)CONCAT44(puVar7,(undefined4)local_630);
              local_49c[0] = 0x3c;
              local_470 = local_50;
              local_48 = local_468;
              iVar15 = FUN_004c6770(puVar7,(undefined4 *)puVar7[1],local_49c);
              if (*(int *)(iVar5 + 8) == 0x38e38e2) goto LAB_00515ef0;
              *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
              *(int *)((int)local_630._4_4_ + 4) = iVar15;
              **(int **)(iVar15 + 4) = iVar15;
            }
          }
          local_660 = (double)(local_1a0 * fStack_678 * 0.075) + local_660;
          local_2dc[0] = local_660;
          local_668 = (double)(local_644 * fStack_678 * 0.075) + local_668;
          fVar27 = (float)(int)local_5c8;
          local_5c8 = (float)((int)local_5c8 + 1);
          local_5f4 = (float)((int)local_5f4 + 5);
          local_60c = (double)((fStack_678 * 0.1 * fVar27) / 40.0) + local_60c;
          local_2dc[1] = local_668;
          local_2dc[2] = local_60c;
        } while ((int)local_5f4 < 0xc9);
        local_5bc = (float)((int)local_5bc + 1);
        if ((int)local_5e0 <= (int)local_5bc) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      } while( true );
    }
  }
  else if (param_6 == 1) {
    iVar5 = (*pcVar18)();
    local_654 = ((float)iVar5 * 6.2831855) / 32767.0;
    iVar5 = (*pcVar18)();
    local_58d = (byte)(iVar5 % 100);
    iVar5 = (*pcVar18)();
    iVar15 = rand();
    local_170[0] = (float)(iVar15 % 100 & 0xff);
    local_170[1] = (float)(iVar5 % 0x32 + 100U & 0xff);
    local_170[2] = (float)local_58d;
    iVar5 = rand();
    local_58d = (byte)(iVar5 % 100);
    iVar15 = rand();
    iVar16 = rand();
    iVar5 = local_5a0;
    local_628 = 0.0;
    local_1b8 = (float)(iVar16 % 100 & 0xff);
    fStack_1b4 = (float)(iVar15 % 0x32 + 100U & 0xff);
    local_1b0 = (float)local_58d;
    local_594 = (float)param_4;
    fVar27 = (float)(local_5ac / 3);
    local_5d4 = (undefined4 *)((int)local_5d0 + local_5ac + 1);
    local_5f0 = fVar27;
    local_670._4_4_ = (float)-param_4 * 0.3;
    do {
      local_654 = local_654 + 0.9424778;
      local_604 = (double)CONCAT44(((float)(int)local_628 * 0.7) / 30.0 + 0.3,(undefined4)local_604)
      ;
      dVar25 = (double)local_654;
      libm_sse2_cos_precise();
      local_630 = (double)CONCAT44((float)dVar25 * local_594,(undefined4)local_630);
      dVar25 = (double)local_654;
      libm_sse2_sin_precise();
      fVar22 = (1.0 - local_604._4_4_) * 2.0;
      local_614 = (double)(local_604._4_4_ * (float)local_5ac + (float)(int)local_5d0);
      local_6e4 = (double)(int)local_5d8 + (double)(fVar22 * local_630._4_4_);
      local_70c = (double)(int)local_5dc + (double)(fVar22 * (float)dVar25 * local_594);
      local_700 = local_614 + (double)(fVar22 * local_670._4_4_);
      if (0 < (int)fVar27) {
        fStack_678 = (float)(int)fVar27;
        local_5c0 = local_5f0;
        do {
          fVar28 = (float)(int)fVar27 / fStack_678;
          fVar22 = 1.0 - fVar28;
          local_660 = (double)fVar28 * local_6e4 + (double)fVar22 * (double)(int)local_5d8;
          local_668 = (double)fVar28 * local_70c + (double)fVar22 * (double)(int)local_5dc;
          local_630 = (double)CONCAT44(fVar28,(undefined4)local_630);
          local_604 = (double)CONCAT44(fVar22,(undefined4)local_604);
          local_60c = (double)fVar28 * local_700 + (double)fVar22 * local_614;
          if (local_5fc < 0.3) {
            pfVar6 = FUN_0052d870(local_580,(int)local_5d8,local_5dc);
            iVar15 = 0;
            do {
              iVar16 = iVar15 + 1;
              *(char *)((int)&local_6d0 + iVar15) = (char)(int)pfVar6[iVar15];
              iVar15 = iVar16;
            } while (iVar16 < 3);
            local_690 = local_6d0;
            local_68e = local_6ce;
            local_68d = 0x28;
            FUN_004d44c0(pvVar10,(int)local_660,(int)local_668,(int)(local_60c + 1.0),2.0,
                         (byte *)&local_690,iVar5,'\x01','\0');
            fVar22 = local_604._4_4_;
            fVar28 = local_630._4_4_;
          }
          local_1c4 = CONCAT44(fStack_1b4,local_1b8);
          local_1bc = local_1b0;
          stack0xffffff20 = CONCAT44(fVar22 * local_170[1],fVar22 * local_170[0]);
          local_d8 = fVar22 * local_170[2];
          local_11c[1] = fVar22 * local_170[1] + fStack_1b4 * fVar28;
          local_11c[0] = fVar22 * local_170[0] + local_1b8 * fVar28;
          local_11c[2] = local_d8 + local_1b0 * fVar28;
          iVar15 = 0;
          do {
            iVar16 = iVar15 + 1;
            *(char *)((int)&local_6f4 + iVar15) = (char)(int)local_11c[iVar15];
            iVar15 = iVar16;
          } while (iVar16 < 3);
          local_6b0 = local_6f4;
          local_6ae = local_6f2;
          local_6ad = 0x28;
          FUN_004d44c0(pvVar10,(int)local_660,(int)local_668,(int)local_60c,2.0,(byte *)&local_6b0,
                       iVar5,'\x01','\0');
          fVar27 = (float)((int)fVar27 + -1);
          local_5c0 = (float)((int)local_5c0 + -1);
        } while (local_5c0 != 0.0);
        local_5c0 = 0.0;
        fVar27 = local_5f0;
      }
      iVar15 = 0;
      do {
        iVar16 = iVar15 + 1;
        *(char *)((int)&local_6a4 + iVar15) = (char)(int)local_170[iVar15];
        iVar15 = iVar16;
      } while (iVar16 < 3);
      local_6b8 = local_6a4;
      local_6b6 = local_6a2;
      local_6b5 = 0x28;
      FUN_0041ff00(pvVar10,local_5d8,local_5dc,(int)local_5d4,(undefined1 *)&local_6b8,iVar5);
      iVar15 = 0;
      do {
        iVar16 = iVar15 + 1;
        *(char *)((int)&local_688 + iVar15) = (char)(int)local_170[iVar15];
        iVar15 = iVar16;
      } while (iVar16 < 3);
      local_624 = (float)CONCAT13(0x28,CONCAT12(local_686,local_688));
      FUN_0041ff00(pvVar10,local_5d8,local_5dc,local_5ac + (int)local_5d0,(undefined1 *)&local_624,
                   iVar5);
      local_628 = (float)((int)local_628 + 1);
    } while ((int)local_628 < 0x1e);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* dist2_16_16 @ 00522cc0  kind=game  attributed-by=ledger  size=180 */

void FUN_00522cc0(void)

{
  __security_check_cookie(DAT_00583cc8 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
  return;
}


/* pointSegmentDistanceSq @ 00523380  kind=gamemisc  attributed-by=ledger  size=292 */

float10 __cdecl FUN_00523380(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = *param_3 - *param_1;
  dVar4 = *param_2 - *param_1;
  dVar5 = param_2[1] - param_1[1];
  dVar2 = param_3[1] - param_1[1];
  dVar1 = dVar4 * dVar4 + dVar5 * dVar5;
  if (dVar1 < 9.999999682655225e-21) {
    return (float10)(float)(dVar2 * dVar2 + dVar3 * dVar3);
  }
  dVar1 = (dVar2 * dVar5 + dVar3 * dVar4) / dVar1;
  if (dVar1 <= 0.0) {
    return (float10)(float)(dVar2 * dVar2 + dVar3 * dVar3);
  }
  if (1.0 <= dVar1) {
    dVar1 = param_3[1] - param_2[1];
    dVar2 = *param_3 - *param_2;
    return (float10)(float)(dVar1 * dVar1 + dVar2 * dVar2);
  }
  dVar3 = dVar3 - dVar4 * dVar1;
  dVar2 = dVar2 - dVar5 * dVar1;
  return (float10)(float)(dVar2 * dVar2 + dVar3 * dVar3);
}


/* UNRESOLVED_5286a0 @ 005286a0  kind=gamemisc  attributed-by=ledger  size=143 */

void __thiscall FUN_005286a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (*(undefined4 **)this <= param_1)) {
    iVar3 = ((int)param_1 - (int)*(undefined4 **)this) / 0xc;
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004f8230(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    iVar2 = *(int *)this;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 0xc);
      puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 0xc);
      puVar1[2] = *(undefined4 *)(iVar2 + 8 + iVar3 * 0xc);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004f8230(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return;
}


/* rarityRoll @ 0052bf40  kind=game  attributed-by=ledger  size=94 */

int FUN_0052bf40(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = rand();
  iVar1 = iVar1 % (param_1 + 1);
  iVar2 = rand();
  if (iVar2 % 100 == 0) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = rand();
  if (iVar2 % 1000 == 0) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = rand();
  if (iVar2 % 10000 == 0) {
    iVar1 = iVar1 + 1;
  }
  if (param_2 != '\0') {
    iVar1 = param_1 + 1;
  }
  if (4 < iVar1) {
    iVar1 = 4;
  }
  return iVar1;
}


/* grid_orient_transform @ 0052dde0  kind=game  attributed-by=ledger  size=115 */

void __thiscall FUN_0052dde0(void *this,int *param_1,int *param_2)

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
    *param_1 = (*(int *)((int)this + 0xc) - *param_1) + -1;
  }
  else if (uVar2 == 2) {
    *param_1 = (*(int *)((int)this + 0xc) - *param_1) + -1;
    *param_2 = (*(int *)((int)this + 0x10) - *param_2) + -1;
  }
  else if (uVar2 == 3) {
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    *param_2 = (*(int *)((int)this + 0x10) - iVar1) + -1;
  }
  if (*(char *)((int)this + 8) != '\0') {
    *param_2 = (*(int *)((int)this + 0x10) - *param_2) + -1;
  }
  return;
}


