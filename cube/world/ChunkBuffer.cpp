// ChunkBuffer (world) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "ChunkBuffer.h"

/* cube::ChunkBuffer::deleting_destructor @ 0046d2f0  kind=game  attributed-by=rtti  size=70 */

ChunkBuffer * __thiscall cube::ChunkBuffer::deleting_destructor(ChunkBuffer *this,byte param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(this->ChunkBuffer_data).offset_0x0;
                    /* inlined destructor: cube::ChunkBuffer::~ChunkBuffer */
  this->vftablePtr = &vftable;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)(this->ChunkBuffer_data).offset_0x4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)(this->ChunkBuffer_data).offset_0x8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* cube::ChunkBuffer::~ChunkBuffer @ 0049d910  kind=game  attributed-by=rtti  size=15044 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall cube::ChunkBuffer::~ChunkBuffer(ChunkBuffer *this,undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  byte bVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  void *pvVar25;
  undefined1 auStack_954 [3];
  byte local_951;
  ChunkBuffer *local_950;
  int local_94c;
  uint *local_948;
  uint local_944;
  int local_940;
  uint *local_93c;
  undefined4 *local_938;
  uint local_934;
  uint local_930;
  uint local_92c;
  uint local_928;
  uint local_924;
  void *local_920;
  uint local_91c;
  uint local_918;
  void *local_914;
  void *local_910;
  uint local_90c;
  uint local_908;
  uint local_904;
  undefined8 local_900;
  int local_8f8;
  uint local_8f4;
  uint local_8f0;
  undefined4 *local_8ec;
  uint local_8e8;
  uint local_8e4;
  uint local_8e0;
  undefined4 *local_8dc;
  int local_8d8;
  byte *local_8d4;
  uint local_8d0;
  undefined2 local_8cc;
  undefined1 local_8ca;
  undefined8 local_8c8;
  double local_8c0;
  int local_8b8 [2];
  undefined4 *local_8b0;
  int local_8ac;
  undefined2 local_8a8;
  undefined1 local_8a6;
  int local_8a4;
  double local_8a0;
  int local_894;
  int local_890;
  undefined4 local_88c;
  int local_888;
  undefined4 local_884;
  undefined4 local_880;
  int local_87c;
  int local_878 [4];
  undefined4 *local_868;
  int local_864;
  int local_860;
  undefined1 local_859;
  double local_858;
  int local_850;
  int local_84c;
  int local_848;
  undefined1 local_841;
  int local_840;
  int local_83c;
  int local_838;
  undefined2 local_834;
  undefined1 local_832;
  undefined1 local_831;
  int local_830;
  undefined2 local_82c;
  undefined1 local_82a;
  undefined1 local_829;
  int local_828;
  int local_824;
  int local_820;
  undefined4 *local_81c;
  undefined8 local_814;
  float local_80c;
  float fStack_808;
  float local_804;
  float fStack_800;
  float local_7fc;
  undefined8 local_7f8;
  float local_7f0;
  float local_7ec;
  float fStack_7e8;
  float local_7e4;
  undefined8 local_7e0;
  float local_7d8;
  float local_7d4;
  float fStack_7d0;
  float local_7cc;
  float local_7c8;
  float fStack_7c4;
  float local_7c0;
  float local_7bc;
  float fStack_7b8;
  float local_7b4;
  float fStack_7b0;
  undefined8 local_7ac;
  float local_7a4;
  float fStack_7a0;
  float local_79c;
  float fStack_798;
  float local_794;
  float fStack_790;
  undefined8 local_78c;
  float local_784;
  int iStack_780;
  int iStack_77c;
  int iStack_778;
  int iStack_774;
  int iStack_770;
  int iStack_76c;
  undefined4 local_764;
  undefined4 local_760;
  undefined4 local_75c;
  undefined4 local_758;
  float local_754;
  float fStack_750;
  float local_74c;
  undefined4 local_748;
  undefined4 uStack_744;
  float local_740;
  undefined4 uStack_73c;
  undefined4 local_738;
  undefined4 uStack_734;
  undefined4 local_730;
  undefined4 uStack_72c;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 local_720;
  undefined4 uStack_71c;
  int iStack_718;
  int iStack_714;
  int iStack_710;
  int iStack_70c;
  int iStack_708;
  int iStack_704;
  float local_6fc;
  float fStack_6f8;
  float local_6f4;
  undefined4 uStack_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined4 local_6d8;
  int local_6d4;
  int local_6d0;
  int local_6cc;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined4 local_6b4;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  int local_6a4;
  int local_6a0;
  int local_69c;
  int local_698;
  int local_694;
  int local_690;
  undefined4 local_68c;
  undefined4 local_688;
  undefined4 local_684;
  undefined4 local_680;
  undefined4 local_67c;
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_670;
  undefined4 local_66c;
  undefined4 local_668;
  undefined4 local_664;
  undefined4 local_660;
  int local_65c;
  int local_658;
  int local_654;
  int local_650;
  int local_64c;
  int local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  int local_614;
  int local_610;
  int local_60c;
  int local_608;
  int local_604;
  int local_600;
  int local_5fc;
  int local_5f8;
  int local_5f4;
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
  int local_5c0;
  int local_5bc;
  int local_5b8;
  int local_5b4;
  int local_5b0;
  int local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  int local_590;
  int local_58c;
  int local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  int local_56c;
  int local_568;
  int local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  int local_548;
  int local_544;
  int local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  int local_524;
  int local_520;
  int local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  int local_500;
  int local_4fc;
  int local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  float fStack_4d0;
  float fStack_4cc;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  int local_4b8;
  int local_4b4;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  int local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  int local_464;
  int local_460;
  int local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  int local_440;
  int local_43c;
  int local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  int local_41c;
  int local_418;
  int local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  int local_3f8;
  int local_3f4;
  int local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  int local_3c8;
  int local_3c4;
  int local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  int local_38c;
  int local_388;
  int local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  int local_344;
  int local_340;
  int local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  int local_320;
  int local_31c;
  int local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int iStack_2f0;
  int iStack_2ec;
  int iStack_2e8;
  int iStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  undefined1 local_1f4 [12];
  undefined1 local_1e8 [12];
  undefined1 local_1dc [16];
  undefined1 local_1cc [16];
  undefined1 local_1bc [16];
  undefined1 local_1ac [16];
  undefined1 local_19c [16];
  undefined1 local_18c [16];
  undefined1 local_17c [16];
  undefined1 local_16c [16];
  undefined1 local_15c [16];
  undefined1 local_14c [16];
  undefined1 local_13c [16];
  undefined1 local_12c [16];
  undefined1 local_11c [16];
  undefined1 local_10c [16];
  undefined1 local_fc [16];
  undefined1 local_ec [16];
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006e78dc;
  local_14 = ExceptionList;
  local_1c = DAT_0076aa78 ^ (uint)auStack_954;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffff6a0;
  local_868 = param_1;
  local_830 = param_2;
  local_950 = this;
  if (((((int)param_1 < 0) || (param_2 < 0)) ||
      (local_8ec = (undefined4 *)((int)param_1 * 0x20), 0xffffff < (int)local_8ec)) ||
     (uVar18 = param_2 * 0x20, local_8e4 = uVar18, 0xffffff < (int)uVar18)) {
    __security_check_cookie(local_1c ^ (uint)auStack_954);
    return;
  }
  iVar10 = this[0x14].ChunkBuffer_data.offset_0x8;
  local_8b8[1] = ((param_2 % iVar10) * iVar10 + (int)param_1 % iVar10) * 0x268 +
                 this[0x14].ChunkBuffer_data.offset_0xc;
  ExceptionList = &local_14;
  if ((DAT_0076b0a4 & 1) == 0) {
    DAT_0076b0a4 = DAT_0076b0a4 | 1;
    DAT_0076b098 = 0;
    DAT_0076b09c = 0;
    _DAT_0076b0a0 = 0;
    _atexit(FUN_006fb430);
  }
  if ((DAT_0076b0a4 & 2) == 0) {
    DAT_0076b0a4 = DAT_0076b0a4 | 2;
    DAT_0076b0a8 = 0;
    DAT_0076b0ac = 0;
    _DAT_0076b0b0 = 0;
    _atexit(FUN_006fb330);
  }
  if ((DAT_0076b0a4 & 4) == 0) {
    DAT_0076b0a4 = DAT_0076b0a4 | 4;
    DAT_0076b0b4 = 0;
    DAT_0076b0b8 = 0;
    _DAT_0076b0bc = 0;
    _atexit(FUN_006fb3b0);
  }
  FUN_00639cf0(DAT_0076b098,DAT_0076b09c,&local_951,(int)local_900,uVar1);
  DAT_0076b09c = DAT_0076b098;
  FUN_00639cf0(DAT_0076b0a8,DAT_0076b0ac,&local_841,(int)local_900);
  DAT_0076b0ac = DAT_0076b0a8;
  FUN_00639cf0(DAT_0076b0b4,DAT_0076b0b8,&local_859,(int)local_900);
  local_948 = &this[0x14].ChunkBuffer_data.offset_0x10;
  DAT_0076b0b8 = DAT_0076b0b4;
  FUN_0059c480();
  if (*(char *)(local_8b8[1] + 0x74) == '\0') {
    uVar1 = (uint)local_8ec & 0x800000ff;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xffffff00) + 1;
    }
    if (uVar1 != 0) {
      uVar9 = uVar18 & 0x800000ff;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffff00) + 1;
      }
      if (((uVar9 != 0) && (uVar1 != 0xe0)) && (uVar9 != 0xe0)) goto LAB_0049db89;
    }
  }
  iVar10 = 4;
  if (*(char *)(local_8b8[1] + 0x74) == '\0') {
    iVar10 = 0x10;
  }
  FUN_0059a0e0((int)local_8ec - iVar10,uVar18 - iVar10,(int)local_8ec + iVar10 + 0x20,
               uVar18 + 0x20 + iVar10,0,0);
LAB_0049db89:
  puVar12 = local_8ec + 8;
  local_8e8 = 0;
  local_8e0 = 0;
  local_951 = 1;
  local_938 = local_8ec;
  local_858 = (double)CONCAT44(local_858._4_4_,1);
  local_8d4 = &DAT_0076b058;
  uVar1 = uVar18;
  local_8dc = puVar12;
  if ((int)local_8ec < (int)puVar12) {
    puVar15 = (uint *)(uVar18 + 0x20);
    puVar14 = local_8ec;
    local_93c = puVar15;
    do {
      uVar1 = uVar18;
      local_938 = puVar14;
      if ((int)uVar18 < (int)puVar15) {
        do {
          if (((-1 < (int)puVar14) && (-1 < (int)uVar1)) &&
             (((int)puVar14 < 0x1000000 && ((int)uVar1 < 0x1000000)))) {
            local_8d8 = (int)(((int)uVar1 >> 0x1f & 0xffU) + uVar1) >> 8;
            local_914 = (void *)((int)((int)puVar14 + ((int)puVar14 >> 0x1f & 0xffU)) >> 8);
            iVar10 = FUN_00434d10(local_914,local_8d8);
            puVar15 = local_93c;
            if (iVar10 != 0) {
              local_934 = uVar1 & 0x800000ff;
              if ((int)local_934 < 0) {
                local_934 = (local_934 - 1 | 0xffffff00) + 1;
              }
              local_934 = local_934 * 0x100;
              local_8f0 = (uint)puVar14 & 0x800000ff;
              if ((int)local_8f0 < 0) {
                local_8f0 = (local_8f0 - 1 | 0xffffff00) + 1;
              }
              local_8c8._0_4_ = (void *)((local_8f0 + local_934) * 0x20);
              iVar10 = *(int *)(iVar10 + 0xa8) + (int)(void *)local_8c8;
              if (iVar10 != 0) {
                iVar2 = *(int *)(iVar10 + 0x10);
                local_918 = *(int *)(iVar10 + 0x1c) + iVar2;
                if ((int)local_918 < 1) {
                  local_918 = local_858._0_4_;
                }
                iVar10 = (int)puVar14 + -1;
                local_8a0 = (double)CONCAT44(local_8a0._4_4_,iVar10);
                if (((-1 < iVar10) && (iVar10 < 0x1000000)) &&
                   (iVar10 = FUN_00434d10((int)(iVar10 + (iVar10 >> 0x1f & 0xffU)) >> 8,local_8d8),
                   iVar10 != 0)) {
                  uVar18 = (int)puVar14 - 1U & 0x800000ff;
                  if ((int)uVar18 < 0) {
                    uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                  }
                  iVar10 = (uVar18 + local_934) * 0x20 + *(int *)(iVar10 + 0xa8);
                  if ((iVar10 != 0) && (iVar10 = *(int *)(iVar10 + 0x10), iVar10 < iVar2)) {
                    iVar2 = iVar10;
                  }
                }
                iVar10 = (int)puVar14 + 1;
                local_8c0 = (double)CONCAT44(local_8c0._4_4_,iVar10);
                if (((-1 < iVar10) && (iVar10 < 0x1000000)) &&
                   (iVar10 = FUN_00434d10((int)(iVar10 + (iVar10 >> 0x1f & 0xffU)) >> 8,local_8d8),
                   iVar10 != 0)) {
                  uVar18 = (int)puVar14 + 1U & 0x800000ff;
                  if ((int)uVar18 < 0) {
                    uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                  }
                  iVar10 = (uVar18 + local_934) * 0x20 + *(int *)(iVar10 + 0xa8);
                  if ((iVar10 != 0) && (iVar10 = *(int *)(iVar10 + 0x10), iVar10 < iVar2)) {
                    iVar2 = iVar10;
                  }
                }
                iVar10 = uVar1 - 1;
                if (((-1 < iVar10) && (iVar10 < 0x1000000)) &&
                   (iVar10 = FUN_00434d10(local_914,(int)(iVar10 + (iVar10 >> 0x1f & 0xffU)) >> 8),
                   iVar10 != 0)) {
                  uVar18 = uVar1 - 1 & 0x800000ff;
                  if ((int)uVar18 < 0) {
                    uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                  }
                  iVar10 = (uVar18 * 0x100 + local_8f0) * 0x20 + *(int *)(iVar10 + 0xa8);
                  if ((iVar10 != 0) && (iVar10 = *(int *)(iVar10 + 0x10), iVar10 < iVar2)) {
                    iVar2 = iVar10;
                  }
                }
                iVar10 = uVar1 + 1;
                if (((iVar10 < 0) || (0xffffff < iVar10)) ||
                   (iVar10 = FUN_00434d10(local_914,(int)(iVar10 + (iVar10 >> 0x1f & 0xffU)) >> 8),
                   iVar10 == 0)) {
                  iVar10 = 0;
                }
                else {
                  uVar18 = uVar1 + 1 & 0x800000ff;
                  if ((int)uVar18 < 0) {
                    uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                  }
                  iVar10 = (uVar18 * 0x100 + local_8f0) * 0x20 + *(int *)(iVar10 + 0xa8);
                  if ((iVar10 != 0) && (*(int *)(iVar10 + 0x10) < iVar2)) {
                    iVar2 = *(int *)(iVar10 + 0x10);
                  }
                }
                if ((int)local_8e0 < *(int *)(iVar10 + 0x1c) + *(int *)(iVar10 + 0x10)) {
                  local_8e0 = *(int *)(iVar10 + 0x1c) + *(int *)(iVar10 + 0x10);
                }
                uVar18 = iVar2 - 1;
                puVar15 = local_93c;
                if ((int)uVar18 < (int)local_918) {
                  do {
                    iVar10 = FUN_00434d10(local_914,local_8d8);
                    if (((iVar10 == 0) ||
                        (iVar10 = *(int *)(iVar10 + 0xa8) + (int)(void *)local_8c8, iVar10 == 0)) ||
                       (iVar2 = *(int *)(iVar10 + 0x10), (int)uVar18 < iVar2)) {
                      pbVar11 = &DAT_0076b05c;
                    }
                    else if ((int)uVar18 < *(int *)(iVar10 + 0x1c) + iVar2) {
                      pbVar11 = (byte *)FUN_0042f730(uVar18 - iVar2);
                      if ((((pbVar11[3] & 0x1f) == 0) && ((int)uVar18 < 1)) &&
                         ((pbVar11[3] & 0x40) == 0)) {
                        pbVar11 = &DAT_0076b054;
                      }
                    }
                    else {
                      pbVar11 = &DAT_0076b054;
                      if (0 < (int)uVar18) {
                        pbVar11 = local_8d4;
                      }
                    }
                    bVar13 = pbVar11[3] & 0x1f;
                    if (bVar13 != 0) {
                      iVar10 = FUN_0042f7e0(local_8a0._0_4_,uVar1,uVar18,0);
                      if (((*(byte *)(iVar10 + 3) & 0x1f) != 0) &&
                         ((bVar13 == 2 || ((*(byte *)(iVar10 + 3) & 0x1f) != 2)))) {
                        iVar10 = FUN_0042f7e0(local_8c0._0_4_,uVar1,uVar18,0);
                        if (((*(byte *)(iVar10 + 3) & 0x1f) != 0) &&
                           ((bVar13 == 2 || ((*(byte *)(iVar10 + 3) & 0x1f) != 2)))) {
                          iVar10 = FUN_0042f7e0(local_938,uVar1 - 1,uVar18,0);
                          if (((*(byte *)(iVar10 + 3) & 0x1f) != 0) &&
                             ((bVar13 == 2 || ((*(byte *)(iVar10 + 3) & 0x1f) != 2)))) {
                            iVar10 = FUN_0042f7e0(local_938,uVar1 + 1,uVar18,0);
                            if (((*(byte *)(iVar10 + 3) & 0x1f) != 0) &&
                               ((bVar13 == 2 || ((*(byte *)(iVar10 + 3) & 0x1f) != 2)))) {
                              iVar10 = FUN_0042f7e0(local_938,uVar1,uVar18 - 1,0);
                              if (((*(byte *)(iVar10 + 3) & 0x1f) != 0) &&
                                 ((bVar13 == 2 || ((*(byte *)(iVar10 + 3) & 0x1f) != 2)))) {
                                iVar10 = FUN_0042f7e0(local_938,uVar1,uVar18 + 1,0);
                                if (((*(byte *)(iVar10 + 3) & 0x1f) != 0) &&
                                   ((bVar13 == 2 || ((*(byte *)(iVar10 + 3) & 0x1f) != 2))))
                                goto LAB_0049e000;
                              }
                            }
                          }
                        }
                      }
                      if ((((local_951 != 0) || ((int)uVar18 < (int)local_8e8)) &&
                          (local_8e8 = uVar18, local_951 != 0)) || ((int)local_8e0 < (int)uVar18)) {
                        local_8e0 = uVar18;
                      }
                      local_951 = 0;
                    }
LAB_0049e000:
                    uVar18 = uVar18 + 1;
                    puVar15 = local_93c;
                    puVar14 = local_938;
                  } while ((int)uVar18 < (int)local_918);
                }
              }
            }
          }
          uVar1 = uVar1 + 1;
          uVar18 = local_8e4;
          puVar12 = local_8dc;
        } while ((int)uVar1 < (int)puVar15);
      }
      puVar14 = (undefined4 *)((int)puVar14 + 1);
      uVar1 = local_8e4;
      local_938 = puVar14;
    } while ((int)puVar14 < (int)puVar12);
  }
  iVar10 = (int)(local_8e0 - local_8e8) / 0xfa + 1;
  local_8d8 = iVar10;
  FUN_00487380(iVar10);
  FUN_00487380(iVar10);
  FUN_00487380(iVar10);
  local_850 = (int)(((int)uVar1 >> 0x1f & 0xffU) + uVar1) >> 8;
  iVar2 = (int)((int)local_8ec + ((int)local_8ec >> 0x1f & 0xffU)) >> 8;
  local_900 = (double)CONCAT44(local_900._4_4_,iVar2);
  uVar3 = FUN_00434d10(iVar2,local_850);
  local_81c = local_8ec;
  local_8c0._0_4_ = uVar3;
  if ((int)local_8ec < (int)(local_8ec + 8)) {
    uVar1 = local_8e4 + 0x20;
    uVar18 = local_8e4;
    puVar12 = local_8dc;
    puVar14 = local_8ec;
    local_918 = uVar1;
    do {
      uVar9 = uVar18;
      local_944 = uVar18;
      local_81c = puVar14;
      if ((int)uVar18 < (int)uVar1) {
        do {
          if ((((-1 < (int)puVar14) && (-1 < (int)uVar9)) && ((int)puVar14 < 0x1000000)) &&
             ((int)uVar9 < 0x1000000)) {
            local_8d0 = (int)(((int)uVar9 >> 0x1f & 0xffU) + uVar9) >> 8;
            local_8f0 = (int)((int)puVar14 + ((int)puVar14 >> 0x1f & 0xffU)) >> 8;
            local_944 = uVar9;
            iVar10 = FUN_00434d10(local_8f0,local_8d0);
            uVar1 = local_918;
            if (iVar10 != 0) {
              uVar9 = uVar9 & 0x800000ff;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xffffff00) + 1;
              }
              local_914 = (void *)(uVar9 * 0x100);
              uVar18 = (uint)puVar14 & 0x800000ff;
              if ((int)uVar18 < 0) {
                uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
              }
              local_84c = (uVar18 + (int)local_914) * 0x20;
              local_864 = *(int *)(iVar10 + 0xa8) + local_84c;
              uVar9 = local_944;
              if (local_864 != 0) {
                local_930 = (int)puVar14 - (int)local_8ec;
                iVar10 = *(int *)(local_864 + 0x10);
                local_920 = (void *)(local_944 - local_8e4);
                local_8c8._0_4_ = (void *)(*(int *)(local_864 + 0x1c) + iVar10);
                if ((int)(void *)local_8c8 < 1) {
                  local_8c8._0_4_ = (void *)local_858._0_4_;
                }
                local_934 = (int)local_81c - 1;
                if (((-1 < (int)local_934) && ((int)local_934 < 0x1000000)) &&
                   (iVar2 = FUN_00434d10((int)(local_934 + ((int)local_934 >> 0x1f & 0xffU)) >> 8,
                                         local_8d0), iVar2 != 0)) {
                  uVar1 = local_934 & 0x800000ff;
                  if ((int)uVar1 < 0) {
                    uVar1 = (uVar1 - 1 | 0xffffff00) + 1;
                  }
                  iVar2 = (uVar1 + (int)local_914) * 0x20 + *(int *)(iVar2 + 0xa8);
                  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x10), iVar2 < iVar10)) {
                    iVar10 = iVar2;
                  }
                }
                local_908 = (int)local_81c + 1;
                if (((-1 < (int)local_908) && ((int)local_908 < 0x1000000)) &&
                   (iVar2 = FUN_00434d10((int)(local_908 + ((int)local_908 >> 0x1f & 0xffU)) >> 8,
                                         local_8d0), iVar2 != 0)) {
                  uVar1 = local_908 & 0x800000ff;
                  if ((int)uVar1 < 0) {
                    uVar1 = (uVar1 - 1 | 0xffffff00) + 1;
                  }
                  iVar2 = (uVar1 + (int)local_914) * 0x20 + *(int *)(iVar2 + 0xa8);
                  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x10), iVar2 < iVar10)) {
                    iVar10 = iVar2;
                  }
                }
                iVar2 = local_944 - 1;
                local_8a0 = (double)CONCAT44(local_8a0._4_4_,iVar2);
                if (((-1 < iVar2) && (iVar2 < 0x1000000)) &&
                   (iVar2 = FUN_00434d10(local_8f0,(int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8),
                   iVar2 != 0)) {
                  uVar1 = local_8a0._0_4_ & 0x800000ff;
                  if ((int)uVar1 < 0) {
                    uVar1 = (uVar1 - 1 | 0xffffff00) + 1;
                  }
                  iVar2 = (uVar1 * 0x100 + uVar18) * 0x20 + *(int *)(iVar2 + 0xa8);
                  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x10), iVar2 < iVar10)) {
                    iVar10 = iVar2;
                  }
                }
                local_910 = (void *)(local_944 + 1);
                if (((-1 < (int)local_910) && ((int)local_910 < 0x1000000)) &&
                   (iVar2 = FUN_00434d10(local_8f0,
                                         (int)((int)local_910 + ((int)local_910 >> 0x1f & 0xffU)) >>
                                         8), iVar2 != 0)) {
                  uVar1 = (uint)local_910 & 0x800000ff;
                  if ((int)uVar1 < 0) {
                    uVar1 = (uVar1 - 1 | 0xffffff00) + 1;
                  }
                  iVar2 = (uVar1 * 0x100 + uVar18) * 0x20 + *(int *)(iVar2 + 0xa8);
                  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x10), iVar2 < iVar10)) {
                    iVar10 = iVar2;
                  }
                }
                uVar18 = iVar10 + -1;
                uVar1 = local_918;
                uVar9 = local_944;
                puVar14 = local_81c;
                local_928 = uVar18;
                if ((int)uVar18 < (int)(void *)local_8c8) {
                  do {
                    iVar10 = (int)(uVar18 - local_8e8) / 0xfa;
                    local_938 = (undefined4 *)(iVar10 * 0xfa + local_8e8);
                    local_928 = uVar18;
                    iVar2 = FUN_00434d10(local_8f0,local_8d0);
                    if (((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0xa8) + local_84c, iVar2 == 0))
                       || (iVar19 = *(int *)(iVar2 + 0x10), (int)uVar18 < iVar19)) {
                      pbVar11 = &DAT_0076b05c;
                    }
                    else if ((int)uVar18 < *(int *)(iVar2 + 0x1c) + iVar19) {
                      pbVar11 = (byte *)FUN_0042f730(uVar18 - iVar19);
                      if ((((pbVar11[3] & 0x1f) == 0) && ((int)uVar18 < 1)) &&
                         ((pbVar11[3] & 0x40) == 0)) {
                        pbVar11 = &DAT_0076b054;
                      }
                    }
                    else {
                      pbVar11 = &DAT_0076b054;
                      if (0 < (int)uVar18) {
                        pbVar11 = local_8d4;
                      }
                    }
                    local_951 = pbVar11[3] & 0x1f;
                    if (local_951 != 0) {
                      local_6f4 = (float)pbVar11[2];
                      local_6fc = (float)*pbVar11;
                      fStack_6f8 = (float)pbVar11[1];
                      uStack_6f0 = 0x437f0000;
                      local_814 = CONCAT44(fStack_6f8 / 255.0,local_6fc / 255.0);
                      fVar23 = local_6f4 / 255.0;
                      _local_80c = CONCAT44(0x3f800000,fVar23);
                      if ((int)uVar18 < *(int *)(local_864 + 0x10)) {
                        local_93c = (uint *)((float)(int)(*(int *)(local_864 + 0x10) - uVar18) * 0.1
                                            );
                        if (1.0 < (float)local_93c) {
                          local_93c = (uint *)0x3f800000;
                        }
                        if (*(int *)(local_864 + 0x1c) < 1) {
                          if ((DAT_0076afcc & 2) == 0) {
                            DAT_0076afcc = DAT_0076afcc | 2;
                          }
                          local_8cc = 0xffff;
                          local_8ca = 0xff;
                          local_82c = 0xffff;
                          _DAT_0076afd0 = 0xffff;
                          local_82a = 0xff;
                          DAT_0076afd2 = 0xff;
                          local_829 = 0;
                          DAT_0076afd3 = 0;
                          puVar4 = &DAT_0076afd0;
                        }
                        else {
                          puVar4 = *(undefined1 **)(local_864 + 0x18);
                        }
                        if (((puVar4[3] & 0x1f) == 0) || ((puVar4[3] & 0x1f) == 2)) {
                          puVar5 = (undefined8 *)
                                   FUN_005f9620(local_1e8,local_81c,local_944,uVar18,local_8c0._0_4_
                                               );
                          local_7e0._0_4_ = (float)*puVar5;
                          local_7e0._4_4_ = (float)((ulonglong)*puVar5 >> 0x20);
                          local_7e0 = CONCAT44(local_7e0._4_4_ / 255.0,(float)local_7e0 / 255.0);
                          fVar23 = *(float *)(puVar5 + 1) / 255.0;
                          local_814 = local_7e0;
                          local_7d8 = fVar23;
                        }
                        else {
                          if (*(int *)(local_864 + 0x1c) < 1) {
                            if ((DAT_0076afcc & 2) == 0) {
                              DAT_0076afcc = DAT_0076afcc | 2;
                            }
                            local_8a8 = 0xffff;
                            local_8a6 = 0xff;
                            local_832 = 0xff;
                            DAT_0076afd2 = 0xff;
                            local_834 = 0xffff;
                            local_831 = 0;
                            _DAT_0076afd0 = 0xffff;
                            DAT_0076afd3 = 0;
                            pbVar11 = &DAT_0076afd0;
                          }
                          else {
                            pbVar11 = *(byte **)(local_864 + 0x18);
                          }
                          local_754 = (float)*pbVar11;
                          fVar23 = 1.0 - (float)local_93c;
                          fStack_750 = (float)pbVar11[1];
                          local_74c = (float)pbVar11[2];
                          _local_7c8 = CONCAT44(fStack_750 * fVar23,local_754 * fVar23);
                          local_7c0 = local_74c * fVar23;
                          _local_804 = CONCAT44((fStack_750 * fVar23) / 255.0,
                                                (local_754 * fVar23) / 255.0);
                          local_7fc = local_7c0 / 255.0;
                          puVar5 = (undefined8 *)
                                   FUN_005f9620(local_1f4,local_81c,local_944,uVar18,local_8c0._0_4_
                                               );
                          local_7ec = (float)*puVar5;
                          local_7ec = local_7ec * (float)local_93c;
                          fStack_7e8 = (float)((ulonglong)*puVar5 >> 0x20);
                          fStack_7e8 = fStack_7e8 * (float)local_93c;
                          local_7e4 = *(float *)(puVar5 + 1) * (float)local_93c;
                          fVar23 = local_7ec / 255.0;
                          fVar20 = fStack_7e8 / 255.0;
                          _local_7d4 = CONCAT44(fVar20,fVar23);
                          local_7cc = local_7e4 / 255.0;
                          local_7f8 = CONCAT44(fVar20 + fStack_800,fVar23 + local_804);
                          fVar23 = local_7cc + local_7fc;
                          local_814 = local_7f8;
                          local_7f0 = fVar23;
                        }
                        local_78c._0_4_ = (undefined4)local_814;
                        local_748 = (undefined4)local_78c;
                        local_78c._4_4_ = (undefined4)((ulonglong)local_814 >> 0x20);
                        uStack_744 = local_78c._4_4_;
                        uStack_73c = 0x3f800000;
                        _local_80c = CONCAT44(0x3f800000,fVar23);
                        local_78c = local_814;
                        local_784 = fVar23;
                        local_740 = fVar23;
                      }
                      iVar2 = DAT_0076b0a8;
                      if (local_951 == 2) {
                        local_738 = 0x3e99999a;
                        uStack_734 = 0x3ecccccd;
                        local_730 = 0x3f800000;
                        uStack_72c = 0x3f800000;
                        local_728 = 0x3dcccccd;
                        uStack_724 = 0x3e4ccccd;
                        fVar22 = 1.0 - fVar23;
                        local_720 = 0x3f800000;
                        uStack_71c = 0x3f800000;
                        _local_7bc = CONCAT44(fVar22 * 0.2,fVar22 * 0.1);
                        _local_7b4 = CONCAT44(fVar22 * 1.0,fVar22 * 1.0);
                        _local_79c = CONCAT44(fVar23 * 0.4,fVar23 * 0.3);
                        _local_794 = CONCAT44(fVar23 * 1.0,fVar23 * 1.0);
                        local_7ac = CONCAT44(fVar22 * 0.2 + fVar23 * 0.4,fVar22 * 0.1 + fVar23 * 0.3
                                            );
                        fVar20 = fVar22 * 1.0 + fVar23 * 1.0;
                        fVar23 = fVar22 * 1.0 + fVar23 * 1.0;
                        _local_7a4 = CONCAT44(fVar23,fVar20);
                        local_814 = local_7ac;
                        _local_80c = CONCAT44(fVar23,fVar20);
                        iVar2 = DAT_0076b0b4;
                      }
                      iVar10 = iVar10 * 0xc;
                      puVar15 = (uint *)(iVar2 + iVar10);
                      local_94c = iVar10;
                      local_93c = puVar15;
                      if ((((int)local_934 < 0) || (0xffffff < (int)local_934)) ||
                         (iVar2 = FUN_00434d10((int)(local_934 + ((int)local_934 >> 0x1f & 0xffU))
                                               >> 8,local_8d0), iVar2 == 0)) {
LAB_0049ec8b:
                        pbVar11 = &DAT_0076b05c;
                      }
                      else {
                        uVar1 = local_934 & 0x800000ff;
                        if ((int)uVar1 < 0) {
                          uVar1 = (uVar1 - 1 | 0xffffff00) + 1;
                        }
                        iVar2 = (uVar1 + (int)local_914) * 0x20 + *(int *)(iVar2 + 0xa8);
                        if ((iVar2 == 0) || (iVar19 = *(int *)(iVar2 + 0x10), (int)uVar18 < iVar19))
                        goto LAB_0049ec8b;
                        if ((int)uVar18 < *(int *)(iVar2 + 0x1c) + iVar19) {
                          pbVar11 = (byte *)FUN_0042f730(uVar18 - iVar19);
                          if ((((pbVar11[3] & 0x1f) == 0) && ((int)uVar18 < 1)) &&
                             ((pbVar11[3] & 0x40) == 0)) {
                            pbVar11 = &DAT_0076b054;
                          }
                        }
                        else {
                          pbVar11 = &DAT_0076b054;
                          if (0 < (int)uVar18) {
                            pbVar11 = local_8d4;
                          }
                        }
                      }
                      if (((pbVar11[3] & 0x1f) == 0) ||
                         ((iVar2 = local_94c, local_951 != 2 && ((pbVar11[3] & 0x1f) == 2)))) {
                        piVar16 = (int *)puVar15[1];
                        local_8f8 = *(int *)(iVar10 + 4 + DAT_0076b098) -
                                    *(int *)(iVar10 + DAT_0076b098) >> 3;
                        local_860 = local_8f8;
                        if ((&local_860 < piVar16) && ((int *)*puVar15 <= &local_860)) {
                          local_940 = (int)((int)&local_860 - *puVar15) >> 2;
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                            *(undefined4 *)puVar15[1] = *(undefined4 *)(*puVar15 + local_940 * 4);
                            uVar18 = local_928;
                          }
                        }
                        else {
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((int *)puVar15[1] != (int *)0x0) {
                            *(int *)puVar15[1] = local_8f8;
                          }
                        }
                        puVar15[1] = puVar15[1] + 4;
                        piVar16 = (int *)puVar15[1];
                        local_848 = local_8f8 + 1;
                        if ((&local_848 < piVar16) && ((int *)*puVar15 <= &local_848)) {
                          local_940 = (int)((int)&local_848 - *puVar15) >> 2;
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                            *(undefined4 *)puVar15[1] = *(undefined4 *)(*puVar15 + local_940 * 4);
                          }
                        }
                        else {
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((int *)puVar15[1] != (int *)0x0) {
                            *(int *)puVar15[1] = local_8f8 + 1;
                          }
                        }
                        puVar15[1] = puVar15[1] + 4;
                        piVar16 = (int *)puVar15[1];
                        local_8b8[0] = local_8f8 + 2;
                        if ((local_8b8 < piVar16) && ((int *)*puVar15 <= local_8b8)) {
                          local_940 = (int)((int)local_8b8 - *puVar15) >> 2;
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                            *(undefined4 *)puVar15[1] = *(undefined4 *)(*puVar15 + local_940 * 4);
                            uVar18 = local_928;
                          }
                        }
                        else {
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((int *)puVar15[1] != (int *)0x0) {
                            *(int *)puVar15[1] = local_8f8 + 2;
                          }
                        }
                        puVar15[1] = puVar15[1] + 4;
                        piVar16 = (int *)puVar15[1];
                        local_840 = local_8f8;
                        if ((&local_840 < piVar16) && ((int *)*puVar15 <= &local_840)) {
                          local_940 = (int)((int)&local_840 - *puVar15) >> 2;
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                            *(undefined4 *)puVar15[1] = *(undefined4 *)(*puVar15 + local_940 * 4);
                          }
                        }
                        else {
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((int *)puVar15[1] != (int *)0x0) {
                            *(int *)puVar15[1] = local_8f8;
                          }
                        }
                        puVar15[1] = puVar15[1] + 4;
                        piVar16 = (int *)puVar15[1];
                        local_838 = local_8b8[0];
                        if ((&local_838 < piVar16) && ((int *)*puVar15 <= &local_838)) {
                          local_940 = (int)&local_838 - (int)*puVar15 >> 2;
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                            *(undefined4 *)puVar15[1] = *(undefined4 *)(*puVar15 + local_940 * 4);
                          }
                        }
                        else {
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((int *)puVar15[1] != (int *)0x0) {
                            *(int *)puVar15[1] = local_8b8[0];
                          }
                        }
                        puVar15[1] = puVar15[1] + 4;
                        piVar16 = (int *)puVar15[1];
                        local_8a4 = local_8f8 + 3;
                        if ((&local_8a4 < piVar16) && ((int *)*puVar15 <= &local_8a4)) {
                          local_940 = (int)&local_8a4 - (int)*puVar15 >> 2;
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                            *(undefined4 *)puVar15[1] = *(undefined4 *)(*puVar15 + local_940 * 4);
                          }
                        }
                        else {
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((int *)puVar15[1] != (int *)0x0) {
                            *(int *)puVar15[1] = local_8a4;
                          }
                        }
                        puVar15[1] = puVar15[1] + 4;
                        local_6a4 = local_930;
                        local_6a0 = (int)local_920;
                        iVar10 = uVar18 - (int)local_938;
                        local_6bc = 0xffffffff;
                        local_6b8 = 0;
                        local_6b4 = 0;
                        local_4dc = 0xffffffff;
                        local_4d8 = 0;
                        local_4d4 = 0;
                        local_940 = iVar10;
                        local_69c = iVar10;
                        uVar3 = FUN_004c1510(local_4c,local_81c,local_944,uVar18,&local_814,
                                             &local_6bc,0);
                        uVar3 = FUN_00466650(&local_6a4,&local_4dc,uVar3);
                        FUN_00486830(uVar3);
                        local_4b8 = local_930;
                        local_4b4 = (int)local_920;
                        local_3e0 = 0xffffffff;
                        local_3dc = 0;
                        local_3d8 = 0;
                        local_68c = 0xffffffff;
                        local_688 = 0;
                        local_684 = 0;
                        local_4b0 = iVar10 + 1;
                        uVar3 = FUN_004c1510(local_6c,local_81c,local_944,uVar18 + 1,&local_814,
                                             &local_3e0,0);
                        uVar3 = FUN_00466650(&local_4b8,&local_68c,uVar3);
                        FUN_00486830(uVar3);
                        iVar2 = local_94c;
                        local_674 = 0xffffffff;
                        local_670 = 0;
                        local_66c = 0;
                        local_368 = 0xffffffff;
                        local_364 = 0;
                        local_360 = 0;
                        local_65c = local_930;
                        iVar19 = (int)local_920 + 1;
                        local_658 = iVar19;
                        local_654 = iVar10 + 1;
                        uVar3 = FUN_004c1510(local_1dc,local_81c,local_910,local_928 + 1,&local_814,
                                             &local_674,0);
                        uVar3 = FUN_00466650(&local_65c,&local_368,uVar3);
                        FUN_00486830(uVar3);
                        uVar18 = local_928;
                        local_3c8 = local_930;
                        local_3c0 = local_940;
                        local_4a0 = 0xffffffff;
                        local_49c = 0;
                        local_498 = 0;
                        local_644 = 0xffffffff;
                        local_640 = 0;
                        local_63c = 0;
                        local_3c4 = iVar19;
                        uVar3 = FUN_004c1510(local_2c,local_81c,local_910,local_928,&local_814,
                                             &local_4a0,0);
                        uVar3 = FUN_00466650(&local_3c8,&local_644,uVar3);
                        FUN_00486830(uVar3);
                      }
                      uVar1 = local_908;
                      if ((((int)local_908 < 0) || (0xffffff < (int)local_908)) ||
                         (iVar10 = FUN_00434d10((int)(local_908 + ((int)local_908 >> 0x1f & 0xffU))
                                                >> 8,local_8d0), iVar10 == 0)) {
LAB_0049f2fd:
                        pbVar11 = &DAT_0076b05c;
                      }
                      else {
                        uVar1 = uVar1 & 0x800000ff;
                        if ((int)uVar1 < 0) {
                          uVar1 = (uVar1 - 1 | 0xffffff00) + 1;
                        }
                        iVar10 = (uVar1 + (int)local_914) * 0x20 + *(int *)(iVar10 + 0xa8);
                        if ((iVar10 == 0) ||
                           (iVar19 = *(int *)(iVar10 + 0x10), (int)uVar18 < iVar19))
                        goto LAB_0049f2fd;
                        if ((int)uVar18 < *(int *)(iVar10 + 0x1c) + iVar19) {
                          pbVar11 = (byte *)FUN_0042f730(uVar18 - iVar19);
                          if ((((pbVar11[3] & 0x1f) == 0) && ((int)uVar18 < 1)) &&
                             ((pbVar11[3] & 0x40) == 0)) {
                            pbVar11 = &DAT_0076b054;
                          }
                        }
                        else {
                          pbVar11 = &DAT_0076b054;
                          if (0 < (int)uVar18) {
                            pbVar11 = local_8d4;
                          }
                        }
                      }
                      puVar15 = local_93c;
                      if (((pbVar11[3] & 0x1f) == 0) ||
                         ((local_951 != 2 && ((pbVar11[3] & 0x1f) == 2)))) {
                        iVar10 = *(int *)(iVar2 + 4 + DAT_0076b098) - *(int *)(iVar2 + DAT_0076b098)
                                 >> 3;
                        piVar16 = (int *)local_93c[1];
                        local_878[0] = iVar10;
                        if (local_878 < piVar16) {
                          piVar17 = (int *)*local_93c;
                          if (local_878 < piVar17) goto LAB_0049f37b;
                          if (piVar16 == (int *)local_93c[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                            *(undefined4 *)puVar15[1] =
                                 *(undefined4 *)
                                  (*puVar15 + ((int)local_878 - (int)piVar17 >> 2) * 4);
                          }
                        }
                        else {
LAB_0049f37b:
                          if (piVar16 == (int *)local_93c[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((int *)puVar15[1] != (int *)0x0) {
                            *(int *)puVar15[1] = iVar10;
                          }
                        }
                        puVar15[1] = puVar15[1] + 4;
                        piVar16 = (int *)puVar15[1];
                        iVar2 = iVar10 + 1;
                        local_83c = iVar2;
                        if (&local_83c < piVar16) {
                          piVar17 = (int *)*puVar15;
                          if (&local_83c < piVar17) goto LAB_0049f3e0;
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                            *(undefined4 *)puVar15[1] =
                                 *(undefined4 *)
                                  (*puVar15 + ((int)&local_83c - (int)piVar17 >> 2) * 4);
                          }
                        }
                        else {
LAB_0049f3e0:
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((int *)puVar15[1] != (int *)0x0) {
                            *(int *)puVar15[1] = iVar2;
                          }
                        }
                        puVar15[1] = puVar15[1] + 4;
                        piVar16 = (int *)puVar15[1];
                        local_87c = iVar10 + 2;
                        if (&local_87c < piVar16) {
                          piVar17 = (int *)*puVar15;
                          if (&local_87c < piVar17) goto LAB_0049f443;
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                            *(undefined4 *)puVar15[1] =
                                 *(undefined4 *)
                                  (*puVar15 + ((int)&local_87c - (int)piVar17 >> 2) * 4);
                          }
                        }
                        else {
LAB_0049f443:
                          if (piVar16 == (int *)puVar15[2]) {
                            FUN_0063dc90(1);
                          }
                          if ((int *)puVar15[1] != (int *)0x0) {
                            *(int *)puVar15[1] = iVar10 + 2;
                          }
                        }
                        puVar15[1] = puVar15[1] + 4;
                        local_828 = iVar10;
                        FUN_0066add0(&local_828);
                        local_824 = iVar10 + 2;
                        FUN_0066add0(&local_824);
                        local_820 = iVar10 + 3;
                        FUN_0066add0(&local_820);
                        local_610 = (int)local_920;
                        iVar10 = local_928 - (int)local_938;
                        iVar2 = local_930 + 1;
                        local_62c = 1;
                        local_628 = 0;
                        local_624 = 0;
                        local_488 = 1;
                        local_484 = 0;
                        local_480 = 0;
                        local_614 = iVar2;
                        local_60c = iVar10;
                        uVar3 = FUN_004c1510(local_1bc,local_908,local_944,local_928,&local_814,
                                             &local_62c,0);
                        uVar3 = FUN_00466650(&local_614,&local_488,uVar3);
                        FUN_00486830(uVar3);
                        iVar19 = (int)local_920 + 1;
                        local_6ec = 1;
                        local_6e8 = 0;
                        local_6e4 = 0;
                        local_308 = 1;
                        local_304 = 0;
                        local_300 = 0;
                        local_5fc = iVar2;
                        local_5f8 = iVar19;
                        local_5f4 = iVar10;
                        uVar3 = FUN_004c1510(local_5c,local_908,local_910,local_928,&local_814,
                                             &local_6ec,0);
                        uVar3 = FUN_00466650(&local_5fc,&local_308,uVar3);
                        FUN_00486830(uVar3);
                        local_3b0 = local_930 + 1;
                        iVar2 = local_928 + 1;
                        local_470 = 1;
                        local_46c = 0;
                        local_468 = 0;
                        local_5e4 = 1;
                        local_5e0 = 0;
                        local_5dc = 0;
                        local_3ac = iVar19;
                        local_3a8 = iVar10 + 1;
                        uVar3 = FUN_004c1510(local_19c,local_908,local_910,iVar2,&local_814,
                                             &local_470,0);
                        uVar3 = FUN_00466650(&local_3b0,&local_5e4,uVar3);
                        FUN_00486830(uVar3);
                        local_5b4 = local_930 + 1;
                        local_5b0 = (int)local_920;
                        local_5cc = 1;
                        local_5c8 = 0;
                        local_5c4 = 0;
                        local_458 = 1;
                        local_454 = 0;
                        local_450 = 0;
                        local_5ac = iVar10 + 1;
                        uVar3 = FUN_004c1510(local_dc,local_908,local_944,iVar2,&local_814,
                                             &local_5cc,0);
                        uVar3 = FUN_00466650(&local_5b4,&local_458,uVar3);
                        FUN_00486830(uVar3);
                        uVar18 = local_928;
                      }
                      iVar10 = FUN_0042f7e0(local_81c,local_8a0._0_4_,uVar18,0);
                      if (((*(byte *)(iVar10 + 3) & 0x1f) == 0) ||
                         ((local_951 != 2 && ((*(byte *)(iVar10 + 3) & 0x1f) == 2)))) {
                        FUN_0046eeb0(local_93c,
                                     *(int *)(local_94c + 4 + DAT_0076b098) -
                                     *(int *)(local_94c + DAT_0076b098) >> 3);
                        local_440 = local_930;
                        local_43c = (int)local_920;
                        iVar10 = uVar18 - (int)local_938;
                        local_350 = 0;
                        local_34c = 0xffffffff;
                        local_348 = 0;
                        local_59c = 0;
                        local_598 = 0xffffffff;
                        local_594 = 0;
                        local_438 = iVar10;
                        uVar3 = FUN_004c1510(local_17c,local_81c,local_944,uVar18,&local_814,
                                             &local_350,0);
                        uVar3 = FUN_00466650(&local_440,&local_59c,uVar3);
                        FUN_00486830(uVar3);
                        local_568 = (int)local_920;
                        iVar19 = local_930 + 1;
                        local_584 = 0;
                        local_580 = 0xffffffff;
                        local_57c = 0;
                        local_398 = 0;
                        local_394 = 0xffffffff;
                        local_390 = 0;
                        local_56c = iVar19;
                        local_564 = iVar10;
                        uVar3 = FUN_004c1510(local_7c,local_908,local_944,local_928,&local_814,
                                             &local_584,0);
                        uVar3 = FUN_00466650(&local_56c,&local_398,uVar3);
                        FUN_00486830(uVar3);
                        local_31c = (int)local_920;
                        iVar2 = local_928 + 1;
                        local_428 = 0;
                        local_424 = 0xffffffff;
                        local_420 = 0;
                        local_554 = 0;
                        local_550 = 0xffffffff;
                        local_54c = 0;
                        local_320 = iVar19;
                        local_318 = iVar10 + 1;
                        uVar3 = FUN_004c1510(local_15c,local_908,local_944,iVar2,&local_814,
                                             &local_428,0);
                        uVar3 = FUN_00466650(&local_320,&local_554,uVar3);
                        FUN_00486830(uVar3);
                        local_524 = local_930;
                        local_520 = (int)local_920;
                        local_53c = 0;
                        local_538 = 0xffffffff;
                        local_534 = 0;
                        local_410 = 0;
                        local_40c = 0xffffffff;
                        local_408 = 0;
                        local_51c = iVar10 + 1;
                        uVar3 = FUN_004c1510(local_bc,local_81c,local_944,iVar2,&local_814,
                                             &local_53c,0);
                        uVar3 = FUN_00466650(&local_524,&local_410,uVar3);
                        FUN_00486830(uVar3);
                        uVar18 = local_928;
                      }
                      bVar13 = local_951;
                      iVar10 = FUN_0042f7e0(local_81c,local_910,uVar18,0);
                      if (((*(byte *)(iVar10 + 3) & 0x1f) == 0) ||
                         ((iVar2 = local_94c, bVar13 != 2 && ((*(byte *)(iVar10 + 3) & 0x1f) == 2)))
                         ) {
                        FUN_0046eeb0(local_93c,
                                     *(int *)(local_94c + 4 + DAT_0076b098) -
                                     *(int *)(local_94c + DAT_0076b098) >> 3);
                        local_3f8 = local_930;
                        iVar10 = local_928 - (int)local_938;
                        iVar2 = (int)local_920 + 1;
                        local_380 = 0;
                        local_37c = 1;
                        local_378 = 0;
                        local_50c = 0;
                        local_508 = 1;
                        local_504 = 0;
                        local_940 = iVar10;
                        local_3f4 = iVar2;
                        local_3f0 = iVar10;
                        uVar3 = FUN_004c1510(local_13c,local_81c,local_910,local_928,&local_814,
                                             &local_380,0);
                        uVar3 = FUN_00466650(&local_3f8,&local_50c,uVar3);
                        FUN_00486830(uVar3);
                        local_6d4 = local_930;
                        local_4f4 = 0;
                        local_4f0 = 1;
                        local_4ec = 0;
                        local_338 = 0;
                        local_334 = 1;
                        local_330 = 0;
                        local_6d0 = iVar2;
                        local_6cc = iVar10 + 1;
                        uVar3 = FUN_004c1510(local_3c,local_81c,local_910,local_928 + 1,&local_814,
                                             &local_4f4,0);
                        uVar3 = FUN_00466650(&local_6d4,&local_338,uVar3);
                        FUN_00486830(uVar3);
                        iVar2 = local_94c;
                        local_694 = (int)local_920 + 1;
                        iVar19 = local_930 + 1;
                        local_6c8 = 0;
                        local_6c4 = 1;
                        local_6c0 = 0;
                        local_6b0 = 0;
                        local_6ac = 1;
                        local_6a8 = 0;
                        local_698 = iVar19;
                        local_690 = iVar10 + 1;
                        uVar3 = FUN_004c1510(local_11c,local_908,local_910,local_928 + 1,&local_814,
                                             &local_6c8,0);
                        uVar3 = FUN_00466650(&local_698,&local_6b0,uVar3);
                        FUN_00486830(uVar3);
                        uVar18 = local_928;
                        local_64c = (int)local_920 + 1;
                        local_648 = local_940;
                        local_680 = 0;
                        local_67c = 1;
                        local_678 = 0;
                        local_668 = 0;
                        local_664 = 1;
                        local_660 = 0;
                        local_650 = iVar19;
                        uVar3 = FUN_004c1510(local_9c,local_908,local_910,local_928,&local_814,
                                             &local_680,0);
                        uVar3 = FUN_00466650(&local_650,&local_668,uVar3);
                        FUN_00486830(uVar3);
                      }
                      iVar10 = FUN_0042f7e0(local_81c,local_944,uVar18 + -1,0);
                      if (((*(byte *)(iVar10 + 3) & 0x1f) == 0) ||
                         ((local_951 != 2 && ((*(byte *)(iVar10 + 3) & 0x1f) == 2)))) {
                        FUN_0046eeb0(local_93c,
                                     *(int *)(iVar2 + 4 + DAT_0076b098) -
                                     *(int *)(iVar2 + DAT_0076b098) >> 3);
                        iVar10 = uVar18 - (int)local_938;
                        local_608 = local_930;
                        local_604 = (int)local_920;
                        local_638 = 0;
                        local_634 = 0;
                        local_630 = 0xffffffff;
                        local_620 = 0;
                        local_61c = 0;
                        local_618 = 0xffffffff;
                        local_940 = iVar10;
                        local_600 = iVar10;
                        uVar3 = FUN_004c1510(local_fc,local_81c,local_944,local_928,&local_814,
                                             &local_638,0);
                        uVar3 = FUN_00466650(&local_608,&local_620,uVar3);
                        FUN_00486830(uVar3);
                        local_5c0 = local_930;
                        iVar2 = (int)local_920 + 1;
                        local_5f0 = 0;
                        local_5ec = 0;
                        local_5e8 = 0xffffffff;
                        local_5d8 = 0;
                        local_5d4 = 0;
                        local_5d0 = 0xffffffff;
                        local_5bc = iVar2;
                        local_5b8 = iVar10;
                        uVar3 = FUN_004c1510(local_1cc,local_81c,local_910,local_928,&local_814,
                                             &local_5f0,0);
                        uVar3 = FUN_00466650(&local_5c0,&local_5d8,uVar3);
                        FUN_00486830(uVar3);
                        iVar10 = local_940;
                        iVar19 = local_930 + 1;
                        local_5a8 = 0;
                        local_5a4 = 0;
                        local_5a0 = 0xffffffff;
                        local_6e0 = 0;
                        local_6dc = 0;
                        local_6d8 = 0xffffffff;
                        local_588 = local_940;
                        local_590 = iVar19;
                        local_58c = iVar2;
                        uVar3 = FUN_004c1510(local_1ac,local_908,local_910,local_928,&local_814,
                                             &local_5a8,0);
                        uVar3 = FUN_00466650(&local_590,&local_6e0,uVar3);
                        FUN_00486830(uVar3);
                        uVar18 = local_928;
                        iVar2 = local_94c;
                        local_544 = (int)local_920;
                        local_540 = iVar10;
                        local_578 = 0;
                        local_574 = 0;
                        local_570 = 0xffffffff;
                        local_560 = 0;
                        local_55c = 0;
                        local_558 = 0xffffffff;
                        local_548 = iVar19;
                        uVar3 = FUN_004c1510(local_18c,local_908,local_944,local_928,&local_814,
                                             &local_578,0);
                        uVar3 = FUN_00466650(&local_548,&local_560,uVar3);
                        FUN_00486830(uVar3);
                      }
                      iVar10 = uVar18 + 1;
                      local_8f8 = iVar10;
                      iVar19 = FUN_0042f7e0(local_81c,local_944,iVar10,0);
                      if (((*(byte *)(iVar19 + 3) & 0x1f) == 0) ||
                         ((local_951 != 2 && ((*(byte *)(iVar19 + 3) & 0x1f) == 2)))) {
                        if ((local_951 == 3) &&
                           (iVar10 = FUN_0042f7e0(local_81c,local_944,iVar10,0),
                           (*(byte *)(iVar10 + 3) & 0x1f) == 0)) {
                          FUN_0046eeb0(DAT_0076b0b4 + iVar2,
                                       *(int *)(iVar2 + 4 + DAT_0076b098) -
                                       *(int *)(iVar2 + DAT_0076b098) >> 3);
                          local_500 = local_930;
                          local_4fc = (int)local_920;
                          iVar10 = (uVar18 - (int)local_938) + 1;
                          local_764 = 0;
                          local_760 = 0;
                          local_75c = 0x3f800000;
                          local_758 = 0x3f800000;
                          local_530 = 0;
                          local_52c = 0;
                          local_528 = 1;
                          local_518 = 0;
                          local_514 = 0;
                          local_510 = 1;
                          local_4f8 = iVar10;
                          uVar3 = FUN_004c1510(local_16c,local_81c,local_944,uVar18 + 1,&local_764,
                                               &local_530,0);
                          uVar3 = FUN_00466650(&local_500,&local_518,uVar3);
                          FUN_00486830(uVar3);
                          local_4a8 = (int)local_920;
                          iVar2 = local_930 + 1;
                          local_4e8 = 0;
                          local_4e4 = 0;
                          local_4e0 = 1;
                          local_4c4 = 0;
                          local_4c0 = 0;
                          local_4bc = 1;
                          local_4ac = iVar2;
                          local_4a4 = iVar10;
                          uVar3 = FUN_004c1510(local_14c,local_908,local_944,local_8f8,&local_764,
                                               &local_4e8,0);
                          uVar3 = FUN_00466650(&local_4ac,&local_4c4,uVar3);
                          FUN_00486830(uVar3);
                          iVar19 = (int)local_920 + 1;
                          local_494 = 0;
                          local_490 = 0;
                          local_48c = 1;
                          local_47c = 0;
                          local_478 = 0;
                          local_474 = 1;
                          local_464 = iVar2;
                          local_460 = iVar19;
                          local_45c = iVar10;
                          uVar3 = FUN_004c1510(local_12c,local_908,local_910,local_8f8,&local_764,
                                               &local_494,0);
                          uVar3 = FUN_00466650(&local_464,&local_47c,uVar3);
                          FUN_00486830(uVar3);
                          iVar2 = local_94c;
                          local_41c = local_930;
                          local_44c = 0;
                          local_448 = 0;
                          local_444 = 1;
                          local_434 = 0;
                          local_430 = 0;
                          local_42c = 1;
                          local_418 = iVar19;
                          local_414 = iVar10;
                          uVar3 = FUN_004c1510(local_10c,local_81c,local_910,local_8f8,&local_764,
                                               &local_44c,0);
                          uVar3 = FUN_00466650(&local_41c,&local_434,uVar3);
                          FUN_00486830(uVar3);
                          uVar18 = local_928;
                        }
                        FUN_0046eeb0(local_93c,
                                     *(int *)(iVar2 + 4 + DAT_0076b098) -
                                     *(int *)(iVar2 + DAT_0076b098) >> 3);
                        local_3d4 = local_930;
                        local_3d0 = (int)local_920;
                        iVar10 = (uVar18 - (int)local_938) + 1;
                        local_404 = 0;
                        local_400 = 0;
                        local_3fc = 1;
                        local_3ec = 0;
                        local_3e8 = 0;
                        local_3e4 = 1;
                        local_3cc = iVar10;
                        uVar3 = FUN_004c1510(local_ec,local_81c,local_944,uVar18 + 1,&local_814,
                                             &local_404,0);
                        uVar3 = FUN_00466650(&local_3d4,&local_3ec,uVar3);
                        FUN_00486830(uVar3);
                        local_388 = (int)local_920;
                        iVar2 = local_930 + 1;
                        local_3bc = 0;
                        local_3b8 = 0;
                        local_3b4 = 1;
                        local_3a4 = 0;
                        local_3a0 = 0;
                        local_39c = 1;
                        local_38c = iVar2;
                        local_384 = iVar10;
                        uVar3 = FUN_004c1510(local_cc,local_908,local_944,local_8f8,&local_814,
                                             &local_3bc,0);
                        uVar3 = FUN_00466650(&local_38c,&local_3a4,uVar3);
                        FUN_00486830(uVar3);
                        iVar19 = (int)local_920 + 1;
                        local_374 = 0;
                        local_370 = 0;
                        local_36c = 1;
                        local_35c = 0;
                        local_358 = 0;
                        local_354 = 1;
                        local_344 = iVar2;
                        local_340 = iVar19;
                        local_33c = iVar10;
                        uVar3 = FUN_004c1510(local_ac,local_908,local_910,local_8f8,&local_814,
                                             &local_374,0);
                        uVar3 = FUN_00466650(&local_344,&local_35c,uVar3);
                        FUN_00486830(uVar3);
                        local_2fc = local_930;
                        local_32c = 0;
                        local_328 = 0;
                        local_324 = 1;
                        local_314 = 0;
                        local_310 = 0;
                        local_30c = 1;
                        local_2f8 = iVar19;
                        local_2f4 = iVar10;
                        uVar3 = FUN_004c1510(local_8c,local_81c,local_910,local_8f8,&local_814,
                                             &local_32c,0);
                        uVar3 = FUN_00466650(&local_2fc,&local_314,uVar3);
                        FUN_00486830(uVar3);
                        uVar18 = local_928;
                      }
                    }
                    uVar18 = uVar18 + 1;
                    uVar1 = local_918;
                    uVar9 = local_944;
                    puVar14 = local_81c;
                    local_928 = uVar18;
                  } while ((int)uVar18 < (int)(void *)local_8c8);
                }
              }
            }
          }
          uVar9 = uVar9 + 1;
          uVar18 = local_8e4;
          puVar12 = local_8dc;
          local_944 = uVar9;
        } while ((int)uVar9 < (int)uVar1);
      }
      puVar14 = (undefined4 *)((int)puVar14 + 1);
      iVar10 = local_8d8;
      local_81c = puVar14;
    } while ((int)puVar14 < (int)puVar12);
  }
  FUN_00601ea0();
  local_93c = (uint *)(((int)local_8e8 >> 0x1f) << 0x10 | local_8e8 >> 0x10);
  local_908 = local_8e8 << 0x10;
  local_90c = ((int)local_8e4 >> 0x1f) << 0x10 | local_8e4 >> 0x10;
  local_910 = (void *)(local_8e4 << 0x10);
  local_858 = (double)CONCAT44(local_858._4_4_,local_90c);
  local_8f4 = ((int)local_8ec >> 0x1f) << 0x10 | (uint)local_8ec >> 0x10;
  local_8f8 = (int)local_8ec << 0x10;
  local_8a0 = (double)CONCAT44(local_8a0._4_4_,local_8f8);
  uVar1 = local_8e0 + 1;
  local_8c0 = (double)CONCAT44(local_8c0._4_4_,local_8f4);
  local_91c = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  local_920 = (void *)(uVar1 * 0x10000);
  local_930 = local_8e4 + 0x21;
  local_92c = ((int)local_930 >> 0x1f) << 0x10 | local_930 >> 0x10;
  local_930 = local_930 * 0x10000;
  uVar1 = (int)local_8ec + 0x21;
  local_924 = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  uVar1 = uVar1 * 0x10000;
  local_940 = 0;
  local_878[1] = 0;
  local_878[2] = 0;
  local_878[3] = 0;
  local_934 = uVar1;
  local_928 = uVar1;
  local_918 = local_91c;
  local_914 = local_920;
  local_904 = (uint)local_93c;
  local_8f0 = local_924;
  local_8dc = (undefined4 *)local_930;
  local_8d4 = (byte *)local_92c;
  local_8d0 = local_908;
  local_8c8._0_4_ = local_910;
  FUN_004054b0(iVar10,&local_940);
  local_c = 0;
  local_864 = 0;
  local_888 = 0;
  local_884 = 0;
  local_880 = 0;
  FUN_004054b0(iVar10,&local_864);
  local_c._0_1_ = 1;
  local_84c = 0;
  local_894 = 0;
  local_890 = 0;
  local_88c = 0;
  FUN_004054b0(iVar10,&local_84c);
  local_c._0_1_ = 2;
  if (0 < iVar10) {
    iVar2 = 0;
    iVar10 = 0;
    do {
      if (*(int *)(iVar2 + DAT_0076b098) != *(int *)(iVar2 + 4 + DAT_0076b098)) {
        piVar16 = (int *)local_950[8].ChunkBuffer_data.offset_0x10;
        (**(code **)(*piVar16 + 0x68))
                  (piVar16,*(int *)(iVar2 + 4 + DAT_0076b098) - *(int *)(iVar2 + DAT_0076b098) &
                           0xfffffff8,8,0,1,local_878[1] + iVar10 * 4,0);
        piVar16 = *(int **)(local_890 + iVar10 * 4);
        (**(code **)(*piVar16 + 0x2c))
                  (piVar16,0,
                   *(int *)(iVar2 + 4 + DAT_0076b098) - *(int *)(iVar2 + DAT_0076b098) & 0xfffffff8,
                   (int)&local_900 + 4,0);
        memcpy(local_910,*(void **)(iVar2 + DAT_0076b098),
               *(int *)(iVar2 + 4 + DAT_0076b098) - *(int *)(iVar2 + DAT_0076b098) & 0xfffffff8);
        piVar16 = *(int **)(local_8a4 + iVar10 * 4);
        (**(code **)(*piVar16 + 0x30))(piVar16);
      }
      if (*(int *)(iVar2 + DAT_0076b0a8) != *(int *)(iVar2 + 4 + DAT_0076b0a8)) {
        piVar16 = (int *)local_950[8].ChunkBuffer_data.offset_0x10;
        (**(code **)(*piVar16 + 0x6c))
                  (piVar16,*(int *)(iVar2 + 4 + DAT_0076b0a8) - *(int *)(iVar2 + DAT_0076b0a8) &
                           0xfffffffc,8,0x66,1,local_888 + iVar10 * 4,0);
        piVar16 = *(int **)(local_8a4 + iVar10 * 4);
        (**(code **)(*piVar16 + 0x2c))
                  (piVar16,0,
                   *(int *)(iVar2 + 4 + DAT_0076b0a8) - *(int *)(iVar2 + DAT_0076b0a8) & 0xfffffffc,
                   &local_900,0);
        memcpy(local_914,*(void **)(iVar2 + DAT_0076b0a8),
               *(int *)(iVar2 + 4 + DAT_0076b0a8) - *(int *)(iVar2 + DAT_0076b0a8) & 0xfffffffc);
        piVar16 = *(int **)(local_8b8[0] + iVar10 * 4);
        (**(code **)(*piVar16 + 0x30))(piVar16);
      }
      if (*(int *)(iVar2 + DAT_0076b0b4) != *(int *)(iVar2 + 4 + DAT_0076b0b4)) {
        pvVar25 = (void *)0x0;
        piVar16 = (int *)local_950[8].ChunkBuffer_data.offset_0x10;
        (**(code **)(*piVar16 + 0x6c))
                  (piVar16,*(int *)(iVar2 + 4 + DAT_0076b0b4) - *(int *)(iVar2 + DAT_0076b0b4) &
                           0xfffffffc,8,0x66,1,local_894 + iVar10 * 4);
        (**(code **)(*(int *)local_8b0[iVar10] + 0x2c))
                  ((int *)local_8b0[iVar10],0,
                   *(int *)(iVar2 + 4 + DAT_0076b0b4) - *(int *)(iVar2 + DAT_0076b0b4) & 0xfffffffc,
                   auStack_954,0);
        memcpy(pvVar25,*(void **)(iVar2 + DAT_0076b0b4),
               *(int *)(iVar2 + 4 + DAT_0076b0b4) - *(int *)(iVar2 + DAT_0076b0b4) & 0xfffffffc);
        piVar16 = *(int **)(local_8c8._4_4_ + iVar10 * 4);
        (**(code **)(*piVar16 + 0x30))(piVar16);
      }
      iVar10 = iVar10 + 1;
      iVar2 = iVar2 + 0xc;
      uVar1 = local_934;
    } while (iVar10 < local_8d8);
  }
  local_8ac = 0;
  local_8b0 = (undefined4 *)FUN_00688b20(0,0);
  local_c = CONCAT31(local_c._1_3_,3);
  FUN_0059c480();
  local_850 = FUN_00434d10((int)local_900,local_850);
  pvVar25 = (void *)local_8c8;
  if ((local_850 != 0) &&
     (piVar16 = (int *)**(int **)(local_850 + 4), piVar16 != *(int **)(local_850 + 4))) {
    do {
      local_900 = (double)*(longlong *)(piVar16 + 6);
      local_8a0 = local_900 * 0.03125;
      uVar24 = FUN_0068d946();
      uVar3 = __alldiv(uVar24,0x10000,0);
      local_8c0 = (double)*(longlong *)(piVar16 + 4);
      local_900 = (double)CONCAT44(local_900._4_4_,uVar3);
      local_858 = local_8c0 * 0.03125;
      uVar24 = FUN_0068d946();
      local_81c = (undefined4 *)__alldiv(uVar24,0x10000,0);
      if ((local_81c == local_868) && ((int)local_900 == local_830)) {
        uVar3 = __alldiv(piVar16[8],piVar16[9],0x10000,0);
        uVar6 = __alldiv(piVar16[6],piVar16[7],0x10000,0);
        uVar7 = __alldiv(piVar16[4],piVar16[5],0x10000,0);
        pbVar11 = (byte *)FUN_0042f7e0(uVar7,uVar6,uVar3,0);
        bVar13 = pbVar11[3] & 0x1f;
        if (bVar13 == 0xd) {
          bVar13 = 0xff;
        }
        else if (((pbVar11[3] & 0x1f) == 0) || (bVar13 == 2)) {
          bVar13 = *pbVar11;
          if (bVar13 < 5) {
            bVar13 = 5;
          }
        }
        else {
          bVar13 = 0;
        }
        piVar16[0xc] = (int)(float)bVar13;
        iVar10 = FUN_005c03f0(local_8b0,local_8b0[1],piVar16 + 2);
        if (local_8ac == 0x38e38e2) goto LAB_004a0f10;
        local_8ac = local_8ac + 1;
        local_8b0[1] = iVar10;
        **(int **)(iVar10 + 4) = iVar10;
      }
      piVar16 = (int *)*piVar16;
    } while (piVar16 != (int *)*(int *)(local_850 + 4));
    local_93c = (uint *)local_904;
    local_8d0 = local_908;
    local_858 = (double)CONCAT44(local_858._4_4_,local_90c);
    local_8c0 = (double)CONCAT44(local_8c0._4_4_,local_8f4);
    local_8a0 = (double)CONCAT44(local_8a0._4_4_,local_8f8);
    local_918 = local_91c;
    local_914 = local_920;
    local_8d4 = (byte *)local_92c;
    local_8dc = (undefined4 *)local_930;
    local_8f0 = local_924;
    local_934 = local_928;
    pvVar25 = local_910;
    uVar1 = local_928;
  }
  FUN_00601ea0();
  EnterCriticalSection((LPCRITICAL_SECTION)(local_8b8[1] + 0x250));
  local_8c8 = FUN_0068d946();
  iStack_780 = uVar1 + local_8a0._0_4_;
  iStack_77c = local_8f0 + local_8c0._0_4_ + (uint)CARRY4(uVar1,local_8a0._0_4_);
  iStack_778 = (int)local_8dc + (int)pvVar25;
  iStack_774 = (int)local_8d4 + local_858._0_4_ + (uint)CARRY4((uint)local_8dc,(uint)pvVar25);
  iStack_770 = (int)local_914 + local_8d0;
  iStack_76c = local_918 + (int)local_93c + (uint)CARRY4((uint)local_914,local_8d0);
  iStack_2f0 = iStack_780;
  iStack_2ec = iStack_77c;
  iStack_2e8 = iStack_778;
  iStack_2e4 = iStack_774;
  iStack_2e0 = iStack_770;
  iStack_2dc = iStack_76c;
  FUN_0042c900(local_8c8);
  *(int *)(local_8b8[1] + 0x50) = iStack_780;
  *(int *)(local_8b8[1] + 0x54) = iStack_77c;
  *(int *)(local_8b8[1] + 0x58) = iStack_778;
  *(int *)(local_8b8[1] + 0x5c) = iStack_774;
  *(int *)(local_8b8[1] + 0x60) = iStack_770;
  *(int *)(local_8b8[1] + 100) = iStack_76c;
  iStack_718 = *(uint *)(local_8b8[1] + 0x50) - local_934;
  iStack_714 = (*(int *)(local_8b8[1] + 0x54) - local_8f0) -
               (uint)(*(uint *)(local_8b8[1] + 0x50) < local_934);
  iStack_710 = *(uint *)(local_8b8[1] + 0x58) - (int)local_8dc;
  iStack_70c = (*(int *)(local_8b8[1] + 0x5c) - (int)local_8d4) -
               (uint)(*(uint *)(local_8b8[1] + 0x58) < local_8dc);
  iStack_708 = (int)*(void **)(local_8b8[1] + 0x60) - (int)local_914;
  iStack_704 = (*(int *)(local_8b8[1] + 100) - local_918) -
               (uint)(*(void **)(local_8b8[1] + 0x60) < local_914);
  fStack_4d0 = (float)CONCAT44(iStack_714,iStack_718) * 1.5258789e-05;
  fStack_4cc = (float)CONCAT44(iStack_70c,iStack_710) * 1.5258789e-05;
  local_900 = (double)CONCAT44(local_900._4_4_,(float)CONCAT44(iStack_704,iStack_708));
  fVar23 = (float)CONCAT44(iStack_704,iStack_708) * 1.5258789e-05;
  dVar21 = (double)(fStack_4cc * fStack_4cc + fStack_4d0 * fStack_4d0 + fVar23 * fVar23);
  libm_sse2_sqrt_precise();
  iVar10 = local_8b8[1];
  *(float *)(local_8b8[1] + 0x68) = (float)dVar21 * 1.5;
  *(int *)(local_8b8[1] + 0x20) = local_8f8;
  *(uint *)(local_8b8[1] + 0x24) = local_8f4;
  *(void **)(local_8b8[1] + 0x28) = local_910;
  *(uint *)(local_8b8[1] + 0x2c) = local_90c;
  *(uint *)(local_8b8[1] + 0x30) = local_908;
  *(uint *)(local_8b8[1] + 0x34) = local_904;
  *(uint *)(local_8b8[1] + 0x38) = local_928;
  *(uint *)(local_8b8[1] + 0x3c) = local_924;
  *(uint *)(local_8b8[1] + 0x40) = local_930;
  *(uint *)(local_8b8[1] + 0x44) = local_92c;
  *(void **)(local_8b8[1] + 0x48) = local_920;
  *(uint *)(local_8b8[1] + 0x4c) = local_91c;
  if ((undefined4 **)(local_8b8[1] + 0x248) != &local_8b0) {
    FUN_004570a0(*local_8b0,local_8b0);
  }
  piVar16 = (int *)(iVar10 + 0x10);
  piVar17 = (int *)**(int **)(iVar10 + 0x10);
  uVar24 = local_8c8;
  if (piVar17 != *(int **)(iVar10 + 0x10)) {
    do {
      if ((undefined4 *)piVar17[2] != (undefined4 *)0x0) {
        local_8c8 = uVar24;
        (*(code *)**(undefined4 **)piVar17[2])(1);
        uVar24 = local_8c8;
      }
      piVar17 = (int *)*piVar17;
    } while (piVar17 != (int *)*piVar16);
  }
  local_8c8._4_4_ = (int)((ulonglong)uVar24 >> 0x20);
  puVar12 = (undefined4 *)*piVar16;
  pvVar25 = (void *)*puVar12;
  *puVar12 = puVar12;
  *(int *)(*piVar16 + 4) = *piVar16;
  *(undefined4 *)(iVar10 + 0x14) = 0;
  if (pvVar25 != (void *)*piVar16) {
    local_8c8 = uVar24;
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar25);
  }
  pvVar25 = (void *)0x0;
  local_8c8._0_4_ = (void *)0x0;
  local_934 = 0;
  iVar2 = iVar10;
  if (0 < local_8d8) {
    iVar19 = 0;
    do {
      if (*(int *)(local_878[1] + local_934 * 4) != 0) {
        local_8ec = operator_new(0x20);
        if (local_8ec == (undefined4 *)0x0) {
          local_8ec = (undefined4 *)0x0;
        }
        else {
          *local_8ec = &vftable;
          local_8ec[1] = 0;
          local_8ec[2] = 0;
          local_8ec[3] = 0;
          local_8ec[7] = 0;
        }
        local_8ec[1] = *(undefined4 *)(local_878[1] + local_934 * 4);
        local_8ec[2] = *(undefined4 *)(local_888 + local_934 * 4);
        local_8ec[3] = *(undefined4 *)(local_894 + local_934 * 4);
        local_8ec[4] = *(int *)(iVar19 + 4 + DAT_0076b098) - *(int *)(iVar19 + DAT_0076b098) >> 3;
        local_8ec[5] = (uint)(*(int *)(iVar19 + 4 + DAT_0076b0a8) - *(int *)(iVar19 + DAT_0076b0a8)
                             >> 2) / 3;
        local_8ec[7] = local_8e8;
        local_8ec[6] = (uint)(*(int *)(iVar19 + 4 + DAT_0076b0b4) - *(int *)(iVar19 + DAT_0076b0b4)
                             >> 2) / 3;
        iVar2 = *piVar16;
        iVar8 = FUN_00583cb0(iVar2,*(undefined4 *)(iVar2 + 4),&local_8ec);
        if (*(int *)(iVar10 + 0x14) == 0x15555554) {
LAB_004a0f10:
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
        *(int *)(iVar2 + 4) = iVar8;
        **(int **)(iVar8 + 4) = iVar8;
        pvVar25 = (void *)((int)(void *)local_8c8 +
                          (*(int *)(iVar19 + 4 + DAT_0076b098) - *(int *)(iVar19 + DAT_0076b098) >>
                          3));
        local_8c8._0_4_ = pvVar25;
      }
      local_8e8 = local_8e8 + 0xfa;
      local_934 = local_934 + 1;
      iVar19 = iVar19 + 0xc;
      iVar2 = local_8b8[1];
    } while ((int)local_934 < local_8d8);
  }
  *(void **)(iVar2 + 0x23c) = pvVar25;
  *(undefined4 **)(iVar2 + 0x18) = local_868;
  *(int *)(iVar2 + 0x1c) = local_830;
  *(undefined1 *)(iVar2 + 0x74) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x250));
  puVar12 = (undefined4 *)*local_8b0;
  *local_8b0 = local_8b0;
  local_8b0[1] = local_8b0;
  if (puVar12 == local_8b0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_8b0);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar12);
}


