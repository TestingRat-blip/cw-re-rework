// Game (game_misc) -- server. 14 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Game.h"

/* getElemPtr4 @ 004013d0  kind=gamemisc  attributed-by=ledger  size=13 */

int __thiscall FUN_004013d0(void *this,int param_1)

{
  return (int)(void *)((int)this + param_1 * 4);
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


/* ftol_helper @ 0054a910  kind=game  attributed-by=ledger  size=28 */

ulonglong __fastcall FUN_0054a910(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint uStack_20;
  float fStack_1c;
  
  if (DAT_00584640 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    uStack_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((uStack_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(uStack_20 < uVar2),uStack_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}


/* ftol2_round @ 0054a946  kind=gamemisc  attributed-by=ledger  size=117 */

ulonglong FUN_0054a946(void)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = (ulonglong)ROUND(in_ST0);
  local_20 = (uint)uVar1;
  uStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((local_20 != 0) || (fVar3 = uStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)uStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
    }
  }
  return uVar1;
}


