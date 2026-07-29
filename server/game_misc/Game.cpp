// Game (game_misc) -- server. 37 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Game.h"

/* getElemPtr4 @ 004013d0  kind=gamemisc  attributed-by=ledger  size=13 */

int __thiscall FUN_004013d0(void *this,int param_1)

{
  return (int)(void *)((int)this + param_1 * 4);
}


/* vector4_at_or_null @ 004013f0  kind=gamemisc  attributed-by=ledger  size=38 */

undefined4 __thiscall FUN_004013f0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2)) {
    return *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4);
  }
  return 0;
}


/* cosf_precise @ 004024a0  kind=gamemisc  attributed-by=ledger  size=30 */

float10 __cdecl FUN_004024a0(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_cos_precise();
  return (float10)(float)dVar1;
}


/* sinf_precise @ 004024c0  kind=gamemisc  attributed-by=ledger  size=30 */

float10 __cdecl FUN_004024c0(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_sin_precise();
  return (float10)(float)dVar1;
}


/* int_vector_at @ 00402bb0  kind=gamemisc  attributed-by=ledger  size=15 */

int __thiscall FUN_00402bb0(void *this,int param_1)

{
  return *(int *)this + param_1 * 4;
}


/* fixed16_addInt @ 00405690  kind=gamemisc  attributed-by=ledger  size=35 */

void __thiscall FUN_00405690(void *this,int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4);
  *param_1 = param_2 * 0x10000 + *(int *)this;
  param_1[1] = (((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10) + iVar2 +
               (uint)CARRY4(param_2 * 0x10000,uVar1);
  return;
}


/* Block_isInterior @ 004061e0  kind=gamemisc  attributed-by=ledger  size=11 */

byte __fastcall FUN_004061e0(int param_1)

{
  return *(byte *)(param_1 + 3) >> 6 & 1;
}


/* Block_isSolid @ 004061f0  kind=gamemisc  attributed-by=ledger  size=22 */

undefined4 __fastcall FUN_004061f0(int param_1)

{
  if (((*(byte *)(param_1 + 3) & 0x1f) != 0) && ((*(byte *)(param_1 + 3) & 0x1f) != 2)) {
    return 1;
  }
  return 0;
}


/* Block_class @ 00406280  kind=gamemisc  attributed-by=ledger  size=10 */

byte __fastcall FUN_00406280(int param_1)

{
  return *(byte *)(param_1 + 3) & 0x1f;
}


/* species_groupRange @ 0040efc0  kind=game  attributed-by=ledger  size=76 */

void __cdecl FUN_0040efc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 1;
  *param_3 = 1;
  switch(param_1) {
  case 0x15:
  case 0x1c:
  case 0x2a:
  case 0x32:
  case 0x37:
  case 0x3f:
  case 0x45:
  case 0x46:
  case 0x57:
  case 0x58:
    *param_2 = 1;
    *param_3 = 3;
    break;
  case 0x16:
  case 0x23:
  case 0x24:
  case 0x36:
  case 0x38:
  case 0x3c:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x62:
  case 99:
  case 100:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x9a:
    *param_2 = 1;
    *param_3 = 5;
    return;
  }
  return;
}


/* species_levelRange @ 0040f0a0  kind=game  attributed-by=ledger  size=192 */

void __cdecl FUN_0040f0a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 1;
  *param_3 = 1;
  switch(param_1) {
  case 0x11:
  case 0x31:
  case 0x67:
  case 0x71:
  case 0x72:
  case 0x9a:
    *param_2 = 0x2f;
    *param_3 = 0x51;
    return;
  default:
    *param_2 = 2;
    *param_3 = 4;
    return;
  case 0x13:
  case 0x14:
  case 0x19:
  case 0x1a:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x3c:
  case 0x3f:
  case 0x43:
  case 0x45:
  case 0x46:
    *param_2 = 3;
    *param_3 = 6;
    return;
  case 0x15:
  case 0x2e:
  case 0x2f:
  case 0x32:
  case 0x3a:
  case 0x4b:
  case 0x50:
  case 0x56:
  case 0x59:
  case 0x66:
  case 0x68:
  case 0x96:
    *param_2 = 0x1f;
    *param_3 = 0x2f;
    return;
  case 0x1c:
  case 0x3d:
  case 0x5a:
  case 0x9b:
    *param_2 = 0xe;
    *param_3 = 0x15;
    return;
  case 0x24:
  case 0x36:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x48:
  case 0x49:
  case 0x5b:
  case 99:
  case 0x98:
  case 0x99:
    *param_2 = 0x15;
    *param_3 = 0x1f;
    return;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x35:
  case 0x3b:
  case 0x58:
  case 0x69:
  case 0x6a:
  case 0x97:
    *param_2 = 9;
    *param_3 = 0xe;
    return;
  case 0x3e:
  case 0x52:
  case 0x55:
  case 0x61:
  case 0x6e:
  case 0x70:
    *param_2 = 0xb4;
    *param_3 = 0x4e0d;
    return;
  case 0x51:
  case 0x53:
  case 0x54:
  case 0x5e:
    *param_2 = 0x51;
    *param_3 = 0xb4;
    return;
  case 0x62:
  case 100:
    *param_2 = 6;
    *param_3 = 9;
    return;
  }
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


/* int_vector_size @ 0041fff0  kind=gamemisc  attributed-by=ledger  size=9 */

int __fastcall FUN_0041fff0(int *param_1)

{
  return param_1[1] - *param_1 >> 2;
}


/* int_to_fixed16_16 @ 004cde40  kind=gamemisc  attributed-by=ledger  size=25 */

int * __thiscall FUN_004cde40(void *this,uint param_1)

{
  *(uint *)this = param_1 << 0x10;
  *(uint *)((int)this + 4) = ((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10;
  return this;
}


/* fixed16_addDouble @ 004ce290  kind=gamemisc  attributed-by=ledger  size=56 */

void __thiscall FUN_004ce290(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_0054a946();
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4);
  *param_1 = uVar1 - (uint)uVar3;
  param_1[1] = (iVar2 - (int)(uVar3 >> 0x20)) - (uint)(uVar1 < (uint)uVar3);
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


/* fixed16_subDouble @ 004e0700  kind=gamemisc  attributed-by=ledger  size=56 */

void __thiscall FUN_004e0700(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_0054a946();
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4);
  *param_1 = uVar1 - (uint)uVar3;
  param_1[1] = (iVar2 - (int)(uVar3 >> 0x20)) - (uint)(uVar1 < (uint)uVar3);
  return;
}


/* int_vector_empty @ 004e28d0  kind=gamemisc  attributed-by=ledger  size=11 */

bool __fastcall FUN_004e28d0(int *param_1)

{
  return *param_1 == param_1[1];
}


/* SpeciesGroupVector_size @ 004f3820  kind=gamemisc  attributed-by=ledger  size=23 */

int __fastcall FUN_004f3820(int *param_1)

{
  return (param_1[1] - *param_1) / 0x18;
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


/* StructureMarker_ctor @ 004f7490  kind=game  attributed-by=ledger  size=161 */

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


/* SpeciesGroup_ctor @ 004f7540  kind=gamemisc  attributed-by=ledger  size=44 */

undefined4 * __fastcall FUN_004f7540(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}


/* SpeciesGroup_dtor @ 004f77a0  kind=gamemisc  attributed-by=ledger  size=77 */

void __fastcall FUN_004f77a0(undefined4 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* SpeciesGroupVector_at @ 004f79b0  kind=gamemisc  attributed-by=ledger  size=18 */

int __thiscall FUN_004f79b0(void *this,int param_1)

{
  return *(int *)this + param_1 * 0x18;
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


/* camp_populator @ 005104e0  kind=game  attributed-by=ledger  size=7192 */

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


/* camp_populator__split_51210a @ 0051210a  kind=game  attributed-by=ledger  size=4767 */

void FUN_0051210a(void)

{
  undefined1 *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  _Container_base0 *p_Var10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  Spawn *pSVar19;
  SequentialBehavior *pSVar20;
  CombatBehavior *pCVar21;
  WalkPathBehavior *pWVar22;
  RandomInteractionBehavior *pRVar23;
  RandomWalkBehavior *pRVar24;
  CompanionBehavior *pCVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  undefined4 *puVar31;
  uint uVar32;
  uint unaff_EBX;
  undefined4 *puVar33;
  SequentialBehavior_data *pSVar34;
  uint unaff_EBP;
  uint *puVar35;
  uint *puVar36;
  uint unaff_ESI;
  int iVar37;
  undefined4 *puVar38;
  _Container_base0 *this;
  int iVar39;
  code *pcVar40;
  bool bVar41;
  double dVar42;
  float fVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined8 uVar46;
  undefined4 uStack0000000c;
  void *pvVar47;
  uint uVar8;
  
LAB_00512110:
  do {
    *(undefined2 *)(unaff_EBP - 0x360) = 1;
    *(undefined1 *)(unaff_EBP - 0x398) = 1;
    *(undefined4 *)(unaff_EBP - 0x394) = 0;
    *(undefined4 *)(unaff_EBP - 0x390) = 0;
    *(undefined8 *)(unaff_EBP - 0x388) = 0;
    *(undefined4 *)(unaff_EBP - 0x380) = 0;
    *(undefined4 *)(unaff_EBP - 0x37c) = 0;
    *(undefined4 *)(unaff_EBP - 0x378) = 0;
    *(undefined4 *)(unaff_EBP - 0x374) = 0;
    *(undefined2 *)(unaff_EBP - 0x370) = 0;
    *(undefined4 *)(unaff_EBP - 0x36c) = 0;
    *(undefined4 *)(unaff_EBP - 0x368) = 0;
    *(undefined2 *)(unaff_EBP - 0x364) = 0;
    *(undefined1 *)(unaff_EBP - 0x362) = 0;
    *(undefined4 *)(unaff_EBP - 0x25c) = 0;
    memset((void *)(unaff_EBP - 0x35c),0,0x100);
    *(undefined4 *)(unaff_EBP - 600) = 0;
    *(undefined4 *)(unaff_EBP - 0x254) = 0;
    *(undefined4 *)(unaff_EBP - 0x250) = 0xffffffff;
    *(undefined4 *)(unaff_EBP - 0x24c) = 0xffffffff;
    *(undefined4 *)(unaff_EBP - 0x248) = 0xffffffff;
    *(undefined4 *)(unaff_EBP - 0x244) = 0;
    *(undefined1 *)(unaff_EBP - 4) = 0x12;
    uVar15 = rand();
    uVar15 = uVar15 & 0x80000003;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
    }
    if (uVar15 == 1) {
      *(undefined4 *)(unaff_EBP - 100) = 0x3f800000;
      *(undefined4 *)(unaff_EBP - 0x60) = 0x3f800000;
      uVar46 = *(undefined8 *)(unaff_EBP - 100);
      *(undefined4 *)(unaff_EBP - 0x5c) = 0x3f000000;
      uVar16 = *(undefined4 *)(unaff_EBP - 0x5c);
      *(undefined4 *)(unaff_EBP - 0x3c8) = 0x10;
    }
    else if (uVar15 == 2) {
      *(undefined4 *)(unaff_EBP - 0x58) = 0x40400000;
      *(undefined4 *)(unaff_EBP - 0x54) = 0x40400000;
      uVar46 = *(undefined8 *)(unaff_EBP - 0x58);
      *(undefined4 *)(unaff_EBP - 0x50) = 0x3f800000;
      uVar16 = *(undefined4 *)(unaff_EBP - 0x50);
      *(undefined4 *)(unaff_EBP - 0x3c8) = 0xc;
    }
    else if (uVar15 == 3) {
      *(undefined4 *)(unaff_EBP - 0x4c) = 0x40000000;
      *(undefined4 *)(unaff_EBP - 0x48) = 0x40000000;
      uVar46 = *(undefined8 *)(unaff_EBP - 0x4c);
      *(undefined4 *)(unaff_EBP - 0x44) = 0x3dcccccd;
      uVar16 = *(undefined4 *)(unaff_EBP - 0x44);
      *(undefined4 *)(unaff_EBP - 0x3c8) = 0x45;
    }
    else {
      *(undefined4 *)(unaff_EBP - 0x70) = 0x40800000;
      *(undefined4 *)(unaff_EBP - 0x6c) = 0x40800000;
      uVar46 = *(undefined8 *)(unaff_EBP - 0x70);
      *(undefined4 *)(unaff_EBP - 0x68) = 0x40400000;
      uVar16 = *(undefined4 *)(unaff_EBP - 0x68);
      *(undefined4 *)(unaff_EBP - 0x3c8) = 0x42;
    }
    *(undefined4 *)(unaff_EBP - 0x39c) = uVar16;
    *(undefined8 *)(unaff_EBP - 0x3a4) = uVar46;
    uVar15 = rand();
    uVar15 = uVar15 & 0x80000003;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(unaff_EBP - 0x3a8) = uVar15;
    iVar18 = *(int *)(unaff_EBP - 0x458);
    uVar15 = *(uint *)(unaff_EBP - 0x440);
    uVar14 = *(uint *)(unaff_EBP - 0x46c);
    uVar27 = unaff_EBX * 0x10000 - *(uint *)(unaff_EBP - 0x46c);
    iVar28 = *(int *)(unaff_EBP - 0x408);
    iVar30 = *(uint *)(unaff_EBP - 0x434) + unaff_ESI;
    iVar37 = *(int *)(unaff_EBP - 0x448) + *(int *)(unaff_EBP - 0x400) +
             (uint)CARRY4(*(uint *)(unaff_EBP - 0x434),unaff_ESI);
    iVar17 = uVar15 + uVar27;
    iVar39 = *(int *)(unaff_EBP - 0x444);
    *(int *)(unaff_EBP - 0x3d8) = iVar17;
    *(int *)(unaff_EBP - 0x3b8) = iVar17;
    *(undefined4 *)(unaff_EBP - 0x3b0) = *(undefined4 *)(unaff_EBP - 0x430);
    iVar28 = iVar39 + (((((int)unaff_EBX >> 0x1f) << 0x10 | unaff_EBX >> 0x10) - iVar28) -
                      (uint)(unaff_EBX * 0x10000 < uVar14)) + (uint)CARRY4(uVar15,uVar27);
    *(undefined4 *)(unaff_EBP - 0x3ac) = *(undefined4 *)(unaff_EBP - 0x420);
    *(int *)(unaff_EBP - 0x3d4) = iVar28;
    *(int *)(unaff_EBP - 0x3b4) = iVar28;
    pvVar47 = *(void **)(unaff_EBP - 0x470);
    *(int *)(unaff_EBP - 0x3e0) = iVar30;
    *(int *)(unaff_EBP - 0x3dc) = iVar37;
    *(int *)(unaff_EBP - 0x3c0) = iVar30;
    *(int *)(unaff_EBP - 0x3bc) = iVar37;
    cVar13 = FUN_005287b0(pvVar47,unaff_EBP - 0x3c8,iVar18,'\x01');
    if (cVar13 != '\0') {
      uVar15 = *(uint *)(iVar18 + 0x10);
      puVar36 = (uint *)(iVar18 + 0xc);
      *(uint **)(unaff_EBP - 0x43c) = puVar36;
      if (unaff_EBP - 0x3c8 < uVar15) {
        uVar14 = *puVar36;
        if (unaff_EBP - 0x3c8 < uVar14) goto LAB_005124d3;
        if (uVar15 == *(uint *)(iVar18 + 0x14)) {
          FUN_004ce8e0(puVar36,1);
        }
        puVar31 = *(undefined4 **)(iVar18 + 0x10);
        puVar33 = (undefined4 *)(((int)((unaff_EBP - 0x3c8) - uVar14) / 0x188) * 0x188 + *puVar36);
        *(undefined4 **)(unaff_EBP - 0x480) = puVar31;
        *(undefined4 **)(unaff_EBP - 0x698) = puVar31;
        *(undefined4 **)(unaff_EBP - 0x40c) = puVar31;
        *(undefined1 *)(unaff_EBP - 4) = 0x13;
        if (puVar31 != (undefined4 *)0x0) {
          *puVar31 = *puVar33;
          puVar31[2] = puVar33[2];
          puVar31[3] = puVar33[3];
          puVar31[4] = puVar33[4];
          puVar31[5] = puVar33[5];
          puVar31[6] = puVar33[6];
          puVar31[7] = puVar33[7];
          puVar31[8] = puVar33[8];
          puVar31[9] = puVar33[9];
          puVar31[10] = puVar33[10];
          puVar31[0xb] = puVar33[0xb];
          *(undefined1 *)(puVar31 + 0xc) = *(undefined1 *)(puVar33 + 0xc);
          puVar31[0xd] = puVar33[0xd];
          puVar31[0xe] = puVar33[0xe];
          puVar31[0x10] = puVar33[0x10];
          puVar31[0x11] = puVar33[0x11];
          FUN_004c82a0(puVar31 + 0x12,puVar33 + 0x12);
          puVar31[0x15] = puVar33[0x15];
          FUN_00413710(puVar31 + 0x16,(undefined1 *)(puVar33 + 0x16));
          iVar18 = *(int *)(unaff_EBP - 0x480);
          puVar31[0x5c] = puVar33[0x5c];
          puVar36 = *(uint **)(unaff_EBP - 0x43c);
          puVar31[0x5d] = puVar33[0x5d];
          *(undefined4 *)(iVar18 + 0x178) = puVar33[0x5e];
          *(undefined4 *)(iVar18 + 0x17c) = puVar33[0x5f];
          *(undefined4 *)(iVar18 + 0x180) = puVar33[0x60];
          *(undefined4 *)(iVar18 + 0x184) = puVar33[0x61];
        }
      }
      else {
LAB_005124d3:
        if (uVar15 == *(uint *)(iVar18 + 0x14)) {
          FUN_004ce8e0(puVar36,1);
        }
        puVar31 = *(undefined4 **)(iVar18 + 0x10);
        *(undefined4 **)(unaff_EBP - 0x40c) = puVar31;
        *(undefined4 **)(unaff_EBP - 0x698) = puVar31;
        *(undefined1 *)(unaff_EBP - 4) = 0x14;
        if (puVar31 != (undefined4 *)0x0) {
          *puVar31 = *(undefined4 *)(unaff_EBP - 0x3c8);
          puVar31[2] = *(undefined4 *)(unaff_EBP - 0x3c0);
          puVar31[3] = *(undefined4 *)(unaff_EBP - 0x3bc);
          uVar16 = *(undefined4 *)(unaff_EBP - 0x3a4);
          puVar31[4] = *(undefined4 *)(unaff_EBP - 0x3b8);
          puVar31[5] = *(undefined4 *)(unaff_EBP - 0x3b4);
          puVar31[6] = *(undefined4 *)(unaff_EBP - 0x3b0);
          puVar31[7] = *(undefined4 *)(unaff_EBP - 0x3ac);
          puVar31[8] = *(undefined4 *)(unaff_EBP - 0x3a8);
          uVar4 = *(undefined1 *)(unaff_EBP - 0x398);
          puVar31[9] = uVar16;
          puVar31[10] = *(undefined4 *)(unaff_EBP - 0x3a0);
          puVar31[0xb] = *(undefined4 *)(unaff_EBP - 0x39c);
          *(undefined1 *)(puVar31 + 0xc) = uVar4;
          puVar31[0xd] = *(undefined4 *)(unaff_EBP - 0x394);
          puVar31[0xe] = *(undefined4 *)(unaff_EBP - 0x390);
          puVar31[0x10] = *(undefined4 *)(unaff_EBP - 0x388);
          puVar31[0x11] = *(undefined4 *)(unaff_EBP - 900);
          FUN_004c82a0(puVar31 + 0x12,(int *)(unaff_EBP - 0x380));
          puVar31[0x15] = *(undefined4 *)(unaff_EBP - 0x374);
          FUN_00413710(puVar31 + 0x16,(undefined1 *)(unaff_EBP - 0x370));
          uVar46 = *(undefined8 *)(unaff_EBP - 0x24c);
          puVar31[0x5c] = *(undefined4 *)(unaff_EBP - 600);
          puVar31[0x5d] = *(undefined4 *)(unaff_EBP - 0x254);
          puVar31[0x5e] = *(undefined4 *)(unaff_EBP - 0x250);
          uVar16 = *(undefined4 *)(unaff_EBP - 0x244);
          *(undefined8 *)(puVar31 + 0x5f) = uVar46;
          puVar31[0x61] = uVar16;
        }
      }
      puVar36[1] = puVar36[1] + 0x188;
    }
    puVar31 = *(undefined4 **)(unaff_EBP - 0x380);
    if (puVar31 != (undefined4 *)0x0) {
      puVar33 = *(undefined4 **)(unaff_EBP - 0x37c);
      for (puVar38 = puVar31; puVar38 != puVar33; puVar38 = puVar38 + 3) {
        if ((void *)*puVar38 != (void *)0x0) {
          operator_delete((void *)*puVar38);
          *puVar38 = 0;
          puVar38[1] = 0;
          puVar38[2] = 0;
        }
      }
      operator_delete(puVar31);
    }
    unaff_ESI = *(uint *)(unaff_EBP - 0x410);
    unaff_EBX = *(int *)(unaff_EBP - 0x404) + 7;
    *(uint *)(unaff_EBP - 0x404) = unaff_EBX;
  } while ((int)unaff_EBX < 0xe);
  uVar44 = CONCAT44(*(undefined4 *)(unaff_EBP - 0x408),*(undefined4 *)(unaff_EBP - 0x46c));
  uVar15 = *(int *)(unaff_EBP - 0x438) + 7;
  *(uint *)(unaff_EBP - 0x438) = uVar15;
  if (0xd < (int)uVar15) {
    iVar18 = *(int *)(unaff_EBP - 0x1f8);
    *(undefined1 *)(unaff_EBP - 4) = 0xe;
    pcVar40 = rand_exref;
    if (iVar18 != 0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x1f8));
      p_Var10 = *(_Container_base0 **)(unaff_EBP - 500);
      this = *(_Container_base0 **)(unaff_EBP - 0x1f8);
      if (this != p_Var10) {
        do {
          if (*(int *)this != 0) {
            std::_Container_base0::_Orphan_all(this);
            operator_delete(*(void **)this);
            *(undefined4 *)this = 0;
            *(undefined4 *)(this + 4) = 0;
            *(undefined4 *)(this + 8) = 0;
          }
          this = this + 0xc;
        } while (this != p_Var10);
        this = *(_Container_base0 **)(unaff_EBP - 0x1f8);
      }
      operator_delete(this);
      pcVar40 = rand_exref;
    }
LAB_00512707:
    iVar18 = (*pcVar40)();
    *(float *)(unaff_EBP - 0x410) = ((float)iVar18 * 6.2831855) / 32767.0;
    iVar18 = (*pcVar40)();
    iVar28 = 0;
    *(undefined4 *)(unaff_EBP - 0x404) = 0;
    iVar18 = iVar18 % 3 + 1;
    *(int *)(unaff_EBP - 0x43c) = iVar18;
    if (0 < iVar18) {
      dVar42 = (double)iVar18;
      *(double *)(unaff_EBP - 0x69c) = dVar42;
      do {
        *(float *)(unaff_EBP - 0x408) =
             (float)(((double)(iVar28 * 2) * 3.141592653589793) / dVar42 +
                    (double)*(float *)(unaff_EBP - 0x410));
        pSVar19 = operator_new(0x10f0);
        if (pSVar19 == (Spawn *)0x0) {
          pSVar19 = (Spawn *)0x0;
        }
        else {
          pSVar19 = cube::Spawn::Spawn(pSVar19);
        }
        fVar43 = *(float *)(unaff_EBP - 0x408);
        (pSVar19->Spawn_data).offset_0x24 = 1;
        puVar1 = &(pSVar19->Spawn_data).field_0x76;
        *(ushort *)puVar1 = *(ushort *)puVar1 | 0x1000;
        *(Spawn **)(unaff_EBP - 0x658) = pSVar19;
        (pSVar19->Spawn_data).offset_0x50 = (fVar43 * 180.0) / 3.1415927 + 90.0;
        dVar42 = (double)fVar43;
        libm_sse2_sin_precise();
        *(float *)(unaff_EBP - 0x628) = (float)dVar42 * 3.0 * 65536.0;
        uVar44 = FUN_0054a946();
        dVar42 = (double)*(float *)(unaff_EBP - 0x408);
        uVar14 = *(uint *)(unaff_EBP - 0x440);
        uVar15 = *(uint *)(unaff_EBP - 0x440);
        iVar18 = *(int *)(unaff_EBP - 0x444);
        libm_sse2_cos_precise();
        *(float *)(unaff_EBP - 0x630) = (float)dVar42 * 3.0 * 65536.0;
        uVar45 = FUN_0054a946();
        uVar27 = *(uint *)(unaff_EBP - 0x434);
        iVar28 = *(int *)(unaff_EBP - 0x448);
        *(uint *)&(pSVar19->Spawn_data).field_0xc = (uint)uVar45 + *(uint *)(unaff_EBP - 0x434);
        uVar16 = *(undefined4 *)(unaff_EBP - 0x430);
        *(uint *)&(pSVar19->Spawn_data).field_0x14 = (uint)uVar44 + uVar15;
        *(uint *)&(pSVar19->Spawn_data).field_0x10 =
             (int)(uVar45 >> 0x20) + iVar28 + (uint)CARRY4((uint)uVar45,uVar27);
        *(undefined4 *)&(pSVar19->Spawn_data).field_0x1c = uVar16;
        uVar16 = *(undefined4 *)(unaff_EBP - 0x420);
        *(uint *)&(pSVar19->Spawn_data).field_0x18 =
             (int)(uVar44 >> 0x20) + iVar18 + (uint)CARRY4((uint)uVar44,uVar14);
        *(undefined4 *)&(pSVar19->Spawn_data).field_0x20 = uVar16;
        iVar18 = *(int *)(unaff_EBP - 0x418);
        iVar28 = *(int *)(unaff_EBP - 0x41c);
        uVar15 = rand();
        iVar39 = *(int *)(unaff_EBP + 0xc);
        (pSVar19->Spawn_data).offset_0x28 =
             *(undefined4 *)
              (*(int *)(unaff_EBP - 0x41c) + (uVar15 % (uint)(iVar18 - iVar28 >> 2)) * 4);
        (pSVar19->Spawn_data).offset_0x30 = *(undefined4 *)(iVar39 + 0x24);
        (pSVar19->Spawn_data).offset_0x54 = *(undefined1 *)(iVar39 + 0x28);
        pSVar20 = operator_new(0xc);
        *(SequentialBehavior **)(unaff_EBP - 0x40c) = pSVar20;
        *(undefined1 *)(unaff_EBP - 4) = 0x15;
        if (pSVar20 == (SequentialBehavior *)0x0) {
          pSVar20 = (SequentialBehavior *)0x0;
          *(undefined4 *)(unaff_EBP - 0x408) = 0;
        }
        else {
          pSVar20 = cube::SequentialBehavior::SequentialBehavior(pSVar20);
          *(SequentialBehavior **)(unaff_EBP - 0x408) = pSVar20;
        }
        *(undefined1 *)(unaff_EBP - 4) = 0xe;
        pCVar21 = operator_new(0x14);
        *(CombatBehavior **)(unaff_EBP - 0x40c) = pCVar21;
        *(undefined1 *)(unaff_EBP - 4) = 0x16;
        if (pCVar21 == (CombatBehavior *)0x0) {
          pCVar21 = (CombatBehavior *)0x0;
        }
        else {
          pCVar21 = cube::CombatBehavior::CombatBehavior(pCVar21,0x41a00000);
        }
        puVar31 = (pSVar20->SequentialBehavior_data).offset_0x0;
        pSVar34 = &pSVar20->SequentialBehavior_data;
        *(CombatBehavior **)(unaff_EBP - 0x638) = pCVar21;
        puVar33 = (undefined4 *)puVar31[1];
        *(undefined1 *)(unaff_EBP - 4) = 0xe;
        iVar28 = FUN_0052dfb0(puVar31,puVar33,(undefined4 *)(unaff_EBP - 0x638));
        iVar18 = (pSVar20->SequentialBehavior_data).offset_0x4;
        if (iVar18 == 0x15555554) goto LAB_005133a4;
        (pSVar20->SequentialBehavior_data).offset_0x4 = iVar18 + 1;
        puVar31[1] = iVar28;
        **(int **)(iVar28 + 4) = iVar28;
        pWVar22 = operator_new(0x1c);
        *(WalkPathBehavior **)(unaff_EBP - 0x40c) = pWVar22;
        *(undefined1 *)(unaff_EBP - 4) = 0x17;
        if (pWVar22 == (WalkPathBehavior *)0x0) {
          pWVar22 = (WalkPathBehavior *)0x0;
        }
        else {
          pWVar22 = cube::WalkPathBehavior::WalkPathBehavior(pWVar22,0x40000000);
        }
        *(undefined1 *)(unaff_EBP - 4) = 0xe;
        FUN_004e1420(&pWVar22->WalkPathBehavior_data,(undefined4 *)&(pSVar19->Spawn_data).field_0xc)
        ;
        *(WalkPathBehavior **)(unaff_EBP - 0x640) = pWVar22;
        puVar31 = pSVar34->offset_0x0;
        iVar28 = FUN_0052dfb0(puVar31,(undefined4 *)puVar31[1],(undefined4 *)(unaff_EBP - 0x640));
        iVar18 = (pSVar20->SequentialBehavior_data).offset_0x4;
        if (iVar18 == 0x15555554) goto LAB_005133a4;
        (pSVar20->SequentialBehavior_data).offset_0x4 = iVar18 + 1;
        puVar31[1] = iVar28;
        **(int **)(iVar28 + 4) = iVar28;
        if ((*(int *)(unaff_EBP - 0x45c) == *(int *)(unaff_EBP - 0x47c)) &&
           (*(int *)(unaff_EBP - 0x404) == 0)) {
          puVar1 = &(pSVar19->Spawn_data).field_0x76;
          *(ushort *)puVar1 = *(ushort *)puVar1 | 0x200;
          pSVar19[1].Spawn_data.field_0x16c = 1;
        }
        pRVar23 = operator_new(8);
        *(RandomInteractionBehavior **)(unaff_EBP - 0x40c) = pRVar23;
        *(undefined1 *)(unaff_EBP - 4) = 0x18;
        if (pRVar23 == (RandomInteractionBehavior *)0x0) {
          pRVar23 = (RandomInteractionBehavior *)0x0;
        }
        else {
          pRVar23 = cube::RandomInteractionBehavior::RandomInteractionBehavior(pRVar23);
        }
        puVar31 = pSVar34->offset_0x0;
        *(RandomInteractionBehavior **)(unaff_EBP - 0x648) = pRVar23;
        puVar33 = (undefined4 *)puVar31[1];
        *(undefined1 *)(unaff_EBP - 4) = 0xe;
        iVar28 = FUN_0052dfb0(puVar31,puVar33,(undefined4 *)(unaff_EBP - 0x648));
        iVar18 = (pSVar20->SequentialBehavior_data).offset_0x4;
        if (iVar18 == 0x15555554) goto LAB_005133a4;
        (pSVar20->SequentialBehavior_data).offset_0x4 = iVar18 + 1;
        puVar31[1] = iVar28;
        **(int **)(iVar28 + 4) = iVar28;
        pRVar24 = operator_new(8);
        *(RandomWalkBehavior **)(unaff_EBP - 0x40c) = pRVar24;
        *(undefined1 *)(unaff_EBP - 4) = 0x19;
        if (pRVar24 == (RandomWalkBehavior *)0x0) {
          pRVar24 = (RandomWalkBehavior *)0x0;
        }
        else {
          pRVar24 = cube::RandomWalkBehavior::RandomWalkBehavior(pRVar24);
        }
        puVar31 = pSVar34->offset_0x0;
        *(RandomWalkBehavior **)(unaff_EBP - 0x650) = pRVar24;
        puVar33 = (undefined4 *)puVar31[1];
        *(undefined1 *)(unaff_EBP - 4) = 0xe;
        iVar28 = FUN_0052dfb0(puVar31,puVar33,(undefined4 *)(unaff_EBP - 0x650));
        iVar18 = (pSVar20->SequentialBehavior_data).offset_0x4;
        if (iVar18 == 0x15555554) goto LAB_005133a4;
        (pSVar20->SequentialBehavior_data).offset_0x4 = iVar18 + 1;
        puVar31[1] = iVar28;
        **(int **)(iVar28 + 4) = iVar28;
        *(undefined4 *)&pSVar19[1].Spawn_data.field_0x120 = *(undefined4 *)(unaff_EBP - 0x408);
        FUN_0040a840(&(pSVar19->Spawn_data).offset_0x28,(int)&(pSVar19->Spawn_data).offset_0x70,
                     (undefined4 *)0x0);
        FUN_004fb480((int)pSVar19,0);
        FUN_004f2be0((void *)(*(int *)(unaff_EBP - 0x458) + 0x18),(undefined4 *)(unaff_EBP - 0x658))
        ;
        dVar42 = *(double *)(unaff_EBP - 0x69c);
        iVar28 = *(int *)(unaff_EBP - 0x404) + 1;
        *(int *)(unaff_EBP - 0x404) = iVar28;
      } while (iVar28 < *(int *)(unaff_EBP - 0x43c));
    }
LAB_0051323d:
    do {
      iVar18 = *(int *)(unaff_EBP - 0x454);
      *(undefined1 *)(unaff_EBP - 4) = 2;
      if (iVar18 != 0) {
        std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x454));
        operator_delete(*(void **)(unaff_EBP - 0x454));
        *(undefined4 *)(unaff_EBP - 0x454) = 0;
        *(undefined4 *)(unaff_EBP - 0x450) = 0;
        *(undefined4 *)(unaff_EBP - 0x44c) = 0;
      }
      puVar31 = *(undefined4 **)(unaff_EBP + 0x10);
LAB_00513285:
      while( true ) {
        puVar36 = (uint *)puVar31[1];
        puVar35 = (uint *)*puVar31;
        iVar18 = *(int *)(unaff_EBP - 0x45c) + 1;
        *(int *)(unaff_EBP - 0x45c) = iVar18;
        if (((int)puVar36 - (int)puVar35) / 0x18 <= iVar18) {
          iVar18 = *(int *)(unaff_EBP - 0x468);
          *(undefined1 *)(unaff_EBP - 4) = 1;
          if (iVar18 != 0) {
            std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x468));
            operator_delete(*(void **)(unaff_EBP - 0x468));
            *(undefined4 *)(unaff_EBP - 0x468) = 0;
            *(undefined4 *)(unaff_EBP - 0x464) = 0;
            *(undefined4 *)(unaff_EBP - 0x460) = 0;
          }
          iVar18 = *(int *)(unaff_EBP - 0x41c);
          *(undefined1 *)(unaff_EBP - 4) = 0;
          if (iVar18 != 0) {
            std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x41c));
            operator_delete(*(void **)(unaff_EBP - 0x41c));
            *(undefined4 *)(unaff_EBP - 0x41c) = 0;
            *(undefined4 *)(unaff_EBP - 0x418) = 0;
            *(undefined4 *)(unaff_EBP - 0x414) = 0;
          }
          iVar18 = *(int *)(unaff_EBP - 0x42c);
          *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
          if (iVar18 != 0) {
            std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x42c));
            FUN_004f3bf0(*(undefined4 **)(unaff_EBP - 0x42c),*(undefined4 **)(unaff_EBP - 0x428));
            operator_delete(*(void **)(unaff_EBP - 0x42c));
          }
          ExceptionList = *(void **)(unaff_EBP - 0xc);
          uStack0000000c = 0x51339e;
          __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
          return;
        }
        uVar15 = puVar35[iVar18 * 6];
        *(uint *)(unaff_EBP - 0x434) = uVar15;
        *(uint *)(unaff_EBP - 0x28) = uVar15;
        uVar15 = puVar35[iVar18 * 6 + 1];
        *(uint *)(unaff_EBP - 0x448) = uVar15;
        *(uint *)(unaff_EBP - 0x24) = uVar15;
        uVar15 = puVar35[iVar18 * 6 + 2];
        *(uint *)(unaff_EBP - 0x440) = uVar15;
        *(uint *)(unaff_EBP - 0x20) = uVar15;
        uVar15 = puVar35[iVar18 * 6 + 3];
        *(uint *)(unaff_EBP - 0x444) = uVar15;
        *(uint *)(unaff_EBP - 0x1c) = uVar15;
        uVar15 = puVar35[iVar18 * 6 + 4];
        *(uint *)(unaff_EBP - 0x430) = uVar15;
        *(uint *)(unaff_EBP - 0x18) = uVar15;
        uVar15 = puVar35[iVar18 * 6 + 5];
        *(uint *)(unaff_EBP - 0x420) = uVar15;
        *(uint *)(unaff_EBP - 0x14) = uVar15;
        *(undefined4 *)(unaff_EBP - 0x454) = 0;
        *(undefined4 *)(unaff_EBP - 0x450) = 0;
        *(undefined4 *)(unaff_EBP - 0x44c) = 0;
        *(undefined1 *)(unaff_EBP - 4) = 0xe;
        if (puVar35 == puVar36) {
          uVar15 = *(uint *)(unaff_EBP - 0x434);
        }
        else {
          while( true ) {
            uVar15 = *puVar35;
            uVar14 = *(uint *)(unaff_EBP - 0x434);
            uVar27 = puVar35[1];
            iVar18 = *(int *)(unaff_EBP - 0x448);
            uVar32 = puVar35[2];
            uVar29 = *(uint *)(unaff_EBP - 0x440);
            uVar26 = *(uint *)(unaff_EBP - 0x440);
            uVar5 = puVar35[3];
            uVar6 = puVar35[4];
            iVar28 = *(int *)(unaff_EBP - 0x444);
            uVar7 = *(uint *)(unaff_EBP - 0x430);
            uVar8 = *(uint *)(unaff_EBP - 0x430);
            *(uint *)(unaff_EBP - 0x94) = uVar15 - *(uint *)(unaff_EBP - 0x434);
            uVar9 = puVar35[5];
            iVar39 = *(int *)(unaff_EBP - 0x420);
            *(uint *)(unaff_EBP - 0x90) = (uVar27 - iVar18) - (uint)(uVar15 < uVar14);
            lVar3 = *(longlong *)(unaff_EBP - 0x94);
            *(uint *)(unaff_EBP - 0x8c) = uVar32 - uVar26;
            *(uint *)(unaff_EBP - 0x88) = (uVar5 - iVar28) - (uint)(uVar32 < uVar29);
            *(uint *)(unaff_EBP - 0x84) = uVar6 - uVar8;
            *(uint *)(unaff_EBP - 0x80) = (uVar9 - iVar39) - (uint)(uVar6 < uVar7);
            *(float *)(unaff_EBP - 0x400) = (float)lVar3;
            *(undefined4 *)(unaff_EBP - 0x400) = *(undefined4 *)(unaff_EBP - 0x400);
            lVar3 = *(longlong *)(unaff_EBP - 0x8c);
            *(float *)(unaff_EBP - 0xb0) = *(float *)(unaff_EBP - 0x400) * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x400) = (float)lVar3;
            *(undefined4 *)(unaff_EBP - 0x400) = *(undefined4 *)(unaff_EBP - 0x400);
            lVar3 = *(longlong *)(unaff_EBP - 0x84);
            *(float *)(unaff_EBP - 0xac) = *(float *)(unaff_EBP - 0x400) * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x400) = (float)lVar3;
            *(undefined4 *)(unaff_EBP - 0x400) = *(undefined4 *)(unaff_EBP - 0x400);
            *(float *)(unaff_EBP - 0xa8) = *(float *)(unaff_EBP - 0x400) * 1.5258789e-05;
            *(undefined8 *)(unaff_EBP - 0x9c) = *(undefined8 *)(unaff_EBP - 0xb0);
            fVar43 = *(float *)(unaff_EBP - 0x98) * *(float *)(unaff_EBP - 0x98) +
                     *(float *)(unaff_EBP - 0x9c) * *(float *)(unaff_EBP - 0x9c);
            if ((25.0 < fVar43) && (fVar43 < 16384.0)) {
              FUN_004e1420((void *)(unaff_EBP - 0x454),puVar35);
            }
            puVar31 = *(undefined4 **)(unaff_EBP + 0x10);
            *(undefined4 *)(unaff_EBP - 0x420) = *(undefined4 *)(unaff_EBP - 0x14);
            *(undefined4 *)(unaff_EBP - 0x430) = *(undefined4 *)(unaff_EBP - 0x18);
            *(undefined4 *)(unaff_EBP - 0x444) = *(undefined4 *)(unaff_EBP - 0x1c);
            puVar35 = puVar35 + 6;
            *(undefined4 *)(unaff_EBP - 0x440) = *(undefined4 *)(unaff_EBP - 0x20);
            *(undefined4 *)(unaff_EBP - 0x448) = *(undefined4 *)(unaff_EBP - 0x24);
            if (puVar35 == (uint *)puVar31[1]) break;
            *(undefined4 *)(unaff_EBP - 0x434) = *(undefined4 *)(unaff_EBP - 0x28);
          }
          uVar15 = *(uint *)(unaff_EBP - 0x28);
          iVar18 = *(int *)(unaff_EBP - 0x45c);
          *(uint *)(unaff_EBP - 0x434) = uVar15;
        }
        pcVar40 = rand_exref;
        if (iVar18 == *(int *)(unaff_EBP - 0x47c)) break;
        uVar14 = rand();
        uVar14 = uVar14 & 0x80000001;
        bVar41 = uVar14 == 0;
        if ((int)uVar14 < 0) {
          bVar41 = (uVar14 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar41) {
          uVar14 = rand();
          uVar14 = uVar14 & 0x80000001;
          bVar41 = uVar14 == 0;
          if ((int)uVar14 < 0) {
            bVar41 = (uVar14 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar41) break;
          goto LAB_00512b3e;
        }
        pvVar47 = *(void **)(unaff_EBP - 0x454);
        if (pvVar47 != (void *)0x0) goto LAB_00511b6a;
      }
      if (*(int *)(unaff_EBP - 0x41c) != *(int *)(unaff_EBP - 0x418)) {
        if (*(char *)(unaff_EBP - 0x3f9) == '\0') goto LAB_00512707;
        *(undefined2 *)(unaff_EBP - 0x1d8) = 1;
        *(undefined1 *)(unaff_EBP - 0x210) = 1;
        *(undefined4 *)(unaff_EBP - 0x20c) = 0;
        *(undefined4 *)(unaff_EBP - 0x208) = 0;
        *(undefined8 *)(unaff_EBP - 0x200) = 0;
        *(undefined4 *)(unaff_EBP - 0x1f8) = 0;
        *(undefined4 *)(unaff_EBP - 500) = 0;
        *(undefined4 *)(unaff_EBP - 0x1f0) = 0;
        *(undefined4 *)(unaff_EBP - 0x1ec) = 0;
        *(undefined2 *)(unaff_EBP - 0x1e8) = 0;
        *(undefined4 *)(unaff_EBP - 0x1e4) = 0;
        *(undefined4 *)(unaff_EBP - 0x1e0) = 0;
        *(undefined2 *)(unaff_EBP - 0x1dc) = 0;
        *(undefined1 *)(unaff_EBP - 0x1da) = 0;
        *(undefined4 *)(unaff_EBP - 0xd4) = 0;
        memset((void *)(unaff_EBP - 0x1d4),0,0x100);
        *(undefined4 *)(unaff_EBP - 0xd0) = 0;
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        *(undefined4 *)(unaff_EBP - 200) = 0xffffffff;
        *(undefined4 *)(unaff_EBP - 0xc4) = 0xffffffff;
        *(undefined4 *)(unaff_EBP - 0xc0) = 0xffffffff;
        *(undefined4 *)(unaff_EBP - 0xbc) = 0;
        *(undefined4 *)(unaff_EBP - 0x7c) = 0x4019999a;
        *(undefined4 *)(unaff_EBP - 0x78) = 0x4019999a;
        uVar11 = *(undefined4 *)(unaff_EBP - 0x7c);
        uVar12 = *(undefined4 *)(unaff_EBP - 0x78);
        *(undefined4 *)(unaff_EBP - 0x74) = 0x3f000000;
        uVar16 = *(undefined4 *)(unaff_EBP - 0x74);
        *(undefined1 *)(unaff_EBP - 4) = 0xf;
        *(undefined4 *)(unaff_EBP - 0x240) = 0x41;
        *(undefined4 *)(unaff_EBP - 0x21c) = uVar11;
        *(undefined4 *)(unaff_EBP - 0x218) = uVar12;
        *(undefined4 *)(unaff_EBP - 0x214) = uVar16;
        uVar14 = rand();
        uVar14 = uVar14 & 0x80000003;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
        }
        *(uint *)(unaff_EBP - 0x220) = uVar14;
        uVar14 = 0;
        *(undefined4 *)(unaff_EBP - 0x404) = 0;
        goto LAB_00511d00;
      }
LAB_00512b3e:
      iVar18 = *(int *)(unaff_EBP - 0x42c);
      iVar28 = *(int *)(unaff_EBP - 0x428);
      if (iVar18 == iVar28) goto LAB_0051323d;
      uVar15 = rand();
      uVar15 = uVar15 % (uint)((iVar28 - iVar18) / 0x18);
      iVar18 = *(int *)(unaff_EBP - 0x42c);
      *(int *)(unaff_EBP - 0x404) = iVar18;
      *(uint *)(unaff_EBP - 0x438) = uVar15 * 3;
      if (*(int *)(iVar18 + uVar15 * 0x18) == *(int *)(iVar18 + 4 + uVar15 * 0x18))
      goto code_r0x00512b89;
      pSVar19 = operator_new(0x10f0);
      if (pSVar19 == (Spawn *)0x0) {
        pSVar19 = (Spawn *)0x0;
        *(undefined4 *)(unaff_EBP - 0x400) = 0;
      }
      else {
        pSVar19 = cube::Spawn::Spawn(pSVar19);
        *(Spawn **)(unaff_EBP - 0x400) = pSVar19;
      }
      (pSVar19->Spawn_data).offset_0x24 = 1;
      puVar1 = &(pSVar19->Spawn_data).field_0x76;
      *(ushort *)puVar1 = *(ushort *)puVar1 | 0x1000;
      *(Spawn **)(unaff_EBP - 0x474) = pSVar19;
      iVar28 = rand();
      uVar16 = *(undefined4 *)(unaff_EBP - 0x434);
      iVar18 = *(int *)(unaff_EBP - 0x404);
      puVar1 = &(pSVar19->Spawn_data).field_0xc;
      (pSVar19->Spawn_data).offset_0x50 = (float)(iVar28 % 0x168);
      *(undefined4 *)puVar1 = uVar16;
      *(undefined4 *)&(pSVar19->Spawn_data).field_0x10 = *(undefined4 *)(unaff_EBP - 0x448);
      *(undefined4 *)&(pSVar19->Spawn_data).field_0x14 = *(undefined4 *)(unaff_EBP - 0x440);
      *(undefined4 *)&(pSVar19->Spawn_data).field_0x18 = *(undefined4 *)(unaff_EBP - 0x444);
      *(undefined4 *)&(pSVar19->Spawn_data).field_0x1c = *(undefined4 *)(unaff_EBP - 0x430);
      *(undefined4 *)&(pSVar19->Spawn_data).field_0x20 = *(undefined4 *)(unaff_EBP - 0x420);
      iVar28 = *(int *)(iVar18 + 4 + uVar15 * 0x18);
      iVar18 = *(int *)(iVar18 + *(int *)(unaff_EBP - 0x438) * 8);
      uVar15 = rand();
      iVar39 = *(int *)(unaff_EBP + 0xc);
      (pSVar19->Spawn_data).offset_0x28 =
           *(undefined4 *)
            (*(int *)(*(int *)(unaff_EBP - 0x404) + *(int *)(unaff_EBP - 0x438) * 8) +
            (uVar15 % (uint)(iVar28 - iVar18 >> 2)) * 4);
      (pSVar19->Spawn_data).offset_0x30 = *(undefined4 *)(iVar39 + 0x24);
      (pSVar19->Spawn_data).offset_0x54 = *(undefined1 *)(iVar39 + 0x28);
      pSVar20 = operator_new(0xc);
      *(SequentialBehavior **)(unaff_EBP - 0x40c) = pSVar20;
      *(undefined1 *)(unaff_EBP - 4) = 0x1a;
      if (pSVar20 == (SequentialBehavior *)0x0) {
        pSVar20 = (SequentialBehavior *)0x0;
        *(undefined4 *)(unaff_EBP - 0x420) = 0;
      }
      else {
        pSVar20 = cube::SequentialBehavior::SequentialBehavior(pSVar20);
        *(SequentialBehavior **)(unaff_EBP - 0x420) = pSVar20;
      }
      *(undefined1 *)(unaff_EBP - 4) = 0xe;
      pCVar21 = operator_new(0x14);
      *(CombatBehavior **)(unaff_EBP - 0x40c) = pCVar21;
      *(undefined1 *)(unaff_EBP - 4) = 0x1b;
      if (pCVar21 == (CombatBehavior *)0x0) {
        pCVar21 = (CombatBehavior *)0x0;
      }
      else {
        pCVar21 = cube::CombatBehavior::CombatBehavior(pCVar21,0x41a00000);
      }
      puVar31 = (pSVar20->SequentialBehavior_data).offset_0x0;
      pSVar34 = &pSVar20->SequentialBehavior_data;
      *(CombatBehavior **)(unaff_EBP - 0x660) = pCVar21;
      puVar33 = (undefined4 *)puVar31[1];
      *(undefined1 *)(unaff_EBP - 4) = 0xe;
      *(SequentialBehavior_data **)(unaff_EBP - 0x430) = pSVar34;
      iVar28 = FUN_0052dfb0(puVar31,puVar33,(undefined4 *)(unaff_EBP - 0x660));
      iVar18 = (pSVar20->SequentialBehavior_data).offset_0x4;
      if (iVar18 == 0x15555554) {
LAB_005133a4:
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      (pSVar20->SequentialBehavior_data).offset_0x4 = iVar18 + 1;
      puVar31[1] = iVar28;
      **(int **)(iVar28 + 4) = iVar28;
      pWVar22 = operator_new(0x1c);
      *(WalkPathBehavior **)(unaff_EBP - 0x40c) = pWVar22;
      *(undefined1 *)(unaff_EBP - 4) = 0x1c;
      if (pWVar22 == (WalkPathBehavior *)0x0) {
        pWVar22 = (WalkPathBehavior *)0x0;
      }
      else {
        pWVar22 = cube::WalkPathBehavior::WalkPathBehavior(pWVar22,0x40000000);
      }
      *(undefined1 *)(unaff_EBP - 4) = 0xe;
      *(WalkPathBehavior_data **)(unaff_EBP - 0x480) = &pWVar22->WalkPathBehavior_data;
      FUN_004e1420(&pWVar22->WalkPathBehavior_data,(undefined4 *)puVar1);
      *(WalkPathBehavior **)(unaff_EBP - 0x668) = pWVar22;
      puVar31 = pSVar34->offset_0x0;
      iVar28 = FUN_0052dfb0(puVar31,(undefined4 *)puVar31[1],(undefined4 *)(unaff_EBP - 0x668));
      iVar18 = (pSVar20->SequentialBehavior_data).offset_0x4;
      if (iVar18 == 0x15555554) goto LAB_005133a4;
      (pSVar20->SequentialBehavior_data).offset_0x4 = iVar18 + 1;
      puVar31[1] = iVar28;
      **(int **)(iVar28 + 4) = iVar28;
      iVar18 = *(int *)(unaff_EBP - 0x454);
      iVar28 = *(int *)(unaff_EBP - 0x450);
      if (iVar18 != iVar28) {
        *(undefined4 *)(unaff_EBP - 0x46c) = 3;
        while( true ) {
          uVar26 = rand();
          uVar26 = uVar26 % (uint)((iVar28 - iVar18) / 0x18);
          iVar18 = *(int *)(unaff_EBP - 0x454);
          iVar28 = *(int *)(unaff_EBP - 0x458);
          uVar16 = *(undefined4 *)(iVar18 + 0xc + uVar26 * 0x18);
          uVar15 = *(uint *)(iVar18 + 8 + uVar26 * 0x18);
          uVar14 = *(uint *)(iVar18 + 4 + uVar26 * 0x18);
          uVar27 = *(uint *)(iVar18 + uVar26 * 0x18);
          *(undefined4 *)(unaff_EBP - 0x408) = uVar16;
          uVar32 = *(uint *)(unaff_EBP - 0x408);
          *(undefined4 *)(unaff_EBP - 0x34) = uVar16;
          *(undefined4 *)(unaff_EBP - 0x30) = *(undefined4 *)(iVar18 + 0x10 + uVar26 * 0x18);
          uVar16 = *(undefined4 *)(iVar18 + 0x14 + uVar26 * 0x18);
          *(uint *)(unaff_EBP - 0x40) = uVar27;
          *(uint *)(unaff_EBP - 0x43c) = uVar14;
          *(uint *)(unaff_EBP - 0x3c) = uVar14;
          *(uint *)(unaff_EBP - 0x410) = uVar15;
          *(uint *)(unaff_EBP - 0x38) = uVar15;
          *(undefined4 *)(unaff_EBP - 0x2c) = uVar16;
          uVar46 = __alldiv(uVar15,uVar32,0x10000,0);
          uVar15 = (uint)uVar46;
          uVar46 = __alldiv(uVar27,uVar14,0x10000,0);
          iVar28 = FUN_00406100(*(void **)(unaff_EBP - 0x470),(uint)uVar46,uVar15,iVar28);
          if (iVar28 != 0) {
            uVar15 = *(uint *)(iVar28 + 0x14);
            uVar14 = ((int)uVar15 >> 0x1f) << 0x10 | uVar15 >> 0x10;
            uVar15 = uVar15 << 0x10;
            while( true ) {
              iVar18 = *(int *)(unaff_EBP - 0x458);
              pvVar47 = *(void **)(unaff_EBP - 0x470);
              uVar32 = *(uint *)(unaff_EBP - 0x408);
              *(uint *)(unaff_EBP - 0x2c) = uVar14;
              uVar26 = *(uint *)(unaff_EBP - 0x410);
              *(uint *)(unaff_EBP - 0x30) = uVar15;
              iVar18 = FUN_00406050(pvVar47,uVar27,*(uint *)(unaff_EBP - 0x43c),uVar26,uVar32,uVar15
                                    ,uVar14,iVar18);
              if (((*(byte *)(iVar18 + 3) & 0x1f) == 0) || ((*(byte *)(iVar18 + 3) & 0x1f) == 2))
              break;
              bVar41 = 0xfffeffff < uVar15;
              uVar15 = uVar15 + 0x10000;
              uVar14 = uVar14 + bVar41;
            }
            FUN_004e1420(*(void **)(unaff_EBP - 0x480),(undefined4 *)(unaff_EBP - 0x40));
            iVar18 = *(int *)(unaff_EBP - 0x454);
          }
          piVar2 = (int *)(unaff_EBP - 0x46c);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) break;
          iVar28 = *(int *)(unaff_EBP - 0x450);
        }
        pSVar34 = *(SequentialBehavior_data **)(unaff_EBP - 0x430);
      }
      pRVar24 = operator_new(8);
      *(RandomWalkBehavior **)(unaff_EBP - 0x40c) = pRVar24;
      *(undefined1 *)(unaff_EBP - 4) = 0x1d;
      if (pRVar24 == (RandomWalkBehavior *)0x0) {
        pRVar24 = (RandomWalkBehavior *)0x0;
      }
      else {
        pRVar24 = cube::RandomWalkBehavior::RandomWalkBehavior(pRVar24);
      }
      puVar31 = pSVar34->offset_0x0;
      *(RandomWalkBehavior **)(unaff_EBP - 0x670) = pRVar24;
      puVar33 = (undefined4 *)puVar31[1];
      *(undefined1 *)(unaff_EBP - 4) = 0xe;
      iVar18 = FUN_0052dfb0(puVar31,puVar33,(undefined4 *)(unaff_EBP - 0x670));
      if (pSVar34->offset_0x4 == 0x15555554) goto LAB_005133a4;
      pSVar34->offset_0x4 = pSVar34->offset_0x4 + 1;
      uVar16 = *(undefined4 *)(unaff_EBP - 0x420);
      puVar31[1] = iVar18;
      **(int **)(iVar18 + 4) = iVar18;
      *(undefined4 *)(*(int *)(unaff_EBP - 0x400) + 0x109c) = uVar16;
      FUN_004f2be0((void *)(*(int *)(unaff_EBP - 0x458) + 0x18),(undefined4 *)(unaff_EBP - 0x474));
      iVar18 = *(int *)(unaff_EBP - 0x438);
      if (*(int *)(*(int *)(unaff_EBP - 0x404) + 0xc + iVar18 * 8) !=
          *(int *)(*(int *)(unaff_EBP - 0x404) + 0x10 + iVar18 * 8)) {
        iVar28 = rand();
        *(undefined4 *)(unaff_EBP - 0x408) = 0;
        iVar28 = iVar28 % 3 + 1;
        *(int *)(unaff_EBP - 0x43c) = iVar28;
        if (0 < iVar28) {
          iVar28 = *(int *)(unaff_EBP - 0x474);
          do {
            pSVar19 = operator_new(0x10f0);
            if (pSVar19 == (Spawn *)0x0) {
              pSVar19 = (Spawn *)0x0;
            }
            else {
              pSVar19 = cube::Spawn::Spawn(pSVar19);
            }
            iVar39 = *(int *)(unaff_EBP - 0x404);
            *(undefined4 *)&(pSVar19->Spawn_data).field_0xc = *(undefined4 *)(iVar28 + 0x10);
            *(undefined4 *)&(pSVar19->Spawn_data).field_0x10 = *(undefined4 *)(iVar28 + 0x14);
            *(undefined4 *)&(pSVar19->Spawn_data).field_0x14 = *(undefined4 *)(iVar28 + 0x18);
            *(undefined4 *)&(pSVar19->Spawn_data).field_0x18 = *(undefined4 *)(iVar28 + 0x1c);
            *(undefined4 *)&(pSVar19->Spawn_data).field_0x1c = *(undefined4 *)(iVar28 + 0x20);
            *(undefined4 *)&(pSVar19->Spawn_data).field_0x20 = *(undefined4 *)(iVar28 + 0x24);
            (pSVar19->Spawn_data).offset_0x24 = 1;
            puVar1 = &(pSVar19->Spawn_data).field_0x76;
            *(ushort *)puVar1 = *(ushort *)puVar1 | 0x1000;
            iVar18 = *(int *)(iVar39 + 0x10 + iVar18 * 8);
            iVar17 = *(int *)(unaff_EBP - 0x438);
            *(Spawn **)(unaff_EBP - 0x690) = pSVar19;
            iVar39 = *(int *)(iVar39 + 0xc + iVar17 * 8);
            uVar15 = rand();
            iVar17 = *(int *)(unaff_EBP + 0xc);
            (pSVar19->Spawn_data).offset_0x28 =
                 *(undefined4 *)
                  (*(int *)(*(int *)(unaff_EBP - 0x404) + 0xc + *(int *)(unaff_EBP - 0x438) * 8) +
                  (uVar15 % (uint)(iVar18 - iVar39 >> 2)) * 4);
            (pSVar19->Spawn_data).offset_0x30 = *(undefined4 *)(iVar17 + 0x24);
            (pSVar19->Spawn_data).offset_0x54 = *(undefined1 *)(iVar17 + 0x28);
            pSVar20 = operator_new(0xc);
            *(SequentialBehavior **)(unaff_EBP - 0x40c) = pSVar20;
            *(undefined1 *)(unaff_EBP - 4) = 0x1e;
            if (pSVar20 == (SequentialBehavior *)0x0) {
              pSVar20 = (SequentialBehavior *)0x0;
              *(undefined4 *)(unaff_EBP - 0x400) = 0;
            }
            else {
              pSVar20 = cube::SequentialBehavior::SequentialBehavior(pSVar20);
              *(SequentialBehavior **)(unaff_EBP - 0x400) = pSVar20;
            }
            *(undefined1 *)(unaff_EBP - 4) = 0xe;
            pCVar21 = operator_new(0x14);
            *(CombatBehavior **)(unaff_EBP - 0x40c) = pCVar21;
            *(undefined1 *)(unaff_EBP - 4) = 0x1f;
            if (pCVar21 == (CombatBehavior *)0x0) {
              pCVar21 = (CombatBehavior *)0x0;
            }
            else {
              pCVar21 = cube::CombatBehavior::CombatBehavior(pCVar21,0x41a00000);
            }
            pSVar34 = &pSVar20->SequentialBehavior_data;
            *(CombatBehavior **)(unaff_EBP - 0x678) = pCVar21;
            puVar31 = pSVar34->offset_0x0;
            puVar33 = (undefined4 *)puVar31[1];
            *(undefined1 *)(unaff_EBP - 4) = 0xe;
            *(undefined4 **)(unaff_EBP - 0x410) = puVar31;
            iVar39 = FUN_0052dfb0(puVar31,puVar33,(undefined4 *)(unaff_EBP - 0x678));
            iVar18 = (pSVar20->SequentialBehavior_data).offset_0x4;
            if (iVar18 == 0x15555554) goto LAB_005133a4;
            iVar17 = *(int *)(unaff_EBP - 0x410);
            (pSVar20->SequentialBehavior_data).offset_0x4 = iVar18 + 1;
            *(int *)(iVar17 + 4) = iVar39;
            **(int **)(iVar39 + 4) = iVar39;
            pCVar25 = operator_new(0x10);
            *(CompanionBehavior **)(unaff_EBP - 0x40c) = pCVar25;
            *(undefined1 *)(unaff_EBP - 4) = 0x20;
            if (pCVar25 == (CompanionBehavior *)0x0) {
              pCVar25 = (CompanionBehavior *)0x0;
            }
            else {
              pCVar25 = cube::CompanionBehavior::CompanionBehavior(pCVar25);
            }
            (pCVar25->CompanionBehavior_data).offset_0x4 = *(undefined4 *)(iVar28 + 0x48);
            (pCVar25->CompanionBehavior_data).offset_0x8 = *(undefined4 *)(iVar28 + 0x4c);
            puVar31 = pSVar34->offset_0x0;
            *(CompanionBehavior **)(unaff_EBP - 0x680) = pCVar25;
            puVar33 = (undefined4 *)puVar31[1];
            *(undefined1 *)(unaff_EBP - 4) = 0xe;
            *(undefined4 **)(unaff_EBP - 0x410) = puVar31;
            iVar39 = FUN_0052dfb0(puVar31,puVar33,(undefined4 *)(unaff_EBP - 0x680));
            iVar18 = (pSVar20->SequentialBehavior_data).offset_0x4;
            if (iVar18 == 0x15555554) goto LAB_005133a4;
            iVar17 = *(int *)(unaff_EBP - 0x410);
            (pSVar20->SequentialBehavior_data).offset_0x4 = iVar18 + 1;
            *(int *)(iVar17 + 4) = iVar39;
            **(int **)(iVar39 + 4) = iVar39;
            pRVar24 = operator_new(8);
            *(RandomWalkBehavior **)(unaff_EBP - 0x40c) = pRVar24;
            *(undefined1 *)(unaff_EBP - 4) = 0x21;
            if (pRVar24 == (RandomWalkBehavior *)0x0) {
              pRVar24 = (RandomWalkBehavior *)0x0;
            }
            else {
              pRVar24 = cube::RandomWalkBehavior::RandomWalkBehavior(pRVar24);
            }
            *(RandomWalkBehavior **)(unaff_EBP - 0x688) = pRVar24;
            puVar31 = pSVar34->offset_0x0;
            puVar33 = (undefined4 *)puVar31[1];
            *(undefined1 *)(unaff_EBP - 4) = 0xe;
            *(undefined4 **)(unaff_EBP - 0x410) = puVar31;
            iVar39 = FUN_0052dfb0(puVar31,puVar33,(undefined4 *)(unaff_EBP - 0x688));
            iVar18 = (pSVar20->SequentialBehavior_data).offset_0x4;
            if (iVar18 == 0x15555554) goto LAB_005133a4;
            iVar17 = *(int *)(unaff_EBP - 0x410);
            (pSVar20->SequentialBehavior_data).offset_0x4 = iVar18 + 1;
            iVar18 = *(int *)(unaff_EBP - 0x458);
            *(int *)(iVar17 + 4) = iVar39;
            **(int **)(iVar39 + 4) = iVar39;
            *(undefined4 *)&pSVar19[1].Spawn_data.field_0x120 = *(undefined4 *)(unaff_EBP - 0x400);
            FUN_004f2be0((void *)(iVar18 + 0x18),(undefined4 *)(unaff_EBP - 0x690));
            iVar17 = *(int *)(unaff_EBP - 0x408) + 1;
            iVar39 = *(int *)(unaff_EBP - 0x43c);
            *(int *)(unaff_EBP - 0x408) = iVar17;
            iVar18 = *(int *)(unaff_EBP - 0x438);
          } while (iVar17 < iVar39);
        }
      }
    } while( true );
  }
  goto LAB_005120e4;
LAB_00511d00:
  do {
    uVar27 = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
    uVar32 = 0;
    uVar14 = uVar14 << 0x10;
    *(uint *)(unaff_EBP - 0x400) = uVar27;
    *(uint *)(unaff_EBP - 0x408) = uVar14;
    *(uint *)(unaff_EBP - 0x7c0) = uVar14;
    *(uint *)(unaff_EBP - 0x7bc) = uVar27;
    do {
      uVar27 = *(uint *)(unaff_EBP - 0x440);
      uVar29 = ((int)uVar32 >> 0x1f) << 0x10 | uVar32 >> 0x10;
      uVar26 = uVar32 * 0x10000;
      iVar39 = *(int *)(unaff_EBP - 0x448) + *(int *)(unaff_EBP - 0x400) +
               (uint)CARRY4(uVar15,uVar14);
      iVar18 = uVar27 + uVar26;
      *(int *)(unaff_EBP - 0x3f0) = iVar18;
      *(int *)(unaff_EBP - 0x230) = iVar18;
      uVar16 = *(undefined4 *)(unaff_EBP - 0x430);
      *(uint *)(unaff_EBP - 0x7c8) = uVar26;
      iVar18 = *(int *)(unaff_EBP - 0x444);
      *(undefined4 *)(unaff_EBP - 0x228) = uVar16;
      uVar16 = *(undefined4 *)(unaff_EBP - 0x420);
      iVar28 = iVar18 + uVar29 + (uint)CARRY4(uVar27,uVar26);
      *(uint *)(unaff_EBP - 0x238) = uVar15 + uVar14;
      *(uint *)(unaff_EBP - 0x3f8) = uVar15 + uVar14;
      iVar18 = *(int *)(unaff_EBP - 0x458);
      *(undefined4 *)(unaff_EBP - 0x224) = uVar16;
      *(int *)(unaff_EBP - 0x3ec) = iVar28;
      *(int *)(unaff_EBP - 0x22c) = iVar28;
      pvVar47 = *(void **)(unaff_EBP - 0x470);
      *(uint *)(unaff_EBP - 0x7c4) = uVar29;
      *(int *)(unaff_EBP - 0x3f4) = iVar39;
      *(int *)(unaff_EBP - 0x234) = iVar39;
      cVar13 = FUN_005287b0(pvVar47,unaff_EBP - 0x240,iVar18,'\x01');
      if (cVar13 != '\0') {
        uVar15 = *(uint *)(iVar18 + 0x10);
        puVar36 = (uint *)(iVar18 + 0xc);
        *(uint **)(unaff_EBP - 0x404) = puVar36;
        if (unaff_EBP - 0x240 < uVar15) {
          uVar14 = *puVar36;
          if (unaff_EBP - 0x240 < uVar14) goto LAB_00511f39;
          if (uVar15 == *(uint *)(iVar18 + 0x14)) {
            FUN_004ce8e0(puVar36,1);
          }
          puVar31 = *(undefined4 **)(iVar18 + 0x10);
          puVar33 = (undefined4 *)(((int)((unaff_EBP - 0x240) - uVar14) / 0x188) * 0x188 + *puVar36)
          ;
          *(undefined4 **)(unaff_EBP - 0x400) = puVar31;
          *(undefined4 **)(unaff_EBP - 0x410) = puVar31;
          *(undefined4 **)(unaff_EBP - 0x43c) = puVar31;
          *(undefined1 *)(unaff_EBP - 4) = 0x10;
          if (puVar31 != (undefined4 *)0x0) {
            *puVar31 = *puVar33;
            puVar31[2] = puVar33[2];
            puVar31[3] = puVar33[3];
            puVar31[4] = puVar33[4];
            puVar31[5] = puVar33[5];
            puVar31[6] = puVar33[6];
            puVar31[7] = puVar33[7];
            puVar31[8] = puVar33[8];
            puVar31[9] = puVar33[9];
            puVar31[10] = puVar33[10];
            puVar31[0xb] = puVar33[0xb];
            *(undefined1 *)(puVar31 + 0xc) = *(undefined1 *)(puVar33 + 0xc);
            puVar31[0xd] = puVar33[0xd];
            puVar31[0xe] = puVar33[0xe];
            puVar31[0x10] = puVar33[0x10];
            puVar31[0x11] = puVar33[0x11];
            FUN_004c82a0(puVar31 + 0x12,puVar33 + 0x12);
            puVar31[0x15] = puVar33[0x15];
            FUN_00413710(puVar31 + 0x16,(undefined1 *)(puVar33 + 0x16));
            iVar18 = *(int *)(unaff_EBP - 0x400);
            puVar31[0x5c] = puVar33[0x5c];
            puVar31[0x5d] = puVar33[0x5d];
            *(undefined4 *)(iVar18 + 0x178) = puVar33[0x5e];
            *(undefined4 *)(iVar18 + 0x17c) = puVar33[0x5f];
            *(undefined4 *)(iVar18 + 0x180) = puVar33[0x60];
            *(undefined4 *)(iVar18 + 0x184) = puVar33[0x61];
            goto LAB_0051206c;
          }
        }
        else {
LAB_00511f39:
          if (uVar15 == *(uint *)(iVar18 + 0x14)) {
            FUN_004ce8e0(puVar36,1);
          }
          puVar31 = *(undefined4 **)(iVar18 + 0x10);
          *(undefined4 **)(unaff_EBP - 0x410) = puVar31;
          *(undefined4 **)(unaff_EBP - 0x43c) = puVar31;
          *(undefined1 *)(unaff_EBP - 4) = 0x11;
          if (puVar31 != (undefined4 *)0x0) {
            *puVar31 = *(undefined4 *)(unaff_EBP - 0x240);
            puVar31[2] = *(undefined4 *)(unaff_EBP - 0x238);
            puVar31[3] = *(undefined4 *)(unaff_EBP - 0x234);
            puVar31[4] = *(undefined4 *)(unaff_EBP - 0x230);
            puVar31[5] = *(undefined4 *)(unaff_EBP - 0x22c);
            puVar31[6] = *(undefined4 *)(unaff_EBP - 0x228);
            puVar31[7] = *(undefined4 *)(unaff_EBP - 0x224);
            puVar31[8] = *(undefined4 *)(unaff_EBP - 0x220);
            puVar31[9] = *(undefined4 *)(unaff_EBP - 0x21c);
            puVar31[10] = *(undefined4 *)(unaff_EBP - 0x218);
            puVar31[0xb] = *(undefined4 *)(unaff_EBP - 0x214);
            *(undefined1 *)(puVar31 + 0xc) = *(undefined1 *)(unaff_EBP - 0x210);
            puVar31[0xd] = *(undefined4 *)(unaff_EBP - 0x20c);
            puVar31[0xe] = *(undefined4 *)(unaff_EBP - 0x208);
            puVar31[0x10] = *(undefined4 *)(unaff_EBP - 0x200);
            puVar31[0x11] = *(undefined4 *)(unaff_EBP - 0x1fc);
            FUN_004c82a0(puVar31 + 0x12,(int *)(unaff_EBP - 0x1f8));
            puVar31[0x15] = *(undefined4 *)(unaff_EBP - 0x1ec);
            FUN_00413710(puVar31 + 0x16,(undefined1 *)(unaff_EBP - 0x1e8));
            puVar31[0x5c] = *(undefined4 *)(unaff_EBP - 0xd0);
            puVar31[0x5d] = *(undefined4 *)(unaff_EBP - 0xcc);
            puVar31[0x5e] = *(undefined4 *)(unaff_EBP - 200);
            puVar31[0x5f] = *(undefined4 *)(unaff_EBP - 0xc4);
            puVar31[0x60] = *(undefined4 *)(unaff_EBP - 0xc0);
            puVar31[0x61] = *(undefined4 *)(unaff_EBP - 0xbc);
LAB_0051206c:
            puVar36 = *(uint **)(unaff_EBP - 0x404);
          }
        }
        uVar16 = *(undefined4 *)(unaff_EBP - 0x238);
        puVar36[1] = puVar36[1] + 0x188;
        *(undefined4 *)(unaff_EBP - 0x434) = uVar16;
        *(undefined4 *)(unaff_EBP - 0x448) = *(undefined4 *)(unaff_EBP - 0x234);
        *(undefined4 *)(unaff_EBP - 0x440) = *(undefined4 *)(unaff_EBP - 0x230);
        *(undefined4 *)(unaff_EBP - 0x444) = *(undefined4 *)(unaff_EBP - 0x22c);
        *(undefined4 *)(unaff_EBP - 0x430) = *(undefined4 *)(unaff_EBP - 0x228);
        *(undefined4 *)(unaff_EBP - 0x420) = *(undefined4 *)(unaff_EBP - 0x224);
        goto LAB_005120c1;
      }
      uVar14 = *(uint *)(unaff_EBP - 0x408);
      uVar15 = *(uint *)(unaff_EBP - 0x434);
      uVar32 = uVar32 + 1;
    } while ((int)uVar32 < 3);
    uVar14 = *(int *)(unaff_EBP - 0x404) + 1;
    *(uint *)(unaff_EBP - 0x404) = uVar14;
  } while ((int)uVar14 < 3);
LAB_005120c1:
  uVar44 = FUN_0054a946();
  uVar15 = 0;
  *(int *)(unaff_EBP - 0x46c) = (int)uVar44;
  *(int *)(unaff_EBP - 0x408) = (int)(uVar44 >> 0x20);
  *(undefined4 *)(unaff_EBP - 0x438) = 0;
LAB_005120e4:
  unaff_ESI = uVar15 * 0x10000 - (uint)uVar44;
  unaff_EBX = 0;
  *(uint *)(unaff_EBP - 0x410) = unaff_ESI;
  *(uint *)(unaff_EBP - 0x400) =
       ((((int)uVar15 >> 0x1f) << 0x10 | uVar15 >> 0x10) - (int)(uVar44 >> 0x20)) -
       (uint)(uVar15 * 0x10000 < (uint)uVar44);
  *(undefined4 *)(unaff_EBP - 0x404) = 0;
  goto LAB_00512110;
code_r0x00512b89:
  iVar18 = *(int *)(unaff_EBP - 0x454);
  *(undefined1 *)(unaff_EBP - 4) = 2;
  if (iVar18 != 0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x454));
    pvVar47 = *(void **)(unaff_EBP - 0x454);
LAB_00511b6a:
    operator_delete(pvVar47);
    *(undefined4 *)(unaff_EBP - 0x454) = 0;
    *(undefined4 *)(unaff_EBP - 0x450) = 0;
    *(undefined4 *)(unaff_EBP - 0x44c) = 0;
  }
  goto LAB_00513285;
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


/* StructureMarker_push_back @ 005284a0  kind=gamemisc  attributed-by=ledger  size=130 */

void __thiscall FUN_005284a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004f80d0(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_004f7400(*(void **)((int)this + 4),
                   (undefined4 *)((((int)param_1 - (int)puVar2) / 0x140) * 0x140 + *(int *)this));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x140;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004f80d0(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_004f7400(*(void **)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x140;
  return;
}


/* SpeciesGroup_push_back @ 005285c0  kind=gamemisc  attributed-by=ledger  size=213 */

void __thiscall FUN_005285c0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005560b2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)((int)this + 4);
  if ((param_1 < piVar1) && (piVar2 = *(int **)this, piVar2 <= param_1)) {
    if (piVar1 == *(int **)((int)this + 8)) {
      FUN_004f8180(this,1);
    }
    this_00 = *(void **)((int)this + 4);
    param_1 = (int *)(*(int *)this + (((int)param_1 - (int)piVar2) / 0x18) * 0x18);
    local_8 = 0;
    if (this_00 == (void *)0x0) goto LAB_0052867d;
    FUN_004daa80(this_00,param_1);
    local_8 = CONCAT31(local_8._1_3_,1);
  }
  else {
    if (piVar1 == *(int **)((int)this + 8)) {
      FUN_004f8180(this,1);
    }
    this_00 = *(void **)((int)this + 4);
    local_8 = 2;
    if (this_00 == (void *)0x0) goto LAB_0052867d;
    FUN_004daa80(this_00,param_1);
    local_8 = CONCAT31(local_8._1_3_,3);
  }
  FUN_004daa80((void *)((int)this_00 + 0xc),param_1 + 3);
LAB_0052867d:
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  ExceptionList = local_10;
  return;
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


