// Proven_01 (world) -- server. 16 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Proven_01.h"

/* dungeon_assembler @ 00500300  kind=game  attributed-by=ledger  size=6267 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00500300(uint param_1,undefined4 param_2,Spawn *param_3,Spawn *param_4,uint param_5,
                 char param_6)

{
  Spawn_vftable *pSVar1;
  Spawn_vftable **ppSVar2;
  undefined3 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined1 *puVar10;
  char *pcVar11;
  Spawn *pSVar12;
  undefined *puVar13;
  int iVar14;
  char *pcVar15;
  undefined3 extraout_var;
  int *piVar16;
  float *pfVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  void **ppvVar20;
  uint *puVar21;
  uint *puVar22;
  CombatBehavior *pCVar23;
  int *piVar24;
  undefined1 *puVar25;
  undefined4 *puVar26;
  Spawn *pSVar27;
  SequentialBehavior *pSVar28;
  void *pvVar29;
  int iVar30;
  uint uVar31;
  Spawn *pSVar32;
  char cVar33;
  Spawn *pSVar34;
  code *pcVar35;
  bool bVar36;
  float10 fVar37;
  float fVar38;
  double dVar39;
  undefined8 uVar40;
  ulonglong uVar41;
  byte *pbVar42;
  undefined4 uVar43;
  Spawn *pSVar44;
  ulonglong uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar49;
  uint uVar50;
  uint uVar51;
  ulonglong uVar48;
  undefined4 uVar52;
  undefined1 local_2c88 [16];
  undefined1 local_2c78 [16];
  undefined1 local_2c68 [16];
  undefined1 local_2c58 [16];
  int local_2c48 [2];
  int local_2c40 [2];
  int local_2c38 [2];
  int local_2c30 [2];
  undefined4 local_2c28;
  int local_2c24;
  undefined4 local_2c20;
  undefined4 local_2c1c;
  undefined4 local_2c18;
  undefined4 local_2c14;
  undefined4 local_2c10;
  undefined2 local_2c0c;
  undefined2 local_2c0a;
  undefined2 local_2c08;
  undefined2 local_2c06;
  undefined2 local_2c04;
  undefined2 local_2c00;
  undefined2 local_2bfe;
  undefined2 local_2bfc;
  undefined2 local_2bfa;
  int local_2bf8;
  undefined4 local_2bf4;
  undefined4 local_2bf0;
  int local_2bec;
  undefined4 local_2be8;
  undefined4 local_2be4;
  byte local_2be0;
  char local_2bdf;
  undefined1 local_2bde;
  char local_2bdc;
  char local_2bdb;
  undefined1 local_2bda;
  uint local_2bd8;
  char local_2bd1;
  Dungeon local_2bd0;
  Spawn *local_2bb4;
  undefined4 local_2bb0;
  undefined2 local_2bac;
  undefined1 local_2baa;
  char local_2ba5;
  undefined8 local_2ba4;
  char *local_2b9c;
  undefined8 local_2b98;
  undefined2 local_2b90;
  undefined1 local_2b8e;
  uint local_2b8c;
  Spawn *local_2b88;
  char local_2b81;
  int *local_2b80;
  undefined4 local_2b7c;
  Spawn *local_2b78;
  int *local_2b74;
  float local_2b70;
  char local_2b69;
  uint local_2b68;
  Spawn *local_2b64;
  Spawn *local_2b60;
  Spawn *local_2b5c;
  undefined1 *local_2b58;
  uint local_2b54;
  char *local_2b50;
  uint local_2b4c;
  Spawn *local_2b48;
  undefined2 local_2b44;
  undefined1 local_2b42;
  Spawn *local_2b40;
  Spawn *local_2b3c;
  Spawn *local_2b38;
  Spawn *local_2b34;
  Spawn *local_2b30;
  Spawn *local_2b2c;
  Spawn *local_2b28;
  Spawn *local_2b24;
  undefined4 local_2b20 [2];
  undefined1 local_2b18 [24];
  float local_2b00;
  float local_2afc;
  int local_2ae0 [2];
  undefined1 local_2ad8 [24];
  Spawn *local_2ac0;
  undefined4 local_2abc;
  int local_2aa0 [2];
  undefined1 local_2a98 [24];
  Spawn *local_2a80;
  undefined4 local_2a7c;
  int local_2a60 [2];
  undefined1 local_2a58 [24];
  Spawn *local_2a40;
  undefined4 local_2a3c;
  int local_2a20 [2];
  undefined1 local_2a18 [24];
  Spawn *local_2a00;
  undefined4 local_29fc;
  undefined1 local_29e0 [280];
  undefined1 local_28c8 [280];
  undefined1 auStack_27b0 [280];
  byte abStack_2698 [280];
  undefined1 local_2580 [392];
  undefined1 local_23f8 [392];
  undefined1 local_2270 [392];
  undefined1 local_20e8 [392];
  undefined1 local_1f60 [392];
  int local_1dd8 [16];
  int local_1d98 [16];
  int local_1d58 [16];
  int local_1d18 [16];
  void *local_1cd8 [2];
  undefined1 local_1cd0 [24];
  undefined4 local_1cb8;
  undefined1 local_1cb4 [356];
  void *local_1b50 [2];
  undefined1 local_1b48 [24];
  undefined4 local_1b30;
  undefined1 local_1b2c [356];
  void *local_19c8 [2];
  undefined1 local_19c0 [24];
  undefined4 local_19a8;
  undefined1 local_19a4 [356];
  void *local_1840 [2];
  undefined1 local_1838 [24];
  undefined4 local_1820;
  undefined1 local_181c [356];
  void *local_16b8 [2];
  undefined1 local_16b0 [24];
  uint local_1698;
  undefined1 local_1694 [16];
  int local_1684;
  undefined4 local_1530 [10];
  undefined2 local_1508 [8];
  undefined2 local_14f8;
  undefined1 local_1408 [24];
  undefined4 local_13f0 [10];
  undefined2 local_13c8 [8];
  undefined2 local_13b8;
  int local_12d4;
  undefined4 local_12d0;
  undefined1 local_12c8 [24];
  undefined2 local_12b0 [8];
  undefined2 local_12a0;
  undefined1 local_1198 [24];
  undefined1 local_1180 [24];
  undefined1 local_1168 [24];
  undefined1 local_1150 [24];
  undefined1 local_1138 [24];
  undefined1 local_1120 [24];
  undefined1 local_1108 [24];
  undefined1 local_10f0 [24];
  undefined1 local_10d8 [24];
  undefined1 local_10c0 [24];
  undefined1 local_10a8 [24];
  undefined1 local_1090 [24];
  undefined1 local_1078 [24];
  undefined1 local_1060 [24];
  undefined1 local_1048 [24];
  undefined1 local_1030 [24];
  undefined1 local_1018 [24];
  undefined1 local_1000 [24];
  undefined1 local_fe8 [24];
  undefined1 local_fd0 [24];
  undefined1 local_fb8 [24];
  undefined1 local_fa0 [24];
  undefined1 local_f88 [24];
  undefined1 local_f70 [24];
  undefined1 local_f58 [24];
  undefined1 local_f40 [24];
  undefined1 local_f28 [24];
  undefined1 local_f10 [24];
  undefined1 local_ef8 [24];
  undefined1 local_ee0 [24];
  undefined1 local_ec8 [24];
  undefined1 local_eb0 [24];
  uint local_e98 [6];
  undefined1 local_e80 [24];
  undefined1 local_e68 [24];
  undefined1 local_e50 [24];
  uint local_e38 [6];
  undefined1 local_e20 [24];
  undefined1 local_e08 [24];
  undefined1 local_df0 [24];
  undefined1 local_dd8 [24];
  undefined1 local_dc0 [24];
  undefined1 local_da8 [24];
  undefined1 local_d90 [24];
  undefined1 local_d78 [24];
  undefined1 local_d60 [24];
  undefined1 local_d48 [24];
  undefined1 local_d30 [24];
  undefined1 local_d18 [24];
  undefined1 local_d00 [24];
  undefined1 local_ce8 [24];
  undefined1 local_cd0 [24];
  undefined1 local_cb8 [24];
  undefined1 local_ca0 [24];
  undefined1 local_c88 [24];
  undefined1 local_c70 [24];
  undefined1 local_c58 [24];
  undefined1 local_c40 [24];
  undefined2 local_c28;
  int iStack_c24;
  char cStack_c1b;
  undefined2 uStack_c18;
  undefined1 local_b10 [24];
  float local_af8;
  undefined4 local_af4;
  undefined1 local_af0;
  undefined1 local_ae0 [12];
  undefined1 local_ad4 [12];
  undefined1 local_ac8 [12];
  undefined1 local_abc [12];
  undefined1 local_ab0 [12];
  undefined1 local_aa4 [12];
  undefined1 local_a98 [12];
  undefined1 local_a8c [12];
  undefined1 local_a80 [12];
  undefined1 local_a74 [12];
  undefined1 auStack_a68 [12];
  undefined1 local_a5c [12];
  undefined1 auStack_a50 [12];
  undefined1 local_a44 [12];
  undefined1 auStack_a38 [12];
  int local_a2c [3];
  undefined1 local_a20 [12];
  undefined1 auStack_a14 [12];
  undefined1 local_a08 [12];
  undefined1 auStack_9fc [12];
  undefined1 local_9f0 [12];
  undefined1 auStack_9e4 [12];
  undefined1 local_9d8 [12];
  undefined1 auStack_9cc [12];
  undefined1 local_9c0 [12];
  undefined1 local_9b4 [12];
  undefined1 local_9a8 [12];
  undefined1 local_99c [12];
  undefined1 local_990 [12];
  undefined1 local_984 [12];
  undefined1 local_978 [12];
  undefined1 local_96c [12];
  undefined1 local_960 [12];
  undefined1 local_954 [12];
  undefined1 local_948 [12];
  undefined1 auStack_93c [12];
  undefined1 local_930 [12];
  undefined1 auStack_924 [12];
  undefined1 local_918 [12];
  undefined1 auStack_90c [12];
  undefined1 local_900 [12];
  undefined1 auStack_8f4 [12];
  undefined1 local_8e8 [12];
  undefined1 auStack_8dc [12];
  undefined1 local_8d0 [12];
  undefined1 auStack_8c4 [12];
  undefined1 local_8b8 [12];
  undefined1 auStack_8ac [12];
  undefined1 local_8a0 [12];
  undefined1 auStack_894 [12];
  undefined1 local_888 [12];
  undefined1 local_87c [12];
  undefined1 local_870 [12];
  undefined1 local_864 [12];
  undefined1 local_858 [12];
  undefined1 local_84c [12];
  undefined1 local_840 [12];
  undefined1 local_834 [12];
  undefined1 local_828 [12];
  undefined1 local_81c [12];
  undefined1 local_810 [12];
  undefined1 local_804 [12];
  undefined1 local_7f8 [12];
  undefined1 local_7ec [12];
  undefined1 local_7e0 [12];
  undefined1 local_7d4 [12];
  undefined1 local_7c8 [12];
  undefined1 local_7bc [12];
  undefined1 local_7b0 [12];
  undefined1 auStack_7a4 [12];
  undefined4 local_798 [2];
  undefined1 local_790 [24];
  undefined4 local_778;
  undefined4 local_774;
  undefined1 local_76c [12];
  undefined4 local_760;
  int local_758 [6];
  int local_740 [6];
  int local_728 [6];
  int local_710 [6];
  int local_6f8 [3];
  uint local_6ec [3];
  int local_6e0;
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
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined4 local_698;
  undefined4 local_694;
  undefined4 local_690;
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
  undefined4 local_65c;
  undefined4 local_658;
  undefined4 local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
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
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  int local_47c;
  undefined4 local_478;
  undefined4 local_474;
  int local_470;
  undefined4 local_46c;
  undefined4 local_468;
  int local_464;
  undefined4 local_460;
  undefined4 local_45c;
  int local_458;
  int local_454;
  undefined4 local_450;
  int local_44c [3];
  int local_440;
  undefined4 local_43c;
  undefined4 local_438;
  int local_434;
  undefined4 local_430;
  undefined4 local_42c;
  int local_428;
  undefined4 local_424;
  undefined4 local_420;
  int local_41c;
  undefined4 local_418;
  undefined4 local_414;
  int local_410;
  undefined4 local_40c;
  undefined4 local_408;
  int local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  char local_3f8;
  char local_3f7;
  char local_3f6;
  char local_3f5;
  int local_3f4;
  int local_3f0;
  int local_3ec;
  int local_3e8;
  int local_3e4;
  int local_3e0;
  undefined1 local_3dc [8];
  undefined1 local_3d4 [4];
  int local_3d0;
  undefined4 local_3cc;
  undefined1 *local_3c8;
  undefined1 local_3c4 [8];
  int local_3bc;
  int local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined1 local_3ac [8];
  int local_3a4;
  Spawn *local_3a0;
  undefined8 local_39c;
  Spawn *local_394;
  int local_390;
  Spawn_vftable *local_38c;
  uint uStack_388;
  undefined4 local_384;
  int aiStack_380 [2];
  int local_378;
  int local_374;
  int iStack_370;
  int local_36c;
  int local_368;
  undefined8 uStack_364;
  int local_35c;
  undefined8 local_358;
  undefined1 *local_350;
  Spawn *local_34c;
  Spawn *local_348;
  undefined8 local_344;
  Spawn *local_33c;
  char local_338 [4];
  int local_334 [6];
  undefined1 local_31c;
  undefined1 local_2e4;
  undefined1 local_2c8;
  undefined1 local_290;
  undefined1 local_274;
  undefined1 local_220;
  undefined1 local_204;
  undefined2 local_1e8;
  undefined1 local_1cc;
  undefined1 local_1b0;
  undefined2 local_1ae;
  undefined2 local_178;
  undefined1 local_124;
  undefined1 local_d0;
  undefined2 local_7c;
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  int local_2c [3];
  undefined1 local_20 [12];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005558f6;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2b3c = param_3;
  local_2b68 = param_1;
  local_2b38 = param_4;
  local_2b8c = param_5;
  local_2bf8 = 0;
  local_2bf4 = 0;
  local_2bf0 = 0;
  local_2bec = 0;
  local_2be8 = 0;
  local_2be4 = 0;
  local_2bb0 = *(undefined4 *)(param_1 + 0x80);
  local_2bd8 = (uint)*(byte *)(param_1 + 0x84);
  local_8._1_3_ = 0;
  uVar3 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  switch(param_5) {
  case 1:
  case 2:
    local_2b30 = (Spawn *)0xf;
    local_8._1_3_ = uVar3;
    FUN_004f2be0(&local_2bec,&local_2b30);
    local_2b30 = (Spawn *)0x10;
    FUN_004f2be0(&local_2bec,&local_2b30);
    FUN_004f7540(aiStack_380);
    local_8._0_1_ = 5;
    local_2b30 = (Spawn *)0xf;
    FUN_004f2be0(aiStack_380,&local_2b30);
    local_2b30 = (Spawn *)0x10;
    FUN_004f2be0(aiStack_380,&local_2b30);
    local_2b30 = (Spawn *)0x60;
    FUN_004f2be0(&local_374,&local_2b30);
    FUN_005285c0(&local_2bf8,aiStack_380);
    FUN_004f77a0(aiStack_380);
    iVar30 = rand();
    if (iVar30 % 3 == 1) {
      FUN_004f7540(aiStack_380);
      local_8 = CONCAT31(local_8._1_3_,7);
      local_2b30 = (Spawn *)0x5e;
      piVar9 = aiStack_380;
    }
    else if (iVar30 % 3 == 2) {
      FUN_004f7540(aiStack_380);
      local_8 = CONCAT31(local_8._1_3_,8);
      local_2b30 = (Spawn *)0x11;
      piVar9 = aiStack_380;
    }
    else {
      FUN_004f7540(aiStack_380);
      local_8 = CONCAT31(local_8._1_3_,6);
      local_2b30 = (Spawn *)0x61;
      piVar9 = aiStack_380;
    }
    goto LAB_00500485;
  case 3:
    local_2b30 = (Spawn *)0x2;
    local_8._1_3_ = uVar3;
    FUN_004f2be0(&local_2bec,&local_2b30);
    local_2b30 = (Spawn *)0x3;
    FUN_004f2be0(&local_2bec,&local_2b30);
    FUN_004f7540(aiStack_380);
    local_8 = CONCAT31(local_8._1_3_,4);
    local_2b30 = (Spawn *)0x2;
    FUN_004f2be0(aiStack_380,&local_2b30);
    local_2b30 = (Spawn *)0x3;
    FUN_004f2be0(aiStack_380,&local_2b30);
    local_2b30 = (Spawn *)0x13;
    break;
  default:
    local_2b30 = (Spawn *)0xb;
    local_8._1_3_ = uVar3;
    FUN_004f2be0(&local_2bec,&local_2b30);
    local_2b30 = (Spawn *)0xc;
    FUN_004f2be0(&local_2bec,&local_2b30);
    local_2c24 = 0;
    local_2c20 = 0;
    local_2c1c = 0;
    local_2c18 = 0;
    local_2c14 = 0;
    local_2c10 = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    local_2b30 = (Spawn *)0x2e;
    FUN_004f2be0(&local_2c24,&local_2b30);
    local_2b30 = (Spawn *)0x13;
    FUN_004f2be0(&local_2c18,&local_2b30);
    FUN_005285c0(&local_2bf8,&local_2c24);
    piVar9 = &local_2c24;
    goto LAB_00500723;
  case 5:
    local_2b30 = (Spawn *)0x4e;
    FUN_004f2be0(&local_2bec,&local_2b30);
    local_2b30 = (Spawn *)0x4d;
    FUN_004f2be0(&local_2bec,&local_2b30);
    FUN_004f7540(aiStack_380);
    local_8 = CONCAT31(local_8._1_3_,3);
    local_2b30 = (Spawn *)0x11;
    FUN_004f2be0(aiStack_380,&local_2b30);
    local_2b30 = (Spawn *)0x51;
    FUN_004f2be0(aiStack_380,&local_2b30);
    local_2b30 = (Spawn *)0x3e;
    FUN_004f2be0(&local_374,&local_2b30);
    local_2b30 = (Spawn *)0x1e;
  }
  piVar9 = &local_374;
LAB_00500485:
  FUN_004f2be0(piVar9,&local_2b30);
  FUN_005285c0(&local_2bf8,aiStack_380);
  piVar9 = aiStack_380;
LAB_00500723:
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004f77a0(piVar9);
  local_39c = 0;
  local_394 = (Spawn *)0x0;
  iVar30 = 0x1a;
  piVar9 = local_334 + 2;
  do {
    iVar30 = iVar30 + -1;
    piVar9[-3] = 0;
    piVar9[-2] = 0;
    piVar9[-1] = 0;
    *piVar9 = 0;
    piVar9[1] = 0;
    piVar9[2] = 0;
    piVar9[3] = 0;
    piVar9 = piVar9 + 7;
  } while (-1 < iVar30);
  local_2b24 = (Spawn *)(local_338 + 4);
  local_2b5c = (Spawn *)0x3;
  local_2b40 = (Spawn *)0x3;
  local_2b34 = (Spawn *)0x3;
  while( true ) {
    while( true ) {
      do {
        iVar5 = rand();
        iVar30 = rand();
        iVar30 = iVar30 % 3 + -1;
        iVar6 = rand();
        local_374 = iVar6 % 3 + -1;
        *(ulonglong *)&(local_2b24->Spawn_data).field_0x8 = CONCAT44(iVar30,local_374);
        *(int *)&(local_2b24->Spawn_data).field_0x10 = iVar5 % 3;
        iStack_370 = iVar30;
        iVar30 = rand();
        uVar7 = rand();
        uVar7 = uVar7 & 0x80000001;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
        }
        uVar8 = rand();
        local_38c = (Spawn_vftable *)(uVar8 & 0x80000001);
        if ((int)local_38c < 0) {
          local_38c = (Spawn_vftable *)
                      (((uint)((int)&local_38c[-1].deleting_destructor + 3U) | 0xfffffffe) + 1);
        }
        local_2b24->vftablePtr = local_38c;
        *(uint *)&local_2b24->Spawn_data = uVar7;
        (local_2b24->Spawn_data).offset_0x4 = iVar30 % 3 + -1;
        local_2b24 = (Spawn *)&(local_2b24->Spawn_data).field_0x18;
        local_2b34 = (Spawn *)((int)&local_2b34[-1].Spawn_data.offset_0xf70 + 3);
        uStack_388 = uVar7;
      } while (local_2b34 != (Spawn *)0x0);
      local_2b40 = (Spawn *)((int)&local_2b40[-1].Spawn_data.offset_0xf70 + 3);
      if (local_2b40 == (Spawn *)0x0) break;
      local_2b34 = (Spawn *)0x3;
    }
    local_2b5c = (Spawn *)((int)local_2b5c + -1);
    if (local_2b5c == (Spawn *)0x0) break;
    local_2b40 = (Spawn *)0x3;
    local_2b34 = (Spawn *)0x3;
  }
  local_2b7c = 0;
  piVar9 = (int *)FUN_004f7b60((undefined4 *)0x0,(undefined4 *)0x0);
  local_8 = CONCAT31(local_8._1_3_,9);
  local_2b80 = piVar9;
  if (param_6 == '\0') {
    if ((local_2b8c != 4) && (local_2b8c != 5)) {
      if (local_2b8c == 2) {
        rand();
        local_204 = 1;
        local_178 = CONCAT11(local_178._1_1_,1);
        local_7c = CONCAT11(local_7c._1_1_,1);
        local_d0 = 1;
        local_124 = 1;
        local_274 = 1;
        uVar7 = rand();
        uVar7 = uVar7 & 0x80000001;
        local_2c8 = uVar7 == 0;
        if ((int)uVar7 < 0) {
          local_2c8 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
        }
        local_338[0] = '\x01';
        local_2e4 = 1;
        uVar7 = rand();
        uVar7 = uVar7 & 0x80000001;
        local_290 = uVar7 == 0;
        if ((int)uVar7 < 0) {
          local_290 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
        }
        local_1e8 = 0x101;
        local_524 = 1;
        local_520 = 0;
        local_51c = 2;
        local_518 = 1;
        local_514 = 2;
        local_510 = 1;
        FUN_00428590(&local_2b80,&local_524);
        local_6d4 = 1;
        local_6d0 = 2;
        local_6cc = 1;
        local_6c8 = 0;
        local_6c4 = 2;
        local_6c0 = 1;
        FUN_00428590(&local_2b80,&local_6d4);
        local_554 = 1;
        local_550 = 2;
        local_54c = 1;
        local_548 = 2;
        local_544 = 2;
        local_540 = 1;
        FUN_00428590(&local_2b80,&local_554);
        local_68c = 0;
        local_688 = 2;
        local_684 = 1;
        local_680 = 0;
        local_67c = 1;
        local_678 = 1;
        FUN_00428590(&local_2b80,&local_68c);
        local_584 = 2;
        local_580 = 2;
        local_57c = 1;
        local_578 = 2;
        local_574 = 1;
        local_570 = 1;
        FUN_00428590(&local_2b80,&local_584);
        local_6a4 = 2;
        local_6a0 = 1;
        local_69c = 1;
        local_698 = 2;
        local_694 = 0;
        local_690 = 1;
        FUN_00428590(&local_2b80,&local_6a4);
        local_5b4 = 2;
        local_5b0 = 0;
        local_5ac = 1;
        local_5a8 = 0;
        local_5a4 = 0;
        local_5a0 = 0;
        FUN_00428590(&local_2b80,&local_5b4);
        local_6bc = 0;
        local_6b8 = 0;
        local_6b4 = 0;
        local_6b0 = 0;
        local_6ac = 1;
        local_6a8 = 0;
        FUN_00428590(&local_2b80,&local_6bc);
        local_5e4 = 0;
        local_5e0 = 1;
        local_5dc = 0;
        local_5d8 = 0;
        local_5d4 = 2;
        local_5d0 = 0;
        FUN_00428590(&local_2b80,&local_5e4);
        local_65c = 0;
        local_658 = 1;
        local_654 = 0;
        local_650 = 1;
        local_64c = 1;
        local_648 = 0;
        FUN_00428590(&local_2b80,&local_65c);
      }
      else {
        iVar30 = rand();
        local_220 = 1;
        if (iVar30 % 3 == 1) {
          uVar7 = rand();
          uVar7 = uVar7 & 0x80000001;
          local_124 = uVar7 == 0;
          if ((int)uVar7 < 0) {
            local_124 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
          }
          local_1cc = 1;
          local_2c8 = 1;
          uVar7 = rand();
          uVar7 = uVar7 & 0x80000001;
          local_31c = uVar7 == 0;
          if ((int)uVar7 < 0) {
            local_31c = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
          }
          local_274 = 1;
          local_178 = CONCAT11(local_178._1_1_,1);
          local_7c = 0x101;
          uVar7 = rand();
          uVar7 = uVar7 & 0x80000001;
          local_d0 = uVar7 == 0;
          if ((int)uVar7 < 0) {
            local_d0 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
          }
          local_350 = (undefined1 *)0x1;
          local_34c = (Spawn *)0x1;
          local_348 = (Spawn *)0x1;
          local_344 = 1;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_1090,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x2;
          local_34c = (Spawn *)0x0;
          local_348 = (Spawn *)0x1;
          local_344 = 1;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_e80,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x0;
          local_34c = (Spawn *)0x1;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000001;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_1168,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x0;
          local_34c = (Spawn *)0x0;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000000;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_eb0,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x0;
          local_34c = (Spawn *)0x2;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000000;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_10c0,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x1;
          local_34c = (Spawn *)0x2;
          local_348 = (Spawn *)0x1;
          local_344 = 0x200000000;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_ee0,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x2;
          local_34c = (Spawn *)0x2;
          local_348 = (Spawn *)0x1;
          local_344 = 0x200000001;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_1108,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x2;
          local_34c = (Spawn *)0x1;
          local_348 = (Spawn *)0x1;
          local_344 = 0x200000002;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_f10,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
        }
        else if (iVar30 % 3 == 2) {
          uVar7 = rand();
          uVar7 = uVar7 & 0x80000001;
          local_124 = uVar7 == 0;
          if ((int)uVar7 < 0) {
            local_124 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
          }
          local_31c = 1;
          local_2c8 = 1;
          uVar7 = rand();
          uVar7 = uVar7 & 0x80000001;
          local_274 = uVar7 == 0;
          if ((int)uVar7 < 0) {
            local_274 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
          }
          local_1cc = 1;
          local_d0 = 1;
          uVar7 = rand();
          uVar7 = uVar7 & 0x80000001;
          bVar36 = uVar7 == 0;
          if ((int)uVar7 < 0) {
            bVar36 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
          }
          local_7c = CONCAT11(local_7c._1_1_,bVar36);
          local_178 = 0x101;
          local_350 = (undefined1 *)0x0;
          local_34c = (Spawn *)0x0;
          local_348 = (Spawn *)0x1;
          local_344 = 1;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_d90,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x2;
          local_34c = (Spawn *)0x0;
          local_348 = (Spawn *)0x1;
          local_344 = 1;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_1030,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x2;
          local_34c = (Spawn *)0x1;
          local_348 = (Spawn *)0x1;
          local_344 = 2;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_dc0,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x0;
          local_34c = (Spawn *)0x1;
          local_348 = (Spawn *)0x1;
          local_344 = 0;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_1120,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x1;
          local_34c = (Spawn *)0x1;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000000;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_df0,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x0;
          local_34c = (Spawn *)0x2;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000000;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_1060,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x1;
          local_34c = (Spawn *)0x2;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000001;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_e20,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x2;
          local_34c = (Spawn *)0x1;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000001;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_1138,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x2;
          local_34c = (Spawn *)0x2;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000002;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_e50,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
        }
        else {
          uVar7 = rand();
          uVar7 = uVar7 & 0x80000001;
          local_124 = uVar7 == 0;
          if ((int)uVar7 < 0) {
            local_124 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
          }
          local_31c = 1;
          local_2c8 = 1;
          uVar7 = rand();
          uVar7 = uVar7 & 0x80000001;
          local_274 = uVar7 == 0;
          if ((int)uVar7 < 0) {
            local_274 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
          }
          local_1cc = 1;
          uVar7 = rand();
          uVar7 = uVar7 & 0x80000001;
          bVar36 = uVar7 == 0;
          if ((int)uVar7 < 0) {
            bVar36 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
          }
          local_178 = CONCAT11(local_178._1_1_,bVar36);
          local_d0 = 1;
          local_7c = 0x101;
          local_350 = (undefined1 *)0x0;
          local_34c = (Spawn *)0x0;
          local_348 = (Spawn *)0x1;
          local_344 = 1;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_c40,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x2;
          local_34c = (Spawn *)0x0;
          local_348 = (Spawn *)0x1;
          local_344 = 1;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_da8,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x0;
          local_34c = (Spawn *)0x1;
          local_348 = (Spawn *)0x1;
          local_344 = 0;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_d00,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x1;
          local_34c = (Spawn *)0x1;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000000;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_1078,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x0;
          local_34c = (Spawn *)0x2;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000000;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_d30,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x1;
          local_34c = (Spawn *)0x2;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000001;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_1000,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x2;
          local_34c = (Spawn *)0x1;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000001;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_d60,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
          local_350 = (undefined1 *)0x2;
          local_34c = (Spawn *)0x2;
          local_348 = (Spawn *)0x1;
          local_344 = 0x100000002;
          local_33c = (Spawn *)0x1;
          puVar19 = FUN_004f7620(local_10f0,(undefined4 *)&local_344,&local_350);
          FUN_00428590(&local_2b80,puVar19);
        }
      }
      goto LAB_00501db9;
    }
    rand();
    local_1b0 = 1;
    local_1ae = 0x101;
    local_178 = CONCAT11(local_178._1_1_,1);
    local_7c = CONCAT11(local_7c._1_1_,1);
    local_d0 = 1;
    local_124 = 1;
    local_274 = 1;
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    local_2c8 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      local_2c8 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
    }
    local_338[0] = '\x01';
    local_2e4 = 1;
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    local_290 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      local_290 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
    }
    local_1e8 = 0x101;
    local_614 = 1;
    local_610 = 1;
    local_60c = 2;
    local_608 = 1;
    local_604 = 2;
    local_600 = 1;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_614);
    piVar9[1] = iVar30;
    local_2b7c = 1;
    **(int **)(iVar30 + 4) = iVar30;
    local_4ac = 1;
    local_4a8 = 2;
    local_4a4 = 1;
    local_4a0 = 0;
    local_49c = 2;
    local_498 = 1;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_4ac);
    piVar9[1] = iVar30;
    local_2b7c = 2;
    **(int **)(iVar30 + 4) = iVar30;
    local_4dc = 1;
    local_4d8 = 2;
    local_4d4 = 1;
    local_4d0 = 2;
    local_4cc = 2;
    local_4c8 = 1;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_4dc);
    piVar9[1] = iVar30;
    local_2b7c = 3;
    **(int **)(iVar30 + 4) = iVar30;
    local_50c = 0;
    local_508 = 2;
    local_504 = 1;
    local_500 = 0;
    local_4fc = 1;
    local_4f8 = 1;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_50c);
    piVar9[1] = iVar30;
    local_2b7c = 4;
    **(int **)(iVar30 + 4) = iVar30;
    local_53c = 2;
    local_538 = 2;
    local_534 = 1;
    local_530 = 2;
    local_52c = 1;
    local_528 = 1;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_53c);
    piVar9[1] = iVar30;
    local_2b7c = 5;
    **(int **)(iVar30 + 4) = iVar30;
    local_56c = 2;
    local_568 = 1;
    local_564 = 1;
    local_560 = 2;
    local_55c = 0;
    local_558 = 1;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_56c);
    piVar9[1] = iVar30;
    local_2b7c = 6;
    **(int **)(iVar30 + 4) = iVar30;
    local_59c = 2;
    local_598 = 0;
    local_594 = 1;
    local_590 = 0;
    local_58c = 0;
    local_588 = 0;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_59c);
    piVar9[1] = iVar30;
    local_2b7c = 7;
    **(int **)(iVar30 + 4) = iVar30;
    local_5cc = 0;
    local_5c8 = 0;
    local_5c4 = 0;
    local_5c0 = 0;
    local_5bc = 1;
    local_5b8 = 0;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_5cc);
    piVar9[1] = iVar30;
    local_2b7c = 8;
    **(int **)(iVar30 + 4) = iVar30;
    local_5fc = 0;
    local_5f8 = 1;
    local_5f4 = 0;
    local_5f0 = 0;
    local_5ec = 2;
    local_5e8 = 0;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_5fc);
    piVar9[1] = iVar30;
    local_2b7c = 9;
    **(int **)(iVar30 + 4) = iVar30;
    local_62c = 0;
    local_628 = 1;
    local_624 = 0;
    local_620 = 1;
    local_61c = 1;
    local_618 = 0;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_62c);
    local_2b7c = 10;
  }
  else {
    local_1cc = 1;
    local_178 = CONCAT11(local_178._1_1_,1);
    local_2c8 = 1;
    local_d0 = 1;
    local_31c = 1;
    local_124 = 1;
    local_674 = 1;
    local_670 = 1;
    local_66c = 1;
    local_668 = 1;
    local_664 = 2;
    local_660 = 1;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_674);
    piVar9[1] = iVar30;
    local_2b7c = 1;
    **(int **)(iVar30 + 4) = iVar30;
    local_4c4 = 1;
    local_4c0 = 1;
    local_4bc = 1;
    local_4b8 = 0;
    local_4b4 = 1;
    local_4b0 = 1;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_4c4);
    piVar9[1] = iVar30;
    local_2b7c = 2;
    **(int **)(iVar30 + 4) = iVar30;
    local_494 = 1;
    local_490 = 1;
    local_48c = 1;
    local_488 = 2;
    local_484 = 1;
    local_480 = 1;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_494);
    piVar9[1] = iVar30;
    local_2b7c = 3;
    **(int **)(iVar30 + 4) = iVar30;
    local_4f4 = 0;
    local_4f0 = 1;
    local_4ec = 1;
    local_4e8 = 0;
    local_4e4 = 0;
    local_4e0 = 1;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_4f4);
    piVar9[1] = iVar30;
    local_2b7c = 4;
    **(int **)(iVar30 + 4) = iVar30;
    local_644 = 2;
    local_640 = 1;
    local_63c = 1;
    local_638 = 2;
    local_634 = 0;
    local_630 = 1;
    iVar30 = FUN_004f3ba0(piVar9,(undefined4 *)piVar9[1],&local_644);
    local_2b7c = 5;
  }
  piVar9[1] = iVar30;
  **(int **)(iVar30 + 4) = iVar30;
LAB_00501db9:
  cube::Dungeon::Dungeon(&local_2bd0,0x16,0x16,0x16);
  local_8 = CONCAT31(local_8._1_3_,10);
  local_2b40 = (Spawn *)0x0;
  piVar9 = local_334 + 1;
  iVar30 = -0x40;
  do {
    local_2b24 = (Spawn *)0x0;
    do {
      local_2b34 = (Spawn *)0x0;
      do {
        if ((char)piVar9[-2] != '\0') {
          if (*(char *)((int)piVar9 + -5) != '\0') {
            local_374 = 0;
            iStack_370 = 0;
            piVar9[-0xffffffff00000001] = 0;
            piVar9[0] = 0;
            piVar9[1] = 0;
            local_368 = 0;
            uStack_364 = 0.0078125;
            iVar5 = 3;
            piVar16 = piVar9 + 2;
            do {
              *piVar16 = (int)*(float *)(iVar30 + (int)piVar16);
              iVar5 = iVar5 + -1;
              piVar16 = piVar16 + 1;
            } while (iVar5 != 0);
          }
          local_2b2c = (Spawn *)((int)&local_2b34->vftablePtr + piVar9[1] + 3);
          local_38c = (Spawn_vftable *)0x3;
          uStack_388 = 3;
          local_350 = (undefined1 *)((int)&local_2b40->vftablePtr + piVar9[-1] + 2);
          local_2b60 = (Spawn *)((int)&local_2b24->vftablePtr + *piVar9 + 2);
          local_2b30 = (Spawn *)(piVar9[4] + 1);
          local_344 = CONCAT44(piVar9[3] + 3,piVar9[2] + 3);
          local_34c = local_2b60;
          local_348 = local_2b2c;
          local_33c = local_2b30;
          if (((*(char *)((int)piVar9 + -5) == '\0') && (*(char *)((int)piVar9 + -7) == '\0')) &&
             (iVar5 = rand(), iVar5 % 3 == 0)) {
            cVar33 = '\x01';
          }
          else {
            cVar33 = '\0';
          }
          FUN_005236d0(&local_2bd0,(int *)&local_350,(int *)&local_344,cVar33);
          if (*(char *)((int)piVar9 + -7) != '\0') {
            puVar10 = FUN_004f84a0(&local_2bd0,(int)(local_350 + (int)local_344 / 2),
                                   (int)((int)&local_2b60->vftablePtr + local_344._4_4_ / 2),
                                   (int)((int)&local_2b2c->vftablePtr + (int)local_2b30 / 2));
            puVar10[1] = puVar10[1] | 4;
          }
        }
        local_2b34 = (Spawn *)&(local_2b34->Spawn_data).field_0x3;
        piVar9 = piVar9 + 7;
        iVar30 = iVar30 + -0x1c;
      } while ((int)local_2b34 < 0x15);
      local_2b24 = (Spawn *)&(local_2b24->Spawn_data).field_0x3;
    } while ((int)local_2b24 < 0x15);
    local_2b40 = (Spawn *)&(local_2b40->Spawn_data).field_0x3;
  } while ((int)local_2b40 < 0x15);
  piVar9 = (int *)*local_2b80;
  piVar16 = local_2b80;
  if (piVar9 != local_2b80) {
    do {
      iVar30 = (piVar9[2] * 3 + piVar9[3]) * 3 + piVar9[4];
      local_2b30 = (Spawn *)(iVar30 * 7);
      iVar5 = (piVar9[5] * 3 + piVar9[6]) * 3 + piVar9[7];
      if ((local_338[iVar30 * 0x1c] != '\0') && (local_338[iVar5 * 0x1c] != '\0')) {
        local_374 = 3;
        iStack_370 = 3;
        local_344 = CONCAT44(local_334[iVar5 * 7 + 4] + 3,local_334[iVar5 * 7 + 3] + 3);
        local_33c = (Spawn *)(local_334[iVar5 * 7 + 5] + 1);
        local_348 = (Spawn *)(local_334[iVar5 * 7 + 2] + 3 + piVar9[7] * 7);
        local_34c = (Spawn *)(local_334[iVar5 * 7 + 1] + 2 + piVar9[6] * 7);
        local_350 = (undefined1 *)(*(int *)(local_338 + iVar5 * 0x1c + 4) + 2 + piVar9[5] * 7);
        local_38c = (Spawn_vftable *)0x3;
        uStack_388 = 3;
        local_368 = local_334[iVar30 * 7 + 3] + 3;
        uStack_364 = (double)CONCAT44(local_334[iVar30 * 7 + 5] + 1,local_334[iVar30 * 7 + 4] + 3);
        local_35c = *(int *)(local_338 + iVar30 * 0x1c + 4) + 2 + piVar9[2] * 7;
        local_358 = (double)CONCAT44(local_334[iVar30 * 7 + 2] + 3 + piVar9[4] * 7,
                                     local_334[iVar30 * 7 + 1] + 2 + piVar9[3] * 7);
        FUN_004f9010(&local_2bd0,&local_35c,&local_368,(int *)&local_350,(int *)&local_344);
        piVar16 = local_2b80;
      }
      piVar9 = (int *)*piVar9;
    } while (piVar9 != piVar16);
  }
  iVar30 = *piVar16;
  iVar30 = (*(int *)(iVar30 + 8) * 3 + *(int *)(iVar30 + 0xc)) * 3 + *(int *)(iVar30 + 0x10);
  local_3f8 = local_338[iVar30 * 0x1c];
  local_3f7 = local_338[iVar30 * 0x1c + 1];
  local_3f6 = local_338[iVar30 * 0x1c + 2];
  local_3f5 = local_338[iVar30 * 0x1c + 3];
  local_3f4 = *(int *)(local_338 + iVar30 * 0x1c + 4);
  local_3f0 = local_334[iVar30 * 7 + 1];
  local_3ec = local_334[iVar30 * 7 + 2];
  local_3e8 = local_334[iVar30 * 7 + 3];
  local_3e4 = local_334[iVar30 * 7 + 4];
  local_3e0 = local_334[iVar30 * 7 + 5];
  iVar30 = *local_2b80;
  puVar10 = FUN_004f84a0(&local_2bd0,*(int *)(iVar30 + 8) * 7 + 2 + local_3f4,
                         *(int *)(iVar30 + 0xc) * 7 + 1 + local_3f0,
                         local_3ec + *(int *)(iVar30 + 0x10) * 7 + 3);
  pcVar35 = rand_exref;
  *puVar10 = 4;
  uVar7 = rand();
  local_2bd0.Dungeon_data.offset_0x0 = (Spawn *)(uVar7 & 0x80000003);
  if ((int)local_2bd0.Dungeon_data.offset_0x0 < 0) {
    local_2bd0.Dungeon_data.offset_0x0 =
         (Spawn *)(((uint)((int)&local_2bd0.Dungeon_data.offset_0x0[-1].Spawn_data.offset_0xf70 + 3U
                          ) | 0xfffffffc) + 1);
  }
  local_2b5c = local_2bd0.Dungeon_data.offset_0x0;
  uVar8 = rand();
  uVar7 = local_2b8c;
  uVar8 = uVar8 & 0x80000001;
  local_2bd0.Dungeon_data.offset_0x4 = uVar8 == 0;
  if ((int)uVar8 < 0) {
    local_2bd0.Dungeon_data.offset_0x4 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
  }
  local_2ba5 = local_2b8c == 3;
  iVar30 = rand();
  local_2b30 = (Spawn *)CONCAT31((int3)((uint)(iVar30 % 0x32) >> 8),(char)(iVar30 % 0x32) + '\x14');
  iVar30 = rand();
  iVar5 = rand();
  local_2bde = SUB41(local_2b30,0);
  local_2be0 = (char)(iVar5 % 0x32) + 0x14;
  local_2bdf = (char)(iVar30 % 0x32) + '\x14';
  iVar30 = rand();
  iVar30 = iVar30 % 0x32;
  local_358 = (double)CONCAT44(iVar30,(undefined4)local_358);
  if (uVar7 == 3) {
    iVar30 = rand();
    iVar30 = iVar30 % 0x32 + 100;
    local_358 = (double)CONCAT44(iVar30,(undefined4)local_358);
  }
  iVar5 = rand();
  local_2b30 = (Spawn *)CONCAT31((int3)((uint)(iVar5 % 0x32) >> 8),
                                 (char)(iVar5 % 0x32) + '2' + (char)iVar30);
  iVar30 = rand();
  cVar33 = (char)(iVar30 % 0x32) + '2' + local_358._4_1_;
  iVar30 = rand();
  local_2b42 = SUB41(local_2b30,0);
  local_2b44 = CONCAT11(cVar33,(char)(iVar30 % 0x32) + '2' + local_358._4_1_);
  iVar30 = rand();
  local_2b30 = (Spawn *)CONCAT31((int3)((uint)(iVar30 % 0x32) >> 8),
                                 (char)(iVar30 % 0x32) + '2' + local_358._4_1_);
  iVar30 = rand();
  cVar33 = (char)(iVar30 % 0x32) + '2' + local_358._4_1_;
  iVar30 = rand();
  local_2baa = SUB41(local_2b30,0);
  local_2b30 = (Spawn *)0x0;
  local_350 = (undefined1 *)0x3f19999a;
  local_34c = (Spawn *)0x3f000000;
  local_348 = (Spawn *)0x3dcccccd;
  local_2b70 = 0.005;
  local_2bac = CONCAT11(cVar33,(char)(iVar30 % 0x32) + '2' + local_358._4_1_);
  switch(uVar7) {
  case 1:
  case 2:
    local_2b30 = (Spawn *)0x1;
    local_350 = (undefined1 *)0x0;
    local_34c = (Spawn *)0x3f000000;
    local_348 = (Spawn *)0x3dcccccd;
    iVar30 = rand();
    local_2b2c = (Spawn *)CONCAT31((int3)((uint)(iVar30 % 0x32) >> 8),(char)(iVar30 % 0x32) + '2');
    iVar30 = rand();
    iVar5 = rand();
    local_2b90 = CONCAT11((char)(iVar30 % 0x32) + '2',(char)(iVar5 % 0x14) + '2');
    local_2b44 = local_2b90;
    local_2b42 = SUB41(local_2b2c,0);
    iVar30 = rand();
    local_2b2c = (Spawn *)CONCAT31((int3)((uint)(iVar30 % 0x32) >> 8),(char)(iVar30 % 0x32) + '2');
    iVar30 = rand();
    iVar5 = rand();
    local_2b70 = 0.0015;
    local_2b90 = CONCAT11((char)(iVar30 % 0x32) + '2',(char)(iVar5 % 0x14) + '2');
    local_2bac = local_2b90;
    local_2baa = SUB41(local_2b2c,0);
    break;
  case 4:
    iVar30 = rand();
    local_2b2c = (Spawn *)CONCAT31((int3)((uint)(iVar30 % 0x32) >> 8),(char)(iVar30 % 0x32) + '\x14'
                                  );
    iVar30 = rand();
    iVar5 = rand();
    local_2b90 = CONCAT11((char)(iVar30 % 0x32) + 'P',(char)(iVar5 % 0x32) + 'd');
    local_2b44 = local_2b90;
    local_2b42 = SUB41(local_2b2c,0);
    iVar30 = rand();
    local_2b2c = (Spawn *)CONCAT31((int3)((uint)(iVar30 % 0x32) >> 8),(char)(iVar30 % 0x32) + '\x14'
                                  );
    iVar30 = rand();
    iVar5 = rand();
    local_2b70 = 0.0025;
    local_2b90 = CONCAT11((char)(iVar30 % 0x32) + 'P',(char)(iVar5 % 0x32) + 'd');
    local_2bac = local_2b90;
    local_2baa = SUB41(local_2b2c,0);
    break;
  case 5:
    local_2b44 = 0xd2ff;
    local_2b90 = 0xb4c8;
    local_2b42 = 0x82;
    local_2bac = 0xb4c8;
    local_2baa = 0x50;
  }
  if (uVar7 == 4) {
    if ((int)(*(int *)((int)local_2b74 + 0x24) - *(int *)((int)local_2b74 + 0x20) & 0xfffffffcU) <
        0x27c5) {
      local_2ba4 = (double)((ulonglong)local_2ba4 & 0xffffffff);
    }
    else {
      local_2ba4 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)local_2b74 + 0x20) + 0x27c4),
                                    (undefined4)local_2ba4);
    }
  }
  else if (uVar7 == 5) {
    if ((int)(*(int *)((int)local_2b74 + 0x24) - *(int *)((int)local_2b74 + 0x20) & 0xfffffffcU) <
        0x27c5) {
      local_2ba4 = (double)((ulonglong)local_2ba4 & 0xffffffff);
    }
    else {
      local_2ba4 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)local_2b74 + 0x20) + 0x27c4),
                                    (undefined4)local_2ba4);
    }
  }
  else {
    if ((int)(*(int *)((int)local_2b74 + 0x24) - *(int *)((int)local_2b74 + 0x20) & 0xfffffffcU) <
        0x27c1) {
      local_2ba4 = (double)((ulonglong)local_2ba4 & 0xffffffff);
    }
    else {
      local_2ba4 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)local_2b74 + 0x20) + 0x27c0),
                                    (undefined4)local_2ba4);
    }
    if (((local_2b8c == 0) || (local_2b8c == 3)) || ((local_2b8c == 1 || (local_2b8c == 2)))) {
      iVar30 = 0;
      local_358 = (double)((ulonglong)local_358 & 0xffffffff);
      pSVar34 = (Spawn *)((uint)local_2b5c & 0x80000001);
      local_2b60 = pSVar34;
      if ((int)pSVar34 < 0) {
        pSVar34 = (Spawn *)(((uint)((int)&pSVar34[-1].Spawn_data.offset_0xf70 + 3) | 0xfffffffe) + 1
                           );
        local_2b60 = pSVar34;
      }
      while( true ) {
        iVar5 = local_2bd0.Dungeon_data.offset_0x8;
        if (pSVar34 != (Spawn *)0x0) {
          iVar5 = local_2bd0.Dungeon_data.offset_0xc;
        }
        if (iVar5 <= iVar30) break;
        local_2b88 = (Spawn *)0x0;
        while( true ) {
          iVar5 = local_2bd0.Dungeon_data.offset_0xc;
          if (pSVar34 != (Spawn *)0x0) {
            iVar5 = local_2bd0.Dungeon_data.offset_0x8;
          }
          if (iVar5 <= (int)local_2b88) break;
          local_2b24 = (Spawn *)0x1;
          if (local_2b8c != 2) {
            iVar30 = (*pcVar35)();
            if (iVar30 % 6 == 0) {
              iVar30 = (*pcVar35)();
              local_2b24 = (Spawn *)(iVar30 % 3 + 2);
            }
            iVar30 = (int)local_358._4_4_;
          }
          iVar5 = local_2bd0.Dungeon_data.offset_0x10 + -1;
          if (-1 < iVar5) {
            do {
              pcVar11 = FUN_004f84a0(&local_2bd0,iVar30,(int)local_2b88,iVar5);
              if (*pcVar11 != '\x04') {
                iVar30 = (int)local_358._4_4_;
                pcVar11 = FUN_004f84a0(&local_2bd0,(int)local_358._4_4_,(int)local_2b88,iVar5);
                pSVar34 = local_2b88;
                if (*pcVar11 != '\0') {
                  local_2b2c = (Spawn *)((int)&local_2b24->vftablePtr + iVar5);
                  if (local_2bd0.Dungeon_data.offset_0x10 + -1 < (int)local_2b2c) {
                    local_2b2c = (Spawn *)(local_2bd0.Dungeon_data.offset_0x10 + -1);
                  }
                  iVar5 = iVar5 + 1;
                  if (iVar5 <= (int)local_2b2c) {
                    do {
                      puVar10 = FUN_004f84a0(&local_2bd0,iVar30,(int)pSVar34,iVar5);
                      iVar5 = iVar5 + 1;
                      *puVar10 = 2;
                      pcVar35 = rand_exref;
                    } while (iVar5 <= (int)local_2b2c);
                  }
                  break;
                }
              }
              iVar5 = iVar5 + -1;
              if (iVar5 < 0) break;
              iVar30 = (int)local_358._4_4_;
            } while( true );
          }
          local_2b88 = (Spawn *)((int)local_2b88 + 1);
          iVar30 = (int)local_358._4_4_;
          pSVar34 = local_2b60;
        }
        iVar30 = iVar30 + 1;
        local_358 = (double)CONCAT44(iVar30,(undefined4)local_358);
      }
    }
  }
  local_2bb4 = (Spawn *)(local_2bd0.Dungeon_data.offset_0x10 - 1);
  local_2b88 = (Spawn *)0xffffffff;
  local_2b81 = '\0';
  local_2b9c = (char *)0x0;
  piVar9 = local_2b74;
  do {
    local_2bd0.Dungeon_data.offset_0x0 =
         (Spawn *)((uint)((int)&local_2b5c->vftablePtr + 1) & 0x80000003);
    if ((int)local_2bd0.Dungeon_data.offset_0x0 < 0) {
      local_2bd0.Dungeon_data.offset_0x0 =
           (Spawn *)(((uint)((int)&local_2bd0.Dungeon_data.offset_0x0[-1].Spawn_data.offset_0xf70 +
                            3) | 0xfffffffc) + 1);
    }
    local_344._0_4_ = 0;
    local_344._4_4_ = 0;
    local_344 = 0;
    local_2b40 = (Spawn *)0x0;
    local_2b5c = local_2bd0.Dungeon_data.offset_0x0;
    local_2b34 = local_2bb4;
    if (-1 < (int)local_2bb4) {
      pSVar34 = (Spawn *)FUN_0052d820((int)&local_2bd0);
      local_2b24 = pSVar34;
      do {
        iVar30 = 0;
        if (0 < (int)pSVar34) {
          pSVar12 = (Spawn *)FUN_0052d840((int)&local_2bd0);
          pSVar27 = local_2b34;
          pSVar34 = local_2b24;
          local_2b2c = pSVar12;
          do {
            iVar5 = 0;
            if (0 < (int)pSVar12) {
              do {
                pcVar11 = FUN_004f84a0(&local_2bd0,iVar30,iVar5,(int)pSVar27);
                if (*pcVar11 == '\x04') {
                  local_344 = CONCAT44(iVar5,iVar30);
                  local_2b40 = pSVar27;
                  local_374 = iVar30;
                  iStack_370 = iVar5;
                }
                iVar5 = iVar5 + 1;
                pSVar12 = local_2b2c;
                pSVar34 = local_2b24;
              } while (iVar5 < (int)local_2b2c);
            }
            iVar30 = iVar30 + 1;
          } while (iVar30 < (int)pSVar34);
        }
        local_2b34 = (Spawn *)((int)&local_2b34[-1].Spawn_data.offset_0xf70 + 3);
      } while (-1 < (int)local_2b34);
      piVar9 = local_2b74;
    }
    uVar7 = local_2b68;
    uStack_364 = (double)CONCAT44((int)local_344 * 10,(undefined4)uStack_364);
    local_2b24 = (Spawn *)(local_344._4_4_ * 10);
    iVar30 = FUN_00406100(piVar9,(uint)(&(local_2b3c->Spawn_data).field_0x1 + (int)local_344 * 10),
                          (uint)(&(local_2b38->Spawn_data).field_0x1 + (int)&local_2b24->vftablePtr)
                          ,local_2b68);
    if (iVar30 == 0) goto LAB_00509d35;
    local_2b48 = (Spawn *)(*(int *)(iVar30 + 0x10) + *(int *)(iVar30 + 0x1c));
    puVar13 = FUN_00405fd0(piVar9,(uint)(&(local_2b3c->Spawn_data).field_0x1 + (int)uStack_364._4_4_
                                        ),
                           (uint)(&(local_2b38->Spawn_data).field_0x1 + (int)&local_2b24->vftablePtr
                                 ),(int)local_2b48,uVar7);
    bVar4 = puVar13[3];
    pSVar34 = local_2b48;
    while ((bVar4 & 0x1f) == 0) {
      pSVar34 = (Spawn *)((int)&pSVar34[-1].Spawn_data.offset_0xf70 + 3);
      uStack_364._4_4_ = (char *)((ulonglong)uStack_364 >> 0x20);
      puVar10 = &(local_2b3c->Spawn_data).field_0x1 + (int)uStack_364._4_4_;
      puVar13 = FUN_00405fd0(piVar9,(uint)puVar10,
                             (uint)(&(local_2b38->Spawn_data).field_0x1 +
                                   (int)&local_2b24->vftablePtr),(int)pSVar34,uVar7);
      bVar4 = puVar13[3];
    }
    local_2b48 = (Spawn *)((int)&pSVar34->vftablePtr + 1);
    local_2b69 = '\0';
    local_2b34 = (Spawn *)0x0;
    do {
      iVar30 = 0;
      local_358 = (double)((ulonglong)local_358 & 0xffffffff);
      do {
        iVar5 = 0;
        do {
          piVar9 = local_2b74;
          puVar13 = FUN_00405fd0(local_2b74,
                                 (uint)((undefined1 *)
                                        ((int)&local_2b3c->vftablePtr + (int)uStack_364._4_4_) +
                                       (int)local_2b34),
                                 (uint)((int)&local_2b24->vftablePtr +
                                       (int)(iVar30 + (int)&local_2b38->vftablePtr)),
                                 (int)((int)local_2b48 + iVar5 + -5),local_2b68);
          if (((puVar13[3] & 0x1f) == 2) || ((puVar13[3] & 0x1f) == 3)) {
            local_2b69 = '\x01';
          }
          iVar5 = iVar5 + 1;
          iVar30 = (int)local_358._4_4_;
        } while (iVar5 < 10);
        iVar30 = (int)local_358._4_4_ + 1;
        local_358 = (double)CONCAT44(iVar30,(undefined4)local_358);
      } while (iVar30 < 10);
      local_2b34 = (Spawn *)((int)&local_2b34->vftablePtr + 1);
    } while ((int)local_2b34 < 10);
    pSVar34 = local_2b48;
    if (local_2b69 != '\0') {
      pSVar34 = (Spawn *)&(local_2b48->Spawn_data).offset_0x60;
    }
    puVar10 = (undefined1 *)((int)pSVar34 + (int)local_2b40 * -10);
    if (((int)local_2b88 < 0) || ((int)puVar10 < (int)local_2b58)) {
      local_2b88 = local_2b5c;
      local_39c = local_344;
      local_394 = local_2b40;
      local_2b81 = local_2b69;
      local_2b58 = puVar10;
    }
    local_2b9c = local_2b9c + 1;
  } while ((int)local_2b9c < 4);
  if ((local_2b8c == 4) || (local_2b8c == 5)) {
    local_2b58 = local_2b58 + 0x32;
  }
  if (local_2b81 != '\0') {
    local_2b58 = local_2b58 + -100;
  }
  if ((int)(local_2b58 + (int)local_394 * 10) < 0) {
    local_2b58 = (undefined1 *)((int)local_394 * -10);
  }
  if ((int)local_2b88 < 0) {
    local_2b88 = (Spawn *)0x0;
  }
  local_2bd0.Dungeon_data.offset_0x0 = local_2b88;
  iVar30 = rand();
  local_2b2c = (Spawn *)CONCAT31((int3)((uint)(iVar30 % 0xb4) >> 8),(char)(iVar30 % 0xb4) + '2');
  iVar30 = rand();
  iVar5 = rand();
  local_2b8e = SUB41(local_2b2c,0);
  local_2b90 = CONCAT11((char)(iVar30 % 0xb4) + '2',(char)(iVar5 % 0xb4) + '2');
  iVar30 = rand();
  local_2b2c = (Spawn *)CONCAT31((int3)((uint)(iVar30 % 0xb4) >> 8),(char)(iVar30 % 0xb4) + '2');
  iVar30 = rand();
  cVar33 = (char)(iVar30 % 0xb4) + '2';
  iVar30 = rand();
  local_2bda = SUB41(local_2b2c,0);
  local_2bdc = (char)(iVar30 % 0xb4) + '2';
  local_2bdb = cVar33;
  switch(local_2b8c) {
  case 0:
  case 3:
    rand();
  }
  iVar30 = 0;
  local_2b98 = (double)(ulonglong)(uint)local_2b98;
  local_2b88 = (Spawn *)((uint)local_2b88 & 0x80000001);
  iVar5 = local_2bd0.Dungeon_data.offset_0xc;
  iVar6 = local_2bd0.Dungeon_data.offset_0x8;
  if ((int)local_2b88 < 0) {
    local_2b88 = (Spawn *)(((uint)((int)local_2b88 + -1) | 0xfffffffe) + 1);
  }
  while( true ) {
    pcVar35 = rand_exref;
    iVar14 = iVar6;
    if (local_2b88 != (Spawn *)0x0) {
      iVar14 = iVar5;
    }
    if (iVar14 <= iVar30) break;
    local_2b64 = (Spawn *)0x0;
    while( true ) {
      uVar7 = local_2b68;
      iVar14 = iVar5;
      if (local_2b88 != (Spawn *)0x0) {
        iVar14 = iVar6;
      }
      if (iVar14 <= (int)local_2b64) break;
      local_2b60 = (Spawn *)((int)local_2b64 * 10);
      local_2b48 = (Spawn *)((int)&local_2b60->vftablePtr + (int)&local_2b38->vftablePtr);
      local_2b2c = (Spawn *)(iVar30 * 10);
      local_2b9c = (char *)((int)&local_2b3c->vftablePtr + (int)&local_2b2c->vftablePtr);
      local_2b69 = '\0';
      uStack_364 = (double)((ulonglong)uStack_364 & 0xffffffff);
      iVar30 = FUN_00406100(piVar9,(uint)local_2b9c,(uint)local_2b48,local_2b68);
      local_2b34 = (Spawn *)(*(int *)(iVar30 + 0x1c) + *(int *)(iVar30 + 0x10));
      local_2b24 = (Spawn *)0x0;
      do {
        iVar30 = 0;
        do {
          iVar5 = FUN_00406100(piVar9,(uint)(local_2b9c + (int)local_2b24),
                               (uint)((int)&local_2b48->vftablePtr + iVar30),uVar7);
          pSVar34 = (Spawn *)(*(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 0x10));
          if ((int)pSVar34 < (int)local_2b34) {
            local_2b34 = pSVar34;
          }
          iVar30 = iVar30 + 1;
        } while (iVar30 < 10);
        local_2b24 = (Spawn *)((int)&local_2b24->vftablePtr + 1);
      } while ((int)local_2b24 < 10);
      local_2b81 = '\0';
      local_358 = (double)CONCAT44(local_2bb4,(undefined4)local_358);
      pSVar34 = local_2bb4;
      if ((int)local_2bb4 < 0) {
LAB_00503956:
        if ((local_2b8c == 4) || (local_2b8c == 5)) goto LAB_0050396a;
LAB_005044b2:
        iVar30 = local_2b98._4_4_;
LAB_005044b8:
        local_2b64 = (Spawn *)((int)&local_2b64->vftablePtr + 1);
        iVar5 = local_2bd0.Dungeon_data.offset_0xc;
        iVar6 = local_2bd0.Dungeon_data.offset_0x8;
      }
      else {
        do {
          pcVar11 = FUN_004f84a0(&local_2bd0,(int)((ulonglong)local_2b98 >> 0x20),(int)local_2b64,
                                 (int)pSVar34);
          cVar33 = *pcVar11;
          if (cVar33 != '\0') {
            if (local_2b69 == '\0') {
              uStack_364 = (double)CONCAT44(local_2b58 + (int)((int)&pSVar34->vftablePtr + 1) * 10,
                                            (undefined4)uStack_364);
              if (cVar33 == '\x04') {
                uStack_364 = (double)CONCAT44(local_2b58 + (int)((int)&pSVar34->vftablePtr + 1) * 10
                                              + -10,(undefined4)uStack_364);
                goto LAB_00502e25;
              }
LAB_00502e3e:
              local_2b28 = (Spawn *)((int)pSVar34 * 10);
              if ((int)local_2b34 < (int)(&(local_2b28->Spawn_data).field_0x1 + (int)local_2b58)) {
                if (local_2b8c == 2) {
                  local_344 = 0xa0000000a;
                  local_33c = (Spawn *)0x3;
                  FUN_00513400(piVar9,(int)local_2b9c,(int)local_2b48,
                               (int)(local_2b58 + (int)pSVar34 * 10 + 0xb),(int *)&local_344,
                               (byte *)&local_2b44,0.0,uVar7,0);
                }
                else if (((local_2b8c == 0) || (local_2b8c == 3)) || (local_2b8c == 1)) {
                  local_2b5c = (Spawn *)(local_2b98._4_4_ - 1);
                  pcVar11 = FUN_004f84a0(&local_2bd0,(int)local_2b5c,(int)local_2b64,(int)pSVar34);
                  cVar33 = *pcVar11;
                  if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                    local_2b78 = (Spawn *)((int)&pSVar34->vftablePtr + 1);
                    pcVar11 = FUN_004f84a0(&local_2bd0,(int)local_2b5c,(int)local_2b64,
                                           (int)local_2b78);
                    pSVar27 = local_2b48;
                    cVar33 = *pcVar11;
                    if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                      puVar10 = local_2b58 + (int)local_2b78 * 10;
                      local_41c = 2;
                      local_418 = 0x10;
                      local_414 = 3;
                      FUN_00513400(piVar9,(int)(local_2b9c + -3),
                                   (int)((int)&local_2b48[-1].Spawn_data.offset_0xf70 + 1),
                                   (int)puVar10,&local_41c,(byte *)&local_2b44,0.0,local_2b68,0);
                      uVar7 = local_2b68;
                      local_2b24 = (Spawn *)(puVar10 + 3);
                      puVar10 = (undefined1 *)((int)&pSVar27[-1].Spawn_data.offset_0xf70 + 2);
                      local_2b40 = (Spawn *)0x8;
                      do {
                        puVar13 = FUN_00405fd0(piVar9,(uint)(local_2b9c + -3),(uint)puVar10,
                                               (int)local_2b24,uVar7);
                        if (((puVar13[3] & 0x1f) == 0) || ((puVar13[3] & 0x1f) == 2)) {
                          local_2c04 = 0;
                          local_2c00 = 0;
                          local_2bfe = 0x4000;
                          FUN_0041ff00(piVar9,(float)(local_2b9c + -3),(uint)puVar10,(int)local_2b24
                                       ,(undefined1 *)&local_2c00,uVar7);
                        }
                        local_440 = 1;
                        local_43c = 1;
                        local_438 = 1;
                        FUN_00513400(piVar9,(int)(local_2b9c + -3),(int)(puVar10 + -1),
                                     (int)local_2b24,&local_440,(byte *)&local_2b44,0.0,uVar7,0);
                        puVar10 = puVar10 + 2;
                        local_2b40 = (Spawn *)((int)&local_2b40[-1].Spawn_data.offset_0xf70 + 3);
                      } while (local_2b40 != (Spawn *)0x0);
                      local_2b40 = (Spawn *)0x0;
                      pSVar34 = local_358._4_4_;
                    }
                  }
                  pcVar11 = FUN_004f84a0(&local_2bd0,local_2b98._4_4_ + 1,(int)local_2b64,
                                         (int)pSVar34);
                  cVar33 = *pcVar11;
                  if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                    local_2b78 = (Spawn *)((int)&pSVar34->vftablePtr + 1);
                    pcVar11 = FUN_004f84a0(&local_2bd0,local_2b98._4_4_ + 1,(int)local_2b64,
                                           (int)local_2b78);
                    pSVar27 = local_2b48;
                    cVar33 = *pcVar11;
                    if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                      puVar10 = local_2b58 + (int)local_2b78 * 10;
                      iVar30 = local_2b98._4_4_;
                      local_410 = 2;
                      local_40c = 0x10;
                      local_408 = 3;
                      FUN_00513400(local_2b74,
                                   (int)((int)&(local_2b3c->Spawn_data).offset_0x4 +
                                        local_2b98._4_4_ * 10 + 3),
                                   (int)((int)&local_2b48[-1].Spawn_data.offset_0xf70 + 1),
                                   (int)puVar10,&local_410,(byte *)&local_2b44,0.0,local_2b68,0);
                      uVar7 = local_2b68;
                      piVar9 = local_2b74;
                      local_2b24 = (Spawn *)(puVar10 + 3);
                      local_2b40 = (Spawn *)(&(local_2b3c->Spawn_data).field_0x8 + iVar30 * 10);
                      puVar10 = (undefined1 *)((int)&pSVar27[-1].Spawn_data.offset_0xf70 + 3);
                      local_2b78 = (Spawn *)0x8;
                      do {
                        puVar13 = FUN_00405fd0(piVar9,(uint)local_2b40,(uint)puVar10,(int)local_2b24
                                               ,uVar7);
                        if (((puVar13[3] & 0x1f) == 0) || ((puVar13[3] & 0x1f) == 2)) {
                          local_2b54 = local_2b54 & 0xffff0000;
                          local_2c0c = 0;
                          local_2c0a = 0x4000;
                          FUN_0041ff00(piVar9,(float)local_2b40,(uint)puVar10,(int)local_2b24,
                                       (undefined1 *)&local_2c0c,uVar7);
                        }
                        local_404 = 1;
                        local_400 = 1;
                        local_3fc = 1;
                        FUN_00513400(piVar9,(int)local_2b40,(int)(puVar10 + -1),(int)local_2b24,
                                     &local_404,(byte *)&local_2b44,0.0,uVar7,0);
                        puVar10 = puVar10 + 2;
                        local_2b78 = (Spawn *)((int)local_2b78 + -1);
                      } while (local_2b78 != (Spawn *)0x0);
                      local_2b78 = (Spawn *)0x0;
                      pSVar34 = local_358._4_4_;
                    }
                  }
                  pcVar11 = FUN_004f84a0(&local_2bd0,(int)((ulonglong)local_2b98 >> 0x20),
                                         (int)((int)&local_2b64[-1].Spawn_data.offset_0xf70 + 3),
                                         (int)pSVar34);
                  cVar33 = *pcVar11;
                  if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                    local_2b78 = (Spawn *)((int)&pSVar34->vftablePtr + 1);
                    pcVar15 = FUN_004f84a0(&local_2bd0,(int)((ulonglong)local_2b98 >> 0x20),
                                           (int)((int)&local_2b64[-1].Spawn_data.offset_0xf70 + 3),
                                           (int)local_2b78);
                    pcVar11 = local_2b9c;
                    cVar33 = *pcVar15;
                    if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                      puVar10 = local_2b58 + (int)local_2b78 * 10;
                      local_434 = 0x10;
                      local_430 = 2;
                      local_42c = 3;
                      FUN_00513400(piVar9,(int)(local_2b9c + -3),
                                   (int)((int)&local_2b48[-1].Spawn_data.offset_0xf70 + 1),
                                   (int)puVar10,&local_434,(byte *)&local_2b44,0.0,local_2b68,0);
                      uVar7 = local_2b68;
                      local_2b24 = (Spawn *)(puVar10 + 3);
                      pcVar11 = pcVar11 + -2;
                      local_2b78 = (Spawn *)0x8;
                      do {
                        puVar13 = FUN_00405fd0(piVar9,(uint)pcVar11,
                                               (uint)((int)&local_2b48[-1].Spawn_data.offset_0xf70 +
                                                     1),(int)local_2b24,uVar7);
                        if (((puVar13[3] & 0x1f) == 0) || ((puVar13[3] & 0x1f) == 2)) {
                          local_2b50 = (char *)((uint)local_2b50 & 0xffff0000);
                          local_2c08 = 0;
                          local_2c06 = 0x4000;
                          FUN_0041ff00(piVar9,(float)pcVar11,
                                       (uint)((int)&local_2b48[-1].Spawn_data.offset_0xf70 + 1),
                                       (int)local_2b24,(undefined1 *)&local_2c08,uVar7);
                        }
                        local_464 = 1;
                        local_460 = 1;
                        local_45c = 1;
                        FUN_00513400(piVar9,(int)(pcVar11 + -1),
                                     (int)((int)&local_2b48[-1].Spawn_data.offset_0xf70 + 1),
                                     (int)local_2b24,&local_464,(byte *)&local_2b44,0.0,uVar7,0);
                        pcVar11 = pcVar11 + 2;
                        local_2b78 = (Spawn *)((int)local_2b78 + -1);
                      } while (local_2b78 != (Spawn *)0x0);
                      local_2b78 = (Spawn *)0x0;
                      pSVar34 = local_358._4_4_;
                    }
                  }
                  pcVar11 = FUN_004f84a0(&local_2bd0,(int)((ulonglong)local_2b98 >> 0x20),
                                         (int)((int)&local_2b64->vftablePtr + 1),(int)pSVar34);
                  cVar33 = *pcVar11;
                  if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                    local_2b78 = (Spawn *)((int)&pSVar34->vftablePtr + 1);
                    pcVar15 = FUN_004f84a0(&local_2bd0,(int)((ulonglong)local_2b98 >> 0x20),
                                           (int)((int)&local_2b64->vftablePtr + 1),(int)local_2b78);
                    pcVar11 = local_2b9c;
                    cVar33 = *pcVar15;
                    if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                      puVar10 = local_2b58 + (int)local_2b78 * 10;
                      ppSVar2 = &local_2b64->vftablePtr;
                      local_47c = 0x10;
                      local_478 = 2;
                      local_474 = 3;
                      FUN_00513400(local_2b74,(int)(local_2b9c + -3),
                                   (int)((int)&(local_2b38->Spawn_data).offset_0x4 +
                                        (int)ppSVar2 * 10 + 3),(int)puVar10,&local_47c,
                                   (byte *)&local_2b44,0.0,local_2b68,0);
                      uVar7 = local_2b68;
                      piVar9 = local_2b74;
                      local_2b24 = (Spawn *)(puVar10 + 3);
                      local_2b40 = (Spawn *)(&(local_2b38->Spawn_data).field_0x8 + (int)ppSVar2 * 10
                                            );
                      pcVar11 = pcVar11 + -1;
                      local_2b78 = (Spawn *)0x8;
                      do {
                        puVar13 = FUN_00405fd0(piVar9,(uint)pcVar11,(uint)local_2b40,(int)local_2b24
                                               ,uVar7);
                        if (((puVar13[3] & 0x1f) == 0) || ((puVar13[3] & 0x1f) == 2)) {
                          local_2b4c = local_2b4c & 0xffff0000;
                          local_2bfc = 0;
                          local_2bfa = 0x4000;
                          FUN_0041ff00(piVar9,(float)pcVar11,(uint)local_2b40,(int)local_2b24,
                                       (undefined1 *)&local_2bfc,uVar7);
                        }
                        local_470 = 1;
                        local_46c = 1;
                        local_468 = 1;
                        FUN_00513400(piVar9,(int)(pcVar11 + -1),(int)local_2b40,(int)local_2b24,
                                     &local_470,(byte *)&local_2b44,0.0,uVar7,0);
                        pcVar11 = pcVar11 + 2;
                        local_2b78 = (Spawn *)((int)local_2b78 + -1);
                      } while (local_2b78 != (Spawn *)0x0);
                      local_2b78 = (Spawn *)0x0;
                      pSVar34 = local_358._4_4_;
                    }
                  }
                  if (local_2ba5 != '\0') {
                    pcVar11 = FUN_004f84a0(&local_2bd0,(int)local_2b5c,(int)local_2b64,(int)pSVar34)
                    ;
                    cVar33 = *pcVar11;
                    if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                      pcVar11 = FUN_004f84a0(&local_2bd0,local_2b98._4_4_ + 1,(int)local_2b64,
                                             (int)pSVar34);
                      cVar33 = *pcVar11;
                      if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                        pcVar11 = FUN_004f84a0(&local_2bd0,(int)((ulonglong)local_2b98 >> 0x20),
                                               (int)((int)&local_2b64[-1].Spawn_data.offset_0xf70 +
                                                    3),(int)pSVar34);
                        cVar33 = *pcVar11;
                        if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                          pcVar11 = FUN_004f84a0(&local_2bd0,(int)((ulonglong)local_2b98 >> 0x20),
                                                 (int)((int)&local_2b64->vftablePtr + 1),
                                                 (int)pSVar34);
                          cVar33 = *pcVar11;
                          if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                            local_2b40 = (Spawn *)(local_2b9c + -2);
                            local_2b24 = (Spawn *)((int)&local_2b48[-1].Spawn_data.offset_0xf70 + 2)
                            ;
                            local_428 = 0xe;
                            local_424 = 0xe;
                            local_420 = 4;
                            FUN_00513400(piVar9,(int)local_2b40,(int)local_2b24,
                                         (int)(local_2b58 +
                                              (int)((int)&pSVar34->vftablePtr + 1) * 10),&local_428,
                                         &local_2be0,0.0,uVar7,0);
                            iVar30 = 0xe;
                            local_2b78 = (Spawn *)(local_2b58 +
                                                  (int)&(local_2b28->Spawn_data).field_0xa);
                            do {
                              local_450 = 2;
                              local_458 = iVar30;
                              local_454 = iVar30;
                              FUN_00513400(piVar9,(int)local_2b40,(int)local_2b24,(int)local_2b78,
                                           &local_458,&local_2be0,0.0,uVar7,0);
                              local_2b24 = (Spawn *)((int)&local_2b24->vftablePtr + 1);
                              iVar30 = iVar30 + -2;
                              local_2b78 = (Spawn *)((int)local_2b78 + 2);
                              local_2b40 = (Spawn *)((int)&local_2b40->vftablePtr + 1);
                            } while (0 < iVar30);
                            pSVar34 = local_358._4_4_;
                          }
                        }
                      }
                    }
                  }
                  pcVar11 = FUN_004f84a0(&local_2bd0,(int)local_2b5c,(int)local_2b64,(int)pSVar34);
                  cVar33 = *pcVar11;
                  if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                    pcVar11 = FUN_004f84a0(&local_2bd0,local_2b98._4_4_ + 1,(int)local_2b64,
                                           (int)pSVar34);
                    cVar33 = *pcVar11;
                    if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                      pcVar11 = FUN_004f84a0(&local_2bd0,(int)((ulonglong)local_2b98 >> 0x20),
                                             (int)((int)&local_2b64[-1].Spawn_data.offset_0xf70 + 3)
                                             ,(int)pSVar34);
                      cVar33 = *pcVar11;
                      if (((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) {
                        pcVar11 = FUN_004f84a0(&local_2bd0,(int)((ulonglong)local_2b98 >> 0x20),
                                               (int)((int)&local_2b64->vftablePtr + 1),(int)pSVar34)
                        ;
                        cVar33 = *pcVar11;
                        if ((((cVar33 == '\0') || (cVar33 == '\x04')) || (cVar33 == '\x01')) &&
                           (iVar30 = FUN_00406100(piVar9,(uint)(&(local_2b3c->Spawn_data).field_0x1
                                                               + (int)&local_2b2c->vftablePtr),
                                                  (uint)(&(local_2b60->Spawn_data).field_0x1 +
                                                        (int)local_2b38),uVar7), iVar30 != 0)) {
                          iVar30 = *(int *)(iVar30 + 0x1c) + *(int *)(iVar30 + 0x10);
                          while( true ) {
                            puVar13 = FUN_00405fd0(piVar9,(uint)(&(local_2b2c->Spawn_data).field_0x1
                                                                + (int)local_2b3c),
                                                   (uint)(&(local_2b60->Spawn_data).field_0x1 +
                                                         (int)local_2b38),iVar30,uVar7);
                            if (((puVar13[3] & 0x1f) != 0) && ((puVar13[3] & 0x1f) != 2)) break;
                            iVar30 = iVar30 + -1;
                          }
                          pSVar34 = local_358._4_4_;
                        }
                      }
                    }
                  }
                }
              }
LAB_005038d2:
              local_6e0 = 0xe;
              local_6dc = 0xe;
              local_6d8 = 0xe;
              FUN_00513400(piVar9,(int)(local_2b9c + -2),
                           (int)((int)&local_2b48[-1].Spawn_data.offset_0xf70 + 2),
                           (int)(local_2b58 + ((int)pSVar34 * 5 + -1) * 2),&local_6e0,
                           (byte *)&local_2b44,local_2b70,uVar7,0);
            }
            else {
LAB_00502e25:
              if (cVar33 != '\x04') {
                if (local_2b69 == '\0') goto LAB_00502e3e;
                goto LAB_005038d2;
              }
              local_2b81 = '\x01';
            }
            local_2b69 = '\x01';
          }
          pSVar34 = (Spawn *)((int)&pSVar34[-1].Spawn_data.offset_0xf70 + 3);
          local_358 = (double)CONCAT44(pSVar34,(undefined4)local_358);
        } while (-1 < (int)pSVar34);
        if (local_2b69 == '\0') goto LAB_00503956;
LAB_0050396a:
        iVar30 = FUN_00406100(piVar9,(uint)local_2b9c,(uint)local_2b48,uVar7);
        if (iVar30 == 0) goto LAB_005044b2;
        iVar30 = *(int *)(iVar30 + 0x10);
        local_2b24 = (Spawn *)0xfffffffe;
        do {
          local_2b2c = (Spawn *)0xfffffffe;
          do {
            iVar5 = FUN_00406100(piVar9,(uint)(local_2b9c + (int)local_2b24),
                                 (uint)((int)&local_2b48->vftablePtr + (int)&local_2b2c->vftablePtr)
                                 ,uVar7);
            uVar8 = local_2b68;
            if ((iVar5 != 0) && (*(int *)(iVar5 + 0x10) < iVar30)) {
              iVar30 = *(int *)(iVar5 + 0x10);
            }
            local_2b2c = (Spawn *)((int)&local_2b2c->vftablePtr + 1);
          } while ((int)local_2b2c < 0xc);
          local_2b24 = (Spawn *)((int)&local_2b24->vftablePtr + 1);
        } while ((int)local_2b24 < 0xc);
        if ((((local_2b8c == 0) || (local_2b8c == 3)) || (local_2b8c == 2)) || (local_2b8c == 1)) {
          local_36c = (int)uStack_364._4_4_ - iVar30;
          bVar4 = 0;
          if (local_2b81 != '\0') {
            bVar4 = 0x80;
          }
          local_374 = 0xe;
          iStack_370 = 0xe;
          FUN_00513400(piVar9,(int)(local_2b9c + -2),
                       (int)((int)&local_2b48[-1].Spawn_data.offset_0xf70 + 2),iVar30,&local_374,
                       (byte *)&local_2b44,local_2b70,uVar7,bVar4);
          goto LAB_005044b2;
        }
        if (local_2b8c != 4) goto LAB_005044b2;
        iVar5 = local_2bd0.Dungeon_data.offset_0x8;
        iVar6 = local_2bd0.Dungeon_data.offset_0xc;
        if (local_2b88 != (Spawn *)0x0) {
          iVar5 = local_2bd0.Dungeon_data.offset_0xc;
          iVar6 = local_2bd0.Dungeon_data.offset_0x8;
        }
        local_2b28 = (Spawn *)(iVar6 / 2 - 1);
        uVar7 = (int)local_2b64 - (int)local_2b28 >> 0x1f;
        local_2b2c = (Spawn *)(((int)local_2b64 - (int)local_2b28 ^ uVar7) - uVar7);
        local_3a4 = iVar5 / 2 + -1;
        uVar7 = local_2b98._4_4_ - local_3a4 >> 0x1f;
        local_2b60 = (Spawn *)((local_2b98._4_4_ - local_3a4 ^ uVar7) - uVar7);
        pSVar34 = local_2b2c;
        if ((int)local_2b2c < (int)local_2b60) {
          pSVar34 = local_2b60;
        }
        iVar5 = local_2bd0.Dungeon_data.offset_0x8;
        if (local_2b88 != (Spawn *)0x0) {
          iVar5 = local_2bd0.Dungeon_data.offset_0xc;
        }
        iVar5 = iVar5 / 2 - (int)pSVar34;
        iVar6 = iVar5 + -1;
        if ((local_2b98._4_4_ == local_3a4) && (local_2b64 == local_2b28)) {
          iVar6 = iVar5 + -2;
        }
        local_3c8 = local_2b58 + (int)((int)local_394 + iVar6 + -5) * 10;
        local_358 = (double)CONCAT44(local_3c8,(undefined4)local_358);
        if (((int)local_2b60 < 2) && ((int)local_2b2c < 2)) {
          local_3c8 = local_3c8 + 2;
          local_358 = (double)CONCAT44(local_3c8,(undefined4)local_358);
        }
        local_2b34 = (Spawn *)((int)&local_2b48[-1].Spawn_data.offset_0xf70 + 2);
        local_3c8 = local_3c8 + (-4 - iVar30);
        local_2b24 = (Spawn *)(local_2b9c + -2);
        local_3d0 = 0xe;
        local_3cc = 0xe;
        local_3a0 = local_2b28;
        FUN_00513400(piVar9,(int)local_2b24,(int)local_2b34,iVar30,&local_3d0,(byte *)&local_2b44,
                     local_2b70,local_2b68,0);
        iVar5 = (int)local_358._4_4_;
        if (local_358._4_4_ != (Spawn *)iVar30 && -1 < (int)local_358._4_4_ - iVar30) {
          local_3b8 = 0xc;
          local_3b4 = 0xc;
          local_3b0 = 3;
          FUN_00513400(piVar9,(int)(local_2b9c + -1),
                       (int)((int)&local_2b48[-1].Spawn_data.offset_0xf70 + 3),
                       (int)local_358._4_4_ + -4,&local_3b8,(byte *)&local_2b44,0.0,uVar8,0);
          local_38c = (Spawn_vftable *)0xa;
          uStack_388 = 10;
          local_384 = 3;
          FUN_00513400(piVar9,(int)local_2b9c,(int)local_2b48,iVar5 + -1,(int *)&local_38c,
                       (byte *)&local_2b44,0.0,uVar8,0);
          local_2b28 = (Spawn *)(iVar5 + 2);
          local_2b5c = (Spawn *)0xfffffffe;
          do {
            local_2b2c = (Spawn *)0xfffffffe;
            uStack_364 = (double)CONCAT44(local_2b9c + (int)local_2b5c,(undefined4)uStack_364);
            pcVar11 = local_2b9c + (int)local_2b5c;
            pSVar34 = local_2b34;
            do {
              local_2b40 = local_2b28;
              if ((((local_2b5c == (Spawn *)0xfffffffe) || (local_2b5c == (Spawn *)0xb)) ||
                  (local_2b2c == (Spawn *)0xfffffffe)) || (local_2b2c == (Spawn *)0xb)) {
                iVar30 = -6;
LAB_00503c9c:
                local_2b40 = (Spawn *)((int)&local_2b28->vftablePtr + iVar30);
              }
              else if (((local_2b5c == (Spawn *)0xffffffff) || (local_2b5c == (Spawn *)0xa)) ||
                      ((local_2b2c == (Spawn *)0xffffffff || (local_2b2c == (Spawn *)0xa)))) {
                iVar30 = -3;
                goto LAB_00503c9c;
              }
              fVar37 = FUN_004d5d30(SUB84((double)(int)pcVar11 * 0.02,0),
                                    (int)((ulonglong)((double)(int)pcVar11 * 0.02) >> 0x20),
                                    (double)(int)pSVar34 * 0.02);
              local_2b60 = (Spawn *)(float)fVar37;
              if (0.0 < (float)local_2b60) {
                puVar13 = FUN_00405fd0(piVar9,(uint)uStack_364._4_4_,(uint)pSVar34,(int)local_2b40,
                                       uVar8);
                if (((puVar13[3] & 0x1f) == 0) ||
                   (bVar4 = FUN_00406280((int)puVar13), CONCAT31(extraout_var,bVar4) == 2)) {
                  uVar7 = uVar8;
                  uVar31 = uVar8;
                  fVar37 = FUN_004fc140(piVar9,(uint)((ulonglong)uStack_364 >> 0x20),(uint)pSVar34,
                                        uVar8);
                  fVar38 = (float)fVar37;
                  fVar37 = FUN_004fc100(piVar9,(float)uStack_364._4_4_,(uint)pSVar34,uVar8);
                  puVar10 = (undefined1 *)
                            FUN_004f9450(piVar9,&local_2c28,(float)((ulonglong)uStack_364 >> 0x20),
                                         (float)pSVar34,(int)local_2b40,(float)fVar37,fVar38,uVar7);
                  FUN_0041ff00(piVar9,(float)((ulonglong)uStack_364 >> 0x20),(uint)pSVar34,
                               (int)local_2b40,puVar10,uVar31);
                }
              }
              local_2b2c = (Spawn *)((int)&local_2b2c->vftablePtr + 1);
              pSVar34 = (Spawn *)((int)&pSVar34->vftablePtr + 1);
              pcVar11 = uStack_364._4_4_;
            } while ((int)local_2b2c < 0xc);
            local_2b5c = (Spawn *)((int)&local_2b5c->vftablePtr + 1);
          } while ((int)local_2b5c < 0xc);
        }
        local_2b60 = (Spawn *)FUN_004013d0(&local_3a4,0);
        uVar7 = local_2b98._4_4_ - (int)local_2b60->vftablePtr;
        uVar31 = (int)uVar7 >> 0x1f;
        if ((uVar7 ^ uVar31) == uVar31) {
          piVar16 = (int *)FUN_004013d0(&local_3a4,1);
          iVar30 = *piVar16;
          uVar7 = (int)local_2b64 - iVar30 >> 0x1f;
          if ((int)(((int)local_2b64 - iVar30 ^ uVar7) - uVar7) < 2) goto LAB_005040da;
          iVar5 = (int)local_358._4_4_;
          if ((int)local_2b64 < iVar30) {
            local_2b5c = (Spawn *)((int)&local_2b48[-1].Spawn_data.offset_0xf70 + 3);
            local_2b2c = (Spawn *)0xffffffff;
            local_2b40 = local_2b5c;
            do {
              uVar41 = (ulonglong)uVar8;
              pbVar42 = (byte *)&local_2b44;
              fVar38 = local_2b70;
              piVar16 = FUN_00402990(local_7c8,0xe,1,(int)local_2b2c + 3);
              FUN_00513400(piVar9,(int)local_2b24,(int)local_2b5c,iVar5,piVar16,pbVar42,fVar38,
                           (int)uVar41,(byte)(uVar41 >> 0x20));
              local_2b5c = (Spawn *)((int)&local_2b5c->vftablePtr + 1);
              local_2b2c = (Spawn *)((int)local_2b2c + 1);
            } while ((int)local_2b2c < 10);
            local_2b2c = (Spawn *)0xffffffff;
            local_2b5c = local_2b40;
            do {
              uVar41 = (ulonglong)uVar8;
              pbVar42 = (byte *)&local_2b44;
              fVar38 = local_2b70;
              piVar16 = FUN_00402990(local_960,2,1,(int)local_2b2c + 5);
              FUN_00513400(piVar9,(int)local_2b24,(int)local_2b5c,iVar5,piVar16,pbVar42,fVar38,
                           (int)uVar41,(byte)(uVar41 >> 0x20));
              local_2b5c = (Spawn *)((int)&local_2b5c->vftablePtr + 1);
              local_2b2c = (Spawn *)((int)local_2b2c + 1);
            } while ((int)local_2b2c < 10);
            local_2b2c = (Spawn *)0xffffffff;
            local_2b28 = (Spawn *)((int)&(local_2b3c->Spawn_data).offset_0x4 +
                                  local_2b98._4_4_ * 10 + 2);
            do {
              uVar41 = (ulonglong)uVar8;
              pbVar42 = (byte *)&local_2b44;
              fVar38 = local_2b70;
              piVar16 = FUN_00402990(local_7e0,2,1,&(local_2b2c->Spawn_data).field_0x1);
              FUN_00513400(piVar9,(int)local_2b28,(int)local_2b40,iVar5,piVar16,pbVar42,fVar38,
                           (int)uVar41,(byte)(uVar41 >> 0x20));
              local_2b40 = (Spawn *)((int)&local_2b40->vftablePtr + 1);
              local_2b2c = (Spawn *)((int)&local_2b2c->vftablePtr + 1);
            } while ((int)local_2b2c < 10);
          }
          else if (iVar30 < (int)local_2b64) {
            local_2b5c = (Spawn *)((int)&(local_2b48->Spawn_data).offset_0x4 + 2);
            local_2b2c = (Spawn *)0xffffffff;
            local_2b40 = local_2b5c;
            do {
              uVar41 = (ulonglong)uVar8;
              pbVar42 = (byte *)&local_2b44;
              fVar38 = local_2b70;
              piVar16 = FUN_00402990(local_a20,0xe,1,(int)local_2b2c + 3);
              FUN_00513400(piVar9,(int)local_2b24,(int)local_2b5c,iVar5,piVar16,pbVar42,fVar38,
                           (int)uVar41,(byte)(uVar41 >> 0x20));
              local_2b5c = (Spawn *)((int)&local_2b5c[-1].Spawn_data.offset_0xf70 + 3);
              local_2b2c = (Spawn *)((int)local_2b2c + 1);
            } while ((int)local_2b2c < 10);
            local_2b2c = (Spawn *)0xffffffff;
            local_2b5c = local_2b40;
            do {
              uVar41 = (ulonglong)uVar8;
              pbVar42 = (byte *)&local_2b44;
              fVar38 = local_2b70;
              piVar16 = FUN_00402990(local_7f8,2,1,(int)local_2b2c + 5);
              FUN_00513400(piVar9,(int)local_2b24,(int)local_2b5c,iVar5,piVar16,pbVar42,fVar38,
                           (int)uVar41,(byte)(uVar41 >> 0x20));
              local_2b5c = (Spawn *)((int)&local_2b5c[-1].Spawn_data.offset_0xf70 + 3);
              local_2b2c = (Spawn *)((int)local_2b2c + 1);
            } while ((int)local_2b2c < 10);
            local_2b2c = (Spawn *)0xffffffff;
            local_2b28 = (Spawn *)((int)&(local_2b3c->Spawn_data).offset_0x4 +
                                  local_2b98._4_4_ * 10 + 2);
            do {
              uVar41 = (ulonglong)uVar8;
              pbVar42 = (byte *)&local_2b44;
              fVar38 = local_2b70;
              piVar16 = FUN_00402990(local_978,2,1,&(local_2b2c->Spawn_data).field_0x1);
              FUN_00513400(piVar9,(int)local_2b28,(int)local_2b40,iVar5,piVar16,pbVar42,fVar38,
                           (int)uVar41,(byte)(uVar41 >> 0x20));
              local_2b40 = (Spawn *)((int)&local_2b40[-1].Spawn_data.offset_0xf70 + 3);
              local_2b2c = (Spawn *)((int)&local_2b2c->vftablePtr + 1);
            } while ((int)local_2b2c < 10);
          }
        }
        else {
LAB_005040da:
          iVar5 = (int)local_358._4_4_;
        }
        piVar16 = (int *)FUN_004013d0(&local_3a4,1);
        uVar7 = (int)local_2b64 - *piVar16 >> 0x1f;
        if (((int)local_2b64 - *piVar16 ^ uVar7) != uVar7) goto LAB_005044b2;
        pSVar1 = local_2b60->vftablePtr;
        uVar7 = local_2b98._4_4_ - (int)pSVar1 >> 0x1f;
        iVar30 = local_2b98._4_4_;
        if ((int)((local_2b98._4_4_ - (int)pSVar1 ^ uVar7) - uVar7) < 2) goto LAB_005044b8;
        if (local_2b98._4_4_ < (int)pSVar1) {
          local_2b40 = (Spawn *)(local_2b9c + -1);
          local_2b2c = (Spawn *)0xffffffff;
          local_2b24 = local_2b40;
          do {
            uVar41 = (ulonglong)uVar8;
            pbVar42 = (byte *)&local_2b44;
            fVar38 = local_2b70;
            piVar16 = FUN_00402990(local_810,1,0xe,(int)local_2b2c + 3);
            FUN_00513400(piVar9,(int)local_2b40,(int)local_2b34,iVar5,piVar16,pbVar42,fVar38,
                         (int)uVar41,(byte)(uVar41 >> 0x20));
            local_2b40 = (Spawn *)((int)&local_2b40->vftablePtr + 1);
            local_2b2c = (Spawn *)((int)local_2b2c + 1);
          } while ((int)local_2b2c < 10);
          local_2b2c = (Spawn *)0xffffffff;
          local_2b40 = local_2b24;
          do {
            uVar41 = (ulonglong)uVar8;
            pbVar42 = (byte *)&local_2b44;
            fVar38 = local_2b70;
            piVar16 = FUN_00402990(local_a8c,1,2,(int)local_2b2c + 5);
            FUN_00513400(piVar9,(int)local_2b40,(int)local_2b34,iVar5,piVar16,pbVar42,fVar38,
                         (int)uVar41,(byte)(uVar41 >> 0x20));
            local_2b40 = (Spawn *)((int)&local_2b40->vftablePtr + 1);
            local_2b2c = (Spawn *)((int)local_2b2c + 1);
          } while ((int)local_2b2c < 10);
          local_2b2c = (Spawn *)0xffffffff;
          local_2b28 = (Spawn *)((int)&(local_2b38->Spawn_data).offset_0x4 +
                                (int)local_2b64 * 10 + 2);
          do {
            uVar41 = (ulonglong)uVar8;
            pbVar42 = (byte *)&local_2b44;
            fVar38 = local_2b70;
            piVar16 = FUN_00402990(local_828,1,2,&(local_2b2c->Spawn_data).field_0x1);
            FUN_00513400(piVar9,(int)local_2b24,(int)local_2b28,iVar5,piVar16,pbVar42,fVar38,
                         (int)uVar41,(byte)(uVar41 >> 0x20));
            local_2b24 = (Spawn *)((int)&local_2b24->vftablePtr + 1);
            local_2b2c = (Spawn *)((int)&local_2b2c->vftablePtr + 1);
          } while ((int)local_2b2c < 10);
          local_2b64 = (Spawn *)((int)&local_2b64->vftablePtr + 1);
          iVar30 = local_2b98._4_4_;
          iVar5 = local_2bd0.Dungeon_data.offset_0xc;
          iVar6 = local_2bd0.Dungeon_data.offset_0x8;
        }
        else {
          if (local_2b98._4_4_ <= (int)pSVar1) goto LAB_005044b8;
          local_2b40 = (Spawn *)(local_2b9c + 10);
          local_2b2c = (Spawn *)0xffffffff;
          local_2b24 = local_2b40;
          do {
            uVar41 = (ulonglong)uVar8;
            pbVar42 = (byte *)&local_2b44;
            fVar38 = local_2b70;
            piVar16 = FUN_00402990(local_990,1,0xe,(int)local_2b2c + 3);
            FUN_00513400(piVar9,(int)local_2b40,(int)local_2b34,iVar5,piVar16,pbVar42,fVar38,
                         (int)uVar41,(byte)(uVar41 >> 0x20));
            local_2b40 = (Spawn *)((int)&local_2b40[-1].Spawn_data.offset_0xf70 + 3);
            local_2b2c = (Spawn *)((int)local_2b2c + 1);
          } while ((int)local_2b2c < 10);
          local_2b2c = (Spawn *)0xffffffff;
          local_2b40 = local_2b24;
          do {
            uVar41 = (ulonglong)uVar8;
            pbVar42 = (byte *)&local_2b44;
            fVar38 = local_2b70;
            piVar16 = FUN_00402990(local_840,1,2,(int)local_2b2c + 5);
            FUN_00513400(piVar9,(int)local_2b40,(int)local_2b34,iVar5,piVar16,pbVar42,fVar38,
                         (int)uVar41,(byte)(uVar41 >> 0x20));
            local_2b40 = (Spawn *)((int)&local_2b40[-1].Spawn_data.offset_0xf70 + 3);
            local_2b2c = (Spawn *)((int)local_2b2c + 1);
          } while ((int)local_2b2c < 10);
          local_2b2c = (Spawn *)0xffffffff;
          local_2b28 = (Spawn *)((int)&(local_2b38->Spawn_data).offset_0x4 +
                                (int)local_2b64 * 10 + 2);
          do {
            uVar41 = (ulonglong)uVar8;
            pbVar42 = (byte *)&local_2b44;
            fVar38 = local_2b70;
            piVar16 = FUN_00402990(local_a44,1,2,&(local_2b2c->Spawn_data).field_0x1);
            FUN_00513400(piVar9,(int)local_2b24,(int)local_2b28,iVar5,piVar16,pbVar42,fVar38,
                         (int)uVar41,(byte)(uVar41 >> 0x20));
            local_2b24 = (Spawn *)((int)&local_2b24[-1].Spawn_data.offset_0xf70 + 3);
            local_2b2c = (Spawn *)((int)&local_2b2c->vftablePtr + 1);
          } while ((int)local_2b2c < 10);
          local_2b64 = (Spawn *)((int)&local_2b64->vftablePtr + 1);
          iVar30 = local_2b98._4_4_;
          iVar5 = local_2bd0.Dungeon_data.offset_0xc;
          iVar6 = local_2bd0.Dungeon_data.offset_0x8;
        }
      }
    }
    iVar30 = iVar30 + 1;
    local_2b98 = (double)CONCAT44(iVar30,(uint)local_2b98);
  }
  uVar7 = local_2b68;
  if (local_2b8c == 5) {
    iVar30 = FUN_0052d840((int)&local_2bd0);
    local_2b24 = (Spawn *)(iVar30 * 10);
    iVar30 = FUN_0052d820((int)&local_2bd0);
    local_2b2c = (Spawn *)((iVar30 * 10) / 2);
    FUN_00421e30(local_3ac,(undefined1 *)((int)local_2b3c + (int)local_2b2c + -5),
                 (undefined1 *)((int)local_2b38 + (int)local_2b24 / 2 + -5));
    uVar7 = local_2b68;
    pSVar34 = (Spawn *)((int)&local_2b3c->vftablePtr + iVar30 * 10);
    local_2b34 = local_2b3c;
    local_2b78 = pSVar34;
    if ((int)local_2b3c < (int)pSVar34) {
      puVar10 = (undefined1 *)((int)&local_2b38->vftablePtr + (int)local_2b24);
      do {
        local_2b60 = local_2b38;
        pSVar27 = local_2b38;
        if ((int)local_2b38 < (int)puVar10) {
          do {
            local_2b60 = pSVar27;
            iVar30 = FUN_00406100(piVar9,(uint)local_2b34,(uint)pSVar27,uVar7);
            if (iVar30 != 0) {
              iVar5 = FUN_004061d0(iVar30);
              piVar9 = (int *)FUN_004013d0(local_3ac,1);
              uVar8 = (int)pSVar27 - *piVar9 >> 0x1f;
              iVar30 = ((int)pSVar27 - *piVar9 ^ uVar8) - uVar8;
              piVar9 = (int *)FUN_004013d0(local_3ac,0);
              uVar8 = (int)local_2b34 - *piVar9 >> 0x1f;
              iVar6 = ((int)local_2b34 - *piVar9 ^ uVar8) - uVar8;
              if (iVar30 < iVar6) {
                iVar30 = iVar6;
              }
              piVar9 = (int *)FUN_004013d0(&local_39c,2);
              uVar41 = (ulonglong)uVar7;
              pbVar42 = (byte *)&local_2b44;
              fVar38 = local_2b70;
              piVar16 = FUN_00402990(local_858,1,1,
                                     local_2b58 +
                                     (((*piVar9 * 10 - iVar30) + -0x33 + (int)local_2b2c) - iVar5));
              pSVar27 = local_2b60;
              piVar9 = local_2b74;
              FUN_00513400(local_2b74,(int)local_2b34,(int)local_2b60,iVar5,piVar16,pbVar42,fVar38,
                           (int)uVar41,(byte)(uVar41 >> 0x20));
            }
            puVar10 = (undefined1 *)((int)&local_2b38->vftablePtr + (int)local_2b24);
            pSVar27 = (Spawn *)((int)&pSVar27->vftablePtr + 1);
            pSVar34 = local_2b78;
            local_2b60 = pSVar27;
          } while ((int)pSVar27 < (int)puVar10);
        }
        local_2b34 = (Spawn *)((int)&local_2b34->vftablePtr + 1);
        pcVar35 = rand_exref;
      } while ((int)local_2b34 < (int)pSVar34);
    }
    pfVar17 = (float *)FUN_004013d0(local_3ac,0);
    pSVar34 = (Spawn *)*pfVar17;
    local_2b60 = pSVar34;
    pfVar17 = (float *)FUN_004013d0(local_3ac,1);
    local_2b2c = (Spawn *)*pfVar17;
    iVar30 = FUN_00406100(piVar9,(uint)pSVar34,(uint)local_2b2c,local_2b68);
    local_2b24 = (Spawn *)FUN_004061d0(iVar30);
    iVar30 = FUN_00406250(iVar30);
    uVar7 = local_2b68;
    local_2b24 = (Spawn *)((int)&local_2b24->vftablePtr + iVar30);
    puVar13 = FUN_00405fd0(piVar9,(uint)local_2b60,(uint)local_2b2c,(int)local_2b24,local_2b68);
    uVar18 = FUN_004061f0((int)puVar13);
    cVar33 = (char)uVar18;
    pSVar34 = local_2b24;
    while (cVar33 == '\0') {
      pSVar34 = (Spawn *)((int)&pSVar34[-1].Spawn_data.offset_0xf70 + 3);
      puVar13 = FUN_00405fd0(piVar9,(uint)local_2b60,(uint)local_2b2c,(int)pSVar34,uVar7);
      uVar18 = FUN_004061f0((int)puVar13);
      pcVar35 = rand_exref;
      cVar33 = (char)uVar18;
    }
  }
  FUN_004063b0((undefined4 *)((int)&local_344 + 4));
  local_8 = CONCAT31(local_8._1_3_,0xb);
  local_2b54 = 0;
  iVar30 = FUN_0052d820((int)&local_2bd0);
  uStack_364 = (double)CONCAT44(iVar30,(undefined4)uStack_364);
  if (0 < iVar30) {
    pSVar34 = (Spawn *)FUN_0052d840((int)&local_2bd0);
    uVar8 = 0;
    iVar30 = (int)uStack_364._4_4_;
    local_2b40 = pSVar34;
    do {
      local_2b50 = (char *)0x0;
      if (0 < (int)pSVar34) {
        pSVar34 = (Spawn *)FUN_0052d860((int)&local_2bd0);
        pSVar27 = local_2b40;
        local_2bb4 = pSVar34;
        do {
          local_2b4c = 0;
          if (0 < (int)pSVar34) {
            do {
              pcVar11 = local_2b50;
              local_2b64 = (Spawn *)FUN_004f84a0(&local_2bd0,local_2b54,(int)local_2b50,local_2b4c);
              if (*(char *)&local_2b64->vftablePtr == '\x03') {
LAB_005048cc:
                if ((local_2b8c == 0) || (local_2b8c == 3)) {
LAB_005048f3:
                  if (((local_2b8c == 4) || (local_2b8c == 2)) || (local_2b8c == 1)) {
LAB_00504906:
                    uVar18 = 1;
                  }
                  else {
                    uVar18 = 0;
                  }
                  uVar41 = CONCAT44(uVar18,uVar7);
                  piVar16 = FUN_00402990(local_9a8,10,10,10);
                  FUN_004d2500(piVar9,(int)((int)&local_2b3c->vftablePtr + local_2b54 * 10),
                               (int)((int)&local_2b38->vftablePtr + (int)local_2b50 * 10),
                               (int)(local_2b58 + local_2b4c * 10),piVar16,(int)uVar41,
                               (char)(uVar41 >> 0x20));
                }
                else {
                  if (local_2b8c == 4) goto LAB_00504906;
                  if (((local_2b8c == 5) || (local_2b8c == 2)) || (local_2b8c == 1))
                  goto LAB_005048f3;
                }
                if (*(char *)&local_2b64->vftablePtr == '\x04') {
                  FUN_004c84b0((int)local_23f8);
                  local_8 = CONCAT31(local_8._1_3_,0xb);
                  FUN_004cd8f0((int)local_23f8);
                }
                if ((((local_2b8c == 0) || (local_2b8c == 3)) || (local_2b8c == 1)) &&
                   ((*(char *)&local_2b64->vftablePtr != '\x04' &&
                    (((uint)local_2b64->vftablePtr & 0x100) == 0)))) {
                  uVar8 = (*pcVar35)();
                  uVar8 = uVar8 & 0x80000001;
                  bVar36 = uVar8 == 0;
                  if ((int)uVar8 < 0) {
                    bVar36 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if ((!bVar36) &&
                     (pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54,(int)(local_2b50 + -1),
                                             local_2b4c), *pcVar11 == '\0')) {
                    local_2b2c = (Spawn *)(local_2b58 + local_2b4c * 10 + 2);
                    local_2b60 = (Spawn *)((int)local_2b50 * 5);
                    local_2b24 = (Spawn *)(&(local_2b3c->Spawn_data).field_0x1 + local_2b54 * 10);
                    puVar13 = FUN_00405fd0(piVar9,(uint)local_2b24,
                                           (uint)((int)local_2b38 + (int)local_2b50 * 10 + -3),
                                           (int)local_2b2c,uVar7);
                    uVar18 = FUN_004061f0((int)puVar13);
                    pcVar35 = rand_exref;
                    if ((char)uVar18 == '\0') {
                      uVar41 = (ulonglong)uVar7;
                      piVar16 = FUN_00402990(local_870,2,2,4);
                      FUN_004d2500(piVar9,(int)((int)&local_2b24[-1].Spawn_data.offset_0xf70 + 3),
                                   (int)((int)local_2b38 + (int)local_2b60 * 2 + -2),(int)local_2b2c
                                   ,piVar16,(int)uVar41,(char)(uVar41 >> 0x20));
                      FUN_004c84b0((int)local_19c8);
                      local_8._0_1_ = 0xd;
                      local_19c8[0] = (void *)0x4;
                      puVar19 = FUN_00401080(local_abc,0x40000000,0x3e4ccccd,0x40800000);
                      uVar46 = 0x504aef;
                      FUN_00401060(local_19a4,puVar19);
                      local_19a8 = 0;
                      uVar43 = 0x504b09;
                      pSVar34 = local_2b2c;
                      FUN_004cde40(&stack0xffffd360,(uint)local_2b2c);
                      puVar10 = (undefined1 *)((int)local_2b60 * 2 + -1 + (int)local_2b38);
                      uVar18 = 0x504b27;
                      FUN_004cde40(&stack0xffffd358,(uint)puVar10);
                      FUN_004cde40(&stack0xffffd350,(uint)local_2b24);
                      puVar19 = FUN_00406380(local_f40,uVar18,puVar10,uVar43,pSVar34,uVar46,puVar19)
                      ;
                      FUN_00402a40(local_19c0,puVar19);
                      FUN_004d6670((void *)(uVar7 + 0xc),local_19c8);
                      local_8 = CONCAT31(local_8._1_3_,0xb);
                      FUN_004cd8f0((int)local_19c8);
                    }
                  }
                  uVar8 = (*pcVar35)();
                  uVar8 = uVar8 & 0x80000001;
                  bVar36 = uVar8 == 0;
                  if ((int)uVar8 < 0) {
                    bVar36 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (!bVar36) {
                    local_2b28 = (Spawn *)(local_2b50 + 1);
                    pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54,(int)local_2b28,local_2b4c);
                    if (*pcVar11 == '\0') {
                      local_2b2c = (Spawn *)(local_2b58 + local_2b4c * 10 + 2);
                      local_2b60 = (Spawn *)((int)&local_2b38->vftablePtr + (int)local_2b28 * 10);
                      local_2b24 = (Spawn *)(&(local_2b3c->Spawn_data).field_0x1 + local_2b54 * 10);
                      puVar13 = FUN_00405fd0(piVar9,(uint)local_2b24,
                                             (uint)((int)&local_2b60->vftablePtr + 3),
                                             (int)local_2b2c,uVar7);
                      uVar18 = FUN_004061f0((int)puVar13);
                      pcVar35 = rand_exref;
                      if ((char)uVar18 == '\0') {
                        uVar41 = (ulonglong)uVar7;
                        piVar16 = FUN_00402990(local_888,2,2,4);
                        FUN_004d2500(piVar9,(int)((int)&local_2b24[-1].Spawn_data.offset_0xf70 + 3),
                                     (int)local_2b60,(int)local_2b2c,piVar16,(int)uVar41,
                                     (char)(uVar41 >> 0x20));
                        FUN_004c84b0((int)local_1cd8);
                        local_8._0_1_ = 0xe;
                        local_1cd8[0] = (void *)0x4;
                        puVar19 = FUN_00401080(local_9c0,0x40000000,0x3e4ccccd,0x40800000);
                        uVar46 = 0x504c9f;
                        FUN_00401060(local_1cb4,puVar19);
                        local_1cb8 = 2;
                        uVar43 = 0x504cb9;
                        pSVar34 = local_2b2c;
                        FUN_004cde40(&stack0xffffd360,(uint)local_2b2c);
                        puVar10 = (undefined1 *)((int)&local_2b60->vftablePtr + 1);
                        uVar18 = 0x504ccb;
                        FUN_004cde40(&stack0xffffd358,(uint)puVar10);
                        FUN_004cde40(&stack0xffffd350,(uint)local_2b24);
                        puVar19 = FUN_00406380(local_fe8,uVar18,puVar10,uVar43,pSVar34,uVar46,
                                               puVar19);
                        FUN_00402a40(local_1cd0,puVar19);
                        FUN_004d6670((void *)(uVar7 + 0xc),local_1cd8);
                        local_8 = CONCAT31(local_8._1_3_,0xb);
                        FUN_004cd8f0((int)local_1cd8);
                      }
                    }
                  }
                  uVar8 = (*pcVar35)();
                  uVar8 = uVar8 & 0x80000001;
                  bVar36 = uVar8 == 0;
                  if ((int)uVar8 < 0) {
                    bVar36 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if ((!bVar36) &&
                     (pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54 - 1,(int)local_2b50,local_2b4c),
                     *pcVar11 == '\0')) {
                    local_2b2c = (Spawn *)(local_2b58 + local_2b4c * 10 + 2);
                    local_2b60 = (Spawn *)(&(local_2b38->Spawn_data).field_0x1 +
                                          (int)local_2b50 * 10);
                    local_2b78 = (Spawn *)(local_2b54 * 5);
                    puVar13 = FUN_00405fd0(piVar9,(uint)(local_2b54 * 10 + -3 + (int)local_2b3c),
                                           (uint)local_2b60,(int)local_2b2c,uVar7);
                    uVar18 = FUN_004061f0((int)puVar13);
                    if ((char)uVar18 == '\0') {
                      uVar41 = (ulonglong)uVar7;
                      piVar16 = FUN_00402990(local_8a0,2,2,4);
                      FUN_004d2500(piVar9,(int)((int)local_2b3c + (int)local_2b78 * 2 + -2),
                                   (int)((int)&local_2b60[-1].Spawn_data.offset_0xf70 + 3),
                                   (int)local_2b2c,piVar16,(int)uVar41,(char)(uVar41 >> 0x20));
                      FUN_004c84b0((int)local_1b50);
                      local_8._0_1_ = 0xf;
                      local_1b50[0] = (void *)0x4;
                      puVar19 = FUN_00401080(local_a5c,0x40000000,0x3e4ccccd,0x40800000);
                      uVar46 = 0x504e3f;
                      FUN_00401060(local_1b2c,puVar19);
                      local_1b30 = 3;
                      uVar43 = 0x504e59;
                      pSVar27 = local_2b2c;
                      FUN_004cde40(&stack0xffffd360,(uint)local_2b2c);
                      uVar18 = 0x504e69;
                      pSVar34 = local_2b60;
                      FUN_004cde40(&stack0xffffd358,(uint)local_2b60);
                      FUN_004cde40(&stack0xffffd350,
                                   (uint)((int)local_2b78 * 2 + -1 + (int)local_2b3c));
                      puVar19 = FUN_00406380(local_f70,uVar18,pSVar34,uVar43,pSVar27,uVar46,puVar19)
                      ;
                      FUN_00402a40(local_1b48,puVar19);
                      FUN_004d6670((void *)(uVar7 + 0xc),local_1b50);
                      local_8 = CONCAT31(local_8._1_3_,0xb);
                      FUN_004cd8f0((int)local_1b50);
                    }
                  }
                  uVar8 = (*pcVar35)();
                  uVar8 = uVar8 & 0x80000001;
                  bVar36 = uVar8 == 0;
                  if ((int)uVar8 < 0) {
                    bVar36 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (!bVar36) {
                    local_2b28 = (Spawn *)(local_2b54 + 1);
                    pcVar11 = FUN_004f84a0(&local_2bd0,(int)local_2b28,(int)local_2b50,local_2b4c);
                    if (*pcVar11 == '\0') {
                      local_2b2c = (Spawn *)(local_2b58 + local_2b4c * 10 + 2);
                      local_2b60 = (Spawn *)(&(local_2b38->Spawn_data).field_0x1 +
                                            (int)local_2b50 * 10);
                      local_2b78 = (Spawn *)((int)&local_2b3c->vftablePtr + (int)local_2b28 * 10);
                      puVar13 = FUN_00405fd0(piVar9,(int)local_2b78 + 3,(uint)local_2b60,
                                             (int)local_2b2c,uVar7);
                      uVar18 = FUN_004061f0((int)puVar13);
                      pcVar35 = rand_exref;
                      if ((char)uVar18 == '\0') {
                        uVar41 = (ulonglong)uVar7;
                        piVar16 = FUN_00402990(local_8b8,2,2,4);
                        FUN_004d2500(piVar9,(int)local_2b78,
                                     (int)((int)&local_2b60[-1].Spawn_data.offset_0xf70 + 3),
                                     (int)local_2b2c,piVar16,(int)uVar41,(char)(uVar41 >> 0x20));
                        FUN_004c84b0((int)local_1840);
                        local_8._0_1_ = 0x10;
                        local_1840[0] = (void *)0x4;
                        puVar19 = FUN_00401080(local_9d8,0x40000000,0x3e4ccccd,0x40800000);
                        uVar46 = 0x504fe9;
                        FUN_00401060(local_181c,puVar19);
                        local_1820 = 1;
                        uVar43 = 0x505003;
                        pSVar27 = local_2b2c;
                        FUN_004cde40(&stack0xffffd360,(uint)local_2b2c);
                        uVar18 = 0x505013;
                        pSVar34 = local_2b60;
                        FUN_004cde40(&stack0xffffd358,(uint)local_2b60);
                        FUN_004cde40(&stack0xffffd350,(int)local_2b78 + 1);
                        puVar19 = FUN_00406380(local_1018,uVar18,pSVar34,uVar43,pSVar27,uVar46,
                                               puVar19);
                        FUN_00402a40(local_1838,puVar19);
                        FUN_004d6670((void *)(uVar7 + 0xc),local_1840);
                        local_8 = CONCAT31(local_8._1_3_,0xb);
                        FUN_004cd8f0((int)local_1840);
                      }
                    }
                  }
                }
                if ((((((local_2b8c == 0) || (local_2b8c == 3)) || (local_2b8c == 4)) ||
                     ((local_2b8c == 5 || (local_2b8c == 2)))) || (local_2b8c == 1)) &&
                   (((uint)local_2b64->vftablePtr & 0x100) != 0)) {
                  local_2b2c = (Spawn *)(local_2b54 + 1);
                  pcVar11 = FUN_004f84a0(&local_2bd0,(int)local_2b2c,(int)local_2b50,local_2b4c);
                  if (((*pcVar11 != '\x03') &&
                      (pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54 - 1,(int)local_2b50,local_2b4c)
                      , *pcVar11 == '\x03')) &&
                     (pcVar11 = FUN_004f84a0(&local_2bd0,(int)local_2b2c,(int)local_2b50,
                                             local_2b4c + 1), *pcVar11 == '\x03')) {
                    iVar30 = 0xb;
                    local_2b28 = (Spawn *)((int)&local_2b38->vftablePtr + (int)local_2b50 * 10);
                    local_2b34 = (Spawn *)(local_2b54 * 10 + -1 + (int)local_2b3c);
                    local_2b24 = (Spawn *)(local_2b58 + local_2b4c * 10 + -1);
                    do {
                      uVar41 = (ulonglong)uVar7;
                      pbVar42 = (byte *)&local_2bac;
                      fVar38 = local_2b70;
                      piVar16 = FUN_00402990(local_8d0,iVar30,10,1);
                      FUN_00513400(piVar9,(int)local_2b34,(int)local_2b28,(int)local_2b24,piVar16,
                                   pbVar42,fVar38,(int)uVar41,(byte)(uVar41 >> 0x20));
                      local_2b24 = (Spawn *)((int)&local_2b24->vftablePtr + 1);
                      local_2b34 = (Spawn *)((int)&local_2b34->vftablePtr + 1);
                      iVar30 = iVar30 + -1;
                      pcVar35 = rand_exref;
                    } while (0 < iVar30);
                  }
                  local_2b28 = (Spawn *)(local_2b54 - 1);
                  pcVar11 = FUN_004f84a0(&local_2bd0,(int)local_2b28,(int)local_2b50,local_2b4c);
                  if (((*pcVar11 != '\x03') &&
                      (pcVar11 = FUN_004f84a0(&local_2bd0,(int)local_2b2c,(int)local_2b50,local_2b4c
                                             ), *pcVar11 == '\x03')) &&
                     (pcVar11 = FUN_004f84a0(&local_2bd0,(int)local_2b28,(int)local_2b50,
                                             local_2b4c + 1), *pcVar11 == '\x03')) {
                    iVar30 = 0xb;
                    local_2b28 = (Spawn *)((int)&local_2b38->vftablePtr + (int)local_2b50 * 10);
                    local_2b2c = (Spawn *)((int)&local_2b3c->vftablePtr + local_2b54 * 10);
                    local_2b24 = (Spawn *)(local_2b58 + local_2b4c * 10 + -1);
                    do {
                      uVar41 = (ulonglong)uVar7;
                      pbVar42 = (byte *)&local_2bac;
                      fVar38 = local_2b70;
                      piVar16 = FUN_00402990(local_aa4,iVar30,10,1);
                      FUN_00513400(piVar9,(int)local_2b2c,(int)local_2b28,(int)local_2b24,piVar16,
                                   pbVar42,fVar38,(int)uVar41,(byte)(uVar41 >> 0x20));
                      local_2b24 = (Spawn *)((int)&local_2b24->vftablePtr + 1);
                      iVar30 = iVar30 + -1;
                      pcVar35 = rand_exref;
                    } while (0 < iVar30);
                  }
                  local_2b2c = (Spawn *)(local_2b50 + 1);
                  pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54,(int)local_2b2c,local_2b4c);
                  if (((*pcVar11 != '\x03') &&
                      (pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54,(int)(local_2b50 + -1),
                                              local_2b4c), *pcVar11 == '\x03')) &&
                     (pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54,(int)local_2b2c,local_2b4c + 1),
                     *pcVar11 == '\x03')) {
                    iVar30 = 0xb;
                    local_2b28 = (Spawn *)((int)&local_2b3c->vftablePtr + local_2b54 * 10);
                    local_2b34 = (Spawn *)((int)local_2b50 * 10 + -1 + (int)local_2b38);
                    local_2b24 = (Spawn *)(local_2b58 + local_2b4c * 10 + -1);
                    do {
                      uVar41 = (ulonglong)uVar7;
                      pbVar42 = (byte *)&local_2bac;
                      fVar38 = local_2b70;
                      piVar16 = FUN_00402990(local_8e8,10,iVar30,1);
                      FUN_00513400(piVar9,(int)local_2b28,(int)local_2b34,(int)local_2b24,piVar16,
                                   pbVar42,fVar38,(int)uVar41,(byte)(uVar41 >> 0x20));
                      local_2b24 = (Spawn *)((int)&local_2b24->vftablePtr + 1);
                      local_2b34 = (Spawn *)((int)&local_2b34->vftablePtr + 1);
                      iVar30 = iVar30 + -1;
                      pcVar35 = rand_exref;
                    } while (0 < iVar30);
                  }
                  local_2b28 = (Spawn *)(local_2b50 + -1);
                  pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54,(int)local_2b28,local_2b4c);
                  if (((*pcVar11 != '\x03') &&
                      (pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54,(int)local_2b2c,local_2b4c),
                      *pcVar11 == '\x03')) &&
                     (pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54,(int)local_2b28,local_2b4c + 1),
                     *pcVar11 == '\x03')) {
                    iVar30 = 0xb;
                    local_2b28 = (Spawn *)((int)&local_2b38->vftablePtr + (int)local_2b50 * 10);
                    local_2b2c = (Spawn *)((int)&local_2b3c->vftablePtr + local_2b54 * 10);
                    local_2b24 = (Spawn *)(local_2b58 + local_2b4c * 10 + -1);
                    do {
                      uVar41 = (ulonglong)uVar7;
                      pbVar42 = (byte *)&local_2bac;
                      fVar38 = local_2b70;
                      piVar16 = FUN_00402990(local_9f0,10,iVar30,1);
                      FUN_00513400(piVar9,(int)local_2b2c,(int)local_2b28,(int)local_2b24,piVar16,
                                   pbVar42,fVar38,(int)uVar41,(byte)(uVar41 >> 0x20));
                      local_2b24 = (Spawn *)((int)&local_2b24->vftablePtr + 1);
                      iVar30 = iVar30 + -1;
                      pcVar35 = rand_exref;
                    } while (0 < iVar30);
                  }
                }
                if ((local_2b8c != 4) || (*(char *)&local_2b64->vftablePtr != '\x04')) {
                  pcVar11 = local_2b50;
                  pcVar15 = FUN_004f84a0(&local_2bd0,local_2b54,(int)local_2b50,local_2b4c - 1);
                  if (*pcVar15 == '\x03') goto LAB_00507401;
                  if ((((local_2b8c == 0) || (local_2b8c == 3)) || (local_2b8c == 4)) ||
                     (((local_2b8c == 5 || (local_2b8c == 2)) || (local_2b8c == 1)))) {
                    local_2b5c = (Spawn *)(local_2b58 + local_2b4c * 10);
                    uVar41 = (ulonglong)uVar7;
                    local_2b88 = (Spawn *)((int)&local_2b38->vftablePtr + (int)local_2b50 * 10);
                    local_2b48 = (Spawn *)((int)&local_2b3c->vftablePtr + local_2b54 * 10);
                    pbVar42 = (byte *)&local_2bac;
                    fVar38 = local_2b70;
                    piVar16 = FUN_00402990(local_900,10,10,1);
                    FUN_00513400(piVar9,(int)local_2b48,(int)local_2b88,(int)local_2b5c,piVar16,
                                 pbVar42,fVar38,(int)uVar41,(byte)(uVar41 >> 0x20));
                    pcVar11 = (char *)uVar41;
                    if (((local_2b8c == 0) || (local_2b8c == 3)) &&
                       (((uint)local_2b64->vftablePtr & 0x200) != 0)) {
                      local_2b24 = (Spawn *)((int)&(local_2b48->Spawn_data).offset_0x4 + 2);
                      local_2b34 = (Spawn *)((int)local_2b88 + 10);
                      local_2b81 = '\0';
                      local_2b69 = '\0';
                      local_2bd1 = '\0';
                      local_2ba5 = '\0';
                      puVar10 = FUN_004f84a0(&local_2bd0,local_2b54 - 1,(int)local_2b50,local_2b4c);
                      if ((puVar10[1] & 2) == 0) {
                        local_2b48 = (Spawn *)((int)&local_2b48->vftablePtr + 2);
                        local_2b81 = '\x01';
                      }
                      puVar10 = FUN_004f84a0(&local_2bd0,local_2b54 + 1,(int)local_2b50,local_2b4c);
                      if ((puVar10[1] & 2) == 0) {
                        local_2b24 = (Spawn *)((int)&local_2b24[-1].Spawn_data.offset_0xf70 + 2);
                        local_2b69 = '\x01';
                      }
                      puVar10 = FUN_004f84a0(&local_2bd0,local_2b54,(int)(local_2b50 + -1),
                                             local_2b4c);
                      if ((puVar10[1] & 2) == 0) {
                        local_2b88 = (Spawn *)((int)local_2b88 + 2);
                        local_2bd1 = '\x01';
                      }
                      puVar10 = FUN_004f84a0(&local_2bd0,local_2b54,(int)(local_2b50 + 1),local_2b4c
                                            );
                      if ((puVar10[1] & 2) == 0) {
                        local_2b34 = (Spawn *)((int)&local_2b34[-1].Spawn_data.offset_0xf70 + 2);
                        local_2ba5 = '\x01';
                      }
                      local_2b2c = (Spawn *)((int)local_2b34 - (int)local_2b88);
                      local_2b60 = (Spawn *)((int)local_2b24 - (int)local_2b48);
                      pcVar11 = (char *)&local_2b90;
                      uVar8 = uVar7;
                      piVar16 = FUN_00402990(local_a74,local_2b60,local_2b2c,1);
                      FUN_004ff340(piVar9,(int)local_2b48,(int)local_2b88,(int)local_2b5c,piVar16,
                                   (undefined3 *)pcVar11,uVar8);
                      if (local_2b81 != '\0') {
                        pcVar11 = &local_2bdc;
                        uVar8 = uVar7;
                        piVar16 = FUN_00402990(local_918,1,local_2b2c,1);
                        FUN_004ff340(piVar9,(int)local_2b48,(int)local_2b88,(int)local_2b5c,piVar16,
                                     (undefined3 *)pcVar11,uVar8);
                      }
                      if (local_2b69 != '\0') {
                        pcVar11 = &local_2bdc;
                        uVar8 = uVar7;
                        piVar16 = FUN_00402990(local_a08,1,local_2b2c,1);
                        FUN_004ff340(piVar9,(int)((int)&local_2b24[-1].Spawn_data.offset_0xf70 + 3),
                                     (int)local_2b88,(int)local_2b5c,piVar16,(undefined3 *)pcVar11,
                                     uVar8);
                      }
                      if (local_2bd1 != '\0') {
                        pcVar11 = &local_2bdc;
                        uVar8 = uVar7;
                        piVar16 = FUN_00402990(local_930,local_2b60,1,1);
                        FUN_004ff340(piVar9,(int)local_2b48,(int)local_2b88,(int)local_2b5c,piVar16,
                                     (undefined3 *)pcVar11,uVar8);
                      }
                      if (local_2ba5 != '\0') {
                        pcVar11 = &local_2bdc;
                        uVar8 = uVar7;
                        piVar16 = FUN_00402990(local_ad4,local_2b60,1,1);
                        FUN_004ff340(piVar9,(int)local_2b48,
                                     (int)((int)&local_2b34[-1].Spawn_data.offset_0xf70 + 3),
                                     (int)local_2b5c,piVar16,(undefined3 *)pcVar11,uVar8);
                      }
                    }
                  }
                  if (*(char *)&local_2b64->vftablePtr != '\x04') {
                    if (((uint)local_2b64->vftablePtr & 0x100) == 0) {
                      if ((param_6 == '\0') && (iVar30 = (*pcVar35)(), iVar30 % 0x28 == 0)) {
                        uVar46 = 0x50590a;
                        FUN_004c84b0((int)local_16b8);
                        puVar10 = local_2b58 + local_2b4c * 10 + 1;
                        local_8._0_1_ = 0x11;
                        uVar43 = 0x50592f;
                        FUN_004cde40(&stack0xffffd360,(uint)puVar10);
                        puVar25 = &(local_2b38->Spawn_data).field_0x1 + (int)local_2b50 * 10;
                        uVar18 = 0x505950;
                        FUN_004cde40(&stack0xffffd358,(uint)puVar25);
                        FUN_004cde40(&stack0xffffd350,
                                     (uint)(&(local_2b3c->Spawn_data).field_0x1 + local_2b54 * 10));
                        puVar19 = FUN_00406380(local_fa0,uVar18,puVar25,uVar43,puVar10,pcVar11,
                                               uVar46);
                        FUN_00402a40(local_16b0,puVar19);
                        puVar19 = FUN_00401080(local_948,0x41200000,0x41200000,0x41200000);
                        FUN_00401060(local_1694,puVar19);
                        local_1698 = (*pcVar35)();
                        local_1698 = local_1698 & 0x80000003;
                        if ((int)local_1698 < 0) {
                          local_1698 = (local_1698 - 1 | 0xfffffffc) + 1;
                        }
                        local_16b8[0] = (void *)0x7;
                        local_1684 = (*pcVar35)();
                        local_1684 = local_1684 % 4000;
                        FUN_004d6670((void *)(uVar7 + 0xc),local_16b8);
                        local_8 = CONCAT31(local_8._1_3_,0xb);
                        FUN_004cd8f0((int)local_16b8);
                      }
                      else {
                        local_2b78 = (Spawn *)(uVar7 + 0xc);
                        iVar30 = FUN_0041cb40((int *)local_2b78);
                        local_2b98 = (double)CONCAT44(iVar30,(uint)local_2b98);
                        local_2b34 = (Spawn *)(local_2b4c + 1);
                        pcVar11 = local_2b50;
                        pcVar15 = FUN_004f84a0(&local_2bd0,local_2b54,(int)local_2b50,
                                               (int)local_2b34);
                        cVar33 = FUN_00522820(pcVar15);
                        if (cVar33 != '\0') {
                          iVar30 = (*pcVar35)();
                          if (iVar30 % 3 == 0) {
                            if ((local_2b8c == 4) || (local_2b8c == 2)) {
                              FUN_004c83b0((int)local_2b20);
                              iVar30 = (*pcVar35)();
                              local_2afc = ((float)iVar30 / 32767.0) * 360.0;
                              uVar49 = 0x505aa8;
                              iVar30 = (*pcVar35)();
                              local_2b00 = ((float)iVar30 * 0.04) / 32767.0 + 0.08;
                              uVar46 = 0x505b04;
                              FUN_00402a10((ulonglong *)&stack0xffffd360);
                              uVar47 = 0x505b06;
                              iVar30 = (*pcVar35)();
                              uVar18 = 0x505b2c;
                              FUN_004cde40(&stack0xffffd358,
                                           (uint)((int)&local_2b38->vftablePtr +
                                                 (int)local_2b50 * 10 + 2 + iVar30 % 5));
                              uVar43 = 0x505b2e;
                              iVar30 = (*pcVar35)();
                              FUN_004cde40(&stack0xffffd350,
                                           (uint)((int)&local_2b3c->vftablePtr +
                                                 local_2b54 * 10 + 2 + iVar30 % 5));
                              puVar19 = FUN_00406380(local_1048,uVar18,uVar43,uVar46,uVar47,pcVar11,
                                                     uVar49);
                              FUN_00402a40(local_2b18,puVar19);
                              local_2b20[0] = 0x37;
                              FUN_00528450((void *)(uVar7 + 4),local_2b20);
                              goto LAB_00505b84;
                            }
LAB_00505b8f:
                            if (local_2b8c != 1) goto LAB_00506118;
                          }
                          else {
LAB_00505b84:
                            if (local_2b8c != 2) goto LAB_00505b8f;
                          }
                          iVar30 = (*pcVar35)();
                          if (iVar30 % 3 == 0) {
                            pcVar11 = local_2b50;
                            pcVar15 = FUN_004f84a0(&local_2bd0,local_2b54 - 1,(int)local_2b50,
                                                   local_2b4c);
                            cVar33 = FUN_00522820(pcVar15);
                            if (cVar33 != '\0') {
                              FUN_004c83b0((int)local_2ae0);
                              local_2abc = 0;
                              uVar47 = 0x505bef;
                              iVar30 = (*pcVar35)();
                              local_2b28 = (Spawn *)(((float)iVar30 * 0.05) / 32767.0 + 0.08);
                              uVar43 = 0x505c53;
                              local_2ac0 = local_2b28;
                              FUN_00402a10((ulonglong *)&stack0xffffd360);
                              uVar46 = 0x505c55;
                              iVar30 = (*pcVar35)();
                              puVar10 = (undefined1 *)
                                        ((int)&local_2b38->vftablePtr +
                                        (int)local_2b50 * 10 + 2 + iVar30 % 5);
                              uVar18 = 0x505c7b;
                              FUN_004cde40(&stack0xffffd358,(uint)puVar10);
                              FUN_00402a10((ulonglong *)&stack0xffffd350);
                              puVar19 = FUN_00406380(local_cd0,uVar18,puVar10,uVar43,uVar46,pcVar11,
                                                     uVar47);
                              FUN_00402a40(local_2ad8,puVar19);
                              uVar8 = (*pcVar35)();
                              uVar8 = uVar8 & 0x80000001;
                              if ((int)uVar8 < 0) {
                                uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
                              }
                              local_2ae0[0] = uVar8 + 0x39;
                              FUN_00528450((void *)(uVar7 + 4),local_2ae0);
                            }
                          }
                          iVar30 = (*pcVar35)();
                          if (iVar30 % 3 == 0) {
                            local_2b28 = (Spawn *)(local_2b54 + 1);
                            pcVar11 = local_2b50;
                            pcVar15 = FUN_004f84a0(&local_2bd0,(int)local_2b28,(int)local_2b50,
                                                   local_2b4c);
                            cVar33 = FUN_00522820(pcVar15);
                            if (cVar33 != '\0') {
                              FUN_004c83b0((int)local_2a60);
                              local_2a3c = 0x43340000;
                              uVar47 = 0x505d52;
                              iVar30 = (*pcVar35)();
                              local_2b2c = (Spawn *)(((float)iVar30 * 0.05) / 32767.0 + 0.08);
                              uVar43 = 0x505db6;
                              local_2a40 = local_2b2c;
                              FUN_00402a10((ulonglong *)&stack0xffffd360);
                              uVar46 = 0x505db8;
                              iVar30 = (*pcVar35)();
                              puVar10 = (undefined1 *)
                                        ((int)&local_2b38->vftablePtr +
                                        (int)local_2b50 * 10 + 2 + iVar30 % 5);
                              uVar18 = 0x505dde;
                              FUN_004cde40(&stack0xffffd358,(uint)puVar10);
                              FUN_00402a10((ulonglong *)&stack0xffffd350);
                              puVar19 = FUN_00406380(local_ce8,uVar18,puVar10,uVar43,uVar46,pcVar11,
                                                     uVar47);
                              FUN_00402a40(local_2a58,puVar19);
                              uVar8 = (*pcVar35)();
                              uVar8 = uVar8 & 0x80000001;
                              if ((int)uVar8 < 0) {
                                uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
                              }
                              local_2a60[0] = uVar8 + 0x39;
                              FUN_00528450((void *)(uVar7 + 4),local_2a60);
                            }
                          }
                          iVar30 = (*pcVar35)();
                          if (iVar30 % 3 == 0) {
                            local_2b28 = (Spawn *)(local_2b50 + 1);
                            pSVar34 = local_2b28;
                            pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54,(int)local_2b28,local_2b4c
                                                  );
                            cVar33 = FUN_00522820(pcVar11);
                            if (cVar33 != '\0') {
                              FUN_004c83b0((int)local_2a20);
                              local_29fc = 0x43870000;
                              uVar47 = 0x505eb5;
                              iVar30 = (*pcVar35)();
                              local_2b2c = (Spawn *)(((float)iVar30 * 0.05) / 32767.0 + 0.08);
                              fVar38 = (float)(int)(local_2b58 + (int)local_2b34 * 10) -
                                       (float)local_2b2c * 20.0;
                              uVar46 = 0x505f19;
                              local_2a00 = local_2b2c;
                              FUN_00402a10((ulonglong *)&stack0xffffd360);
                              uVar18 = 0x505f56;
                              FUN_00402a10((ulonglong *)&stack0xffffd358);
                              uVar43 = 0x505f58;
                              iVar30 = (*pcVar35)();
                              FUN_004cde40(&stack0xffffd350,
                                           (uint)((int)&local_2b3c->vftablePtr +
                                                 local_2b54 * 10 + 2 + iVar30 % 5));
                              puVar19 = FUN_00406380(local_d18,uVar18,uVar43,uVar46,fVar38,pSVar34,
                                                     uVar47);
                              FUN_00402a40(local_2a18,puVar19);
                              uVar8 = (*pcVar35)();
                              uVar8 = uVar8 & 0x80000001;
                              if ((int)uVar8 < 0) {
                                uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
                              }
                              local_2a20[0] = uVar8 + 0x39;
                              FUN_00528450((void *)(uVar7 + 4),local_2a20);
                            }
                          }
                          iVar30 = (*pcVar35)();
                          if (iVar30 % 3 == 0) {
                            pcVar11 = local_2b50 + -1;
                            pcVar15 = FUN_004f84a0(&local_2bd0,local_2b54,(int)pcVar11,local_2b4c);
                            cVar33 = FUN_00522820(pcVar15);
                            if (cVar33 != '\0') {
                              FUN_004c83b0((int)local_2aa0);
                              local_2a7c = 0x42b40000;
                              uVar47 = 0x506012;
                              iVar30 = (*pcVar35)();
                              local_2b28 = (Spawn *)(((float)iVar30 * 0.05) / 32767.0 + 0.08);
                              fVar38 = (float)(int)(local_2b58 + (int)local_2b34 * 10) -
                                       (float)local_2b28 * 20.0;
                              uVar46 = 0x506076;
                              local_2a80 = local_2b28;
                              FUN_00402a10((ulonglong *)&stack0xffffd360);
                              uVar18 = 0x5060b3;
                              FUN_00402a10((ulonglong *)&stack0xffffd358);
                              uVar43 = 0x5060b5;
                              iVar30 = (*pcVar35)();
                              FUN_004cde40(&stack0xffffd350,
                                           (uint)((int)&local_2b3c->vftablePtr +
                                                 local_2b54 * 10 + 2 + iVar30 % 5));
                              puVar19 = FUN_00406380(local_c58,uVar18,uVar43,uVar46,fVar38,pcVar11,
                                                     uVar47);
                              FUN_00402a40(local_2a98,puVar19);
                              uVar8 = (*pcVar35)();
                              uVar8 = uVar8 & 0x80000001;
                              if ((int)uVar8 < 0) {
                                uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
                              }
                              local_2aa0[0] = uVar8 + 0x39;
                              FUN_00528450((void *)(uVar7 + 4),local_2aa0);
                            }
                          }
                        }
LAB_00506118:
                        iVar30 = (*pcVar35)();
                        if (iVar30 % 3 == 0) {
                          uVar41 = CONCAT44(local_2b54 - 1,0x506149);
                          pcVar11 = local_2b50;
                          pcVar15 = FUN_004f84a0(&local_2bd0,local_2b54 - 1,(int)local_2b50,
                                                 local_2b4c);
                          cVar33 = FUN_00522820(pcVar15);
                          if (cVar33 != '\0') {
                            uVar18 = 0x50615a;
                            uVar8 = (*pcVar35)();
                            uVar8 = uVar8 & 0x80000001;
                            bVar36 = uVar8 == 0;
                            if ((int)uVar8 < 0) {
                              bVar36 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
                            }
                            if (!bVar36) {
                              uVar43 = 0x50618c;
                              FUN_004cde40(&stack0xffffd360,
                                           (uint)(local_2b58 + (local_2b4c * 5 + 1) * 2));
                              uVar46 = 0x50618e;
                              uVar7 = (*pcVar35)();
                              uVar7 = uVar7 & 0x80000003;
                              if ((int)uVar7 < 0) {
                                uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                              }
                              puVar10 = (undefined1 *)
                                        ((int)&local_2b38->vftablePtr +
                                        (int)local_2b50 * 10 + uVar7 + 3);
                              uVar47 = 0x5061ba;
                              FUN_004cde40(&stack0xffffd358,(uint)puVar10);
                              FUN_004dab30((ulonglong *)&stack0xffffd350);
                              FUN_00406380(local_710,uVar47,puVar10,uVar43,uVar46,pcVar11,uVar18);
                              piVar16 = local_2c38;
                              uVar7 = 1;
                              pvVar29 = (void *)FUN_004e2320(local_710,0);
                              puVar21 = (uint *)FUN_00405660(pvVar29,piVar16,uVar7);
                              uVar31 = local_2b68;
                              puVar22 = (uint *)FUN_004e2320(local_710,2);
                              uVar7 = puVar22[1];
                              uVar8 = *puVar22;
                              puVar22 = (uint *)FUN_004e2320(local_710,1);
                              uVar41 = CONCAT44(uVar8,puVar22[1]);
                              iVar30 = FUN_00406050(piVar9,*puVar21,puVar21[1],*puVar22,puVar22[1],
                                                    uVar8,uVar7,uVar31);
                              uVar18 = FUN_004061f0(iVar30);
                              uVar7 = local_2b68;
                              if ((char)uVar18 != '\0') {
                                uVar41 = CONCAT44(local_2b8c,local_1dd8);
                                piVar16 = FUN_0052c370(local_1dd8,local_2b8c,local_710,0x43870000);
                                uVar7 = local_2b68;
                                FUN_00528450((void *)(local_2b68 + 4),piVar16);
                              }
                            }
                            uVar8 = (*pcVar35)();
                            uVar8 = uVar8 & 0x80000007;
                            bVar36 = uVar8 == 0;
                            if ((int)uVar8 < 0) {
                              bVar36 = (uVar8 - 1 | 0xfffffff8) == 0xffffffff;
                            }
                            if (bVar36) {
                              uVar41 = 0x10f000506378;
                              pSVar34 = operator_new(0x10f0);
                              if (pSVar34 == (Spawn *)0x0) {
                                local_2b28 = (Spawn *)0x0;
                              }
                              else {
                                uVar41 = CONCAT44(0x506386,(int)uVar41);
                                local_2b28 = cube::Spawn::Spawn(pSVar34);
                              }
                              (local_2b28->Spawn_data).offset_0x24 = 6;
                              (local_2b28->Spawn_data).offset_0x28 = 0x8f;
                              (local_2b28->Spawn_data).offset_0x30 = local_2bb0;
                              (local_2b28->Spawn_data).offset_0xf54 = 0x41200000;
                              uVar18 = 0x5063d8;
                              local_2b24 = local_2b28;
                              FUN_004cde40(&stack0xffffd360,(uint)(local_2b58 + local_2b4c * 10 + 1)
                                          );
                              uVar43 = 0x5063da;
                              uVar8 = (*pcVar35)();
                              uVar8 = uVar8 & 0x80000003;
                              if ((int)uVar8 < 0) {
                                uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                              }
                              puVar10 = (undefined1 *)
                                        ((int)&local_2b38->vftablePtr +
                                        (int)local_2b50 * 10 + uVar8 + 3);
                              uVar46 = 0x506406;
                              FUN_004cde40(&stack0xffffd358,(uint)puVar10);
                              FUN_004cde40(&stack0xffffd350,
                                           (uint)((int)&local_2b3c->vftablePtr + local_2b54 * 10 + 1
                                                 ));
                              puVar19 = FUN_00406380(local_d48,uVar46,puVar10,uVar18,uVar43,
                                                     (int)uVar41,(int)(uVar41 >> 0x20));
                              FUN_00402a40(&(local_2b24->Spawn_data).field_0xc,puVar19);
                              (local_2b24->Spawn_data).offset_0x4 = 0x43160000;
                              FUN_004fdd80((int *)&(local_2b24->Spawn_data).offset_0xf68,
                                           (short)local_2bb0);
                              FUN_004f2be0((void *)(uVar7 + 0x18),&local_2b28);
                            }
                            else {
                              uVar50 = (uint)*(byte *)(uVar7 + 0x79);
                              uVar31 = 1;
                              uVar18 = 0x5062d0;
                              FUN_004cde40(&stack0xffffd358,(uint)(local_2b58 + local_2b4c * 10 + 1)
                                          );
                              uVar43 = 0x5062d2;
                              uVar8 = (*pcVar35)();
                              uVar8 = uVar8 & 0x80000003;
                              if ((int)uVar8 < 0) {
                                uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                              }
                              puVar10 = (undefined1 *)
                                        ((int)&local_2b38->vftablePtr +
                                        (int)local_2b50 * 10 + uVar8 + 3);
                              uVar46 = 0x5062fe;
                              FUN_004cde40(&stack0xffffd350,(uint)puVar10);
                              FUN_004dab30((ulonglong *)&stack0xffffd348);
                              puVar21 = FUN_00406380(local_c70,uVar46,puVar10,uVar18,uVar43,
                                                     (int)uVar41,(int)(uVar41 >> 0x20));
                              ppvVar20 = (void **)FUN_0052a830(local_2270,puVar21,uVar31,uVar50);
                              local_8._0_1_ = 0x12;
                              FUN_004d6670((void *)(uVar7 + 0xc),ppvVar20);
                              local_8 = CONCAT31(local_8._1_3_,0xb);
                              FUN_004cd8f0((int)local_2270);
                            }
                          }
                        }
                        iVar30 = (*pcVar35)();
                        if (iVar30 % 3 == 0) {
                          local_2b34 = (Spawn *)(local_2b54 + 1);
                          uVar41 = CONCAT44(local_2b34,0x5064ae);
                          pcVar11 = local_2b50;
                          pcVar15 = FUN_004f84a0(&local_2bd0,(int)local_2b34,(int)local_2b50,
                                                 local_2b4c);
                          cVar33 = FUN_00522820(pcVar15);
                          if (cVar33 != '\0') {
                            uVar18 = 0x5064bf;
                            uVar8 = (*pcVar35)();
                            uVar8 = uVar8 & 0x80000001;
                            bVar36 = uVar8 == 0;
                            if ((int)uVar8 < 0) {
                              bVar36 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
                            }
                            if (!bVar36) {
                              uVar43 = 0x5064f1;
                              FUN_004cde40(&stack0xffffd360,
                                           (uint)(local_2b58 + (local_2b4c * 5 + 1) * 2));
                              uVar46 = 0x5064f3;
                              uVar7 = (*pcVar35)();
                              uVar7 = uVar7 & 0x80000003;
                              if ((int)uVar7 < 0) {
                                uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                              }
                              puVar10 = (undefined1 *)
                                        ((int)&local_2b38->vftablePtr +
                                        (int)local_2b50 * 10 + uVar7 + 3);
                              uVar47 = 0x50651f;
                              FUN_004cde40(&stack0xffffd358,(uint)puVar10);
                              FUN_004dab30((ulonglong *)&stack0xffffd350);
                              FUN_00406380(local_728,uVar47,puVar10,uVar43,uVar46,pcVar11,uVar18);
                              piVar16 = local_2c30;
                              uVar7 = 1;
                              pvVar29 = (void *)FUN_004e2320(local_728,0);
                              puVar21 = (uint *)FUN_00405690(pvVar29,piVar16,uVar7);
                              uVar31 = local_2b68;
                              puVar22 = (uint *)FUN_004e2320(local_728,2);
                              uVar7 = puVar22[1];
                              uVar8 = *puVar22;
                              puVar22 = (uint *)FUN_004e2320(local_728,1);
                              uVar41 = CONCAT44(uVar8,puVar22[1]);
                              iVar30 = FUN_00406050(piVar9,*puVar21,puVar21[1],*puVar22,puVar22[1],
                                                    uVar8,uVar7,uVar31);
                              uVar18 = FUN_004061f0(iVar30);
                              uVar7 = local_2b68;
                              if ((char)uVar18 != '\0') {
                                uVar41 = CONCAT44(local_2b8c,local_1d98);
                                piVar16 = FUN_0052c370(local_1d98,local_2b8c,local_728,0x42b40000);
                                uVar7 = local_2b68;
                                FUN_00528450((void *)(local_2b68 + 4),piVar16);
                              }
                            }
                            uVar8 = (*pcVar35)();
                            uVar8 = uVar8 & 0x80000007;
                            bVar36 = uVar8 == 0;
                            if ((int)uVar8 < 0) {
                              bVar36 = (uVar8 - 1 | 0xfffffff8) == 0xffffffff;
                            }
                            if (bVar36) {
                              uVar41 = 0x10f0005066dd;
                              pSVar34 = operator_new(0x10f0);
                              if (pSVar34 == (Spawn *)0x0) {
                                local_2b28 = (Spawn *)0x0;
                              }
                              else {
                                uVar41 = CONCAT44(0x5066eb,(int)uVar41);
                                local_2b28 = cube::Spawn::Spawn(pSVar34);
                              }
                              (local_2b28->Spawn_data).offset_0x24 = 6;
                              (local_2b28->Spawn_data).offset_0x28 = 0x8f;
                              (local_2b28->Spawn_data).offset_0x30 = local_2bb0;
                              (local_2b28->Spawn_data).offset_0xf54 = 0x41200000;
                              uVar18 = 0x50673d;
                              local_2b24 = local_2b28;
                              FUN_004cde40(&stack0xffffd360,(uint)(local_2b58 + local_2b4c * 10 + 1)
                                          );
                              uVar43 = 0x50673f;
                              uVar8 = (*pcVar35)();
                              uVar8 = uVar8 & 0x80000003;
                              if ((int)uVar8 < 0) {
                                uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                              }
                              puVar10 = (undefined1 *)
                                        ((int)&local_2b38->vftablePtr +
                                        (int)local_2b50 * 10 + uVar8 + 3);
                              uVar46 = 0x50676b;
                              FUN_004cde40(&stack0xffffd358,(uint)puVar10);
                              FUN_004cde40(&stack0xffffd350,
                                           (uint)((int)local_2b34 * 10 + -1 + (int)local_2b3c));
                              puVar19 = FUN_00406380(local_c88,uVar46,puVar10,uVar18,uVar43,
                                                     (int)uVar41,(int)(uVar41 >> 0x20));
                              FUN_00402a40(&(local_2b24->Spawn_data).field_0xc,puVar19);
                              FUN_004fdd80((int *)&(local_2b24->Spawn_data).offset_0xf68,
                                           (short)local_2bb0);
                              (local_2b24->Spawn_data).offset_0x4 = 0x43160000;
                              FUN_004f2be0((void *)(uVar7 + 0x18),&local_2b28);
                            }
                            else {
                              uVar50 = (uint)*(byte *)(uVar7 + 0x79);
                              uVar31 = 3;
                              uVar18 = 0x506635;
                              FUN_004cde40(&stack0xffffd358,(uint)(local_2b58 + local_2b4c * 10 + 1)
                                          );
                              uVar43 = 0x506637;
                              uVar8 = (*pcVar35)();
                              uVar8 = uVar8 & 0x80000003;
                              if ((int)uVar8 < 0) {
                                uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                              }
                              puVar10 = (undefined1 *)
                                        ((int)&local_2b38->vftablePtr +
                                        (int)local_2b50 * 10 + uVar8 + 3);
                              uVar46 = 0x506663;
                              FUN_004cde40(&stack0xffffd350,(uint)puVar10);
                              FUN_004dab30((ulonglong *)&stack0xffffd348);
                              puVar21 = FUN_00406380(local_d78,uVar46,puVar10,uVar18,uVar43,
                                                     (int)uVar41,(int)(uVar41 >> 0x20));
                              ppvVar20 = (void **)FUN_0052a830(local_1f60,puVar21,uVar31,uVar50);
                              local_8._0_1_ = 0x13;
                              FUN_004d6670((void *)(uVar7 + 0xc),ppvVar20);
                              local_8 = CONCAT31(local_8._1_3_,0xb);
                              FUN_004cd8f0((int)local_1f60);
                            }
                          }
                        }
                        iVar30 = (*pcVar35)();
                        if (iVar30 % 3 == 0) {
                          pcVar11 = local_2b50 + -1;
                          piVar16 = (int *)0x506813;
                          uVar8 = local_2b54;
                          pcVar15 = FUN_004f84a0(&local_2bd0,local_2b54,(int)pcVar11,local_2b4c);
                          cVar33 = FUN_00522820(pcVar15);
                          if (cVar33 != '\0') {
                            uVar18 = 0x506824;
                            uVar31 = (*pcVar35)();
                            uVar31 = uVar31 & 0x80000001;
                            bVar36 = uVar31 == 0;
                            if ((int)uVar31 < 0) {
                              bVar36 = (uVar31 - 1 | 0xfffffffe) == 0xffffffff;
                            }
                            if (!bVar36) {
                              puVar10 = local_2b58 + local_2b4c * 10 + 2;
                              uVar47 = 0x506856;
                              FUN_004cde40(&stack0xffffd360,(uint)puVar10);
                              uVar43 = SUB84((double)(int)((int)&local_2b38->vftablePtr +
                                                          (int)local_2b50 * 10) + 0.5,0);
                              FUN_004dab30((ulonglong *)&stack0xffffd358);
                              uVar46 = 0x50688c;
                              uVar7 = (*pcVar35)();
                              uVar7 = uVar7 & 0x80000003;
                              if ((int)uVar7 < 0) {
                                uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                              }
                              FUN_004cde40(&stack0xffffd350,
                                           (uint)((int)&local_2b3c->vftablePtr +
                                                 local_2b54 * 10 + uVar7 + 3));
                              FUN_00406380(local_740,uVar43,uVar46,uVar47,puVar10,pcVar11,uVar18);
                              piVar16 = local_2c40;
                              uVar7 = 1;
                              pvVar29 = (void *)FUN_004e2320(local_740,1);
                              puVar21 = (uint *)FUN_00405660(pvVar29,piVar16,uVar7);
                              uVar50 = local_2b68;
                              puVar22 = (uint *)FUN_004e2320(local_740,2);
                              uVar7 = puVar22[1];
                              uVar8 = *puVar22;
                              piVar16 = (int *)puVar21[1];
                              uVar31 = *puVar21;
                              puVar21 = (uint *)FUN_004e2320(local_740,0);
                              iVar30 = FUN_00406050(piVar9,*puVar21,puVar21[1],uVar31,(uint)piVar16,
                                                    uVar8,uVar7,uVar50);
                              uVar18 = FUN_004061f0(iVar30);
                              uVar7 = local_2b68;
                              if ((char)uVar18 != '\0') {
                                piVar16 = local_1d58;
                                uVar8 = local_2b8c;
                                piVar24 = FUN_0052c370(piVar16,local_2b8c,local_740,0);
                                uVar7 = local_2b68;
                                FUN_00528450((void *)(local_2b68 + 4),piVar24);
                              }
                            }
                            uVar31 = (*pcVar35)();
                            uVar31 = uVar31 & 0x80000007;
                            bVar36 = uVar31 == 0;
                            if ((int)uVar31 < 0) {
                              bVar36 = (uVar31 - 1 | 0xfffffff8) == 0xffffffff;
                            }
                            if (bVar36) {
                              uVar41 = 0x10f000506a42;
                              pSVar34 = operator_new(0x10f0);
                              if (pSVar34 == (Spawn *)0x0) {
                                local_2b28 = (Spawn *)0x0;
                              }
                              else {
                                uVar41 = CONCAT44(0x506a50,(int)uVar41);
                                local_2b28 = cube::Spawn::Spawn(pSVar34);
                              }
                              (local_2b28->Spawn_data).offset_0x24 = 6;
                              (local_2b28->Spawn_data).offset_0x28 = 0x8f;
                              (local_2b28->Spawn_data).offset_0x30 = local_2bb0;
                              (local_2b28->Spawn_data).offset_0xf54 = 0x41200000;
                              puVar10 = local_2b58 + local_2b4c * 10 + 1;
                              uVar46 = 0x506aa2;
                              local_2b24 = local_2b28;
                              FUN_004cde40(&stack0xffffd360,(uint)puVar10);
                              uVar18 = 0x506ac3;
                              FUN_004cde40(&stack0xffffd358,
                                           (uint)((int)&local_2b38->vftablePtr +
                                                 (int)local_2b50 * 10 + 1));
                              uVar43 = 0x506ac5;
                              uVar8 = (*pcVar35)();
                              uVar8 = uVar8 & 0x80000003;
                              if ((int)uVar8 < 0) {
                                uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                              }
                              FUN_004cde40(&stack0xffffd350,
                                           (uint)((int)&local_2b3c->vftablePtr +
                                                 local_2b54 * 10 + uVar8 + 3));
                              puVar19 = FUN_00406380(local_cb8,uVar18,uVar43,uVar46,puVar10,
                                                     (int)uVar41,(int)(uVar41 >> 0x20));
                              FUN_00402a40(&(local_2b24->Spawn_data).field_0xc,puVar19);
                              FUN_004fdd80((int *)&(local_2b24->Spawn_data).offset_0xf68,
                                           (short)local_2bb0);
                              (local_2b24->Spawn_data).offset_0x4 = 0x43160000;
                              FUN_004f2be0((void *)(uVar7 + 0x18),&local_2b28);
                            }
                            else {
                              uVar51 = (uint)*(byte *)(uVar7 + 0x79);
                              uVar50 = 2;
                              puVar10 = local_2b58 + local_2b4c * 10 + 1;
                              uVar46 = 0x50699a;
                              FUN_004cde40(&stack0xffffd358,(uint)puVar10);
                              uVar18 = SUB84((double)(int)((int)&local_2b38->vftablePtr +
                                                          (int)local_2b50 * 10) + 0.5,0);
                              FUN_004dab30((ulonglong *)&stack0xffffd350);
                              uVar43 = 0x5069d0;
                              uVar31 = (*pcVar35)();
                              uVar31 = uVar31 & 0x80000003;
                              if ((int)uVar31 < 0) {
                                uVar31 = (uVar31 - 1 | 0xfffffffc) + 1;
                              }
                              FUN_004cde40(&stack0xffffd348,
                                           (uint)((int)&local_2b3c->vftablePtr +
                                                 local_2b54 * 10 + uVar31 + 3));
                              puVar21 = FUN_00406380(local_ca0,uVar18,uVar43,uVar46,puVar10,piVar16,
                                                     uVar8);
                              ppvVar20 = (void **)FUN_0052a830(local_20e8,puVar21,uVar50,uVar51);
                              local_8._0_1_ = 0x14;
                              FUN_004d6670((void *)(uVar7 + 0xc),ppvVar20);
                              local_8 = CONCAT31(local_8._1_3_,0xb);
                              FUN_004cd8f0((int)local_20e8);
                            }
                          }
                        }
                        iVar30 = (*pcVar35)();
                        if (iVar30 % 3 == 0) {
                          local_2b34 = (Spawn *)(local_2b50 + 1);
                          uVar18 = 0x506b7e;
                          pSVar34 = local_2b34;
                          uVar8 = local_2b54;
                          pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54,(int)local_2b34,local_2b4c);
                          cVar33 = FUN_00522820(pcVar11);
                          if (cVar33 != '\0') {
                            uVar43 = 0x506b8f;
                            uVar31 = (*pcVar35)();
                            uVar31 = uVar31 & 0x80000001;
                            bVar36 = uVar31 == 0;
                            if ((int)uVar31 < 0) {
                              bVar36 = (uVar31 - 1 | 0xfffffffe) == 0xffffffff;
                            }
                            if (bVar36) {
                              uVar31 = (*pcVar35)();
                              uVar31 = uVar31 & 0x80000007;
                              bVar36 = uVar31 == 0;
                              if ((int)uVar31 < 0) {
                                bVar36 = (uVar31 - 1 | 0xfffffff8) == 0xffffffff;
                              }
                              if (bVar36) {
                                uVar41 = 0x10f000506dae;
                                pSVar34 = operator_new(0x10f0);
                                if (pSVar34 == (Spawn *)0x0) {
                                  local_2b28 = (Spawn *)0x0;
                                }
                                else {
                                  uVar41 = CONCAT44(0x506dbc,(int)uVar41);
                                  local_2b28 = cube::Spawn::Spawn(pSVar34);
                                }
                                (local_2b28->Spawn_data).offset_0x24 = 6;
                                (local_2b28->Spawn_data).offset_0x28 = 0x8f;
                                (local_2b28->Spawn_data).offset_0x30 = local_2bb0;
                                (local_2b28->Spawn_data).offset_0xf54 = 0x41200000;
                                puVar10 = local_2b58 + local_2b4c * 10 + 1;
                                uVar46 = 0x506e0e;
                                local_2b24 = local_2b28;
                                FUN_004cde40(&stack0xffffd360,(uint)puVar10);
                                uVar18 = 0x506e2f;
                                FUN_004cde40(&stack0xffffd358,
                                             (uint)((int)local_2b34 * 10 + -1 + (int)local_2b38));
                                uVar43 = 0x506e31;
                                uVar8 = (*pcVar35)();
                                uVar8 = uVar8 & 0x80000003;
                                if ((int)uVar8 < 0) {
                                  uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                                }
                                FUN_004cde40(&stack0xffffd350,
                                             (uint)((int)&local_2b3c->vftablePtr +
                                                   local_2b54 * 10 + uVar8 + 3));
                                puVar19 = FUN_00406380(local_e08,uVar18,uVar43,uVar46,puVar10,
                                                       (int)uVar41,(int)(uVar41 >> 0x20));
                                FUN_00402a40(&(local_2b24->Spawn_data).field_0xc,puVar19);
                                FUN_004fdd80((int *)&(local_2b24->Spawn_data).offset_0xf68,
                                             (short)local_2bb0);
                                (local_2b24->Spawn_data).offset_0x4 = 0x43160000;
                                FUN_004f2be0((void *)(uVar7 + 0x18),&local_2b28);
                              }
                              else {
                                uVar41 = (ulonglong)*(byte *)(uVar7 + 0x79) << 0x20;
                                puVar10 = local_2b58 + local_2b4c * 10 + 1;
                                uVar47 = 0x506d06;
                                FUN_004cde40(&stack0xffffd358,(uint)puVar10);
                                uVar43 = SUB84((double)(int)((int)&local_2b38->vftablePtr +
                                                            (int)local_2b34 * 10) - 0.5,0);
                                FUN_004dab30((ulonglong *)&stack0xffffd350);
                                uVar46 = 0x506d3c;
                                uVar31 = (*pcVar35)();
                                uVar31 = uVar31 & 0x80000003;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffffc) + 1;
                                }
                                FUN_004cde40(&stack0xffffd348,
                                             (uint)((int)&local_2b3c->vftablePtr +
                                                   local_2b54 * 10 + uVar31 + 3));
                                puVar21 = FUN_00406380(local_dd8,uVar43,uVar46,uVar47,puVar10,uVar18
                                                       ,uVar8);
                                ppvVar20 = (void **)FUN_0052a830(local_2580,puVar21,(uint)uVar41,
                                                                 (int)(uVar41 >> 0x20));
                                local_8._0_1_ = 0x15;
                                FUN_004d6670((void *)(uVar7 + 0xc),ppvVar20);
                                local_8 = CONCAT31(local_8._1_3_,0xb);
                                FUN_004cd8f0((int)local_2580);
                              }
                            }
                            else {
                              puVar10 = local_2b58 + local_2b4c * 10 + 2;
                              uVar47 = 0x506bc1;
                              FUN_004cde40(&stack0xffffd360,(uint)puVar10);
                              uVar18 = SUB84((double)(int)((int)&local_2b38->vftablePtr +
                                                          (int)local_2b34 * 10) - 0.5,0);
                              FUN_004dab30((ulonglong *)&stack0xffffd358);
                              uVar46 = 0x506bf7;
                              uVar7 = (*pcVar35)();
                              uVar7 = uVar7 & 0x80000003;
                              if ((int)uVar7 < 0) {
                                uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                              }
                              FUN_004cde40(&stack0xffffd350,
                                           (uint)((int)&local_2b3c->vftablePtr +
                                                 local_2b54 * 10 + uVar7 + 3));
                              FUN_00406380(local_758,uVar18,uVar46,uVar47,puVar10,pSVar34,uVar43);
                              piVar16 = local_2c48;
                              uVar7 = 1;
                              pvVar29 = (void *)FUN_004e2320(local_758,1);
                              puVar21 = (uint *)FUN_00405690(pvVar29,piVar16,uVar7);
                              uVar51 = local_2b68;
                              puVar22 = (uint *)FUN_004e2320(local_758,2);
                              uVar7 = puVar22[1];
                              uVar8 = *puVar22;
                              uVar31 = puVar21[1];
                              uVar50 = *puVar21;
                              puVar21 = (uint *)FUN_004e2320(local_758,0);
                              iVar30 = FUN_00406050(piVar9,*puVar21,puVar21[1],uVar50,uVar31,uVar8,
                                                    uVar7,uVar51);
                              uVar18 = FUN_004061f0(iVar30);
                              uVar7 = local_2b68;
                              if ((char)uVar18 != '\0') {
                                piVar16 = FUN_0052c370(local_1d18,local_2b8c,local_758,0x43340000);
                                uVar7 = local_2b68;
                                FUN_00528450((void *)(local_2b68 + 4),piVar16);
                              }
                            }
                          }
                        }
                        iVar30 = FUN_0041cb40((int *)(uVar7 + 0xc));
                        if (local_2b98._4_4_ < iVar30) {
                          do {
                            piVar16 = (int *)FUN_0041ba70((void *)(uVar7 + 0xc),local_2b98._4_4_);
                            if (*piVar16 == 10) {
                              uVar8 = (*pcVar35)();
                              uVar8 = uVar8 & 0x80000003;
                              if ((int)uVar8 < 0) {
                                uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                              }
                              uVar31 = 5;
                              local_2b24 = (Spawn *)(uVar8 + 1);
                              iVar30 = FUN_0041ba70((void *)(uVar7 + 0xc),local_2b98._4_4_);
                              FUN_0041f770((void *)(iVar30 + 0x48),uVar31);
                              pSVar34 = local_2b78;
                              dVar39 = local_2b98;
                              if (0 < (int)local_2b24) {
                                local_2b28 = (Spawn *)(local_2bd8 + 1);
                                do {
                                  iVar5 = -1;
                                  pcVar11 = (char *)FUN_0052b470(local_29e0,(short)local_2bb0,
                                                                 (int)local_2b28);
                                  iVar30 = FUN_0041ba70(pSVar34,(int)((ulonglong)dVar39 >> 0x20));
                                  FUN_00427000((void *)(iVar30 + 0x48),pcVar11,iVar5);
                                  local_2b24 = (Spawn *)((int)&local_2b24[-1].Spawn_data.
                                                               offset_0xf70 + 3);
                                } while (local_2b24 != (Spawn *)0x0);
                                local_2b24 = (Spawn *)0x0;
                                pcVar35 = rand_exref;
                                uVar7 = local_2b68;
                              }
                              iVar30 = FUN_0041ba70((void *)(uVar7 + 0xc),
                                                    (int)((ulonglong)local_2b98 >> 0x20));
                              *(undefined1 *)(iVar30 + 0x30) = 2;
                            }
                            else {
                              piVar16 = (int *)FUN_0041ba70((void *)(uVar7 + 0xc),
                                                            (int)((ulonglong)local_2b98 >> 0x20));
                              if ((((*piVar16 == 0xd) ||
                                   (piVar16 = (int *)FUN_0041ba70((void *)(uVar7 + 0xc),
                                                                  (int)((ulonglong)local_2b98 >>
                                                                       0x20)), *piVar16 == 0xc)) ||
                                  (piVar16 = (int *)FUN_0041ba70((void *)(uVar7 + 0xc),
                                                                 (int)((ulonglong)local_2b98 >> 0x20
                                                                      )), *piVar16 == 0x23)) ||
                                 ((piVar16 = (int *)FUN_0041ba70((void *)(uVar7 + 0xc),
                                                                 (int)((ulonglong)local_2b98 >> 0x20
                                                                      )), *piVar16 == 0x24 ||
                                  (piVar16 = (int *)FUN_0041ba70((void *)(uVar7 + 0xc),
                                                                 (int)((ulonglong)local_2b98 >> 0x20
                                                                      )), *piVar16 == 0x25)))) {
                                iVar5 = 0;
                                local_2b60 = (Spawn *)0x0;
                                iVar30 = FUN_0041ba70((void *)(uVar7 + 0xc),local_2b98._4_4_);
                                pfVar17 = (float *)FUN_004013d0((void *)(iVar30 + 0x24),iVar5);
                                if (0.0 < *pfVar17) {
                                  local_2b34 = (Spawn *)0x0;
                                  do {
                                    iVar5 = 1;
                                    local_2b2c = (Spawn *)0x0;
                                    iVar30 = FUN_0041ba70((void *)(uVar7 + 0xc),local_2b98._4_4_);
                                    pfVar17 = (float *)FUN_004013d0((void *)(iVar30 + 0x24),iVar5);
                                    if (0.0 < *pfVar17) {
                                      local_2b24 = (Spawn *)0x0;
                                      do {
                                        iVar30 = (*pcVar35)();
                                        if (iVar30 % 10 != 0) goto LAB_00507355;
                                        FUN_0041d8d0(&local_c28);
                                        local_af0 = 1;
                                        local_af4 = 0x3d75c28f;
                                        iVar30 = (*pcVar35)();
                                        if (iVar30 % 6 != 0) {
                                          uVar8 = (*pcVar35)();
                                          uVar8 = uVar8 & 0x80000003;
                                          if ((int)uVar8 < 0) {
                                            uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                                          }
                                          switch(uVar8) {
                                          case 0:
                                            local_c28 = 0x1a0b;
                                            break;
                                          case 1:
                                            local_c28 = CONCAT11((char)local_2b30,0x12);
                                            iStack_c24 = (*pcVar35)();
                                            iStack_c24 = iStack_c24 % 3;
                                            break;
                                          case 2:
                                            local_c28 = 0x90b;
                                            iVar30 = (*pcVar35)();
                                            cStack_c1b = (char)(iVar30 % 3) + '\x19';
                                            break;
                                          case 3:
                                            local_c28 = 0x701;
                                          }
                                          goto LAB_00507240;
                                        }
                                        iVar30 = (*pcVar35)();
                                        switch(iVar30 % 6) {
                                        case 0:
                                          local_c28 = 0x101;
                                          break;
                                        case 1:
                                          local_c28 = 0x401;
                                          break;
                                        case 2:
                                          local_c28 = 0x501;
                                          break;
                                        case 3:
                                          (*pcVar35)();
                                          fVar37 = FUN_004055a0(2.0);
                                          local_2b28 = (Spawn *)(float)fVar37;
                                          iVar30 = (*pcVar35)();
                                          local_c28 = CONCAT11(local_c28._1_1_,0xc);
                                          cStack_c1b = '\n';
                                          uStack_c18 = (undefined2)(iVar30 % ((int)fVar37 * 2 + 2));
                                          uVar7 = local_2b68;
                                          break;
                                        case 4:
                                          puVar10 = (undefined1 *)
                                                    FUN_0052b470(auStack_27b0,(short)local_2bb0,
                                                                 local_2bd8);
                                          goto LAB_00507234;
                                        case 5:
                                          puVar10 = (undefined1 *)
                                                    FUN_0052a760(abStack_2698,(short)local_2bb0,
                                                                 (char)local_2bd8);
LAB_00507234:
                                          FUN_00402a70(&local_c28,puVar10);
                                        }
LAB_00507240:
                                        iVar5 = 2;
                                        iVar30 = FUN_0041ba70((void *)(uVar7 + 0xc),local_2b98._4_4_
                                                             );
                                        puVar19 = (undefined4 *)
                                                  FUN_004013d0((void *)(iVar30 + 0x24),iVar5);
                                        uVar18 = *puVar19;
                                        iVar5 = 1;
                                        iVar30 = FUN_0041ba70((void *)(uVar7 + 0xc),
                                                              (int)((ulonglong)local_2b98 >> 0x20));
                                        pfVar17 = (float *)FUN_004013d0((void *)(iVar30 + 0x24),
                                                                        iVar5);
                                        fVar38 = ((float)local_2b24 - *pfVar17 * 0.5) + 0.5;
                                        iVar5 = 0;
                                        iVar30 = FUN_0041ba70((void *)(uVar7 + 0xc),local_2b98._4_4_
                                                             );
                                        pfVar17 = (float *)FUN_004013d0((void *)(iVar30 + 0x24),
                                                                        iVar5);
                                        FUN_00401080(local_7b0,
                                                     ((float)local_2b34 - *pfVar17 * 0.5) + 0.5,
                                                     fVar38,uVar18);
                                        FUN_00402510((int)local_6ec);
                                        puVar21 = local_6ec;
                                        puVar22 = local_e38;
                                        iVar30 = FUN_0041ba70((void *)(uVar7 + 0xc),
                                                              (int)((ulonglong)local_2b98 >> 0x20));
                                        puVar21 = FUN_00402cb0((void *)(iVar30 + 8),puVar22,puVar21)
                                        ;
                                        FUN_00402a40(local_b10,puVar21);
                                        iVar30 = (*pcVar35)();
                                        local_af8 = ((float)iVar30 * 360.0) / 32767.0;
                                        FUN_0041f5b0((void *)(uVar7 + 0x30),(undefined1 *)&local_c28
                                                    );
LAB_00507355:
                                        local_2b2c = (Spawn *)((int)&local_2b2c->vftablePtr + 1);
                                        local_2b24 = (Spawn *)(float)(int)local_2b2c;
                                        iVar5 = 1;
                                        iVar30 = FUN_0041ba70((void *)(uVar7 + 0xc),local_2b98._4_4_
                                                             );
                                        pfVar17 = (float *)FUN_004013d0((void *)(iVar30 + 0x24),
                                                                        iVar5);
                                      } while ((float)local_2b24 < *pfVar17);
                                    }
                                    local_2b60 = (Spawn *)((int)&local_2b60->vftablePtr + 1);
                                    local_2b34 = (Spawn *)(float)(int)local_2b60;
                                    iVar5 = 0;
                                    iVar30 = FUN_0041ba70((void *)(uVar7 + 0xc),local_2b98._4_4_);
                                    pfVar17 = (float *)FUN_004013d0((void *)(iVar30 + 0x24),iVar5);
                                  } while ((float)local_2b34 < *pfVar17);
                                }
                              }
                            }
                            local_2b98 = (double)CONCAT44(local_2b98._4_4_ + 1,(uint)local_2b98);
                            iVar30 = FUN_0041cb40((int *)(uVar7 + 0xc));
                          } while (local_2b98._4_4_ < iVar30);
                        }
                      }
                    }
LAB_00507401:
                    if (*(char *)&local_2b64->vftablePtr != '\x04') {
                      local_2b2c = (Spawn *)(local_2b4c + 1);
                      pcVar11 = local_2b50;
                      pcVar15 = FUN_004f84a0(&local_2bd0,local_2b54,(int)local_2b50,(int)local_2b2c)
                      ;
                      if (*pcVar15 != '\x03') {
                        if (local_2ba4._4_4_ != 0) {
                          local_2b24 = (Spawn *)((int)&local_2b38->vftablePtr + (int)local_2b50 * 10
                                                );
                          local_2b34 = (Spawn *)((int)&local_2b3c->vftablePtr + local_2b54 * 10);
                          pcVar11 = local_2b58 + (int)local_2b2c * 10;
                          puVar13 = FUN_00405fd0(piVar9,(uint)local_2b34,(uint)local_2b24,
                                                 (int)pcVar11,uVar7);
                          uVar18 = FUN_004061f0((int)puVar13);
                          pcVar35 = rand_exref;
                          if ((char)uVar18 != '\0') {
                            pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54 - 1,(int)local_2b50,
                                                   local_2b4c);
                            if (*pcVar11 != '\x03') {
                              puVar19 = FUN_004010b0(local_2c88,0,0,0,0);
                              FUN_004e1200(&local_378,(int)puVar19);
                              piVar16 = &local_378;
                              iVar30 = 0;
                              uVar45 = (ulonglong)uVar7;
                              uVar41 = 0x46;
                              uVar8 = 0;
                              puVar21 = FUN_00402990(local_7bc,local_2b34,local_2b24,
                                                     local_2b58 + local_2b4c * 10);
                              FUN_00524540(piVar9,(void *)((ulonglong)local_2ba4 >> 0x20),puVar21,
                                           uVar8,(int)uVar41,(int)(uVar41 >> 0x20),(int)uVar45,
                                           (char)(uVar45 >> 0x20),piVar16,iVar30);
                            }
                            pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54 + 1,(int)local_2b50,
                                                   local_2b4c);
                            if (*pcVar11 != '\x03') {
                              puVar19 = FUN_004010b0(local_2c68,0,0,0,0);
                              FUN_004e1200(&local_390,(int)puVar19);
                              piVar16 = &local_390;
                              iVar30 = 0;
                              uVar45 = (ulonglong)uVar7;
                              uVar41 = 0x46;
                              uVar8 = 2;
                              puVar21 = FUN_00402990(local_7d4,local_2b34,local_2b24,
                                                     local_2b58 + local_2b4c * 10);
                              FUN_00524540(piVar9,(void *)((ulonglong)local_2ba4 >> 0x20),puVar21,
                                           uVar8,(int)uVar41,(int)(uVar41 >> 0x20),(int)uVar45,
                                           (char)(uVar45 >> 0x20),piVar16,iVar30);
                            }
                            pcVar11 = FUN_004f84a0(&local_2bd0,local_2b54,(int)(local_2b50 + -1),
                                                   local_2b4c);
                            if (*pcVar11 != '\x03') {
                              puVar19 = FUN_004010b0(local_2c58,0,0,0,0);
                              FUN_004e1200(&local_3bc,(int)puVar19);
                              piVar16 = &local_3bc;
                              iVar30 = 0;
                              uVar45 = (ulonglong)uVar7;
                              uVar41 = 0x46;
                              uVar8 = 3;
                              puVar21 = FUN_00402990(local_7ec,local_2b34,local_2b24,
                                                     local_2b58 + local_2b4c * 10);
                              FUN_00524540(piVar9,(void *)((ulonglong)local_2ba4 >> 0x20),puVar21,
                                           uVar8,(int)uVar41,(int)(uVar41 >> 0x20),(int)uVar45,
                                           (char)(uVar45 >> 0x20),piVar16,iVar30);
                            }
                            pcVar11 = local_2b50 + 1;
                            pcVar15 = FUN_004f84a0(&local_2bd0,local_2b54,(int)pcVar11,local_2b4c);
                            if (*pcVar15 != '\x03') {
                              puVar19 = FUN_004010b0(local_2c78,0,0,0,0);
                              FUN_004e1200(local_3d4,(int)puVar19);
                              uVar48 = ZEXT48(local_3d4);
                              uVar45 = (ulonglong)uVar7;
                              uVar41 = 0x46;
                              uVar8 = 1;
                              puVar21 = FUN_00402990(local_804,local_2b34,local_2b24,
                                                     local_2b58 + local_2b4c * 10);
                              FUN_00524540(piVar9,(void *)((ulonglong)local_2ba4 >> 0x20),puVar21,
                                           uVar8,(int)uVar41,(int)(uVar41 >> 0x20),(int)uVar45,
                                           (char)(uVar45 >> 0x20),(int *)uVar48,
                                           (int)(uVar48 >> 0x20));
                              pcVar11 = (char *)uVar48;
                            }
                          }
                        }
                        if ((local_2b8c == 3) && (iVar30 = (*pcVar35)(), iVar30 % 10 == 0)) {
                          uVar18 = 0x50777d;
                          FUN_004c83b0((int)local_798);
                          local_798[0] = 0x38;
                          uVar46 = 0;
                          uVar43 = 0x507793;
                          FUN_004cde40(&stack0xffffd360,0);
                          uVar41 = 0x3fe0000000000000;
                          FUN_004dab30((ulonglong *)&stack0xffffd358);
                          FUN_004dab30((ulonglong *)&stack0xffffd350);
                          puVar22 = FUN_00406380(local_e68,(int)uVar41,(int)(uVar41 >> 0x20),uVar43,
                                                 uVar46,pcVar11,uVar18);
                          puVar21 = local_e98;
                          dVar39 = (double)(int)(local_2b58 + (int)local_2b2c * 10) - 2.7;
                          FUN_004dab30((ulonglong *)&stack0xffffd358);
                          puVar10 = &(local_2b38->Spawn_data).field_0x1 + (int)local_2b50 * 10;
                          uVar18 = 0x50782f;
                          FUN_004cde40(&stack0xffffd350,(uint)puVar10);
                          FUN_004cde40(&stack0xffffd348,
                                       (uint)(&(local_2b3c->Spawn_data).field_0x1 + local_2b54 * 10)
                                      );
                          puVar19 = FUN_00406380(local_ec8,uVar18,puVar10,SUB84(dVar39,0),
                                                 (int)((ulonglong)dVar39 >> 0x20),uVar43,uVar46);
                          puVar21 = FUN_00402cb0(puVar19,puVar21,puVar22);
                          FUN_00402a40(local_790,puVar21);
                          local_778 = 0x3dcccccd;
                          local_774 = 0;
                          local_760 = 1;
                          FUN_00401060(local_76c,&local_350);
                          FUN_00528450((void *)(uVar7 + 4),local_798);
                        }
                      }
                    }
                  }
                  if (((uint)local_2b64->vftablePtr & 0x400) != 0) {
                    uVar41 = 0x10f0005078c7;
                    pSVar34 = operator_new(0x10f0);
                    if (pSVar34 == (Spawn *)0x0) {
                      local_2b24 = (Spawn *)0x0;
                    }
                    else {
                      uVar41 = CONCAT44(0x5078d5,(int)uVar41);
                      local_2b24 = cube::Spawn::Spawn(pSVar34);
                    }
                    pSVar34 = local_2b24;
                    puVar10 = local_2b58 + local_2b4c * 10 + 1;
                    uVar43 = 0x50790e;
                    local_2b60 = local_2b24;
                    FUN_004cde40(&stack0xffffd360,(uint)puVar10);
                    fVar38 = (float)(int)((int)&local_2b38->vftablePtr + (int)local_2b50 * 10) + 4.5
                    ;
                    uVar18 = 0x50793f;
                    FUN_00402a10((ulonglong *)&stack0xffffd358);
                    FUN_00402a10((ulonglong *)&stack0xffffd350);
                    puVar19 = FUN_00406380(local_ef8,uVar18,fVar38,uVar43,puVar10,(int)uVar41,
                                           (int)(uVar41 >> 0x20));
                    FUN_00402a40(&(pSVar34->Spawn_data).field_0xc,puVar19);
                    (pSVar34->Spawn_data).offset_0x24 = 1;
                    puVar10 = &(pSVar34->Spawn_data).field_0x76;
                    *(ushort *)puVar10 = *(ushort *)puVar10 | 0x1000;
                    (pSVar34->Spawn_data).offset_0x30 = local_2bb0;
                    (pSVar34->Spawn_data).offset_0x54 = (char)local_2bd8;
                    if ((int)(pSVar34->Spawn_data).offset_0x30 < 1) {
                      (pSVar34->Spawn_data).offset_0x30 = 1;
                    }
                    uVar7 = FUN_0041fff0(&local_2bec);
                    uVar8 = (*pcVar35)();
                    puVar19 = (undefined4 *)FUN_00402bb0(&local_2bec,uVar8 % uVar7);
                    pSVar34 = local_2b24;
                    (local_2b24->Spawn_data).offset_0x28 = *puVar19;
                    local_2b28 = (Spawn *)&(local_2b24->Spawn_data).offset_0xf68;
                    iVar5 = -1;
                    iVar30 = FUN_0052bf40((uint)(byte)(local_2b24->Spawn_data).offset_0x54,'\x01');
                    pcVar11 = (char *)FUN_0052b470(local_28c8,
                                                   (short)(pSVar34->Spawn_data).offset_0x30,iVar30);
                    FUN_00427000(&(pSVar34->Spawn_data).offset_0xf68,pcVar11,iVar5);
                    puVar10 = &(pSVar34->Spawn_data).field_0x76;
                    *(ushort *)puVar10 = *(ushort *)puVar10 | 0x200;
                    local_2b2c = operator_new(0x14);
                    local_8._0_1_ = 0x16;
                    if (local_2b2c == (Spawn *)0x0) {
                      pCVar23 = (CombatBehavior *)0x0;
                    }
                    else {
                      pCVar23 = cube::CombatBehavior::CombatBehavior
                                          ((CombatBehavior *)local_2b2c,0x41a00000);
                    }
                    local_8 = CONCAT31(local_8._1_3_,0xb);
                    *(CombatBehavior **)&pSVar34[1].Spawn_data.field_0x120 = pCVar23;
                    FUN_004f7490(local_13f0);
                    local_13f0[0] = 6;
                    FUN_00402a40(local_12c8,(undefined4 *)&(pSVar34->Spawn_data).field_0xc);
                    uVar7 = local_2b68;
                    local_12d0 = (pSVar34->Spawn_data).offset_0x28;
                    local_12d4 = FUN_0041fff0((int *)(local_2b68 + 0x18));
                    FUN_005284a0((void *)(uVar7 + 0x48),local_13f0);
                    uVar8 = (*pcVar35)();
                    local_2b2c = (Spawn *)(uVar8 & 0x80000003);
                    if ((int)local_2b2c < 0) {
                      local_2b2c = (Spawn *)(((uint)((int)&local_2b2c[-1].Spawn_data.offset_0xf70 +
                                                    3U) | 0xfffffffc) + 1);
                    }
                    FUN_00406fd0(local_12b0);
                    pSVar34 = local_2b28;
                    local_12b0[0] = 0x101;
                    local_12a0 = *(undefined2 *)&(local_2b24->Spawn_data).offset_0x30;
                    pSVar27 = local_2b2c;
                    if (0 < (int)local_2b2c) {
                      do {
                        FUN_00427000(pSVar34,(char *)local_12b0,-1);
                        pSVar27 = (Spawn *)((int)&pSVar27[-1].Spawn_data.offset_0xf70 + 3);
                        uVar7 = local_2b68;
                        piVar9 = local_2b74;
                      } while (pSVar27 != (Spawn *)0x0);
                    }
                    (local_2b24->Spawn_data).offset_0x4 = 0x43160000;
                    local_2b24[1].Spawn_data.field_0x16c = 1;
                    FUN_004f2be0((void *)(uVar7 + 0x18),&local_2b60);
                  }
                }
              }
              else if (*(char *)&local_2b64->vftablePtr == '\x04') {
                uVar46 = 0x50483d;
                FUN_004f7490(local_1530);
                puVar10 = local_2b58 + local_2b4c * 10;
                local_1530[0] = 5;
                uVar43 = 0x504864;
                FUN_004cde40(&stack0xffffd360,(uint)puVar10);
                puVar25 = &(local_2b38->Spawn_data).field_0x1 + (int)local_2b50 * 10;
                uVar18 = 0x504885;
                FUN_004cde40(&stack0xffffd358,(uint)puVar25);
                FUN_004cde40(&stack0xffffd350,
                             (uint)(&(local_2b3c->Spawn_data).field_0x1 + local_2b54 * 10));
                puVar19 = FUN_00406380(local_fd0,uVar18,puVar25,uVar43,puVar10,pcVar11,uVar46);
                FUN_00402a40(local_1408,puVar19);
                FUN_005284a0((void *)(uVar7 + 0x48),local_1530);
                goto LAB_005048cc;
              }
              local_2b4c = local_2b4c + 1;
              pSVar34 = local_2bb4;
              pSVar27 = local_2b40;
            } while ((int)local_2b4c < (int)local_2bb4);
          }
          local_2b50 = local_2b50 + 1;
        } while ((int)local_2b50 < (int)pSVar27);
        uVar8 = local_2b54;
        pSVar34 = local_2b40;
        iVar30 = (int)uStack_364._4_4_;
      }
      uVar8 = uVar8 + 1;
      local_2b54 = uVar8;
    } while ((int)uVar8 < iVar30);
    iVar30 = (int)uStack_364._4_4_;
  }
  if (local_2b8c == 4) {
    iVar5 = FUN_0052d840((int)&local_2bd0);
    FUN_00421e30(local_3dc,iVar30 / 2 + -1,iVar5 / 2 + -1);
    piVar16 = (int *)FUN_004013d0(&local_39c,2);
    local_2b24 = (Spawn *)(local_2b58 + *piVar16 * 10 + 8);
    puVar10 = local_2b58 + ((*piVar16 + iVar30 / 2) * 5 + -0x21) * 2;
    local_2b74 = (int *)FUN_004013d0(local_3dc,1);
    local_2b48 = (Spawn *)FUN_004013d0(local_3dc,0);
    uVar7 = local_2b68;
    uVar41 = (ulonglong)local_2b68;
    pbVar42 = (byte *)&local_2b44;
    fVar38 = local_2b70;
    piVar16 = FUN_00402990(local_81c,0xe,0xe,0x10);
    FUN_00513400(piVar9,(int)((int)local_2b3c + ((int)local_2b48->vftablePtr * 5 + -1) * 2),
                 (int)((int)local_2b38 + (*local_2b74 * 5 + -1) * 2),(int)puVar10,piVar16,pbVar42,
                 fVar38,(int)uVar41,(byte)(uVar41 >> 0x20));
    uVar41 = (ulonglong)uVar7;
    piVar16 = FUN_00402990(local_834,10,0xe,10);
    FUN_004d2500(piVar9,(int)((int)&local_2b3c->vftablePtr + (int)local_2b48->vftablePtr * 10),
                 (int)((int)local_2b38 + (*local_2b74 * 5 + -1) * 2),(int)puVar10,piVar16,
                 (int)uVar41,(char)(uVar41 >> 0x20));
    uVar41 = (ulonglong)uVar7;
    piVar16 = FUN_00402990(local_84c,0xe,10,10);
    FUN_004d2500(piVar9,(int)((int)local_2b3c + ((int)local_2b48->vftablePtr * 5 + -1) * 2),
                 (int)((int)&local_2b38->vftablePtr + *local_2b74 * 10),(int)puVar10,piVar16,
                 (int)uVar41,(char)(uVar41 >> 0x20));
    pSVar34 = local_2b24;
    uVar41 = (ulonglong)uVar7;
    piVar24 = FUN_00402990(local_864,10,10,(int)puVar10 - (int)local_2b24);
    piVar16 = local_2b74;
    FUN_004d2500(piVar9,(int)((int)&local_2b3c->vftablePtr + (int)local_2b48->vftablePtr * 10),
                 (int)((int)&local_2b38->vftablePtr + *local_2b74 * 10),(int)pSVar34,piVar24,
                 (int)uVar41,(char)(uVar41 >> 0x20));
    uVar7 = local_2b68;
    local_2b30 = (Spawn *)(0x1e - (int)local_2b24);
    uVar41 = (ulonglong)local_2b68;
    pbVar42 = (byte *)&local_2b44;
    local_2ba4 = (double)CONCAT44(puVar10 + (int)&local_2b30->vftablePtr,(undefined4)local_2ba4);
    fVar38 = local_2b70;
    piVar24 = FUN_00402990(local_87c,2,2,puVar10 + (int)&local_2b30->vftablePtr);
    FUN_00513400(piVar9,(int)&(local_2b3c->Spawn_data).field_0x0 + (int)local_2b48->vftablePtr * 10,
                 (int)&(local_2b38->Spawn_data).field_0x0 + *piVar16 * 10,
                 (int)((int)&local_2b24[-1].Spawn_data.offset_0xf54 + 2),piVar24,pbVar42,fVar38,
                 (int)uVar41,(byte)(uVar41 >> 0x20));
    if (1 < local_2ba4._4_4_) {
      puVar19 = (undefined4 *)((int)&local_2b24[-1].Spawn_data.offset_0xf54 + 3);
      iVar30 = local_2ba4._4_4_;
      do {
        switch((uint)((int)puVar19 + (int)&local_2b30->vftablePtr) & 7) {
        case 0:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_894,5,5,1);
          puVar10 = (undefined1 *)((int)&local_2b38->vftablePtr + *local_2b74 * 10);
          goto LAB_0050808d;
        case 1:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_8ac,1,5,1);
          iVar30 = *local_2b74 * 5;
          goto LAB_00507ea3;
        case 2:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_8c4,5,5,1);
          puVar10 = (undefined1 *)((int)&local_2b38->vftablePtr + *local_2b74 * 10);
          iVar30 = (int)local_2b48->vftablePtr * 5 + 3;
          break;
        case 3:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_8dc,5,1,1);
          puVar10 = &(local_2b38->Spawn_data).field_0x1 + *local_2b74 * 10;
          iVar30 = (int)local_2b48->vftablePtr * 5 + 3;
          break;
        case 4:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_8f4,5,5,1);
          puVar10 = &(local_2b38->Spawn_data).field_0x2 + *local_2b74 * 10;
          iVar30 = (int)local_2b48->vftablePtr * 5 + 3;
          break;
        case 5:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_90c,1,5,1);
          iVar30 = *local_2b74 * 5 + 3;
LAB_00507ea3:
          puVar10 = (undefined1 *)((int)&local_2b38->vftablePtr + iVar30 * 2);
          puVar25 = &(local_2b3c->Spawn_data).field_0x1 + (int)local_2b48->vftablePtr * 10;
          goto LAB_005080a3;
        case 6:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_924,5,5,1);
          puVar10 = &(local_2b38->Spawn_data).field_0x2 + *local_2b74 * 10;
          goto LAB_0050808d;
        case 7:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_93c,5,1,1);
          puVar10 = &(local_2b38->Spawn_data).field_0x1 + *local_2b74 * 10;
LAB_0050808d:
          iVar30 = (int)local_2b48->vftablePtr * 5;
          break;
        default:
          goto LAB_005080b1;
        }
        puVar25 = (undefined1 *)((int)&local_2b3c->vftablePtr + iVar30 * 2);
LAB_005080a3:
        FUN_00513400(piVar9,(int)puVar25,(int)puVar10,(int)puVar19,piVar16,(byte *)uVar41,
                     (float)(uVar41 >> 0x20),(int)uVar45,(byte)(uVar45 >> 0x20));
        iVar30 = local_2ba4._4_4_;
LAB_005080b1:
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      } while ((int)((int)puVar19 + (int)&local_2b30->vftablePtr) < iVar30);
    }
  }
  else if (local_2b8c == 5) {
    iVar5 = FUN_0052d840((int)&local_2bd0);
    FUN_00421e30(local_3c4,iVar30 / 2 + -1,iVar5 / 2 + -1);
    piVar16 = (int *)FUN_004013d0(&local_39c,2);
    local_2b24 = (Spawn *)(local_2b58 + *piVar16 * 10 + 8);
    puVar10 = local_2b58 + ((*piVar16 + iVar30 / 2) * 5 + -0x24) * 2;
    local_2b74 = (int *)FUN_004013d0(local_3c4,1);
    local_2b48 = (Spawn *)FUN_004013d0(local_3c4,0);
    uVar7 = local_2b68;
    uVar41 = (ulonglong)local_2b68;
    pbVar42 = (byte *)&local_2b44;
    fVar38 = local_2b70;
    piVar16 = FUN_00402990(local_954,0xe,0xe,0xe);
    FUN_00513400(piVar9,(int)((int)local_2b3c + ((int)local_2b48->vftablePtr * 5 + -1) * 2),
                 (int)((int)local_2b38 + (*local_2b74 * 5 + -1) * 2),(int)puVar10,piVar16,pbVar42,
                 fVar38,(int)uVar41,(byte)(uVar41 >> 0x20));
    uVar41 = (ulonglong)uVar7;
    puVar10 = puVar10 + -0xc;
    piVar16 = FUN_00402990(local_96c,6,0x4a,6);
    FUN_004d2500(piVar9,(int)((int)&local_2b3c->vftablePtr + (int)local_2b48->vftablePtr * 10 + 2),
                 (int)((int)local_2b38 + (*local_2b74 * 5 + -0x10) * 2),(int)puVar10,piVar16,
                 (int)uVar41,(char)(uVar41 >> 0x20));
    uVar41 = (ulonglong)uVar7;
    piVar16 = FUN_00402990(local_984,0x4a,6,6);
    FUN_004d2500(piVar9,(int)((int)local_2b3c + ((int)local_2b48->vftablePtr * 5 + -0x10) * 2),
                 (int)((int)&local_2b38->vftablePtr + *local_2b74 * 10 + 2),(int)puVar10,piVar16,
                 (int)uVar41,(char)(uVar41 >> 0x20));
    pSVar34 = local_2b24;
    uVar41 = (ulonglong)uVar7;
    piVar24 = FUN_00402990(local_99c,10,10,puVar10 + (6 - (int)local_2b24));
    piVar16 = local_2b74;
    FUN_004d2500(piVar9,(int)((int)&local_2b3c->vftablePtr + (int)local_2b48->vftablePtr * 10),
                 (int)((int)&local_2b38->vftablePtr + *local_2b74 * 10),(int)pSVar34,piVar24,
                 (int)uVar41,(char)(uVar41 >> 0x20));
    uVar7 = local_2b68;
    local_2b30 = (Spawn *)(0x1e - (int)local_2b24);
    uVar41 = (ulonglong)local_2b68;
    pbVar42 = (byte *)&local_2b44;
    local_2ba4 = (double)CONCAT44(puVar10 + (int)&local_2b30->vftablePtr,(undefined4)local_2ba4);
    fVar38 = local_2b70;
    piVar24 = FUN_00402990(local_9b4,2,2,puVar10 + (int)&local_2b30->vftablePtr);
    FUN_00513400(piVar9,(int)&(local_2b3c->Spawn_data).field_0x0 + (int)local_2b48->vftablePtr * 10,
                 (int)&(local_2b38->Spawn_data).field_0x0 + *piVar16 * 10,
                 (int)((int)&local_2b24[-1].Spawn_data.offset_0xf54 + 2),piVar24,pbVar42,fVar38,
                 (int)uVar41,(byte)(uVar41 >> 0x20));
    if (1 < local_2ba4._4_4_) {
      puVar19 = (undefined4 *)((int)&local_2b24[-1].Spawn_data.offset_0xf54 + 3);
      iVar30 = local_2ba4._4_4_;
      do {
        switch((uint)((int)puVar19 + (int)&local_2b30->vftablePtr) & 7) {
        case 0:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_9cc,5,5,1);
          puVar10 = (undefined1 *)((int)&local_2b38->vftablePtr + *local_2b74 * 10);
          goto LAB_005085cd;
        case 1:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_9e4,1,5,1);
          iVar30 = *local_2b74 * 5;
          goto LAB_005083e3;
        case 2:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_7a4,5,5,1);
          puVar10 = (undefined1 *)((int)&local_2b38->vftablePtr + *local_2b74 * 10);
          iVar30 = (int)local_2b48->vftablePtr * 5 + 3;
          break;
        case 3:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_9fc,5,1,1);
          puVar10 = &(local_2b38->Spawn_data).field_0x1 + *local_2b74 * 10;
          iVar30 = (int)local_2b48->vftablePtr * 5 + 3;
          break;
        case 4:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_a14,5,5,1);
          puVar10 = &(local_2b38->Spawn_data).field_0x2 + *local_2b74 * 10;
          iVar30 = (int)local_2b48->vftablePtr * 5 + 3;
          break;
        case 5:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_a38,1,5,1);
          iVar30 = *local_2b74 * 5 + 3;
LAB_005083e3:
          puVar10 = (undefined1 *)((int)&local_2b38->vftablePtr + iVar30 * 2);
          puVar25 = &(local_2b3c->Spawn_data).field_0x1 + (int)local_2b48->vftablePtr * 10;
          goto LAB_005085e3;
        case 6:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_a50,5,5,1);
          puVar10 = &(local_2b38->Spawn_data).field_0x2 + *local_2b74 * 10;
          goto LAB_005085cd;
        case 7:
          uVar45 = (ulonglong)uVar7;
          uVar41 = CONCAT44(local_2b70,&local_2b44);
          piVar16 = FUN_00402990(auStack_a68,5,1,1);
          puVar10 = &(local_2b38->Spawn_data).field_0x1 + *local_2b74 * 10;
LAB_005085cd:
          iVar30 = (int)local_2b48->vftablePtr * 5;
          break;
        default:
          goto LAB_005085f1;
        }
        puVar25 = (undefined1 *)((int)&local_2b3c->vftablePtr + iVar30 * 2);
LAB_005085e3:
        FUN_00513400(piVar9,(int)puVar25,(int)puVar10,(int)puVar19,piVar16,(byte *)uVar41,
                     (float)(uVar41 >> 0x20),(int)uVar45,(byte)(uVar45 >> 0x20));
        iVar30 = local_2ba4._4_4_;
LAB_005085f1:
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      } while ((int)((int)puVar19 + (int)&local_2b30->vftablePtr) < iVar30);
    }
  }
  else if (((local_2b8c == 1) || (local_2b8c == 2)) && (0 < iVar30)) {
    pSVar34 = (Spawn *)FUN_0052d840((int)&local_2bd0);
    iVar30 = (int)uStack_364._4_4_;
    pSVar27 = local_2b3c;
    local_2b40 = pSVar34;
    do {
      if (0 < (int)pSVar34) {
        pSVar12 = (Spawn *)((int)&(pSVar27->Spawn_data).offset_0x4 + 2);
        pSVar32 = local_2b38;
        local_2bb4 = pSVar27;
        local_2b78 = pSVar34;
        local_2b2c = pSVar12;
        do {
          local_2b5c = pSVar27;
          pSVar27 = local_2b5c;
          if ((int)local_2b5c < (int)pSVar12) {
            puVar10 = (undefined1 *)((int)&(pSVar32->Spawn_data).offset_0x4 + 2);
            local_2b60 = pSVar32;
            do {
              local_2b34 = pSVar32;
              if ((int)pSVar32 < (int)puVar10) {
                local_2ba4 = (double)(int)local_2b5c * 0.05;
                local_358 = (double)(int)local_2b5c * 0.1;
                pSVar34 = pSVar32;
                do {
                  local_2b34 = pSVar34;
                  local_2b30 = (Spawn *)FUN_00406100(piVar9,(uint)local_2b5c,(uint)pSVar34,uVar7);
                  fVar37 = FUN_004d5d30(SUB84(local_358,0),(int)((ulonglong)local_358 >> 0x20),
                                        (double)(int)pSVar34 * 0.1);
                  local_2b28 = (Spawn *)(float)fVar37;
                  local_2b24 = (Spawn *)((float)local_2b28 * 2.0);
                  fVar37 = FUN_004d5d30(SUB84(local_2ba4,0),(int)((ulonglong)local_2ba4 >> 0x20),
                                        (double)(int)pSVar34 * 0.05);
                  pSVar34 = local_2b30;
                  local_2b28 = (Spawn *)(float)fVar37;
                  local_2b24 = (Spawn *)((float)local_2b24 + (float)local_2b28 * 8.0);
                  if (0.0 < (float)local_2b24) {
                    local_2b24 = (Spawn *)0x0;
                  }
                  iVar30 = FUN_004061d0((int)local_2b30);
                  iVar5 = FUN_00406250((int)pSVar34);
                  pSVar27 = (Spawn *)(int)((float)(iVar30 + iVar5) + (float)local_2b24);
                  local_2b28 = pSVar27;
                  iVar30 = FUN_004061d0((int)pSVar34);
                  iVar5 = FUN_00406250((int)local_2b30);
                  uVar7 = local_2b68;
                  iVar30 = iVar30 + iVar5;
                  if ((int)pSVar27 <= iVar30) {
                    do {
                      puVar13 = FUN_00405fd0(piVar9,(uint)local_2b5c,(uint)local_2b34,iVar30,uVar7);
                      if ((puVar13[3] & 0x40) != 0) {
                        puVar13 = FUN_00405fd0(piVar9,(uint)local_2b5c,(uint)local_2b34,iVar30,uVar7
                                              );
                        bVar4 = FUN_0041ebb0((int)puVar13);
                        if (bVar4 != 0) {
                          FUN_0041ff00(piVar9,(float)local_2b5c,(uint)local_2b34,iVar30,
                                       (undefined1 *)&DAT_005842c0,uVar7);
                        }
                      }
                      iVar30 = iVar30 + -1;
                    } while ((int)local_2b28 <= iVar30);
                  }
                  pSVar34 = (Spawn *)((int)&local_2b34->vftablePtr + 1);
                  puVar10 = (undefined1 *)((int)&(local_2b60->Spawn_data).offset_0x4 + 2);
                  pSVar32 = local_2b60;
                  local_2b34 = pSVar34;
                } while ((int)pSVar34 < (int)puVar10);
              }
              local_2b5c = (Spawn *)((int)&local_2b5c->vftablePtr + 1);
              pSVar12 = local_2b2c;
              pSVar27 = local_2bb4;
            } while ((int)local_2b5c < (int)local_2b2c);
          }
          pSVar32 = (Spawn *)((int)&(pSVar32->Spawn_data).offset_0x4 + 2);
          local_2b78 = (Spawn *)((int)&local_2b78[-1].Spawn_data.offset_0xf70 + 3);
        } while (local_2b78 != (Spawn *)0x0);
        local_2b78 = (Spawn *)0x0;
        pSVar34 = local_2b40;
        iVar30 = (int)uStack_364._4_4_;
        local_2b60 = pSVar32;
      }
      pSVar27 = (Spawn *)((int)&(pSVar27->Spawn_data).offset_0x4 + 2);
      iVar30 = iVar30 + -1;
      uStack_364 = (double)CONCAT44(iVar30,(undefined4)uStack_364);
      local_2bb4 = pSVar27;
    } while (iVar30 != 0);
  }
  local_2b74 = (void *)0x0;
  do {
    iVar30 = 0;
    local_2b8c = (int)local_2b74 * 3;
    local_2ba4 = (double)((ulonglong)local_2ba4 & 0xffffffff);
    do {
      local_2b88 = (Spawn *)0x0;
      local_2b64 = (Spawn *)((local_2b8c + iVar30) * 3);
      do {
        puVar10 = (undefined1 *)((int)&local_2b88->vftablePtr + (int)&local_2b64->vftablePtr);
        local_2b48 = (Spawn *)((int)puVar10 * 7);
        if ((local_338[(int)puVar10 * 0x1c] != '\0') && (local_338[(int)puVar10 * 0x1c + 2] == '\0')
           ) {
          piVar16 = local_334 + (int)puVar10 * 7 + 3;
          piVar9 = local_6f8;
          puVar19 = FUN_00402990(local_a80,3,3,1);
          FUN_004ce220(puVar19,piVar9,piVar16);
          FUN_004016c0(local_44,0xc,4,FUN_0041cba0);
          pcVar11 = local_338 + (int)puVar10 * 0x1c + 4;
          piVar9 = (int *)FUN_004013d0(pcVar11,2);
          iVar5 = *piVar9 + (int)local_2b88 * 7 + 3;
          piVar9 = (int *)FUN_004013d0(pcVar11,1);
          iVar30 = *piVar9 + iVar30 * 7 + 2;
          piVar9 = (int *)FUN_004013d0(pcVar11,0);
          puVar19 = FUN_00402990(local_a98,*piVar9 + (int)local_2b74 * 7 + 2,iVar30,iVar5);
          FUN_00401060(local_44,puVar19);
          puVar19 = (undefined4 *)FUN_004013d0(local_44,2);
          piVar16 = (int *)FUN_004013d0(local_44,1);
          piVar24 = (int *)FUN_004013d0(local_44,0);
          local_2b24 = (Spawn *)FUN_004013d0(local_6f8,0);
          puVar26 = FUN_00402990(local_ab0,(int)local_2b24->vftablePtr + *piVar24 + -1,*piVar16,
                                 *puVar19);
          FUN_00401060(local_38,puVar26);
          piVar9 = (int *)FUN_004013d0(local_6f8,1);
          local_358 = (double)CONCAT44(piVar9,(undefined4)local_358);
          puVar26 = FUN_00402990(local_ac8,(int)local_2b24->vftablePtr + *piVar24 + -1,
                                 *piVar9 + -1 + *piVar16,*puVar19);
          FUN_00401060(local_2c,puVar26);
          piVar9 = (int *)local_358._4_4_;
          puVar19 = FUN_00402990(local_ae0,*piVar24,*(int *)local_358._4_4_ + -1 + *piVar16,*puVar19
                                );
          FUN_00401060(local_20,puVar19);
          puVar10 = local_44;
          iVar30 = 4;
          do {
            FUN_004013d0(puVar10,2);
            piVar16 = (int *)FUN_004013d0(puVar10,1);
            piVar24 = (int *)FUN_004013d0(puVar10,0);
            FUN_0052de60(&local_2bd0,piVar24,piVar16);
            puVar10 = puVar10 + 0xc;
            iVar30 = iVar30 + -1;
          } while (iVar30 != 0);
          pcVar35 = rand_exref;
          uVar7 = local_2b68;
          if ((6 < *piVar9 * (int)local_2b24->vftablePtr) &&
             (bVar36 = FUN_004e28d0(&local_2bf8), pcVar35 = rand_exref, uVar7 = local_2b68, !bVar36)
             ) {
            uVar7 = FUN_004f3820(&local_2bf8);
            pcVar35 = rand_exref;
            uVar8 = rand();
            local_2b40 = (Spawn *)FUN_004f79b0(&local_2bf8,uVar8 % uVar7);
            bVar36 = FUN_004e28d0((int *)local_2b40);
            uVar7 = local_2b68;
            if (!bVar36) {
              uVar7 = rand();
              pSVar34 = (Spawn *)(uVar7 & 0x80000003);
              if ((int)pSVar34 < 0) {
                pSVar34 = (Spawn *)(((uint)((int)&pSVar34[-1].Spawn_data.offset_0xf70 + 3) |
                                    0xfffffffc) + 1);
              }
              local_2bb4 = pSVar34;
              pSVar27 = operator_new(0x10f0);
              if (pSVar27 == (Spawn *)0x0) {
                local_2b34 = (Spawn *)0x0;
              }
              else {
                local_2b34 = cube::Spawn::Spawn(pSVar27);
              }
              uVar7 = (uint)pSVar34 & 0x80000003;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
              }
              puVar10 = local_44 + uVar7 * 0xc;
              local_2b60 = local_2b34;
              local_2b30 = (Spawn *)FUN_004013d0(puVar10,2);
              local_2b2c = (Spawn *)FUN_004013d0(puVar10,1);
              uVar47 = 0;
              uVar46 = 0x508b75;
              piVar9 = (int *)FUN_004013d0(puVar10,0);
              puVar10 = local_2b58 + (int)local_2b30->vftablePtr * 10 + 1;
              uVar43 = 0x508b9d;
              local_2b78 = (Spawn *)piVar9;
              FUN_004cde40(&stack0xffffd360,(uint)puVar10);
              puVar25 = &(local_2b38->Spawn_data).field_0x1 + (int)local_2b2c->vftablePtr * 10;
              uVar18 = 0x508bc0;
              FUN_004cde40(&stack0xffffd358,(uint)puVar25);
              FUN_004cde40(&stack0xffffd350,
                           (uint)(&(local_2b3c->Spawn_data).field_0x1 + *piVar9 * 10));
              puVar19 = FUN_00406380(local_f28,uVar18,puVar25,uVar43,puVar10,uVar46,uVar47);
              pSVar27 = local_2b34;
              FUN_00402a40(&(local_2b34->Spawn_data).field_0xc,puVar19);
              (pSVar27->Spawn_data).offset_0x30 = local_2bb0;
              if (param_6 == '\0') {
                (pSVar27->Spawn_data).offset_0x24 = 1;
                puVar10 = &(pSVar27->Spawn_data).field_0x76;
                *(ushort *)puVar10 = *(ushort *)puVar10 | 0x1000;
                uVar7 = FUN_0041fff0((int *)local_2b40);
                uVar8 = rand();
                puVar19 = (undefined4 *)FUN_00402bb0(local_2b40,uVar8 % uVar7);
                (local_2b34->Spawn_data).offset_0x28 = *puVar19;
                (local_2b34->Spawn_data).offset_0x54 = (char)local_2bd8;
              }
              else {
                (pSVar27->Spawn_data).offset_0x24 = 3;
                uVar7 = rand();
                uVar7 = uVar7 & 0x80000001;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                }
                (pSVar27->Spawn_data).offset_0x28 = uVar7;
              }
              local_2b28 = operator_new(0xc);
              local_8._0_1_ = 0x17;
              if (local_2b28 == (Spawn *)0x0) {
                pSVar28 = (SequentialBehavior *)0x0;
                uStack_364 = (double)((ulonglong)uStack_364 & 0xffffffff);
              }
              else {
                pSVar28 = cube::SequentialBehavior::SequentialBehavior
                                    ((SequentialBehavior *)local_2b28);
                uStack_364 = (double)CONCAT44(pSVar28,(undefined4)uStack_364);
              }
              local_8._0_1_ = 0xb;
              local_2b28 = operator_new(0x14);
              local_8._0_1_ = 0x18;
              if (local_2b28 == (Spawn *)0x0) {
                local_2b28 = (Spawn *)0x0;
              }
              else {
                local_2b28 = (Spawn *)cube::CombatBehavior::CombatBehavior
                                                ((CombatBehavior *)local_2b28,0x41a00000);
              }
              local_8._0_1_ = 0xb;
              FUN_004d6620(&pSVar28->SequentialBehavior_data,&local_2b28);
              local_2b28 = operator_new(0x1c);
              local_8._0_1_ = 0x19;
              if (local_2b28 == (Spawn *)0x0) {
                local_2b5c = (Spawn *)0x0;
              }
              else {
                local_2b5c = (Spawn *)cube::WalkPathBehavior::WalkPathBehavior
                                                ((WalkPathBehavior *)local_2b28,0x40000000);
              }
              pSVar27 = local_2b5c;
              local_8 = CONCAT31(local_8._1_3_,0xb);
              uVar18 = 0x508d34;
              local_2b28 = local_2b5c;
              FUN_004d6620((void *)((int)uStack_364._4_4_ + 4),&local_2b28);
              uVar43 = 0x508d36;
              iVar30 = rand();
              iVar30 = iVar30 % 3;
              if (iVar30 == 0) {
                local_2b28 = (Spawn *)&pSVar27->Spawn_data;
                iVar30 = 4;
                do {
                  uVar7 = (uint)pSVar34 & 0x80000003;
                  if ((int)uVar7 < 0) {
                    uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                  }
                  puVar10 = local_44 + uVar7 * 0xc;
                  uVar47 = 2;
                  uVar46 = 0x509090;
                  piVar9 = (int *)FUN_004013d0(puVar10,2);
                  FUN_004cde40(&stack0xffffd360,(uint)(local_2b58 + *piVar9 * 10 + 1));
                  uVar43 = 1;
                  uVar18 = 0x5090b6;
                  piVar9 = (int *)FUN_004013d0(puVar10,1);
                  FUN_004cde40(&stack0xffffd358,
                               (uint)(&(local_2b38->Spawn_data).field_0x1 + *piVar9 * 10));
                  uVar41 = 0x5090dc;
                  piVar9 = (int *)FUN_004013d0(puVar10,0);
                  FUN_004cde40(&stack0xffffd350,
                               (uint)(&(local_2b3c->Spawn_data).field_0x1 + *piVar9 * 10));
                  puVar19 = FUN_00406380(local_1150,(int)uVar41,(int)(uVar41 >> 0x20),uVar18,uVar43,
                                         uVar46,uVar47);
                  FUN_004e1420(local_2b28,puVar19);
                  pSVar34 = (Spawn *)((int)&pSVar34->vftablePtr + 1);
                  iVar30 = iVar30 + -1;
                  pcVar35 = rand_exref;
                } while (iVar30 != 0);
              }
              else if (iVar30 == 1) {
                local_2b28 = (Spawn *)&pSVar27->Spawn_data;
                iVar30 = 4;
                do {
                  uVar7 = (uint)pSVar34 & 0x80000003;
                  if ((int)uVar7 < 0) {
                    uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                  }
                  puVar10 = local_20 + uVar7 * -0xc;
                  uVar47 = 2;
                  uVar46 = 0x508fd2;
                  piVar9 = (int *)FUN_004013d0(puVar10,2);
                  FUN_004cde40(&stack0xffffd360,(uint)(local_2b58 + *piVar9 * 10 + 1));
                  uVar43 = 1;
                  uVar18 = 0x508ff8;
                  piVar9 = (int *)FUN_004013d0(puVar10,1);
                  FUN_004cde40(&stack0xffffd358,
                               (uint)(&(local_2b38->Spawn_data).field_0x1 + *piVar9 * 10));
                  uVar41 = 0x50901e;
                  piVar9 = (int *)FUN_004013d0(puVar10,0);
                  FUN_004cde40(&stack0xffffd350,
                               (uint)(&(local_2b3c->Spawn_data).field_0x1 + *piVar9 * 10));
                  puVar19 = FUN_00406380(local_10d8,(int)uVar41,(int)(uVar41 >> 0x20),uVar18,uVar43,
                                         uVar46,uVar47);
                  FUN_004e1420(local_2b28,puVar19);
                  pSVar34 = (Spawn *)((int)&pSVar34->vftablePtr + 1);
                  iVar30 = iVar30 + -1;
                  pcVar35 = rand_exref;
                } while (iVar30 != 0);
              }
              else if (iVar30 == 2) {
                puVar10 = local_2b58 + (int)local_2b30->vftablePtr * 10 + 1;
                uVar47 = 0x508d78;
                FUN_004cde40(&stack0xffffd360,(uint)puVar10);
                puVar25 = &(local_2b38->Spawn_data).field_0x1 + (int)local_2b2c->vftablePtr * 10;
                uVar46 = 0x508d9b;
                FUN_004cde40(&stack0xffffd358,(uint)puVar25);
                FUN_004cde40(&stack0xffffd350,
                             (uint)(&(local_2b3c->Spawn_data).field_0x1 + *(int *)local_2b78 * 10));
                puVar19 = FUN_00406380(local_f58,uVar46,puVar25,uVar47,puVar10,uVar18,uVar43);
                FUN_004e1420(&pSVar27->Spawn_data,puVar19);
                uVar7 = (uint)((int)&pSVar34->vftablePtr + 1U) & 0x80000003;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                }
                puVar10 = local_44 + uVar7 * 0xc;
                piVar9 = (int *)FUN_004013d0(puVar10,2);
                piVar16 = (int *)FUN_004013d0(puVar10,1);
                uVar47 = 0;
                uVar46 = 0x508e09;
                pSVar34 = (Spawn *)FUN_004013d0(puVar10,0);
                puVar10 = local_2b58 + *piVar9 * 10 + 1;
                uVar43 = 0x508e2b;
                local_2b28 = pSVar34;
                FUN_004cde40(&stack0xffffd360,(uint)puVar10);
                puVar25 = &(local_2b38->Spawn_data).field_0x1 + *piVar16 * 10;
                uVar18 = 0x508e48;
                FUN_004cde40(&stack0xffffd358,(uint)puVar25);
                FUN_004cde40(&stack0xffffd350,
                             (uint)(&(local_2b3c->Spawn_data).field_0x1 +
                                   (int)pSVar34->vftablePtr * 10));
                puVar19 = FUN_00406380(local_f88,uVar18,puVar25,uVar43,puVar10,uVar46,uVar47);
                FUN_004e1420(&local_2b5c->Spawn_data,puVar19);
                uVar7 = (uint)((int)&local_2bb4->vftablePtr + 2) & 0x80000003;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                }
                puVar10 = local_44 + uVar7 * 0xc;
                uVar52 = 2;
                uVar49 = 0x508ea6;
                piVar24 = (int *)FUN_004013d0(puVar10,2);
                FUN_004cde40(&stack0xffffd360,(uint)(local_2b58 + *piVar24 * 10 + 1));
                uVar47 = 1;
                uVar46 = 0x508ecc;
                piVar24 = (int *)FUN_004013d0(puVar10,1);
                FUN_004cde40(&stack0xffffd358,
                             (uint)(&(local_2b38->Spawn_data).field_0x1 + *piVar24 * 10));
                uVar43 = 0;
                uVar18 = 0x508ef2;
                piVar24 = (int *)FUN_004013d0(puVar10,0);
                FUN_004cde40(&stack0xffffd350,
                             (uint)(&(local_2b3c->Spawn_data).field_0x1 + *piVar24 * 10));
                puVar19 = FUN_00406380(local_fb8,uVar18,uVar43,uVar46,uVar47,uVar49,uVar52);
                pSVar34 = local_2b5c;
                uVar46 = 0x508f29;
                FUN_004e1420(&local_2b5c->Spawn_data,puVar19);
                puVar10 = local_2b58 + *piVar9 * 10 + 1;
                uVar43 = 0x508f46;
                FUN_004cde40(&stack0xffffd360,(uint)puVar10);
                puVar25 = &(local_2b38->Spawn_data).field_0x1 + *piVar16 * 10;
                uVar18 = 0x508f63;
                FUN_004cde40(&stack0xffffd358,(uint)puVar25);
                FUN_004cde40(&stack0xffffd350,
                             (uint)(&(local_2b3c->Spawn_data).field_0x1 +
                                   (int)local_2b28->vftablePtr * 10));
                puVar19 = FUN_00406380(local_10a8,uVar18,puVar25,uVar43,puVar10,uVar46,puVar19);
                FUN_004e1420(&pSVar34->Spawn_data,puVar19);
                pcVar35 = rand_exref;
              }
              pSVar34 = local_2b34;
              *(char **)&local_2b34[1].Spawn_data.field_0x120 = uStack_364._4_4_;
              (local_2b34->Spawn_data).offset_0x4 = 0x43160000;
              uVar7 = (*pcVar35)();
              uVar7 = uVar7 & 0x80000001;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
              }
              FUN_00406fd0(local_12b0);
              local_12a0 = *(undefined2 *)&(pSVar34->Spawn_data).offset_0x30;
              local_12b0[0] = 0x101;
              if (0 < (int)uVar7) {
                do {
                  FUN_00427000(&(pSVar34->Spawn_data).offset_0xf68,(char *)local_12b0,-1);
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              uVar7 = local_2b68;
              local_2b78 = (Spawn *)(local_2b68 + 0x18);
              uVar31 = FUN_0041fff0((int *)local_2b78);
              puVar21 = (uint *)FUN_004013d0((void *)(uVar7 + 0x60),1);
              uVar8 = *puVar21;
              puVar21 = (uint *)FUN_004013d0((void *)(uVar7 + 0x60),0);
              uVar40 = FUN_004f3850(*puVar21,uVar8,uVar31);
              (local_2b34->Spawn_data).offset_0x44 = (int)uVar40;
              *(undefined1 *)&(local_2b34->Spawn_data).offset_0x48 =
                   (char)((ulonglong)uVar40 >> 0x20);
              *(int3 *)((int)&(local_2b34->Spawn_data).offset_0x48 + 1) =
                   (int3)((ulonglong)uVar40 >> 0x28);
              FUN_004f2be0((void *)(uVar7 + 0x18),&local_2b60);
              if ((param_6 == '\0') &&
                 (bVar36 = FUN_004e28d0((int *)&(local_2b40->Spawn_data).field_0x8), !bVar36)) {
                iVar30 = (*pcVar35)();
                pSVar34 = local_2b60;
                local_2b2c = (Spawn *)(iVar30 % 3 + 1);
                if (0 < (int)local_2b2c) {
                  do {
                    pSVar27 = operator_new(0x10f0);
                    if (pSVar27 == (Spawn *)0x0) {
                      local_2b30 = (Spawn *)0x0;
                    }
                    else {
                      local_2b30 = cube::Spawn::Spawn(pSVar27);
                    }
                    pSVar27 = local_2b30;
                    local_2b60 = local_2b30;
                    FUN_00402a40(&(local_2b30->Spawn_data).field_0xc,
                                 (undefined4 *)&(pSVar34->Spawn_data).field_0xc);
                    (pSVar27->Spawn_data).offset_0x30 = (pSVar34->Spawn_data).offset_0x30;
                    (pSVar27->Spawn_data).offset_0x24 = 1;
                    puVar10 = &(pSVar27->Spawn_data).field_0x76;
                    *(ushort *)puVar10 = *(ushort *)puVar10 | 0x1000;
                    uVar7 = FUN_0041fff0((int *)&(local_2b40->Spawn_data).field_0x8);
                    uVar8 = (*pcVar35)();
                    puVar19 = (undefined4 *)
                              FUN_00402bb0(&(local_2b40->Spawn_data).field_0x8,uVar8 % uVar7);
                    pSVar27 = local_2b30;
                    (local_2b30->Spawn_data).offset_0x28 = *puVar19;
                    (local_2b30->Spawn_data).offset_0x54 = (pSVar34->Spawn_data).offset_0x54;
                    local_2b28 = operator_new(0xc);
                    local_8._0_1_ = 0x1a;
                    if (local_2b28 == (Spawn *)0x0) {
                      local_2b34 = (Spawn *)0x0;
                    }
                    else {
                      local_2b34 = (Spawn *)cube::SequentialBehavior::SequentialBehavior
                                                      ((SequentialBehavior *)local_2b28);
                    }
                    local_8._0_1_ = 0xb;
                    local_2b28 = operator_new(0x14);
                    local_8._0_1_ = 0x1b;
                    if (local_2b28 == (Spawn *)0x0) {
                      local_2b28 = (Spawn *)0x0;
                    }
                    else {
                      local_2b28 = (Spawn *)cube::CombatBehavior::CombatBehavior
                                                      ((CombatBehavior *)local_2b28,0x41a00000);
                    }
                    local_8._0_1_ = 0xb;
                    FUN_004d6620(&local_2b34->Spawn_data,&local_2b28);
                    local_2b28 = operator_new(0x10);
                    local_8._0_1_ = 0x1c;
                    if (local_2b28 == (Spawn *)0x0) {
                      local_2b28 = (Spawn *)0x0;
                    }
                    else {
                      local_2b28 = (Spawn *)cube::CompanionBehavior::CompanionBehavior
                                                      ((CompanionBehavior *)local_2b28);
                    }
                    (local_2b28->Spawn_data).offset_0x4 = (pSVar34->Spawn_data).offset_0x44;
                    *(undefined4 *)&(local_2b28->Spawn_data).field_0x8 =
                         (pSVar34->Spawn_data).offset_0x48;
                    local_8._0_1_ = 0xb;
                    FUN_004d6620(&local_2b34->Spawn_data,&local_2b28);
                    local_2b28 = operator_new(0x1c);
                    local_8._0_1_ = 0x1d;
                    if (local_2b28 == (Spawn *)0x0) {
                      local_2b30 = (Spawn *)0x0;
                    }
                    else {
                      local_2b30 = (Spawn *)cube::WalkPathBehavior::WalkPathBehavior
                                                      ((WalkPathBehavior *)local_2b28,0x40000000);
                    }
                    local_8 = CONCAT31(local_8._1_3_,0xb);
                    FUN_004e1420(&local_2b30->Spawn_data,
                                 (undefined4 *)&(pSVar34->Spawn_data).field_0xc);
                    local_2b28 = local_2b30;
                    FUN_004d6620(&local_2b34->Spawn_data,&local_2b28);
                    *(Spawn **)&pSVar27[1].Spawn_data.field_0x120 = local_2b34;
                    (pSVar27->Spawn_data).offset_0xf5c =
                         (float)(pSVar27->Spawn_data).offset_0xf5c * 0.5;
                    (pSVar27->Spawn_data).offset_0x4 = 0x43160000;
                    FUN_004f2be0(local_2b78,&local_2b60);
                    local_2b2c = (Spawn *)((int)&local_2b2c[-1].Spawn_data.offset_0xf70 + 3);
                  } while (local_2b2c != (Spawn *)0x0);
                  local_2b2c = (Spawn *)0x0;
                  uVar7 = local_2b68;
                }
              }
            }
          }
          bVar36 = FUN_004e28d0(&local_2bec);
          if ((!bVar36) && (local_338[(int)local_2b48 * 4 + 1] == '\0')) {
            uVar8 = (*pcVar35)();
            uVar8 = uVar8 & 0x80000001;
            if ((int)uVar8 < 0) {
              uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
            }
            pSVar34 = (Spawn *)(uVar8 + 1);
            local_2b5c = pSVar34;
            uVar31 = (*pcVar35)();
            local_2b40 = (Spawn *)(uVar31 & 0x80000003);
            if ((int)local_2b40 < 0) {
              local_2b40 = (Spawn *)(((uint)((int)&local_2b40[-1].Spawn_data.offset_0xf70 + 3) |
                                     0xfffffffc) + 1);
            }
            if (7 < *(int *)local_358._4_4_ * (int)local_2b24->vftablePtr) {
              pSVar34 = (Spawn *)(uVar8 + 2);
              local_2b5c = pSVar34;
            }
            if (0 < (int)pSVar34) {
              do {
                uVar8 = (*pcVar35)();
                uVar8 = uVar8 & 0x80000001;
                if ((int)uVar8 < 0) {
                  uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
                }
                local_2b60 = (Spawn *)(uVar8 + 2);
                if (0 < (int)local_2b60) {
                  local_2b98 = (double)(int)local_2b60;
                  uVar8 = (uint)local_2b40 & 0x80000003;
                  if ((int)uVar8 < 0) {
                    uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                  }
                  puVar10 = local_44 + uVar8 * 0xc;
                  local_2b28 = (Spawn *)FUN_004013d0(puVar10,2);
                  local_2b78 = (Spawn *)FUN_004013d0(puVar10,1);
                  local_2bb4 = (Spawn *)FUN_004013d0(puVar10,0);
                  local_2b9c = (char *)(uVar7 + 0x18);
                  local_2b2c = (Spawn *)0x0;
                  do {
                    local_2b34 = (Spawn *)(float)(((double)(int)local_2b2c * 3.141592653589793) /
                                                 local_2b98);
                    uVar41 = 0x10f00050955f;
                    pSVar34 = operator_new(0x10f0);
                    if (pSVar34 == (Spawn *)0x0) {
                      pSVar34 = (Spawn *)0x0;
                    }
                    else {
                      uVar41 = CONCAT44(0x50956d,(int)uVar41);
                      pSVar34 = cube::Spawn::Spawn(pSVar34);
                    }
                    local_2b48 = pSVar34;
                    FUN_004cde40(&stack0xffffd360,
                                 (uint)(local_2b58 + (int)local_2b28->vftablePtr * 10 + 1));
                    pSVar27 = local_2b34;
                    fVar37 = FUN_004024c0((float)local_2b34);
                    local_2b30 = (Spawn *)(float)fVar37;
                    pSVar44 = local_2b38;
                    FUN_00402a10((ulonglong *)&stack0xffffd358);
                    pSVar12 = local_2b34;
                    fVar37 = FUN_004024a0((float)local_2b34);
                    local_2b30 = (Spawn *)(float)fVar37;
                    pSVar32 = local_2b3c;
                    FUN_00402a10((ulonglong *)&stack0xffffd350);
                    puVar19 = FUN_00406380(local_1198,pSVar32,pSVar12,pSVar44,pSVar27,(int)uVar41,
                                           (int)(uVar41 >> 0x20));
                    FUN_00402a40(&(pSVar34->Spawn_data).field_0xc,puVar19);
                    (pSVar34->Spawn_data).offset_0x50 =
                         ((float)local_2b34 / 3.1415927) * 180.0 + 90.0;
                    (pSVar34->Spawn_data).offset_0x30 = local_2bb0;
                    if (param_6 == '\0') {
                      (pSVar34->Spawn_data).offset_0x24 = 1;
                      puVar10 = &(pSVar34->Spawn_data).field_0x76;
                      *(ushort *)puVar10 = *(ushort *)puVar10 | 0x1000;
                      uVar7 = FUN_0041fff0(&local_2bec);
                      uVar8 = (*pcVar35)();
                      puVar19 = (undefined4 *)FUN_00402bb0(&local_2bec,uVar8 % uVar7);
                      (pSVar34->Spawn_data).offset_0x28 = *puVar19;
                      (pSVar34->Spawn_data).offset_0x54 = (char)local_2bd8;
                    }
                    else {
                      (pSVar34->Spawn_data).offset_0x24 = 3;
                      uVar7 = (*pcVar35)();
                      uVar7 = uVar7 & 0x80000001;
                      if ((int)uVar7 < 0) {
                        uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                      }
                      (pSVar34->Spawn_data).offset_0x28 = uVar7;
                    }
                    local_2b30 = operator_new(0xc);
                    local_8._0_1_ = 0x1e;
                    if (local_2b30 == (Spawn *)0x0) {
                      local_2b30 = (Spawn *)0x0;
                    }
                    else {
                      local_2b30 = (Spawn *)cube::SequentialBehavior::SequentialBehavior
                                                      ((SequentialBehavior *)local_2b30);
                    }
                    pSVar27 = local_2b30;
                    local_8._0_1_ = 0xb;
                    local_2b34 = operator_new(0x14);
                    local_8._0_1_ = 0x1f;
                    if (local_2b34 == (Spawn *)0x0) {
                      local_2b34 = (Spawn *)0x0;
                    }
                    else {
                      local_2b34 = (Spawn *)cube::CombatBehavior::CombatBehavior
                                                      ((CombatBehavior *)local_2b34,0x41a00000);
                    }
                    local_8._0_1_ = 0xb;
                    uStack_364 = (double)CONCAT44(&pSVar27->Spawn_data,(undefined4)uStack_364);
                    FUN_004d6620(&pSVar27->Spawn_data,&local_2b34);
                    local_2b34 = operator_new(0x1c);
                    local_8._0_1_ = 0x20;
                    if (local_2b34 == (Spawn *)0x0) {
                      pSVar27 = (Spawn *)0x0;
                    }
                    else {
                      pSVar27 = (Spawn *)cube::WalkPathBehavior::WalkPathBehavior
                                                   ((WalkPathBehavior *)local_2b34,0x40000000);
                    }
                    local_8 = CONCAT31(local_8._1_3_,0xb);
                    FUN_004e1420(&pSVar27->Spawn_data,(undefined4 *)&(pSVar34->Spawn_data).field_0xc
                                );
                    local_2b34 = pSVar27;
                    FUN_004d6620(uStack_364._4_4_,&local_2b34);
                    *(Spawn **)&pSVar34[1].Spawn_data.field_0x120 = local_2b30;
                    (pSVar34->Spawn_data).offset_0x4 = 0x43160000;
                    (pSVar34->Spawn_data).offset_0xf5c =
                         (float)(pSVar34->Spawn_data).offset_0xf5c * 0.75;
                    uVar7 = (*pcVar35)();
                    uVar7 = uVar7 & 0x80000001;
                    if ((int)uVar7 < 0) {
                      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                    }
                    FUN_00406fd0(local_1508);
                    local_14f8 = *(undefined2 *)&(pSVar34->Spawn_data).offset_0x30;
                    local_1508[0] = 0x101;
                    if (0 < (int)uVar7) {
                      do {
                        FUN_00427000(&(pSVar34->Spawn_data).offset_0xf68,(char *)local_1508,-1);
                        uVar7 = uVar7 - 1;
                      } while (uVar7 != 0);
                    }
                    FUN_004f2be0(local_2b9c,&local_2b48);
                    local_2b2c = (Spawn *)((int)&local_2b2c->vftablePtr + 2);
                    local_2b60 = (Spawn *)((int)&local_2b60[-1].Spawn_data.offset_0xf70 + 3);
                  } while (local_2b60 != (Spawn *)0x0);
                  local_2b60 = (Spawn *)0x0;
                  pSVar34 = local_2b5c;
                }
                local_2b40 = (Spawn *)((int)&local_2b40->vftablePtr + 1);
                pSVar34 = (Spawn *)((int)&pSVar34[-1].Spawn_data.offset_0xf70 + 3);
                uVar7 = local_2b68;
                local_2b5c = pSVar34;
              } while (pSVar34 != (Spawn *)0x0);
              local_2b5c = (Spawn *)0x0;
            }
            if ((2 < (int)local_2b24->vftablePtr) && (2 < *(int *)local_358._4_4_)) {
              uVar7 = (*pcVar35)();
              uVar7 = uVar7 & 0x80000001;
              bVar36 = uVar7 == 0;
              if ((int)uVar7 < 0) {
                bVar36 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
              }
              if (!bVar36) {
                piVar9 = local_44c;
                iVar30 = 2;
                pvVar29 = (void *)FUN_004ce220(local_44,local_a2c,local_2c);
                FUN_0042ede0(pvVar29,piVar9,iVar30);
                pSVar34 = (Spawn *)FUN_004013d0(local_44c,2);
                local_2b28 = pSVar34;
                piVar9 = (int *)FUN_004013d0(local_44c,1);
                local_2b78 = (Spawn *)piVar9;
                local_2bb4 = (Spawn *)FUN_004013d0(local_44c,0);
                pcVar11 = FUN_004f84a0(&local_2bd0,(int)local_2bb4->vftablePtr,*piVar9,
                                       (int)pSVar34->vftablePtr);
                if (*pcVar11 == '\x03') {
                  uVar7 = (*pcVar35)();
                  uVar7 = uVar7 & 0x80000001;
                  if ((int)uVar7 < 0) {
                    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                  }
                  local_2b60 = (Spawn *)(uVar7 + 2);
                  if (0 < (int)local_2b60) {
                    uStack_364 = (double)(int)local_2b60;
                    local_2b5c = (Spawn *)(local_2b68 + 0x18);
                    local_2b2c = (Spawn *)0x0;
                    do {
                      local_2b24 = (Spawn *)(float)(((double)(int)local_2b2c * 3.141592653589793) /
                                                   uStack_364);
                      uVar41 = 0x10f0005099ba;
                      pSVar34 = operator_new(0x10f0);
                      if (pSVar34 == (Spawn *)0x0) {
                        pSVar34 = (Spawn *)0x0;
                      }
                      else {
                        uVar41 = CONCAT44(0x5099c8,(int)uVar41);
                        pSVar34 = cube::Spawn::Spawn(pSVar34);
                      }
                      local_2b40 = pSVar34;
                      FUN_004cde40(&stack0xffffd360,
                                   (uint)(local_2b58 + (int)local_2b28->vftablePtr * 10 + 1));
                      pSVar27 = local_2b24;
                      fVar37 = FUN_004024c0((float)local_2b24);
                      local_2b30 = (Spawn *)(float)fVar37;
                      pSVar44 = local_2b38;
                      FUN_00402a10((ulonglong *)&stack0xffffd358);
                      pSVar12 = local_2b24;
                      fVar37 = FUN_004024a0((float)local_2b24);
                      local_2b30 = (Spawn *)(float)fVar37;
                      pSVar32 = local_2b3c;
                      FUN_00402a10((ulonglong *)&stack0xffffd350);
                      puVar19 = FUN_00406380(local_1180,pSVar32,pSVar12,pSVar44,pSVar27,(int)uVar41,
                                             (int)(uVar41 >> 0x20));
                      FUN_00402a40(&(pSVar34->Spawn_data).field_0xc,puVar19);
                      (pSVar34->Spawn_data).offset_0x50 =
                           ((float)local_2b24 / 3.1415927) * 180.0 + 90.0;
                      (pSVar34->Spawn_data).offset_0x30 = local_2bb0;
                      if (param_6 == '\0') {
                        (pSVar34->Spawn_data).offset_0x24 = 1;
                        puVar10 = &(pSVar34->Spawn_data).field_0x76;
                        *(ushort *)puVar10 = *(ushort *)puVar10 | 0x1000;
                        uVar7 = FUN_0041fff0(&local_2bec);
                        uVar8 = (*pcVar35)();
                        puVar19 = (undefined4 *)FUN_00402bb0(&local_2bec,uVar8 % uVar7);
                        (pSVar34->Spawn_data).offset_0x28 = *puVar19;
                        (pSVar34->Spawn_data).offset_0x54 = (char)local_2bd8;
                      }
                      else {
                        (pSVar34->Spawn_data).offset_0x24 = 3;
                        uVar7 = (*pcVar35)();
                        uVar7 = uVar7 & 0x80000001;
                        if ((int)uVar7 < 0) {
                          uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                        }
                        (pSVar34->Spawn_data).offset_0x28 = uVar7;
                      }
                      (pSVar34->Spawn_data).offset_0xf5c =
                           (float)(pSVar34->Spawn_data).offset_0xf5c * 0.75;
                      local_2b30 = operator_new(0xc);
                      local_8._0_1_ = 0x21;
                      if (local_2b30 == (Spawn *)0x0) {
                        local_2b30 = (Spawn *)0x0;
                      }
                      else {
                        local_2b30 = (Spawn *)cube::SequentialBehavior::SequentialBehavior
                                                        ((SequentialBehavior *)local_2b30);
                      }
                      pSVar27 = local_2b30;
                      local_8._0_1_ = 0xb;
                      local_2b24 = operator_new(0x14);
                      local_8._0_1_ = 0x22;
                      if (local_2b24 == (Spawn *)0x0) {
                        local_2b24 = (Spawn *)0x0;
                      }
                      else {
                        local_2b24 = (Spawn *)cube::CombatBehavior::CombatBehavior
                                                        ((CombatBehavior *)local_2b24,0x41a00000);
                      }
                      local_2b34 = (Spawn *)&pSVar27->Spawn_data;
                      local_8._0_1_ = 0xb;
                      FUN_004d6620(local_2b34,&local_2b24);
                      local_2b24 = operator_new(0x1c);
                      local_8._0_1_ = 0x23;
                      if (local_2b24 == (Spawn *)0x0) {
                        pSVar27 = (Spawn *)0x0;
                      }
                      else {
                        pSVar27 = (Spawn *)cube::WalkPathBehavior::WalkPathBehavior
                                                     ((WalkPathBehavior *)local_2b24,0x40000000);
                      }
                      local_8 = CONCAT31(local_8._1_3_,0xb);
                      FUN_004e1420(&pSVar27->Spawn_data,
                                   (undefined4 *)&(pSVar34->Spawn_data).field_0xc);
                      local_2b24 = pSVar27;
                      FUN_004d6620(local_2b34,&local_2b24);
                      *(Spawn **)&pSVar34[1].Spawn_data.field_0x120 = local_2b30;
                      (pSVar34->Spawn_data).offset_0x4 = 0x43160000;
                      uVar7 = (*pcVar35)();
                      uVar7 = uVar7 & 0x80000001;
                      if ((int)uVar7 < 0) {
                        uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                      }
                      FUN_00406fd0(local_13c8);
                      local_13b8 = *(undefined2 *)&(pSVar34->Spawn_data).offset_0x30;
                      local_13c8[0] = 0x101;
                      if (0 < (int)uVar7) {
                        do {
                          FUN_00427000(&(pSVar34->Spawn_data).offset_0xf68,(char *)local_13c8,-1);
                          uVar7 = uVar7 - 1;
                        } while (uVar7 != 0);
                      }
                      FUN_004f2be0(local_2b5c,&local_2b40);
                      local_2b2c = (Spawn *)((int)&local_2b2c->vftablePtr + 2);
                      local_2b60 = (Spawn *)((int)&local_2b60[-1].Spawn_data.offset_0xf70 + 3);
                    } while (local_2b60 != (Spawn *)0x0);
                  }
                }
              }
            }
          }
          iVar30 = local_2ba4._4_4_;
        }
        local_2b88 = (Spawn *)((int)&local_2b88->vftablePtr + 1);
      } while ((int)local_2b88 < 3);
      iVar30 = iVar30 + 1;
      local_2ba4 = (double)CONCAT44(iVar30,(undefined4)local_2ba4);
    } while (iVar30 < 3);
    local_2b74 = (int *)((int)local_2b74 + 1);
  } while ((int)local_2b74 < 3);
  FUN_00423710((int *)((int)&local_344 + 4));
LAB_00509d35:
  cube::Dungeon::~Dungeon(&local_2bd0);
  FUN_00423710((int *)&local_2b80);
  FUN_0042f440(&local_2bec);
  FUN_004f7740(&local_2bf8);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* featureGrid @ 0050e080  kind=game  attributed-by=ledger  size=9264 */

/* WARNING: Removing unreachable block (ram,0x0050eac3) */

void __thiscall FUN_0050e080(void *this,int param_1,int param_2)

{
  float *pfVar1;
  uint *puVar2;
  longlong lVar3;
  float *pfVar4;
  void *this_00;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  float *pfVar9;
  basic_ostream<char,std::char_traits<char>_> *pbVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 extraout_ECX;
  float *pfVar14;
  uint uVar15;
  undefined4 extraout_EDX;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar16;
  Region *pRVar17;
  int iVar18;
  uint uVar19;
  basic_iostream<char,std::char_traits<char>_>_vbtable *pbVar20;
  code *pcVar21;
  float fVar22;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar23;
  int iVar24;
  uint uVar25;
  float fVar26;
  undefined4 *puVar27;
  float10 fVar28;
  double dVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  char *in_stack_fffffcac;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar33;
  char *pcVar34;
  float fVar35;
  undefined1 auStack_324 [4];
  int iStack_320;
  float local_318;
  undefined4 local_314;
  float local_310;
  uint local_30c;
  Region *local_308;
  char cStack_301;
  float local_300;
  basic_iostream<char,std::char_traits<char>_>_vbtable *local_2fc;
  void *local_2f8;
  uint local_2f4;
  Region *local_2f0;
  basic_iostream<char,std::char_traits<char>_>_vbtable *local_2ec;
  double local_2e8;
  float *local_2dc;
  int local_2d8;
  int local_2d4;
  uint *local_2d0;
  basic_iostream<char,std::char_traits<char>_>_vbtable *local_2cc;
  uint local_2c8;
  float *local_2c4;
  float *local_2c0;
  undefined4 local_2bc;
  int *local_2b8;
  int *local_2b4;
  int *local_2b0;
  int local_2ac;
  basic_iostream<char,std::char_traits<char>_>_vbtable *local_2a8;
  uint local_2a4;
  float local_2a0;
  float local_29c;
  basic_ostream<char,struct_std::char_traits<char>_> *local_298;
  basic_ostream<char,struct_std::char_traits<char>_> *local_294;
  basic_ostream<char,struct_std::char_traits<char>_> *local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  int local_274;
  float local_270;
  uint local_26c;
  float local_268;
  uint local_264;
  void *pvStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  float local_240;
  uint local_23c;
  double local_238;
  undefined8 local_230;
  undefined1 local_228 [16];
  basic_ostream<char,std::char_traits<char>_> abStack_218 [2];
  basic_streambuf<char,std::char_traits<char>_> abStack_210 [4];
  basic_streambuf<char,std::char_traits<char>_> abStack_200 [2];
  undefined1 auStack_1f8 [8];
  undefined4 *puStack_1f0;
  undefined4 *puStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 *puStack_1d0;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  code *pcStack_1c0;
  basic_ios<char,std::char_traits<char>_> abStack_1b0 [3];
  int iStack_18c;
  undefined1 auStack_188 [16];
  basic_ostream<char,std::char_traits<char>_> abStack_178 [2];
  basic_streambuf<char,std::char_traits<char>_> abStack_170 [4];
  basic_streambuf<char,std::char_traits<char>_> abStack_160 [2];
  undefined1 local_158 [8];
  undefined4 *local_150;
  undefined4 *puStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 *puStack_130;
  undefined4 uStack_128;
  uint uStack_124;
  code *pcStack_120;
  basic_ios<char,std::char_traits<char>_> abStack_110 [6];
  undefined1 auStack_c4 [28];
  undefined1 auStack_a8 [12];
  int local_9c;
  float fStack_98;
  float local_94;
  int iStack_90;
  int local_8c;
  int iStack_88;
  float local_84;
  float local_80;
  int iStack_7c;
  basic_iostream<char,std::char_traits<char>_>_vbtable *local_78;
  int iStack_74;
  basic_iostream<char,std::char_traits<char>_>_vbtable *local_70;
  uint uStack_6c;
  float local_68;
  basic_iostream<char,std::char_traits<char>_>_vbtable *local_64;
  int iStack_60;
  void *local_5c;
  float local_58;
  uint local_54;
  uint local_50;
  uint uStack_48;
  void *apvStack_34 [2];
  undefined4 uStack_2c;
  uint uStack_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00555c01;
  local_14 = ExceptionList;
  local_1c = DAT_00583cc8 ^ (uint)auStack_324;
  ExceptionList = &local_14;
  local_2d4 = param_1;
  local_2d8 = param_2;
  local_278 = 0.0;
  local_2f8 = this;
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) &&
     ((param_2 < 0x400 &&
      (local_274 = param_1 * 0x400 + param_2, *(int *)((int)this + local_274 * 4 + 0xbc) == 0)))) {
    iVar24 = -2;
    do {
      iVar18 = -2;
      do {
        FUN_0050b870(this,local_2d4 + iVar24,local_2d8 + iVar18);
        iVar5 = local_2d8;
        iVar18 = iVar18 + 1;
      } while (iVar18 < 3);
      iVar24 = iVar24 + 1;
    } while (iVar24 < 3);
    srand(*(int *)((int)this + 0x800188) + local_2d8 * 0x400 + local_2d4);
    local_308 = operator_new(0x15a28);
    local_c = 0;
    if (local_308 == (Region *)0x0) {
      local_2f0 = (Region *)0x0;
    }
    else {
      local_2f0 = cube::Region::Region(local_308);
    }
    pRVar17 = local_2f0;
    local_c = 0xffffffff;
    iVar24 = FUN_004d7870(local_2d4,iVar5);
    pcVar21 = rand_exref;
    (pRVar17->Region_data).offset_0x8 = iVar24;
    (pRVar17->Region_data).offset_0xc = 0;
    if (4 < iVar24) {
      iVar24 = rand();
      (pRVar17->Region_data).offset_0xc = iVar24 % 5;
    }
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    (pRVar17->Region_data).offset_0x10 = uVar7;
    local_2ac = rand();
    local_2ac = local_2ac % 10000;
    puVar8 = *(uint **)((int)this + local_274 * 4 + 0x4000bc);
    local_2d0 = puVar8;
    if (0.81 < (float)puVar8[4]) {
      uVar7 = rand();
      uVar7 = uVar7 & 0x80000001;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
      }
      (pRVar17->Region_data).offset_0x10 = uVar7 + 4;
    }
    local_310 = 1.4013e-45;
    FUN_00522290(puVar8,&local_310,(undefined4 *)(local_228 + 0xc));
    local_2c4 = (float *)0x0;
    local_2c0 = (float *)0x0;
    local_2bc = 0;
    local_54 = *puVar8;
    local_50 = puVar8[1];
    local_c = 1;
    local_228._0_4_ = (int)(((int)local_54 >> 0x1f & 0x7ffU) + local_54) >> 0xb & 0x80000007;
    if ((int)local_228._0_4_ < 0) {
      local_228._0_4_ =
           ((uint)((int)&((basic_iostream<char,std::char_traits<char>_>_vbtable *)
                         (local_228._0_4_ + -8))->basic_ios<char,std::char_traits<char>_>_offset +
                  3U) | 0xfffffff8) + 1;
    }
    uStack_6c = (int)(local_50 + ((int)local_50 >> 0x1f & 0x7ffU)) >> 0xb & 0x80000007;
    if ((int)uStack_6c < 0) {
      uStack_6c = (uStack_6c - 1 | 0xfffffff8) + 1;
    }
    local_230 = (double)CONCAT44(local_230._4_4_,uStack_6c);
    local_300 = (float)(local_2d8 << 0xe);
    local_2c8 = local_2d4 * 0x4000;
    local_2fc = (basic_iostream<char,std::char_traits<char>_>_vbtable *)0x0;
    local_314 = local_2c8 + 0x800;
    local_2a8 = (basic_iostream<char,std::char_traits<char>_>_vbtable *)0x0;
    pfVar9 = (float *)&pRVar17[0x746].Region_data.offset_0x1c;
    local_70 = (basic_iostream<char,std::char_traits<char>_>_vbtable *)local_228._0_4_;
    do {
      local_2f4 = (int)local_300 + 0x800;
      local_30c = 0;
      local_2ec = (basic_iostream<char,std::char_traits<char>_>_vbtable *)0x0;
      do {
        puVar8 = local_2d0;
        local_2dc = pfVar9;
        if (((*(int *)((int)local_2f8 + 0xa4) == 0) ||
            (local_2fc != (basic_iostream<char,std::char_traits<char>_>_vbtable *)local_228._0_4_))
           || (local_30c != (int)local_230)) {
          puVar8 = (uint *)FUN_0042e090(local_2f8,local_314 - 0x400,local_2f4 - 0x400);
          if (puVar8 == local_2d0) {
            uVar7 = (*pcVar21)();
            uVar7 = uVar7 & 0x800000ff;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
            }
            iVar24 = (int)local_300 >> 0x1f;
            *pfVar9 = (float)(int)(uVar7 + 0x200);
            local_280 = (float)(int)(uVar7 + 0x200) * 65536.0;
            iVar18 = (int)local_2ec >> 0x1f;
            uVar7 = (uint)local_300 >> 0x10;
            uVar19 = (uint)local_2ec >> 0x10;
            uVar15 = (int)local_300 * 0x10000;
            uVar25 = (int)local_2ec * 0x10000;
            uVar30 = FUN_0054a946();
            lVar3 = uVar30 + CONCAT44((iVar18 << 0x10 | uVar19) + (iVar24 << 0x10 | uVar7) +
                                      (uint)CARRY4(uVar25,uVar15),uVar25 + uVar15) + 0x1000000;
            local_2a0 = (float)((ulonglong)lVar3 >> 0x20);
            local_318 = *local_2dc + 256.0;
            iVar24 = rand();
            local_288 = (((float)iVar24 * (2048.0 - local_318 * 2.0)) / 32767.0) * 65536.0;
            uVar30 = FUN_0054a946();
            local_29c = local_318 * 65536.0;
            lVar3 = uVar30 + CONCAT44(local_2a0,(int)lVar3);
            local_308 = (Region *)((ulonglong)lVar3 >> 0x20);
            local_2e8 = (double)CONCAT44(local_2e8._4_4_,(int)lVar3);
            iVar24 = (int)local_2c8 >> 0x1f;
            iVar18 = (int)local_2a8 >> 0x1f;
            uVar7 = local_2c8 >> 0x10;
            uVar19 = (uint)local_2a8 >> 0x10;
            uVar15 = local_2c8 * 0x10000;
            uVar25 = (int)local_2a8 * 0x10000;
            uVar30 = FUN_0054a946();
            pcVar21 = rand_exref;
            lVar3 = uVar30 + CONCAT44((iVar18 << 0x10 | uVar19) + (iVar24 << 0x10 | uVar7) +
                                      (uint)CARRY4(uVar25,uVar15),uVar25 + uVar15);
            local_2a0 = (float)((ulonglong)lVar3 >> 0x20);
            iVar24 = rand();
            pfVar9 = local_2dc;
            local_2cc = (basic_iostream<char,std::char_traits<char>_>_vbtable *)
                        ((((float)iVar24 * (2048.0 - (*local_2dc + 256.0) * 2.0)) / 32767.0) *
                        65536.0);
            uVar30 = FUN_0054a946();
            *(ulonglong *)(pfVar9 + -4) = uVar30 + CONCAT44(local_2a0,(int)lVar3);
            pfVar9[-2] = local_2e8._0_4_;
            pfVar9[-1] = (float)local_308;
            uVar31 = __alldiv((uint)local_2e8._0_4_,(uint)local_308,0x10000,0);
            uVar32 = __alldiv((uint)pfVar9[-4],(uint)pfVar9[-3],0x10000,0);
            fVar28 = (float10)FUN_004f9b70(local_2f8,(uint)uVar32,(float)uVar31,0);
            pfVar9[1] = (float)fVar28;
            pfVar9[5] = local_310;
            uVar31 = __alldiv((uint)pfVar9[-2],(uint)pfVar9[-1],0x10000,0);
            uVar32 = __alldiv((uint)pfVar9[-4],(uint)pfVar9[-3],0x10000,0);
            puVar8 = (uint *)FUN_0042e090(local_2f8,(int)uVar32,(int)uVar31);
            uVar7 = local_30c;
            if (puVar8 == local_2d0) {
              local_5c = (void *)(float)((int)local_70 - (int)local_2fc);
              local_58 = (float)(int)(uStack_6c - local_30c);
              _local_8c = CONCAT44(uStack_6c - local_30c,(int)local_70 - (int)local_2fc);
              dVar29 = (double)(local_58 * local_58 + (float)local_5c * (float)local_5c);
              libm_sse2_sqrt_precise();
              local_308 = (Region *)(float)dVar29;
              iVar24 = rand();
              local_78 = local_2fc;
              iStack_74 = uVar7;
              local_68 = (((float)iVar24 * 4.0) / 32767.0 + (float)local_308) - 2.0;
              local_64 = local_2fc;
              iStack_60 = uVar7;
              FUN_005286a0(&local_2c4,&local_68);
            }
          }
        }
        else {
          pfVar9[2] = 1.4013e-45;
          pfVar9[3] = (float)(local_2f0->Region_data).offset_0x10;
          pfVar9[4] = (float)local_2d0[5];
          iVar24 = (*pcVar21)();
          *pfVar9 = (float)(iVar24 % 200 + 0x200);
          uVar7 = *puVar8;
          pfVar9[-4] = (float)(uVar7 << 0x10);
          pfVar9[-3] = (float)(((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10);
          uVar7 = puVar8[1];
          pfVar9[-2] = (float)(uVar7 << 0x10);
          pfVar9[-1] = (float)(((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10);
          local_238 = (double)CONCAT44(local_238._4_4_,*pfVar9 * 65536.0);
          uVar30 = FUN_0054a946();
          uVar19 = (int)pfVar9[-4] - (int)(float)uVar30;
          iVar24 = (((int)pfVar9[-3] - (int)(uVar30 >> 0x20)) -
                   (uint)((uint)pfVar9[-4] < (uint)(float)uVar30)) - (uint)(uVar19 < 0x1000000);
          local_318 = (float)(local_314 - 0x800);
          uVar7 = ((int)local_318 >> 0x1f) << 0x10 | (uint)local_318 >> 0x10;
          if ((iVar24 <= (int)uVar7) &&
             ((iVar24 < (int)uVar7 || (uVar19 - 0x1000000 < (uint)((int)local_318 * 0x10000))))) {
            local_240 = ((float)(int)local_318 + *pfVar9 + 256.0) * 65536.0;
            uVar30 = FUN_0054a946();
            *(ulonglong *)(pfVar9 + -4) = uVar30;
          }
          local_270 = *pfVar9 * 65536.0;
          uVar30 = FUN_0054a946();
          uVar19 = local_2f4;
          uVar7 = (int)pfVar9[-2] - (int)(float)uVar30;
          local_318 = (float)(uVar7 - 0x1000000);
          iVar24 = (((int)pfVar9[-1] - (int)(uVar30 >> 0x20)) -
                   (uint)((uint)pfVar9[-2] < (uint)(float)uVar30)) - (uint)(uVar7 < 0x1000000);
          uVar7 = local_2f4 - 0x800;
          uVar15 = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
          if ((iVar24 <= (int)uVar15) &&
             ((iVar24 < (int)uVar15 || ((uint)local_318 < uVar7 * 0x10000)))) {
            local_268 = ((float)(int)(local_2f4 - 0x800) + *pfVar9 + 256.0) * 65536.0;
            uVar30 = FUN_0054a946();
            *(ulonglong *)(pfVar9 + -2) = uVar30;
          }
          local_94 = *pfVar9 * 65536.0;
          uVar30 = FUN_0054a946();
          uVar7 = (uint)uVar30 + (int)pfVar9[-4];
          local_318 = (float)(uVar7 + 0x1000000);
          iVar24 = (int)(uVar30 >> 0x20) + (int)pfVar9[-3] +
                   (uint)CARRY4((uint)uVar30,(uint)pfVar9[-4]) + (uint)(0xfeffffff < uVar7);
          uVar7 = ((int)local_314 >> 0x1f) << 0x10 | local_314 >> 0x10;
          if (((int)uVar7 <= iVar24) &&
             (((int)uVar7 < iVar24 || (local_314 << 0x10 < (uint)local_318)))) {
            local_27c = (((float)(int)local_314 - *pfVar9) - 256.0) * 65536.0;
            uVar30 = FUN_0054a946();
            *(ulonglong *)(pfVar9 + -4) = uVar30;
          }
          local_28c = *pfVar9 * 65536.0;
          uVar30 = FUN_0054a946();
          uVar7 = (uint)uVar30 + (int)pfVar9[-2];
          local_318 = (float)(uVar7 + 0x1000000);
          iVar24 = (int)(uVar30 >> 0x20) + (int)pfVar9[-1] +
                   (uint)CARRY4((uint)uVar30,(uint)pfVar9[-2]) + (uint)(0xfeffffff < uVar7);
          uVar7 = ((int)uVar19 >> 0x1f) << 0x10 | uVar19 >> 0x10;
          if (((int)uVar7 <= iVar24) &&
             (((int)uVar7 < iVar24 || (uVar19 << 0x10 < (uint)local_318)))) {
            local_284 = (((float)(int)uVar19 - *pfVar9) - 256.0) * 65536.0;
            uVar30 = FUN_0054a946();
            *(ulonglong *)(pfVar9 + -2) = uVar30;
          }
          uVar31 = __alldiv((uint)pfVar9[-2],(uint)pfVar9[-1],0x10000,0);
          uVar32 = __alldiv((uint)pfVar9[-4],(uint)pfVar9[-3],0x10000,0);
          fVar28 = (float10)FUN_004f9b70(local_2f8,(uint)uVar32,(float)uVar31,0);
          local_318 = (float)fVar28;
          pfVar9[1] = local_318;
          if (local_318 < 0.0) {
            pfVar9[1] = 0.0;
          }
        }
        local_2ec = (basic_iostream<char,std::char_traits<char>_>_vbtable *)((int)local_2ec + 0x800)
        ;
        local_30c = local_30c + 1;
        pfVar9 = pfVar9 + 0x1a;
        local_2f4 = local_2f4 + 0x800;
      } while ((int)local_2ec < 0x4000);
      local_2fc = (basic_iostream<char,std::char_traits<char>_>_vbtable *)
                  ((int)&local_2fc->basic_iostream<char,std::char_traits<char>_>_offset + 1);
      local_2a8 = local_2a8 + 0x100;
      local_314 = local_314 + 0x800;
    } while ((int)local_2a8 < 0x4000);
    local_308 = (Region *)((uint)local_308 & 0xffffff00);
    local_2dc = pfVar9;
    FUN_004f5cc0(local_2c4,local_2c0,((int)local_2c0 - (int)local_2c4) / 0xc,local_308);
    local_30c = 0;
    pfVar9 = local_2c4;
    pfVar14 = local_2c0;
    do {
      pRVar17 = local_2f0;
      uVar7 = local_30c;
      if (pfVar9 == pfVar14) break;
      if ((local_30c & 1) != 0) goto LAB_0050f27c;
      local_2cc = (basic_iostream<char,std::char_traits<char>_>_vbtable *)pfVar9[1];
      fVar22 = pfVar9[2];
      pfVar1 = pfVar9 + 1;
      local_2e8 = (double)CONCAT44(local_2e8._4_4_,fVar22);
      pfVar4 = pfVar14;
      while (pfVar9 = pfVar9 + 3, pfVar9 != pfVar14) {
        pfVar1[-1] = *pfVar9;
        *pfVar1 = pfVar9[1];
        pfVar1[1] = pfVar9[2];
        pfVar1 = pfVar1 + 3;
        pfVar4 = local_2c0;
      }
      uVar19 = ((int)fVar22 + (int)local_2cc * 8) * 0x68;
      local_2c0 = pfVar4 + -3;
      pfVar9 = (float *)(uVar19 + 0x1402c + (int)local_2f0);
      if (*pfVar9 <= 0.0 && *pfVar9 != 0.0) {
        *(undefined4 *)(uVar19 + 0x1402c + (int)local_2f0) = 0;
      }
      local_314 = uVar19;
      FUN_00411090((float)(int)local_30c * 0.015625);
      uVar30 = FUN_0054a910(extraout_ECX,extraout_EDX);
      *(int *)(uVar19 + 0x1403c + (int)pRVar17) = (int)uVar30;
      pcVar21 = rand_exref;
      if ((uVar7 >> 1 & 0x80000001) != 0) {
        *(undefined4 *)(uVar19 + 0x14030 + (int)pRVar17) = 0xe;
        *(undefined4 *)(uVar19 + 0x14028 + (int)pRVar17) = 0x43160000;
        uVar31 = __alldiv(*(uint *)(uVar19 + 0x14020 + (int)pRVar17),
                          *(uint *)(uVar19 + 0x14024 + (int)pRVar17),0x10000,0);
        uVar7 = ((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU) & 0xffffff00) + 0x80;
        uVar15 = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
        local_240 = (float)(uVar7 * 0x10000);
        local_23c = uVar15;
        uVar31 = __alldiv(*(uint *)((int)&pRVar17[0x746].Region_data.offset_0xc + local_314),
                          *(uint *)((int)&pRVar17[0x746].Region_data.offset_0x10 + local_314),
                          0x10000,0);
        uVar19 = ((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU) & 0xffffff00) + 0x80;
        *(uint *)((int)&pRVar17[0x746].Region_data.offset_0x10 + local_314) =
             ((int)uVar19 >> 0x1f) << 0x10 | uVar19 >> 0x10;
        *(uint *)((int)&pRVar17[0x746].Region_data.offset_0xc + local_314) = uVar19 * 0x10000;
        *(uint *)((int)&pRVar17[0x746].Region_data.offset_0x14 + local_314) = uVar7 * 0x10000;
        *(uint *)((int)&pRVar17[0x746].Region_data.offset_0x18 + local_314) = uVar15;
        local_2e8 = (double)*(longlong *)((int)&pRVar17[0x746].Region_data.offset_0xc + local_314);
        local_238 = local_2e8 * 0.00390625;
        uVar30 = FUN_0054a946();
        uVar31 = __alldiv((uint)uVar30,(uint)(uVar30 >> 0x20),0x10000,0);
        uVar7 = (uint)uVar31 & 0x8000003f;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
        }
        local_2e8 = (double)*(longlong *)((int)&pRVar17[0x746].Region_data.offset_0x14 + local_314);
        local_230 = local_2e8 * 0.00390625;
        uVar30 = FUN_0054a946();
        uVar31 = __alldiv((uint)uVar30,(uint)(uVar30 >> 0x20),0x10000,0);
        uVar19 = (uint)uVar31 & 0x8000003f;
        if ((int)uVar19 < 0) {
          uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
        }
        local_29c = (float)(uVar7 * 0x40 + uVar19);
        local_2fc = (basic_iostream<char,std::char_traits<char>_>_vbtable *)((int)local_29c * 0x10);
        *(undefined1 *)
         ((int)&pRVar17->vftablePtr +
         (int)&local_2fc[3].basic_iostream<char,std::char_traits<char>_>_offset) = 3;
        uVar15 = rand();
        this_00 = local_2f8;
        uVar15 = uVar15 & 0x80000003;
        if ((int)uVar15 < 0) {
          uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
        }
        ((undefined1 *)((int)&local_2fc[3].basic_iostream<char,std::char_traits<char>_>_offset + 1))
        [(int)pRVar17] = (char)uVar15;
        local_2cc = (basic_iostream<char,std::char_traits<char>_>_vbtable *)
                    ((local_2d4 * 0x40 + uVar7) * 0x100 + 0x80);
        uVar7 = (local_2d8 * 0x40 + uVar19) * 0x100 + 0x80;
        fVar28 = (float10)FUN_004f8b40(local_2f8,(int)local_2cc,uVar7);
        local_2e8 = (double)CONCAT44(local_2e8._4_4_,(float)fVar28);
        if (0.8 < (float)fVar28) {
          fVar28 = (float10)FUN_004f8570(this_00,(float)local_2cc,uVar7);
          local_2e8 = (double)CONCAT44(local_2e8._4_4_,(float)fVar28);
          ((undefined1 *)
          ((int)&local_2fc[3].basic_iostream<char,std::char_traits<char>_>_offset + 1))
          [(int)pRVar17] = ((float)fVar28 <= 0.8) + '\x04';
        }
        iVar24 = rand();
        uVar7 = local_314;
        *(int *)((int)&local_2fc[3].basic_ios<char,std::char_traits<char>_>_offset + (int)pRVar17) =
             iVar24 % 10000000 + 1;
        (&(pRVar17->Region_data).offset_0x1c)[(int)local_29c * 4] =
             *(undefined4 *)(&pRVar17[0x747].Region_data.offset_0x4 + local_314);
        *(int *)(&pRVar17[0x747].Region_data.field_0x0 + local_314) = local_2ac;
        iVar24 = rand();
        local_2ac = local_2ac + 1 + iVar24 % 0x32;
        *(uint *)((int)&pRVar17[0x747].vftablePtr + uVar7) =
             (uint)(byte)((undefined1 *)
                         ((int)&local_2fc[3].basic_iostream<char,std::char_traits<char>_>_offset + 1
                         ))[(int)pRVar17];
        iVar24 = *(int *)(&pRVar17[0x747].Region_data.offset_0x4 + uVar7);
        if (iVar24 < 5) {
          *(undefined1 *)
           ((int)&local_2fc[4].basic_ios<char,std::char_traits<char>_>_offset + (int)pRVar17) = 0;
          pfVar9 = local_2c4;
          pfVar14 = local_2c0;
        }
        else if (iVar24 < 10) {
          uVar7 = rand();
          uVar7 = uVar7 & 0x80000001;
          if ((int)uVar7 < 0) {
            *(byte *)((int)&local_2fc[4].basic_ios<char,std::char_traits<char>_>_offset +
                     (int)pRVar17) = ((char)uVar7 - 1U | 0xfe) + 1;
            pfVar9 = local_2c4;
            pfVar14 = local_2c0;
          }
          else {
LAB_0050edc0:
            *(char *)((int)&local_2fc[4].basic_ios<char,std::char_traits<char>_>_offset +
                     (int)pRVar17) = (char)uVar7;
            pfVar9 = local_2c4;
            pfVar14 = local_2c0;
          }
        }
        else if (iVar24 < 0xf) {
          iVar24 = rand();
          *(char *)((int)&local_2fc[4].basic_ios<char,std::char_traits<char>_>_offset + (int)pRVar17
                   ) = (char)(iVar24 % 3);
          pfVar9 = local_2c4;
          pfVar14 = local_2c0;
        }
        else {
          if (0x12 < iVar24) {
            uVar7 = rand();
            uVar7 = uVar7 & 0x80000003;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
            }
            uVar7 = uVar7 + 1;
            goto LAB_0050edc0;
          }
          iVar24 = rand();
          *(char *)((int)&local_2fc[4].basic_ios<char,std::char_traits<char>_>_offset + (int)pRVar17
                   ) = (char)(iVar24 % 3) + '\x01';
          pfVar9 = local_2c4;
          pfVar14 = local_2c0;
        }
        goto LAB_0050f27c;
      }
      uVar7 = rand();
      uVar7 = uVar7 & 0x80000007;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
      }
      switch(uVar7) {
      case 0:
        *(undefined4 *)(uVar19 + 0x14030 + (int)pRVar17) = 2;
        break;
      case 1:
        *(undefined4 *)(uVar19 + 0x14030 + (int)pRVar17) = 3;
        iVar24 = rand();
        *(int *)(uVar19 + 0x14034 + (int)pRVar17) = iVar24 % 3;
        break;
      case 2:
        uVar12 = 4;
        goto LAB_0050ee27;
      case 3:
        *(undefined4 *)(uVar19 + 0x14030 + (int)pRVar17) = 5;
        if ((float)local_2d0[4] <= 0.8) {
LAB_0050ee95:
          *(undefined4 *)(uVar19 + 0x14034 + (int)pRVar17) = 0;
        }
        else if ((float)local_2d0[3] <= 0.8) {
          if (0.2 <= (float)local_2d0[3]) goto LAB_0050ee95;
          *(undefined4 *)(uVar19 + 0x14034 + (int)pRVar17) = 2;
        }
        else {
          *(undefined4 *)(uVar19 + 0x14034 + (int)pRVar17) = 3;
        }
        uVar7 = rand();
        uVar7 = uVar7 & 0x800000ff;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
        }
        iVar18 = (int)local_300 >> 0x1f;
        iVar24 = (int)local_2e8._0_4_ << 0xb;
        *(float *)(uVar19 + 0x14028 + (int)pRVar17) = (float)(int)(uVar7 + 0x100);
        local_2a0 = (float)(int)(uVar7 + 0x100) * 65536.0;
        uVar7 = (uint)local_300 >> 0x10;
        uVar19 = (uint)local_2e8._0_4_ & 0x1fffff;
        uVar15 = (int)local_300 * 0x10000;
        uVar25 = (int)local_2e8._0_4_ * 0x8000000;
        uVar30 = FUN_0054a946();
        lVar3 = uVar30 + CONCAT44(((iVar24 >> 0x1f) << 0x10 | uVar19 >> 5) +
                                  (iVar18 << 0x10 | uVar7) + (uint)CARRY4(uVar25,uVar15),
                                  uVar25 + uVar15) + 0x1000000;
        local_318 = *(float *)((int)&local_2f0[0x746].Region_data.offset_0x1c + local_314) + 256.0;
        local_2e8._0_4_ = (float)(int)((ulonglong)lVar3 >> 0x20);
        iVar24 = rand();
        local_288 = (((float)iVar24 * (2048.0 - local_318 * 2.0)) / 32767.0) * 65536.0;
        uVar30 = FUN_0054a946();
        local_280 = local_318 * 65536.0;
        lVar3 = uVar30 + CONCAT44(local_2e8._0_4_,(int)lVar3);
        local_29c = (float)lVar3;
        local_28c = (float)((ulonglong)lVar3 >> 0x20);
        iVar18 = (int)local_2c8 >> 0x1f;
        iVar24 = (int)local_2cc << 0xb;
        uVar7 = local_2c8 >> 0x10;
        uVar19 = (uint)local_2cc & 0x1fffff;
        uVar15 = local_2c8 * 0x10000;
        uVar25 = (int)local_2cc * 0x8000000;
        uVar30 = FUN_0054a946();
        lVar3 = uVar30 + CONCAT44(((iVar24 >> 0x1f) << 0x10 | uVar19 >> 5) +
                                  (iVar18 << 0x10 | uVar7) + (uint)CARRY4(uVar25,uVar15),
                                  uVar25 + uVar15);
        uVar7 = (uint)lVar3;
        local_2e8 = (double)CONCAT44(local_2e8._4_4_,(int)((ulonglong)lVar3 >> 0x20));
        iVar24 = rand();
        pRVar17 = local_2f0;
        uVar19 = local_314;
        local_284 = (((float)iVar24 *
                     (2048.0 - (*(float *)((int)&local_2f0[0x746].Region_data.offset_0x1c +
                                          local_314) + 256.0) * 2.0)) / 32767.0) * 65536.0;
        uVar30 = FUN_0054a946();
        *(uint *)((int)&pRVar17[0x746].Region_data.offset_0xc + uVar19) = (uint)uVar30 + uVar7;
        *(float *)((int)&pRVar17[0x746].Region_data.offset_0x14 + uVar19) = local_29c;
        *(uint *)((int)&pRVar17[0x746].Region_data.offset_0x10 + uVar19) =
             (int)(uVar30 >> 0x20) + (int)local_2e8._0_4_ + (uint)CARRY4((uint)uVar30,uVar7);
        *(float *)((int)&pRVar17[0x746].Region_data.offset_0x18 + uVar19) = local_28c;
        pcVar21 = rand_exref;
        break;
      case 4:
        uVar12 = 6;
LAB_0050ee27:
        if ((int)local_2d0[6] < 0) {
          uVar12 = 0xf;
        }
        *(undefined4 *)(uVar19 + 0x14030 + (int)pRVar17) = uVar12;
        break;
      case 5:
        *(uint *)(uVar19 + 0x14030 + (int)pRVar17) = (uint)((int)local_2d0[6] < 0) * 8 + 7;
        break;
      case 6:
        *(undefined4 *)(uVar19 + 0x14030 + (int)pRVar17) = 0xb;
        *(undefined4 *)(uVar19 + 0x14028 + (int)pRVar17) = 0x43000000;
        uVar31 = __alldiv(*(uint *)(uVar19 + 0x14020 + (int)pRVar17),
                          *(uint *)(uVar19 + 0x14024 + (int)pRVar17),0x10000,0);
        uVar7 = ((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU) & 0xffffff00) + 0x80;
        uVar19 = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
        pbVar20 = (basic_iostream<char,std::char_traits<char>_>_vbtable *)(uVar7 * 0x10000);
        local_228._0_4_ = pbVar20;
        local_228._4_4_ = uVar19;
        goto LAB_0050f173;
      case 7:
        *(undefined4 *)(uVar19 + 0x14030 + (int)pRVar17) = 0xc;
        *(undefined4 *)(uVar19 + 0x14028 + (int)pRVar17) = 0x43000000;
        uVar31 = __alldiv(*(uint *)(uVar19 + 0x14020 + (int)pRVar17),
                          *(uint *)(uVar19 + 0x14024 + (int)pRVar17),0x10000,0);
        uVar7 = ((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU) & 0xffffff00) + 0x80;
        uVar19 = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
        pbVar20 = (basic_iostream<char,std::char_traits<char>_>_vbtable *)(uVar7 * 0x10000);
        local_2a8 = pbVar20;
        local_2a4 = uVar19;
LAB_0050f173:
        uVar31 = __alldiv(*(uint *)((int)&pRVar17[0x746].Region_data.offset_0xc + local_314),
                          *(uint *)((int)&pRVar17[0x746].Region_data.offset_0x10 + local_314),
                          0x10000,0);
        uVar7 = ((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU) & 0xffffff00) + 0x80;
        *(uint *)((int)&pRVar17[0x746].Region_data.offset_0xc + local_314) = uVar7 * 0x10000;
        *(uint *)((int)&pRVar17[0x746].Region_data.offset_0x10 + local_314) =
             ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
        *(uint *)((int)&pRVar17[0x746].Region_data.offset_0x18 + local_314) = uVar19;
        *(basic_iostream<char,std::char_traits<char>_>_vbtable **)
         ((int)&pRVar17[0x746].Region_data.offset_0x14 + local_314) = pbVar20;
        pcVar21 = rand_exref;
        uVar19 = local_314;
      }
      iVar24 = *(int *)(&pRVar17[0x747].Region_data.offset_0x4 + uVar19);
      if (iVar24 < 5) {
        *(undefined4 *)((int)&pRVar17[0x747].Region_data.offset_0x8 + uVar19) = 0;
      }
      else if (iVar24 < 10) {
        uVar7 = (*pcVar21)();
        uVar7 = uVar7 & 0x80000001;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
        }
LAB_0050f240:
        *(uint *)((int)&pRVar17[0x747].Region_data.offset_0x8 + uVar19) = uVar7;
      }
      else if (iVar24 < 0xf) {
        iVar24 = (*pcVar21)();
        *(int *)((int)&pRVar17[0x747].Region_data.offset_0x8 + uVar19) = iVar24 % 3;
      }
      else {
        if (0x12 < iVar24) {
          uVar7 = (*pcVar21)();
          uVar7 = uVar7 & 0x80000003;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
          }
          uVar7 = uVar7 + 1;
          goto LAB_0050f240;
        }
        iVar24 = (*pcVar21)();
        *(int *)((int)&pRVar17[0x747].Region_data.offset_0x8 + uVar19) = iVar24 % 3 + 1;
      }
      *(int *)(&pRVar17[0x747].Region_data.field_0x0 + uVar19) = local_2ac;
      iVar24 = (*pcVar21)();
      local_2ac = local_2ac + 1 + iVar24 % 0x32;
      pfVar9 = local_2c4;
      pfVar14 = local_2c0;
LAB_0050f27c:
      local_30c = local_30c + 1;
    } while ((int)local_30c < 0x40);
    pRVar17 = local_2f0;
    local_310 = 0.0;
    do {
      if (pfVar9 == pfVar14) break;
      uVar7 = rand();
      uVar7 = uVar7 % (uint)(((int)pfVar14 - (int)pfVar9) / 0xc);
      local_308 = (Region *)local_2c4[uVar7 * 3 + 2];
      fVar22 = local_2c4[uVar7 * 3 + 1];
      pfVar9 = local_2c4 + uVar7 * 3 + 3;
      if (pfVar9 != local_2c0) {
        pfVar14 = pfVar9 + -2;
        do {
          pfVar14[-1] = *pfVar9;
          *pfVar14 = pfVar14[3];
          pfVar9 = pfVar9 + 3;
          pfVar14[1] = pfVar14[4];
          pfVar14 = pfVar14 + 3;
        } while (pfVar9 != local_2c0);
      }
      local_2c0 = local_2c0 + -3;
      iVar18 = ((int)local_308 + (int)fVar22 * 8) * 0x68;
      *(undefined4 *)(iVar18 + 0x14030 + (int)pRVar17) = 10;
      iVar24 = rand();
      *(int *)(iVar18 + 0x14038 + (int)pRVar17) = iVar24 % 10000000 + 1;
      uVar31 = __alldiv(*(uint *)(iVar18 + 0x14018 + (int)pRVar17),
                        *(uint *)(iVar18 + 0x1401c + (int)pRVar17),0x10000,0);
      uVar7 = (int)(((int)uVar31 >> 0x1f & 0xffU) + (int)uVar31) >> 8 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      uVar31 = __alldiv(*(uint *)(iVar18 + 0x14020 + (int)pRVar17),
                        *(uint *)(iVar18 + 0x14024 + (int)pRVar17),0x10000,0);
      uVar19 = (int)((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
      }
      iVar24 = uVar7 * 0x40 + uVar19;
      local_310 = (float)((int)local_310 + 1);
      *(undefined1 *)((int)pRVar17 + iVar24 * 0x10 + 0x18) = 4;
      *(undefined4 *)((int)pRVar17 + iVar24 * 0x10 + 0x1c) =
           *(undefined4 *)(iVar18 + 0x14038 + (int)pRVar17);
      pfVar9 = local_2c4;
      pfVar14 = local_2c0;
    } while ((int)local_310 < 5);
    puVar8 = &pRVar17[0x746].Region_data.offset_0x14;
    local_310 = 1.12104e-44;
    do {
      uVar31 = __alldiv(puVar8[-2],puVar8[-1],0x10000,0);
      uVar7 = (int)(((int)uVar31 >> 0x1f & 0xffU) + (int)uVar31) >> 8 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      uVar31 = __alldiv(*puVar8,puVar8[1],0x10000,0);
      uVar19 = (int)((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
      }
      *(uint *)((int)pRVar17 + (uVar19 + 2 + uVar7 * 0x40) * 0x10) = puVar8[7];
      uVar31 = __alldiv(puVar8[0x18],puVar8[0x19],0x10000,0);
      uVar7 = (int)(((int)uVar31 >> 0x1f & 0xffU) + (int)uVar31) >> 8 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      uVar31 = __alldiv(puVar8[0x1a],puVar8[0x1b],0x10000,0);
      uVar19 = (int)((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
      }
      *(uint *)((int)pRVar17 + (uVar19 + 2 + uVar7 * 0x40) * 0x10) = puVar8[0x21];
      uVar31 = __alldiv(puVar8[0x32],puVar8[0x33],0x10000,0);
      uVar7 = (int)(((int)uVar31 >> 0x1f & 0xffU) + (int)uVar31) >> 8 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      uVar31 = __alldiv(puVar8[0x34],puVar8[0x35],0x10000,0);
      uVar19 = (int)((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
      }
      *(uint *)((int)pRVar17 + (uVar19 + 2 + uVar7 * 0x40) * 0x10) = puVar8[0x3b];
      uVar31 = __alldiv(puVar8[0x4c],puVar8[0x4d],0x10000,0);
      uVar7 = (int)(((int)uVar31 >> 0x1f & 0xffU) + (int)uVar31) >> 8 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      uVar31 = __alldiv(puVar8[0x4e],puVar8[0x4f],0x10000,0);
      uVar19 = (int)((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
      }
      *(uint *)((int)pRVar17 + (uVar19 + 2 + uVar7 * 0x40) * 0x10) = puVar8[0x55];
      uVar31 = __alldiv(puVar8[0x66],puVar8[0x67],0x10000,0);
      uVar7 = (int)(((int)uVar31 >> 0x1f & 0xffU) + (int)uVar31) >> 8 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      uVar31 = __alldiv(puVar8[0x68],puVar8[0x69],0x10000,0);
      uVar19 = (int)((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
      }
      *(uint *)((int)pRVar17 + (uVar19 + 2 + uVar7 * 0x40) * 0x10) = puVar8[0x6f];
      uVar31 = __alldiv(puVar8[0x80],puVar8[0x81],0x10000,0);
      uVar7 = (int)(((int)uVar31 >> 0x1f & 0xffU) + (int)uVar31) >> 8 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      uVar31 = __alldiv(puVar8[0x82],puVar8[0x83],0x10000,0);
      uVar19 = (int)((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
      }
      *(uint *)((int)pRVar17 + (uVar19 + 2 + uVar7 * 0x40) * 0x10) = puVar8[0x89];
      uVar31 = __alldiv(puVar8[0x9a],puVar8[0x9b],0x10000,0);
      uVar7 = (int)(((int)uVar31 >> 0x1f & 0xffU) + (int)uVar31) >> 8 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      uVar31 = __alldiv(puVar8[0x9c],puVar8[0x9d],0x10000,0);
      uVar19 = (int)((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
      }
      *(uint *)((int)pRVar17 + (uVar19 + 2 + uVar7 * 0x40) * 0x10) = puVar8[0xa3];
      uVar31 = __alldiv(puVar8[0xb4],puVar8[0xb5],0x10000,0);
      uVar7 = (int)(((int)uVar31 >> 0x1f & 0xffU) + (int)uVar31) >> 8 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      pbVar33 = (basic_ostream<char,struct_std::char_traits<char>_> *)0x50f737;
      uVar31 = __alldiv(puVar8[0xb6],puVar8[0xb7],0x10000,0);
      uVar19 = (int)((int)uVar31 + ((int)uVar31 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
      }
      puVar2 = puVar8 + 0xbd;
      puVar8 = puVar8 + 0xd0;
      local_310 = (float)((int)local_310 + -1);
      *(uint *)((int)pRVar17 + (uVar19 + 2 + uVar7 * 0x40) * 0x10) = *puVar2;
    } while (local_310 != 0.0);
    local_2b8 = (int *)0x0;
    local_2b4 = (int *)0x0;
    local_2b0 = (int *)0x0;
    local_c = CONCAT31(local_c._1_3_,2);
    local_2ec = (basic_iostream<char,std::char_traits<char>_>_vbtable *)(local_2d4 << 6);
    local_2f4 = 0;
    local_2e8 = (double)CONCAT44(local_2e8._4_4_,local_2d8 * 0x140);
    local_2a8 = (basic_iostream<char,std::char_traits<char>_>_vbtable *)(local_2d8 * 0x140);
    local_2cc = local_2ec;
    do {
      local_310 = (float)(local_2c8 + 0x100);
      local_318 = 0.0;
      fVar22 = local_300;
      do {
        fVar26 = local_318;
        local_2dc = (float *)fVar22;
        FUN_004f9b70(local_2f8,local_2c8,fVar22,0);
        FUN_004f9b70(local_2f8,(uint)local_310,fVar22,0);
        FUN_004f9b70(local_2f8,local_2c8,(float)((int)fVar22 + 0x100),0);
        fVar35 = 0.0;
        uVar31 = CONCAT44(local_310,0x50f829);
        FUN_004f9b70(local_2f8,(uint)local_310,(float)((int)fVar22 + 0x100),0);
        if ((int)((int)&local_2ec->basic_iostream<char,std::char_traits<char>_>_offset +
                 (int)local_2a8) % 0xd == 0) {
          local_9c = local_2f4;
          fStack_98 = fVar26;
          if ((&local_9c < local_2b4) && (local_2b8 <= &local_9c)) {
            iVar24 = (int)&local_9c - (int)local_2b8 >> 3;
            if ((local_2b4 == local_2b0) && ((int)local_2b0 - (int)local_2b4 >> 3 == 0)) {
              iVar18 = (int)local_2b4 - (int)local_2b8 >> 3;
              if (iVar18 == 0x1fffffff) {
LAB_0050f9e0:
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("vector<T> too long");
              }
              local_308 = (Region *)(iVar18 + 1);
              uVar7 = (int)local_2b0 - (int)local_2b8 >> 3;
              if (0x1fffffff - (uVar7 >> 1) < uVar7) {
                fVar35 = 0.0;
              }
              else {
                fVar35 = (float)(uVar7 + (uVar7 >> 1));
              }
              if ((uint)fVar35 < local_308) {
                fVar35 = (float)local_308;
              }
              FUN_004e25e0(&local_2b8,(uint)fVar35);
            }
            if (local_2b4 != (int *)0x0) {
              *local_2b4 = local_2b8[iVar24 * 2];
              local_2b4[1] = local_2b8[iVar24 * 2 + 1];
            }
          }
          else {
            if ((local_2b4 == local_2b0) && ((int)local_2b0 - (int)local_2b4 >> 3 == 0)) {
              iVar24 = (int)local_2b4 - (int)local_2b8 >> 3;
              if (iVar24 == 0x1fffffff) goto LAB_0050f9e0;
              local_308 = (Region *)(iVar24 + 1);
              uVar7 = (int)local_2b0 - (int)local_2b8 >> 3;
              if (0x1fffffff - (uVar7 >> 1) < uVar7) {
                fVar35 = 0.0;
              }
              else {
                fVar35 = (float)(uVar7 + (uVar7 >> 1));
              }
              if ((uint)fVar35 < local_308) {
                fVar35 = (float)local_308;
              }
              FUN_004e25e0(&local_2b8,(uint)fVar35);
            }
            local_318 = fVar26;
            if (local_2b4 != (int *)0x0) {
              *local_2b4 = local_9c;
              local_2b4[1] = (int)fStack_98;
            }
          }
          local_2b4 = local_2b4 + 2;
          fVar26 = local_318;
        }
        local_2a8 = (basic_iostream<char,std::char_traits<char>_>_vbtable *)((int)local_2a8 + 5);
        local_318 = (float)((int)fVar26 + 1);
        fVar22 = (float)((int)local_2dc + 0x100);
      } while ((int)local_318 < 0x40);
      local_2ec = (basic_iostream<char,std::char_traits<char>_>_vbtable *)
                  ((int)&local_2ec->basic_iostream<char,std::char_traits<char>_>_offset + 1);
      local_2f4 = local_2f4 + 1;
      local_2c8 = local_2c8 + 0x100;
      if (0x3f < (int)local_2f4) goto LAB_0050f9eb;
      local_2a8 = (basic_iostream<char,std::char_traits<char>_>_vbtable *)local_2e8._0_4_;
    } while( true );
  }
LAB_00510493:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_324);
  return;
LAB_0050f9eb:
  local_2fc = (basic_iostream<char,std::char_traits<char>_>_vbtable *)
              &pRVar17[0x746].Region_data.offset_0xc;
  local_300 = 0.0;
  local_2dc = (float *)fVar22;
  do {
    local_2f4 = 0;
    local_2ec = local_2fc;
    fVar22 = local_300;
    do {
      if ((undefined *)local_2ec[3].basic_iostream<char,std::char_traits<char>_>_offset ==
          (undefined *)0x1) {
        pbVar33 = (basic_ostream<char,struct_std::char_traits<char>_> *)0x0;
        pbVar16 = (basic_ostream<char,struct_std::char_traits<char>_> *)0x0;
        local_298 = (basic_ostream<char,struct_std::char_traits<char>_> *)0x0;
        local_294 = (basic_ostream<char,struct_std::char_traits<char>_> *)0x0;
        local_290 = (basic_ostream<char,struct_std::char_traits<char>_> *)0x0;
        local_308 = (Region *)((local_2f4 + local_2d8 * 8) * 0x800 + 0x80);
        local_c = CONCAT31(local_c._1_3_,3);
        local_30c = ((int)local_300 + local_2d4 * 8) * 0x800 + 0x80;
        local_2dc = (float *)0x0;
        do {
          local_26c = ((int)local_30c >> 0x1f) << 0x10 | local_30c >> 0x10;
          local_270 = (float)(local_30c << 0x10);
          local_2a8 = (basic_iostream<char,std::char_traits<char>_>_vbtable *)0x0;
          local_94 = (float)((int)local_2dc + (int)local_300 * 8);
          local_318 = (float)local_308;
          do {
            pbVar23 = local_294;
            local_264 = ((int)local_318 >> 0x1f) << 0x10 | (uint)local_318 >> 0x10;
            local_268 = (float)((int)local_318 << 0x10);
            fVar28 = FUN_0052c820((uint *)local_2ec,(uint *)&local_270,(uint *)&local_268);
            local_2e8 = (double)CONCAT44(local_2e8._4_4_,(float)fVar28);
            local_310 = 1.0 - (float)fVar28;
            if (0.0 < local_310) {
              local_310 = local_310 * local_310;
            }
            else {
              local_310 = 0.0;
            }
            iStack_90 = (int)local_2a8 + local_2f4 * 8;
            local_80 = local_94;
            local_84 = local_310;
            iStack_7c = iStack_90;
            if (((basic_ostream<char,struct_std::char_traits<char>_> *)&local_84 < pbVar23) &&
               (pbVar33 <= (basic_ostream<char,struct_std::char_traits<char>_> *)&local_84)) {
              local_310 = (float)(((int)&local_84 - (int)pbVar33) / 0xc);
              if ((pbVar23 == pbVar16) &&
                 (iVar24 = (int)pbVar16 - (int)pbVar23 >> 0x1f,
                 ((int)pbVar16 - (int)pbVar23) / 0xc + iVar24 == iVar24)) {
                iVar24 = ((int)pbVar23 - (int)pbVar33) / 0xc;
                if (iVar24 == 0x15555555) goto LAB_0050f9e0;
                uVar19 = ((int)pbVar16 - (int)pbVar33) / 0xc;
                uVar7 = iVar24 + 1;
                if (0x15555555 - (uVar19 >> 1) < uVar19) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar19 + (uVar19 >> 1);
                }
                if (uVar19 < uVar7) {
                  uVar19 = uVar7;
                }
                FUN_004f7ef0(&local_298,uVar19);
                pbVar16 = local_290;
                pbVar23 = local_294;
                pbVar33 = local_298;
              }
              if (pbVar23 != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0) {
                *(int *)pbVar23 = *(int *)(pbVar33 + (int)local_310 * 0xc);
                *(int *)(pbVar23 + 4) = *(int *)(pbVar33 + (int)local_310 * 0xc + 4);
                *(int *)(pbVar23 + 8) = *(int *)(pbVar33 + (int)local_310 * 0xc + 8);
              }
            }
            else {
              if ((pbVar23 == pbVar16) &&
                 (iVar24 = (int)pbVar16 - (int)pbVar23 >> 0x1f,
                 ((int)pbVar16 - (int)pbVar23) / 0xc + iVar24 == iVar24)) {
                iVar24 = ((int)pbVar23 - (int)pbVar33) / 0xc;
                if (iVar24 == 0x15555555) goto LAB_0050f9e0;
                uVar19 = ((int)pbVar16 - (int)pbVar33) / 0xc;
                uVar7 = iVar24 + 1;
                if (0x15555555 - (uVar19 >> 1) < uVar19) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar19 + (uVar19 >> 1);
                }
                if (uVar19 < uVar7) {
                  uVar19 = uVar7;
                }
                FUN_004f7ef0(&local_298,uVar19);
                pbVar16 = local_290;
                pbVar23 = local_294;
                pbVar33 = local_298;
              }
              if (pbVar23 != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0) {
                *(float *)pbVar23 = local_310;
                *(float *)(pbVar23 + 4) = local_94;
                *(int *)(pbVar23 + 8) = iStack_90;
              }
            }
            local_2a8 = (basic_iostream<char,std::char_traits<char>_>_vbtable *)((int)local_2a8 + 1)
            ;
            local_294 = pbVar23 + 0xc;
            local_318 = (float)((int)local_318 + 0x100);
          } while ((int)local_2a8 < 8);
          local_2dc = (float *)((int)local_2dc + 1);
          local_30c = local_30c + 0x100;
        } while ((int)local_2dc < 8);
        local_27c = (float)((uint)local_27c & 0xffffff00);
        uVar31 = CONCAT44(local_294,pbVar33);
        fVar35 = local_27c;
        FUN_004f5f40((float *)pbVar33,(float *)local_294,((int)local_294 - (int)pbVar33) / 0xc,
                     local_27c);
        pRVar17 = local_2f0;
        *(undefined1 *)
         ((int)local_2f0 + (*(int *)(pbVar33 + 4) * 0x40 + *(int *)(pbVar33 + 8)) * 0x10 + 0x18) = 1
        ;
        *(undefined1 *)
         ((int)local_2f0 + (*(int *)(pbVar33 + 4) * 0x40 + *(int *)(pbVar33 + 8)) * 0x10 + 0x19) = 1
        ;
        *(undefined1 *)
         ((int)local_2f0 +
         (*(int *)(pbVar33 + 0x10) * 0x40 + *(int *)(pbVar33 + 0x14)) * 0x10 + 0x18) = 1;
        *(undefined1 *)
         ((int)local_2f0 +
         (*(int *)(pbVar33 + 0x10) * 0x40 + *(int *)(pbVar33 + 0x14)) * 0x10 + 0x19) = 2;
        *(undefined1 *)
         ((int)local_2f0 +
         (*(int *)(pbVar33 + 0x1c) * 0x40 + *(int *)(pbVar33 + 0x20)) * 0x10 + 0x18) = 1;
        *(undefined1 *)
         ((int)local_2f0 +
         (*(int *)(pbVar33 + 0x1c) * 0x40 + *(int *)(pbVar33 + 0x20)) * 0x10 + 0x19) = 3;
        *(undefined1 *)
         ((int)local_2f0 +
         (*(int *)(pbVar33 + 0x28) * 0x40 + *(int *)(pbVar33 + 0x2c)) * 0x10 + 0x18) = 1;
        *(undefined1 *)
         ((int)local_2f0 +
         (*(int *)(pbVar33 + 0x28) * 0x40 + *(int *)(pbVar33 + 0x2c)) * 0x10 + 0x19) = 4;
        operator_delete(pbVar33);
        local_298 = (basic_ostream<char,struct_std::char_traits<char>_> *)0x0;
        local_294 = (basic_ostream<char,struct_std::char_traits<char>_> *)0x0;
        local_290 = (basic_ostream<char,struct_std::char_traits<char>_> *)0x0;
        fVar22 = local_300;
      }
      local_2f4 = local_2f4 + 1;
      local_2ec = local_2ec + 0xd;
    } while ((int)local_2f4 < 8);
    local_300 = (float)((int)fVar22 + 1);
    local_2fc = local_2fc + 0x68;
  } while ((int)local_300 < 8);
  if ((*(char *)((int)local_2f8 + 0xb4) == '\0') && (*(int *)((int)local_2f8 + 0xa4) != 0)) {
    puVar27 = &pRVar17[0x748].Region_data.offset_0x8;
    local_308 = (Region *)((int)((local_2d8 * 0x40 >> 0x1f & 7U) + local_2d8 * 0x40) >> 3);
    local_30c = (int)((int)&local_2cc->basic_iostream<char,std::char_traits<char>_>_offset +
                     ((int)local_2cc >> 0x1f & 7U)) >> 3;
    local_318 = 1.12104e-44;
    fVar22 = local_278;
    do {
      local_310 = 1.12104e-44;
      local_300 = (float)local_308;
      do {
        pcVar34 = (char *)uVar31;
        auStack_188._0_4_ = &PTR_0055b2c0;
        abStack_178[0].vbtablePtr =
             (basic_ostream<char,std::char_traits<char>_>_vbtable *)&PTR_00571718;
        pcStack_120 = _vftable__exref;
        local_298 = (basic_ostream<char,struct_std::char_traits<char>_> *)((uint)fVar22 | 1);
        uStack_2c = CONCAT31(uStack_2c._1_3_,4);
        std::basic_iostream<char,std::char_traits<char>_>::
        basic_iostream<char,std::char_traits<char>_>
                  ((basic_iostream<char,std::char_traits<char>_> *)auStack_188,
                   (basic_streambuf<char,std::char_traits<char>_> *)abStack_170);
        uStack_2c = 5;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         (auStack_188 + *(int *)(auStack_188._0_4_ + 4)) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((int)&iStack_18c + *(int *)(auStack_188._0_4_ + 4)) =
             *(int *)(auStack_188._0_4_ + 4) + -0x68;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>(abStack_170);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
        abStack_170[0] =
             (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        uStack_138 = 0;
        uStack_134 = 0;
        uStack_2c = CONCAT31(uStack_2c._1_3_,7);
        iVar24 = iStack_320;
        pbVar10 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)abStack_178,"mission")
        ;
        pbVar16 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            ((basic_ostream<char,std::char_traits<char>_> *)pbVar10,iVar24);
        pbVar10 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)pbVar16,
                               in_stack_fffffcac);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  ((basic_ostream<char,std::char_traits<char>_> *)pbVar10,(int)pbVar33);
        pvStack_260 = (void *)0x0;
        uStack_25c = 0;
        uStack_258 = 0;
        uStack_254 = 0;
        local_1c._0_1_ = 8;
        puVar11 = FUN_004d8f70(abStack_178,&local_5c);
        local_1c._0_1_ = 9;
        uVar12 = FUN_00413130((void *)((int)local_308 + 0xac),puVar11,&pvStack_260);
        local_314 = CONCAT13((char)uVar12,(undefined3)local_314);
        local_1c = CONCAT31(local_1c._1_3_,8);
        cVar6 = (char)uVar12;
        if (0xf < uStack_48) {
          operator_delete(local_5c);
          cVar6 = local_314._3_1_;
        }
        if (cVar6 != '\0') {
          puVar11 = puVar27 + -10;
          puVar13 = FUN_0041d800(auStack_c4,&pvStack_260);
          FUN_0041ebc0(puVar13,(int)puVar11);
          *(undefined1 *)&pRVar17[0x7dd].Region_data.offset_0x18 = 1;
        }
        if (pvStack_260 != (void *)0x0) {
          operator_delete(pvStack_260);
          pvStack_260 = (void *)0x0;
          uStack_25c = 0;
          uStack_258 = 0;
        }
        local_1c = CONCAT31(local_1c._1_3_,2);
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((int)&abStack_178[0].vbtablePtr +
         (abStack_178[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)(auStack_188 +
                (abStack_178[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + 0xc) =
             (abStack_178[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
        abStack_160[0] =
             (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        if ((uStack_124 & 1) != 0) {
          operator_delete(*(void **)local_158._4_4_);
        }
        std::basic_streambuf<char,std::char_traits<char>_>::setg
                  (abStack_160,(char *)0x0,(char *)0x0,(char *)0x0);
        *local_150 = 0;
        *puStack_140 = 0;
        *puStack_130 = 0;
        uStack_124 = uStack_124 & 0xfffffffe;
        uStack_128 = 0;
        std::basic_streambuf<char,std::char_traits<char>_>::
        ~basic_streambuf<char,std::char_traits<char>_>(abStack_160);
        std::basic_iostream<char,std::char_traits<char>_>::
        ~basic_iostream<char,std::char_traits<char>_>
                  ((basic_iostream<char,std::char_traits<char>_> *)local_158);
        std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                  (abStack_110);
        local_228._0_4_ = &PTR_0055b2c0;
        abStack_218[0].vbtablePtr =
             (basic_ostream<char,std::char_traits<char>_>_vbtable *)&PTR_00571718;
        pcStack_1c0 = _vftable__exref;
        fVar22 = (float)((uint)fVar22 | 3);
        local_1c = CONCAT31(local_1c._1_3_,10);
        local_288 = fVar22;
        std::basic_iostream<char,std::char_traits<char>_>::
        basic_iostream<char,std::char_traits<char>_>
                  ((basic_iostream<char,std::char_traits<char>_> *)local_228,
                   (basic_streambuf<char,std::char_traits<char>_> *)abStack_210);
        local_1c = 0xb;
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         (local_228 + *(int *)(local_228._0_4_ + 4)) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((int)&local_230 + *(int *)(local_228._0_4_ + 4) + 4) =
             *(int *)(local_228._0_4_ + 4) + -0x68;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>(abStack_210);
        abStack_210[0] =
             (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        local_1c = CONCAT31(local_1c._1_3_,0xd);
        in_stack_fffffcac = "monster";
        fVar26 = local_310;
        pbVar10 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)abStack_218,"monster")
        ;
        pbVar33 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            ((basic_ostream<char,std::char_traits<char>_> *)pbVar10,(int)fVar26);
        pbVar10 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)pbVar33,pcVar34);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  ((basic_ostream<char,std::char_traits<char>_> *)pbVar10,(int)fVar35);
        pvStack_260 = (void *)0x0;
        uStack_25c = 0;
        uStack_258 = 0;
        uStack_254 = 0;
        local_c._0_1_ = 0xe;
        puVar11 = FUN_004d8f70(abStack_218,apvStack_34);
        local_c._0_1_ = 0xf;
        uVar12 = FUN_00413130((void *)((int)local_2f8 + 0xac),puVar11,&pvStack_260);
        cStack_301 = (char)uVar12;
        local_c = CONCAT31(local_c._1_3_,0xe);
        if (0xf < uStack_20) {
          operator_delete(apvStack_34[0]);
        }
        if (cStack_301 != '\0') {
          puVar11 = puVar27;
          puVar13 = FUN_0041d800(auStack_a8,&pvStack_260);
          FUN_0041ed50(puVar13,puVar11);
        }
        if (pvStack_260 != (void *)0x0) {
          operator_delete(pvStack_260);
          pvStack_260 = (void *)0x0;
          uStack_25c = 0;
          uStack_258 = 0;
        }
        local_c = CONCAT31(local_c._1_3_,2);
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((int)&abStack_218[0].vbtablePtr +
         (abStack_218[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)(local_228 +
                (abStack_218[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + 0xc) =
             (abStack_218[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
        abStack_200[0] =
             (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        if ((uStack_1c4 & 1) != 0) {
          operator_delete(*(void **)auStack_1f8._4_4_);
        }
        uVar31 = 0x51038c;
        std::basic_streambuf<char,std::char_traits<char>_>::setg
                  (abStack_200,(char *)0x0,(char *)0x0,(char *)0x0);
        *puStack_1f0 = 0;
        *puStack_1e0 = 0;
        *puStack_1d0 = 0;
        uStack_1c4 = uStack_1c4 & 0xfffffffe;
        uStack_1c8 = 0;
        std::basic_streambuf<char,std::char_traits<char>_>::
        ~basic_streambuf<char,std::char_traits<char>_>(abStack_200);
        std::basic_iostream<char,std::char_traits<char>_>::
        ~basic_iostream<char,std::char_traits<char>_>
                  ((basic_iostream<char,std::char_traits<char>_> *)auStack_1f8);
        fVar35 = 7.440083e-39;
        std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                  (abStack_1b0);
        local_300 = (float)((int)local_300 + 1);
        puVar27 = puVar27 + 0x1a;
        local_310 = (float)((int)local_310 + -1);
      } while (local_310 != 0.0);
      local_30c = local_30c + 1;
      local_318 = (float)((int)local_318 + -1);
    } while (local_318 != 0.0);
    local_310 = 0.0;
    local_318 = 0.0;
  }
  local_c = CONCAT31(local_c._1_3_,1);
  *(Region **)((int)local_2f8 + local_274 * 4 + 0xbc) = pRVar17;
  if (local_2b8 != (int *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_2b8);
    operator_delete(local_2b8);
    local_2b8 = (int *)0x0;
    local_2b4 = (int *)0x0;
    local_2b0 = (int *)0x0;
  }
  local_c = 0xffffffff;
  if (local_2c4 != (float *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_2c4);
    operator_delete(local_2c4);
  }
  goto LAB_00510493;
}


/* zone_builder @ 00518630  kind=game  attributed-by=ledger  size=474 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00518630(uint param_1,uint param_2)

{
  void **this;
  double *pdVar1;
  Spawn_vftable *pSVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  char *pcVar7;
  double *pdVar8;
  uint uVar9;
  float *pfVar10;
  void *pvVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  void *pvVar17;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *puVar18;
  int *piVar19;
  undefined1 *puVar20;
  uint *puVar21;
  basic_ostream<char,std::char_traits<char>_> *pbVar22;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar23;
  CRefTime *pCVar24;
  long lVar25;
  undefined3 extraout_var_01;
  void *in_ECX;
  uint uVar26;
  int iVar27;
  int iVar28;
  int **ppiVar29;
  Spawn *pSVar30;
  Spawn *pSVar31;
  Spawn_vftable **ppSVar32;
  code *pcVar33;
  Zone *pZVar34;
  int iVar35;
  char *pcVar36;
  bool bVar37;
  float10 fVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  Spawn *pSVar42;
  Spawn *pSVar43;
  byte *pbVar44;
  int *piVar45;
  Spawn *pSVar46;
  undefined8 uVar47;
  ulonglong uVar48;
  undefined4 uVar49;
  int **ppiVar50;
  ulonglong *puVar51;
  undefined4 uVar52;
  int in_stack_ffffe7d0;
  Zone *pZVar53;
  basic_ostream<char,std::char_traits<char>_> local_1820 [160];
  undefined1 local_1780 [12];
  float local_1774;
  float local_1768;
  undefined1 local_1760 [8];
  ulonglong local_1758;
  int local_1750 [2];
  ulonglong local_1748;
  float local_1740;
  undefined4 local_1738 [2];
  int local_1730 [2];
  undefined1 local_1728 [8];
  undefined1 local_1720 [8];
  int local_1718 [2];
  float local_1710;
  undefined1 local_1708 [8];
  int local_1700 [2];
  int local_16f8 [2];
  int local_16f0 [2];
  undefined1 local_16e8 [8];
  float local_16e0;
  int local_16d8 [2];
  int local_16d0 [2];
  float local_16c8;
  undefined1 local_16c0 [8];
  undefined8 local_16b8;
  int local_16b0 [2];
  undefined1 local_16a8 [8];
  undefined1 local_16a0 [8];
  undefined1 local_1698 [8];
  int local_1690 [2];
  undefined1 local_1688 [8];
  undefined1 local_1680 [8];
  undefined1 local_1678 [8];
  int local_1670 [2];
  int local_1668 [4];
  undefined1 local_1658 [8];
  int local_1650 [2];
  int local_1648 [2];
  undefined1 local_1640 [8];
  undefined1 local_1638 [8];
  undefined1 local_1630 [8];
  int local_1628 [2];
  int local_1620 [2];
  undefined1 local_1618 [8];
  int local_1610 [2];
  int local_1608 [2];
  float local_1600;
  undefined1 local_15f8 [8];
  float local_15f0;
  int local_15e8 [2];
  float local_15e0;
  undefined1 local_15d8 [8];
  float local_15d0;
  int local_15c8 [2];
  undefined8 local_15c0;
  int local_15b8 [3];
  float local_15ac;
  float local_15a8;
  float local_15a0;
  float local_159c;
  float local_1594;
  float local_1590;
  Spawn *pSStack_1588;
  Spawn *pSStack_1584;
  int *piStack_1580;
  Spawn *pSStack_157c;
  undefined4 local_1578 [4];
  int local_1568;
  int local_1564;
  uint local_1560;
  int local_155c;
  Spawn *local_1558;
  Spawn *local_1554;
  int *local_1550;
  int local_154c;
  undefined8 local_1548;
  Spawn *pSStack_1540;
  int *piStack_153c;
  undefined8 local_1538;
  uint local_1530 [2];
  int local_1528 [2];
  float local_1520 [4];
  undefined1 local_150f [3];
  uint local_150c;
  uint local_1508;
  undefined8 local_1504;
  uint local_14fc;
  uint local_14f8;
  Spawn *local_14f4;
  int *local_14f0;
  uint local_14ec;
  uint local_14e8;
  undefined8 local_14e4;
  uint local_14dc;
  uint local_14d8;
  Spawn *local_14d4;
  Spawn *local_14d0;
  uint local_14cc;
  uint local_14c8;
  undefined1 local_14c2 [2];
  int local_14c0;
  undefined4 local_14bc;
  int local_14b8;
  undefined4 local_14b4;
  Spawn *pSStack_14b0;
  undefined4 local_14ac;
  int local_14a8;
  undefined4 local_14a4;
  undefined4 local_14a0;
  Spawn *pSStack_149c;
  undefined4 local_1498;
  int local_1494;
  undefined8 local_1490;
  undefined8 local_1488;
  undefined8 local_1480;
  undefined8 local_1478;
  undefined8 local_1470;
  undefined8 local_1468;
  int local_1460;
  int local_145c;
  undefined4 local_1458 [2];
  undefined4 local_1450 [2];
  void *local_1448;
  undefined4 local_1444;
  undefined4 local_1440;
  undefined1 local_143c;
  undefined1 local_143b;
  undefined1 local_143a;
  undefined1 local_1439;
  undefined2 local_1438;
  undefined1 local_1436;
  undefined1 local_1435;
  undefined2 local_1434;
  undefined1 local_1432;
  undefined2 local_1430;
  undefined1 local_142e;
  undefined1 local_142d;
  undefined2 local_142c;
  undefined1 local_142a;
  undefined2 local_1428;
  undefined1 local_1426;
  undefined1 local_1425;
  undefined2 local_1424;
  undefined2 local_1422;
  uint local_1420;
  undefined2 local_141c;
  undefined1 local_141a;
  undefined2 local_1418;
  undefined1 local_1416;
  undefined1 local_1415;
  undefined2 local_1414;
  undefined1 local_1412;
  int *local_1410;
  int *local_140c;
  undefined4 local_1408;
  undefined2 local_1400;
  undefined1 local_13fe;
  undefined1 local_13fd;
  undefined2 local_13fc;
  undefined1 local_13fa;
  undefined1 local_13f9;
  Spawn *local_13f8;
  undefined2 local_13f4;
  undefined1 local_13f2;
  undefined1 local_13f1;
  undefined2 local_13f0;
  undefined1 local_13ee;
  undefined1 local_13ed;
  undefined2 local_13ec;
  undefined1 local_13ea;
  undefined2 local_13e8;
  undefined1 local_13e6;
  int local_13e4;
  undefined2 local_13e0;
  undefined1 local_13de;
  undefined1 local_13dd;
  int local_13dc;
  undefined2 local_13d8;
  undefined1 local_13d6;
  int local_13d4;
  undefined2 local_13d0;
  undefined1 local_13ce;
  undefined2 local_13cc;
  undefined1 local_13ca;
  Spawn *local_13c8;
  int local_13c4;
  undefined8 local_13c0;
  undefined8 local_13b8;
  Zone *local_13b0;
  undefined8 local_13ac;
  int local_13a4;
  int local_13a0;
  int local_139c;
  float local_1398;
  byte local_1394 [4];
  int **local_1390;
  int **local_138c;
  Spawn *local_1388;
  byte local_1384 [4];
  int local_1380;
  int *local_137c;
  int local_1378;
  undefined1 *local_1374;
  undefined2 local_1370;
  undefined1 local_136e;
  byte local_136d;
  byte *local_136c;
  uint local_1368;
  Spawn *local_1364;
  uint local_1360;
  Spawn *local_135c;
  undefined8 local_1358;
  undefined4 local_1350;
  Spawn *local_134c;
  float local_1348;
  undefined8 local_1344;
  Spawn *local_133c;
  Spawn *local_1338;
  Spawn *local_1334;
  Spawn *local_1330;
  Spawn *local_132c;
  Spawn *local_1328;
  Spawn *local_1324;
  Spawn *local_1320;
  undefined4 local_131c;
  Spawn *local_1318;
  Spawn *local_1314;
  byte local_130d;
  Zone *local_130c;
  int *local_1308;
  Spawn *local_1304;
  Spawn *local_1300;
  Spawn *local_12fc;
  Spawn *local_12f8;
  int *local_12f4;
  Spawn *local_12f0;
  Spawn *local_12ec;
  Spawn *local_12e8;
  void *local_12e4;
  Spawn *local_12e0;
  Spawn *local_12dc;
  Spawn *local_12d8;
  Spawn *local_12d4;
  Spawn *local_12d0;
  undefined4 local_12cc;
  undefined4 local_12c8 [72];
  int *local_11a8;
  undefined1 local_11a0 [24];
  undefined4 local_1188;
  undefined1 local_1184;
  undefined1 local_1183;
  undefined1 local_1177;
  undefined1 local_1060 [24];
  void *local_1048 [2];
  undefined1 local_1040 [24];
  uint local_1028;
  undefined1 local_1024 [356];
  undefined2 local_ec0 [6];
  undefined1 local_eb4;
  char local_eb3;
  undefined2 local_eb0;
  undefined2 local_da8;
  undefined2 local_d98;
  undefined1 local_c90 [24];
  float local_c78;
  undefined4 local_c74;
  undefined1 local_c70;
  undefined2 local_c60;
  undefined2 local_c50;
  undefined1 local_b48 [24];
  float local_b30;
  undefined4 local_b2c;
  undefined1 local_b28;
  undefined1 local_b18 [24];
  undefined1 local_b00 [24];
  undefined1 local_ae8 [24];
  undefined2 auStack_ad0 [6];
  undefined1 uStack_ac3;
  undefined2 uStack_ac0;
  int iStack_9b8;
  int iStack_9b4;
  int iStack_9b0;
  Spawn *pSStack_9ac;
  Spawn *pSStack_9a8;
  Spawn *pSStack_9a4;
  float fStack_9a0;
  undefined4 uStack_99c;
  void *local_988 [2];
  int local_980;
  int local_97c;
  int local_978;
  Spawn *local_974;
  Spawn *local_970;
  int *local_96c;
  uint local_968;
  undefined4 local_964;
  undefined4 local_960;
  undefined4 local_95c;
  undefined4 *local_940;
  undefined4 *local_93c;
  undefined4 local_938;
  undefined1 local_800 [16];
  double local_7f0 [2];
  float local_7e0 [3];
  float local_7d4 [3];
  undefined4 local_7c8 [6];
  float local_7b0 [3];
  undefined1 local_7a4 [12];
  float local_798 [3];
  undefined1 local_78c [12];
  float local_780 [3];
  float local_774 [3];
  float local_768 [3];
  float local_75c [3];
  float local_750 [3];
  float local_744 [3];
  float local_738 [3];
  float local_72c [3];
  float local_720 [3];
  float local_714 [3];
  float local_708 [3];
  void *local_6fc [2];
  undefined8 local_6f4;
  undefined8 local_6ec;
  float local_6e4;
  Spawn *local_6e0;
  uint local_6dc;
  undefined4 local_6d8;
  undefined4 local_6d4;
  undefined4 local_6d0;
  undefined4 *local_6b4;
  undefined4 *local_6b0;
  undefined4 local_6ac;
  int aiStack_578 [5];
  undefined1 local_564 [24];
  undefined4 local_54c;
  float local_548;
  uint local_52c [2];
  undefined1 local_524 [24];
  undefined4 local_50c;
  float local_508;
  undefined4 local_4ec [2];
  undefined1 local_4e4 [24];
  undefined4 local_4cc;
  float local_4c8;
  undefined4 local_4b4;
  int local_4ac;
  int local_4a8;
  int local_4a0 [2];
  undefined1 local_498 [24];
  float local_480;
  float local_47c;
  uint local_468;
  undefined8 local_460;
  undefined4 local_458;
  int local_454;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  uint local_430 [2];
  undefined1 local_428 [24];
  float local_410;
  float local_40c;
  uint local_3f8;
  int local_3f0;
  int local_3ec;
  int local_3e8;
  Spawn *local_3e4;
  Spawn *local_3e0;
  int *local_3dc;
  undefined8 local_3d8;
  undefined8 local_3d0;
  float local_3c8;
  Spawn *local_3c4;
  int local_3c0;
  int local_3bc;
  int *local_3b8;
  Spawn *local_3b4;
  Spawn *local_3b0;
  Spawn *local_3ac;
  float local_3a8;
  Spawn *local_3a4;
  Spawn_vftable **local_3a0;
  int iStack_39c;
  int local_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  Spawn *pSStack_388;
  Spawn *pSStack_384;
  Spawn *pSStack_380;
  int local_37c [2];
  undefined1 local_374 [24];
  float local_35c;
  float local_358;
  uint local_344;
  Spawn *local_33c;
  int *local_338;
  int local_334;
  Spawn *local_330;
  int local_32c;
  uint local_328;
  int *local_324;
  Spawn *local_320;
  Spawn *local_31c;
  Spawn *local_318;
  float local_314;
  Spawn *local_310;
  uint local_30c [2];
  undefined1 local_304 [24];
  float local_2ec;
  float local_2e8;
  uint local_2d4;
  Spawn *pSStack_2cc;
  Spawn *pSStack_2c8;
  int iStack_2c4;
  Spawn *local_2c0;
  Spawn *local_2bc;
  Spawn *local_2b8;
  uint local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8 [4];
  int local_298;
  int local_294;
  int *piStack_290;
  int iStack_28c;
  void *pvStack_288;
  Spawn *pSStack_284;
  Spawn *pSStack_280;
  int *piStack_27c;
  float local_278;
  float fStack_274;
  float local_270;
  float local_26c;
  float fStack_268;
  float local_264;
  int *piStack_260;
  int iStack_25c;
  void *pvStack_258;
  Spawn *pSStack_254;
  int *piStack_250;
  Spawn *pSStack_24c;
  float local_248;
  float fStack_244;
  float local_240;
  int **local_23c;
  int **ppiStack_238;
  uint local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  Spawn *local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  float local_20c;
  float fStack_208;
  float local_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  float local_1f4;
  float fStack_1f0;
  float local_1ec;
  float local_1e8;
  float fStack_1e4;
  float local_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  Spawn *local_1c4;
  int local_1c0;
  Spawn *local_1bc;
  int *local_1b8;
  int local_1b4;
  uint local_1b0;
  undefined8 local_1ac;
  float local_1a4;
  undefined8 local_1a0;
  int *local_198;
  int local_194;
  void *local_190;
  int *local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  int *local_170;
  undefined8 local_16c;
  float local_164;
  undefined8 local_160;
  float local_158;
  undefined8 local_154;
  float local_14c;
  undefined8 local_148;
  float local_140;
  undefined8 local_13c;
  float local_134;
  undefined8 local_130;
  float local_128;
  undefined8 local_124;
  float local_11c;
  undefined8 local_118;
  float local_110;
  undefined8 local_10c;
  float local_104;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f4;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c4;
  float local_bc;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  float local_a4;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined8 local_88;
  float local_80;
  undefined8 local_7c;
  float local_74;
  undefined8 local_70;
  float local_68;
  undefined8 local_64;
  float local_5c;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  undefined8 local_44;
  uint local_3c;
  uint uStack_38;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  float local_20;
  undefined8 local_1c;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00555ecd;
  local_10 = ExceptionList;
  pcVar7 = (char *)(DAT_00583cc8 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_1360 = param_1;
  local_1368 = param_2;
  local_14 = pcVar7;
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x10000)) &&
     ((int)param_2 < 0x10000)) {
    local_1328 = (Spawn *)0xffffffff;
    local_1388 = (Spawn *)((int)(((int)param_2 >> 0x1f & 0x3fU) + param_2) >> 6);
    local_13d4 = (int)(param_1 + ((int)param_1 >> 0x1f & 0x3fU)) >> 6;
    local_12e4 = in_ECX;
    do {
      iVar35 = -1;
      do {
        FUN_0050e080(in_ECX,(int)&local_1328->vftablePtr + local_13d4,
                     (int)&local_1388->vftablePtr + iVar35);
        iVar35 = iVar35 + 1;
      } while (iVar35 < 2);
      local_1328 = (Spawn *)((int)&local_1328->vftablePtr + 1);
    } while ((int)local_1328 < 2);
    local_1380 = *(int *)((int)in_ECX +
                         (int)(&local_1388->vftablePtr + local_13d4 * 0x100) * 4 + 0xbc);
    iVar35 = FUN_00406290(in_ECX,local_1360,local_1368);
    if (iVar35 == 0) {
      local_13b0 = operator_new(200);
      local_8 = 0;
      if (local_13b0 == (Zone *)0x0) {
        local_130c = (Zone *)0x0;
      }
      else {
        local_130c = cube::Zone::Zone(local_13b0);
      }
      pZVar34 = local_130c;
      local_8 = 0xffffffff;
      srand(local_1360 + local_1368 * 0x10000 + *(int *)((int)in_ECX + 0x800188));
      local_12e8 = (Spawn *)&(pZVar34->Zone_data).offset_0x5c;
      *(uint *)local_12e8 = local_1360;
      (pZVar34->Zone_data).offset_0x60 = local_1368;
      local_1330 = (Spawn *)(local_1368 * 0x100);
      local_138c = (int **)&(local_1330->Spawn_data).field_0x7c;
      local_135c = (Spawn *)(local_1360 * 0x100);
      local_1390 = (int **)&(local_135c->Spawn_data).field_0x7c;
      FUN_0042e090(in_ECX,(int)local_1390,(int)local_138c);
      pdVar8 = FUN_004d5a80(in_ECX,local_7f0,(int)local_1390,(int)local_138c);
      iVar35 = 0;
      do {
        pdVar1 = pdVar8 + iVar35;
        iVar35 = iVar35 + 1;
        aiStack_578[iVar35] = (int)*pdVar1;
      } while (iVar35 < 2);
      local_1324 = (Spawn *)0x0;
      local_1364 = (Spawn *)0x0;
      local_139c = 0;
      local_1308 = (int *)0x0;
      uVar26 = (int)(local_1360 + ((int)local_1360 >> 0x1f & 7U)) >> 3 & 0x80000007;
      if ((int)uVar26 < 0) {
        uVar26 = (uVar26 - 1 | 0xfffffff8) + 1;
      }
      uVar9 = (int)(local_1368 + ((int)local_1368 >> 0x1f & 7U)) >> 3 & 0x80000007;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
      }
      local_1304 = (Spawn *)((uVar9 + uVar26 * 8) * 0x68 + local_1380 + 0x14018);
      local_13c4 = 0;
      local_13c8 = (Spawn *)FUN_00407be0((undefined4 *)0x0,(undefined4 *)0x0);
      local_1374 = &(local_135c->Spawn_data).field_0xfc;
      local_8._0_1_ = 1;
      local_8._1_3_ = 0;
      local_12dc = local_135c;
      if ((int)local_135c < (int)local_1374) {
        pSVar31 = (Spawn *)&(local_1330->Spawn_data).field_0xfc;
        local_1300 = pSVar31;
        do {
          local_12f0 = local_1330;
          if ((int)local_1330 < (int)pSVar31) {
            local_12d4 = (Spawn *)((uint)local_12dc & 0x800000ff);
            if ((int)local_12d4 < 0) {
              local_12d4 = (Spawn *)(((uint)((int)&local_12d4[-1].Spawn_data.offset_0xf70 + 3) |
                                     0xffffff00) + 1);
            }
            do {
              uVar26 = (uint)local_12f0 & 0x800000ff;
              if ((int)uVar26 < 0) {
                uVar26 = (uVar26 - 1 | 0xffffff00) + 1;
              }
              ppSVar32 = &local_12d4->vftablePtr + uVar26 * 0x40;
              puVar18 = (pZVar34->Zone_data).offset_0xa4;
              fVar38 = (float10)FUN_004f8570(local_12e4,(float)local_12dc,(uint)local_12f0);
              puVar18[(int)ppSVar32 * 8 + 1] = (float)fVar38;
              fVar38 = (float10)FUN_004f8b40(local_12e4,(int)local_12dc,(int)local_12f0);
              puVar18[(int)ppSVar32 * 8 + 2] = (float)fVar38;
              fVar38 = (float10)FUN_00522e20(local_12e4,(int)local_12dc,(int)local_12f0);
              puVar18[(int)ppSVar32 * 8 + 3] = (float)fVar38;
              local_12f0 = (Spawn *)((int)&local_12f0->vftablePtr + 1);
              pSVar31 = local_1300;
            } while ((int)local_12f0 < (int)local_1300);
          }
          local_12dc = (Spawn *)((int)&local_12dc->vftablePtr + 1);
          in_ECX = local_12e4;
        } while ((int)local_12dc < (int)local_1374);
      }
      local_12fc = (Spawn *)FUN_0054a6ce(0x40804);
      local_1328 = local_135c;
      if ((int)local_135c <= (int)&(local_135c->Spawn_data).field_0xfc) {
        puVar15 = &(local_1330->Spawn_data).field_0xfc;
        do {
          pvVar11 = local_12e4;
          local_1300 = local_1330;
          if ((int)local_1330 <= (int)puVar15) {
            local_1314 = (Spawn *)((int)local_12fc + ((int)local_1328 - (int)local_135c) * 4);
            do {
              fVar38 = (float10)FUN_004f9b70(pvVar11,(uint)local_1328,(float)local_1300,(int)pZVar34
                                            );
              local_1314->vftablePtr = (void *)(float)fVar38;
              local_1314 = (Spawn *)((int)local_1314 + 0x404);
              local_1300 = (Spawn *)((int)&local_1300->vftablePtr + 1);
              puVar15 = &(local_1330->Spawn_data).field_0xfc;
              in_ECX = pvVar11;
            } while ((int)local_1300 <= (int)puVar15);
          }
          local_1328 = (Spawn *)((int)&local_1328->vftablePtr + 1);
        } while ((int)local_1328 <= (int)local_1374);
      }
      local_131c = local_135c;
      local_1334 = (Spawn *)0x1;
      if ((int)local_135c < (int)local_1374) {
        puVar15 = &(local_1330->Spawn_data).field_0xfc;
        local_136c = (byte *)&DAT_005842c0;
        local_13a4 = 7;
        local_13a0 = 0x1e;
        do {
          local_12cc = local_1330;
          if ((int)local_1330 < (int)puVar15) {
            local_12d4 = (Spawn *)((uint)local_131c & 0x800000ff);
            if ((int)local_12d4 < 0) {
              local_12d4 = (Spawn *)(((uint)((int)&local_12d4[-1].Spawn_data.offset_0xf70 + 3U) |
                                     0xffffff00) + 1);
            }
            dVar41 = (double)(int)local_131c;
            local_180 = dVar41 * 0.08 + 4234.0;
            local_1470 = dVar41 * 0.08 + 432.0;
            local_13ac = dVar41 * 0.01;
            local_188 = dVar41 * 0.05 + 423432.0;
            local_1468 = local_13ac + 34432.0;
            local_1488 = local_13ac + 435.0;
            local_1480 = dVar41 * 0.04 + 432.0;
LAB_00518bc0:
            in_ECX = local_12e4;
            uVar26 = (uint)local_12cc & 0x800000ff;
            if ((int)uVar26 < 0) {
              uVar26 = (uVar26 - 1 | 0xffffff00) + 1;
            }
            local_12d0 = (Spawn *)((pZVar34->Zone_data).offset_0xa4 +
                                  (int)(&local_12d4->vftablePtr + uVar26 * 0x40) * 8);
            iVar35 = (((int)local_12cc - (int)local_1330) * 0x101 - (int)local_135c) +
                     (int)local_131c;
            local_1300 = *(void **)((int)local_12fc + iVar35 * 4);
            if ((0.3 < ABS((float)local_1300 - *(float *)((int)local_12fc + iVar35 * 4 + 4))) ||
               (local_130d = '\0', pZVar34 = local_130c,
               0.3 < ABS((float)local_1300 - *(float *)((int)local_12fc + iVar35 * 4 + 0x404)))) {
              local_130d = '\x01';
            }
            fVar38 = (float10)FUN_00523d80((uint)local_131c,(float)local_12cc,(float)pZVar34);
            local_12dc = (Spawn *)(float)fVar38;
            if (0.25 < (float)local_12dc) {
              local_1308 = (int *)((int)local_1308 + 1);
            }
            local_1c = (double)(int)local_12cc;
            local_30 = local_1c * 0.08;
            fVar38 = FUN_004d5d30(SUB84(local_1480,0),(int)((ulonglong)local_1480 >> 0x20),
                                  local_1c * 0.04 + 432.0);
            local_12f4 = (int *)(float)fVar38;
            fVar38 = FUN_004d5d30(SUB84(local_1470,0),(int)((ulonglong)local_1470 >> 0x20),
                                  local_30 + 432.0);
            local_12e0 = (Spawn *)(float)fVar38;
            fVar39 = 1.0 - ABS((float)local_12f4 + (float)local_12e0 * 0.05);
            fVar39 = 1.0 - fVar39 * fVar39 * fVar39;
            local_12f4 = (int *)(fVar39 * fVar39 + 0.0);
            fVar38 = FUN_004d5d30(SUB84(local_180,0),(int)((ulonglong)local_180 >> 0x20),
                                  local_30 + 234.0);
            local_12e0 = (Spawn *)(float)fVar38;
            local_1478 = (double)(float)local_12e0 * 0.05;
            fVar38 = FUN_004d5d30(SUB84(local_188,0),(int)((ulonglong)local_188 >> 0x20),
                                  local_1c * 0.05 + 54352.0);
            local_12e0 = (Spawn *)(float)fVar38;
            pvVar11 = *(void **)&(local_1304->Spawn_data).field_0x14;
            fVar39 = (float)(1.0 - ABS(local_1478 + (double)(float)local_12e0));
            fVar39 = 1.0 - fVar39 * fVar39 * fVar39;
            local_12f8 = local_12dc;
            local_1314 = (Spawn *)(fVar39 * fVar39 + (float)local_12f4);
            if ((pvVar11 == (void *)0x6) || (pvVar11 == (void *)0xd)) {
              local_14c8 = ((int)local_12cc >> 0x1f) << 0x10 | (uint)local_12cc >> 0x10;
              local_14cc = (int)local_12cc << 0x10;
              local_1508 = ((int)local_131c >> 0x1f) << 0x10 | (uint)local_131c >> 0x10;
              local_150c = (int)local_131c << 0x10;
              fVar38 = FUN_0052c820((uint *)local_1304,&local_150c,&local_14cc);
              local_12e0 = (Spawn *)(float)fVar38;
              fVar39 = 1.0 - (float)local_12e0;
              if (0.0 < fVar39) {
                fVar39 = fVar39 * fVar39;
              }
              else {
                fVar39 = 0.0;
              }
              fVar39 = fVar39 * 2.0;
              if (1.0 < fVar39) {
                fVar39 = 1.0;
              }
              fVar39 = 1.0 - fVar39 * fVar39;
              local_12f4 = (int *)(1.0 - fVar39 * fVar39);
              fVar38 = FUN_004d5d30(SUB84(local_13ac + 985.0,0),
                                    (int)((ulonglong)(local_13ac + 985.0) >> 0x20),
                                    local_1c * 0.01 + 98584.0);
              local_12e0 = (Spawn *)(float)fVar38;
              fVar39 = (float)local_12e0 * 1.3 + 1.0;
              if (0.0 <= fVar39) {
                if (1.0 < fVar39) {
                  fVar39 = 1.0;
                }
              }
              else {
                fVar39 = 0.0;
              }
              local_12f8 = (Spawn *)((fVar39 * 3.0 * fVar39 - fVar39 * 2.0 * fVar39 * fVar39) *
                                     (float)local_12f4 * 0.4 + (float)local_12dc);
            }
            local_12f4 = (int *)((float)local_12f8 * (float)local_1314);
            fVar39 = (float)local_12f4 * 1.25;
            if (0.0 <= fVar39) {
              if (1.0 < fVar39) {
                fVar39 = 1.0;
              }
            }
            else {
              fVar39 = 0.0;
            }
            local_1348 = fVar39 * 3.0 * fVar39 - fVar39 * 2.0 * fVar39 * fVar39;
            local_30 = local_1c * 0.01;
            fVar38 = FUN_004d5d30(SUB84(local_1468,0),(int)((ulonglong)local_1468 >> 0x20),
                                  local_30 + 8992.0);
            local_12e0 = (Spawn *)(float)fVar38;
            local_1320 = (Spawn *)(((float)local_12e0 + 1.5) * 60.0 * (float)local_12dc +
                                   (float)local_12f4 * 8.0 + (float)local_1300);
            local_12d8 = (Spawn *)(int)(float)local_1320;
            FUN_004f9450(in_ECX,&local_1350,(float)local_131c,(float)local_12cc,(int)local_12d8,
                         (float)*(int **)&local_12d0->Spawn_data,
                         (float)(local_12d0->Spawn_data).offset_0x4,(int)pZVar34);
            if (0.5 < local_1348) {
              local_1350._3_1_ = 6;
            }
            local_1f4 = (float)(byte)local_1350;
            fStack_1f0 = (float)local_1350._1_1_;
            local_1398 = 1.0 - local_1348;
            local_1ec = (float)local_1350._2_1_;
            local_58 = CONCAT44(fStack_1f0 * local_1398,local_1f4 * local_1398);
            local_50 = local_1ec * local_1398;
            pfVar10 = FUN_0052d030(in_ECX,local_7e0,(float)local_131c,(uint)local_12cc,
                                   (int)local_12d8,(int)pZVar34);
            local_f4._0_4_ = (float)*(undefined8 *)pfVar10;
            local_f4._0_4_ = (float)local_f4 * local_1348;
            local_f4._4_4_ = (float)((ulonglong)*(undefined8 *)pfVar10 >> 0x20);
            local_f4._4_4_ = local_f4._4_4_ * local_1348;
            local_ec = pfVar10[2] * local_1348;
            local_100 = CONCAT44(local_f4._4_4_ + local_58._4_4_,(float)local_f4 + (float)local_58);
            local_f8 = local_ec + local_50;
            iVar35 = 0;
            do {
              iVar27 = iVar35 + 1;
              *(char *)((int)&local_1350 + iVar35) =
                   (char)(int)*(float *)((int)&local_100 + iVar35 * 4);
              iVar35 = iVar27;
            } while (iVar27 < 3);
            *(Spawn **)&(local_12d0->Spawn_data).field_0xc = local_12d8;
            if ((float)local_1320 < (float)(int)local_1324) {
              local_1324 = local_12d8;
            }
            local_12f8 = (Spawn *)((float)local_12f8 * 8.0);
            if ((float)(int)local_1364 < (float)local_1320) {
              local_1364 = local_12d8;
            }
            if (1.0 < (float)local_12f8) {
              local_12f8 = (Spawn *)0x3f800000;
            }
            bVar37 = local_130d == '\0';
            local_130d = local_1350._3_1_;
            if (bVar37) {
              puVar13 = (undefined8 *)
                        FUN_004fae90(in_ECX,local_720,(float)local_131c,(uint)local_12cc,
                                     (int)local_12d8,(int)pZVar34);
              local_5c = 1.0 - (float)local_12f8;
              local_64._0_4_ = (float)*puVar13;
              local_64._4_4_ = (float)((ulonglong)*puVar13 >> 0x20);
              local_64 = CONCAT44(local_64._4_4_ * local_5c,(float)local_64 * local_5c);
              local_5c = *(float *)(puVar13 + 1) * local_5c;
              local_26c = (float)(byte)local_1350;
              fStack_268 = (float)local_1350._1_1_;
              local_264 = (float)local_1350._2_1_;
              pfVar10 = FUN_0052d030(in_ECX,local_708,(float)local_131c,(uint)local_12cc,
                                     (int)local_12d8,(int)pZVar34);
              local_b0 = (float)local_12f8 * 0.5;
              local_d0 = CONCAT44(pfVar10[1] + fStack_268,local_26c + *pfVar10);
              local_c8 = pfVar10[2] + local_264;
              fVar39 = (local_26c + *pfVar10) * local_b0;
              fVar40 = (pfVar10[1] + fStack_268) * local_b0;
              local_b8 = CONCAT44(fVar40,fVar39);
              local_b0 = local_c8 * local_b0;
              local_124 = CONCAT44(fVar40 + local_64._4_4_,fVar39 + (float)local_64);
              local_11c = local_b0 + local_5c;
              iVar35 = 0;
              do {
                iVar27 = iVar35 + 1;
                *(char *)((int)&local_1414 + iVar35) =
                     (char)(int)*(float *)((int)&local_124 + iVar35 * 4);
                iVar35 = iVar27;
              } while (iVar27 < 3);
              local_1370 = local_1414;
              local_136e = local_1412;
              local_136d = 6;
              if (*(int *)&(local_12d0->Spawn_data).field_0x18 < 1) {
                FUN_00413420(local_12d0,1,0);
              }
              puVar15 = *(undefined1 **)&(local_12d0->Spawn_data).field_0x14;
              if ((~((byte)puVar15[3] >> 7) & 1) == 0) {
                if ((local_136d & 0x1f) != 0) {
                  *puVar15 = (undefined1)local_1370;
                  puVar15[1] = local_1370._1_1_;
                  puVar15[2] = local_136e;
                  puVar15[3] = local_136d;
                  pbVar44 = (byte *)((int)*(void **)&(local_12d0->Spawn_data).field_0x14 + 3);
                  *pbVar44 = *pbVar44 | 0x80;
                }
              }
              else {
                *puVar15 = (undefined1)local_1370;
                puVar15[1] = local_1370._1_1_;
                puVar15[2] = local_136e;
                puVar15[3] = local_136d;
              }
            }
            else {
              if (*(int *)&(local_12d0->Spawn_data).field_0x18 < 1) {
                FUN_00413420(local_12d0,1,0);
              }
              puVar12 = *(undefined2 **)&(local_12d0->Spawn_data).field_0x14;
              if ((~(*(byte *)((int)puVar12 + 3) >> 7) & 1) == 0) {
                if ((local_130d & 0x1f) != 0) {
                  *puVar12 = (undefined2)local_1350;
                  *(byte *)(puVar12 + 1) = local_1350._2_1_;
                  *(byte *)((int)puVar12 + 3) = local_130d;
                  pbVar44 = (byte *)((int)*(void **)&(local_12d0->Spawn_data).field_0x14 + 3);
                  *pbVar44 = *pbVar44 | 0x80;
                }
              }
              else {
                *puVar12 = (undefined2)local_1350;
                *(byte *)(puVar12 + 1) = local_1350._2_1_;
                *(byte *)((int)puVar12 + 3) = local_130d;
              }
            }
            if (*(int *)&(local_12d0->Spawn_data).field_0x18 < 2) {
              FUN_00413420(local_12d0,2,0);
            }
            pvVar11 = *(void **)&(local_12d0->Spawn_data).field_0x14;
            if ((~(*(byte *)((int)pvVar11 + 7) >> 7) & 1) == 0) {
              if ((local_130d & 0x1f) != 0) {
                *(undefined2 *)((int)pvVar11 + 4) = (undefined2)local_1350;
                *(byte *)((int)pvVar11 + 6) = local_1350._2_1_;
                *(byte *)((int)pvVar11 + 7) = local_130d;
                pbVar44 = (byte *)((int)*(void **)&(local_12d0->Spawn_data).field_0x14 + 7);
                *pbVar44 = *pbVar44 | 0x80;
              }
            }
            else {
              *(undefined2 *)((int)pvVar11 + 4) = (undefined2)local_1350;
              *(byte *)((int)pvVar11 + 6) = local_1350._2_1_;
              *(byte *)((int)pvVar11 + 7) = local_130d;
            }
            if ((local_130d & 0x1f) == 4) {
              local_139c = local_139c + 1;
            }
            *(int **)&(local_12d0->Spawn_data).field_0x10 =
                 *(int **)&(local_12d0->Spawn_data).field_0xc + -2;
            fVar38 = FUN_004d5d30(SUB84(local_1488,0),(int)((ulonglong)local_1488 >> 0x20),
                                  local_30 + 847.0);
            local_12e0 = (Spawn *)(float)fVar38;
            local_132c = (Spawn *)(((float)local_12e0 + 1.0) * 20.0 + (float)local_1300);
            if ((float)local_132c < (float)local_1320) {
              dVar41 = (double)(int)local_131c * 0.005 + (double)*(int *)((int)in_ECX + 0x800178);
              fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                    local_1c * 0.005 + (double)*(int *)((int)in_ECX + 0x80017c));
              local_12e0 = (Spawn *)(float)fVar38;
              dVar41 = (double)*(int *)((int)in_ECX + 0x800178) + local_13ac;
              fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                    (double)*(int *)((int)in_ECX + 0x80017c) + local_30);
              local_12f4 = (int *)(float)fVar38;
              fVar39 = 1.0 - ABS((float)local_12e0 + (float)local_12f4) * 4.0;
              if (fVar39 < 0.0) goto LAB_0051a8e8;
              fVar40 = 1.0 - fVar39 * fVar39;
              local_12f4 = (int *)(1.0 - fVar40 * fVar40);
              fVar39 = 1.0 - fVar39 * fVar39;
              local_133c = (Spawn *)(1.0 - fVar39 * fVar39 * fVar39 * fVar39);
              dVar41 = (double)(int)local_131c * 0.03 + 7635.0;
              fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                    local_1c * 0.03 + 123847.0);
              local_12e0 = (Spawn *)(float)fVar38;
              fVar39 = ((float)local_12e0 * 10.0 + (((float)local_1320 - (float)local_132c) - 20.0))
                       / 10.0;
              if (0.0 <= fVar39) {
                if (1.0 < fVar39) {
                  fVar39 = 1.0;
                }
              }
              else {
                fVar39 = 0.0;
              }
              fVar40 = 1.0 - fVar39 * fVar39;
              fVar39 = 1.0 - fVar39;
              local_12f0 = (Spawn *)(1.0 - fVar40 * fVar40);
              fVar39 = fVar39 * fVar39 * fVar39 * fVar39 * fVar39 * fVar39 * fVar39;
              local_12f8 = (Spawn *)((((float)local_12dc * 20.0 + 4.0) * (float)local_12f4 +
                                     (float)local_132c) * (1.0 - fVar39) +
                                    ((float)local_1320 + 2.0) * fVar39);
              fVar39 = (float)local_1314 * (float)local_12dc * 6.0 + (float)local_132c;
              local_1318 = (Spawn *)((1.0 - (float)local_133c) * (float)local_1320 +
                                     (float)local_133c * fVar39 + 2.0);
              if (fVar39 < (float)local_1320 - 2.0) {
                local_12e0 = (Spawn *)(1.0 - (float)local_12f0);
                local_1328 = (Spawn *)0x0;
                do {
                  pvVar11 = (void *)FUN_00406100(in_ECX,(uint)local_131c,(uint)local_12cc,
                                                 (int)pZVar34);
                  if (pvVar11 == (void *)0x0) {
                    pbVar44 = &DAT_005842c4;
                  }
                  else {
                    iVar35 = *(int *)((int)pvVar11 + 0x10);
                    if ((int)local_12d8 < iVar35) {
                      pbVar44 = &DAT_005842c4;
                    }
                    else if ((int)local_12d8 < *(int *)((int)pvVar11 + 0x1c) + iVar35) {
                      pbVar44 = FUN_00405f20(pvVar11,(int)local_12d8 - iVar35);
                      if ((((pbVar44[3] & 0x1f) == 0) && ((int)local_12d8 < 1)) &&
                         ((pbVar44[3] & 0x40) == 0)) {
                        pbVar44 = &DAT_005842bc;
                      }
                    }
                    else {
                      pbVar44 = &DAT_005842bc;
                      if (0 < (int)local_12d8) {
                        pbVar44 = local_136c;
                      }
                    }
                  }
                  local_1394[0] = *pbVar44;
                  local_1394[1] = pbVar44[1];
                  local_1394[2] = pbVar44[2];
                  local_1394[3] = pbVar44[3];
                  pfVar10 = FUN_0052d030(in_ECX,local_780,(float)local_131c,(uint)local_12cc,
                                         (int)((float)(int)local_1328 + (float)local_1320),
                                         (int)pZVar34);
                  local_20c = (float)local_1394[0];
                  fStack_208 = (float)local_1394[1];
                  local_148._0_4_ = (float)*(undefined8 *)pfVar10;
                  local_148._0_4_ = (float)local_12e0 * (float)local_148;
                  local_204 = (float)local_1394[2];
                  local_148._4_4_ = (float)((ulonglong)*(undefined8 *)pfVar10 >> 0x20);
                  local_148._4_4_ = (float)local_12e0 * local_148._4_4_;
                  local_140 = (float)local_12e0 * pfVar10[2];
                  local_e8 = CONCAT44(fStack_208 * (float)local_12f0,local_20c * (float)local_12f0);
                  local_e0 = local_204 * (float)local_12f0;
                  local_13c = CONCAT44(fStack_208 * (float)local_12f0 + local_148._4_4_,
                                       local_20c * (float)local_12f0 + (float)local_148);
                  local_134 = local_e0 + local_140;
                  iVar35 = 0;
                  do {
                    iVar27 = iVar35 + 1;
                    local_1394[iVar35] = (byte)(int)*(float *)((int)&local_13c + iVar35 * 4);
                    iVar35 = iVar27;
                  } while (iVar27 < 3);
                  FUN_0041ff00(in_ECX,(float)local_131c,(uint)local_12cc,(int)local_12d8,local_1394,
                               (int)pZVar34);
                  local_12d8 = (Spawn *)((int)&local_12d8->vftablePtr + 1);
                  local_1328 = (Spawn *)((int)&local_1328->vftablePtr + 1);
                } while ((int)local_1328 < 2);
              }
              if ((float)local_12f8 <= (float)local_1318) goto LAB_0051a8e8;
              local_143c = (undefined1)DAT_005842c0;
              local_143a = DAT_005842c0._2_1_;
              local_1439 = DAT_005842c0._3_1_;
              local_143b = (undefined1)((uint)DAT_005842c0 >> 8);
              local_13d0 = 0;
              local_13e0 = 0;
              local_13dd = 0;
              local_13ce = 0;
              local_13de = 0;
              if ((float)local_12f8 < (float)local_1320) {
                local_13dd = 0x40;
              }
              local_1300 = (Spawn *)(int)(float)local_1318;
              local_1328 = local_1300;
              if ((float)(int)local_1300 < (float)local_12f8) {
                do {
                  if ((int)local_1300 < 1) {
                    local_13cc = 0;
                    local_1424 = 0;
                    local_13ca = 0;
                    local_1422 = 0x200;
                    puVar12 = &local_1424;
                  }
                  else {
                    puVar12 = &local_13e0;
                  }
                  FUN_0041ff00(in_ECX,(float)local_131c,(uint)local_12cc,(int)local_1300,
                               (undefined1 *)puVar12,(int)pZVar34);
                  local_1300 = (Spawn *)((int)&local_1300->vftablePtr + 1);
                } while ((float)(int)local_1300 < (float)local_12f8);
              }
              local_12dc = (Spawn *)(int)((float)local_1318 - 1.0);
              FUN_004f9450(in_ECX,(undefined4 *)local_1384,(float)local_131c,(float)local_12cc,
                           (int)local_12dc,(float)*(int **)&local_12d0->Spawn_data,
                           (float)(local_12d0->Spawn_data).offset_0x4,(int)pZVar34);
              if ((0.5 < local_1348) || (0.5 < (float)local_12f0)) {
                local_1384[3] = 6;
              }
              local_278 = (float)local_1384[0];
              fStack_274 = (float)local_1384[1];
              local_270 = (float)local_1384[2];
              local_74 = 1.0 - (float)local_12f0;
              local_7c = CONCAT44(fStack_274 * local_74,local_278 * local_74);
              local_74 = local_270 * local_74;
              pfVar10 = FUN_0052d030(in_ECX,local_738,(float)local_131c,(uint)local_12cc,
                                     (int)local_12dc,(int)pZVar34);
              puVar13 = (undefined8 *)
                        FUN_004fae90(local_12e4,local_7b0,(float)local_131c,(uint)local_12cc,
                                     (int)local_12dc,(int)pZVar34);
              in_ECX = local_12e4;
              local_88._0_4_ = (float)*puVar13;
              local_88._0_4_ = (float)local_88 + *pfVar10;
              local_98 = (float)local_12f0 * 0.4;
              local_88._4_4_ = (float)((ulonglong)*puVar13 >> 0x20);
              local_88._4_4_ = pfVar10[1] + local_88._4_4_;
              local_80 = pfVar10[2] + *(float *)(puVar13 + 1);
              fVar39 = (float)local_88 * local_98;
              fVar40 = local_88._4_4_ * local_98;
              local_a0 = CONCAT44(fVar40,fVar39);
              local_98 = local_80 * local_98;
              local_130 = CONCAT44(fVar40 + local_7c._4_4_,fVar39 + (float)local_7c);
              local_128 = local_98 + local_74;
              iVar35 = 0;
              do {
                iVar27 = iVar35 + 1;
                local_1384[iVar35] = (byte)(int)*(float *)((int)&local_130 + iVar35 * 4);
                iVar35 = iVar27;
              } while (iVar27 < 3);
              local_1d0 = (float)local_1384[0];
              fStack_1cc = (float)local_1384[1];
              local_1c8 = (float)local_1384[2];
              local_70 = CONCAT44(fStack_1cc * local_1398,local_1d0 * local_1398);
              local_68 = local_1c8 * local_1398;
              pfVar10 = FUN_0052d030(local_12e4,local_750,(float)local_131c,(uint)local_12cc,
                                     (int)local_12dc,(int)pZVar34);
              local_ac._0_4_ = (float)*(undefined8 *)pfVar10;
              local_ac._0_4_ = (float)local_ac * local_1348;
              local_ac._4_4_ = (float)((ulonglong)*(undefined8 *)pfVar10 >> 0x20);
              local_ac._4_4_ = local_ac._4_4_ * local_1348;
              local_a4 = pfVar10[2] * local_1348;
              local_10c = CONCAT44(local_ac._4_4_ + local_70._4_4_,(float)local_ac + (float)local_70
                                  );
              local_104 = local_a4 + local_68;
              iVar35 = 0;
              do {
                iVar27 = iVar35 + 1;
                local_1384[iVar35] = (byte)(int)*(float *)((int)&local_10c + iVar35 * 4);
                iVar35 = iVar27;
              } while (iVar27 < 3);
              FUN_0041ff00(in_ECX,(float)local_131c,(uint)local_12cc,(int)local_12dc,local_1384,
                           (int)pZVar34);
              if (((2.0 < (float)local_12f8 - (float)local_1318) &&
                  (((int)&local_131c->vftablePtr + (int)local_12cc * 3) % local_13a4 == 0)) &&
                 (iVar35 = rand(), iVar35 % local_13a0 == 0)) {
                uVar26 = rand();
                uVar26 = uVar26 & 0x80000003;
                if ((int)uVar26 < 0) {
                  uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
                }
                switch(uVar26) {
                case 0:
                  if ((float)local_12f8 <= (float)local_1320) {
                    uVar26 = rand();
                    uVar26 = uVar26 & 0x80000003;
                    bVar37 = uVar26 == 0;
                    if ((int)uVar26 < 0) {
                      bVar37 = (uVar26 - 1 | 0xfffffffc) == 0xffffffff;
                    }
                    if (bVar37) {
                      FUN_0041d8d0(auStack_ad0);
                      uStack_ac0 = 1;
                      pSStack_1584 = (Spawn *)(((int)local_1328 >> 0x1f) << 0x10 |
                                              (uint)local_1328 >> 0x10);
                      pSStack_1588 = (Spawn *)((int)local_1328 << 0x10);
                      local_1328 = (Spawn *)(((int)local_12cc >> 0x1f) << 0x10 |
                                            (uint)local_12cc >> 0x10);
                      auStack_ad0[0] = 0x130b;
                      uStack_ac3 = 9;
                      uVar9 = (int)local_12cc * 0x10000;
                      local_1314 = pSStack_1584;
                      local_1300 = pSStack_1588;
                      uVar48 = FUN_0054a946();
                      iVar35 = (int)(uVar48 >> 0x20);
                      uVar26 = (uint)uVar48;
                      iStack_9b0 = uVar9 - uVar26;
                      local_1328 = (Spawn *)((int)local_1328 + (-(uint)(uVar9 < uVar26) - iVar35));
                      iStack_9b8 = (int)local_131c * 0x10000 - uVar26;
                      iStack_9b4 = ((((int)local_131c >> 0x1f) << 0x10 | (uint)local_131c >> 0x10) -
                                   iVar35) - (uint)((uint)((int)local_131c * 0x10000) < uVar26);
                      pSStack_384 = local_1300;
                      pSStack_380 = local_1314;
                      pSStack_9a8 = local_1300;
                      pSStack_9a4 = local_1314;
                      uStack_99c = 0x3dcccccd;
                      pSStack_9ac = local_1328;
                      iStack_394 = iStack_9b8;
                      iStack_390 = iStack_9b4;
                      iStack_38c = iStack_9b0;
                      pSStack_388 = local_1328;
                      iVar35 = rand();
                      pZVar34 = local_130c;
                      fStack_9a0 = ((float)iVar35 * 6.2831855) / 32767.0;
                      FUN_0041f5b0(&(local_130c->Zone_data).offset_0x2c,(undefined1 *)auStack_ad0);
                      in_ECX = local_12e4;
                    }
                  }
                  break;
                case 1:
                  if ((float)local_12f8 <= (float)local_1320) {
                    pSVar31 = operator_new(0x10f0);
                    if (pSVar31 == (Spawn *)0x0) {
                      pSStack_149c = (Spawn *)0x0;
                    }
                    else {
                      pSStack_149c = cube::Spawn::Spawn(pSVar31);
                    }
                    piStack_153c = (int *)(((int)local_1328 >> 0x1f) << 0x10 |
                                          (uint)local_1328 >> 0x10);
                    pSStack_1540 = (Spawn *)((int)local_1328 << 0x10);
                    local_1328 = (Spawn *)(((int)local_12cc >> 0x1f) << 0x10 |
                                          (uint)local_12cc >> 0x10);
                    uVar9 = (int)local_12cc * 0x10000;
                    local_1300 = pSStack_149c;
                    local_12f4 = piStack_153c;
                    local_12e0 = pSStack_1540;
                    uVar48 = FUN_0054a946();
                    pSVar31 = local_1300;
                    iVar35 = (int)(uVar48 >> 0x20);
                    uVar26 = (uint)uVar48;
                    pvStack_288 = (void *)(uVar9 - uVar26);
                    local_1328 = (Spawn *)((int)local_1328 + (-(uint)(uVar9 < uVar26) - iVar35));
                    piStack_290 = (int *)((int)local_131c * 0x10000 - uVar26);
                    pSStack_280 = local_12e0;
                    piStack_27c = local_12f4;
                    iStack_28c = ((((int)local_131c >> 0x1f) << 0x10 | (uint)local_131c >> 0x10) -
                                 iVar35) - (uint)((uint)((int)local_131c * 0x10000) < uVar26);
                    *(int **)&(local_1300->Spawn_data).field_0xc = piStack_290;
                    *(int *)&(local_1300->Spawn_data).field_0x10 = iStack_28c;
                    *(void **)&(local_1300->Spawn_data).field_0x14 = pvStack_288;
                    *(Spawn **)&(local_1300->Spawn_data).field_0x18 = local_1328;
                    *(Spawn **)&(local_1300->Spawn_data).field_0x1c = local_12e0;
                    *(int **)&(local_1300->Spawn_data).field_0x20 = local_12f4;
                    (local_1300->Spawn_data).offset_0x30 = 1;
                    (local_1300->Spawn_data).offset_0x24 = 6;
                    (local_1300->Spawn_data).offset_0xf54 = 0x41c80000;
                    pSStack_284 = local_1328;
                    iVar35 = rand();
                    iVar35 = iVar35 % 10;
                    if (iVar35 == 0) {
                      (pSVar31->Spawn_data).offset_0x28 = 0x83;
                    }
                    else if (iVar35 == 1) {
                      (pSVar31->Spawn_data).offset_0x28 = 0x85;
                    }
                    else if (iVar35 == 3) {
                      iVar35 = rand();
                      switch(iVar35 % 100) {
                      case 0:
                        (pSVar31->Spawn_data).offset_0x28 = 0x8a;
                        break;
                      case 1:
                      case 2:
                      case 3:
                        (pSVar31->Spawn_data).offset_0x28 = 0x89;
                        break;
                      case 4:
                      case 5:
                      case 6:
                      case 7:
                      case 8:
                        (pSVar31->Spawn_data).offset_0x28 = 0x88;
                        break;
                      default:
                        (pSVar31->Spawn_data).offset_0x28 = 0x87;
                      }
                    }
                    else {
                      (pSVar31->Spawn_data).offset_0x28 = 0x84;
                    }
                    pZVar34 = local_130c;
                    FUN_004f2be0(&(local_130c->Zone_data).offset_0x14,&pSStack_149c);
                    in_ECX = local_12e4;
                  }
                  break;
                case 2:
                  if ((float)local_12f8 <= (float)local_1320) {
                    pSVar31 = operator_new(0x10f0);
                    if (pSVar31 == (Spawn *)0x0) {
                      pSStack_14b0 = (Spawn *)0x0;
                    }
                    else {
                      pSStack_14b0 = cube::Spawn::Spawn(pSVar31);
                    }
                    pSStack_157c = (Spawn *)(((int)local_1328 >> 0x1f) << 0x10 |
                                            (uint)local_1328 >> 0x10);
                    piStack_1580 = (int *)((int)local_1328 << 0x10);
                    local_1314 = (Spawn *)(((int)local_12cc >> 0x1f) << 0x10 |
                                          (uint)local_12cc >> 0x10);
                    pSVar43 = (Spawn *)((int)local_12cc * 0x10000);
                    local_133c = pSVar43;
                    local_132c = pSStack_157c;
                    local_1300 = pSStack_14b0;
                    local_12f4 = piStack_1580;
                    uVar48 = FUN_0054a946();
                    in_ECX = local_12e4;
                    pSVar31 = local_1300;
                    iVar35 = (int)(uVar48 >> 0x20);
                    pSVar30 = (Spawn *)uVar48;
                    pvStack_258 = (void *)((int)pSVar43 - (int)pSVar30);
                    local_12e0 = (Spawn *)((int)local_1314 + (-(uint)(pSVar43 < pSVar30) - iVar35));
                    local_1398 = (float)(((int)local_131c >> 0x1f) << 0x10 |
                                        (uint)local_131c >> 0x10);
                    local_1328 = (Spawn *)((int)local_131c * 0x10000);
                    piStack_260 = (int *)((int)local_1328 - (int)pSVar30);
                    piStack_250 = local_12f4;
                    iStack_25c = ((int)local_1398 - iVar35) - (uint)(local_1328 < pSVar30);
                    pSStack_24c = local_132c;
                    *(int **)&(local_1300->Spawn_data).field_0xc = piStack_260;
                    *(int *)&(local_1300->Spawn_data).field_0x10 = iStack_25c;
                    *(void **)&(local_1300->Spawn_data).field_0x14 = pvStack_258;
                    *(Spawn **)&(local_1300->Spawn_data).field_0x18 = local_12e0;
                    *(int **)&(local_1300->Spawn_data).field_0x1c = local_12f4;
                    *(Spawn **)&(local_1300->Spawn_data).field_0x20 = local_132c;
                    pSStack_254 = local_12e0;
                    uVar26 = FUN_004d2340(local_12e4,(uint)local_1328,(uint)local_1398,
                                          CONCAT44(local_1314,local_133c));
                    pZVar34 = local_130c;
                    (pSVar31->Spawn_data).offset_0x30 = uVar26;
                    (pSVar31->Spawn_data).offset_0x24 = 1;
                    (pSVar31->Spawn_data).offset_0x28 = 0x3b;
                    FUN_004f2be0(&(local_130c->Zone_data).offset_0x14,&pSStack_14b0);
                  }
                  break;
                case 3:
                  pSStack_2cc = local_131c;
                  pSStack_2c8 = local_12cc;
                  iStack_2c4 = (int)((float)local_1318 + 2.0);
                  iVar35 = FUN_004d9b70(&local_13c8->vftablePtr,
                                        *(undefined4 **)&local_13c8->Spawn_data,&pSStack_2cc);
                  if (local_13c4 == 0xccccccb) goto LAB_0051d544;
                  local_13c4 = local_13c4 + 1;
                  *(int *)&local_13c8->Spawn_data = iVar35;
                  **(int **)(iVar35 + 4) = iVar35;
                }
              }
            }
            if (*(void **)&(local_1304->Spawn_data).field_0x14 == (void *)0x4) {
              local_14f8 = ((int)local_12cc >> 0x1f) << 0x10 | (uint)local_12cc >> 0x10;
              local_14fc = (int)local_12cc << 0x10;
              local_14e8 = ((int)local_131c >> 0x1f) << 0x10 | (uint)local_131c >> 0x10;
              local_14ec = (int)local_131c << 0x10;
              fVar38 = FUN_0052c820((uint *)local_1304,&local_14ec,&local_14fc);
              local_12e0 = (Spawn *)(float)fVar38;
              if (((float)local_12e0 < 0.25) &&
                 (local_12dc = (Spawn *)(int)(*(float *)&(local_1304->Spawn_data).field_0x10 - 25.0)
                 , (int)*(int **)&(local_12d0->Spawn_data).field_0xc <= (int)local_12dc)) {
                do {
                  puVar14 = FUN_00405fd0(in_ECX,(uint)local_131c,(uint)local_12cc,(int)local_12dc,
                                         (int)pZVar34);
                  if (((puVar14[3] & 0x1f) == 0) || ((puVar14[3] & 0x1f) == 2)) {
                    puVar12 = (undefined2 *)&DAT_005842bc;
                  }
                  else {
                    pfVar10 = FUN_0052d030(in_ECX,local_798,(float)local_131c,(uint)local_12cc,
                                           (int)local_12dc,(int)pZVar34);
                    iVar35 = 0;
                    do {
                      iVar27 = iVar35 + 1;
                      *(char *)((int)&local_1434 + iVar35) = (char)(int)pfVar10[iVar35];
                      iVar35 = iVar27;
                    } while (iVar27 < 3);
                    local_13f0 = local_1434;
                    local_13ee = local_1432;
                    puVar12 = &local_13f0;
                    local_13ed = 3;
                  }
                  FUN_0041ff00(in_ECX,(float)local_131c,(uint)local_12cc,(int)local_12dc,
                               (undefined1 *)puVar12,(int)pZVar34);
                  local_12dc = (Spawn *)((int)&local_12dc[-1].Spawn_data.offset_0xf70 + 3);
                } while ((int)*(int **)&(local_12d0->Spawn_data).field_0xc <= (int)local_12dc);
              }
            }
LAB_0051a8e8:
            local_12cc = (Spawn *)((int)&local_12cc->vftablePtr + 1);
            puVar15 = &(local_1330->Spawn_data).field_0xfc;
            if ((int)puVar15 <= (int)local_12cc) goto LAB_0051a91e;
            goto LAB_00518bc0;
          }
LAB_0051a91e:
          local_131c = (Spawn *)((int)&local_131c->vftablePtr + 1);
        } while ((int)local_131c < (int)local_1374);
      }
      operator_delete__(local_12fc);
      uVar26 = local_1360 & 0x8000003f;
      if ((int)uVar26 < 0) {
        uVar26 = (uVar26 - 1 | 0xffffffc0) + 1;
      }
      uVar9 = local_1368 & 0x8000003f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
      }
      local_13b0 = (Zone *)(uVar9 + uVar26 * 0x40);
      local_1348 = (float)((int)local_13b0 * 0x10);
      uVar47 = *(undefined8 *)((int)local_1348 + 0x18 + local_1380);
      (pZVar34->Zone_data).offset_0x74 = (int)uVar47;
      (pZVar34->Zone_data).offset_0x78 = (int)((ulonglong)uVar47 >> 0x20);
      uVar47 = *(undefined8 *)((int)local_1348 + 0x20 + local_1380);
      (pZVar34->Zone_data).offset_0x7c = (int)uVar47;
      (pZVar34->Zone_data).offset_0x80 = (char)((ulonglong)uVar47 >> 0x20);
      *(int3 *)&(pZVar34->Zone_data).field_0x81 = (int3)((ulonglong)uVar47 >> 0x28);
      local_1378 = 0;
      local_137c = (int *)FUN_004f7b60((undefined4 *)0x0,(undefined4 *)0x0);
      local_8 = CONCAT31(local_8._1_3_,2);
      iVar35 = FUN_00406100(in_ECX,(uint)local_1390,(uint)local_138c,(int)pZVar34);
      if (iVar35 == 0) {
        fVar38 = (float10)FUN_004f8570(in_ECX,(float)local_1390,(uint)local_138c);
        local_1300 = (Spawn *)(float)fVar38;
        local_12d4 = local_1300;
      }
      else {
        local_1300 = *(Spawn **)(iVar35 + 4);
      }
      iVar35 = FUN_00406100(in_ECX,(uint)local_1390,(uint)local_138c,(int)pZVar34);
      if (iVar35 == 0) {
        fVar38 = (float10)FUN_004f8b40(in_ECX,(int)local_1390,(int)local_138c);
        local_1314 = (Spawn *)(float)fVar38;
        local_12d4 = local_1314;
      }
      else {
        local_1314 = *(Spawn **)(iVar35 + 8);
      }
      if (*(void **)&(local_1304->Spawn_data).field_0x14 == (void *)0x6) {
        local_1318 = (Spawn *)0x0;
        do {
          local_12dc = (Spawn *)0x0;
          do {
            uVar26 = rand();
            uVar26 = uVar26 & 0x80000003;
            bVar37 = uVar26 == 0;
            if ((int)uVar26 < 0) {
              bVar37 = (uVar26 - 1 | 0xfffffffc) == 0xffffffff;
            }
            if (!bVar37) {
              local_12f0 = (Spawn *)((pZVar34->Zone_data).offset_0x5c * 0x100 + (int)local_1318 / 3
                                    + 0x2a);
              local_1308 = (int *)((pZVar34->Zone_data).offset_0x60 * 0x100 + (int)local_12dc / 3 +
                                  0x2a);
              local_14f0 = (int *)(((int)local_1308 >> 0x1f) << 0x10 | (uint)local_1308 >> 0x10);
              local_14f4 = (Spawn *)((int)local_1308 * 0x10000);
              local_14d0 = (Spawn *)(((int)local_12f0 >> 0x1f) << 0x10 | (uint)local_12f0 >> 0x10);
              local_14d4 = (Spawn *)((int)local_12f0 * 0x10000);
              local_133c = local_14d0;
              local_132c = local_14d4;
              local_12f4 = local_14f0;
              local_12e0 = local_14f4;
              fVar38 = FUN_0052c820((uint *)local_1304,(uint *)&local_14d4,(uint *)&local_14f4);
              local_12d4 = (Spawn *)(float)fVar38;
              fVar39 = 1.0 - (float)local_12d4;
              if ((0.0 < fVar39) && (0.5 <= fVar39 * fVar39)) {
                for (piVar45 = (int *)*local_137c; piVar45 != local_137c; piVar45 = (int *)*piVar45)
                {
                  local_1344 = (double)CONCAT44((int)local_12f4 +
                                                (-(uint)(local_12e0 < (Spawn *)piVar45[4]) -
                                                piVar45[5]),(int)local_12e0 - piVar45[4]);
                  local_1358 = (double)CONCAT44((int)local_133c +
                                                (-(uint)(local_132c < (Spawn *)piVar45[2]) -
                                                piVar45[3]),(int)local_132c - piVar45[2]);
                  local_12d4 = (Spawn *)(float)(longlong)local_1358;
                  local_16c8 = (float)local_12d4 * 1.5258789e-05;
                  if (local_16c8 * local_16c8 +
                      (float)(longlong)local_1344 * 1.5258789e-05 *
                      (float)(longlong)local_1344 * 1.5258789e-05 < 6400.0) goto LAB_0051ad14;
                }
                iVar35 = rand();
                local_12f4 = (int *)(iVar35 % 10 + 0x14);
                iVar35 = rand();
                local_12e0 = (Spawn *)(iVar35 % 10 + 0x14);
                uVar26 = rand();
                uVar26 = uVar26 & 0x8000000f;
                if ((int)uVar26 < 0) {
                  uVar26 = (uVar26 - 1 | 0xfffffff0) + 1;
                }
                local_12d4 = (Spawn *)(uVar26 + 0x14);
                local_1768 = (float)(int)local_12f0 - *(float *)((int)in_ECX + 0x8000f0);
                fVar39 = (float)(int)local_1308 - *(float *)((int)in_ECX + 0x8000f4);
                if (3600.0 <= fVar39 * fVar39 + local_1768 * local_1768) {
                  iVar35 = FUN_00406100(in_ECX,(uint)local_12f0,(uint)local_1308,(int)pZVar34);
                  FUN_004ffbf0(in_ECX,(int)local_12f0,(int)local_1308,
                               *(int *)(iVar35 + 0x1c) + *(int *)(iVar35 + 0x10),(int)local_12f4,
                               (int)local_12e0,(int)local_12d4,(int)pZVar34);
                }
              }
            }
LAB_0051ad14:
            local_12dc = (Spawn *)((int)local_12dc + 0x100);
          } while ((int)local_12dc < 0x300);
          local_1318 = (Spawn *)((int)local_1318 + 0x100);
        } while ((int)local_1318 < 0x300);
      }
      pvVar11 = *(void **)&(local_1304->Spawn_data).field_0x14;
      if ((pvVar11 == (void *)0xd) || (pvVar11 == (void *)0x4)) {
        uVar47 = __alldiv((uint)local_1304->vftablePtr,(uint)*(int **)&local_1304->Spawn_data,
                          0x10000,0);
        local_1c = (double)CONCAT44(local_1c._4_4_,(int)uVar47);
        uVar47 = __alldiv((local_1304->Spawn_data).offset_0x4,
                          (uint)*(void **)&(local_1304->Spawn_data).field_0x8,0x10000,0);
        uVar26 = (uint)uVar47;
        local_2a8[0] = (int)((uint)local_1c + ((int)(uint)local_1c >> 0x1f & 0xffU)) >> 8;
        local_1c = (double)CONCAT44(uVar26,(uint)local_1c);
        local_2a8[1] = (int)(uVar26 + ((int)uVar26 >> 0x1f & 0xffU)) >> 8;
        iVar35 = 0;
        piVar45 = &(pZVar34->Zone_data).offset_0x5c;
        do {
          if (local_2a8[iVar35] != *piVar45) goto LAB_0051ae20;
          iVar35 = iVar35 + 1;
          piVar45 = piVar45 + 1;
        } while (iVar35 < 2);
        iVar35 = FUN_00406100(in_ECX,(uint)local_1c,uVar26,(int)pZVar34);
        local_1308 = (int *)(*(int *)(iVar35 + 0x1c) + *(int *)(iVar35 + 0x10));
        while( true ) {
          puVar14 = FUN_00405fd0(in_ECX,(uint)local_1c,(uint)((ulonglong)local_1c >> 0x20),
                                 (int)local_1308,(int)pZVar34);
          if (((puVar14[3] & 0x1f) != 0) && ((puVar14[3] & 0x1f) != 2)) break;
          local_1308 = (int *)((int)local_1308 + -1);
        }
      }
LAB_0051ae20:
      local_12d4 = *(Spawn **)&(local_1304->Spawn_data).field_0x14;
      if (local_12d4 == (void *)0xb) {
        uVar47 = __alldiv((uint)local_1304->vftablePtr,(uint)*(int **)&local_1304->Spawn_data,
                          0x10000,0);
        iVar35 = (int)uVar47;
        local_3c0 = iVar35;
        uVar47 = __alldiv((local_1304->Spawn_data).offset_0x4,
                          (uint)*(void **)&(local_1304->Spawn_data).field_0x8,0x10000,0);
        local_3bc = (int)uVar47;
        local_298 = (int)(iVar35 + (iVar35 >> 0x1f & 0xffU)) >> 8;
        local_294 = (int)(local_3bc + (local_3bc >> 0x1f & 0xffU)) >> 8;
        iVar35 = 0;
        piVar45 = &(pZVar34->Zone_data).offset_0x5c;
        do {
          if (local_2a8[iVar35 + 4] != *piVar45) goto LAB_0051af34;
          iVar35 = iVar35 + 1;
          piVar45 = piVar45 + 1;
        } while (iVar35 < 2);
        local_1308 = (int *)((pZVar34->Zone_data).offset_0x5c * 0x100 + 0x80);
        uVar26 = (pZVar34->Zone_data).offset_0x60 * 0x100 + 0x80;
        iVar35 = rand();
        iVar27 = FUN_00406100(local_12e4,(uint)local_1308,uVar26,(int)local_130c);
        pvVar11 = local_12e4;
        FUN_004ffbf0(local_12e4,(int)local_1308,uVar26,
                     *(int *)(iVar27 + 0x1c) + *(int *)(iVar27 + 0x10),100,100,iVar35 % 100 + 100,
                     (int)local_130c);
        pZVar34 = local_130c;
      }
      else {
LAB_0051af34:
        if (local_12d4 == (void *)0xc) {
          uVar47 = __alldiv((uint)local_1304->vftablePtr,(uint)*(int **)&local_1304->Spawn_data,
                            0x10000,0);
          iVar35 = (int)uVar47;
          local_4c = (double)CONCAT44(local_4c._4_4_,iVar35);
          uVar47 = __alldiv((local_1304->Spawn_data).offset_0x4,
                            (uint)*(void **)&(local_1304->Spawn_data).field_0x8,0x10000,0);
          iVar27 = (int)uVar47;
          local_2a8[2] = (int)(iVar35 + (iVar35 >> 0x1f & 0xffU)) >> 8;
          local_4c = (double)CONCAT44(iVar27,(undefined4)local_4c);
          local_2a8[3] = (int)(iVar27 + (iVar27 >> 0x1f & 0xffU)) >> 8;
          piVar45 = &(pZVar34->Zone_data).offset_0x5c;
          iVar35 = 0;
          do {
            if (local_2a8[iVar35 + 2] != *piVar45) goto LAB_0051b05a;
            iVar35 = iVar35 + 1;
            piVar45 = piVar45 + 1;
          } while (iVar35 < 2);
          local_12f0 = (Spawn *)((pZVar34->Zone_data).offset_0x60 * 0x100 + 0x80);
          piVar45 = (int *)((pZVar34->Zone_data).offset_0x5c * 0x100 + 0x80);
          local_1308 = piVar45;
          rand();
          iVar35 = FUN_00406100(local_12e4,(uint)piVar45,(uint)local_12f0,(int)pZVar34);
          FUN_00513760((float)local_1308,(uint)local_12f0,
                       (float)(*(int *)(iVar35 + 0x1c) + *(int *)(iVar35 + 0x10)),0x50,0x50,6,
                       (int)pZVar34);
          pvVar11 = local_12e4;
          local_1324 = (Spawn *)(*(int *)(iVar35 + 0x1c) + *(int *)(iVar35 + 0x10));
          while( true ) {
            puVar14 = FUN_00405fd0(pvVar11,(uint)local_1308,(uint)local_12f0,(int)local_1324,
                                   (int)pZVar34);
            if (((puVar14[3] & 0x1f) != 0) && ((puVar14[3] & 0x1f) != 2)) break;
            local_1324 = (Spawn *)((int)&local_1324[-1].Spawn_data.offset_0xf70 + 3);
          }
        }
        else {
LAB_0051b05a:
          pcVar33 = rand_exref;
          cVar5 = *(char *)((int)local_1348 + 0x18 + local_1380);
          pvVar11 = local_12e4;
          if (((cVar5 != '\x04') && (cVar5 != '\x01')) && (cVar5 != '\x03')) {
            uVar26 = rand();
            local_1318 = (Spawn *)(uVar26 & 0x80000003);
            if ((int)local_1318 < 0) {
              local_1318 = (Spawn *)(((uint)((int)local_1318 + -1) | 0xfffffffc) + 1);
            }
            if (((0.6 < (float)local_1314) || ((float)local_1314 < 0.3)) &&
               ((0.7 < (float)local_1300 ||
                (((float)local_1300 < 0.4 &&
                 ((0.2 < (float)local_1300 || ((float)local_1314 < 0.8)))))))) {
              local_1318 = (Spawn *)((int)local_1318 + 2);
            }
            pvVar11 = local_12e4;
            if (0 < (int)local_1318) {
              do {
                iVar35 = (*pcVar33)();
                pSVar31 = (Spawn *)(iVar35 % 0x28 + 10);
                local_12dc = pSVar31;
                iVar35 = (*pcVar33)();
                local_12f0 = (Spawn *)(iVar35 % 0x28 + 10);
                iVar35 = (*pcVar33)();
                local_1308 = (int *)(iVar35 % 0x19 + 10);
                iVar27 = 0x40 - (int)local_12f0;
                iVar35 = rand();
                local_12d8 = (Spawn *)(iVar35 % ((0x40 - (int)pSVar31) * 4) +
                                      (int)(&local_12dc->vftablePtr +
                                           (int)local_12e8->vftablePtr * 0x20) * 2);
                iVar35 = rand();
                pvVar11 = local_12e4;
                pZVar34 = local_130c;
                local_12f8 = (Spawn *)(iVar35 % (iVar27 * 4) +
                                      (int)(&local_12f0->vftablePtr +
                                           (local_130c->Zone_data).offset_0x60 * 0x20) * 2);
                local_16e0 = (float)(int)local_12d8 - *(float *)((int)local_12e4 + 0x8000f0);
                fVar39 = (float)(int)local_12f8 - *(float *)((int)local_12e4 + 0x8000f4);
                if (3600.0 <= fVar39 * fVar39 + local_16e0 * local_16e0) {
                  piVar45 = (int *)*local_137c;
                  if (piVar45 != local_137c) {
                    local_12e0 = (Spawn *)(((int)local_12f8 >> 0x1f) << 0x10 |
                                          (uint)local_12f8 >> 0x10);
                    local_12d4 = (Spawn *)((int)local_12f8 * 0x10000);
                    local_133c = (Spawn *)(((int)local_12d8 >> 0x1f) << 0x10 |
                                          (uint)local_12d8 >> 0x10);
                    local_132c = (Spawn *)((int)local_12d8 * 0x10000);
                    do {
                      local_1344 = (double)CONCAT44((int)local_12e0 +
                                                    (-(uint)(local_12d4 < (void *)piVar45[4]) -
                                                    piVar45[5]),(int)local_12d4 - piVar45[4]);
                      local_1358 = (double)CONCAT44((int)local_133c +
                                                    (-(uint)(local_132c < (Spawn *)piVar45[2]) -
                                                    piVar45[3]),(int)local_132c - piVar45[2]);
                      local_12f4 = (int *)(float)(longlong)local_1358;
                      local_15d0 = (float)local_12f4 * 1.5258789e-05;
                      if (local_15d0 * local_15d0 +
                          (float)(longlong)local_1344 * 1.5258789e-05 *
                          (float)(longlong)local_1344 * 1.5258789e-05 < 6400.0) goto LAB_0051b45b;
                      piVar45 = (int *)*piVar45;
                    } while (piVar45 != local_137c);
                  }
                  fVar38 = FUN_004d19f0(local_12e4,(uint)local_12d8,(uint)local_12f8);
                  local_12d4 = (Spawn *)(float)fVar38;
                  if ((float)local_12d4 <= 0.6) {
                    fVar38 = FUN_0052cd50(pvVar11,(uint)local_12d8,(float)local_12f8,(int)pZVar34);
                    local_12d4 = (Spawn *)(float)fVar38;
                    if (1.0 - (float)local_12d4 * 50.0 < 0.0) {
                      fVar38 = (float10)FUN_00523d80((uint)local_12d8,(float)local_12f8,
                                                     (float)pZVar34);
                      local_12d4 = (Spawn *)(float)fVar38;
                      iVar35 = FUN_00406100(pvVar11,(uint)local_12d8,(uint)local_12f8,(int)pZVar34);
                      local_1324 = (Spawn *)(*(int *)(iVar35 + 0x1c) + *(int *)(iVar35 + 0x10));
                      uVar26 = rand();
                      uVar26 = uVar26 & 0x80000001;
                      bVar37 = uVar26 == 0;
                      if ((int)uVar26 < 0) {
                        bVar37 = (uVar26 - 1 | 0xfffffffe) == 0xffffffff;
                      }
                      if ((bVar37) || (0.25 <= (float)local_12d4)) {
                        FUN_004ffbf0(pvVar11,(int)local_12d8,(int)local_12f8,(int)local_1324,
                                     (int)local_12dc,(int)local_12f0,(int)local_1308,(int)pZVar34);
                      }
                      else {
                        FUN_004ff3f0(pvVar11,(int)local_12d8,(int)local_12f8,(int)local_1324,
                                     (int)local_12dc,(int)local_12f0,(int)local_1308 / 2,
                                     (int)pZVar34);
                      }
                    }
                  }
                }
LAB_0051b45b:
                local_1318 = (Spawn *)((int)local_1318 + -1);
                pcVar33 = rand_exref;
              } while (local_1318 != (Spawn *)0x0);
              local_1318 = (Spawn *)0x0;
            }
          }
        }
      }
      local_12d0 = local_135c;
      if ((int)local_135c < (int)local_1374) {
        puVar15 = &(local_1330->Spawn_data).field_0xfc;
        do {
          local_12e8 = local_1330;
          if ((int)local_1330 < (int)puVar15) {
            do {
              fVar38 = (float10)FUN_0052d990(pvVar11,(uint)local_12d0,(uint)local_12e8);
              local_12d4 = (Spawn *)(float)fVar38;
              local_1308 = (int *)(1.0 - (float)local_12d4 * 50.0);
              fVar38 = FUN_004d19f0(pvVar11,(uint)local_12d0,(uint)local_12e8);
              local_12f0 = (Spawn *)(float)fVar38;
              if (0.0 <= (float)local_1308) {
                fVar38 = (float10)FUN_004f9b70(pvVar11,(uint)local_12d0,(float)local_12e8,
                                               (int)pZVar34);
                local_12d4 = (Spawn *)(float)fVar38;
                local_1324 = local_12d4;
                if ((float)local_12d4 < 0.0) {
                  local_1324 = (Spawn *)0x0;
                }
                fVar39 = 1.0 - (float)local_1308;
                local_12d8 = (Spawn *)(int)((float)local_1324 + 1.0);
                local_12e0 = (Spawn *)(1.0 - fVar39 * fVar39 * fVar39);
                local_13b8 = (double)(int)local_12e8;
                local_13c0 = (double)(int)local_12d0;
                dVar41 = local_13c0 * 0.02 + 55432.0;
                fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                      local_13b8 * 0.02 + 974.0);
                local_12d4 = (Spawn *)(float)fVar38;
                local_12dc = (Spawn *)(int)(((float)local_12d4 + 1.0) * 4.0 +
                                           (float)local_12e0 * 5.0 + (float)local_1324);
                puVar14 = FUN_00405fd0(pvVar11,(uint)local_12d0,(uint)local_12e8,(int)local_12d8,
                                       (int)pZVar34);
                if ((((puVar14[3] & 0x1f) != 0) && ((puVar14[3] & 0x1f) != 2)) &&
                   (puVar14 = FUN_00405fd0(pvVar11,(uint)local_12d0,(uint)local_12e8,(int)local_12d8
                                           ,(int)pZVar34), (puVar14[3] & 0x40) == 0)) {
                  local_248 = 40.0;
                  fStack_244 = 40.0;
                  local_240 = 40.0;
                  dVar41 = local_13c0 * 0.05 + 843.0;
                  fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                        local_13b8 * 0.05 + 984.0);
                  local_12d4 = (Spawn *)(float)fVar38;
                  local_14c = local_240 * (float)local_12d4;
                  local_1dc = 0x430c0000;
                  uStack_1d8 = 0x430c0000;
                  local_1d4 = 0x430c0000;
                  local_12e0 = (Spawn *)(((int)local_12e8 / 2) * 0xea);
                  local_28 = CONCAT44(fStack_244 * (float)local_12d4 + 140.0,
                                      local_248 * (float)local_12d4 + 140.0);
                  local_20 = local_14c + 140.0;
                  local_12f4 = (int *)(((int)local_12d0 / 2) * 0xea);
                  local_154 = CONCAT44(fStack_244 * (float)local_12d4,local_248 * (float)local_12d4)
                  ;
                  fVar38 = FUN_004d5d30(SUB84((double)((int)local_12f4 + 0x12e2),0),
                                        (int)((ulonglong)(double)((int)local_12f4 + 0x12e2) >> 0x20)
                                        ,(double)((int)local_12e0 + 0xc11a));
                  local_12d4 = (Spawn *)(float)fVar38;
                  if (0.5 < (float)local_12d4) {
                    local_1e8 = 20.0;
                    fStack_1e4 = 20.0;
                    local_1e0 = 20.0;
                    fVar38 = FUN_004d5d30(SUB84((double)(int)local_12f4,0),
                                          (int)((ulonglong)(double)(int)local_12f4 >> 0x20),
                                          (double)((int)local_12e0 + 0x31));
                    local_12d4 = (Spawn *)(float)fVar38;
                    local_158 = local_1e0 * (float)local_12d4;
                    local_160 = CONCAT44(fStack_1e4 * (float)local_12d4,
                                         local_1e8 * (float)local_12d4);
                    local_20 = local_158 + local_20;
                    local_28 = CONCAT44(fStack_1e4 * (float)local_12d4 + local_28._4_4_,
                                        local_1e8 * (float)local_12d4 + (float)local_28);
                  }
                  iVar35 = *(int *)(local_1380 + 0x14);
                  if (((iVar35 == 1) || (iVar35 == 4)) || (iVar35 == 5)) {
                    puVar13 = (undefined8 *)
                              FUN_004fae90(pvVar11,local_768,(float)local_12d0,(uint)local_12e8,
                                           (int)local_12d8,(int)pZVar34);
                    local_28 = *puVar13;
                    local_20 = *(float *)(puVar13 + 1);
                  }
                  local_178._0_4_ = (float)local_28;
                  local_12d4 = (Spawn *)((float)local_12f0 * (float)local_178);
                  local_178._4_4_ = (float)((ulonglong)local_28 >> 0x20);
                  local_12e0 = (Spawn *)((float)local_12f0 * local_178._4_4_);
                  local_178 = CONCAT44(local_12e0,local_12d4);
                  local_12f4 = (int *)((float)local_12f0 * local_20);
                  local_170 = local_12f4;
                  puVar13 = (undefined8 *)
                            FUN_004fae90(pvVar11,local_7d4,(float)local_12d0,(uint)local_12e8,
                                         (int)local_12d8,(int)pZVar34);
                  local_bc = 1.0 - (float)local_12f0;
                  local_c4._0_4_ = (float)*puVar13;
                  local_c4._0_4_ = local_bc * (float)local_c4;
                  local_c4._4_4_ = (float)((ulonglong)*puVar13 >> 0x20);
                  local_c4._4_4_ = local_bc * local_c4._4_4_;
                  local_bc = local_bc * *(float *)(puVar13 + 1);
                  local_dc = CONCAT44(local_c4._4_4_ + (float)local_12e0,
                                      (float)local_c4 + (float)local_12d4);
                  local_d4 = local_bc + (float)local_12f4;
                  local_1a4 = local_d4;
                  local_1ac = local_dc;
                  iVar35 = 0;
                  do {
                    pfVar10 = (float *)((int)&local_1ac + iVar35 * 4);
                    if (*pfVar10 <= 0.0 && *pfVar10 != 0.0) {
                      *(undefined4 *)((int)&local_1ac + iVar35 * 4) = 0;
                    }
                    if (255.0 < *(float *)((int)&local_1ac + iVar35 * 4)) {
                      *(undefined4 *)((int)&local_1ac + iVar35 * 4) = 0x437f0000;
                    }
                    iVar35 = iVar35 + 1;
                  } while (iVar35 < 3);
                  iVar35 = 0;
                  do {
                    iVar27 = iVar35 + 1;
                    *(char *)((int)&local_13ec + iVar35) =
                         (char)(int)*(float *)((int)&local_1ac + iVar35 * 4);
                    iVar35 = iVar27;
                  } while (iVar27 < 3);
                  local_1438 = local_13ec;
                  local_1436 = local_13ea;
                  local_1435 = 0xb;
                  FUN_0041ff00(pvVar11,(float)local_12d0,(uint)local_12e8,
                               (int)((int)&local_12d8[-1].Spawn_data.offset_0xf70 + 3),
                               (undefined1 *)&local_1438,(int)pZVar34);
                  if (0.92 < (float)local_12f0) {
                    iVar35 = FUN_00406100(pvVar11,(uint)local_12d0,(uint)local_12e8,(int)pZVar34);
                    local_12dc = (Spawn *)(*(int *)(iVar35 + 0x1c) + *(int *)(iVar35 + 0x10));
                  }
                  if ((int)local_12d8 < (int)local_12dc) {
                    do {
                      puVar14 = FUN_00405fd0(pvVar11,(uint)local_12d0,(uint)local_12e8,
                                             (int)local_12d8,(int)pZVar34);
                      if ((puVar14[3] & 0x40) == 0) {
                        FUN_0041ff00(pvVar11,(float)local_12d0,(uint)local_12e8,(int)local_12d8,
                                     (undefined1 *)&DAT_005842c0,(int)pZVar34);
                      }
                      local_12d8 = (Spawn *)((int)&local_12d8->vftablePtr + 1);
                    } while ((int)local_12d8 < (int)local_12dc);
                  }
                }
              }
              local_12e8 = (Spawn *)((int)&local_12e8->vftablePtr + 1);
              puVar15 = &(local_1330->Spawn_data).field_0xfc;
            } while ((int)local_12e8 < (int)puVar15);
          }
          local_12d0 = (Spawn *)((int)&local_12d0->vftablePtr + 1);
        } while ((int)local_12d0 < (int)local_1374);
      }
      local_13ac = (double)((ulonglong)local_13ac & 0xffffffff);
      uVar16 = FUN_00407be0((undefined4 *)0x0,(undefined4 *)0x0);
      local_13ac = (double)CONCAT44(local_13ac._4_4_,uVar16);
      local_8._0_1_ = 3;
      local_12e8 = local_135c;
      if ((int)local_135c < (int)&(local_135c->Spawn_data).field_0xfc) {
        local_12e0 = (Spawn *)0xc8;
        puVar15 = &(local_1330->Spawn_data).field_0xfc;
        do {
          local_12d0 = local_1330;
          if ((int)local_1330 < (int)puVar15) {
            do {
              fVar38 = FUN_0052cd50(pvVar11,(uint)local_12e8,(float)local_12d0,(int)pZVar34);
              local_12d4 = (Spawn *)(float)fVar38;
              local_12f4 = (int *)(1.0 - (float)local_12d4 * 50.0);
              if (0.0 <= (float)local_12f4) {
                fVar38 = FUN_004d19f0(pvVar11,(uint)local_12e8,(uint)local_12d0);
                local_12d4 = (Spawn *)(float)fVar38;
                if ((float)local_12d4 <= 0.95) {
                  fVar38 = (float10)FUN_004f9b70(pvVar11,(uint)local_12e8,(float)local_12d0,
                                                 (int)pZVar34);
                  local_1308 = (int *)(float)fVar38;
                  if ((float)local_1308 < 0.0) {
                    local_1308 = (int *)0x0;
                  }
                  local_12d4 = (Spawn *)(((int)(float)local_1308 / 5) * 5);
                  fVar40 = (float)(int)local_12d4;
                  fVar39 = ((float)local_1308 - fVar40) / 5.0;
                  if (0.5 <= fVar39) {
                    local_12f0 = (Spawn *)(1.0 - (fVar39 - 0.5) * 4.0);
                    if ((float)local_12f0 < 0.0) {
                      local_12f0 = (Spawn *)(((float)local_12f0 + 1.0) * ((float)local_12f0 + 1.0) -
                                            1.0);
                    }
                  }
                  else {
                    local_12f0 = (Spawn *)(fVar39 * 2.0);
                  }
                  local_12fc = local_12d4;
                  if ((float)local_12f0 < 0.0) {
                    local_12fc = (Spawn *)(int)(fVar40 - (float)local_12f0 * 5.0);
                  }
                  local_12dc = (Spawn *)(int)((fVar40 - (float)local_12f0 * 5.0) + 2.0);
                  if ((int)local_12dc <= (int)local_12d4) {
                    do {
                      puVar14 = FUN_00405fd0(pvVar11,(uint)local_12e8,(uint)local_12d0,
                                             (int)local_12dc,(int)pZVar34);
                      if ((puVar14[3] & 0x40) == 0) {
                        fVar39 = 1.0 - (float)local_12f0;
                        local_200 = 0;
                        uStack_1fc = 0;
                        local_218 = 0;
                        uStack_214 = 0;
                        local_1f8 = 0;
                        local_94 = CONCAT44(fVar39 * 0.0,fVar39 * 0.0);
                        local_210 = 0x437f0000;
                        local_8c = fVar39 * 255.0;
                        local_164 = (float)local_12f0 * 0.0;
                        local_118 = CONCAT44(fVar39 * 0.0 + (float)local_12f0 * 0.0,
                                             fVar39 * 0.0 + (float)local_12f0 * 0.0);
                        local_16c = CONCAT44((float)local_12f0 * 0.0,(float)local_12f0 * 0.0);
                        local_110 = local_8c + local_164;
                        iVar35 = 0;
                        do {
                          iVar27 = iVar35 + 1;
                          *(char *)((int)&local_141c + iVar35) =
                               (char)(int)*(float *)((int)&local_118 + iVar35 * 4);
                          iVar35 = iVar27;
                        } while (iVar27 < 3);
                        local_1400 = local_141c;
                        local_13fe = local_141a;
                        local_13fd = 2;
                        FUN_0041ff00(pvVar11,(float)local_12e8,(uint)local_12d0,(int)local_12dc,
                                     (undefined1 *)&local_1400,(int)pZVar34);
                      }
                      local_12dc = (Spawn *)((int)&local_12dc->vftablePtr + 1);
                    } while ((int)local_12dc <= (int)local_12d4);
                  }
                  if ((((int)local_12d4 <= (int)local_12fc) &&
                      (puVar14 = FUN_00405fd0(pvVar11,(uint)local_12e8,(uint)local_12d0,
                                              (int)local_12fc,(int)pZVar34),
                      (puVar14[3] & 0x1f) != 2)) &&
                     (puVar14 = FUN_00405fd0(pvVar11,(uint)local_12e8,(uint)local_12d0,
                                             (int)local_12fc,(int)pZVar34), (puVar14[3] & 0x40) == 0
                     )) {
                    pfVar10 = FUN_0052d030(pvVar11,local_714,(float)local_12e8,(uint)local_12d0,
                                           (int)local_12fc,(int)pZVar34);
                    iVar35 = 0;
                    do {
                      iVar27 = iVar35 + 1;
                      *(char *)((int)&local_13d8 + iVar35) = (char)(int)pfVar10[iVar35];
                      iVar35 = iVar27;
                    } while (iVar27 < 3);
                    local_1418 = local_13d8;
                    local_1416 = local_13d6;
                    local_1415 = 3;
                    FUN_0041ff00(pvVar11,(float)local_12e8,(uint)local_12d0,(int)local_12fc,
                                 (undefined1 *)&local_1418,(int)pZVar34);
                    iVar35 = rand();
                    if (iVar35 % (int)local_12e0 == 0) {
                      local_2c0 = local_12e8;
                      local_2bc = local_12d0;
                      local_2b8 = local_12fc;
                      iVar35 = FUN_004d9b70(&((Spawn *)local_13ac)->vftablePtr,
                                            *(undefined4 **)((int)(Spawn *)local_13ac + 4),
                                            &local_2c0);
                      if (local_13ac._4_4_ == 0xccccccb) goto LAB_0051d544;
                      *(int *)((int)(Spawn *)local_13ac + 4) = iVar35;
                      local_13ac = (double)CONCAT44(local_13ac._4_4_ + 1,(Spawn *)local_13ac);
                      **(int **)(iVar35 + 4) = iVar35;
                    }
                  }
                  fVar39 = 1.0 - (float)local_12f4;
                  local_12f4 = (int *)(1.0 - fVar39 * fVar39 * fVar39);
                  dVar41 = (double)(int)local_12e8 * 0.02 + 55432.0;
                  fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                        (double)(int)local_12d0 * 0.02 + 974.0);
                  local_12f0 = (Spawn *)((int)&local_12fc->vftablePtr + 1);
                  local_12d4 = (Spawn *)(int)(((float)fVar38 + 1.0) * 2.0 +
                                             (float)local_12f4 * 5.0 + (float)local_1308);
                  if ((int)local_12f0 < (int)local_12d4) {
                    do {
                      puVar14 = FUN_00405fd0(pvVar11,(uint)local_12e8,(uint)local_12d0,
                                             (int)local_12f0,(int)pZVar34);
                      if ((puVar14[3] & 0x40) == 0) {
                        FUN_0041ff00(pvVar11,(float)local_12e8,(uint)local_12d0,(int)local_12f0,
                                     (undefined1 *)&DAT_005842c0,(int)pZVar34);
                      }
                      local_12f0 = (Spawn *)((int)&local_12f0->vftablePtr + 1);
                    } while ((int)local_12f0 < (int)local_12d4);
                  }
                }
              }
              local_12d0 = (Spawn *)((int)&local_12d0->vftablePtr + 1);
              puVar15 = &(local_1330->Spawn_data).field_0xfc;
            } while ((int)local_12d0 < (int)puVar15);
          }
          local_12e8 = (Spawn *)((int)&local_12e8->vftablePtr + 1);
        } while ((int)local_12e8 < (int)local_1374);
      }
      if (*(char *)((int)local_1348 + 0x18 + local_1380) == '\x03') {
        FUN_00500300();
      }
      if (*(char *)((int)local_1348 + 0x18 + local_1380) == '\x05') {
        FUN_00500300();
      }
      pSVar31 = (Spawn *)((Spawn *)local_13ac)->vftablePtr;
      local_12d4 = pSVar31;
      if (pSVar31 != (Spawn *)local_13ac) {
        do {
          local_12e0 = (Spawn *)(pSVar31->Spawn_data).offset_0x4;
          local_12d0 = *(Spawn **)&(pSVar31->Spawn_data).field_0x8;
          local_12f4 = *(int **)&(pSVar31->Spawn_data).field_0xc;
          local_12d4 = pSVar31;
          iVar35 = rand();
          local_133c = (Spawn *)(iVar35 % 3 + 2);
          iVar35 = rand();
          local_132c = (Spawn *)(iVar35 % 3 + 2);
          iVar35 = rand();
          local_136c = (byte *)(iVar35 % 3 + 2);
          pSVar30 = (Spawn *)((int)local_12e0 - (int)local_133c);
          iVar35 = (int)&local_12e0->vftablePtr + (int)&local_133c->vftablePtr;
          local_1358 = (double)CONCAT44(iVar35,(undefined4)local_1358);
          local_1318 = pSVar30;
          if ((int)pSVar30 <= iVar35) {
            local_134c = (Spawn *)((int)local_12d0 - (int)local_132c);
            local_12f8 = (Spawn *)((int)pSVar30 + -(int)local_12e0);
            local_12e0 = (Spawn *)((int)&local_12d0->vftablePtr + (int)&local_132c->vftablePtr);
            do {
              pvVar11 = local_12e4;
              pZVar53 = local_130c;
              local_12dc = local_134c;
              if ((int)local_134c <= (int)local_12e0) {
                local_12fc = (Spawn *)((int)local_12f4 + (int)local_136c * -2);
                local_1338 = (Spawn *)((int)local_136c * 2 + (int)local_12f4);
                local_1308 = (int *)((int)local_134c - (int)local_12d0);
                local_1318 = pSVar30;
                do {
                  local_12d8 = local_1338;
                  if ((int)local_12fc <= (int)local_1338) {
                    fVar38 = FUN_004d5d30(SUB84((double)(int)pSVar30 * 0.05,0),
                                          (int)((ulonglong)((double)(int)pSVar30 * 0.05) >> 0x20),
                                          (double)(int)local_12dc * 0.05);
                    local_15ac = (float)(int)local_12f8 / (float)(int)local_133c;
                    local_15a8 = (float)(int)local_1308 / (float)(int)local_132c;
                    pSVar43 = (Spawn *)((float)fVar38 * 0.8);
                    pSVar46 = (Spawn *)(float)(int)local_136c;
                    local_12e8 = (Spawn *)(local_15a8 * local_15a8 + local_15ac * local_15ac);
                    local_12f0 = (Spawn *)((int)local_12d8 - (int)local_12f4);
                    pSVar31 = local_12fc;
                    local_1364 = pSVar43;
                    local_1324 = pSVar46;
                    pSVar42 = local_12e8;
                    do {
                      fVar39 = (float)(int)local_12f0 / (float)pSVar46 + (float)pSVar43;
                      if (fVar39 * fVar39 + (float)pSVar42 <= 1.0) {
                        puVar14 = FUN_00405fd0(pvVar11,(uint)local_1318,(uint)local_12dc,
                                               (int)local_12d8,(int)pZVar53);
                        pSVar31 = local_12fc;
                        pSVar43 = local_1364;
                        pSVar46 = local_1324;
                        pSVar42 = local_12e8;
                        if (((~((byte)puVar14[3] >> 7) & 1) != 0) && ((puVar14[3] & 0x40) == 0)) {
                          pfVar10 = FUN_0052d030(pvVar11,local_72c,(float)local_1318,
                                                 (uint)local_12dc,(int)local_12d8,(int)pZVar53);
                          iVar35 = 0;
                          do {
                            iVar27 = iVar35 + 1;
                            *(char *)((int)&local_142c + iVar35) = (char)(int)pfVar10[iVar35];
                            iVar35 = iVar27;
                          } while (iVar27 < 3);
                          local_1428 = local_142c;
                          local_1426 = local_142a;
                          local_1425 = 6;
                          FUN_0041ff00(pvVar11,(float)local_1318,(uint)local_12dc,(int)local_12d8,
                                       (undefined1 *)&local_1428,(int)pZVar53);
                          pSVar31 = local_12fc;
                          pSVar43 = local_1364;
                          pSVar46 = local_1324;
                          pSVar42 = local_12e8;
                        }
                      }
                      local_12d8 = (Spawn *)((int)&local_12d8[-1].Spawn_data.offset_0xf70 + 3);
                      local_12f0 = (Spawn *)((int)&local_12f0[-1].Spawn_data.offset_0xf70 + 3);
                      pSVar30 = local_1318;
                    } while ((int)pSVar31 <= (int)local_12d8);
                  }
                  local_1308 = (int *)((int)local_1308 + 1);
                  local_12dc = (Spawn *)((int)&local_12dc->vftablePtr + 1);
                  pZVar34 = pZVar53;
                } while ((int)local_12dc <= (int)local_12e0);
              }
              pSVar30 = (Spawn *)((int)pSVar30 + 1);
              local_12f8 = (Spawn *)((int)&local_12f8->vftablePtr + 1);
              pSVar31 = local_12d4;
              local_1318 = pSVar30;
            } while ((int)pSVar30 <= (int)local_1358._4_4_);
          }
          pSVar31 = (Spawn *)pSVar31->vftablePtr;
          local_12d4 = pSVar31;
        } while (pSVar31 != (Spawn *)local_13ac);
      }
      pSVar31 = (Spawn *)local_13c8->vftablePtr;
      local_12e8 = pSVar31;
      if (pSVar31 != local_13c8) {
        do {
          local_1358 = (double)CONCAT44((pSVar31->Spawn_data).offset_0x4,(undefined4)local_1358);
          local_1308 = *(int **)&(pSVar31->Spawn_data).field_0x8;
          local_132c = *(Spawn **)&(pSVar31->Spawn_data).field_0xc;
          local_12e8 = pSVar31;
          uVar26 = rand();
          uVar26 = uVar26 & 0x80000003;
          if ((int)uVar26 < 0) {
            uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
          }
          local_12e0 = (Spawn *)(uVar26 + 4);
          uVar26 = rand();
          uVar26 = uVar26 & 0x80000003;
          if ((int)uVar26 < 0) {
            uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
          }
          local_12f4 = (int *)(uVar26 + 4);
          iVar35 = rand();
          local_12d4 = (Spawn *)(iVar35 % 6 + 4);
          iVar35 = (int)local_1358._4_4_;
          pSVar30 = (Spawn *)((int)local_1358._4_4_ - (int)local_12e0);
          iVar27 = (int)&local_12e0->vftablePtr + (int)local_1358._4_4_;
          local_1344 = (double)CONCAT44(iVar27,(undefined4)local_1344);
          local_1318 = pSVar30;
          if ((int)pSVar30 <= iVar27) {
            local_12d0 = (Spawn *)((int)local_12f4 + (int)local_1308);
            local_1358 = (double)CONCAT44((int)local_1308 - (int)local_12f4,(undefined4)local_1358);
            local_12f0 = (Spawn *)((int)pSVar30 + -iVar35);
            do {
              pvVar11 = local_12e4;
              pZVar53 = local_130c;
              local_12dc = local_1358._4_4_;
              if ((int)local_1358._4_4_ <= (int)local_12d0) {
                local_12f8 = (Spawn *)((int)local_132c + (int)local_12d4 * -2);
                local_1338 = (Spawn *)((int)&local_132c->vftablePtr + (int)local_12d4 * 2);
                local_1364 = (Spawn *)((int)local_1358._4_4_ - (int)local_1308);
                local_1318 = pSVar30;
                do {
                  local_12fc = local_1338;
                  if ((int)local_12f8 <= (int)local_1338) {
                    fVar38 = FUN_004d5d30(SUB84((double)(int)pSVar30 * 0.05,0),
                                          (int)((ulonglong)((double)(int)pSVar30 * 0.05) >> 0x20),
                                          (double)(int)local_12dc * 0.05);
                    local_134c = (Spawn *)(float)fVar38;
                    local_15a0 = (float)(int)local_12f0 / (float)(int)local_12e0;
                    local_159c = (float)(int)local_1364 / (float)(int)local_12f4;
                    pbVar44 = (byte *)((float)local_134c * 0.8);
                    pSVar43 = (Spawn *)(float)(int)local_12d4;
                    local_133c = (Spawn *)(local_159c * local_159c + local_15a0 * local_15a0);
                    local_1324 = (Spawn *)((int)local_12fc - (int)local_132c);
                    pSVar31 = local_12f8;
                    local_136c = pbVar44;
                    local_12d8 = pSVar43;
                    pSVar46 = local_133c;
                    do {
                      fVar39 = (float)(int)local_1324 / (float)pSVar43 + (float)pbVar44;
                      if ((fVar39 * fVar39 + (float)pSVar46 <= 1.0) &&
                         (puVar14 = FUN_00405fd0(pvVar11,(uint)local_1318,(uint)local_12dc,
                                                 (int)local_12fc,(int)pZVar53), pSVar31 = local_12f8
                         , pbVar44 = local_136c, pSVar43 = local_12d8, pSVar46 = local_133c,
                         (~((byte)puVar14[3] >> 7) & 1) != 0)) {
                        pfVar10 = FUN_0052d030(pvVar11,local_744,(float)local_1318,(uint)local_12dc,
                                               (int)local_12fc,(int)pZVar53);
                        iVar35 = 0;
                        do {
                          iVar27 = iVar35 + 1;
                          *(char *)((int)&local_13e8 + iVar35) = (char)(int)pfVar10[iVar35];
                          iVar35 = iVar27;
                        } while (iVar27 < 3);
                        local_1430 = local_13e8;
                        local_142e = local_13e6;
                        local_142d = 0x26;
                        FUN_0041ff00(pvVar11,(float)local_1318,(uint)local_12dc,(int)local_12fc,
                                     (undefined1 *)&local_1430,(int)pZVar53);
                        pSVar31 = local_12f8;
                        pbVar44 = local_136c;
                        pSVar43 = local_12d8;
                        pSVar46 = local_133c;
                      }
                      local_12fc = (Spawn *)((int)&local_12fc[-1].Spawn_data.offset_0xf70 + 3);
                      local_1324 = (Spawn *)((int)&local_1324[-1].Spawn_data.offset_0xf70 + 3);
                      pSVar30 = local_1318;
                    } while ((int)pSVar31 <= (int)local_12fc);
                  }
                  local_1364 = (Spawn *)((int)&local_1364->vftablePtr + 1);
                  local_12dc = (Spawn *)((int)&local_12dc->vftablePtr + 1);
                  pZVar34 = pZVar53;
                } while ((int)local_12dc <= (int)local_12d0);
              }
              pSVar30 = (Spawn *)((int)pSVar30 + 1);
              local_12f0 = (Spawn *)((int)&local_12f0->vftablePtr + 1);
              pSVar31 = local_12e8;
              local_1318 = pSVar30;
            } while ((int)pSVar30 <= (int)local_1344._4_4_);
          }
          pSVar31 = (Spawn *)pSVar31->vftablePtr;
          local_12e8 = pSVar31;
        } while (pSVar31 != local_13c8);
      }
      pvVar11 = local_12e4;
      if ((((*(int *)((int)local_12e4 + 0xa4) == 0) &&
           (local_1360 ==
            (int)((int)*(float *)((int)local_12e4 + 0x8000f0) +
                 ((int)*(float *)((int)local_12e4 + 0x8000f0) >> 0x1f & 0xffU)) >> 8)) &&
          (uVar26 = (uint)*(float *)((int)local_12e4 + 0x8000f4),
          local_1368 == (int)(uVar26 + ((int)uVar26 >> 0x1f & 0xffU)) >> 8)) &&
         (iVar35 = FUN_00406100(local_12e4,(int)*(float *)((int)local_12e4 + 0x8000f0),uVar26,
                                (int)pZVar34), iVar35 != 0)) {
        local_2ac = *(int *)(iVar35 + 0x1c) + *(int *)(iVar35 + 0x10);
        local_1344 = (double)CONCAT44(local_2ac,(undefined4)local_1344);
        if ((int)(*(int *)((int)pvVar11 + 0x24) - *(int *)((int)pvVar11 + 0x20) & 0xfffffffcU) <
            0x212d) {
          local_1308 = (int *)0x0;
        }
        else {
          local_1308 = *(int **)(*(int *)((int)pvVar11 + 0x20) + 0x212c);
        }
        local_1520[0] = 0.0;
        local_1520[1] = 0.0;
        local_1520[2] = 0.0;
        local_1520[3] = 0.0;
        iVar35 = 0;
        do {
          iVar27 = iVar35 + 4;
          *(int *)((int)local_1668 + iVar35) = (int)*(float *)((int)local_1520 + iVar35);
          iVar35 = iVar27;
        } while (iVar27 < 0x10);
        local_2b4 = (int)*(float *)((int)pvVar11 + 0x8000f0) - local_1308[0x11] / 2;
        local_2b0 = (int)*(float *)((int)pvVar11 + 0x8000f4) - local_1308[0x12] / 2;
        FUN_00524540(pvVar11,local_1308,&local_2b4,0,6,0,(int)pZVar34,'\x01',local_1668,0);
      }
      local_1364 = (Spawn *)(local_1360 + local_1368 & 0x80000001);
      if ((int)local_1364 < 0) {
        local_1364 = (Spawn *)(((uint)((int)&local_1364[-1].Spawn_data.offset_0xf70 + 3) |
                               0xfffffffe) + 1);
      }
      if (local_1364 != (Spawn *)0x0) {
        local_133c = (Spawn *)0x0;
        uVar48 = FUN_0054a946();
        do {
          local_12e0 = (Spawn *)(uVar48 >> 0x20);
          local_12d4 = (Spawn *)uVar48;
          local_14e4 = 0;
          iVar35 = rand();
          uVar26 = (int)&(local_1330->Spawn_data).offset_0x2c + iVar35 % 0xa0;
          local_132c = (Spawn *)((int)(uVar26 * 0x10000) - (int)local_12d4);
          local_12f4 = (int *)(((((int)uVar26 >> 0x1f) << 0x10 | uVar26 >> 0x10) - (int)local_12e0)
                              - (uint)((Spawn *)(uVar26 * 0x10000) < local_12d4));
          iVar35 = rand();
          uVar26 = (int)&(local_135c->Spawn_data).offset_0x2c + iVar35 % 0xa0;
          local_1338 = (Spawn *)((int)(uVar26 * 0x10000) - (int)local_12d4);
          local_1c0 = ((((int)uVar26 >> 0x1f) << 0x10 | uVar26 >> 0x10) - (int)local_12e0) -
                      (uint)((Spawn *)(uVar26 * 0x10000) < local_12d4);
          local_1bc = local_132c;
          local_1b8 = local_12f4;
          local_1b4 = (int)local_14e4;
          local_1358 = (double)CONCAT44(local_1c0,(undefined4)local_1358);
          local_1b0 = local_14e4._4_4_;
          pvVar17 = *(void **)&(local_1304->Spawn_data).field_0x14;
          local_1c4 = local_1338;
          if ((pvVar17 == (void *)0x1) || (pvVar17 == (void *)0x5)) {
            fVar38 = FUN_0052c820((uint *)local_1304,(uint *)&local_1c4,(uint *)&local_1bc);
            local_1344 = (double)CONCAT44((float)fVar38,(undefined4)local_1344);
            fVar39 = 1.0 - (float)fVar38;
            if ((fVar39 <= 0.0) || (fVar39 * fVar39 <= 0.0)) goto LAB_0051ccba;
          }
          else {
LAB_0051ccba:
            pZVar53 = pZVar34;
            uVar47 = __alldiv((uint)local_132c,(uint)local_12f4,0x10000,0);
            uVar26 = (uint)uVar47;
            uVar47 = __alldiv((uint)local_1338,(uint)local_1358._4_4_,0x10000,0);
            iVar35 = FUN_00406100(pvVar11,(uint)uVar47,uVar26,(int)pZVar53);
            if (iVar35 != 0) {
              uVar26 = *(int *)(iVar35 + 0x1c) + *(int *)(iVar35 + 0x10);
              local_1b0 = ((int)uVar26 >> 0x1f) << 0x10 | uVar26 >> 0x10;
              local_1b4 = uVar26 * 0x10000;
            }
            cVar5 = FUN_004e0740(pvVar11,(int)pZVar34,(uint *)&local_1c4);
            piVar45 = local_137c;
            if (cVar5 != '\0') {
              iVar35 = FUN_004f3ba0(local_137c,(undefined4 *)local_137c[1],&local_1c4);
              piVar45[1] = iVar35;
              local_1378 = 1;
              **(int **)(iVar35 + 4) = iVar35;
              break;
            }
          }
          uVar48 = CONCAT44(local_12e0,local_12d4);
          local_133c = (Spawn *)((int)&local_133c->vftablePtr + 1);
        } while ((int)local_133c < 10);
      }
      cVar5 = *(char *)((int)local_1348 + 0x18 + local_1380);
      if (((cVar5 != '\x04') && (cVar5 != '\x01')) && (cVar5 != '\x03')) {
        iVar35 = rand();
        local_1324 = (Spawn *)(iVar35 % 10);
        if (((0.6 < (float)local_1314) || ((float)local_1314 < 0.3)) &&
           ((0.7 < (float)local_1300 ||
            (((float)local_1300 < 0.4 && ((0.2 < (float)local_1300 || ((float)local_1314 < 0.8))))))
           )) {
          local_1324 = (Spawn *)((int)&(local_1324->Spawn_data).offset_0x4 + 2);
        }
        if (0 < (int)local_1324) {
          local_1344 = (double)CONCAT44(local_1360 << 7,(undefined4)local_1344);
          local_1358 = (double)CONCAT44(local_1368 << 7,(undefined4)local_1358);
          do {
            uVar26 = rand();
            uVar26 = uVar26 & 0x80000007;
            if ((int)uVar26 < 0) {
              uVar26 = (uVar26 - 1 | 0xfffffff8) + 1;
            }
            local_1300 = (Spawn *)(uVar26 + 3);
            uVar9 = rand();
            uVar9 = uVar9 & 0x80000007;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
            }
            local_12f0 = (Spawn *)(uVar9 + 3);
            uVar9 = rand();
            uVar9 = uVar9 & 0x80000007;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
            }
            local_12d4 = (Spawn *)(uVar9 + 3);
            iVar27 = 0x40 - (int)local_12f0;
            iVar35 = rand();
            local_12f8 = (Spawn *)(iVar35 % ((0x40 - (int)(uVar26 + 3)) * 4) +
                                  ((int)&local_1300->vftablePtr + (int)local_1344._4_4_) * 2);
            iVar35 = rand();
            pvVar11 = local_12e4;
            pSVar31 = local_12f8;
            local_1710 = (float)(int)local_12f8 - *(float *)((int)local_12e4 + 0x8000f0);
            local_12fc = (Spawn *)(iVar35 % (iVar27 * 4) +
                                  ((int)&local_12f0->vftablePtr + (int)local_1358._4_4_) * 2);
            fVar39 = (float)(int)local_12fc - *(float *)((int)local_12e4 + 0x8000f4);
            if (400.0 <= fVar39 * fVar39 + local_1710 * local_1710) {
              piVar45 = (int *)*local_137c;
              if (piVar45 != local_137c) {
                local_1338 = (Spawn *)(((int)local_12fc >> 0x1f) << 0x10 | (uint)local_12fc >> 0x10)
                ;
                local_12f4 = (int *)(((int)local_12f8 >> 0x1f) << 0x10 | (uint)local_12f8 >> 0x10);
                local_12e0 = (Spawn *)((int)local_12f8 * 0x10000);
                do {
                  local_13c0 = (double)CONCAT44((int)local_1338 +
                                                (-(uint)((uint)((int)local_12fc * 0x10000) <
                                                        (uint)piVar45[4]) - piVar45[5]),
                                                (int)local_12fc * 0x10000 - piVar45[4]);
                  local_13b8 = (double)CONCAT44((int)local_12f4 +
                                                (-(uint)(local_12e0 < (Spawn *)piVar45[2]) -
                                                piVar45[3]),(int)local_12e0 - piVar45[2]);
                  local_134c = (Spawn *)(float)(longlong)local_13b8;
                  local_15e0 = (float)local_134c * 1.5258789e-05;
                  if ((float)(longlong)local_13c0 * 1.5258789e-05 *
                      (float)(longlong)local_13c0 * 1.5258789e-05 + local_15e0 * local_15e0 < 1600.0
                     ) goto LAB_0051d429;
                  piVar45 = (int *)*piVar45;
                } while (piVar45 != local_137c);
              }
              fVar38 = FUN_004d19f0(local_12e4,(uint)local_12f8,(uint)local_12fc);
              pvVar17 = local_12e4;
              pZVar34 = local_130c;
              local_1338 = (Spawn *)(float)fVar38;
              if ((float)local_1338 <= 0.25) {
                pSVar30 = (Spawn *)FUN_00406100(local_12e4,(uint)pSVar31,(uint)local_12fc,
                                                (int)local_130c);
                iVar35 = *(int *)&(pSVar30->Spawn_data).field_0x18;
                local_12d8 = (Spawn *)(iVar35 + (int)*(int **)&(pSVar30->Spawn_data).field_0xc);
                pSVar31 = (Spawn *)(iVar35 - 1);
                local_1338 = pSVar31;
                local_134c = pSVar30;
                for (; -1 < (int)pSVar31;
                    pSVar31 = (Spawn *)((int)&pSVar31[-1].Spawn_data.offset_0xf70 + 3)) {
                  puVar14 = FUN_004d23f0(pSVar30,(int)pSVar31);
                  pZVar34 = local_130c;
                  pvVar17 = local_12e4;
                  if (((puVar14[3] & 0x1f) != 0) && ((puVar14[3] & 0x1f) != 2)) break;
                  local_12d8 = (Spawn *)((int)&local_12d8[-1].Spawn_data.offset_0xf70 + 3);
                }
                puVar14 = FUN_00405fd0(pvVar17,(uint)local_12f8,(uint)local_12fc,
                                       (int)((int)&local_12d8[-1].Spawn_data.offset_0xf70 + 3),
                                       (int)pZVar34);
                bVar6 = puVar14[3] & 0x1f;
                pvVar11 = local_12e4;
                if ((((bVar6 != 0xb) && (bVar6 != 8)) && (bVar6 != 7)) &&
                   (puVar14 = FUN_00405fd0(pvVar17,(uint)local_12f8,(uint)local_12fc,
                                           (int)((int)&local_12d8[-1].Spawn_data.offset_0xf70 + 3),
                                           (int)pZVar34), pvVar11 = local_12e4,
                   (puVar14[3] & 0x40) == 0)) {
                  pSVar31 = (Spawn *)((int)local_12f8 - (int)local_1300);
                  local_136c = (byte *)((int)&local_12f8->vftablePtr + (int)&local_1300->vftablePtr)
                  ;
                  local_1318 = pSVar31;
                  if ((int)pSVar31 <= (int)local_136c) {
                    local_1338 = (Spawn *)((int)local_12fc - (int)local_12f0);
                    local_133c = (Spawn *)((int)&local_12fc->vftablePtr +
                                          (int)&local_12f0->vftablePtr);
                    local_12e8 = (Spawn *)((int)pSVar31 + -(int)local_12f8);
                    do {
                      pvVar11 = local_12e4;
                      pZVar34 = local_130c;
                      local_12dc = local_1338;
                      if ((int)local_1338 <= (int)local_133c) {
                        local_12f8 = (Spawn *)((int)local_12d8 + (int)local_12d4 * -2);
                        local_134c = (Spawn *)((int)&local_12d8->vftablePtr + (int)local_12d4 * 2);
                        local_1308 = (int *)((int)local_1338 - (int)local_12fc);
                        local_1318 = pSVar31;
                        do {
                          local_12d0 = local_134c;
                          if ((int)local_12f8 <= (int)local_134c) {
                            fVar38 = FUN_004d5d30(SUB84((double)(int)pSVar31 * 0.05,0),
                                                  (int)((ulonglong)((double)(int)pSVar31 * 0.05) >>
                                                       0x20),(double)(int)local_12dc * 0.05);
                            local_1594 = (float)(int)local_12e8 / (float)(int)local_1300;
                            local_1590 = (float)(int)local_1308 / (float)(int)local_12f0;
                            piVar45 = (int *)((float)fVar38 * 0.8);
                            pSVar43 = (Spawn *)(float)(int)local_12d4;
                            local_12e0 = (Spawn *)(local_1590 * local_1590 + local_1594 * local_1594
                                                  );
                            local_1314 = (Spawn *)((int)local_12d0 - (int)local_12d8);
                            pSVar30 = local_12f8;
                            local_132c = pSVar43;
                            local_12f4 = piVar45;
                            pSVar46 = local_12e0;
                            do {
                              fVar39 = (float)(int)local_1314 / (float)pSVar43 + (float)piVar45;
                              if ((fVar39 * fVar39 + (float)pSVar46 <= 1.0) &&
                                 (puVar14 = FUN_00405fd0(pvVar11,(uint)local_1318,(uint)local_12dc,
                                                         (int)local_12d0,(int)pZVar34),
                                 pSVar30 = local_12f8, piVar45 = local_12f4, pSVar43 = local_132c,
                                 pSVar46 = local_12e0, (puVar14[3] & 0x40) == 0)) {
                                pfVar10 = FUN_0052d030(pvVar11,local_75c,(float)local_1318,
                                                       (uint)local_12dc,(int)local_12d0,(int)pZVar34
                                                      );
                                iVar35 = 0;
                                do {
                                  iVar27 = iVar35 + 1;
                                  *(char *)((int)&local_131c + iVar35) = (char)(int)pfVar10[iVar35];
                                  iVar35 = iVar27;
                                } while (iVar27 < 3);
                                local_13f4 = (undefined2)local_131c;
                                local_13f2 = local_131c._2_1_;
                                local_13f1 = 0x26;
                                FUN_0041ff00(pvVar11,(float)local_1318,(uint)local_12dc,
                                             (int)local_12d0,(undefined1 *)&local_13f4,(int)pZVar34)
                                ;
                                pSVar30 = local_12f8;
                                piVar45 = local_12f4;
                                pSVar43 = local_132c;
                                pSVar46 = local_12e0;
                              }
                              local_12d0 = (Spawn *)((int)&local_12d0[-1].Spawn_data.offset_0xf70 +
                                                    3);
                              local_1314 = (Spawn *)((int)&local_1314[-1].Spawn_data.offset_0xf70 +
                                                    3);
                              pSVar31 = local_1318;
                            } while ((int)pSVar30 <= (int)local_12d0);
                          }
                          local_1308 = (int *)((int)local_1308 + 1);
                          local_12dc = (Spawn *)((int)&local_12dc->vftablePtr + 1);
                        } while ((int)local_12dc <= (int)local_133c);
                      }
                      pSVar31 = (Spawn *)((int)pSVar31 + 1);
                      local_12e8 = (Spawn *)((int)&local_12e8->vftablePtr + 1);
                      pvVar11 = local_12e4;
                      local_1318 = pSVar31;
                    } while ((int)pSVar31 <= (int)local_136c);
                  }
                }
              }
            }
LAB_0051d429:
            local_1324 = (Spawn *)((int)&local_1324[-1].Spawn_data.offset_0xf70 + 3);
          } while (local_1324 != (Spawn *)0x0);
        }
      }
      pZVar34 = local_130c;
      pvVar17 = *(void **)&(local_1304->Spawn_data).field_0x14;
      if ((pvVar17 == (void *)0x1) || (pvVar17 == (void *)0x5)) {
        FUN_004e28e0();
      }
      if (*(char *)((int)local_1348 + 0x18 + local_1380) == '\x04') {
        ppiStack_238 = local_138c;
        local_23c = local_1390;
        iVar35 = FUN_00406100(pvVar11,(uint)local_1390,(uint)local_138c,(int)pZVar34);
        local_234 = *(int *)(iVar35 + 0x10) + *(int *)(iVar35 + 0x1c);
        local_132c = (Spawn *)(((int)local_1390 >> 0x1f) << 0x10 | (uint)local_1390 >> 0x10);
        local_1308 = (int *)((int)local_1390 << 0x10);
        local_133c = (Spawn *)(((int)local_138c >> 0x1f) << 0x10 | (uint)local_138c >> 0x10);
        local_1324 = (Spawn *)((int)local_138c << 0x10);
        local_12f0 = (Spawn *)(((int)local_234 >> 0x1f) << 0x10 | local_234 >> 0x10);
        local_1348 = (float)(local_234 * 0x10000);
        local_324 = local_1308;
        local_320 = local_132c;
        local_31c = local_1324;
        local_318 = local_133c;
        local_314 = local_1348;
        local_310 = local_12f0;
        iVar35 = FUN_004f3ba0(local_137c,(undefined4 *)local_137c[1],&local_324);
        if (local_1378 == 0x7fffffe) {
LAB_0051d544:
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        local_1378 = local_1378 + 1;
        local_137c[1] = iVar35;
        **(int **)(iVar35 + 4) = iVar35;
        iVar35 = rand();
        local_12f4 = (int *)(iVar35 % 3 + 6);
        if (0 < (int)local_12f4) {
          local_13c0 = (double)(int)local_12f4;
          local_12e0 = (Spawn *)0x0;
          do {
            fVar39 = (float)(((double)(int)local_12e0 * 3.141592653589793) / local_13c0);
            dVar41 = (double)fVar39;
            local_1344._4_4_ = (Spawn *)fVar39;
            libm_sse2_sin_precise();
            local_1358 = (double)CONCAT44((float)dVar41,(undefined4)local_1358);
            dVar41 = (double)(float)local_1344._4_4_;
            libm_sse2_cos_precise();
            local_1344 = (double)CONCAT44(local_234,(undefined4)local_1344);
            local_34 = local_234;
            local_4ac = (int)((float)dVar41 * 25.0);
            local_4a8 = (int)((float)local_1358._4_4_ * 25.0);
            local_3c = (int)local_23c + local_4ac;
            uStack_38 = (int)ppiStack_238 + local_4a8;
            iVar35 = FUN_00406100(pvVar11,local_3c,uStack_38,(int)pZVar34);
            if (iVar35 == 0) {
              iVar35 = (int)local_1344._4_4_;
            }
            else {
              iVar35 = *(int *)(iVar35 + 0x1c) + *(int *)(iVar35 + 0x10);
            }
            local_34 = iVar35 + 4;
            uVar26 = rand();
            uVar26 = uVar26 & 0x80000003;
            if ((int)uVar26 < 0) {
              uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
            }
            local_12d4 = (Spawn *)(uVar26 + 3);
            uVar26 = rand();
            uVar26 = uVar26 & 0x80000003;
            if ((int)uVar26 < 0) {
              uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
            }
            local_1314 = (Spawn *)((int)local_12d4 * 2);
            local_12fc = (Spawn *)(local_3c + (int)local_12d4 * -2);
            local_1300 = (Spawn *)(uVar26 + 3);
            if ((int)local_12fc <= (int)((int)&local_1314->vftablePtr + local_3c)) {
              do {
                pvVar11 = local_12e4;
                local_12d8 = (Spawn *)(uStack_38 + (int)local_1300 * -2);
                if ((int)local_12d8 <= (int)(uStack_38 + (int)local_1300 * 2)) {
                  do {
                    pZVar34 = local_130c;
                    local_12f8 = (Spawn *)(local_34 + 0x14);
                    if ((int)(local_34 + -0x14) <= (int)local_12f8) {
                      dVar41 = (double)(int)local_12d8 * 0.05;
                      fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),dVar41)
                      ;
                      local_1344 = (double)CONCAT44((float)fVar38,(undefined4)local_1344);
                      local_134c = (Spawn *)((float)fVar38 * 0.3);
                      local_136c = (byte *)(float)(int)local_1300;
                      local_13b8 = (double)(int)local_12fc * 0.05;
                      do {
                        local_1338 = (Spawn *)((float)(int)((int)local_12f8 - local_34) / 10.0);
                        local_1358 = (double)CONCAT44((float)(int)((int)local_12d8 - uStack_38) /
                                                      (float)local_136c + (float)local_134c,
                                                      (undefined4)local_1358);
                        fVar38 = FUN_004d5d30(SUB84(local_13b8,0),
                                              (int)((ulonglong)local_13b8 >> 0x20),
                                              (double)(int)local_12f8 * 0.05);
                        local_1344 = (double)CONCAT44((float)fVar38,(undefined4)local_1344);
                        local_1774 = (float)fVar38 * 0.3 +
                                     (float)(int)((int)local_12fc - local_3c) /
                                     (float)(int)local_12d4;
                        if ((local_1774 * local_1774 +
                             (float)local_1358._4_4_ * (float)local_1358._4_4_ +
                             (float)local_1338 * (float)local_1338 <= 1.0) &&
                           (puVar14 = FUN_00405fd0(pvVar11,(uint)local_12fc,(uint)local_12d8,
                                                   (int)local_12f8,(int)pZVar34),
                           (puVar14[3] & 0x40) == 0)) {
                          pfVar10 = FUN_0052d030(pvVar11,local_774,(float)local_12fc,
                                                 (uint)local_12d8,(int)local_12f8,(int)pZVar34);
                          iVar35 = 0;
                          do {
                            iVar27 = iVar35 + 1;
                            *(char *)((int)local_12c8 + iVar35 + -4) = (char)(int)pfVar10[iVar35];
                            iVar35 = iVar27;
                          } while (iVar27 < 3);
                          local_13fc = (undefined2)local_12cc;
                          local_13fa = local_12cc._2_1_;
                          local_13f9 = 6;
                          FUN_0041ff00(pvVar11,(float)local_12fc,(uint)local_12d8,(int)local_12f8,
                                       (undefined1 *)&local_13fc,(int)pZVar34);
                        }
                        local_12f8 = (Spawn *)((int)&local_12f8[-1].Spawn_data.offset_0xf70 + 3);
                      } while ((int)(local_34 + -0x14) <= (int)local_12f8);
                    }
                    local_12d8 = (Spawn *)((int)&local_12d8->vftablePtr + 1);
                  } while ((int)local_12d8 <= (int)(uStack_38 + (int)local_1300 * 2));
                }
                local_12fc = (Spawn *)((int)&local_12fc->vftablePtr + 1);
                pZVar34 = local_130c;
              } while ((int)local_12fc <= (int)((int)&local_1314->vftablePtr + local_3c));
            }
            local_12e0 = (Spawn *)((int)&local_12e0->vftablePtr + 2);
            local_12f4 = (int *)((int)local_12f4 + -1);
          } while (local_12f4 != (int *)0x0);
        }
        FUN_004c84b0((int)local_6fc);
        local_8 = CONCAT31(local_8._1_3_,4);
        local_16b8 = 0;
        local_1538 = FUN_0054a946();
        pvVar11 = local_12e4;
        pZVar34 = local_130c;
        local_3b4 = local_132c;
        local_3ac = local_133c;
        local_3a8 = local_1348;
        local_3a4 = local_12f0;
        local_3b8 = local_1308;
        local_6f4 = local_1538 + CONCAT44(local_132c,local_1308);
        local_3b0 = local_1324;
        local_6ec = local_1538 + CONCAT44(local_133c,local_1324);
        local_3c8 = local_1348;
        local_3c4 = local_12f0;
        local_438 = 0;
        local_1548 = local_1538;
        local_3d0 = local_6ec;
        local_448 = local_1538;
        local_3d8 = local_6f4;
        local_440 = local_1538;
        while( true ) {
          local_12d4 = (Spawn *)((ulonglong)local_6f4 >> 0x20);
          local_6e4 = local_1348;
          local_6e0 = local_12f0;
          iVar35 = FUN_00406050(pvVar11,(uint)local_6f4,(uint)local_12d4,(uint)local_6ec,
                                (uint)((ulonglong)local_6ec >> 0x20),(uint)local_1348,
                                (uint)local_12f0,(int)pZVar34);
          if (((*(byte *)(iVar35 + 3) & 0x1f) != 0) &&
             (lVar3 = local_6ec, lVar4 = local_6f4, (*(byte *)(iVar35 + 3) & 0x1f) != 2)) break;
          local_1348 = (float)((int)local_6e4 + -0x10000);
          local_12f0 = (Spawn *)((int)local_6e0 + ((0xffff < (uint)local_6e4) - 1));
        }
        while( true ) {
          local_6f4._4_4_ = (uint)((ulonglong)lVar4 >> 0x20);
          local_6f4._0_4_ = (uint)lVar4;
          local_6ec._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
          local_6ec._0_4_ = (uint)lVar3;
          iVar35 = FUN_00406050(pvVar11,(uint)local_6f4,local_6f4._4_4_,(uint)local_6ec,
                                local_6ec._4_4_,(uint)local_6e4,(uint)local_6e0,(int)pZVar34);
          local_6f4 = lVar4;
          local_6ec = lVar3;
          if (((*(byte *)(iVar35 + 3) & 0x1f) == 0) || ((*(byte *)(iVar35 + 3) & 0x1f) == 2)) break;
          bVar37 = 0xfffeffff < (uint)local_6e4;
          local_6e4 = (float)((int)local_6e4 + 0x10000);
          local_6e0 = (Spawn *)((int)&local_6e0->vftablePtr + (uint)bVar37);
          lVar3 = local_6ec;
          lVar4 = local_6f4;
        }
        local_6fc[0] = (void *)0x2d;
        local_6dc = rand();
        local_6dc = local_6dc & 0x80000003;
        if ((int)local_6dc < 0) {
          local_6dc = (local_6dc - 1 | 0xfffffffc) + 1;
        }
        local_6d8 = 0x40800000;
        local_6d4 = 0x40800000;
        local_6d0 = 0x40a00000;
        FUN_004d6670(&(pZVar34->Zone_data).offset_0x8,local_6fc);
        local_8._0_1_ = 3;
        if (local_6b4 != (undefined4 *)0x0) {
          std::_Container_base0::_Orphan_all((_Container_base0 *)&local_6b4);
          FUN_00406310(local_6b4,local_6b0);
          operator_delete(local_6b4);
          local_6b4 = (undefined4 *)0x0;
          local_6b0 = (undefined4 *)0x0;
          local_6ac = 0;
        }
      }
      local_132c = (Spawn *)&(local_1330->Spawn_data).offset_0x4;
      local_12dc = local_135c;
      local_12f4 = (int *)0xe;
      local_136c = (byte *)0x5;
      do {
        local_12e0 = (Spawn *)0xe;
        local_1318 = local_132c;
        do {
          local_1348 = 0.0;
          if (*(void **)&(local_1304->Spawn_data).field_0x14 == (void *)0x3) {
            local_14d8 = ((int)local_1318 >> 0x1f) << 0x10 | (uint)local_1318 >> 0x10;
            local_14dc = (int)local_1318 << 0x10;
            puVar18 = &(local_12dc->Spawn_data).offset_0x4;
            local_1488 = (double)CONCAT44(((int)puVar18 >> 0x1f) << 0x10 | (uint)puVar18 >> 0x10,
                                          (int)puVar18 * 0x10000);
            fVar38 = FUN_0052c820((uint *)local_1304,(uint *)&local_1488,&local_14dc);
            local_1344 = (double)CONCAT44((float)fVar38,(undefined4)local_1344);
            local_1348 = 1.0 - (float)fVar38;
            if (0.0 < local_1348) {
              local_1348 = local_1348 * local_1348;
            }
            else {
              local_1348 = 0.0;
            }
          }
          iVar35 = FUN_00406100(pvVar11,(uint)&(local_12dc->Spawn_data).offset_0x4,(uint)local_1318,
                                (int)pZVar34);
          if (iVar35 == 0) {
            fVar38 = (float10)FUN_004f8570(pvVar11,(float)&(local_12dc->Spawn_data).offset_0x4,
                                           (uint)local_1318);
            local_12fc = (Spawn *)(float)fVar38;
            local_1344 = (double)CONCAT44(local_12fc,(undefined4)local_1344);
          }
          else {
            local_12fc = *(Spawn **)(iVar35 + 4);
          }
          iVar35 = rand();
          local_12f8 = (Spawn *)(int)((float)(iVar35 % 5) + (float)local_12fc * 2.0 + 6.0 +
                                     local_1348 * 4.0);
          iVar35 = rand();
          local_12e8 = (Spawn *)((int)&local_1318[-1].Spawn_data.offset_0xf6c + (int)local_12f8);
          local_12f0 = (Spawn *)(int)((((float)iVar35 * 8.0) / 32767.0 + local_1348 * 6.0 + 8.0) *
                                     ((float)local_12fc * 0.5 + 1.0));
          local_12d0 = (Spawn *)((int)&local_12f8->vftablePtr + (int)&local_12dc->vftablePtr);
          local_15f0 = (float)(int)local_12d0 - *(float *)((int)pvVar11 + 0x8000f0);
          fVar39 = (float)(int)local_12e8 - *(float *)((int)pvVar11 + 0x8000f4);
          if (400.0 <= fVar39 * fVar39 + local_15f0 * local_15f0) {
            pSVar31 = (Spawn *)((int)local_135c + -((int)local_12f8 / 2) + 0x100);
            if ((int)pSVar31 <= (int)local_12d0) {
              local_12d0 = pSVar31;
            }
            pSVar31 = (Spawn *)((int)local_1330 + -((int)local_12f8 / 2) + 0x100);
            if ((int)pSVar31 <= (int)local_12e8) {
              local_12e8 = pSVar31;
            }
            piVar45 = (int *)*local_137c;
            if (piVar45 != local_137c) {
              uVar9 = ((int)local_12e8 >> 0x1f) << 0x10 | (uint)local_12e8 >> 0x10;
              uVar26 = (int)local_12e8 * 0x10000;
              local_1344 = (double)CONCAT44(uVar26,(undefined4)local_1344);
              local_1358 = (double)CONCAT44(uVar9,(undefined4)local_1358);
              local_12d4 = (Spawn *)(((int)local_12d0 >> 0x1f) << 0x10 | (uint)local_12d0 >> 0x10);
              local_134c = (Spawn *)((int)local_12d0 * 0x10000);
              do {
                local_13b8 = (double)CONCAT44((uVar9 - piVar45[5]) -
                                              (uint)(uVar26 < (uint)piVar45[4]),uVar26 - piVar45[4])
                ;
                local_13c0 = (double)CONCAT44((int)local_12d4 +
                                              (-(uint)(local_134c < (Spawn *)piVar45[2]) -
                                              piVar45[3]),(int)local_134c - piVar45[2]);
                local_1338 = (Spawn *)(float)(longlong)local_13c0;
                local_1740 = (float)local_1338 * 1.5258789e-05;
                if ((float)(longlong)local_13b8 * 1.5258789e-05 *
                    (float)(longlong)local_13b8 * 1.5258789e-05 + local_1740 * local_1740 < 1600.0)
                goto LAB_0051e593;
                piVar45 = (int *)*piVar45;
              } while (piVar45 != local_137c);
            }
            local_1344 = (double)(int)local_12e8 * 0.001;
            local_1358 = (double)(int)local_12d0 * 0.001;
            dVar41 = (double)*(int *)((int)pvVar11 + 0x800294) + local_1358;
            fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                  (double)*(int *)((int)pvVar11 + 0x800298) + local_1344);
            local_1300 = (Spawn *)(float)fVar38;
            uVar26 = rand();
            uVar26 = uVar26 & 0x80000001;
            if ((int)uVar26 < 0) {
              uVar26 = (uVar26 - 1 | 0xfffffffe) + 1;
            }
            local_12d8 = (Spawn *)(-(uint)(uVar26 != 0) & 5);
            if ((float)local_1300 <= 0.3) {
              iVar35 = rand();
              if (iVar35 % 10 == 0) {
                local_12d8 = (Spawn *)0x1;
              }
            }
            else {
              iVar35 = rand();
              if (iVar35 % 10 != 0) {
                local_12d8 = (Spawn *)0x1;
              }
            }
            iVar35 = rand();
            if (iVar35 % 10 == 0) {
              local_12d8 = (Spawn *)0x2;
            }
            iVar35 = FUN_00406100(pvVar11,(uint)local_12d0,(uint)local_12e8,(int)pZVar34);
            if (iVar35 == 0) {
              fVar38 = (float10)FUN_004f8b40(pvVar11,(int)local_12d0,(int)local_12e8);
              local_12d4 = (Spawn *)(float)fVar38;
              local_1300 = local_12d4;
            }
            else {
              local_12d4 = *(Spawn **)(iVar35 + 8);
            }
            if ((0.8 < (float)local_12d4) && (0.7 < (float)local_12fc)) {
              uVar26 = rand();
              uVar26 = uVar26 & 0x80000001;
              if ((int)uVar26 < 0) {
                uVar26 = (uVar26 - 1 | 0xfffffffe) + 1;
              }
              local_12d8 = (Spawn *)((uVar26 != 0) + 4);
              uVar26 = rand();
              uVar26 = uVar26 & 0x80000003;
              bVar37 = uVar26 == 0;
              if ((int)uVar26 < 0) {
                bVar37 = (uVar26 - 1 | 0xfffffffc) == 0xffffffff;
              }
              if (bVar37) {
                local_12d8 = (Spawn *)0x3;
              }
            }
            if (0.3 <= (float)local_12d4) {
              if ((float)local_12d4 < 0.7) {
                fVar38 = FUN_004d5d30(SUB84(local_1358 + 8473.0,0),
                                      (int)((ulonglong)(local_1358 + 8473.0) >> 0x20),
                                      local_1344 + 9438.0);
                local_1344 = (double)CONCAT44((float)fVar38,(undefined4)local_1344);
                if (0.8 < (float)fVar38) {
                  iVar35 = rand();
                  if (iVar35 % 5 != 0) {
                    local_12d8 = (Spawn *)0x2;
                    goto LAB_0051e307;
                  }
                }
              }
              if (local_12d8 == (Spawn *)0x1) goto LAB_0051e2c2;
              if (local_12d8 == (Spawn *)0x2) {
LAB_0051e307:
                iVar35 = rand();
                local_12f0 = (Spawn *)((int)&local_12f0->vftablePtr + iVar35 % ((int)local_12f0 / 2)
                                      );
                pvVar11 = local_12e4;
              }
            }
            else {
              if (0.2 < (float)local_12d4) {
                fVar38 = FUN_004d5d30(SUB84(local_1358 + 8473.0,0),
                                      (int)((ulonglong)(local_1358 + 8473.0) >> 0x20),
                                      local_1344 + 9438.0);
                local_1344 = (double)CONCAT44((float)fVar38,(undefined4)local_1344);
                if (0.6 < (float)fVar38) {
                  iVar35 = rand();
                  if (iVar35 % 5 != 0) {
                    local_12d8 = (Spawn *)0x2;
                    goto LAB_0051e307;
                  }
                }
              }
              local_12d8 = (Spawn *)0x1;
LAB_0051e2c2:
              if ((float)(int)local_12f0 * 0.5 < (float)(int)local_12f8) {
                local_12f8 = (Spawn *)(int)((float)(int)local_12f0 * 0.5);
              }
              if ((int)local_12f8 < 1) {
                local_12f8 = (Spawn *)0x1;
              }
            }
            iVar35 = FUN_00406100(pvVar11,(uint)local_12d0,(uint)local_12e8,(int)pZVar34);
            if (iVar35 == 0) {
              FUN_004f8570(pvVar11,(float)local_12d0,(uint)local_12e8);
            }
            if ((int)local_1374 < (int)&local_12f8->vftablePtr + (int)&local_12d0->vftablePtr) {
              local_12d0 = (Spawn *)((int)local_135c + (0x100 - (int)local_12f8));
            }
            if ((int)&(local_1330->Spawn_data).field_0xfc <
                (int)&local_12e8->vftablePtr + (int)&local_12f8->vftablePtr) {
              local_12e8 = (Spawn *)((int)local_1330 + (0x100 - (int)local_12f8));
            }
            fVar38 = FUN_004d9010(pvVar11,(float)local_12d0,(float)local_12e8,(int)pZVar34);
            local_1344 = (double)CONCAT44((float)fVar38 + local_1348,(undefined4)local_1344);
            iVar35 = rand();
            if ((float)iVar35 / 32767.0 <= (float)local_1344._4_4_) {
              iVar35 = FUN_00406100(pvVar11,(uint)local_12d0,(uint)local_12e8,(int)pZVar34);
              if (iVar35 != 0) {
                local_12fc = (Spawn *)(*(int *)(iVar35 + 0x1c) + -1 + *(int *)(iVar35 + 0x10));
                while( true ) {
                  puVar14 = FUN_00405fd0(pvVar11,(uint)local_12d0,(uint)local_12e8,(int)local_12fc,
                                         (int)pZVar34);
                  if (((puVar14[3] & 0x1f) != 0) && ((puVar14[3] & 0x1f) != 2)) break;
                  local_12fc = (Spawn *)((int)&local_12fc[-1].Spawn_data.offset_0xf70 + 3);
                }
                if (-1 < (int)local_12fc) {
                  puVar14 = FUN_00405fd0(pvVar11,(uint)local_12d0,(uint)local_12e8,(int)local_12fc,
                                         (int)pZVar34);
                  local_12fc = (Spawn *)((int)&local_12fc->vftablePtr + 1);
                  local_1358 = (double)((ulonglong)CONCAT14(puVar14[3],(undefined4)local_1358) &
                                       0xffffff1fffffffff);
                  iVar35 = FUN_00406100(pvVar11,(uint)local_12d0,(uint)local_12e8,(int)pZVar34);
                  if (iVar35 == 0) {
                    fVar38 = (float10)FUN_004f8b40(pvVar11,(int)local_12d0,(int)local_12e8);
                    fVar39 = (float)fVar38;
                    local_1344 = (double)CONCAT44(fVar39,(undefined4)local_1344);
                  }
                  else {
                    fVar39 = *(float *)(iVar35 + 8);
                  }
                  pSVar31 = local_12d8;
                  if (0.8 < fVar39) {
                    iVar35 = FUN_00406100(pvVar11,(uint)local_12d0,(uint)local_12e8,(int)pZVar34);
                    if (iVar35 == 0) {
                      fVar38 = (float10)FUN_004f8570(pvVar11,(float)local_12d0,(uint)local_12e8);
                      fVar39 = (float)fVar38;
                      local_1344 = (double)CONCAT44(fVar39,(undefined4)local_1344);
                    }
                    else {
                      fVar39 = *(float *)(iVar35 + 4);
                    }
                    pSVar31 = local_12d8;
                    if (fVar39 < 0.2) {
                      pSVar31 = (Spawn *)0x3;
                    }
                  }
                  if (((local_1358._4_4_ == (Spawn *)0x4) || (local_1358._4_4_ == (Spawn *)0xa)) ||
                     ((local_1358._4_4_ == (Spawn *)0x9 && ((int)local_12fc < 3)))) {
                    pSVar30 = local_12f8;
                    if ((int)local_12f8 < 1) {
                      pSVar30 = local_1334;
                    }
                    FUN_00513760((float)local_12d0,(uint)local_12e8,(float)local_12fc,(int)pSVar30,
                                 (int)local_12f0,(int)pSVar31,(int)pZVar34);
                  }
                }
              }
            }
          }
LAB_0051e593:
          local_1318 = (Spawn *)&(local_1318->Spawn_data).field_0xe;
          local_12e0 = (Spawn *)((int)&local_12e0[-1].Spawn_data.offset_0xf70 + 3);
        } while (local_12e0 != (Spawn *)0x0);
        local_12dc = (Spawn *)&(local_12dc->Spawn_data).field_0xe;
        local_12f4 = (int *)((int)local_12f4 + -1);
      } while (local_12f4 != (int *)0x0);
      if (local_1364 == (Spawn *)0x0) {
        iVar35 = rand();
        local_1314 = (Spawn *)((int)&(local_135c->Spawn_data).field_0xc + iVar35 % 0xe0);
        iVar35 = rand();
        local_12d4 = (Spawn *)((int)&(local_1330->Spawn_data).field_0xc + iVar35 % 0xe0);
        iVar35 = FUN_00406100(pvVar11,(uint)local_1314,(uint)local_12d4,(int)pZVar34);
        if (iVar35 != 0) {
          local_1300 = (Spawn *)(*(int *)(iVar35 + 0x1c) + *(int *)(iVar35 + 0x10));
          while( true ) {
            puVar14 = FUN_00405fd0(pvVar11,(uint)local_1314,(uint)local_12d4,(int)local_1300,
                                   (int)pZVar34);
            pSVar31 = local_1300;
            if (((puVar14[3] & 0x1f) != 0) && ((puVar14[3] & 0x1f) != 2)) break;
            local_1300 = (Spawn *)((int)local_1300 + -1);
          }
          FUN_004c84b0((int)local_988);
          uVar26 = (int)pSVar31 + 1;
          local_1550 = (int *)(((int)uVar26 >> 0x1f) << 0x10 | uVar26 >> 0x10);
          local_1554 = (Spawn *)(uVar26 * 0x10000);
          local_1300 = (Spawn *)(((int)local_12d4 >> 0x1f) << 0x10 | (uint)local_12d4 >> 0x10);
          local_8._0_1_ = 5;
          local_988[0] = (void *)0x0;
          uVar9 = (int)local_12d4 * 0x10000;
          local_12f4 = local_1550;
          local_12e0 = local_1554;
          uVar48 = FUN_0054a946();
          iVar35 = (int)(uVar48 >> 0x20);
          uVar26 = (uint)uVar48;
          local_978 = uVar9 - uVar26;
          local_1300 = (Spawn *)(((int)local_1300 - iVar35) - (uint)(uVar9 < uVar26));
          local_980 = (int)local_1314 * 0x10000 - uVar26;
          local_97c = ((((int)local_1314 >> 0x1f) << 0x10 | (uint)local_1314 >> 0x10) - iVar35) -
                      (uint)((uint)((int)local_1314 * 0x10000) < uVar26);
          local_3e0 = local_12e0;
          local_3dc = local_12f4;
          local_970 = local_12e0;
          local_96c = local_12f4;
          local_964 = 0x40000000;
          local_960 = 0x40000000;
          local_95c = 0x41000000;
          local_974 = local_1300;
          local_3f0 = local_980;
          local_3ec = local_97c;
          local_3e8 = local_978;
          local_3e4 = local_1300;
          local_968 = rand();
          pZVar34 = local_130c;
          local_968 = local_968 & 0x80000003;
          if ((int)local_968 < 0) {
            local_968 = (local_968 - 1 | 0xfffffffc) + 1;
          }
          FUN_004d6670(&(local_130c->Zone_data).offset_0x8,local_988);
          local_8._0_1_ = 3;
          pvVar11 = local_12e4;
          if (local_940 != (undefined4 *)0x0) {
            std::_Container_base0::_Orphan_all((_Container_base0 *)&local_940);
            FUN_00406310(local_940,local_93c);
            operator_delete(local_940);
            local_940 = (undefined4 *)0x0;
            local_93c = (undefined4 *)0x0;
            local_938 = 0;
            pvVar11 = local_12e4;
          }
        }
      }
      pvVar17 = *(void **)&(local_1304->Spawn_data).field_0x14;
      if ((((pvVar17 != (void *)0x0) && (pvVar17 != (void *)0xa)) && (pvVar17 != (void *)0xe)) &&
         ((pvVar17 != (void *)0x1 && (pvVar17 != (void *)0x5)))) {
        local_1448 = (void *)0x0;
        local_1444 = 0;
        local_1440 = 0;
        local_8 = CONCAT31(local_8._1_3_,6);
        local_133c = (Spawn *)0x0;
        local_12f0 = (Spawn *)0x0;
        do {
          local_1364 = (Spawn *)0x0;
          pSVar31 = local_12f0;
          local_132c = local_133c;
          do {
            if ((int)local_132c % (int)local_136c == 0) {
              local_12f4 = (int *)((int)pSVar31 + 4 + (pZVar34->Zone_data).offset_0x5c * 0x100);
              local_12e0 = (Spawn *)((int)local_1364 + 4 + (pZVar34->Zone_data).offset_0x60 * 0x100)
              ;
              local_1324 = (Spawn *)(((int)local_12e0 >> 0x1f) << 0x10 | (uint)local_12e0 >> 0x10);
              local_1344 = (double)CONCAT44((int)local_12e0 * 0x10000,(undefined4)local_1344);
              local_1468 = (double)CONCAT44(local_1324,(int)local_12e0 * 0x10000);
              local_1308 = (int *)(((int)local_12f4 >> 0x1f) << 0x10 | (uint)local_12f4 >> 0x10);
              local_1314 = (Spawn *)((int)local_12f4 * 0x10000);
              local_1478 = (double)CONCAT44(local_1308,local_1314);
              fVar38 = FUN_0052c820((uint *)local_1304,(uint *)&local_1478,(uint *)&local_1468);
              local_1334 = (Spawn *)(float)fVar38;
              fVar39 = 1.0 - (float)local_1334;
              if (0.0 < fVar39) {
                local_12d4 = (Spawn *)(fVar39 * fVar39);
              }
              else {
                local_12d4 = (Spawn *)0x0;
              }
              iVar35 = rand();
              pSVar31 = local_12f0;
              if ((float)iVar35 / 32767.0 <= (float)local_12d4 * 0.75) {
                iVar35 = FUN_00406100(pvVar11,(uint)local_12f4,(uint)local_12e0,(int)pZVar34);
                pSVar31 = local_12f0;
                if (iVar35 != 0) {
                  local_1300 = *(Spawn **)(iVar35 + 0x14);
                  while( true ) {
                    puVar14 = FUN_00405fd0(pvVar11,(uint)local_12f4,(uint)local_12e0,(int)local_1300
                                           ,(int)pZVar34);
                    if (((puVar14[3] & 0x1f) == 0) || ((puVar14[3] & 0x1f) == 2)) break;
                    local_1300 = (Spawn *)((int)&local_1300->vftablePtr + 1);
                  }
                  uVar26 = ((int)local_1300 >> 0x1f) << 0x10 | (uint)local_1300 >> 0x10;
                  iVar27 = (int)local_1300 << 0x10;
                  local_1564 = iVar27;
                  local_1560 = uVar26;
                  uVar48 = FUN_0054a946();
                  iVar35 = (int)(uVar48 >> 0x20);
                  pSVar31 = (Spawn *)uVar48;
                  local_334 = (int)local_1344._4_4_ - (int)pSVar31;
                  local_1324 = (Spawn *)((int)local_1324 +
                                        (-(uint)(local_1344._4_4_ < pSVar31) - iVar35));
                  bVar37 = local_1314 < pSVar31;
                  local_1314 = (Spawn *)((int)local_1314 - (int)pSVar31);
                  local_1308 = (int *)((int)local_1308 + (-(uint)bVar37 - iVar35));
                  local_33c = local_1314;
                  local_338 = local_1308;
                  local_330 = local_1324;
                  local_32c = iVar27;
                  local_328 = uVar26;
                  FUN_004e1420(&local_1448,&local_33c);
                  pSVar31 = local_12f0;
                }
              }
            }
            pZVar34 = local_130c;
            local_1364 = (Spawn *)((int)local_1364 + 0x12);
            local_132c = (Spawn *)((int)&local_132c->vftablePtr + 3);
            pvVar11 = local_12e4;
          } while ((int)local_1364 < 0xfc);
          local_12f0 = (Spawn *)((int)pSVar31 + 0x12);
          local_133c = (Spawn *)((int)&local_133c->vftablePtr + 1);
        } while ((int)local_12f0 < 0xfc);
        FUN_005104e0(local_12e4,(int)local_130c,(uint *)local_1304,(int *)&local_1448);
        local_8._0_1_ = 3;
        if (local_1448 != (void *)0x0) {
          std::_Container_base0::_Orphan_all((_Container_base0 *)&local_1448);
          operator_delete(local_1448);
          local_1448 = (void *)0x0;
          local_1444 = 0;
          local_1440 = 0;
        }
      }
      if (*(void **)&(local_1304->Spawn_data).field_0x14 == (void *)0x9) {
        uVar47 = __alldiv((uint)local_1304->vftablePtr,(uint)*(int **)&local_1304->Spawn_data,
                          0x10000,0);
        iVar35 = (int)uVar47;
        local_44 = (double)CONCAT44(local_44._4_4_,iVar35);
        uVar47 = __alldiv((local_1304->Spawn_data).offset_0x4,
                          (uint)*(void **)&(local_1304->Spawn_data).field_0x8,0x10000,0);
        iVar27 = (int)uVar47;
        local_44 = (double)CONCAT44(iVar27,(undefined4)local_44);
        local_188 = (double)CONCAT44((int)(iVar27 + (iVar27 >> 0x1f & 0xffU)) >> 8,
                                     (int)(iVar35 + (iVar35 >> 0x1f & 0xffU)) >> 8);
        iVar35 = 0;
        piVar45 = &(pZVar34->Zone_data).offset_0x5c;
        do {
          if (*(int *)((int)&local_188 + iVar35 * 4) != *piVar45) goto LAB_0051ec4a;
          iVar35 = iVar35 + 1;
          piVar45 = piVar45 + 1;
        } while (iVar35 < 2);
        pSVar31 = operator_new(0x10f0);
        if (pSVar31 == (Spawn *)0x0) {
          pSVar31 = (Spawn *)0x0;
        }
        else {
          pSVar31 = cube::Spawn::Spawn(pSVar31);
        }
        *(Spawn_vftable **)&(pSVar31->Spawn_data).field_0xc = local_1304->vftablePtr;
        *(int **)&(pSVar31->Spawn_data).field_0x10 = *(int **)&local_1304->Spawn_data;
        *(undefined4 *)&(pSVar31->Spawn_data).field_0x14 = (local_1304->Spawn_data).offset_0x4;
        pvVar11 = *(void **)&(local_1304->Spawn_data).field_0x8;
        *(void **)&(pSVar31->Spawn_data).field_0x18 = pvVar11;
        local_13f8 = pSVar31;
        pZVar53 = pZVar34;
        uVar47 = __alldiv(*(uint *)&(pSVar31->Spawn_data).field_0x14,(uint)pvVar11,0x10000,0);
        uVar26 = (uint)uVar47;
        uVar47 = __alldiv(*(uint *)&(pSVar31->Spawn_data).field_0xc,
                          *(uint *)&(pSVar31->Spawn_data).field_0x10,0x10000,0);
        iVar35 = FUN_00406100(local_12e4,(uint)uVar47,uVar26,(int)pZVar53);
        uVar26 = *(uint *)(iVar35 + 0x10);
        *(uint *)&(pSVar31->Spawn_data).field_0x1c = uVar26 << 0x10;
        *(uint *)&(pSVar31->Spawn_data).field_0x20 = ((int)uVar26 >> 0x1f) << 0x10 | uVar26 >> 0x10;
        (pSVar31->Spawn_data).offset_0x24 = 1;
        (pSVar31->Spawn_data).offset_0x28 = 0x6b;
        (pSVar31->Spawn_data).offset_0x30 = *(void **)&(local_1304->Spawn_data).field_0x20;
        (pSVar31->Spawn_data).offset_0x54 = *(undefined1 *)&(local_1304->Spawn_data).offset_0x24;
        FUN_004f2be0(&(pZVar34->Zone_data).offset_0x14,&local_13f8);
      }
LAB_0051ec4a:
      local_1410 = (int *)0x0;
      local_140c = (int *)0x0;
      local_1408 = 0;
      local_8 = CONCAT31(local_8._1_3_,7);
      local_12d4 = (Spawn *)0x0;
      pcVar36 = (char *)(local_1380 + 0x18);
      do {
        iVar35 = 0;
        pSVar31 = local_12d4;
        do {
          if (*pcVar36 != '\0') {
            local_3a0 = &pSVar31->vftablePtr + local_13d4 * 0x10;
            iStack_39c = (int)local_1388 * 0x40 + iVar35;
            local_180 = (double)CONCAT44(iStack_39c,local_3a0);
            iVar28 = (int)local_3a0 - local_1360;
            iVar27 = iStack_39c - local_1368;
            local_30 = (double)CONCAT44(iVar27,iVar28);
            local_398 = iVar27 * iVar27 + iVar28 * iVar28;
            FUN_0042feb0(&local_1410,&local_3a0);
            pSVar31 = local_12d4;
          }
          iVar35 = iVar35 + 1;
          pcVar36 = pcVar36 + 0x10;
        } while (iVar35 < 0x40);
        local_12d4 = (Spawn *)((int)&pSVar31->vftablePtr + 1);
      } while ((int)local_12d4 < 0x40);
      local_1420 = local_1420 & 0xffffff00;
      FUN_004f5e00(local_1410,local_140c,((int)local_140c - (int)local_1410) / 0xc,local_1420);
      local_1308 = (int *)0x0;
      do {
        local_1314 = (Spawn *)0x0;
        do {
          pSVar31 = local_1314;
          uVar26 = rand();
          uVar26 = uVar26 & 0x80000003;
          bVar37 = uVar26 == 0;
          if ((int)uVar26 < 0) {
            bVar37 = (uVar26 - 1 | 0xfffffffc) == 0xffffffff;
          }
          pvVar11 = local_12e4;
          pZVar34 = local_130c;
          if (!bVar37) {
            iVar35 = rand();
            pSVar30 = (Spawn *)((int)&(local_135c->Spawn_data).field_0x14 +
                               (int)local_1308 * 0x55 + iVar35 % 10);
            local_12d0 = pSVar30;
            iVar35 = rand();
            pvVar11 = *(void **)&(local_1304->Spawn_data).field_0x14;
            local_12d8 = (Spawn *)((int)&(local_1330->Spawn_data).field_0x14 +
                                  (int)pSVar31 * 0x55 + iVar35 % 10);
            if ((pvVar11 != (void *)0x0) && (pvVar11 != (void *)0xa)) {
              local_1470 = (double)CONCAT44(((int)local_12d8 >> 0x1f) << 0x10 |
                                            (uint)local_12d8 >> 0x10,(int)local_12d8 * 0x10000);
              local_1480 = (double)CONCAT44(((int)pSVar30 >> 0x1f) << 0x10 | (uint)pSVar30 >> 0x10,
                                            (int)pSVar30 * 0x10000);
              fVar38 = FUN_0052c820((uint *)local_1304,(uint *)&local_1480,(uint *)&local_1470);
              local_1334 = (Spawn *)(float)fVar38;
              fVar39 = 1.0 - (float)local_1334;
              if ((0.0 < fVar39) &&
                 (pvVar11 = local_12e4, pZVar34 = local_130c, 0.3 < fVar39 * fVar39))
              goto LAB_0051f981;
            }
            pvVar11 = local_12e4;
            pZVar34 = local_130c;
            iVar35 = FUN_00406100(local_12e4,(uint)pSVar30,(uint)local_12d8,(int)local_130c);
            if (iVar35 == 0) {
              fVar38 = (float10)FUN_004f8b40(pvVar11,(int)local_12d0,(int)local_12d8);
              local_12d4 = (Spawn *)(float)fVar38;
              local_1334 = local_12d4;
            }
            else {
              local_12d4 = *(Spawn **)(iVar35 + 8);
            }
            if ((float)local_12d4 < 0.2) {
              uVar26 = rand();
              uVar26 = uVar26 & 0x80000003;
              bVar37 = uVar26 == 0;
              if ((int)uVar26 < 0) {
                bVar37 = (uVar26 - 1 | 0xfffffffc) == 0xffffffff;
              }
              if (bVar37) goto LAB_0051f981;
            }
            iVar35 = FUN_00406100(pvVar11,(uint)local_12d0,(uint)local_12d8,(int)pZVar34);
            if (iVar35 == 0) {
              fVar38 = (float10)FUN_004f8570(pvVar11,(float)local_12d0,(uint)local_12d8);
              local_12e0 = (Spawn *)(float)fVar38;
              local_1334 = local_12e0;
            }
            else {
              local_12e0 = *(Spawn **)(iVar35 + 4);
            }
            if ((float)local_12e0 < 0.2) {
              uVar26 = rand();
              uVar26 = uVar26 & 0x80000003;
              bVar37 = uVar26 == 0;
              if ((int)uVar26 < 0) {
                bVar37 = (uVar26 - 1 | 0xfffffffc) == 0xffffffff;
              }
              if (bVar37) goto LAB_0051f981;
            }
            piVar45 = (int *)*local_137c;
            if (piVar45 != local_137c) {
              uVar26 = ((int)local_12d8 >> 0x1f) << 0x10 | (uint)local_12d8 >> 0x10;
              local_1334 = (Spawn *)((int)local_12d8 * 0x10000);
              local_1344 = (double)CONCAT44(uVar26,(undefined4)local_1344);
              local_134c = (Spawn *)(((int)local_12d0 >> 0x1f) << 0x10 | (uint)local_12d0 >> 0x10);
              local_1338 = (Spawn *)((int)local_12d0 * 0x10000);
              do {
                local_13b8 = (double)CONCAT44((uVar26 - piVar45[5]) -
                                              (uint)(local_1334 < (Spawn *)piVar45[4]),
                                              (int)local_1334 - piVar45[4]);
                local_13c0 = (double)CONCAT44((int)local_134c +
                                              (-(uint)(local_1338 < (Spawn *)piVar45[2]) -
                                              piVar45[3]),(int)local_1338 - piVar45[2]);
                local_1358 = (double)CONCAT44((float)(longlong)local_13c0,(undefined4)local_1358);
                local_1600 = (float)(longlong)local_13c0 * 1.5258789e-05;
                if ((float)(longlong)local_13b8 * 1.5258789e-05 *
                    (float)(longlong)local_13b8 * 1.5258789e-05 + local_1600 * local_1600 < 400.0)
                goto LAB_0051f981;
                piVar45 = (int *)*piVar45;
              } while (piVar45 != local_137c);
            }
            iVar35 = FUN_00406100(pvVar11,(uint)local_12d0,(uint)local_12d8,(int)pZVar34);
            local_12dc = *(Spawn **)(iVar35 + 0x14);
            while( true ) {
              puVar14 = FUN_00405fd0(pvVar11,(uint)local_12d0,(uint)local_12d8,(int)local_12dc,
                                     (int)pZVar34);
              if (((puVar14[3] & 0x1f) == 0) || ((puVar14[3] & 0x1f) == 2)) break;
              local_12dc = (Spawn *)((int)&local_12dc->vftablePtr + 1);
            }
            puVar14 = FUN_00405fd0(pvVar11,(uint)local_12d0,(uint)local_12d8,
                                   (int)((int)&local_12dc[-1].Spawn_data.offset_0xf70 + 3),
                                   (int)pZVar34);
            local_12f4 = (int *)((byte)puVar14[3] & 0xffffff1f);
            fVar38 = FUN_004d19f0(pvVar11,(uint)local_12d0,(uint)local_12d8);
            local_1334 = (Spawn *)(float)fVar38;
            if ((float)local_1334 <= 0.0) {
              fVar38 = (float10)FUN_0052d990(pvVar11,(uint)local_12d0,(uint)local_12d8);
              local_1334 = (Spawn *)(float)fVar38;
              if (1.0 <= (float)local_1334) {
                pSVar31 = operator_new(0x10f0);
                if (pSVar31 == (Spawn *)0x0) {
                  local_1320 = (Spawn *)0x0;
                }
                else {
                  local_1320 = cube::Spawn::Spawn(pSVar31);
                }
                local_1558 = (Spawn *)(((int)local_12dc >> 0x1f) << 0x10 | (uint)local_12dc >> 0x10)
                ;
                local_155c = (int)local_12dc << 0x10;
                local_1358 = (double)CONCAT44(local_155c,(undefined4)local_1358);
                iVar35 = (int)local_12d8 >> 0x1f;
                uVar26 = (uint)local_12d8 >> 0x10;
                iVar27 = (int)local_12d8 << 0x10;
                local_1338 = local_1558;
                local_12e8 = local_1320;
                uVar48 = FUN_0054a946();
                local_1334 = (Spawn *)uVar48;
                local_228 = uVar48 + CONCAT44(iVar35 << 0x10 | uVar26,iVar27);
                local_220 = local_1358._4_4_;
                local_230 = uVar48 + CONCAT44(((int)local_12d0 >> 0x1f) << 0x10 |
                                              (uint)local_12d0 >> 0x10,(int)local_12d0 * 0x10000);
                local_21c = local_1338;
                ppiVar29 = (int **)&(local_12e8->Spawn_data).field_0xc;
                *(longlong *)ppiVar29 = local_230;
                *(longlong *)&(local_12e8->Spawn_data).field_0x14 = local_228;
                *(Spawn **)&(local_12e8->Spawn_data).field_0x1c = local_1358._4_4_;
                local_1344 = (double)CONCAT44(ppiVar29,(undefined4)local_1344);
                *(Spawn **)&(local_12e8->Spawn_data).field_0x20 = local_1338;
                iVar35 = rand();
                pvVar11 = local_12e4;
                pSVar31 = local_12e8;
                (local_12e8->Spawn_data).offset_0x50 = ((float)iVar35 * 360.0) / 32767.0;
                (local_12e8->Spawn_data).offset_0x30 = 1;
                pvVar17 = FUN_005290d0(local_12e4,(float)local_12d0,(float)local_12d8,
                                       (int)local_12dc,0);
                (pSVar31->Spawn_data).offset_0x28 = pvVar17;
                if (local_12f4 == (int *)0xc) {
                  uVar26 = rand();
                  uVar26 = uVar26 & 0x80000001;
                  if ((int)uVar26 < 0) {
                    uVar26 = (uVar26 - 1 | 0xfffffffe) + 1;
                  }
                  (pSVar31->Spawn_data).offset_0x28 = (-(uint)(uVar26 != 0) & 0xfffffffc) + 0x82;
LAB_0051f2a0:
                  pZVar34 = local_130c;
                  (pSVar31->Spawn_data).offset_0x24 = 6;
                  FUN_004f2be0(&(local_130c->Zone_data).offset_0x14,&local_1320);
                }
                else {
                  pZVar34 = local_130c;
                  if (-1 < (int)local_12dc) {
                    if (((local_12f4 == (int *)0x4) || (local_12f4 == (int *)0x5)) ||
                       (local_12f4 == (int *)0x9)) {
                      iVar35 = rand();
                      if (((iVar35 % 3 != 0) && (0.8 < (float)local_12d4)) &&
                         ((float)local_12e0 < 0.1)) {
                        uVar26 = rand();
                        uVar26 = uVar26 & 0x80000001;
                        if ((int)uVar26 < 0) {
                          uVar26 = (uVar26 - 1 | 0xfffffffe) + 1;
                        }
                        if (uVar26 == 0) {
                          (pSVar31->Spawn_data).offset_0x28 = 0x7c;
                        }
                        else if (uVar26 == 1) {
                          (pSVar31->Spawn_data).offset_0x28 = 0x80;
                        }
                        goto LAB_0051f2a0;
                      }
                      pZVar34 = local_130c;
                      if (local_12f4 == (int *)0x4) {
                        iVar35 = rand();
                        pZVar34 = local_130c;
                        if (iVar35 % 3 != 0) {
                          iVar35 = FUN_00406100(pvVar11,(uint)local_12d0,(uint)local_12d8,
                                                (int)local_130c);
                          if (iVar35 == 0) {
                            fVar38 = (float10)FUN_004f8570(pvVar11,(float)local_12d0,
                                                           (uint)local_12d8);
                            pSVar31 = (Spawn *)(float)fVar38;
                            local_1334 = pSVar31;
                          }
                          else {
                            pSVar31 = *(Spawn **)(iVar35 + 4);
                          }
                          if (0.1 < (float)pSVar31) {
                            uVar26 = rand();
                            uVar26 = uVar26 & 0x80000003;
                            if ((int)uVar26 < 0) {
                              uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
                            }
                            if (uVar26 == 1) {
                              (local_12e8->Spawn_data).offset_0x28 = 0x7b;
                            }
                            else if (uVar26 == 2) {
                              (local_12e8->Spawn_data).offset_0x28 = 0x7f;
                            }
                            else if (uVar26 == 3) {
                              (local_12e8->Spawn_data).offset_0x28 = 0x7d;
                            }
                            else {
                              (local_12e8->Spawn_data).offset_0x28 = 0x78;
                            }
                            (local_12e8->Spawn_data).offset_0xf54 = 0x41c80000;
                            (local_12e8->Spawn_data).offset_0x24 = 6;
                            FUN_004f2be0(&(pZVar34->Zone_data).offset_0x14,&local_1320);
                            goto LAB_0051f981;
                          }
                        }
                      }
                    }
                    else if (local_12f4 == (int *)0xa) {
                      uVar26 = rand();
                      uVar26 = uVar26 & 0x80000003;
                      bVar37 = uVar26 == 0;
                      if ((int)uVar26 < 0) {
                        bVar37 = (uVar26 - 1 | 0xfffffffc) == 0xffffffff;
                      }
                      pZVar34 = local_130c;
                      if (bVar37) {
                        uVar26 = rand();
                        uVar26 = uVar26 & 0x80000003;
                        if ((int)uVar26 < 0) {
                          uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
                        }
                        if (uVar26 == 1) {
                          (pSVar31->Spawn_data).offset_0x28 = 0x7b;
                          (pSVar31->Spawn_data).offset_0xf54 = 0x41c80000;
                        }
                        else if (uVar26 == 2) {
                          (pSVar31->Spawn_data).offset_0x28 = 0x7d;
                          (pSVar31->Spawn_data).offset_0xf54 = 0x41c80000;
                        }
                        else if (uVar26 == 3) {
                          (pSVar31->Spawn_data).offset_0x28 = 0x7a;
                          (pSVar31->Spawn_data).offset_0xf54 = 0x41c80000;
                        }
                        else {
                          (pSVar31->Spawn_data).offset_0x28 = 0x79;
                          (pSVar31->Spawn_data).offset_0xf54 = 0x41c80000;
                        }
                        goto LAB_0051f2a0;
                      }
                    }
                  }
                  if (((local_12e8->Spawn_data).offset_0x24 == 1) &&
                     ((*(ushort *)&(local_12e8->Spawn_data).field_0x76 & 0x1000) == 0)) {
                    iVar35 = rand();
                    if (iVar35 % 100 == 0) {
                      puVar15 = &(local_12e8->Spawn_data).field_0x76;
                      *(ushort *)puVar15 = *(ushort *)puVar15 | 0x200;
                    }
                  }
                  uVar47 = __alldiv((uint)*(void **)&(local_12e8->Spawn_data).field_0x14,
                                    *(uint *)&(local_12e8->Spawn_data).field_0x18,0x10000,0);
                  iVar35 = (int)uVar47 + ((int)uVar47 >> 0x1f & 0xffU);
                  uVar26 = (int)((iVar35 >> 8) + (iVar35 >> 0x1f & 7U)) >> 3;
                  uVar47 = __alldiv(*(uint *)local_1344._4_4_,*(uint *)((int)local_1344._4_4_ + 4),
                                    0x10000,0);
                  iVar35 = (int)uVar47 + ((int)uVar47 >> 0x1f & 0xffU);
                  local_12d4 = (Spawn *)FUN_004286f0(pvVar11,(int)((iVar35 >> 8) +
                                                                  (iVar35 >> 0x1f & 7U)) >> 3,uVar26
                                                    );
                  pSVar31 = local_12e8;
                  if ((local_12e8->Spawn_data).offset_0x24 != 6) {
                    FUN_0040f0a0((local_12e8->Spawn_data).offset_0x28,&local_1460,&local_145c);
                    iVar35 = rand();
                    (pSVar31->Spawn_data).offset_0x30 =
                         iVar35 % ((local_145c - local_1460) + 1) + local_1460;
                    if (((local_12d4 != (Spawn *)0x0) &&
                        (local_1460 <= (int)*(uint *)((int)local_12d4 + 0x24))) &&
                       ((int)*(uint *)((int)local_12d4 + 0x24) <= local_145c)) {
                      fVar38 = FUN_0052c820((uint *)local_12d4,
                                            (uint *)&(pSVar31->Spawn_data).field_0xc,
                                            (uint *)&(pSVar31->Spawn_data).field_0x14);
                      local_1334 = (Spawn *)(float)fVar38;
                      fVar39 = 1.0 - (float)local_1334;
                      if ((0.0 < fVar39) && (0.0 < fVar39 * fVar39)) {
                        (pSVar31->Spawn_data).offset_0x54 = (char)*(uint *)((int)local_12d4 + 0x28);
                      }
                    }
                  }
                  if ((pSVar31->Spawn_data).offset_0x24 == 1) {
                    (pSVar31->Spawn_data).offset_0x3c = 21600000;
                    (pSVar31->Spawn_data).offset_0x40 = 86400000;
                  }
                  this = &(pZVar34->Zone_data).offset_0x14;
                  local_1344 = (double)CONCAT44(this,(undefined4)local_1344);
                  FUN_004f2be0(this,&local_1320);
                  FUN_0040efc0((local_1320->Spawn_data).offset_0x28,&local_14a8,&local_14c0);
                  iVar35 = rand();
                  local_1300 = (Spawn *)0x0;
                  local_12d4 = (Spawn *)(local_14a8 + -1 + iVar35 % ((local_14c0 - local_14a8) + 1))
                  ;
                  pvVar11 = local_12e4;
                  if (0 < (int)local_12d4) {
                    do {
                      pSVar30 = local_12d4;
                      pSVar31 = local_1300;
                      pSVar43 = operator_new(0x10f0);
                      if (pSVar43 == (Spawn *)0x0) {
                        local_1388 = (Spawn *)0x0;
                      }
                      else {
                        local_1388 = cube::Spawn::Spawn(pSVar43);
                      }
                      (local_1388->Spawn_data).offset_0x24 = 1;
                      local_1334 = (Spawn *)(((float)(int)pSVar31 * 6.2831855) / (float)(int)pSVar30
                                            );
                      local_15c0 = 0;
                      dVar41 = (double)(float)local_1334;
                      local_12ec = local_1388;
                      libm_sse2_sin_precise();
                      local_132c = (Spawn *)((float)dVar41 * 8.0 * 65536.0);
                      local_1490 = FUN_0054a946();
                      uVar16 = (undefined4)local_1490;
                      dVar41 = (double)(float)local_1334;
                      libm_sse2_cos_precise();
                      local_133c = (Spawn *)((float)dVar41 * 8.0 * 65536.0);
                      uVar48 = FUN_0054a946();
                      pSVar31 = local_1388;
                      local_454 = local_1490._4_4_;
                      local_450 = 0;
                      ppiVar29 = (int **)&(local_1320->Spawn_data).field_0xc;
                      local_1334 = (Spawn *)*ppiVar29;
                      pvVar11 = *(void **)&(local_1320->Spawn_data).field_0x14;
                      local_190 = *(void **)&(local_1320->Spawn_data).field_0x1c;
                      local_18c = *(int **)&(local_1320->Spawn_data).field_0x20;
                      local_1a0 = uVar48 + *(longlong *)ppiVar29;
                      local_198 = (int *)((int)pvVar11 + (uint)local_1490);
                      local_194 = *(int *)&(local_1320->Spawn_data).field_0x18 + local_1490._4_4_ +
                                  (uint)CARRY4((uint)pvVar11,(uint)local_1490);
                      *(longlong *)&(local_1388->Spawn_data).field_0xc = local_1a0;
                      *(int **)&(local_1388->Spawn_data).field_0x14 = local_198;
                      *(int *)&(local_1388->Spawn_data).field_0x18 = local_194;
                      *(void **)&(local_1388->Spawn_data).field_0x1c = local_190;
                      *(int **)&(local_1388->Spawn_data).field_0x20 = local_18c;
                      local_458 = uVar16;
                      local_1504 = uVar48;
                      local_460 = uVar48;
                      __alldiv((uint)*(void **)&(local_1388->Spawn_data).field_0x1c,(uint)local_18c,
                               0x10000,0);
                      __alldiv((uint)*(int **)&(pSVar31->Spawn_data).field_0x14,
                               *(uint *)&(pSVar31->Spawn_data).field_0x18,0x10000,0);
                      __alldiv(*(uint *)&(local_1388->Spawn_data).field_0xc,
                               (uint)*(void **)&(local_1388->Spawn_data).field_0x10,0x10000,0);
                      pvVar11 = local_12e4;
                      pvVar17 = (void *)FUN_0052bfa0();
                      pSVar31 = local_1388;
                      (local_1388->Spawn_data).offset_0x28 = pvVar17;
                      puVar15 = &(local_1388->Spawn_data).field_0x76;
                      *(ushort *)puVar15 = *(ushort *)puVar15 & 0xfdff;
                      if ((local_1388->Spawn_data).offset_0x24 != 6) {
                        FUN_0040f0a0((void *)(local_1388->Spawn_data).offset_0x28,&local_1494,
                                     &local_14b8);
                        iVar35 = rand();
                        (pSVar31->Spawn_data).offset_0x30 =
                             iVar35 % ((local_14b8 - local_1494) + 1) + local_1494;
                        (pSVar31->Spawn_data).offset_0x54 = (local_1320->Spawn_data).offset_0x54;
                      }
                      iVar35 = rand();
                      (pSVar31->Spawn_data).offset_0x50 = ((float)iVar35 * 360.0) / 32767.0;
                      FUN_004f2be0(local_1344._4_4_,&local_12ec);
                      local_1300 = (Spawn *)((int)&local_1300->vftablePtr + 1);
                      pZVar34 = local_130c;
                    } while ((int)local_1300 < (int)local_12d4);
                  }
                }
              }
            }
          }
LAB_0051f981:
          local_1314 = (Spawn *)((int)&local_1314->vftablePtr + 1);
        } while ((int)local_1314 < 3);
        local_1308 = (int *)((int)local_1308 + 1);
      } while ((int)local_1308 < 3);
      local_8 = CONCAT31(local_8._1_3_,3);
      if (local_1410 != (int *)0x0) {
        std::_Container_base0::_Orphan_all((_Container_base0 *)&local_1410);
        operator_delete(local_1410);
        local_1410 = (int *)0x0;
        local_140c = (int *)0x0;
        local_1408 = 0;
      }
      local_12cc = local_135c;
      if ((int)local_135c < (int)local_1374) {
        local_1420 = 0x1d6;
        puVar15 = &(local_1330->Spawn_data).field_0xfc;
        local_13f8 = (Spawn *)0x96;
        local_1334 = (Spawn *)0x12c;
        do {
          local_1304 = local_1330;
          if ((int)local_1330 < (int)puVar15) {
            do {
              local_12f0 = (Spawn *)FUN_00406100(pvVar11,(uint)local_12cc,(uint)local_1304,
                                                 (int)pZVar34);
              local_12dc = (Spawn *)0x0;
              iVar35 = FUN_00406250((int)local_12f0);
              if (0 < iVar35) {
                do {
                  iVar35 = FUN_00406250((int)local_12f0);
                  if ((int)local_12dc < iVar35 + -1) {
                    local_12e0 = (Spawn *)((int)&local_12dc->vftablePtr + 1);
                    puVar14 = FUN_004d23f0(local_12f0,(int)local_12e0);
                    uVar16 = FUN_004061f0((int)puVar14);
                    if ((char)uVar16 == '\0') goto LAB_0051fac0;
                  }
                  else {
LAB_0051fac0:
                    puVar14 = FUN_004d23f0(local_12f0,(int)local_12dc);
                    bVar6 = FUN_00406280((int)puVar14);
                    local_1320 = (Spawn *)CONCAT31(extraout_var,bVar6);
                    local_12e0 = (Spawn *)((int)&local_12dc->vftablePtr + 1);
                    puVar14 = FUN_004d23f0(local_12f0,(int)local_12e0);
                    bVar6 = FUN_00406280((int)puVar14);
                    iVar35 = FUN_004061d0((int)local_12f0);
                    pvVar11 = local_12e4;
                    pSVar31 = local_1304;
                    local_12d8 = (Spawn *)((int)&local_12dc->vftablePtr + iVar35 + 1);
                    if (CONCAT31(extraout_var_00,bVar6) == 0) {
                      if (local_1320 == (Spawn *)0xb) {
                        fVar38 = FUN_004d19f0(local_12e4,(uint)local_12cc,(uint)local_1304);
                        local_12ec = (Spawn *)(float)fVar38;
                        if ((0.75 < (float)local_12ec) &&
                           (((int)&local_12cc->vftablePtr + (int)local_1304 * 0x5a) %
                            (int)local_1420 == 0)) {
                          uVar26 = rand();
                          uVar26 = uVar26 & 0x8000000f;
                          if ((int)uVar26 < 0) {
                            uVar26 = (uVar26 - 1 | 0xfffffff0) + 1;
                          }
                          if (uVar26 == 0) {
                            local_12d4 = (Spawn *)0x0;
                            do {
                              puVar14 = FUN_00405fd0(pvVar11,(uint)local_12cc,(uint)local_1304,
                                                     (int)&local_12d8->vftablePtr +
                                                     (int)&local_12d4->vftablePtr,(int)pZVar34);
                              uVar16 = FUN_004061f0((int)puVar14);
                              if ((char)uVar16 != '\0') goto LAB_00520371;
                              local_12d4 = (Spawn *)((int)&local_12d4->vftablePtr + 1);
                            } while ((int)local_12d4 < 7);
                            FUN_004c84b0((int)local_1048);
                            local_8._0_1_ = 8;
                            fVar38 = FUN_004fc140(pvVar11,(uint)local_12cc,(uint)local_1304,
                                                  (int)pZVar34);
                            local_12ec = (Spawn *)(float)fVar38;
                            if ((float)local_12ec <= 0.8) {
                              uVar49 = 0x40000000;
                              local_1048[0] = (void *)0x32;
                              uVar16 = 0x40000000;
                              puVar15 = local_7a4;
                            }
                            else {
                              uVar49 = 0x3f800000;
                              local_1048[0] = (void *)0x33;
                              uVar16 = 0x3f800000;
                              puVar15 = local_78c;
                            }
                            puVar18 = FUN_00401080(puVar15,uVar16,uVar49,0x41000000);
                            uVar52 = 0x51fc72;
                            FUN_00401060(local_1024,puVar18);
                            uVar49 = 0x51fc82;
                            pSVar30 = local_12d8;
                            FUN_004cde40(&stack0xffffe7bc,(uint)local_12d8);
                            uVar16 = 0x51fc92;
                            pSVar31 = local_1304;
                            FUN_004cde40(&stack0xffffe7b4,(uint)local_1304);
                            FUN_004cde40(&stack0xffffe7ac,(uint)local_12cc);
                            puVar18 = FUN_00406380(local_b00,uVar16,pSVar31,uVar49,pSVar30,uVar52,
                                                   puVar18);
                            FUN_00402a40(local_1040,puVar18);
                            local_1028 = rand();
                            local_1028 = local_1028 & 0x80000003;
                            if ((int)local_1028 < 0) {
                              local_1028 = (local_1028 - 1 | 0xfffffffc) + 1;
                            }
                            FUN_004d6670(&(pZVar34->Zone_data).offset_0x8,local_1048);
                            local_8 = CONCAT31(local_8._1_3_,3);
                            FUN_004cd8f0((int)local_1048);
                          }
                        }
                      }
                      else if (local_1320 == (Spawn *)0x3) {
                        fVar38 = FUN_004fc140(local_12e4,(uint)local_12cc,(uint)local_1304,
                                              (int)pZVar34);
                        local_12ec = (Spawn *)(float)fVar38;
                        if (0.2 < (float)local_12ec) {
                          dVar41 = (double)((float)(int)local_12cc * 0.05 + 9843.0);
                          fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                                (double)((float)(int)local_1304 * 0.05 + 8437.0));
                          fVar38 = FUN_00401ca0((float)fVar38);
                          local_12ec = (Spawn *)(float)fVar38;
                          if (0.5 < (float)local_12ec) {
                            uVar26 = rand();
                            uVar26 = uVar26 & 0x80000007;
                            bVar37 = uVar26 == 0;
                            if ((int)uVar26 < 0) {
                              bVar37 = (uVar26 - 1 | 0xfffffff8) == 0xffffffff;
                            }
                            if (bVar37) {
                              FUN_004c83b0((int)local_4ec);
                              piVar45 = local_1610;
                              piVar19 = FUN_004cde40(local_1720,(uint)local_12cc);
                              puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                              pvVar17 = (void *)FUN_004e2320(local_4e4,0);
                              FUN_004cde20(pvVar17,puVar18);
                              piVar45 = local_1620;
                              piVar19 = FUN_004cde40(local_1630,(uint)local_1304);
                              puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                              pvVar17 = (void *)FUN_004e2320(local_4e4,1);
                              FUN_004cde20(pvVar17,puVar18);
                              pSVar31 = local_12d8;
                              pvVar17 = (void *)FUN_004e2320(local_4e4,2);
                              FUN_004cde40(pvVar17,(uint)pSVar31);
                              iVar35 = rand();
                              local_4c8 = ((float)iVar35 * 360.0) / 32767.0;
                              local_4cc = 0x3db851ec;
                              local_4ec[0] = 0x16;
                              local_4b4 = 4;
                              FUN_00528450(&pZVar34->Zone_data,local_4ec);
                            }
                          }
                        }
                      }
                      else {
                        if (local_1320 != (Spawn *)0x2) goto LAB_005200d6;
                        fVar38 = FUN_004fc140(local_12e4,(uint)local_12cc,(uint)local_1304,
                                              (int)pZVar34);
                        local_12ec = (Spawn *)(float)fVar38;
                        if ((0.2 < (float)local_12ec) && (0 < (int)local_12d8)) {
                          dVar41 = (double)((float)(int)local_12cc * 0.05 + 24234.0);
                          fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                                (double)((float)(int)local_1304 * 0.05 + 53565.0));
                          fVar38 = FUN_00401ca0((float)fVar38);
                          local_12ec = (Spawn *)(float)fVar38;
                          if (0.7 < (float)local_12ec) {
                            iVar35 = rand();
                            if (iVar35 % 10 == 0) {
                              FUN_004c83b0((int)(aiStack_578 + 3));
                              piVar45 = local_16d8;
                              piVar19 = FUN_004cde40(local_1640,(uint)local_12cc);
                              puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                              pvVar17 = (void *)FUN_004e2320(local_564,0);
                              FUN_004cde20(pvVar17,puVar18);
                              piVar45 = local_1650;
                              piVar19 = FUN_004cde40(local_1760,(uint)local_1304);
                              puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                              pvVar17 = (void *)FUN_004e2320(local_564,1);
                              FUN_004cde20(pvVar17,puVar18);
                              piVar45 = local_16f0;
                              piVar19 = FUN_004cde40(local_1678,(uint)local_12d8);
                              puVar18 = (undefined4 *)FUN_004e0700(piVar19,piVar45);
                              pvVar17 = (void *)FUN_004e2320(local_564,2);
                              FUN_004cde20(pvVar17,puVar18);
                              iVar35 = rand();
                              local_54c = 0x3db851ec;
                              local_548 = ((float)iVar35 * 360.0) / 32767.0;
                              uVar26 = rand();
                              uVar26 = uVar26 & 0x80000001;
                              if ((int)uVar26 < 0) {
                                uVar26 = (uVar26 - 1 | 0xfffffffe) + 1;
                              }
                              aiStack_578[3] = uVar26 + 0x1f;
                              FUN_00528450(&pZVar34->Zone_data,aiStack_578 + 3);
                            }
                          }
                        }
                      }
                    }
                    else {
LAB_005200d6:
                      if (((local_1320 == (Spawn *)0x4) || (local_1320 == (Spawn *)0x9)) ||
                         ((local_1320 == (Spawn *)0xc || (local_1320 == (Spawn *)0xa)))) {
                        local_1300 = (Spawn *)(float)(int)local_1304;
                        local_1314 = (Spawn *)(float)(int)local_12cc;
                        dVar41 = (double)((float)local_1314 * 0.05 + 9843.0);
                        fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                              (double)((float)local_1300 * 0.05 + 8437.0));
                        fVar38 = FUN_00401ca0((float)fVar38);
                        local_12ec = (Spawn *)(float)fVar38;
                        pvVar11 = local_12e4;
                        if (0.6 < (float)local_12ec) {
                          uVar26 = rand();
                          pvVar11 = local_12e4;
                          uVar26 = uVar26 & 0x80000007;
                          bVar37 = uVar26 == 0;
                          if ((int)uVar26 < 0) {
                            bVar37 = (uVar26 - 1 | 0xfffffff8) == 0xffffffff;
                          }
                          if (bVar37) {
                            if ((int)local_12d8 < 1) {
                              if (-5 < (int)local_12d8) goto LAB_00520371;
                              FUN_004c83b0((int)local_37c);
                              piVar45 = local_1730;
                              piVar19 = FUN_004cde40(local_1688,(uint)local_12cc);
                              puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                              pvVar11 = (void *)FUN_004e2320(local_374,0);
                              FUN_004cde20(pvVar11,puVar18);
                              piVar45 = local_1700;
                              piVar19 = FUN_004cde40(local_1698,(uint)pSVar31);
                              puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                              pvVar11 = (void *)FUN_004e2320(local_374,1);
                              FUN_004cde20(pvVar11,puVar18);
                              pSVar30 = local_12d8;
                              pvVar11 = (void *)FUN_004e2320(local_374,2);
                              FUN_004cde40(pvVar11,(uint)pSVar30);
                              uVar26 = rand();
                              uVar26 = uVar26 & 0x80000003;
                              if ((int)uVar26 < 0) {
                                uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
                              }
                              local_358 = (float)(int)(uVar26 * 0x5a);
                              local_35c = 0.1;
                              dVar41 = (double)(int)local_12cc * 0.01 + 9843.0;
                              fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20)
                                                    ,(double)(int)pSVar31 * 0.01 + 8437.0);
                              local_12ec = (Spawn *)(float)fVar38;
                              if ((float)local_12ec <= 0.0) {
                                local_37c[0] = 7;
LAB_00520322:
                                local_35c = 0.1;
LAB_0052032c:
                                local_344 = local_344 | 4;
                              }
                              else {
                                uVar26 = rand();
                                uVar26 = uVar26 & 0x80000001;
                                if ((int)uVar26 < 0) {
                                  uVar26 = (uVar26 - 1 | 0xfffffffe) + 1;
                                }
                                local_37c[0] = uVar26 + 5;
                                if (local_37c[0] == 5) {
                                  local_35c = 0.075;
                                  goto LAB_0052032c;
                                }
                                if (local_37c[0] == 7) goto LAB_00520322;
                              }
                              iVar35 = rand();
                              piVar45 = local_37c;
                              local_35c = ((float)iVar35 / 32767.0 + 1.0) * local_35c;
                            }
                            else {
                              if (local_1320 != (Spawn *)0xc) {
                                if (local_1320 == (Spawn *)0xa) goto LAB_00520931;
                                fVar38 = FUN_004fc140(local_12e4,(uint)local_12cc,(uint)pSVar31,
                                                      (int)pZVar34);
                                local_12ec = (Spawn *)(float)fVar38;
                                if ((float)local_12ec <= 0.75) {
                                  FUN_004c83b0((int)local_430);
                                  piVar45 = local_1670;
                                  piVar19 = FUN_004cde40(local_1680,(uint)local_12cc);
                                  puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                                  pvVar17 = (void *)FUN_004e2320(local_428,0);
                                  FUN_004cde20(pvVar17,puVar18);
                                  piVar45 = local_1690;
                                  piVar19 = FUN_004cde40(local_16a0,(uint)local_1304);
                                  puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                                  pvVar17 = (void *)FUN_004e2320(local_428,1);
                                  FUN_004cde20(pvVar17,puVar18);
                                  pSVar31 = local_12d8;
                                  pvVar17 = (void *)FUN_004e2320(local_428,2);
                                  FUN_004cde40(pvVar17,(uint)pSVar31);
                                  uVar26 = rand();
                                  uVar26 = uVar26 & 0x80000003;
                                  if ((int)uVar26 < 0) {
                                    uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
                                  }
                                  local_40c = (float)(int)(uVar26 * 0x5a);
                                  local_410 = 0.075;
                                  fVar38 = FUN_004fc100(pvVar11,(float)local_12cc,(uint)local_1304,
                                                        (int)pZVar34);
                                  local_12ec = (Spawn *)(float)fVar38;
                                  local_4c = (double)(int)local_12cc * 0.01;
                                  local_44 = (double)(int)local_1304 * 0.01;
                                  if ((float)local_12ec <= 0.5) {
                                    fVar38 = FUN_004d5d30(SUB84(local_4c + 9843.0,0),
                                                          (int)((ulonglong)(local_4c + 9843.0) >>
                                                               0x20),local_44 + 8437.0);
                                    local_12ec = (Spawn *)(float)fVar38;
                                    if ((float)local_12ec <= 0.0) {
                                      fVar38 = FUN_004d5d30(SUB84(local_4c + 34234.0,0),
                                                            (int)((ulonglong)(local_4c + 34234.0) >>
                                                                 0x20),local_44 + 234234.0);
                                      goto LAB_00520e98;
                                    }
                                    dVar41 = (double)((float)local_1314 * 0.01 + 34234.0);
                                    fVar38 = FUN_004d5d30(SUB84(dVar41,0),
                                                          (int)((ulonglong)dVar41 >> 0x20),
                                                          (double)((float)local_1300 * 0.01 +
                                                                  234234.0));
                                    local_12ec = (Spawn *)(float)fVar38;
                                    local_430[0] = ((float)local_12ec <= 0.0) + 2;
                                  }
                                  else {
                                    fVar38 = FUN_004d5d30(SUB84(local_4c + 9843.0,0),
                                                          (int)((ulonglong)(local_4c + 9843.0) >>
                                                               0x20),local_44 + 8437.0);
                                    local_12ec = (Spawn *)(float)fVar38;
                                    if ((float)local_12ec <= 0.0) {
                                      fVar38 = FUN_004d5d30(SUB84(local_4c + 34234.0,0),
                                                            (int)((ulonglong)(local_4c + 34234.0) >>
                                                                 0x20),local_44 + 234234.0);
LAB_00520e98:
                                      local_12ec = (Spawn *)(float)fVar38;
                                      local_430[0] = (uint)((float)local_12ec <= 0.0);
                                    }
                                    else {
                                      dVar41 = (double)((float)local_1314 * 0.01 + 34234.0);
                                      fVar38 = FUN_004d5d30(SUB84(dVar41,0),
                                                            (int)((ulonglong)dVar41 >> 0x20),
                                                            (double)((float)local_1300 * 0.01 +
                                                                    234234.0));
                                      local_12ec = (Spawn *)(float)fVar38;
                                      local_430[0] = (uint)(0.0 < (float)local_12ec) * 8 + 4;
                                    }
                                  }
                                  if (((((local_430[0] == 2) || (local_430[0] == 3)) ||
                                       (local_430[0] == 4)) || (local_430[0] == 0xc)) &&
                                     (local_3f8 = local_3f8 | 4, local_430[0] == 0xc)) {
                                    iVar35 = rand();
                                    local_410 = ((float)iVar35 * 0.02) / 32767.0 + 0.1;
                                  }
                                  if (((local_1320 == (Spawn *)0x4) || (local_430[0] == 2)) ||
                                     ((local_430[0] == 3 || (local_430[0] == 4)))) {
                                    puVar21 = local_430;
                                    goto LAB_00520922;
                                  }
                                }
                                else {
                                  fVar38 = FUN_004fc100(pvVar11,(float)local_12cc,(uint)local_1304,
                                                        (int)pZVar34);
                                  local_12ec = (Spawn *)(float)fVar38;
                                  if ((float)local_12ec <= 0.25) {
                                    iVar35 = rand();
                                    if (iVar35 % 100 == 0) {
                                      FUN_004c83b0((int)local_52c);
                                      piVar45 = local_1628;
                                      piVar19 = FUN_004cde40(local_1638,(uint)local_12cc);
                                      puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                                      pvVar17 = (void *)FUN_004e2320(local_524,0);
                                      FUN_004cde20(pvVar17,puVar18);
                                      piVar45 = local_1648;
                                      piVar19 = FUN_004cde40(local_1658,(uint)local_1304);
                                      puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                                      pvVar17 = (void *)FUN_004e2320(local_524,1);
                                      FUN_004cde20(pvVar17,puVar18);
                                      pSVar31 = local_12d8;
                                      pvVar17 = (void *)FUN_004e2320(local_524,2);
                                      FUN_004cde40(pvVar17,(uint)pSVar31);
                                      uVar26 = rand();
                                      uVar26 = uVar26 & 0x80000003;
                                      if ((int)uVar26 < 0) {
                                        uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
                                      }
                                      local_508 = (float)(int)(uVar26 * 0x5a);
                                      local_50c = 0x3d99999a;
                                      uVar26 = rand();
                                      uVar26 = uVar26 & 0x80000001;
                                      if ((int)uVar26 < 0) {
                                        uVar26 = (uVar26 - 1 | 0xfffffffe) + 1;
                                      }
                                      local_52c[0] = 0x1c - (uVar26 != 0);
                                      puVar21 = local_52c;
                                      goto LAB_00520922;
                                    }
                                  }
                                  else {
                                    FUN_004c83b0((int)local_30c);
                                    piVar45 = local_15e8;
                                    piVar19 = FUN_004cde40(local_15f8,(uint)local_12cc);
                                    puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                                    pvVar17 = (void *)FUN_004e2320(local_304,0);
                                    FUN_004cde20(pvVar17,puVar18);
                                    piVar45 = local_1608;
                                    piVar19 = FUN_004cde40(local_1618,(uint)local_1304);
                                    puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                                    pvVar17 = (void *)FUN_004e2320(local_304,1);
                                    FUN_004cde20(pvVar17,puVar18);
                                    pSVar31 = local_12d8;
                                    pvVar17 = (void *)FUN_004e2320(local_304,2);
                                    FUN_004cde40(pvVar17,(uint)pSVar31);
                                    iVar35 = rand();
                                    local_2e8 = ((float)iVar35 * 360.0) / 32767.0;
                                    local_4c = (double)(int)local_12cc * 0.01;
                                    local_44 = (double)(int)local_1304 * 0.01;
                                    local_2ec = 0.075;
                                    fVar38 = FUN_004d5d30(SUB84(local_4c + 9843.0,0),
                                                          (int)((ulonglong)(local_4c + 9843.0) >>
                                                               0x20),local_44 + 8437.0);
                                    local_12ec = (Spawn *)(float)fVar38;
                                    if ((float)local_12ec <= 0.0) {
                                      fVar38 = FUN_004d5d30(SUB84(local_4c + 34234.0,0),
                                                            (int)((ulonglong)(local_4c + 34234.0) >>
                                                                 0x20),local_44 + 234234.0);
                                      local_12ec = (Spawn *)(float)fVar38;
                                      local_30c[0] = ((float)local_12ec <= 0.5) + 0xb;
                                    }
                                    else {
                                      dVar41 = (double)((float)local_1314 * 0.01 + 34234.0);
                                      fVar38 = FUN_004d5d30(SUB84(dVar41,0),
                                                            (int)((ulonglong)dVar41 >> 0x20),
                                                            (double)((float)local_1300 * 0.01 +
                                                                    234234.0));
                                      local_12ec = (Spawn *)(float)fVar38;
                                      local_30c[0] = (0.0 < (float)local_12ec) + 3;
                                    }
                                    if ((local_30c[0] == 2) || (local_30c[0] == 3)) {
                                      local_2d4 = local_2d4 | 4;
                                    }
                                    if (local_30c[0] == 0xb) {
                                      iVar35 = rand();
                                      local_2d4 = local_2d4 | 4;
                                      local_2ec = ((float)iVar35 * 0.05) / 32767.0 + 0.05;
                                    }
                                    if (local_30c[0] == 0xc) {
                                      iVar35 = rand();
                                      local_2d4 = local_2d4 | 4;
                                      local_2ec = ((float)iVar35 * 0.02) / 32767.0 + 0.1;
                                    }
                                    if (((local_1320 == (Spawn *)0x4) || (local_30c[0] == 2)) ||
                                       (local_30c[0] == 3)) {
                                      puVar21 = local_30c;
LAB_00520922:
                                      FUN_00528450(&pZVar34->Zone_data,puVar21);
                                    }
                                  }
                                }
LAB_00520931:
                                if (local_1320 == (Spawn *)0x4) {
                                  iVar35 = rand();
                                  if (iVar35 % (int)local_13f8 == 0) {
                                    FUN_0041d8d0(&local_c60);
                                    piVar45 = local_16b0;
                                    piVar19 = FUN_004cde40(local_16c0,(uint)local_12cc);
                                    puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                                    pvVar17 = (void *)FUN_004e2320(local_b48,0);
                                    FUN_004cde20(pvVar17,puVar18);
                                    piVar45 = local_16d0;
                                    piVar19 = FUN_004cde40(local_16e8,(uint)local_1304);
                                    puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                                    pvVar17 = (void *)FUN_004e2320(local_b48,1);
                                    FUN_004cde20(pvVar17,puVar18);
                                    pSVar31 = local_12d8;
                                    pvVar17 = (void *)FUN_004e2320(local_b48,2);
                                    FUN_004cde40(pvVar17,(uint)pSVar31);
                                    iVar35 = rand();
                                    local_c60._0_1_ = 0xb;
                                    local_b30 = ((float)iVar35 / 32767.0) * 360.0;
                                    uVar26 = rand();
                                    uVar26 = uVar26 & 0x80000001;
                                    if ((int)uVar26 < 0) {
                                      uVar26 = (uVar26 - 1 | 0xfffffffe) + 1;
                                    }
                                    if (uVar26 == 0) {
                                      local_c60._1_1_ = 0xf;
                                    }
                                    else if (uVar26 == 1) {
                                      local_c60._1_1_ = 0x16;
                                      local_b2c = 0x3dcccccd;
                                    }
                                    local_c50 = 1;
                                    local_b28 = 2;
                                    FUN_0041f5b0(&(pZVar34->Zone_data).offset_0x2c,
                                                 (undefined1 *)&local_c60);
                                  }
                                }
                                else if (local_1320 == (Spawn *)0xa) {
                                  iVar35 = rand();
                                  if (iVar35 % (int)local_1334 == 0) {
                                    FUN_0041d8d0(&local_da8);
                                    piVar45 = local_16f8;
                                    piVar19 = FUN_004cde40(local_1708,(uint)local_12cc);
                                    puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                                    pvVar17 = (void *)FUN_004e2320(local_c90,0);
                                    FUN_004cde20(pvVar17,puVar18);
                                    piVar45 = local_1718;
                                    piVar19 = FUN_004cde40(local_1728,(uint)local_1304);
                                    puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                                    pvVar17 = (void *)FUN_004e2320(local_c90,1);
                                    FUN_004cde20(pvVar17,puVar18);
                                    pSVar31 = local_12d8;
                                    pvVar17 = (void *)FUN_004e2320(local_c90,2);
                                    FUN_004cde40(pvVar17,(uint)pSVar31);
                                    iVar35 = rand();
                                    local_da8._0_1_ = 0xb;
                                    local_c78 = ((float)iVar35 / 32767.0) * 360.0;
                                    uVar26 = rand();
                                    uVar26 = uVar26 & 0x80000001;
                                    if ((int)uVar26 < 0) {
                                      uVar26 = (uVar26 - 1 | 0xfffffffe) + 1;
                                    }
                                    if (uVar26 < 2) {
                                      local_da8._1_1_ = 0x18;
                                      local_c74 = 0x3dcccccd;
                                    }
                                    local_d98 = 1;
                                    local_c70 = 2;
                                    FUN_0041f5b0(&(pZVar34->Zone_data).offset_0x2c,
                                                 (undefined1 *)&local_da8);
                                  }
                                }
                                goto LAB_00520371;
                              }
                              FUN_004c83b0((int)local_4a0);
                              piVar45 = local_1750;
                              piVar19 = FUN_004cde40(local_16a8,(uint)local_12cc);
                              puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                              pvVar11 = (void *)FUN_004e2320(local_498,0);
                              FUN_004cde20(pvVar11,puVar18);
                              piVar45 = local_15c8;
                              piVar19 = FUN_004cde40(local_15d8,(uint)pSVar31);
                              puVar18 = (undefined4 *)FUN_004ce290(piVar19,piVar45);
                              pvVar11 = (void *)FUN_004e2320(local_498,1);
                              FUN_004cde20(pvVar11,puVar18);
                              pSVar30 = local_12d8;
                              pvVar11 = (void *)FUN_004e2320(local_498,2);
                              FUN_004cde40(pvVar11,(uint)pSVar30);
                              uVar26 = rand();
                              uVar26 = uVar26 & 0x80000003;
                              if ((int)uVar26 < 0) {
                                uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
                              }
                              local_47c = (float)(int)(uVar26 * 0x5a);
                              local_480 = 0.075;
                              dVar41 = (double)(int)local_12cc * 0.01 + 9843.0;
                              fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20)
                                                    ,(double)(int)pSVar31 * 0.01 + 8437.0);
                              local_12ec = (Spawn *)(float)fVar38;
                              local_4a0[0] = ((float)local_12ec <= 0.0) + 9;
                              if (local_4a0[0] == 9) {
                                local_468 = local_468 | 4;
                                piVar45 = local_4a0;
                              }
                              else {
                                if (local_4a0[0] == 10) {
                                  iVar35 = rand();
                                  local_480 = ((float)iVar35 * 0.02) / 32767.0 + 0.03;
                                }
                                piVar45 = local_4a0;
                              }
                            }
                            FUN_00528450(&pZVar34->Zone_data,piVar45);
                            pvVar11 = local_12e4;
                          }
                        }
                      }
                    }
                  }
LAB_00520371:
                  local_12dc = local_12e0;
                  iVar35 = FUN_00406250((int)local_12f0);
                } while ((int)local_12dc < iVar35);
              }
              local_1304 = (Spawn *)((int)&local_1304->vftablePtr + 1);
              puVar15 = &(local_1330->Spawn_data).field_0xfc;
            } while ((int)local_1304 < (int)puVar15);
          }
          local_12cc = (Spawn *)((int)&local_12cc->vftablePtr + 1);
        } while ((int)local_12cc < (int)local_1374);
      }
      pSVar31 = (Spawn *)&(pZVar34->Zone_data).offset_0x20;
      local_12ec = pSVar31;
      iVar35 = FUN_0041fff0((int *)pSVar31);
      if (0 < iVar35) {
        uVar26 = 0;
        do {
          piVar45 = (int *)FUN_00402bb0(pSVar31,uVar26);
          if (*(int *)*piVar45 == 0 && ((int *)*piVar45)[1] == 0) {
            puVar18 = (undefined4 *)FUN_00402bb0(pSVar31,uVar26);
            uVar47 = FUN_004f3850(local_1360,local_1368,uVar26);
            *(undefined8 *)*puVar18 = uVar47;
            pSVar31 = local_12ec;
          }
          uVar26 = uVar26 + 1;
          iVar35 = FUN_0041fff0((int *)pSVar31);
          pZVar34 = local_130c;
        } while ((int)uVar26 < iVar35);
      }
      pSVar31 = (Spawn *)&(pZVar34->Zone_data).offset_0x14;
      local_12d0 = (Spawn *)0x0;
      local_12cc = pSVar31;
      iVar35 = FUN_0041fff0((int *)pSVar31);
      pvVar11 = local_12e4;
      if (0 < iVar35) {
        pSVar30 = (Spawn *)0x0;
        do {
          piVar45 = (int *)FUN_00402bb0(pSVar31,(int)pSVar30);
          if (*(int *)(*piVar45 + 0x48) == 0 && *(int *)(*piVar45 + 0x4c) == 0) {
            piVar45 = (int *)FUN_00402bb0(pSVar31,(int)pSVar30);
            uVar47 = FUN_004f3850(local_1360,local_1368,(uint)pSVar30);
            *(undefined8 *)(*piVar45 + 0x48) = uVar47;
            pSVar31 = local_12cc;
          }
          piVar45 = (int *)FUN_00402bb0(pSVar31,(int)pSVar30);
          piVar19 = (int *)FUN_00402bb0(local_12cc,(int)pSVar30);
          FUN_0040a840((uint *)(*piVar19 + 0x2c),*piVar45 + 0x74,(undefined4 *)0x0);
          pSVar31 = local_12cc;
          piVar45 = (int *)FUN_00402bb0(local_12cc,(int)pSVar30);
          FUN_004fb480(*piVar45,0);
          piVar45 = (int *)FUN_00402bb0(pSVar31,(int)pSVar30);
          if ((*(ushort *)(*piVar45 + 0x7a) & 0x200) != 0) {
            FUN_00406fd0(local_ec0);
            local_ec0[0] = 0xe0b;
            piVar45 = (int *)FUN_00402bb0(pSVar31,(int)pSVar30);
            local_eb0 = *(undefined2 *)(*piVar45 + 0x34);
            uVar26 = rand();
            uVar26 = uVar26 & 0x80000003;
            if ((int)uVar26 < 0) {
              uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
            }
            local_eb3 = (char)uVar26 + -0x80;
            local_eb4 = 2;
            piVar45 = (int *)FUN_00402bb0(pSVar31,(int)pSVar30);
            FUN_00427000((void *)(*piVar45 + 0xf6c),(char *)local_ec0,-1);
          }
          piVar45 = (int *)FUN_00402bb0(pSVar31,(int)pSVar30);
          piVar19 = (int *)FUN_00402bb0(local_12cc,(int)pSVar30);
          local_12ec = (Spawn *)FUN_00402bb0(local_12cc,(int)local_12d0);
          iVar35 = FUN_0052bf40((uint)*(byte *)(*piVar19 + 0x58),
                                (byte)((ushort)*(undefined2 *)(*piVar45 + 0x7a) >> 9) & 1);
          pSVar31 = local_12d0;
          *(char *)&local_12ec->vftablePtr[0x235].deleting_destructor = (char)iVar35;
          piVar45 = (int *)FUN_00402bb0(local_12cc,(int)local_12d0);
          piVar19 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
          local_12ec = (Spawn *)FUN_00402bb0(local_12cc,(int)local_12d0);
          iVar35 = FUN_0052bf40((uint)*(byte *)(*piVar19 + 0x58),
                                (byte)((ushort)*(undefined2 *)(*piVar45 + 0x7a) >> 9) & 1);
          pSVar31 = local_12d0;
          *(char *)&local_12ec->vftablePtr[0x1ef].deleting_destructor = (char)iVar35;
          piVar45 = (int *)FUN_00402bb0(local_12cc,(int)local_12d0);
          piVar19 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
          local_12ec = (Spawn *)FUN_00402bb0(local_12cc,(int)local_12d0);
          iVar35 = FUN_0052bf40((uint)*(byte *)(*piVar19 + 0x58),
                                (byte)((ushort)*(undefined2 *)(*piVar45 + 0x7a) >> 9) & 1);
          pSVar31 = local_12d0;
          *(char *)&local_12ec->vftablePtr[0x1a9].deleting_destructor = (char)iVar35;
          piVar45 = (int *)FUN_00402bb0(local_12cc,(int)local_12d0);
          piVar19 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
          local_12ec = (Spawn *)FUN_00402bb0(local_12cc,(int)local_12d0);
          iVar35 = FUN_0052bf40((uint)*(byte *)(*piVar19 + 0x58),
                                (byte)((ushort)*(undefined2 *)(*piVar45 + 0x7a) >> 9) & 1);
          pSVar31 = local_12d0;
          *(char *)&local_12ec->vftablePtr[0xd7].deleting_destructor = (char)iVar35;
          piVar45 = (int *)FUN_00402bb0(local_12cc,(int)local_12d0);
          piVar19 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
          local_12ec = (Spawn *)FUN_00402bb0(local_12cc,(int)local_12d0);
          iVar35 = FUN_0052bf40((uint)*(byte *)(*piVar19 + 0x58),
                                (byte)((ushort)*(undefined2 *)(*piVar45 + 0x7a) >> 9) & 1);
          pSVar31 = local_12d0;
          *(char *)&local_12ec->vftablePtr[0x163].deleting_destructor = (char)iVar35;
          piVar45 = (int *)FUN_00402bb0(local_12cc,(int)local_12d0);
          piVar19 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
          local_12ec = (Spawn *)FUN_00402bb0(local_12cc,(int)local_12d0);
          iVar35 = FUN_0052bf40((uint)*(byte *)(*piVar19 + 0x58),
                                (byte)((ushort)*(undefined2 *)(*piVar45 + 0x7a) >> 9) & 1);
          pSVar31 = local_12d0;
          *(char *)&local_12ec->vftablePtr[0x11d].deleting_destructor = (char)iVar35;
          piVar45 = (int *)FUN_00402bb0(local_12cc,(int)local_12d0);
          piVar19 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
          local_12ec = (Spawn *)FUN_00402bb0(local_12cc,(int)local_12d0);
          pvVar11 = local_12e4;
          iVar35 = FUN_0052bf40((uint)*(byte *)(*piVar19 + 0x58),
                                (byte)((ushort)*(undefined2 *)(*piVar45 + 0x7a) >> 9) & 1);
          pSVar31 = local_12d0;
          *(char *)&local_12ec->vftablePtr[0x91].deleting_destructor = (char)iVar35;
          piVar45 = (int *)FUN_00402bb0(local_12cc,(int)local_12d0);
          if ((*(ushort *)(*piVar45 + 0x7a) & 0x200) == 0) {
            piVar45 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
            FUN_00414470((void *)(*piVar45 + 0x8c8),0.05,'\0');
            piVar45 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
            FUN_00414470((void *)(*piVar45 + 0x7b0),0.05,'\0');
            piVar45 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
            FUN_00414470((void *)(*piVar45 + 0x698),0.05,'\0');
            piVar45 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
            FUN_00414470((void *)(*piVar45 + 0x350),0.05,'\0');
            piVar45 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
            FUN_00414470((void *)(*piVar45 + 0x580),0.05,'\0');
            piVar45 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
            FUN_00414470((void *)(*piVar45 + 0x468),0.05,'\0');
            piVar45 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
            FUN_00414470((void *)(*piVar45 + 0x238),0.05,'\0');
            piVar45 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
            FUN_00414470((void *)(*piVar45 + 0x9e0),0.05,'\0');
            piVar45 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
            FUN_00414470((void *)(*piVar45 + 0xaf8),0.05,'\0');
          }
          piVar45 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
          if (*(int *)(*piVar45 + 0x28) == 1) {
            piVar45 = (int *)FUN_00402bb0(local_12cc,(int)pSVar31);
            if ((*(ushort *)(*piVar45 + 0x7a) & 0x200) == 0) {
              rand();
            }
          }
          pSVar30 = (Spawn *)((int)&pSVar31->vftablePtr + 1);
          local_12d0 = pSVar30;
          iVar35 = FUN_0041fff0((int *)local_12cc);
          pSVar31 = local_12cc;
          pZVar34 = local_130c;
        } while ((int)pSVar30 < iVar35);
      }
      FUN_004f7330(local_1450);
      local_8 = CONCAT31(local_8._1_3_,9);
      FUN_00530550(&(pZVar34->Zone_data).offset_0x2c,&local_13a0);
      piVar45 = (int *)FUN_004d3de0(&(pZVar34->Zone_data).offset_0x2c,&local_14a4);
      bVar37 = FUN_0042c6f0(&local_13a0,piVar45);
      if (bVar37) {
        do {
          local_12ec = (Spawn *)FUN_004ce1f0(&local_13a0);
          puVar15 = &(local_12ec->Spawn_data).field_0x9;
          puVar20 = (undefined1 *)
                    FUN_004f72d0(local_14c2,(undefined1 *)local_12ec,
                                 (undefined1 *)((int)&local_12ec->vftablePtr + 1));
          pbVar44 = (byte *)FUN_004f72f0(local_150f,puVar20,puVar15);
          FUN_004f3880(local_15b8,pbVar44);
          piVar45 = FUN_004f7910(local_1450,local_15b8);
          *piVar45 = *piVar45 + 1;
          if (((local_12ec->Spawn_data).field_0x134 & 1) == 0) {
            puVar15 = &(local_12ec->Spawn_data).field_0x114;
            local_12d4 = (Spawn *)FUN_004e2320(puVar15,2);
            puVar21 = (uint *)FUN_004014b0(local_12d4,local_1528);
            local_12e0 = (Spawn *)FUN_004e2320(puVar15,1);
            local_12ec = (Spawn *)FUN_004e2320(puVar15,0);
            pvVar11 = local_12e4;
            pZVar34 = local_130c;
            iVar35 = FUN_00406050(local_12e4,(uint)local_12ec->vftablePtr,
                                  (uint)*(int **)&local_12ec->Spawn_data,
                                  (uint)local_12e0->vftablePtr,
                                  (uint)*(int **)&local_12e0->Spawn_data,*puVar21,puVar21[1],
                                  (int)local_130c);
            uVar16 = FUN_004061f0(iVar35);
            cVar5 = (char)uVar16;
            while (cVar5 == '\0') {
              FUN_004cde40(local_1530,1);
              FUN_00402eb0(local_12d4,local_1530);
              puVar21 = (uint *)FUN_004014b0(local_12d4,local_1528);
              iVar35 = FUN_00406050(pvVar11,(uint)local_12ec->vftablePtr,
                                    (uint)*(int **)&local_12ec->Spawn_data,
                                    (uint)local_12e0->vftablePtr,
                                    (uint)*(int **)&local_12e0->Spawn_data,*puVar21,puVar21[1],
                                    (int)pZVar34);
              uVar16 = FUN_004061f0(iVar35);
              cVar5 = (char)uVar16;
            }
          }
          FUN_0041e300(&local_13a0,&local_13dc);
          piVar45 = (int *)FUN_004d3de0(&(pZVar34->Zone_data).offset_0x2c,&local_14a4);
          bVar37 = FUN_0042c6f0(&local_13a0,piVar45);
        } while (bVar37);
      }
      FUN_00428070(local_1450,&local_13a4);
      piVar45 = (int *)FUN_00530550(local_1450,&local_14ac);
      uVar47 = CONCAT44(piVar45,0x52185e);
      bVar37 = FUN_0042c6f0(&local_13a4,piVar45);
      ppiVar29 = local_1390;
      if (bVar37) {
        do {
          uVar16 = (undefined4)uVar47;
          local_12ec = (Spawn *)FUN_00402bc0(&local_13a4);
          if (((local_12ec->vftablePtr == (Spawn_vftable *)0x1) ||
              (local_12ec->vftablePtr == (Spawn_vftable *)0xb)) &&
             (7 < (int)*(void **)&(local_12ec->Spawn_data).field_0x8)) {
            uVar52 = 0x5218a6;
            FUN_004f7490(&local_1188);
            local_1184 = *(undefined1 *)&local_12ec->vftablePtr;
            local_1183 = *(undefined1 *)&local_12ec->Spawn_data;
            local_1177 = *(undefined1 *)&(local_12ec->Spawn_data).offset_0x4;
            local_1188 = 9;
            uVar47 = 0x5218dc;
            FUN_004cde40(&stack0xffffe7bc,0);
            uVar49 = 0x5218ec;
            ppiVar50 = local_138c;
            FUN_004cde40(&stack0xffffe7b4,(uint)local_138c);
            FUN_004cde40(&stack0xffffe7ac,(uint)ppiVar29);
            puVar18 = FUN_00406380(local_b18,uVar49,ppiVar50,(int)uVar47,
                                   (int)((ulonglong)uVar47 >> 0x20),uVar16,uVar52);
            FUN_00402a40(local_1060,puVar18);
            FUN_005284a0(&(pZVar34->Zone_data).offset_0x44,&local_1188);
          }
          FUN_00407a30(&local_13a4,&local_154c);
          piVar45 = (int *)FUN_00530550(local_1450,&local_14ac);
          uVar47 = CONCAT44(piVar45,0x52194f);
          bVar37 = FUN_0042c6f0(&local_13a4,piVar45);
          pvVar11 = local_12e4;
        } while (bVar37);
      }
      FUN_004f7310(local_1458);
      local_8 = CONCAT31(local_8._1_3_,10);
      FUN_00530550(&(pZVar34->Zone_data).offset_0x14,&local_1398);
      piVar45 = (int *)FUN_004d3de0(&(pZVar34->Zone_data).offset_0x14,&local_14b4);
      bVar37 = FUN_0042c6f0(&local_1398,piVar45);
      if (bVar37) {
        do {
          piVar45 = (int *)FUN_004ce1f0(&local_1398);
          iVar35 = *piVar45;
          if (*(int *)(iVar35 + 0x44) == 86400000) {
            piVar45 = (int *)FUN_004c8130(local_1738,(undefined4 *)(iVar35 + 0x28),
                                          (undefined4 *)(iVar35 + 0x2c));
            piVar45 = FUN_004f7890(local_1458,piVar45);
            *piVar45 = *piVar45 + 1;
          }
          FUN_004f79d0(&local_1398,&local_13e4);
          piVar45 = (int *)FUN_004d3de0(&(pZVar34->Zone_data).offset_0x14,&local_14b4);
          bVar37 = FUN_0042c6f0(&local_1398,piVar45);
          pvVar11 = local_12e4;
        } while (bVar37);
      }
      FUN_00428070(local_1458,&local_139c);
      piVar45 = (int *)FUN_00530550(local_1458,&local_14bc);
      uVar47 = CONCAT44(piVar45,0x521a44);
      bVar37 = FUN_0042c6f0(&local_139c,piVar45);
      ppiVar29 = local_1390;
      if (bVar37) {
        do {
          uVar16 = (undefined4)uVar47;
          local_12ec = (Spawn *)FUN_00402bc0(&local_139c);
          pSVar2 = local_12ec->vftablePtr;
          if ((((pSVar2 == (Spawn_vftable *)0x1) || (pSVar2 == (Spawn_vftable *)0x6)) ||
              (pSVar2 == (Spawn_vftable *)0x5)) && (4 < (int)(local_12ec->Spawn_data).offset_0x4)) {
            uVar52 = 0x521a8d;
            FUN_004f7490(local_12c8);
            local_11a8 = *(int **)&local_12ec->Spawn_data;
            local_12c8[0] = 10;
            uVar47 = 0x521ab2;
            FUN_004cde40(&stack0xffffe7bc,0);
            uVar49 = 0x521ac2;
            ppiVar50 = local_138c;
            FUN_004cde40(&stack0xffffe7b4,(uint)local_138c);
            FUN_004cde40(&stack0xffffe7ac,(uint)ppiVar29);
            puVar18 = FUN_00406380(local_ae8,uVar49,ppiVar50,(int)uVar47,
                                   (int)((ulonglong)uVar47 >> 0x20),uVar16,uVar52);
            FUN_00402a40(local_11a0,puVar18);
            FUN_005284a0(&(pZVar34->Zone_data).offset_0x44,local_12c8);
          }
          FUN_00407a30(&local_139c,&local_1568);
          piVar45 = (int *)FUN_00530550(local_1458,&local_14bc);
          uVar47 = CONCAT44(piVar45,0x521b25);
          bVar37 = FUN_0042c6f0(&local_139c,piVar45);
          pvVar11 = local_12e4;
        } while (bVar37);
      }
      iVar35 = FUN_0041fff0((int *)&(pZVar34->Zone_data).offset_0x14);
      (pZVar34->Zone_data).offset_0x9c = iVar35;
      FUN_0050d260(pvVar11,(int)pZVar34);
      if (*(char *)((int)pvVar11 + 0xb4) == '\0') {
        bVar37 = FUN_00419f80((int)pvVar11 + 0x94);
        if (!bVar37) {
          FUN_004c8190(&stack0xffffe7d0,3,1);
          local_8._0_1_ = 0xb;
          uVar26 = local_1368;
          pbVar22 = FUN_00412710(local_1820,"zone");
          pbVar23 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                              ((basic_ostream<char,std::char_traits<char>_> *)pbVar22,uVar26);
          pbVar22 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)pbVar23,pcVar7);
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)pbVar22,in_stack_ffffe7d0);
          FUN_00422af0(local_1578);
          local_8._0_1_ = 0xc;
          puVar18 = FUN_004d8f70(&stack0xffffe7d0,local_7c8);
          local_8._0_1_ = 0xd;
          uVar16 = FUN_00413130((void *)((int)pvVar11 + 0xac),puVar18,local_1578);
          local_130d = (byte)uVar16;
          local_8 = CONCAT31(local_8._1_3_,0xc);
          FUN_004013a0(local_7c8);
          if (local_130d != 0) {
            pvVar17 = pvVar11;
            pZVar53 = pZVar34;
            puVar18 = FUN_0041d800(local_1780,local_1578);
            FUN_0041ee20(puVar18,pvVar17,(int)pZVar53);
          }
          FUN_0042f440(local_1578);
          local_8 = CONCAT31(local_8._1_3_,10);
          FUN_004ce3e0(&stack0xffffe7d0);
        }
      }
      FUN_004d1a70(pvVar11,(uint)local_135c,(uint)local_1330,(int)local_1374,
                   (int)&(local_1330->Spawn_data).field_0xfc,0,(int)pZVar34);
      local_12ec = (Spawn *)&pZVar34->Zone_data;
      FUN_00428070(local_12ec,&local_1328);
      piVar45 = (int *)FUN_00530550(&pZVar34->Zone_data,&local_14a0);
      bVar37 = FUN_0042c6f0(&local_1328,piVar45);
      if (bVar37) {
        do {
          iVar35 = FUN_0052eb90((int *)&local_1328);
          iVar27 = 0;
          pZVar34 = local_130c;
          pCVar24 = (CRefTime *)FUN_004e2320((void *)(iVar35 + 8),2);
          lVar25 = CRefTime::Millisecs(pCVar24);
          pCVar24 = (CRefTime *)FUN_004e2320((void *)(iVar35 + 8),1);
          uVar26 = CRefTime::Millisecs(pCVar24);
          pCVar24 = (CRefTime *)FUN_004e2320((void *)(iVar35 + 8),0);
          uVar9 = CRefTime::Millisecs(pCVar24);
          pvVar11 = local_12e4;
          bVar6 = FUN_004d24a0(local_12e4,uVar9,uVar26,lVar25,(int)pZVar34,iVar27);
          *(float *)(iVar35 + 0x28) = (float)CONCAT31(extraout_var_01,bVar6);
          FUN_0052ebf0(&local_1328,&local_1498);
          piVar45 = (int *)FUN_00530550(local_12ec,&local_14a0);
          bVar37 = FUN_0042c6f0(&local_1328,piVar45);
          pZVar34 = local_130c;
        } while (bVar37);
      }
      local_12dc = (Spawn *)0x0;
      iVar35 = FUN_0041cb40((int *)&(pZVar34->Zone_data).offset_0x8);
      if (0 < iVar35) {
        pSVar31 = (Spawn *)0;
        do {
          puVar51 = &local_1748;
          iVar27 = 1;
          pZVar53 = pZVar34;
          iVar35 = FUN_0041ba70(&(pZVar34->Zone_data).offset_0x8,(int)pSVar31);
          FUN_004e2320((void *)(iVar35 + 8),iVar27);
          pCVar24 = (CRefTime *)FUN_004ce2d0(puVar51);
          uVar26 = CRefTime::Millisecs(pCVar24);
          puVar51 = &local_1758;
          iVar27 = 0;
          iVar35 = FUN_0041ba70(&(pZVar34->Zone_data).offset_0x8,(int)local_12dc);
          FUN_004e2320((void *)(iVar35 + 8),iVar27);
          pCVar24 = (CRefTime *)FUN_004ce2d0(puVar51);
          uVar9 = CRefTime::Millisecs(pCVar24);
          local_12ec = (Spawn *)FUN_0041c9e0(pvVar11,uVar9,uVar26,(int)pZVar53);
          if (local_12ec != (Spawn *)0x0) {
            FUN_00402990(&stack0xffffe7b8,local_1360,local_1368,local_12dc);
            iVar35 = FUN_0041ba70(&(pZVar34->Zone_data).offset_0x8,(int)local_12dc);
            puVar18 = (undefined4 *)FUN_004f7350(local_800,iVar35,uVar9,uVar26,pZVar53);
            FUN_005283b0(local_12ec,puVar18);
          }
          local_12dc = (Spawn *)((int)local_12dc + 1);
          iVar35 = FUN_0041cb40((int *)&(pZVar34->Zone_data).offset_0x8);
          pSVar31 = local_12dc;
        } while ((int)local_12dc < iVar35);
      }
      *(Zone **)(local_1380 + 0x10018 + (int)local_13b0 * 4) = pZVar34;
      FUN_004f7710(local_1458);
      FUN_004f7710(local_1450);
      FUN_00423710((int *)&local_13ac);
      FUN_00423710((int *)&local_137c);
      FUN_00423710((int *)&local_13c8);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* feature_count_range @ 00522290  kind=game  attributed-by=ledger  size=137 */

void __thiscall FUN_00522290(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 1;
  *param_2 = 10;
  if (*(float *)((int)this + 0x10) <= 0.2 && *(float *)((int)this + 0x10) != 0.2) {
    *param_1 = 10;
    *param_2 = 0x14;
  }
  if ((*(float *)((int)this + 0xc) <= 0.2 && *(float *)((int)this + 0xc) != 0.2) &&
     (0.8 < *(float *)((int)this + 0x10))) {
    *param_1 = 0xf;
    *param_2 = 0x19;
  }
  if ((0.8 < *(float *)((int)this + 0xc)) && (0.8 < *(float *)((int)this + 0x10))) {
    *param_1 = 10;
    *param_2 = 0x14;
  }
  if (*(char *)((int)this + 8) == '\x01') {
    *param_1 = 0x14;
    *param_2 = 0x1e;
  }
  return;
}


/* biome_border @ 00522840  kind=game  attributed-by=ledger  size=1137 */

void __thiscall FUN_00522840(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  float10 fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float local_48;
  double local_40;
  double local_38;
  int local_30;
  int local_2c;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  FUN_004febd0(this,(undefined8 *)&local_30,param_1,param_2);
  if ((((-1 < local_30) && (-1 < local_2c)) && (local_30 < 0x400)) && (local_2c < 0x400)) {
    iVar4 = local_30 * 0x400;
    piVar2 = *(int **)((int)this + (iVar4 + local_2c) * 4 + 0x4000bc);
    if (piVar2 != (int *)0x0) {
      local_48 = -1.0;
      local_20 = (double)param_2 * 0.01;
      dVar8 = (double)param_2 * 0.0005;
      local_10 = (double)param_1 * 0.01;
      dVar7 = (double)param_1 * 0.0005;
      dVar6 = (double)*(int *)((int)this + 0x800204) + local_10;
      fVar5 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                           (double)*(int *)((int)this + 0x800208) + local_20);
      local_38 = (double)(float)fVar5 * 0.1;
      dVar6 = (double)*(int *)((int)this + 0x8001fc) + dVar7;
      fVar5 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                           (double)*(int *)((int)this + 0x800200) + dVar8);
      local_40 = (local_38 + (double)(float)fVar5) * 500.0 + (double)param_1;
      dVar6 = (double)*(int *)((int)this + 0x800214) + local_10;
      fVar5 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                           (double)*(int *)((int)this + 0x800218) + local_20);
      local_10 = (double)(float)fVar5 * 0.1;
      dVar7 = (double)*(int *)((int)this + 0x80020c) + dVar7;
      fVar5 = FUN_004d5d30(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),
                           (double)*(int *)((int)this + 0x800210) + dVar8);
      iVar1 = local_30 + -1;
      local_38 = (local_10 + (double)(float)fVar5) * 500.0 + (double)param_2;
      if (((-1 < iVar1) && (iVar1 < 0x400)) &&
         (piVar3 = *(int **)((int)this + (iVar1 * 0x400 + local_2c) * 4 + 0x4000bc),
         piVar3 != (int *)0x0)) {
        local_18 = (double)*piVar3;
        local_10 = (double)piVar3[1];
        local_28 = (double)*piVar2;
        local_20 = (double)piVar2[1];
        fVar5 = FUN_00523380(&local_28,&local_18,&local_40);
        local_48 = (float)fVar5;
        local_30 = extraout_ECX;
      }
      local_30 = local_30 + 1;
      if (((-1 < local_30) && (local_30 < 0x400)) &&
         (piVar3 = *(int **)((int)this + (local_30 * 0x400 + local_2c) * 4 + 0x4000bc),
         piVar3 != (int *)0x0)) {
        local_18 = (double)*piVar3;
        local_10 = (double)piVar3[1];
        local_28 = (double)*piVar2;
        local_20 = (double)piVar2[1];
        fVar5 = FUN_00523380(&local_28,&local_18,&local_40);
        if ((local_48 < 0.0) || ((float)fVar5 < local_48)) {
          local_48 = (float)fVar5;
        }
      }
      iVar1 = local_2c + -1;
      if (((-1 < iVar1) && (iVar1 < 0x400)) &&
         (piVar3 = *(int **)((int)this + (iVar1 + iVar4) * 4 + 0x4000bc), piVar3 != (int *)0x0)) {
        local_18 = (double)*piVar3;
        local_10 = (double)piVar3[1];
        local_28 = (double)*piVar2;
        local_20 = (double)piVar2[1];
        fVar5 = FUN_00523380(&local_28,&local_18,&local_40);
        iVar4 = extraout_ECX_00;
        if ((local_48 < 0.0) || ((float)fVar5 < local_48)) {
          local_48 = (float)fVar5;
        }
      }
      local_2c = local_2c + 1;
      if (((-1 < local_2c) && (local_2c < 0x400)) &&
         (piVar3 = *(int **)((int)this + (iVar4 + local_2c) * 4 + 0x4000bc), piVar3 != (int *)0x0))
      {
        local_18 = (double)*piVar3;
        local_10 = (double)piVar3[1];
        local_28 = (double)*piVar2;
        local_20 = (double)piVar2[1];
        fVar5 = FUN_00523380(&local_28,&local_18,&local_40);
        if ((local_48 < 0.0) || ((float)fVar5 < local_48)) {
          local_48 = (float)fVar5;
        }
      }
      if (0.0 <= local_48) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* World_terrainOffset2D @ 00522d80  kind=gamemisc  attributed-by=ledger  size=159 */

float * FUN_00522d80(float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  
  fVar1 = FUN_004d5d30(SUB84((double)param_3 * 0.0005,0),
                       (int)((ulonglong)((double)param_3 * 0.0005) >> 0x20),3423.0);
  *param_1 = (float)fVar1 * 3.0 * 256.0;
  fVar1 = FUN_004d5d30(SUB84((double)param_2 * 0.0005,0),
                       (int)((ulonglong)((double)param_2 * 0.0005) >> 0x20),23421.0);
  param_1[1] = (float)fVar1 * 3.0 * 256.0;
  return param_1;
}


/* World_waterProximityInfluence @ 00522e20  kind=gamemisc  attributed-by=ledger  size=1376 */

void __thiscall FUN_00522e20(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  uint *local_94;
  int local_8c;
  int local_80;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar4 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar5 = (int)(param_2 + -0x4000 + (param_2 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (int)(param_1 + 0x4000 + (param_1 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  local_80 = (int)((param_1 + -0x4000 >> 0x1f & 0x3fffU) + param_1 + -0x4000) >> 0xe;
  iVar13 = (int)((param_2 + 0x4000 >> 0x1f & 0x3fffU) + param_2 + 0x4000) >> 0xe;
  bVar3 = false;
  if (local_80 <= iVar6) {
    iVar11 = local_80 * 0x400 + 0x10002f;
    iVar10 = iVar5;
    iVar14 = local_80;
    iVar12 = iVar11;
joined_r0x00522ec4:
    do {
      if (iVar10 <= iVar13) {
        if ((((iVar14 < 0) || (iVar10 < 0)) || (0x20002e < iVar12)) ||
           ((0x3ff < iVar10 || (iVar9 = *(int *)((int)this + (iVar12 + iVar10) * 4), iVar9 == 0))))
        goto LAB_0052336b;
        if (*(char *)(iVar9 + 8) != '\x01') {
          iVar10 = iVar10 + 1;
          goto joined_r0x00522ec4;
        }
        bVar3 = true;
      }
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 0x400;
      iVar10 = iVar5;
    } while (iVar14 <= iVar6);
    if (bVar3) {
      fVar16 = FUN_004d5d30(SUB84((double)param_2 * 0.0005,0),
                            (int)((ulonglong)((double)param_2 * 0.0005) >> 0x20),3423.0);
      fVar17 = FUN_004d5d30(SUB84((double)param_1 * 0.0005,0),
                            (int)((ulonglong)((double)param_1 * 0.0005) >> 0x20),23421.0);
      uVar7 = (uint)((float)param_1 + (float)fVar16 * 3.0 * 256.0);
      puVar15 = (uint *)0x0;
      local_94 = (uint *)0x0;
      local_8c = 0;
      uVar8 = (uint)((float)param_2 + (float)fVar17 * 3.0 * 256.0);
      iVar10 = iVar11;
      iVar14 = local_80;
      do {
        for (iVar12 = iVar5; iVar12 <= iVar13; iVar12 = iVar12 + 1) {
          if (((iVar14 < 0) || (iVar12 < 0)) ||
             ((0x20002e < iVar10 ||
              ((0x3ff < iVar12 ||
               (puVar15 = *(uint **)((int)this + (iVar12 + iVar10) * 4), puVar15 == (uint *)0x0)))))
             ) goto LAB_0052336b;
          uVar1 = *puVar15;
          uVar2 = puVar15[1];
          local_28 = CONCAT44(((((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10) -
                              (((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10)) -
                              (uint)(uVar1 * 0x10000 < uVar7 * 0x10000),
                              uVar1 * 0x10000 + uVar7 * -0x10000);
          local_20 = CONCAT44(((((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) -
                              (((int)uVar8 >> 0x1f) << 0x10 | uVar8 >> 0x10)) -
                              (uint)(uVar2 * 0x10000 < uVar8 * 0x10000),
                              uVar2 * 0x10000 + uVar8 * -0x10000);
          iVar9 = (int)((float)local_20 * 1.5258789e-05 * (float)local_20 * 1.5258789e-05 +
                       (float)local_28 * 1.5258789e-05 * (float)local_28 * 1.5258789e-05);
          if ((local_94 == (uint *)0x0) || (iVar9 < local_8c)) {
            local_94 = puVar15;
            local_8c = iVar9;
          }
          puVar15 = local_94;
        }
        iVar14 = iVar14 + 1;
        iVar10 = iVar10 + 0x400;
      } while (iVar14 <= iVar6);
      if (puVar15 != (uint *)0x0) {
        fVar19 = 0.0;
        iVar10 = iVar5;
        do {
          for (; iVar10 <= iVar13; iVar10 = iVar10 + 1) {
            if ((((local_80 < 0) || (iVar10 < 0)) || (0x20002e < iVar11)) ||
               ((0x3ff < iVar10 ||
                (puVar15 = *(uint **)((int)this + (iVar10 + iVar11) * 4), puVar15 == (uint *)0x0))))
            goto LAB_0052336b;
            uVar1 = *puVar15;
            uVar2 = puVar15[1];
            local_18 = CONCAT44(((((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10) -
                                (((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10)) -
                                (uint)(uVar1 * 0x10000 < uVar7 * 0x10000),
                                uVar1 * 0x10000 + uVar7 * -0x10000);
            local_10 = CONCAT44(((((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) -
                                (((int)uVar8 >> 0x1f) << 0x10 | uVar8 >> 0x10)) -
                                (uint)(uVar2 * 0x10000 < uVar8 * 0x10000),
                                uVar2 * 0x10000 + uVar8 * -0x10000);
            fVar18 = (float)((int)((float)local_10 * 1.5258789e-05 * (float)local_10 * 1.5258789e-05
                                  + (float)local_18 * 1.5258789e-05 *
                                    (float)local_18 * 1.5258789e-05) - local_8c) * 5e-07;
            if (1.0 < fVar18) {
              fVar18 = 1.0;
            }
            fVar19 = fVar19 + (1.0 - fVar18);
          }
          local_80 = local_80 + 1;
          iVar11 = iVar11 + 0x400;
          iVar10 = iVar5;
        } while (local_80 <= iVar6);
        if (0.0 < fVar19) {
          __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
  }
LAB_0052336b:
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}


/* seg_carve @ 005234b0  kind=game  attributed-by=ledger  size=538 */

void __thiscall FUN_005234b0(void *this,int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_54;
  int local_50;
  int local_14;
  int iStack_10;
  
  uVar1 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar2 = *param_2 - *param_1;
  uVar6 = param_2[1] - param_1[1];
  uVar5 = param_2[2] - param_1[2];
  iVar9 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  iVar7 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
  iVar10 = iVar7;
  if (iVar7 < iVar9) {
    iVar10 = iVar9;
  }
  iVar3 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  if ((iVar3 < iVar10) && (iVar3 = iVar7, iVar7 < iVar9)) {
    iVar3 = iVar9;
  }
  if ((iVar3 != 0) && (local_54 = 0, local_50 = param_1[2], -1 < iVar3)) {
    do {
      local_14 = (int)*(undefined8 *)param_1;
      local_14 = local_14 + (int)(uVar2 * local_54) / iVar3;
      iStack_10 = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
      iStack_10 = iStack_10 + (int)(uVar6 * local_54) / iVar3;
      iVar10 = param_1[2] + (int)(uVar5 * local_54) / iVar3;
      uVar8 = *(uint *)((int)this + 4) & 0x80000003;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
      }
      if (uVar8 == 1) {
        iVar9 = (*(int *)((int)this + 0xc) - iStack_10) + -1;
        iVar7 = local_14;
      }
      else if (uVar8 == 2) {
        iVar9 = (*(int *)((int)this + 0xc) - local_14) + -1;
        iVar7 = (*(int *)((int)this + 0x10) - iStack_10) + -1;
      }
      else {
        iVar7 = iStack_10;
        iVar9 = local_14;
        if (uVar8 == 3) {
          iVar7 = (*(int *)((int)this + 0x10) - local_14) + -1;
          iVar9 = iStack_10;
        }
      }
      if (*(char *)((int)this + 8) != '\0') {
        iVar7 = (*(int *)((int)this + 0x10) - iVar7) + -1;
      }
      if ((((iVar9 < 0) || (iVar7 < 0)) || (iVar10 < 0)) ||
         (((*(int *)((int)this + 0xc) <= iVar9 || (*(int *)((int)this + 0x10) <= iVar7)) ||
          (*(int *)((int)this + 0x14) <= iVar10)))) {
        if ((DAT_005842cc & 1) == 0) {
          DAT_005842cc = DAT_005842cc | 1;
          DAT_005842c9 = 0;
        }
        DAT_005842c8 = 1;
        puVar4 = &DAT_005842c8;
      }
      else {
        puVar4 = (undefined1 *)
                 (*(int *)((int)this + 0x18) +
                 ((*(int *)((int)this + 0x10) * iVar10 + iVar7) * *(int *)((int)this + 0xc) + iVar9)
                 * 2);
      }
      *puVar4 = 3;
      if (iVar10 < local_50) {
        puVar4 = FUN_004f84a0(this,local_14,iStack_10,iVar10 + 1);
        *puVar4 = 3;
        puVar4 = FUN_004f84a0(this,local_14,iStack_10,iVar10);
        puVar4[1] = puVar4[1] | 1;
      }
      if (local_50 < iVar10) {
        puVar4 = FUN_004f84a0(this,local_14,iStack_10,iVar10 + -1);
        *puVar4 = 3;
        puVar4 = FUN_004f84a0(this,local_14,iStack_10,iVar10 + -1);
        puVar4[1] = puVar4[1] | 1;
      }
      local_54 = local_54 + 1;
      local_50 = iVar10;
    } while (local_54 <= iVar3);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


/* room_carve @ 005236d0  kind=game  attributed-by=ledger  size=1212 */

void __thiscall FUN_005236d0(void *this,int *param_1,int *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_c;
  int local_8;
  
  if (((0 < *param_2) && (iVar7 = param_2[1], 0 < iVar7)) && (iVar2 = param_2[2], 0 < iVar2)) {
    iVar5 = *param_1;
    if (iVar5 < *param_2 + iVar5) {
      do {
        iVar10 = param_1[1];
        if (iVar10 < iVar10 + iVar7) {
          do {
            iVar7 = param_1[2];
            if (iVar7 < iVar7 + iVar2) {
              do {
                uVar1 = *(uint *)((int)this + 4) & 0x80000003;
                if ((int)uVar1 < 0) {
                  uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
                }
                if (uVar1 == 1) {
                  iVar9 = (*(int *)((int)this + 0xc) - iVar10) + -1;
                  iVar2 = iVar5;
                }
                else if (uVar1 == 2) {
                  iVar9 = (*(int *)((int)this + 0xc) - iVar5) + -1;
                  iVar2 = (*(int *)((int)this + 0x10) - iVar10) + -1;
                }
                else {
                  iVar2 = iVar10;
                  iVar9 = iVar5;
                  if (uVar1 == 3) {
                    iVar2 = (*(int *)((int)this + 0x10) - iVar5) + -1;
                    iVar9 = iVar10;
                  }
                }
                if (*(char *)((int)this + 8) != '\0') {
                  iVar2 = (*(int *)((int)this + 0x10) - iVar2) + -1;
                }
                if ((((iVar9 < 0) || (iVar2 < 0)) ||
                    ((iVar7 < 0 ||
                     ((*(int *)((int)this + 0xc) <= iVar9 || (*(int *)((int)this + 0x10) <= iVar2)))
                     ))) || (*(int *)((int)this + 0x14) <= iVar7)) {
                  if ((DAT_005842cc & 1) == 0) {
                    DAT_005842cc = DAT_005842cc | 1;
                    DAT_005842c9 = 0;
                  }
                  DAT_005842c8 = 1;
                  puVar3 = &DAT_005842c8;
                }
                else {
                  puVar3 = (undefined1 *)
                           (*(int *)((int)this + 0x18) +
                           ((*(int *)((int)this + 0x10) * iVar7 + iVar2) * *(int *)((int)this + 0xc)
                           + iVar9) * 2);
                }
                *puVar3 = 3;
                iVar7 = iVar7 + 1;
                iVar2 = param_2[2];
              } while (iVar7 < param_1[2] + iVar2);
            }
            iVar10 = iVar10 + 1;
            iVar7 = param_2[1];
          } while (iVar10 < param_1[1] + iVar7);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *param_1 + *param_2);
    }
    pcVar8 = rand_exref;
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    bVar11 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar11 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar11) {
      iVar7 = rand();
      iVar7 = iVar7 % *param_2 + 1;
      iVar2 = rand();
      local_c = *param_1;
      local_8 = param_1[1];
      iVar2 = iVar2 % param_2[1] + 1;
      if (*param_2 != iVar7 && -1 < *param_2 - iVar7) {
        iVar5 = rand();
        local_c = local_c + iVar5 % ((*param_2 - iVar7) + 1);
      }
      if (param_2[1] != iVar2 && -1 < param_2[1] - iVar2) {
        iVar5 = rand();
        local_8 = local_8 + iVar5 % ((param_2[1] - iVar2) + 1);
      }
      iVar7 = iVar7 + local_c;
      pcVar8 = rand_exref;
      if (local_c < iVar7) {
        iVar5 = local_8;
        do {
          for (; rand_exref = pcVar8, iVar5 < local_8 + iVar2; iVar5 = iVar5 + 1) {
            uVar1 = *(uint *)((int)this + 4) & 0x80000003;
            if ((int)uVar1 < 0) {
              uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
            }
            if (uVar1 == 1) {
              iVar9 = (*(int *)((int)this + 0xc) - iVar5) + -1;
              iVar10 = local_c;
            }
            else if (uVar1 == 2) {
              iVar9 = (*(int *)((int)this + 0xc) - local_c) + -1;
              iVar10 = (*(int *)((int)this + 0x10) - iVar5) + -1;
            }
            else {
              iVar10 = iVar5;
              iVar9 = local_c;
              if (uVar1 == 3) {
                iVar10 = (*(int *)((int)this + 0x10) - local_c) + -1;
                iVar9 = iVar5;
              }
            }
            if (*(char *)((int)this + 8) != '\0') {
              iVar10 = (*(int *)((int)this + 0x10) - iVar10) + -1;
            }
            if (((((iVar9 < 0) || (iVar10 < 0)) || (param_1[2] < 0)) ||
                ((*(int *)((int)this + 0xc) <= iVar9 || (*(int *)((int)this + 0x10) <= iVar10)))) ||
               (*(int *)((int)this + 0x14) <= param_1[2])) {
              if ((DAT_005842cc & 1) == 0) {
                DAT_005842cc = DAT_005842cc | 1;
                DAT_005842c9 = 0;
              }
              DAT_005842c8 = 1;
              puVar3 = &DAT_005842c8;
            }
            else {
              puVar3 = (undefined1 *)
                       (*(int *)((int)this + 0x18) +
                       ((*(int *)((int)this + 0x10) * param_1[2] + iVar10) *
                        *(int *)((int)this + 0xc) + iVar9) * 2);
            }
            puVar3[1] = puVar3[1] | 2;
            pcVar8 = rand_exref;
          }
          local_c = local_c + 1;
          iVar5 = local_8;
        } while (local_c < iVar7);
      }
    }
    if (((param_3 != '\0') && (2 < *param_2)) && (2 < param_2[1])) {
      iVar7 = (*pcVar8)();
      iVar7 = iVar7 % (*param_2 + -2) + 1;
      iVar2 = (*pcVar8)();
      iVar5 = param_1[1] + 1;
      _param_3 = *param_1 + 1;
      iVar2 = iVar2 % (param_2[1] + -2) + 1;
      if (1 < *param_2 - iVar7) {
        iVar10 = rand();
        _param_3 = _param_3 + iVar10 % ((*param_2 - iVar7) + -1);
      }
      if (1 < param_2[1] - iVar2) {
        iVar10 = rand();
        iVar5 = iVar5 + iVar10 % ((param_2[1] - iVar2) + -1);
      }
      iVar7 = iVar7 + _param_3;
      if (_param_3 < iVar7) {
        iVar10 = iVar5;
        do {
          for (; iVar10 < iVar5 + iVar2; iVar10 = iVar10 + 1) {
            iVar9 = param_1[2];
            if (iVar9 < param_2[2] + iVar9) {
              do {
                uVar1 = *(uint *)((int)this + 4) & 0x80000003;
                if ((int)uVar1 < 0) {
                  uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
                }
                if (uVar1 == 1) {
                  iVar6 = (*(int *)((int)this + 0xc) - iVar10) + -1;
                  iVar4 = _param_3;
                }
                else if (uVar1 == 2) {
                  iVar6 = (*(int *)((int)this + 0xc) - _param_3) + -1;
                  iVar4 = (*(int *)((int)this + 0x10) - iVar10) + -1;
                }
                else {
                  iVar4 = iVar10;
                  iVar6 = _param_3;
                  if (uVar1 == 3) {
                    iVar4 = (*(int *)((int)this + 0x10) - _param_3) + -1;
                    iVar6 = iVar10;
                  }
                }
                if (*(char *)((int)this + 8) != '\0') {
                  iVar4 = (*(int *)((int)this + 0x10) - iVar4) + -1;
                }
                if ((((iVar6 < 0) || (iVar4 < 0)) || (iVar9 < 0)) ||
                   (((*(int *)((int)this + 0xc) <= iVar6 || (*(int *)((int)this + 0x10) <= iVar4))
                    || (*(int *)((int)this + 0x14) <= iVar9)))) {
                  if ((DAT_005842cc & 1) == 0) {
                    DAT_005842cc = DAT_005842cc | 1;
                    DAT_005842c9 = 0;
                  }
                  DAT_005842c8 = 1;
                  puVar3 = &DAT_005842c8;
                }
                else {
                  puVar3 = (undefined1 *)
                           (*(int *)((int)this + 0x18) +
                           ((*(int *)((int)this + 0x10) * iVar9 + iVar4) * *(int *)((int)this + 0xc)
                           + iVar6) * 2);
                }
                *puVar3 = 2;
                iVar9 = iVar9 + 1;
              } while (iVar9 < param_2[2] + param_1[2]);
            }
          }
          _param_3 = _param_3 + 1;
          iVar10 = iVar5;
        } while (_param_3 < iVar7);
      }
    }
  }
  return;
}


/* creature_spawn_builder @ 00524540  kind=game  attributed-by=ledger  size=15842 */

void __thiscall
FUN_00524540(void *this,void *param_1,uint *param_2,uint param_3,undefined4 param_4,int param_5,
            int param_6,char param_7,int *param_8,int param_9)

{
  Spawn_vftable **ppSVar1;
  void *this_00;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  Spawn_vftable *pSVar8;
  _Container_base0 *p_Var9;
  undefined *puVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  SequentialBehavior *pSVar14;
  undefined1 *puVar15;
  float *pfVar16;
  Spawn *pSVar17;
  uint **ppuVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  _Container_base0 *this_01;
  float fVar22;
  bool bVar23;
  float10 fVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  SequentialBehavior_vftable *pSVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined4 uVar31;
  ulonglong uVar30;
  undefined4 uVar32;
  undefined1 uVar33;
  undefined4 uVar34;
  int iVar35;
  undefined1 local_880 [4];
  undefined1 local_87c [4];
  undefined1 local_878 [4];
  undefined1 local_874 [4];
  undefined1 local_870 [4];
  undefined1 local_86c [4];
  undefined1 local_868 [4];
  undefined1 local_864 [4];
  undefined1 local_860 [4];
  undefined1 local_85c [4];
  undefined1 local_858 [4];
  undefined1 local_854 [4];
  undefined1 local_850 [4];
  undefined1 local_84c [4];
  undefined1 local_848 [4];
  undefined1 local_844 [4];
  undefined1 local_840 [4];
  undefined1 local_83c [4];
  undefined1 local_838 [4];
  undefined1 local_834 [4];
  undefined1 local_830 [4];
  undefined1 local_82c [4];
  undefined1 local_828 [4];
  undefined1 local_824 [4];
  undefined1 local_820 [4];
  undefined1 local_81c [4];
  undefined1 local_818 [4];
  undefined1 local_814 [4];
  undefined1 local_810 [4];
  undefined1 local_80c [4];
  undefined1 local_808 [4];
  undefined1 local_804 [4];
  undefined1 local_800 [4];
  undefined1 local_7fc [4];
  undefined1 local_7f8 [4];
  undefined1 local_7f4 [4];
  undefined1 local_7f0 [4];
  undefined1 local_7ec [4];
  undefined1 local_7e8 [4];
  undefined1 local_7e4 [4];
  undefined1 local_7e0 [4];
  undefined1 local_7dc [4];
  undefined1 local_7d8 [4];
  undefined1 local_7d4 [4];
  undefined1 local_7d0 [4];
  undefined1 local_7cc [4];
  undefined1 local_7c8 [4];
  undefined1 local_7c4 [4];
  undefined1 local_7c0 [4];
  undefined1 local_7bc [4];
  undefined1 local_7b8 [4];
  undefined1 local_7b4 [4];
  undefined1 local_7b0 [4];
  undefined1 local_7ac [4];
  undefined1 local_7a8 [4];
  undefined1 local_7a4 [4];
  undefined1 local_7a0 [4];
  undefined1 local_79c [4];
  undefined1 local_798 [4];
  undefined1 local_794 [4];
  undefined1 local_790 [4];
  undefined4 local_78c;
  uint local_788;
  undefined2 local_784;
  undefined2 local_780;
  undefined2 local_77c;
  undefined2 local_778;
  undefined2 local_774;
  undefined2 local_770;
  undefined2 local_76c;
  undefined2 local_768;
  undefined2 local_764;
  undefined2 local_760;
  undefined2 local_75c;
  undefined2 local_758;
  undefined2 local_756;
  undefined2 local_754;
  undefined2 local_750;
  undefined2 local_74e;
  undefined2 local_74c;
  undefined2 local_74a;
  undefined2 local_748;
  undefined2 local_744;
  undefined1 local_742;
  undefined1 local_741;
  undefined2 local_740;
  undefined1 local_73e;
  undefined1 local_73d;
  undefined2 local_73c;
  undefined2 local_738;
  undefined2 local_734;
  undefined2 local_730;
  undefined2 local_72c;
  undefined2 local_72a;
  undefined2 local_728;
  undefined2 local_724;
  undefined2 local_722;
  undefined2 local_720;
  undefined2 local_71e;
  char local_71c [4];
  char local_718 [4];
  char local_714 [4];
  char local_710 [4];
  char local_70c [4];
  char local_708 [4];
  char local_704 [4];
  char local_700 [4];
  char local_6fc [4];
  uint *local_6f8;
  int local_6f4;
  uint *local_6f0;
  uint local_6ec;
  int local_6e8;
  float local_6e4;
  float local_6e0;
  int local_6dc;
  void *local_6d8;
  int local_6d4;
  int local_6d0;
  int local_6cc;
  int local_6c8;
  Spawn *local_6c0;
  int local_6bc;
  int local_6b8;
  void *local_6b4;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined4 local_6a0;
  undefined1 local_69c [12];
  undefined1 local_690 [12];
  undefined1 local_684 [12];
  undefined1 local_678 [12];
  undefined1 local_66c [12];
  undefined1 local_660 [12];
  undefined1 local_654 [12];
  undefined1 local_648 [12];
  undefined1 local_63c [12];
  undefined1 local_630 [12];
  undefined1 local_624 [12];
  void *local_618 [2];
  uint local_610;
  uint local_60c;
  undefined8 local_608;
  Spawn *local_600;
  uint local_5fc;
  uint local_5f8;
  undefined8 local_5f4;
  undefined4 local_5ec;
  undefined4 *local_5d0;
  undefined4 *local_5cc;
  undefined4 local_5c8;
  Spawn_vftable *local_490 [2];
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined1 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined8 local_450;
  undefined4 *local_448;
  undefined4 *local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined2 local_438 [2];
  undefined4 local_434;
  undefined4 local_430;
  undefined2 local_42c;
  undefined1 local_42a;
  undefined2 local_428;
  undefined1 local_424 [256];
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 uStack_310;
  undefined4 local_30c;
  void *local_308 [2];
  undefined8 local_300;
  undefined8 local_2f8;
  int local_2f0;
  uint local_2ec;
  uint local_2e8;
  undefined8 local_2e4;
  undefined4 local_2dc;
  _Container_base0 *local_2c0;
  _Container_base0 *local_2bc;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  SequentialBehavior_vftable *local_138;
  Spawn_vftable *pSStack_134;
  float local_12c;
  uint uStack_128;
  SequentialBehavior_vftable *local_120;
  Spawn_vftable *pSStack_11c;
  SequentialBehavior_vftable *local_114;
  Spawn_vftable *pSStack_110;
  SequentialBehavior_vftable *local_108;
  Spawn_vftable *pSStack_104;
  float local_fc;
  uint uStack_f8;
  float local_f0;
  uint uStack_ec;
  float local_e4;
  uint uStack_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  uint local_c0 [6];
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  float local_9c;
  uint uStack_98;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78 [2];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  float local_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  int local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  uint uStack_24;
  SequentialBehavior_vftable *local_20;
  Spawn_vftable *pSStack_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00556056;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_78c = param_4;
  local_6b0._4_4_ = (SequentialBehavior *)param_8;
  local_6d8 = param_1;
  local_6f0 = param_2;
  local_6e8 = param_6;
  local_6d0 = param_9;
  uVar3 = param_3 & 0x80000001;
  bVar23 = uVar3 == 0;
  if ((int)uVar3 < 0) {
    bVar23 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
  }
  local_6e4 = *(float *)((int)param_1 + 0x44);
  local_6e0 = *(float *)((int)param_1 + 0x48);
  if (!bVar23) {
    local_6e4 = *(float *)((int)param_1 + 0x48);
    local_6e0 = *(float *)((int)param_1 + 0x44);
  }
  local_a8 = *param_2;
  local_6ec = param_2[2];
  uStack_a4 = param_2[1];
  local_6b4 = this;
  local_a0 = local_6ec;
  if ((param_6 == 0) ||
     ((((local_6f8 = (uint *)(*(int *)(param_6 + 0x60) * 0x100),
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90),
        uVar25 = CONCAT44(local_38._4_4_,(uint)local_38),
        local_608 = CONCAT44(local_608._4_4_,(uint)local_608),
        local_2f8 = CONCAT44(local_2f8._4_4_,(undefined4)local_2f8),
        local_88 = CONCAT44(local_88._4_4_,(undefined4)local_88),
        uStack_30 = CONCAT44(uStack_30._4_4_,(Spawn_vftable *)uStack_30),
        local_300 = CONCAT44(local_300._4_4_,(undefined4)local_300),
        (int)local_6f8 < (int)((int)local_6e4 + local_a8) &&
        (local_6e4 = (float)(*(int *)(param_6 + 100) * 0x100),
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90),
        uVar25 = CONCAT44(local_38._4_4_,(uint)local_38),
        local_608 = CONCAT44(local_608._4_4_,(uint)local_608),
        local_2f8 = CONCAT44(local_2f8._4_4_,(undefined4)local_2f8),
        local_88 = CONCAT44(local_88._4_4_,(undefined4)local_88),
        uStack_30 = CONCAT44(uStack_30._4_4_,(Spawn_vftable *)uStack_30),
        local_300 = CONCAT44(local_300._4_4_,(undefined4)local_300),
        (int)local_6e4 < (int)((int)local_6e0 + uStack_a4))) &&
       (local_90 = CONCAT44(local_90._4_4_,(uint)local_90),
       uVar25 = CONCAT44(local_38._4_4_,(uint)local_38),
       local_608 = CONCAT44(local_608._4_4_,(uint)local_608),
       local_2f8 = CONCAT44(local_2f8._4_4_,(undefined4)local_2f8),
       local_88 = CONCAT44(local_88._4_4_,(undefined4)local_88),
       uStack_30 = CONCAT44(uStack_30._4_4_,(Spawn_vftable *)uStack_30),
       local_300 = CONCAT44(local_300._4_4_,(undefined4)local_300),
       (int)local_a8 < (int)(local_6f8 + 0x40))) &&
      (local_90 = CONCAT44(local_90._4_4_,(uint)local_90),
      uVar25 = CONCAT44(local_38._4_4_,(uint)local_38),
      local_608 = CONCAT44(local_608._4_4_,(uint)local_608),
      local_2f8 = CONCAT44(local_2f8._4_4_,(undefined4)local_2f8),
      local_88 = CONCAT44(local_88._4_4_,(undefined4)local_88),
      uStack_30 = CONCAT44(uStack_30._4_4_,(Spawn_vftable *)uStack_30),
      local_300 = CONCAT44(local_300._4_4_,(undefined4)local_300),
      (int)uStack_a4 < (int)local_6e4 + 0x100)))) {
    iVar4 = FUN_00406100(this,local_a8,uStack_a4,param_6);
    if (iVar4 == 0) {
      fVar24 = (float10)FUN_004f8b40(this,*local_6f0,local_6f0[1]);
      local_6e4 = (float)fVar24;
      local_6a8 = CONCAT44(local_6e4,(uint *)local_6a8);
    }
    else {
      local_6e4 = *(float *)(iVar4 + 8);
    }
    uVar25 = CONCAT44(local_38._4_4_,(uint)local_38);
    uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
    local_6dc = *(int *)((int)local_6d8 + 0x44);
    local_6e0 = *(float *)((int)local_6d8 + 0x48);
    local_6b8 = 0;
    local_6f4 = 0;
    local_788 = param_3 & 0x80000003;
    if ((int)local_788 < 0) {
      local_788 = (local_788 - 1 | 0xfffffffc) + 1;
    }
    switch(local_788) {
    case 0:
      local_6b8 = *(int *)local_6b0._4_4_;
      local_6f4 = *(int *)((int)local_6b0._4_4_ + 4);
      local_6dc = local_6dc - *(int *)((int)local_6b0._4_4_ + 8);
      local_6e0 = (float)((int)local_6e0 - *(int *)((int)local_6b0._4_4_ + 0xc));
      break;
    case 1:
      local_6b8 = *(int *)((int)local_6b0._4_4_ + 0xc);
      local_6f4 = *(int *)local_6b0._4_4_;
      local_6dc = local_6dc - *(int *)((int)local_6b0._4_4_ + 4);
      local_6e0 = (float)((int)local_6e0 - *(int *)((int)local_6b0._4_4_ + 8));
      break;
    case 2:
      local_6b8 = *(int *)((int)local_6b0._4_4_ + 8);
      local_6f4 = *(int *)((int)local_6b0._4_4_ + 0xc);
      local_6dc = local_6dc - *(int *)local_6b0._4_4_;
      local_6e0 = (float)((int)local_6e0 - *(int *)((int)local_6b0._4_4_ + 4));
      break;
    case 3:
      local_6b8 = *(int *)((int)local_6b0._4_4_ + 4);
      local_6f4 = *(int *)((int)local_6b0._4_4_ + 8);
      local_6dc = local_6dc - *(int *)((int)local_6b0._4_4_ + 0xc);
      local_6e0 = (float)((int)local_6e0 - *(int *)local_6b0._4_4_);
    }
    pvVar6 = local_6d8;
    fVar22 = local_6e0;
    if (local_6b8 < local_6dc) {
      do {
        local_6bc = local_6f4;
        if (local_6f4 < (int)fVar22) {
LAB_00524804:
          this_00 = local_6b4;
          iVar4 = *(int *)((int)pvVar6 + 0x4c);
          iVar21 = 0;
          local_6c8 = 0;
          local_6cc = iVar4;
          if (0 < iVar4) {
            do {
              if ((((local_6b8 < 0) || (local_6bc < 0)) ||
                  ((iVar21 < 0 ||
                   ((*(int *)((int)local_6d8 + 0x44) <= local_6b8 ||
                    (*(int *)((int)local_6d8 + 0x48) <= local_6bc)))))) || (iVar4 <= iVar21)) {
                puVar20 = &DAT_00583dfc;
              }
              else {
                puVar20 = (undefined1 *)
                          (((*(int *)((int)local_6d8 + 0x48) * iVar21 + local_6bc) *
                            *(int *)((int)local_6d8 + 0x44) + local_6b8) * 3 +
                          *(int *)((int)local_6d8 + 0x30));
              }
              iVar4 = 0;
              do {
                if (puVar20[iVar4] != (&DAT_00583dfc)[iVar4]) {
                  if (iVar21 < local_6cc) {
                    local_6cc = iVar21;
                  }
                  if (local_6c8 < iVar21) {
                    local_6c8 = iVar21;
                  }
                  break;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < 3);
              iVar4 = *(int *)((int)local_6d8 + 0x4c);
              iVar21 = iVar21 + 1;
              param_9 = local_6d0;
              param_6 = local_6e8;
            } while (iVar21 < iVar4);
          }
          if (param_7 != '\0') {
            if ((((local_6b8 < 0) || (local_6bc < 0)) ||
                (*(int *)((int)local_6d8 + 0x44) <= local_6b8)) ||
               ((*(int *)((int)local_6d8 + 0x48) <= local_6bc || (iVar4 < 1)))) {
              puVar20 = &DAT_00583dfc;
            }
            else {
              puVar20 = (undefined1 *)
                        ((*(int *)((int)local_6d8 + 0x44) * local_6bc + local_6b8) * 3 +
                        *(int *)((int)local_6d8 + 0x30));
            }
            iVar4 = 0;
            do {
              if (puVar20[iVar4] != (&DAT_00583dfc)[iVar4]) {
                switch(local_788) {
                case 0:
                  local_9c = (float)(local_a8 + local_6b8);
                  uStack_98 = uStack_a4 + local_6bc;
                  _local_e4 = CONCAT44(uStack_98,local_9c);
                  break;
                case 1:
                  local_9c = (float)(local_a8 + local_6bc);
                  uStack_98 = uStack_a4 + (*(int *)((int)local_6d8 + 0x44) - local_6b8) + -1;
                  _local_fc = CONCAT44(uStack_98,local_9c);
                  break;
                case 2:
                  local_9c = (float)(local_a8 + (*(int *)((int)local_6d8 + 0x44) - local_6b8) + -1);
                  uStack_98 = uStack_a4 + (*(int *)((int)local_6d8 + 0x48) - local_6bc) + -1;
                  _local_f0 = CONCAT44(uStack_98,local_9c);
                  break;
                case 3:
                  local_9c = (float)(local_a8 + (*(int *)((int)local_6d8 + 0x48) - local_6bc) + -1);
                  uStack_98 = uStack_a4 + local_6b8;
                  _local_12c = CONCAT44(uStack_98,local_9c);
                  break;
                default:
                  goto switchD_00524949_default;
                }
                local_94 = local_6ec;
switchD_00524949_default:
                local_6b0 = uVar26;
                local_38 = uVar25;
                iVar4 = FUN_00406100(local_6b4,(uint)local_9c,uStack_98,param_6);
                uVar26 = CONCAT44(local_6b0._4_4_,iVar4);
                uVar25 = local_38;
                if ((iVar4 != 0) &&
                   (iVar21 = local_6ec - 1, local_6b0._0_4_ = (Spawn *)iVar4,
                   uVar26 = CONCAT44(local_6b0._4_4_,iVar4), *(int *)(iVar4 + 0x10) < iVar21))
                goto LAB_00524a77;
                break;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < 3);
          }
          goto LAB_00524b55;
        }
LAB_00528312:
        local_6b0._4_4_ = (SequentialBehavior *)(uVar26 >> 0x20);
        local_6b0._0_4_ = (Spawn *)uVar26;
        local_6b8 = local_6b8 + 1;
      } while (local_6b8 < local_6dc);
    }
  }
  ExceptionList = local_10;
  local_38 = uVar25;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    puVar5 = (undefined2 *)FUN_00430730(local_6d8,local_6b8,local_6bc,0);
    local_740 = *puVar5;
    local_73e = *(undefined1 *)(puVar5 + 1);
    local_73d = 6;
    FUN_0041ff00(this_00,local_9c,uStack_98,iVar21,(undefined1 *)&local_740,param_6);
    iVar21 = iVar21 + -1;
    uVar25 = local_38;
    if (iVar21 <= *(int *)((int)(Spawn *)local_6b0 + 0x10)) break;
LAB_00524a77:
    pvVar6 = (void *)FUN_00406100(this_00,(uint)local_9c,uStack_98,param_6);
    if (pvVar6 == (void *)0x0) {
      puVar7 = (undefined4 *)&DAT_005842c4;
    }
    else {
      iVar4 = *(int *)((int)pvVar6 + 0x10);
      if (iVar21 < iVar4) {
        puVar7 = (undefined4 *)&DAT_005842c4;
      }
      else if (iVar21 < *(int *)((int)pvVar6 + 0x1c) + iVar4) {
        puVar7 = (undefined4 *)FUN_00405f20(pvVar6,iVar21 - iVar4);
        if ((((*(byte *)((int)puVar7 + 3) & 0x1f) == 0) && (iVar21 < 1)) &&
           ((*(byte *)((int)puVar7 + 3) & 0x40) == 0)) {
          puVar7 = (undefined4 *)&DAT_005842bc;
        }
      }
      else {
        puVar7 = (undefined4 *)&DAT_005842bc;
        if (0 < iVar21) {
          puVar7 = &DAT_005842c0;
        }
      }
    }
    if (((*(byte *)((int)puVar7 + 3) & 0x1f) != 0) &&
       (uVar25 = local_38, (*(byte *)((int)puVar7 + 3) & 0x1f) != 2)) break;
  }
  uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  param_9 = local_6d0;
LAB_00524b55:
  local_6b0._0_4_ = (Spawn *)uVar26;
  iVar4 = *(int *)((int)local_6d8 + 0x4c) + -1;
  iVar21 = param_9;
  local_6d4 = iVar4;
  if (-1 < iVar4) {
LAB_00524b70:
    local_38._0_4_ = (uint)uVar25;
    switch(local_788) {
    case 0:
      local_20 = (SequentialBehavior_vftable *)(local_a8 + local_6b8);
      pSStack_1c = (Spawn_vftable *)(uStack_a4 + local_6bc);
      _local_108 = CONCAT44(pSStack_1c,local_20);
      local_18 = local_6ec + iVar4;
      goto switchD_00524b7f_default;
    case 1:
      local_20 = (SequentialBehavior_vftable *)(local_a8 + local_6bc);
      pSStack_1c = (Spawn_vftable *)(uStack_a4 + (*(int *)((int)local_6d8 + 0x44) - local_6b8) + -1)
      ;
      _local_120 = CONCAT44(pSStack_1c,local_20);
      param_6 = local_6e8;
      break;
    case 2:
      local_20 = (SequentialBehavior_vftable *)
                 (local_a8 + (*(int *)((int)local_6d8 + 0x44) - local_6b8) + -1);
      pSStack_1c = (Spawn_vftable *)(uStack_a4 + (*(int *)((int)local_6d8 + 0x48) - local_6bc) + -1)
      ;
      _local_138 = CONCAT44(pSStack_1c,local_20);
      break;
    case 3:
      local_20 = (SequentialBehavior_vftable *)
                 (local_a8 + (*(int *)((int)local_6d8 + 0x48) - local_6bc) + -1);
      pSStack_1c = (Spawn_vftable *)(uStack_a4 + local_6b8);
      _local_114 = CONCAT44(pSStack_1c,local_20);
      break;
    default:
      goto switchD_00524b7f_default;
    }
    local_18 = local_6ec + iVar4;
switchD_00524b7f_default:
    if (((local_6b8 < 0) || (local_6bc < 0)) ||
       ((iVar4 < 0 ||
        (((*(int *)((int)local_6d8 + 0x44) <= local_6b8 ||
          (*(int *)((int)local_6d8 + 0x48) <= local_6bc)) ||
         (*(int *)((int)local_6d8 + 0x4c) <= iVar4)))))) {
      local_6b0._4_4_ = (SequentialBehavior *)&DAT_00583dfc;
    }
    else {
      local_6b0._4_4_ =
           (SequentialBehavior *)
           (((*(int *)((int)local_6d8 + 0x48) * iVar4 + local_6bc) * *(int *)((int)local_6d8 + 0x44)
            + local_6b8) * 3 + *(int *)((int)local_6d8 + 0x30));
    }
    iVar19 = 0;
    do {
      param_9 = iVar21;
      local_6d4 = iVar4;
      iVar35 = param_6;
      if (*(char *)((int)&(local_6b0._4_4_)->vftablePtr + iVar19) != (&DAT_00583dfc)[iVar19]) {
        local_6a8 = CONCAT44(local_18,(uint *)local_6a8);
        uVar28 = 0x524e02;
        local_38 = uVar25;
        pSVar8 = pSStack_1c;
        pvVar6 = (void *)FUN_00406100(local_6b4,(uint)local_20,(uint)pSStack_1c,param_6);
        if (pvVar6 == (void *)0x0) {
          puVar7 = (undefined4 *)&DAT_005842c4;
        }
        else if ((int)local_18 < *(int *)((int)pvVar6 + 0x10)) {
          puVar7 = (undefined4 *)&DAT_005842c4;
        }
        else if ((int)local_18 < *(int *)((int)pvVar6 + 0x1c) + *(int *)((int)pvVar6 + 0x10)) {
          pSVar8 = (Spawn_vftable *)0x524e49;
          puVar7 = (undefined4 *)FUN_00405f20(pvVar6,local_18 - *(int *)((int)pvVar6 + 0x10));
          if ((((*(byte *)((int)puVar7 + 3) & 0x1f) == 0) && ((int)local_6a8._4_4_ < 1)) &&
             ((*(byte *)((int)puVar7 + 3) & 0x40) == 0)) {
            puVar7 = (undefined4 *)&DAT_005842bc;
          }
        }
        else {
          puVar7 = (undefined4 *)&DAT_005842bc;
          if (0 < (int)local_18) {
            puVar7 = &DAT_005842c0;
          }
        }
        if ((*(byte *)((int)puVar7 + 3) & 0x40) != 0) {
          local_6a8 = CONCAT44(local_18,(uint *)local_6a8);
          uVar28 = 0x524e89;
          pSVar8 = pSStack_1c;
          pvVar6 = (void *)FUN_00406100(local_6b4,(uint)local_20,(uint)pSStack_1c,param_6);
          if (pvVar6 == (void *)0x0) {
            puVar7 = (undefined4 *)&DAT_005842c4;
          }
          else if ((int)local_18 < *(int *)((int)pvVar6 + 0x10)) {
            puVar7 = (undefined4 *)&DAT_005842c4;
          }
          else if ((int)local_18 < *(int *)((int)pvVar6 + 0x1c) + *(int *)((int)pvVar6 + 0x10)) {
            pSVar8 = (Spawn_vftable *)0x524ed0;
            puVar7 = (undefined4 *)FUN_00405f20(pvVar6,local_18 - *(int *)((int)pvVar6 + 0x10));
            if ((((*(byte *)((int)puVar7 + 3) & 0x1f) == 0) && ((int)local_6a8._4_4_ < 1)) &&
               ((*(byte *)((int)puVar7 + 3) & 0x40) == 0)) {
              puVar7 = (undefined4 *)&DAT_005842bc;
            }
          }
          else {
            puVar7 = (undefined4 *)&DAT_005842bc;
            if (0 < (int)local_18) {
              puVar7 = &DAT_005842c0;
            }
          }
          if (((*(byte *)((int)puVar7 + 3) & 0x1f) != 0) &&
             (uVar25 = local_38, uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0),
             (*(byte *)((int)puVar7 + 3) & 0x1f) != 2)) goto LAB_005282de;
        }
        param_9 = local_6d0;
        iVar19 = local_6d4;
        if (((((param_5 != 1) &&
              (((((param_5 != 2 && (param_5 != 6)) && (param_5 != 3)) &&
                ((param_5 != 4 && (param_5 != 5)))) && (param_5 != 7)))) &&
             ((param_5 != 9 && (param_5 != 10)))) && (param_5 != 0xb)) &&
           ((((param_5 != 0xc && (param_5 != 0xd)) && (param_5 != 0xe)) && (param_5 != 0xf))))
        goto LAB_0052819b;
        iVar21 = 0;
        local_708[0] = -1;
        local_708[1] = '\0';
        local_708[2] = 0;
        local_6a8 = (ulonglong)(uint)((int)local_6b0._4_4_ - (int)local_708) << 0x20;
        goto LAB_00524f80;
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < 3);
    uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
    if ((local_6cc < iVar4) &&
       (uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0), iVar4 < local_6c8)) {
      if (iVar21 != 0) {
        uStack_25 = 0xc0;
        uStack_26 = 0xff;
        puVar7 = *(undefined4 **)(iVar21 + 0x18);
        local_764 = 0xffff;
        local_28 = 0xffff;
        local_6a8 = CONCAT44(puVar7,(uint *)local_6a8);
        uStack_24 = 0;
        local_6a0 = (Spawn *)CONCAT13(0xc0,(undefined3)local_6a0);
        local_38._4_4_ = local_20;
        uStack_30._0_4_ = pSStack_1c;
        uStack_30._4_4_ = local_18;
        iVar19 = FUN_00420100(puVar7,(undefined4 *)puVar7[1],(undefined4 *)((int)&local_38 + 4));
        if (*(int *)(iVar21 + 0x1c) == 0x9249248) goto LAB_00528343;
        *(int *)(iVar21 + 0x1c) = *(int *)(iVar21 + 0x1c) + 1;
        *(int *)((int)local_6a8._4_4_ + 4) = iVar19;
        **(int **)(iVar19 + 4) = iVar19;
        uVar25 = CONCAT44(local_38._4_4_,(uint)local_38);
      }
      local_38 = uVar25;
      local_76c = 0xffff;
      local_744 = 0xffff;
      ppuVar18 = (uint **)&local_744;
      local_742 = 0xff;
      local_741 = 0xc0;
      iVar19 = iVar4;
      pSVar27 = local_20;
      pSVar8 = pSStack_1c;
      uVar3 = local_18;
      goto LAB_005282d3;
    }
    goto LAB_005282de;
  }
LAB_005282f1:
  local_6bc = local_6bc + 1;
  pvVar6 = local_6d8;
  fVar22 = local_6e0;
  if ((int)local_6e0 <= local_6bc) goto LAB_00528312;
  goto LAB_00524804;
  while( true ) {
    iVar21 = (int)(uint *)local_6a8 + 1;
    local_6a8 = CONCAT44(local_6a8._4_4_,iVar21);
    if (2 < iVar21) break;
LAB_00524f80:
    if ((local_708 + iVar21)[(int)local_6a8._4_4_] != local_708[iVar21]) {
      iVar21 = 0;
      local_6fc[0] = '\0';
      local_6fc[1] = -1;
      local_6fc[2] = 0;
      local_6a8 = (ulonglong)(uint)((int)local_6b0._4_4_ - (int)local_6fc) << 0x20;
      goto LAB_00525500;
    }
  }
  local_428 = 1;
  local_460 = 1;
  local_45c = 0;
  local_458 = 0;
  local_450 = 0;
  local_448 = (undefined4 *)0x0;
  local_444 = (undefined4 *)0x0;
  local_440 = 0;
  local_43c = 0;
  local_438[0] = 0;
  local_434 = 0;
  local_430 = 0;
  local_42c = 0;
  local_42a = 0;
  local_324 = 0;
  memset(local_424,0,0x100);
  local_320 = 0;
  local_31c = 0;
  local_318 = 0xffffffff;
  local_314 = 0xffffffff;
  uStack_310 = 0xffffffff;
  local_30c = 0;
  local_8 = 0;
  cVar2 = FUN_004ff1a0((int)local_6d8,&local_a8,param_3,local_6b8,local_6bc,iVar4,(int)local_490);
  iVar4 = local_6d0;
  if (cVar2 != '\0') {
    local_6a8._0_4_ = (uint *)(param_6 + 0xc);
    local_490[0] = (Spawn_vftable *)((param_5 == 7) + 1);
    local_6a8._4_4_ = (_Container_base0 *)local_490[0];
    if ((local_490 < *(Spawn_vftable ***)(param_6 + 0x10)) &&
       (ppSVar1 = (Spawn_vftable **)*(uint *)local_6a8, param_9 = local_6d0, ppSVar1 <= local_490))
    {
      if (*(int *)(param_6 + 0x10) == *(int *)(param_6 + 0x14)) {
        FUN_004ce8e0((void *)(param_6 + 0xc),1);
      }
      pSVar17 = *(Spawn **)(param_6 + 0x10);
      puVar7 = (undefined4 *)
               ((((int)local_490 - (int)ppSVar1) / 0x188) * 0x188 + *(int *)(param_6 + 0xc));
      local_6a8 = CONCAT44(puVar7,(uint *)local_6a8);
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar12 = (int *)(param_6 + 0xc);
      local_6c0 = pSVar17;
      local_6b0._0_4_ = pSVar17;
      local_6a0 = pSVar17;
      if (pSVar17 != (Spawn *)0x0) {
        pSVar17->vftablePtr = (Spawn_vftable *)*puVar7;
        (pSVar17->Spawn_data).offset_0x4 = puVar7[2];
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x8 = puVar7[3];
        *(undefined4 *)&(pSVar17->Spawn_data).field_0xc = puVar7[4];
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x10 = puVar7[5];
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x14 = puVar7[6];
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x18 = puVar7[7];
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x1c = puVar7[8];
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x20 = puVar7[9];
        (pSVar17->Spawn_data).offset_0x24 = puVar7[10];
        (pSVar17->Spawn_data).offset_0x28 = puVar7[0xb];
        *(undefined1 *)&(pSVar17->Spawn_data).offset_0x2c = *(undefined1 *)(puVar7 + 0xc);
        (pSVar17->Spawn_data).offset_0x30 = puVar7[0xd];
        (pSVar17->Spawn_data).offset_0x34 = puVar7[0xe];
        (pSVar17->Spawn_data).offset_0x3c = puVar7[0x10];
        (pSVar17->Spawn_data).offset_0x40 = puVar7[0x11];
        FUN_004c82a0(&(pSVar17->Spawn_data).offset_0x44,puVar7 + 0x12);
        (pSVar17->Spawn_data).offset_0x50 = puVar7[0x15];
        FUN_00413710(&(pSVar17->Spawn_data).offset_0x54,(undefined1 *)(puVar7 + 0x16));
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x16c = puVar7[0x5c];
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x170 = puVar7[0x5d];
        *(undefined4 *)&(((Spawn *)local_6b0)->Spawn_data).field_0x174 =
             *(undefined4 *)((int)local_6a8._4_4_ + 0x178);
        *(undefined4 *)&(((Spawn *)local_6b0)->Spawn_data).field_0x178 =
             *(undefined4 *)((int)local_6a8._4_4_ + 0x17c);
        *(undefined4 *)&(((Spawn *)local_6b0)->Spawn_data).field_0x17c =
             *(undefined4 *)((int)local_6a8._4_4_ + 0x180);
        *(undefined4 *)&(((Spawn *)local_6b0)->Spawn_data).field_0x180 =
             *(undefined4 *)((int)local_6a8._4_4_ + 0x184);
        piVar12 = (int *)(uint *)local_6a8;
        param_6 = local_6e8;
      }
      piVar12[1] = piVar12[1] + 0x188;
      param_9 = iVar4;
    }
    else {
      pSVar8 = local_490[0];
      if (*(Spawn_vftable ***)(param_6 + 0x10) == *(Spawn_vftable ***)(param_6 + 0x14)) {
        FUN_004ce8e0((uint *)local_6a8,1);
        pSVar8 = (Spawn_vftable *)local_6a8._4_4_;
      }
      pSVar17 = *(Spawn **)(param_6 + 0x10);
      local_6a8 = CONCAT44(pSVar17,(uint *)local_6a8);
      local_8 = CONCAT31(local_8._1_3_,2);
      local_6c0 = pSVar17;
      local_6a0 = pSVar17;
      if (pSVar17 != (Spawn *)0x0) {
        pSVar17->vftablePtr = pSVar8;
        (pSVar17->Spawn_data).offset_0x4 = local_488;
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x8 = local_484;
        *(undefined4 *)&(pSVar17->Spawn_data).field_0xc = local_480;
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x10 = local_47c;
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x14 = local_478;
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x18 = local_474;
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x1c = local_470;
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x20 = local_46c;
        (pSVar17->Spawn_data).offset_0x24 = local_468;
        (pSVar17->Spawn_data).offset_0x28 = local_464;
        *(undefined1 *)&(pSVar17->Spawn_data).offset_0x2c = local_460;
        (pSVar17->Spawn_data).offset_0x30 = local_45c;
        (pSVar17->Spawn_data).offset_0x34 = local_458;
        (pSVar17->Spawn_data).offset_0x3c = (undefined4)local_450;
        (pSVar17->Spawn_data).offset_0x40 = local_450._4_4_;
        FUN_004c82a0(&(pSVar17->Spawn_data).offset_0x44,(int *)&local_448);
        (pSVar17->Spawn_data).offset_0x50 = local_43c;
        FUN_00413710(&(pSVar17->Spawn_data).offset_0x54,(undefined1 *)local_438);
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x16c = local_320;
        *(undefined4 *)&(pSVar17->Spawn_data).field_0x170 = local_31c;
        *(undefined4 *)((int)local_6a8._4_4_ + 0x178) = local_318;
        *(undefined4 *)((int)local_6a8._4_4_ + 0x17c) = local_314;
        *(undefined4 *)((int)local_6a8._4_4_ + 0x180) = uStack_310;
        *(undefined4 *)((int)local_6a8._4_4_ + 0x184) = local_30c;
      }
      *(int *)(param_6 + 0x10) = *(int *)(param_6 + 0x10) + 0x188;
    }
    local_8 = local_8 & 0xffffff00;
  }
  if (param_9 != 0) {
    local_774 = 0;
    local_28 = 0;
    uStack_30._4_4_ = local_18;
    puVar7 = *(undefined4 **)(param_9 + 0x18);
    uStack_24 = 0;
    local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
    uStack_26 = 0;
    uStack_25 = 0x40;
    local_38._4_4_ = local_20;
    uStack_30._0_4_ = pSStack_1c;
    local_6a8 = CONCAT44(puVar7,(uint *)local_6a8);
    iVar4 = FUN_00420100(puVar7,(undefined4 *)puVar7[1],(undefined4 *)((int)&local_38 + 4));
    if (*(int *)(param_9 + 0x1c) == 0x9249248) {
LAB_00528343:
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(param_9 + 0x1c) = *(int *)(param_9 + 0x1c) + 1;
    *(int *)((int)local_6a8._4_4_ + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
  }
  local_77c = 0;
  local_74c = 0;
  local_74a = 0x4000;
  FUN_0041ff00(local_6b4,(float)local_20,(uint)pSStack_1c,local_18,(undefined1 *)&local_74c,param_6)
  ;
  local_8 = 0xffffffff;
  if (local_448 != (undefined4 *)0x0) {
    puVar7 = local_448;
    if (local_448 != local_444) {
      do {
        if ((void *)*puVar7 != (void *)0x0) {
          operator_delete((void *)*puVar7);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
        }
        puVar7 = puVar7 + 3;
      } while (puVar7 != local_444);
    }
    operator_delete(local_448);
  }
  iVar4 = local_6d4;
  uVar25 = local_38;
  uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  goto LAB_005282de;
  while( true ) {
    iVar21 = (int)(uint *)local_6a8 + 1;
    local_6a8 = CONCAT44(local_6a8._4_4_,iVar21);
    if (2 < iVar21) break;
LAB_00525500:
    if ((local_6fc + iVar21)[(int)local_6a8._4_4_] != local_6fc[iVar21]) {
      iVar21 = 0;
      local_704[0] = '\0';
      local_704[1] = '\x7f';
      local_704[2] = 0x7f;
      local_6a8 = (ulonglong)(uint)((int)local_6b0._4_4_ - (int)local_704) << 0x20;
      goto LAB_00525710;
    }
  }
  FUN_004c84b0((int)local_308);
  local_8 = 3;
  cVar2 = FUN_004ff1a0((int)local_6d8,&local_a8,param_3,local_6b8,local_6bc,iVar4,(int)local_308);
  if (cVar2 != '\0') {
    local_308[0] = (void *)0x3;
    FUN_004d6670((void *)(param_6 + 0xc),local_308);
  }
  if (param_9 != 0) {
    puVar7 = *(undefined4 **)(param_9 + 0x18);
    local_784 = 0;
    local_28 = 0;
    local_6a8 = CONCAT44(puVar7,(uint *)local_6a8);
    uStack_24 = 0;
    local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
    uStack_26 = 0;
    uStack_25 = 0x40;
    local_38._4_4_ = local_20;
    uStack_30._0_4_ = pSStack_1c;
    uStack_30._4_4_ = local_18;
    iVar21 = FUN_00420100(puVar7,(undefined4 *)puVar7[1],(undefined4 *)((int)&local_38 + 4));
    if (*(int *)(param_9 + 0x1c) == 0x9249248) goto LAB_00528343;
    *(int *)(param_9 + 0x1c) = *(int *)(param_9 + 0x1c) + 1;
    *(int *)((int)local_6a8._4_4_ + 4) = iVar21;
    **(int **)(iVar21 + 4) = iVar21;
  }
  local_748 = 0;
  local_720 = 0;
  local_71e = 0x4000;
  FUN_0041ff00(local_6b4,(float)local_20,(uint)pSStack_1c,local_18,(undefined1 *)&local_720,param_6)
  ;
  local_8 = 0xffffffff;
  uVar25 = local_38;
  uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  if (local_2c0 != (_Container_base0 *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_2c0);
    local_6a8 = CONCAT44(local_2bc,(uint *)local_6a8);
    p_Var9 = local_2bc;
    this_01 = local_2c0;
    if (local_2c0 != local_2bc) {
      do {
        if (*(int *)this_01 != 0) {
          std::_Container_base0::_Orphan_all(this_01);
          operator_delete(*(void **)this_01);
          *(undefined4 *)this_01 = 0;
          *(undefined4 *)(this_01 + 4) = 0;
          *(undefined4 *)(this_01 + 8) = 0;
          p_Var9 = local_6a8._4_4_;
        }
        this_01 = this_01 + 0xc;
      } while (this_01 != p_Var9);
    }
    operator_delete(local_2c0);
    iVar4 = local_6d4;
    uVar25 = local_38;
    uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  }
  goto LAB_005282de;
  while( true ) {
    iVar21 = (int)(uint *)local_6a8 + 1;
    local_6a8 = CONCAT44(local_6a8._4_4_,iVar21);
    if (2 < iVar21) break;
LAB_00525710:
    if ((local_704 + iVar21)[(int)local_6a8._4_4_] != local_704[iVar21]) {
      local_70c[0] = -1;
      local_70c[1] = '\x7f';
      local_70c[2] = 0;
      local_6a8._0_4_ = (uint *)0x0;
      local_6a8._4_4_ = (_Container_base0 *)((int)local_6b0._4_4_ - (int)local_70c);
      goto LAB_005259d0;
    }
  }
  uVar25 = local_38;
  uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  if (local_6e4 <= 0.5) goto LAB_005282de;
  puVar10 = FUN_00405fd0(local_6b4,(uint)local_20,(uint)pSStack_1c,local_18,param_6);
  if (((puVar10[3] & 0x1f) != 0) &&
     (uVar25 = local_38, uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0),
     (puVar10[3] & 0x1f) != 2)) goto LAB_005282de;
  iVar21 = rand();
  iVar19 = iVar4;
  if (iVar21 % 5 == 0) {
    local_4c = 0x3f800000;
    uStack_48 = 0x3f800000;
    local_44 = 0x3f800000;
    iVar4 = rand();
    local_78[0] = iVar4 % 3 + 0x29;
    uVar25 = FUN_0054a946();
    uVar26 = FUN_0054a946();
    param_6 = local_6e8;
    local_38._4_4_ =
         (SequentialBehavior_vftable *)(((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10);
    local_38._0_4_ = (int)local_20 * 0x10000;
    uStack_30._4_4_ = ((int)pSStack_1c >> 0x1f) << 0x10 | (uint)pSStack_1c >> 0x10;
    uStack_30._0_4_ = (Spawn_vftable *)((int)pSStack_1c * 0x10000);
    uStack_24 = ((int)local_18 >> 0x1f) << 0x10 | local_18 >> 0x10;
    local_28 = 0;
    uStack_26 = (undefined1)local_18;
    uStack_25 = (undefined1)(local_18 >> 8);
    local_d8 = uVar26 + CONCAT44(local_38._4_4_,(uint)local_38);
    local_d0 = uVar26 + CONCAT44(uStack_30._4_4_,(Spawn_vftable *)uStack_30);
    local_c8 = uVar25 + (ulonglong)CONCAT42(uStack_24,(short)local_18) * 0x10000;
    puVar7 = *(undefined4 **)(local_6e8 + 4);
    local_70 = local_d8;
    local_68 = local_d0;
    local_60 = local_c8;
    local_54 = (float)(int)(param_3 * -0x5a);
    local_58 = 0x3e19999a;
    local_40 = 0;
    iVar4 = FUN_004c6770(puVar7,(undefined4 *)puVar7[1],local_78);
    if (*(int *)(param_6 + 8) == 0x38e38e2) goto LAB_00528343;
    *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
    puVar7[1] = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
    param_9 = local_6d0;
    iVar19 = local_6d4;
  }
  if (param_9 != 0) {
    puVar7 = *(undefined4 **)(param_9 + 0x18);
    local_728 = 0;
    local_28 = 0;
    local_6a8 = CONCAT44(puVar7,(uint *)local_6a8);
    uStack_24 = 0;
    local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
    uStack_26 = 0;
    uStack_25 = 0x40;
    local_38._4_4_ = local_20;
    uStack_30._0_4_ = pSStack_1c;
    uStack_30._4_4_ = local_18;
    iVar4 = FUN_00420100(puVar7,(undefined4 *)puVar7[1],(undefined4 *)((int)&local_38 + 4));
    if (*(int *)(param_9 + 0x1c) == 0x9249248) goto LAB_00528343;
    *(int *)(param_9 + 0x1c) = *(int *)(param_9 + 0x1c) + 1;
    *(int *)((int)local_6a8._4_4_ + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
  }
  local_75c = 0;
  local_750 = 0;
  ppuVar18 = (uint **)&local_750;
  local_74e = 0x4000;
  pSVar27 = local_20;
  pSVar8 = pSStack_1c;
  uVar3 = local_18;
  iVar35 = param_6;
  goto LAB_005282d3;
  while( true ) {
    local_6a8._0_4_ = (uint *)((int)(uint *)local_6a8 + 1);
    if (2 < (int)(uint *)local_6a8) break;
LAB_005259d0:
    if ((local_70c + (int)(uint *)local_6a8)[(int)local_6a8._4_4_] !=
        local_70c[(int)(uint *)local_6a8]) {
      local_714[0] = -1;
      local_714[1] = '\x7f';
      local_714[2] = 0x7f;
      local_6b0._0_4_ = (Spawn *)0x0;
      local_6a8 = CONCAT44((int)local_6b0._4_4_ - (int)local_714,(uint *)local_6a8);
      goto LAB_00525dd0;
    }
  }
  FUN_004c84b0((int)local_308);
  local_8 = 4;
  local_308[0] = (void *)0x13;
  local_6b0 = FUN_0054a946();
  uVar3 = ((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10;
  local_2ec = ((int)local_18 >> 0x1f) << 0x10 | local_18 >> 0x10;
  local_2f0 = local_18 << 0x10;
  local_6a8 = CONCAT44(uVar3,local_2f0);
  local_300 = local_6b0 + CONCAT44(uVar3,(int)local_20 * 0x10000);
  local_2f8 = local_6b0 +
              CONCAT44(((int)pSStack_1c >> 0x1f) << 0x10 | (uint)pSStack_1c >> 0x10,
                       (int)pSStack_1c * 0x10000);
  local_160 = 0x3f800000;
  local_2dc = 0x3f800000;
  local_168 = 0x40000000;
  uStack_164 = 0x40400000;
  local_2e4 = 0x4040000040000000;
  local_2e8 = 0;
  FUN_004d6670((void *)(local_6e8 + 0xc),local_308);
  FUN_004c84b0((int)local_618);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_618[0] = (void *)0x14;
  uVar25 = FUN_0054a946();
  param_6 = local_6e8;
  local_5fc = ((int)local_18 >> 0x1f) << 0x10 | local_18 >> 0x10;
  local_600 = (Spawn *)(local_18 << 0x10);
  local_6a8._0_4_ = (uint *)uVar25;
  bVar23 = CARRY4((uint)(uint *)local_6a8,(int)local_20 * 0x10000);
  local_610 = (int)(uint *)local_6a8 + (int)local_20 * 0x10000;
  local_6a8._4_4_ = (_Container_base0 *)(uVar25 >> 0x20);
  local_6a8 = CONCAT44(local_6a8._4_4_,local_610);
  local_60c = (int)local_6a8._4_4_ + (((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10) +
              (uint)bVar23;
  local_608 = local_6b0 +
              CONCAT44(((int)pSStack_1c >> 0x1f) << 0x10 | (uint)pSStack_1c >> 0x10,
                       (int)pSStack_1c * 0x10000);
  local_6b0._4_4_ = (SequentialBehavior *)((ulonglong)local_608 >> 0x20);
  local_13c = 0x3f800000;
  local_5ec = 0x3f800000;
  local_144 = 0x3f800000;
  uStack_140 = 0x3f800000;
  local_5f8 = 0;
  local_5f4 = 0x3f8000003f800000;
  FUN_004d6670((void *)(local_6e8 + 0xc),local_618);
  param_9 = local_6d0;
  iVar4 = local_6d4;
  if ((local_6cc < local_6d4) && (local_6d4 < local_6c8)) {
    if (local_6d0 != 0) {
      puVar7 = *(undefined4 **)(local_6d0 + 0x18);
      local_754 = 0;
      local_28 = 0;
      local_6a8 = CONCAT44(puVar7,(uint *)local_6a8);
      uStack_24 = 0;
      local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
      uStack_26 = 0;
      uStack_25 = 0x40;
      local_38._4_4_ = local_20;
      uStack_30._0_4_ = pSStack_1c;
      uStack_30._4_4_ = local_18;
      iVar21 = FUN_00420100(puVar7,(undefined4 *)puVar7[1],(undefined4 *)((int)&local_38 + 4));
      if (*(int *)(param_9 + 0x1c) == 0x9249248) goto LAB_00528343;
      *(int *)(param_9 + 0x1c) = *(int *)(param_9 + 0x1c) + 1;
      *(int *)((int)local_6a8._4_4_ + 4) = iVar21;
      **(int **)(iVar21 + 4) = iVar21;
    }
    local_770 = 0;
    local_758 = 0;
    local_756 = 0x4000;
    FUN_0041ff00(local_6b4,(float)local_20,(uint)pSStack_1c,local_18,(undefined1 *)&local_758,
                 param_6);
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  goto LAB_00525cf4;
  while (local_6b0._0_4_ = (Spawn *)((int)(Spawn *)local_6b0 + 1), (int)(Spawn *)local_6b0 < 3) {
LAB_00525dd0:
    if ((local_714 + (int)(Spawn *)local_6b0)[(int)local_6b0._4_4_ - (int)local_714] !=
        local_714[(int)(Spawn *)local_6b0]) {
      local_71c[0] = '\x7f';
      local_71c[1] = '\x7f';
      local_71c[2] = 0;
      local_6b0._0_4_ = (Spawn *)0x0;
      local_6a8 = CONCAT44(local_71c + -(int)local_6b0._4_4_,(uint *)local_6a8);
      pSVar14 = local_6b0._4_4_;
      goto LAB_00526040;
    }
  }
  FUN_004c84b0((int)local_308);
  local_8 = 6;
  iVar4 = rand();
  local_308[0] = (void *)(iVar4 % 3 + 0x20);
  uVar25 = FUN_0054a946();
  param_6 = local_6e8;
  local_6b0._0_4_ = (Spawn *)(uVar25 >> 0x20);
  uVar3 = ((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10;
  local_2ec = ((int)local_18 >> 0x1f) << 0x10 | local_18 >> 0x10;
  local_2f0 = local_18 << 0x10;
  local_300 = uVar25 + CONCAT44(uVar3,(int)local_20 * 0x10000);
  local_2f8 = uVar25 + CONCAT44(((int)pSStack_1c >> 0x1f) << 0x10 | (uint)pSStack_1c >> 0x10,
                                (int)pSStack_1c * 0x10000);
  local_6a8 = CONCAT44(uVar3,(int)local_2f8);
  local_2e8 = param_3;
  local_16c = 0x3f800000;
  local_2dc = 0x3f800000;
  local_174 = 0x40000000;
  uStack_170 = 0x40400000;
  local_2e4 = 0x4040000040000000;
  FUN_004d6670((void *)(local_6e8 + 0xc),local_308);
  param_9 = local_6d0;
  iVar4 = local_6d4;
  if ((local_6cc < local_6d4) && (local_6d4 < local_6c8)) {
    if (local_6d0 != 0) {
      local_730 = 0;
      local_28 = 0;
      uStack_30._4_4_ = local_18;
      uStack_24 = 0;
      local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
      uStack_26 = 0;
      uStack_25 = 0x40;
      local_38._4_4_ = local_20;
      uStack_30._0_4_ = pSStack_1c;
      FUN_00528400((void *)(local_6d0 + 0x18),(undefined4 *)((int)&local_38 + 4));
    }
    local_760 = 0;
    local_724 = 0;
    local_722 = 0x4000;
    FUN_0041ff00(local_6b4,(float)local_20,(uint)pSStack_1c,local_18,(undefined1 *)&local_724,
                 param_6);
  }
  local_8 = 0xffffffff;
  uVar25 = local_38;
  uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  if (local_2c0 != (_Container_base0 *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_2c0);
    FUN_00406310((undefined4 *)local_2c0,(undefined4 *)local_2bc);
    operator_delete(local_2c0);
    uVar25 = local_38;
    uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  }
  goto LAB_005282de;
  while( true ) {
    local_6b0._0_4_ = (Spawn *)((int)(Spawn *)local_6b0 + 1);
    pSVar14 = (SequentialBehavior *)((int)&pSVar14->vftablePtr + 1);
    if (2 < (int)(Spawn *)local_6b0) break;
LAB_00526040:
    if (*(char *)&pSVar14->vftablePtr != (local_71c + -(int)local_6b0._4_4_)[(int)pSVar14]) {
      local_6c0 = (Spawn *)(local_718 + -(int)local_6b0._4_4_);
      local_718[0] = -1;
      local_718[1] = -1;
      local_718[2] = 0;
      local_6b0._0_4_ = (Spawn *)0x0;
      pSVar14 = local_6b0._4_4_;
      goto LAB_00526450;
    }
  }
  FUN_004c84b0((int)local_308);
  local_8 = 7;
  local_308[0] = (void *)0xc;
  local_6b0 = FUN_0054a946();
  uVar3 = ((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10;
  local_2ec = ((int)local_18 >> 0x1f) << 0x10 | local_18 >> 0x10;
  local_2f0 = local_18 << 0x10;
  local_300 = local_6b0 + CONCAT44(uVar3,(int)local_20 * 0x10000);
  local_6a8 = CONCAT44(uVar3,local_2f0);
  local_2f8 = local_6b0 +
              CONCAT44(((int)pSStack_1c >> 0x1f) << 0x10 | (uint)pSStack_1c >> 0x10,
                       (int)pSStack_1c * 0x10000);
  local_2e8 = rand();
  local_2e8 = local_2e8 & 0x80000003;
  if ((int)local_2e8 < 0) {
    local_2e8 = (local_2e8 - 1 | 0xfffffffc) + 1;
  }
  local_178 = 0x3f800000;
  local_2dc = 0x3f800000;
  local_180 = 0x40400000;
  uStack_17c = 0x40400000;
  local_2e4 = 0x4040000040400000;
  FUN_004d6670((void *)(local_6e8 + 0xc),local_308);
  FUN_004c84b0((int)local_618);
  local_8 = CONCAT31(local_8._1_3_,8);
  local_618[0] = (void *)0x10;
  uVar25 = FUN_0054a946();
  uVar28 = (Spawn *)local_6b0;
  local_5fc = ((int)local_18 >> 0x1f) << 0x10 | local_18 >> 0x10;
  local_6c0 = (Spawn *)(local_18 << 0x10);
  local_6a8._0_4_ = (uint *)uVar25;
  bVar23 = CARRY4((uint)(uint *)local_6a8,(int)local_20 * 0x10000);
  local_610 = (int)(uint *)local_6a8 + (int)local_20 * 0x10000;
  local_6a8._4_4_ = (_Container_base0 *)(uVar25 >> 0x20);
  local_6a8 = CONCAT44(local_6a8._4_4_,local_610);
  local_60c = (int)local_6a8._4_4_ + (((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10) +
              (uint)bVar23;
  local_608 = local_6b0 +
              CONCAT44(((int)pSStack_1c >> 0x1f) << 0x10 | (uint)pSStack_1c >> 0x10,
                       (int)pSStack_1c * 0x10000);
  local_600 = local_6c0;
  local_5f8 = rand();
  param_6 = local_6e8;
  local_5f8 = local_5f8 & 0x80000003;
  if ((int)local_5f8 < 0) {
    local_5f8 = (local_5f8 - 1 | 0xfffffffc) + 1;
  }
  local_148 = 0x3f000000;
  local_5ec = 0x3f000000;
  local_150 = 0x3f800000;
  uStack_14c = 0x3f800000;
  local_5f4 = 0x3f8000003f800000;
  FUN_004d6670((void *)(local_6e8 + 0xc),local_618);
  uVar25 = FUN_0054a946();
  local_88._4_4_ = local_6b0._4_4_;
  local_38._4_4_ =
       (SequentialBehavior_vftable *)(((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10);
  local_38._0_4_ = (int)local_20 << 0x10;
  uStack_30._4_4_ = ((int)pSStack_1c >> 0x1f) << 0x10 | (uint)pSStack_1c >> 0x10;
  uStack_30._0_4_ = (Spawn_vftable *)((int)pSStack_1c << 0x10);
  uStack_24 = ((int)local_18 >> 0x1f) << 0x10 | local_18 >> 0x10;
  local_28 = 0;
  uStack_26 = (undefined1)local_18;
  uStack_25 = (undefined1)(local_18 >> 8);
  local_88._0_4_ = uVar28;
  local_80 = 0;
  local_90 = uVar25;
  puVar11 = FUN_00402cb0(&local_38,local_c0,(uint *)&local_90);
  local_610 = *puVar11;
  local_60c = puVar11[1];
  local_608._0_4_ = puVar11[2];
  local_608._4_4_ = puVar11[3];
  local_600 = (Spawn *)puVar11[4];
  local_5fc = puVar11[5];
  FUN_004d6670((void *)(param_6 + 0xc),local_618);
  local_5f8 = rand();
  param_9 = local_6d0;
  iVar4 = local_6d4;
  local_5f8 = local_5f8 & 0x80000003;
  if ((int)local_5f8 < 0) {
    local_5f8 = (local_5f8 - 1 | 0xfffffffc) + 1;
  }
  if ((local_6cc < local_6d4) && (local_6d4 < local_6c8)) {
    if (local_6d0 != 0) {
      local_738 = 0;
      local_28 = 0;
      uStack_30._4_4_ = local_18;
      uStack_24 = 0;
      local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
      uStack_26 = 0;
      uStack_25 = 0x40;
      local_38._4_4_ = local_20;
      uStack_30._0_4_ = pSStack_1c;
      FUN_00528400((void *)(local_6d0 + 0x18),(undefined4 *)((int)&local_38 + 4));
    }
    local_780 = 0;
    local_72c = 0;
    local_72a = 0x4000;
    FUN_0041ff00(local_6b4,(float)local_20,(uint)pSStack_1c,local_18,(undefined1 *)&local_72c,
                 param_6);
  }
  local_8 = CONCAT31(local_8._1_3_,7);
LAB_00525cf4:
  if (local_5d0 != (undefined4 *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_5d0);
    FUN_00406310(local_5d0,local_5cc);
    operator_delete(local_5d0);
    local_5d0 = (undefined4 *)0x0;
    local_5cc = (undefined4 *)0x0;
    local_5c8 = 0;
  }
  local_8 = 0xffffffff;
  uVar25 = local_38;
  uVar26 = local_6b0;
  if (local_2c0 != (_Container_base0 *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_2c0);
    FUN_00406310((undefined4 *)local_2c0,(undefined4 *)local_2bc);
    operator_delete(local_2c0);
    uVar25 = local_38;
    uVar26 = local_6b0;
  }
  goto LAB_005282de;
  while( true ) {
    local_6b0._0_4_ = (Spawn *)((int)&((Spawn *)local_6b0)->vftablePtr + 1);
    pSVar14 = (SequentialBehavior *)((int)&pSVar14->vftablePtr + 1);
    if (2 < (int)(Spawn *)local_6b0) break;
LAB_00526450:
    iVar4 = iVar19;
    if (*(char *)&pSVar14->vftablePtr !=
        *(char *)((int)&pSVar14->vftablePtr + (int)&local_6c0->vftablePtr)) {
      local_710[0] = '?';
      local_710[1] = '\0';
      local_710[2] = 0;
      local_6b0._0_4_ = (Spawn *)0x0;
      local_6c0 = (Spawn *)((int)local_6b0._4_4_ - (int)local_710);
      goto LAB_00526650;
    }
  }
  local_4c = 0x3f800000;
  uStack_48 = 0x3f800000;
  local_44 = 0x3f800000;
  local_78[0] = 0xd;
  uVar25 = FUN_0054a946();
  local_38._4_4_ =
       (SequentialBehavior_vftable *)(((int)local_20 >> 0x1f) << 0x10 | (uint)local_20 >> 0x10);
  local_38._0_4_ = (int)local_20 << 0x10;
  uStack_30._4_4_ = ((int)pSStack_1c >> 0x1f) << 0x10 | (uint)pSStack_1c >> 0x10;
  uStack_30._0_4_ = (Spawn_vftable *)((int)pSStack_1c << 0x10);
  uStack_24 = ((int)local_18 >> 0x1f) << 0x10 | local_18 >> 0x10;
  local_28 = 0;
  uStack_26 = (undefined1)local_18;
  uStack_25 = (undefined1)(local_18 >> 8);
  local_80 = 0;
  local_90 = uVar25;
  local_88 = uVar25;
  puVar11 = FUN_00402cb0(&local_38,local_c0,(uint *)&local_90);
  local_154 = 0x3ecccccd;
  local_70 = *(longlong *)puVar11;
  local_68 = *(longlong *)(puVar11 + 2);
  local_60 = *(longlong *)(puVar11 + 4);
  local_44 = 0x3ecccccd;
  local_15c = 0x3f19999a;
  uStack_158 = 0x3f000000;
  local_58 = 0x3dcccccd;
  local_54 = 0.0;
  local_40 = 1;
  local_4c = 0x3f19999a;
  uStack_48 = 0x3f000000;
  FUN_00528450((void *)(param_6 + 4),local_78);
  uVar25 = CONCAT44(local_38._4_4_,(uint)local_38);
  uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  uStack_30 = CONCAT44(uStack_30._4_4_,(Spawn_vftable *)uStack_30);
  if ((iVar19 <= local_6cc) ||
     (uVar25 = CONCAT44(local_38._4_4_,(uint)local_38),
     uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0),
     uStack_30 = CONCAT44(uStack_30._4_4_,(Spawn_vftable *)uStack_30), local_6c8 <= iVar19))
  goto LAB_005282de;
  if (param_9 != 0) {
    local_768 = 0;
    local_28 = 0;
    uStack_30._4_4_ = local_18;
    uStack_24 = 0;
    local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
    uStack_26 = 0;
    uStack_25 = 0x40;
    local_38._4_4_ = local_20;
    uStack_30._0_4_ = pSStack_1c;
    FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
  }
  local_778 = 0;
  ppuVar18 = &local_6f0;
  local_6f0 = (uint *)0x40000000;
  pSVar27 = local_20;
  pSVar8 = pSStack_1c;
  uVar3 = local_18;
  goto LAB_005282d3;
  while (local_6b0._0_4_ = (Spawn *)((int)&((Spawn *)local_6b0)->vftablePtr + 1),
        (int)(Spawn *)local_6b0 < 3) {
LAB_00526650:
    if ((local_710 + (int)(Spawn *)local_6b0)[(int)local_6b0._4_4_ - (int)local_710] !=
        local_710[(int)(Spawn *)local_6b0]) {
      local_700[0] = '\0';
      local_700[1] = '\0';
      local_700[2] = 0xff;
      local_6b0._0_4_ = (Spawn *)0x0;
      goto LAB_005267e0;
    }
  }
  local_4c = 0x3f800000;
  uStack_48 = 0x3f800000;
  local_44 = 0x3f800000;
  local_78[0] = 0x30;
  uVar25 = FUN_0054a946();
  uStack_24 = (uint)(uVar25 >> 0x20);
  local_28 = (undefined2)uVar25;
  uStack_26 = (undefined1)(uVar25 >> 0x10);
  uStack_25 = (undefined1)(uVar25 >> 0x18);
  puVar11 = (uint *)&local_38;
  puVar13 = local_c0;
  local_38 = uVar25;
  uStack_30 = uVar25;
  piVar12 = FUN_004d99d0(&local_90,(uint *)&local_20);
  puVar11 = FUN_00402cb0(piVar12,puVar13,puVar11);
  local_70 = *(longlong *)puVar11;
  local_68 = *(longlong *)(puVar11 + 2);
  local_60 = *(longlong *)(puVar11 + 4);
  local_54 = (float)(int)(param_3 * -0x5a);
  local_58 = 0x3d851eb8;
  local_40 = 0;
  FUN_00528450((void *)(param_6 + 4),local_78);
  uVar25 = local_38;
  uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  if ((iVar19 <= local_6cc) ||
     (uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0), local_6c8 <= iVar19))
  goto LAB_005282de;
  if (param_9 != 0) {
    local_734 = 0;
    local_28 = 0;
    uStack_30._4_4_ = local_18;
    uStack_24 = 0;
    local_6a0 = (Spawn *)CONCAT13(0x40,(undefined3)local_6a0);
    uStack_26 = 0;
    uStack_25 = 0x40;
    local_38._4_4_ = local_20;
    uStack_30._0_4_ = pSStack_1c;
    FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
  }
  local_73c = 0;
  ppuVar18 = &local_6f8;
  local_6f8 = (uint *)0x40000000;
  pSVar27 = local_20;
  pSVar8 = pSStack_1c;
  uVar3 = local_18;
  goto LAB_005282d3;
  while (local_6b0._0_4_ = (Spawn *)((int)&((Spawn *)local_6b0)->vftablePtr + 1),
        (int)(Spawn *)local_6b0 < 3) {
LAB_005267e0:
    if ((local_700 + (int)(Spawn *)local_6b0)[(int)local_6b0._4_4_ - (int)local_700] !=
        local_700[(int)(Spawn *)local_6b0]) {
      puVar20 = FUN_00401040(local_79c,0xff,0,0xff);
      cVar2 = FUN_0042edb0(local_6b0._4_4_,(int)puVar20);
      if (cVar2 != '\0') {
        uVar25 = local_38;
        uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
        if (0.5 < local_6e4) {
          FUN_004c84b0((int)local_308);
          local_8 = 9;
          cVar2 = FUN_004ff1a0((int)local_6d8,&local_a8,param_3,local_6b8,local_6bc,iVar19,
                               (int)local_308);
          if (cVar2 != '\0') {
            iVar21 = rand();
            local_308[0] = (void *)(iVar21 % 3 + 0x2f);
            FUN_004d6670((void *)(param_6 + 0xc),local_308);
          }
          if ((iVar19 <= local_6cc) || (local_6c8 <= iVar19)) goto LAB_00526c10;
          if (param_9 != 0) {
            FUN_0041d7e0((int)&local_38 + 4);
            uVar33 = 0x40;
            puVar20 = FUN_00401040(local_7e8,0,0,0);
            puVar20 = FUN_00401370(local_848,puVar20,uVar33);
            FUN_00405610(&local_28,puVar20);
            FUN_00401060((void *)((int)&local_38 + 4),&local_20);
            FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
          }
          uVar25 = CONCAT44(param_6,0x40);
          puVar15 = FUN_00401040(local_7f0,0,0,0);
          puVar20 = local_850;
          goto LAB_00526bd7;
        }
        goto LAB_005282de;
      }
      puVar20 = FUN_00401040(local_800,0,0xff,0xff);
      uVar28 = 0x526c4a;
      cVar2 = FUN_0042edb0(local_6b0._4_4_,(int)puVar20);
      if (cVar2 == '\0') {
        puVar20 = FUN_00401040(local_804,0,0,0x7f);
        uVar28 = 0x527257;
        cVar2 = FUN_0042edb0(local_6b0._4_4_,(int)puVar20);
        if (cVar2 == '\0') {
          puVar20 = FUN_00401040(local_7bc,0,0xff,0x7f);
          uVar28 = 0x5273cd;
          cVar2 = FUN_0042edb0(local_6b0._4_4_,(int)puVar20);
          if (cVar2 == '\0') {
            puVar20 = FUN_00401040(local_798,0,0x7f,0);
            uVar28 = 0x527824;
            cVar2 = FUN_0042edb0(local_6b0._4_4_,(int)puVar20);
            if (cVar2 != '\0') {
              FUN_004c84b0((int)local_308);
              local_8 = 0x11;
              uVar34 = 0x527844;
              iVar21 = rand();
              local_308[0] = (void *)(iVar21 % 9 + 0x38);
              uVar32 = 0;
              uVar31 = 0x527861;
              FUN_004cde40(&stack0xfffff768,0);
              uVar25 = 0x3fe0000000000000;
              FUN_004dab30((ulonglong *)&stack0xfffff760);
              FUN_004dab30((ulonglong *)&stack0xfffff758);
              puVar13 = FUN_00406380(local_c0,(int)uVar25,(int)(uVar25 >> 0x20),uVar31,uVar32,uVar28
                                     ,uVar34);
              puVar11 = (uint *)&local_90;
              piVar12 = FUN_004d99d0(&local_38,(uint *)&local_20);
              puVar11 = FUN_00402cb0(piVar12,puVar11,puVar13);
              FUN_00402a40(&local_300,puVar11);
              local_2e8 = rand();
              local_2e8 = local_2e8 & 0x80000003;
              if ((int)local_2e8 < 0) {
                local_2e8 = (local_2e8 - 1 | 0xfffffffc) + 1;
              }
              if ((int)local_308[0] < 0x3c) {
                uVar32 = 0x3f000000;
                uVar31 = 0x3f000000;
                uVar28 = 0x3f000000;
                puVar20 = local_69c;
              }
              else {
                uVar32 = 0x3f800000;
                uVar31 = 0x3f800000;
                uVar28 = 0x3f800000;
                puVar20 = local_678;
              }
              puVar7 = FUN_00401080(puVar20,uVar28,uVar31,uVar32);
              FUN_00401060(&local_2e4,puVar7);
              FUN_004d6670((void *)(param_6 + 0xc),local_308);
              if ((iVar19 <= local_6cc) || (local_6c8 <= iVar19)) goto LAB_00526c10;
              if (param_9 != 0) {
                FUN_0041d7e0((int)&local_38 + 4);
                uVar33 = 0x40;
                puVar20 = FUN_00401040(local_7a0,0,0,0);
                puVar20 = FUN_00401370(local_844,puVar20,uVar33);
                FUN_00405610(&local_28,puVar20);
                FUN_00401060((void *)((int)&local_38 + 4),&local_20);
                FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
              }
              uVar25 = CONCAT44(param_6,0x40);
              puVar15 = FUN_00401040(local_7a8,0,0,0);
              puVar20 = local_864;
              goto LAB_00526bd7;
            }
            puVar20 = FUN_00401040(local_7b0,0x7f,0,0x7f);
            cVar2 = FUN_0042edb0(local_6b0._4_4_,(int)puVar20);
            iVar21 = param_9;
            if (cVar2 == '\0') goto LAB_0052819b;
            pSVar17 = operator_new(0x10f0);
            if (pSVar17 == (Spawn *)0x0) {
              pSVar17 = (Spawn *)0x0;
            }
            else {
              pSVar17 = cube::Spawn::Spawn(pSVar17);
            }
            (pSVar17->Spawn_data).offset_0x24 = 3;
            local_6a0 = pSVar17;
            uVar3 = rand();
            uVar3 = uVar3 & 0x80000003;
            if ((int)uVar3 < 0) {
              uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
            }
            (pSVar17->Spawn_data).offset_0x28 = uVar3;
            (pSVar17->Spawn_data).offset_0x50 = (float)(int)((2 - param_3) * 0x5a);
            FUN_00401080(local_66c,0x3f000000,0x3f000000,0x3f000000);
            FUN_00402510((int)&local_90);
            puVar11 = (uint *)&local_90;
            puVar13 = local_c0;
            piVar12 = FUN_004d99d0(&local_38,(uint *)&local_20);
            puVar11 = FUN_00402cb0(piVar12,puVar13,puVar11);
            FUN_00402a40(&(pSVar17->Spawn_data).field_0xc,puVar11);
            *(undefined2 *)&(pSVar17->Spawn_data).field_0x34c = 4;
            (pSVar17->Spawn_data).field_0x359 = 6;
            iVar4 = FUN_004013d0(&local_20,1);
            local_6a8 = CONCAT44(local_6a8._4_4_,iVar4);
            uVar25 = 0x527acb;
            iVar4 = FUN_004013d0(&local_20,0);
            local_6a8 = CONCAT44(iVar4,(uint *)local_6a8);
            uVar3 = *(uint *)local_6a8;
            uVar29 = 0x527ae3;
            FUN_004cde40(&stack0xfffff768,uVar3);
            FUN_004cde40(&stack0xfffff760,*(uint *)local_6a8._4_4_);
            uVar3 = FUN_004d2340(local_6b4,uVar29,uVar3,uVar25);
            (pSVar17->Spawn_data).offset_0x30 = uVar3;
            switch(param_5) {
            case 6:
              *(undefined1 *)&(pSVar17->Spawn_data).offset_0x2c = 0x83;
              break;
            case 7:
              (pSVar17->Spawn_data).offset_0x30 = 0x14;
              uVar3 = rand();
              uVar3 = uVar3 & 0x80000001;
              if ((int)uVar3 < 0) {
                uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
              }
              (pSVar17->Spawn_data).offset_0x28 = uVar3 + 2;
              *(undefined1 *)&(pSVar17->Spawn_data).offset_0x2c = 0x89;
              break;
            case 9:
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x76 = 0x40;
              (pSVar17->Spawn_data).offset_0x30 = 0x14;
              (pSVar17->Spawn_data).offset_0x28 = 2;
              *(undefined1 *)&(pSVar17->Spawn_data).offset_0x2c = 1;
              (pSVar17->Spawn_data).field_0x8c4 = 3;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x8c5 = (char)(iVar4 % 3) + '\x0f';
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x8d0 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x8d4 =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x8d1 = 1;
              (pSVar17->Spawn_data).field_0x694 = 7;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x6a0 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x6a4 =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x6a1 = 1;
              (pSVar17->Spawn_data).field_0x34c = 4;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x358 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x35c =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x359 = 1;
              (pSVar17->Spawn_data).field_0x464 = 6;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x470 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x474 =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x471 = 1;
              (pSVar17->Spawn_data).field_0x57c = 5;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x588 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x58c =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x589 = 1;
              break;
            case 10:
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x76 = 0x40;
              (pSVar17->Spawn_data).offset_0x30 = 0x14;
              (pSVar17->Spawn_data).offset_0x28 = 2;
              *(undefined1 *)&(pSVar17->Spawn_data).offset_0x2c = 2;
              (pSVar17->Spawn_data).field_0x8c4 = 3;
              uVar3 = rand();
              uVar3 = uVar3 & 0x80000001;
              if ((int)uVar3 < 0) {
                uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
              }
              (pSVar17->Spawn_data).field_0x8c5 = (char)uVar3 + '\x06';
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x8d0 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x8d4 =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x8d1 = 2;
              (pSVar17->Spawn_data).field_0x694 = 7;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x6a0 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x6a4 =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x6a1 = 0x1a;
              (pSVar17->Spawn_data).field_0x34c = 4;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x358 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x35c =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x359 = 0x1a;
              (pSVar17->Spawn_data).field_0x464 = 6;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x470 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x474 =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x471 = 0x1a;
              (pSVar17->Spawn_data).field_0x57c = 5;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x588 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x58c =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x589 = 0x1a;
              break;
            case 0xb:
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x76 = 0x40;
              (pSVar17->Spawn_data).offset_0x30 = 0x14;
              (pSVar17->Spawn_data).offset_0x28 = 2;
              *(undefined1 *)&(pSVar17->Spawn_data).offset_0x2c = 4;
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x8c4 = 0x503;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x8d0 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x8d4 =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x8d1 = 1;
              (pSVar17->Spawn_data).field_0x694 = 7;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x6a0 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x6a4 =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x6a1 = 0x1b;
              (pSVar17->Spawn_data).field_0x34c = 4;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x358 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x35c =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x359 = 0x1b;
              (pSVar17->Spawn_data).field_0x464 = 6;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x470 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x474 =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x471 = 0x1b;
              (pSVar17->Spawn_data).field_0x57c = 5;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x588 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x58c =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x589 = 0x1b;
              break;
            case 0xc:
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x76 = 0x40;
              (pSVar17->Spawn_data).offset_0x30 = 0x14;
              (pSVar17->Spawn_data).offset_0x28 = 2;
              *(undefined1 *)&(pSVar17->Spawn_data).offset_0x2c = 3;
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x8c4 = 0xa03;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x8d0 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x8d4 =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x8d1 = 2;
              (pSVar17->Spawn_data).field_0x694 = 7;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x6a0 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x6a4 =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x6a1 = 0x19;
              (pSVar17->Spawn_data).field_0x34c = 4;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x358 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x35c =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x359 = 0x19;
              (pSVar17->Spawn_data).field_0x464 = 6;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x470 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x474 =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x471 = 0x19;
              (pSVar17->Spawn_data).field_0x57c = 5;
              iVar4 = rand();
              (pSVar17->Spawn_data).field_0x588 = (char)(iVar4 % 5);
              *(undefined2 *)&(pSVar17->Spawn_data).field_0x58c =
                   *(undefined2 *)&(pSVar17->Spawn_data).offset_0x30;
              (pSVar17->Spawn_data).field_0x589 = 0x19;
              break;
            case 0xd:
              *(undefined1 *)&(pSVar17->Spawn_data).offset_0x2c = 0x85;
              break;
            case 0xe:
              *(undefined1 *)&(pSVar17->Spawn_data).offset_0x2c = 0x86;
              break;
            case 0xf:
              *(undefined1 *)&(pSVar17->Spawn_data).offset_0x2c = 0x87;
            }
            local_6c0 = operator_new(0xc);
            local_8 = 0x12;
            if (local_6c0 == (Spawn *)0x0) {
              local_6b0._4_4_ = (SequentialBehavior *)0x0;
            }
            else {
              local_6b0._4_4_ =
                   cube::SequentialBehavior::SequentialBehavior((SequentialBehavior *)local_6c0);
            }
            local_8 = 0xffffffff;
            local_6c0 = operator_new(0x14);
            local_8 = 0x13;
            if (local_6c0 == (Spawn *)0x0) {
              local_6c0 = (Spawn *)0x0;
            }
            else {
              local_6c0 = (Spawn *)cube::CombatBehavior::CombatBehavior
                                             ((CombatBehavior *)local_6c0,0x41a00000);
            }
            local_8 = 0xffffffff;
            FUN_004d6620(&(local_6b0._4_4_)->SequentialBehavior_data,&local_6c0);
            local_6c0 = operator_new(4);
            local_8 = 0x14;
            if (local_6c0 == (Spawn *)0x0) {
              local_6c0 = (Spawn *)0x0;
            }
            else {
              local_6c0 = (Spawn *)cube::LookAtPlayerBehavior::LookAtPlayerBehavior
                                             ((LookAtPlayerBehavior *)local_6c0);
            }
            local_8 = 0xffffffff;
            FUN_004d6620(&(local_6b0._4_4_)->SequentialBehavior_data,&local_6c0);
            local_6c0 = operator_new(0x1c);
            local_8 = 0x15;
            if (local_6c0 == (Spawn *)0x0) {
              local_6b0._0_4_ = (Spawn *)0x0;
            }
            else {
              local_6b0._0_4_ =
                   (Spawn *)cube::WalkPathBehavior::WalkPathBehavior
                                      ((WalkPathBehavior *)local_6c0,0x40000000);
            }
            local_8 = 0xffffffff;
            FUN_004e1420(&((Spawn *)local_6b0)->Spawn_data,
                         (undefined4 *)&(pSVar17->Spawn_data).field_0xc);
            local_6c0 = (Spawn *)local_6b0;
            FUN_004d6620(&(local_6b0._4_4_)->SequentialBehavior_data,&local_6c0);
            *(SequentialBehavior **)&pSVar17[1].Spawn_data.field_0x120 = local_6b0._4_4_;
            FUN_004f2be0((void *)(param_6 + 0x18),&local_6a0);
            iVar19 = local_6d4;
            iVar4 = local_6d4;
            uVar25 = local_38;
            uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
            if ((local_6d4 <= local_6cc) ||
               (uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0), local_6c8 <= local_6d4))
            goto LAB_005282de;
            if (param_9 != 0) {
              FUN_0041d7e0((int)&local_38 + 4);
              uVar33 = 0x40;
              puVar20 = FUN_00401040(local_7b8,0,0,0);
              puVar20 = FUN_00401370(local_84c,puVar20,uVar33);
              FUN_00405610(&local_28,puVar20);
              FUN_00401060((void *)((int)&local_38 + 4),&local_20);
              FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
            }
            uVar25 = CONCAT44(param_6,0x40);
            puVar20 = FUN_00401040(local_7c0,0,0,0);
            ppuVar18 = (uint **)FUN_00401370(local_818,puVar20,(char)uVar25);
            iVar35 = (int)(uVar25 >> 0x20);
            puVar11 = (uint *)FUN_004013d0(&local_20,2);
            uVar3 = *puVar11;
            pSVar8 = (Spawn_vftable *)*(uint *)local_6a8;
            pSVar27 = *(SequentialBehavior_vftable **)local_6a8._4_4_;
            goto LAB_005282d3;
          }
          if (param_5 == 0xd) {
            uVar34 = 0x5273ec;
            FUN_004c84b0((int)local_308);
            local_8 = 0xe;
            local_308[0] = (void *)0x48;
            uVar32 = 0;
            uVar31 = 0x527409;
            FUN_004cde40(&stack0xfffff768,0);
            uVar25 = 0x3fe0000000000000;
            FUN_004dab30((ulonglong *)&stack0xfffff760);
            FUN_004dab30((ulonglong *)&stack0xfffff758);
            puVar13 = FUN_00406380(local_c0,(int)uVar25,(int)(uVar25 >> 0x20),uVar31,uVar32,uVar28,
                                   uVar34);
            puVar11 = (uint *)&local_90;
            piVar12 = FUN_004d99d0(&local_38,(uint *)&local_20);
            puVar11 = FUN_00402cb0(piVar12,puVar11,puVar13);
            FUN_00402a40(&local_300,puVar11);
            local_2e8 = -param_3;
            puVar7 = FUN_00401080(local_648,0x3f800000,0x3f800000,0x3f800000);
            FUN_00401060(&local_2e4,puVar7);
            FUN_004d6670((void *)(param_6 + 0xc),local_308);
            if ((iVar19 <= local_6cc) || (local_6c8 <= iVar19)) goto LAB_00526c10;
            if (param_9 != 0) {
              FUN_0041d7e0((int)&local_38 + 4);
              uVar33 = 0x40;
              puVar20 = FUN_00401040(local_7fc,0,0,0);
              puVar20 = FUN_00401370(local_82c,puVar20,uVar33);
              FUN_00405610(&local_28,puVar20);
              FUN_00401060((void *)((int)&local_38 + 4),&local_20);
              FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
            }
            uVar25 = CONCAT44(param_6,0x40);
            puVar15 = FUN_00401040(local_7c4,0,0,0);
            puVar20 = local_86c;
            goto LAB_00526bd7;
          }
          if (param_5 == 0xe) {
            uVar34 = 0x527551;
            FUN_004c84b0((int)local_308);
            local_8 = 0xf;
            local_308[0] = (void *)0x4c;
            uVar32 = 0;
            uVar31 = 0x52756e;
            FUN_004cde40(&stack0xfffff768,0);
            uVar25 = 0x3fe0000000000000;
            FUN_004dab30((ulonglong *)&stack0xfffff760);
            FUN_004dab30((ulonglong *)&stack0xfffff758);
            puVar13 = FUN_00406380(local_c0,(int)uVar25,(int)(uVar25 >> 0x20),uVar31,uVar32,uVar28,
                                   uVar34);
            puVar11 = (uint *)&local_90;
            piVar12 = FUN_004d99d0(&local_38,(uint *)&local_20);
            puVar11 = FUN_00402cb0(piVar12,puVar11,puVar13);
            FUN_00402a40(&local_300,puVar11);
            local_2e8 = -param_3;
            puVar7 = FUN_00401080(local_660,0x3fe66666,0x3fe66666,0x3f99999a);
            FUN_00401060(&local_2e4,puVar7);
            FUN_004d6670((void *)(param_6 + 0xc),local_308);
            if ((local_6cc < iVar19) && (iVar19 < local_6c8)) {
              if (param_9 != 0) {
                FUN_0041d7e0((int)&local_38 + 4);
                uVar33 = 0x40;
                puVar20 = FUN_00401040(local_7ec,0,0,0);
                puVar20 = FUN_00401370(local_834,puVar20,uVar33);
                FUN_00405610(&local_28,puVar20);
                FUN_00401060((void *)((int)&local_38 + 4),&local_20);
                FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
              }
              uVar25 = CONCAT44(param_6,0x40);
              puVar15 = FUN_00401040(local_7cc,0,0,0);
              puVar20 = local_85c;
              goto LAB_00526bd7;
            }
          }
          else {
            uVar25 = local_38;
            uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
            if (param_5 != 0xf) goto LAB_005282de;
            uVar34 = 0x5276b6;
            FUN_004c84b0((int)local_308);
            local_8 = 0x10;
            local_308[0] = (void *)0x4a;
            uVar32 = 0;
            uVar31 = 0x5276d3;
            FUN_004cde40(&stack0xfffff768,0);
            uVar25 = 0x3fe0000000000000;
            FUN_004dab30((ulonglong *)&stack0xfffff760);
            FUN_004dab30((ulonglong *)&stack0xfffff758);
            puVar13 = FUN_00406380(local_c0,(int)uVar25,(int)(uVar25 >> 0x20),uVar31,uVar32,uVar28,
                                   uVar34);
            puVar11 = (uint *)&local_90;
            piVar12 = FUN_004d99d0(&local_38,(uint *)&local_20);
            puVar11 = FUN_00402cb0(piVar12,puVar11,puVar13);
            FUN_00402a40(&local_300,puVar11);
            local_2e8 = -param_3;
            puVar7 = FUN_00401080(local_684,0x3fc00000,0x3fc00000,0x40400000);
            FUN_00401060(&local_2e4,puVar7);
            FUN_004d6670((void *)(param_6 + 0xc),local_308);
            if ((local_6cc < iVar19) && (iVar19 < local_6c8)) {
              if (param_9 != 0) {
                FUN_0041d7e0((int)&local_38 + 4);
                uVar33 = 0x40;
                puVar20 = FUN_00401040(local_80c,0,0,0);
                puVar20 = FUN_00401370(local_83c,puVar20,uVar33);
                FUN_00405610(&local_28,puVar20);
                FUN_00401060((void *)((int)&local_38 + 4),&local_20);
                FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
              }
              uVar25 = CONCAT44(param_6,0x40);
              puVar15 = FUN_00401040(local_794,0,0,0);
              puVar20 = local_814;
              goto LAB_00526bd7;
            }
          }
        }
        else {
          uVar25 = local_38;
          uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
          if (param_5 != 0xd) goto LAB_005282de;
          uVar34 = 0x527274;
          FUN_004c84b0((int)local_308);
          local_8 = 0xd;
          local_308[0] = (void *)0x4d;
          uVar32 = 0;
          uVar31 = 0x527291;
          FUN_004cde40(&stack0xfffff768,0);
          uVar25 = 0x3fe0000000000000;
          FUN_004dab30((ulonglong *)&stack0xfffff760);
          FUN_004dab30((ulonglong *)&stack0xfffff758);
          puVar13 = FUN_00406380(local_c0,(int)uVar25,(int)(uVar25 >> 0x20),uVar31,uVar32,uVar28,
                                 uVar34);
          puVar11 = (uint *)&local_90;
          piVar12 = FUN_004d99d0(&local_38,(uint *)&local_20);
          puVar11 = FUN_00402cb0(piVar12,puVar11,puVar13);
          FUN_00402a40(&local_300,puVar11);
          local_2e8 = -param_3;
          puVar7 = FUN_00401080(local_63c,0x3fe66666,0x3fe66666,0x3f99999a);
          FUN_00401060(&local_2e4,puVar7);
          FUN_004d6670((void *)(param_6 + 0xc),local_308);
          if (param_9 != 0) {
            FUN_0041d7e0((int)&local_38 + 4);
            uVar33 = 0x40;
            puVar20 = FUN_00401040(local_7b4,0,0,0);
            puVar20 = FUN_00401370(local_824,puVar20,uVar33);
            FUN_00405610(&local_28,puVar20);
            FUN_00401060((void *)((int)&local_38 + 4),&local_20);
            FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
          }
          uVar25 = CONCAT44(param_6,0x40);
          puVar15 = FUN_00401040(local_7e4,0,0,0);
          puVar20 = local_854;
LAB_00526bd7:
          puVar20 = FUN_00401370(puVar20,puVar15,(char)uVar25);
          iVar19 = (int)(uVar25 >> 0x20);
          piVar12 = (int *)FUN_004013d0(&local_20,2);
          iVar21 = *piVar12;
          puVar11 = (uint *)FUN_004013d0(&local_20,1);
          uVar3 = *puVar11;
          pfVar16 = (float *)FUN_004013d0(&local_20,0);
          FUN_0041ff00(local_6b4,*pfVar16,uVar3,iVar21,puVar20,iVar19);
        }
      }
      else if (param_5 == 0xd) {
        uVar34 = 0x526c69;
        FUN_004c84b0((int)local_308);
        local_8 = 10;
        local_308[0] = (void *)0x47;
        uVar32 = 0;
        uVar31 = 0x526c86;
        FUN_004cde40(&stack0xfffff768,0);
        uVar25 = 0x3fe0000000000000;
        FUN_004dab30((ulonglong *)&stack0xfffff760);
        FUN_004dab30((ulonglong *)&stack0xfffff758);
        puVar13 = FUN_00406380(local_c0,(int)uVar25,(int)(uVar25 >> 0x20),uVar31,uVar32,uVar28,
                               uVar34);
        puVar11 = (uint *)&local_90;
        piVar12 = FUN_004d99d0(&local_38,(uint *)&local_20);
        puVar11 = FUN_00402cb0(piVar12,puVar11,puVar13);
        FUN_00402a40(&local_300,puVar11);
        local_2e8 = -param_3;
        puVar7 = FUN_00401080(local_654,0x40400000,0x40400000,0x40c00000);
        FUN_00401060(&local_2e4,puVar7);
        FUN_004d6670((void *)(param_6 + 0xc),local_308);
        if ((local_6cc < iVar19) && (iVar19 < local_6c8)) {
          if (param_9 != 0) {
            FUN_0041d7e0((int)&local_38 + 4);
            uVar33 = 0x40;
            puVar20 = FUN_00401040(local_808,0,0,0);
            puVar20 = FUN_00401370(local_858,puVar20,uVar33);
            FUN_00405610(&local_28,puVar20);
            FUN_00401060((void *)((int)&local_38 + 4),&local_20);
            FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
          }
          uVar25 = CONCAT44(param_6,0x40);
          puVar15 = FUN_00401040(local_810,0,0,0);
          puVar20 = local_860;
          goto LAB_00526bd7;
        }
      }
      else {
        if (param_5 != 0xe) {
          if (param_5 == 0xf) {
            uVar34 = 0x526f33;
            FUN_004c84b0((int)local_308);
            local_8 = 0xc;
            local_308[0] = (void *)0x49;
            uVar32 = 0;
            uVar31 = 0x526f50;
            FUN_004cde40(&stack0xfffff768,0);
            uVar25 = 0x3fe0000000000000;
            FUN_004dab30((ulonglong *)&stack0xfffff760);
            FUN_004dab30((ulonglong *)&stack0xfffff758);
            puVar13 = FUN_00406380(local_c0,(int)uVar25,(int)(uVar25 >> 0x20),uVar31,uVar32,uVar28,
                                   uVar34);
            puVar11 = (uint *)&local_90;
            piVar12 = FUN_004d99d0(&local_38,(uint *)&local_20);
            puVar11 = FUN_00402cb0(piVar12,puVar11,puVar13);
            FUN_00402a40(&local_300,puVar11);
            local_2e8 = -param_3;
            puVar7 = FUN_00401080(local_624,0x3fc00000,0x3fc00000,0x3f800000);
            FUN_00401060(&local_2e4,puVar7);
            FUN_004d6670((void *)(param_6 + 0xc),local_308);
            if ((local_6cc < iVar19) && (iVar19 < local_6c8)) {
              if (param_9 != 0) {
                FUN_0041d7e0((int)&local_38 + 4);
                uVar33 = 0x40;
                puVar20 = FUN_00401040(local_7f4,0,0,0);
                puVar20 = FUN_00401370(local_878,puVar20,uVar33);
                FUN_00405610(&local_28,puVar20);
                FUN_00401060((void *)((int)&local_38 + 4),&local_20);
                FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
              }
              uVar25 = CONCAT44(param_6,0x40);
              puVar15 = FUN_00401040(local_7a4,0,0,0);
              puVar20 = local_880;
              goto LAB_00526bd7;
            }
            goto LAB_00526c10;
          }
          pSVar17 = operator_new(0x10f0);
          if (pSVar17 == (Spawn *)0x0) {
            local_6c0 = (Spawn *)0x0;
            local_6a8 = local_6a8 & 0xffffffff00000000;
          }
          else {
            local_6c0 = cube::Spawn::Spawn(pSVar17);
            local_6a8 = CONCAT44(local_6a8._4_4_,local_6c0);
          }
          (local_6c0->Spawn_data).offset_0x24 = 6;
          (local_6c0->Spawn_data).offset_0x28 = (param_5 != 10) + 0x8d;
          (local_6c0->Spawn_data).offset_0x50 = (float)(int)((2 - param_3) * 0x5a);
          FUN_00401080(local_630,0x3f000000,0x3f000000,0x3f000000);
          FUN_00402510((int)&local_90);
          puVar11 = (uint *)&local_90;
          puVar13 = local_c0;
          piVar12 = FUN_004d99d0(&local_38,(uint *)&local_20);
          puVar11 = FUN_00402cb0(piVar12,puVar13,puVar11);
          FUN_00402a40((void *)((int)(uint *)local_6a8 + 0x10),puVar11);
          local_6b0._0_4_ = (Spawn *)FUN_004013d0(&local_20,1);
          uVar25 = 0x52715e;
          local_6b0._4_4_ = (SequentialBehavior *)FUN_004013d0(&local_20,0);
          pSVar8 = ((Spawn *)local_6b0)->vftablePtr;
          uVar3 = 0x527176;
          FUN_004cde40(&stack0xfffff768,(uint)pSVar8);
          FUN_004cde40(&stack0xfffff760,(uint)(local_6b0._4_4_)->vftablePtr);
          uVar3 = FUN_004d2340(local_6b4,uVar3,(uint)pSVar8,uVar25);
          *(uint *)((int)(uint *)local_6a8 + 0x34) = uVar3;
          FUN_004f2be0((void *)(param_6 + 0x18),&local_6c0);
          if (param_9 != 0) {
            FUN_0041d7e0((int)&local_38 + 4);
            uVar33 = 0x40;
            puVar20 = FUN_00401040(local_7dc,0,0,0);
            puVar20 = FUN_00401370(local_81c,puVar20,uVar33);
            FUN_00405610(&local_28,puVar20);
            FUN_00401060((void *)((int)&local_38 + 4),&local_20);
            FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
          }
          uVar25 = CONCAT44(param_6,0x40);
          puVar20 = FUN_00401040(local_7ac,0,0,0);
          ppuVar18 = (uint **)FUN_00401370(local_874,puVar20,(char)uVar25);
          iVar35 = (int)(uVar25 >> 0x20);
          puVar11 = (uint *)FUN_004013d0(&local_20,2);
          uVar3 = *puVar11;
          pSVar8 = ((Spawn *)local_6b0)->vftablePtr;
          pSVar27 = (local_6b0._4_4_)->vftablePtr;
          goto LAB_005282d3;
        }
        uVar34 = 0x526dce;
        FUN_004c84b0((int)local_308);
        local_8 = 0xb;
        local_308[0] = (void *)0x4b;
        uVar32 = 0;
        uVar31 = 0x526deb;
        FUN_004cde40(&stack0xfffff768,0);
        uVar25 = 0x3fe0000000000000;
        FUN_004dab30((ulonglong *)&stack0xfffff760);
        FUN_004dab30((ulonglong *)&stack0xfffff758);
        puVar13 = FUN_00406380(local_c0,(int)uVar25,(int)(uVar25 >> 0x20),uVar31,uVar32,uVar28,
                               uVar34);
        puVar11 = (uint *)&local_90;
        piVar12 = FUN_004d99d0(&local_38,(uint *)&local_20);
        puVar11 = FUN_00402cb0(piVar12,puVar11,puVar13);
        FUN_00402a40(&local_300,puVar11);
        local_2e8 = -param_3;
        puVar7 = FUN_00401080(local_690,0x3fc00000,0x3fc00000,0x3f800000);
        FUN_00401060(&local_2e4,puVar7);
        FUN_004d6670((void *)(param_6 + 0xc),local_308);
        if ((local_6cc < iVar19) && (iVar19 < local_6c8)) {
          if (param_9 != 0) {
            FUN_0041d7e0((int)&local_38 + 4);
            uVar33 = 0x40;
            puVar20 = FUN_00401040(local_7d4,0,0,0);
            puVar20 = FUN_00401370(local_868,puVar20,uVar33);
            FUN_00405610(&local_28,puVar20);
            FUN_00401060((void *)((int)&local_38 + 4),&local_20);
            FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
          }
          uVar25 = CONCAT44(param_6,0x40);
          puVar15 = FUN_00401040(local_790,0,0,0);
          puVar20 = local_870;
          goto LAB_00526bd7;
        }
      }
LAB_00526c10:
      local_8 = 0xffffffff;
      FUN_004cd8f0((int)local_308);
      uVar25 = local_38;
      uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
      goto LAB_005282de;
    }
  }
  if (param_5 == 2) {
    local_4c = 0x3f800000;
    uStack_48 = 0x3f800000;
    local_44 = 0x3f800000;
    local_40 = param_5;
    local_78[0] = 0x21;
    uVar31 = 0x526840;
    uVar25 = FUN_0054a946();
    uVar26 = 0x3fe0000000000000;
    FUN_004dab30((ulonglong *)&stack0xfffff760);
    FUN_004dab30((ulonglong *)&stack0xfffff758);
    puVar13 = FUN_00406380(local_c0,(int)uVar26,(int)(uVar26 >> 0x20),uVar28,uVar31,(int)uVar25,
                           (int)(uVar25 >> 0x20));
    puVar11 = (uint *)&local_90;
    piVar12 = FUN_004d99d0(&local_38,(uint *)&local_20);
    puVar11 = FUN_00402cb0(piVar12,puVar11,puVar13);
    FUN_00402a40(&local_70,puVar11);
    local_54 = (float)(int)((-1 - param_3) * 0x5a);
    local_58 = 0x3dcccccd;
    local_40 = 0;
    FUN_00528450((void *)(param_6 + 4),local_78);
    iVar19 = local_6d4;
  }
  else {
    if (param_5 == 6) {
      uVar25 = CONCAT44(0x5268ef,pSVar8);
      FUN_004c83b0((int)local_78);
      local_78[0] = 0x25;
    }
    else if (param_5 == 3) {
      uVar25 = CONCAT44(0x526908,pSVar8);
      FUN_004c83b0((int)local_78);
      local_78[0] = 0x22;
    }
    else if (param_5 == 5) {
      uVar25 = CONCAT44(0x52691e,pSVar8);
      FUN_004c83b0((int)local_78);
      local_78[0] = 0x24;
    }
    else if (param_5 == 4) {
      uVar25 = CONCAT44(0x526934,pSVar8);
      FUN_004c83b0((int)local_78);
      local_78[0] = 0x23;
    }
    else if (param_5 == 0xd) {
      uVar25 = CONCAT44(0x52694a,pSVar8);
      FUN_004c83b0((int)local_78);
      local_78[0] = 0x26;
    }
    else if (param_5 == 0xe) {
      uVar25 = CONCAT44(0x526960,pSVar8);
      FUN_004c83b0((int)local_78);
      local_78[0] = 0x27;
    }
    else {
      if (param_5 != 0xf) goto LAB_00526a2d;
      uVar25 = CONCAT44(0x52697a,pSVar8);
      FUN_004c83b0((int)local_78);
      local_78[0] = 0x28;
    }
    uVar30 = 0xbfe0000000000000;
    FUN_004dab30((ulonglong *)&stack0xfffff768);
    uVar26 = 0x3fe0000000000000;
    FUN_004dab30((ulonglong *)&stack0xfffff760);
    FUN_004dab30((ulonglong *)&stack0xfffff758);
    puVar13 = FUN_00406380(local_c0,(int)uVar26,(int)(uVar26 >> 0x20),(int)uVar30,
                           (int)(uVar30 >> 0x20),(int)uVar25,(int)(uVar25 >> 0x20));
    puVar11 = (uint *)&local_90;
    piVar12 = FUN_004d99d0(&local_38,(uint *)&local_20);
    puVar11 = FUN_00402cb0(piVar12,puVar11,puVar13);
    FUN_00402a40(&local_70,puVar11);
    local_54 = (float)(int)((-1 - param_3) * 0x5a);
    local_58 = 0x3dcccccd;
    local_40 = 0;
    FUN_00528450((void *)(param_6 + 4),local_78);
  }
LAB_00526a2d:
  iVar4 = iVar19;
  uVar25 = local_38;
  uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
  if ((iVar19 <= local_6cc) ||
     (uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0), local_6c8 <= iVar19))
  goto LAB_005282de;
  if (param_9 != 0) {
    FUN_0041d7e0((int)&local_38 + 4);
    uVar33 = 0x40;
    puVar20 = FUN_00401040(local_7e0,0,0,0);
    puVar20 = FUN_00401370(local_87c,puVar20,uVar33);
    FUN_00405610(&local_28,puVar20);
    FUN_00401060((void *)((int)&local_38 + 4),&local_20);
    FUN_00528400((void *)(param_9 + 0x18),(undefined4 *)((int)&local_38 + 4));
  }
  uVar25 = CONCAT44(param_6,0x40);
  pSVar14 = (SequentialBehavior *)FUN_00401040(local_7f8,0,0,0);
  puVar20 = local_840;
LAB_005282a6:
  ppuVar18 = (uint **)FUN_00401370(puVar20,(undefined1 *)pSVar14,(char)uVar25);
  iVar35 = (int)(uVar25 >> 0x20);
  puVar11 = (uint *)FUN_004013d0(&local_20,2);
  uVar3 = *puVar11;
  puVar7 = (undefined4 *)FUN_004013d0(&local_20,1);
  pSVar8 = (Spawn_vftable *)*puVar7;
  puVar7 = (undefined4 *)FUN_004013d0(&local_20,0);
  pSVar27 = (SequentialBehavior_vftable *)*puVar7;
LAB_005282d3:
  FUN_0041ff00(local_6b4,(float)pSVar27,(uint)pSVar8,uVar3,(undefined1 *)ppuVar18,iVar35);
  iVar4 = iVar19;
  uVar25 = local_38;
  uVar26 = CONCAT44(local_6b0._4_4_,(Spawn *)local_6b0);
LAB_005282de:
  local_6b0._0_4_ = (Spawn *)uVar26;
  iVar4 = iVar4 + -1;
  iVar21 = param_9;
  local_6d4 = iVar4;
  if (iVar4 < 0) goto LAB_005282f1;
  goto LAB_00524b70;
LAB_0052819b:
  iVar19 = iVar4;
  param_9 = iVar21;
  if (param_5 == 8) {
    puVar20 = FUN_00401040(local_7c8,0,0,0xff);
    cVar2 = FUN_0042edb0(local_6b0._4_4_,(int)puVar20);
    if (cVar2 != '\0') {
      if (iVar21 != 0) {
        FUN_0041d7e0((int)&local_38 + 4);
        uVar33 = 2;
        puVar20 = FUN_00401040(local_7d0,0xff,0xff,0xff);
        puVar20 = FUN_00401370(local_820,puVar20,uVar33);
        FUN_00405610(&local_28,puVar20);
        FUN_00401060((void *)((int)&local_38 + 4),&local_20);
        FUN_00528400((void *)(iVar21 + 0x18),(undefined4 *)((int)&local_38 + 4));
      }
      uVar25 = CONCAT44(param_6,2);
      pSVar14 = (SequentialBehavior *)FUN_00401040(local_7d8,0xff,0xff,0xff);
      puVar20 = local_828;
      goto LAB_005282a6;
    }
  }
  if (iVar21 != 0) {
    FUN_0041d7e0((int)&local_38 + 4);
    puVar20 = FUN_00401370(local_830,(undefined1 *)local_6b0._4_4_,(byte)local_78c | 0x40);
    FUN_00405610(&local_28,puVar20);
    FUN_00401060((void *)((int)&local_38 + 4),&local_20);
    FUN_00528400((void *)(iVar21 + 0x18),(undefined4 *)((int)&local_38 + 4));
  }
  uVar25 = CONCAT44(param_6,(uint)((byte)local_78c | 0x40));
  puVar20 = local_838;
  pSVar14 = local_6b0._4_4_;
  goto LAB_005282a6;
}


/* dungeon_scatter_emitter @ 0052a830  kind=game  attributed-by=ledger  size=1448 */

void __cdecl FUN_0052a830(void *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int local_19c [2];
  undefined8 local_194;
  undefined8 local_18c;
  uint local_184;
  uint local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_15c;
  undefined4 *local_154;
  undefined4 *local_150;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0055550b;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_16c = 1;
  local_168 = 0;
  local_164 = 0;
  local_15c = 0;
  FUN_00406ef0(&local_154);
  local_24 = 0xffffffff;
  local_20 = 0xffffffff;
  local_1c = 0xffffffff;
  local_18 = 0;
  local_8 = 0;
  uVar1 = param_2[3];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  local_194 = *(longlong *)param_2;
  lVar5 = *(longlong *)param_2;
  uVar4 = param_2[2];
  lVar6 = *(longlong *)(param_2 + 2);
  local_184 = param_2[4];
  local_180 = param_2[5];
  local_17c = param_3;
  local_18c._0_4_ = uVar4;
  local_18c._4_4_ = uVar1;
  iVar7 = rand();
  if (iVar7 % 0x32 != 0) {
    iVar7 = rand();
    iVar7 = iVar7 % 3;
    if (iVar7 == 0) {
      if (param_4 == 3) {
        iVar7 = rand();
        local_19c[0] = iVar7 % 3 + 0x20;
      }
      else if (param_4 == 4) {
        iVar7 = rand();
        local_19c[0] = iVar7 % 3 + 0x26;
      }
      else if (param_4 == 5) {
        iVar7 = rand();
        local_19c[0] = iVar7 % 3 + 0x29;
      }
      else {
        iVar7 = rand();
        local_19c[0] = iVar7 % 3 + 0x23;
      }
      local_178 = 0x40000000;
      local_174 = 0x3f800000;
      local_170 = 0x3fc8f5c3;
      goto switchD_0052a96b_default;
    }
    if (iVar7 == 1) {
      if (param_4 == 4) {
        local_19c[0] = 0xd;
      }
      else {
        local_19c[0] = (uint)(param_4 == 5) * 2 + 0xc;
      }
      local_178 = 0x40400000;
      local_174 = 0x40400000;
      local_170 = 0x3f800000;
      switch(param_3) {
      case 0:
        rand();
LAB_0052aa86:
        uVar8 = FUN_0054a946();
        local_18c = CONCAT44((uVar1 - (int)(uVar8 >> 0x20)) - (uint)(uVar4 < (uint)uVar8),
                             uVar4 - (uint)uVar8);
        break;
      case 1:
        rand();
        uVar8 = FUN_0054a946();
        local_194 = uVar8 + lVar5;
        break;
      case 2:
        rand();
        uVar8 = FUN_0054a946();
        local_18c = uVar8 + lVar6;
        break;
      case 3:
        rand();
        uVar8 = FUN_0054a946();
        local_194 = CONCAT44((uVar3 - (int)(uVar8 >> 0x20)) - (uint)(uVar2 < (uint)uVar8),
                             uVar2 - (uint)uVar8);
      }
    }
    else {
      local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
      if (iVar7 != 2) goto switchD_0052a96b_default;
      if (param_4 == 4) {
        local_19c[0] = 0xf;
      }
      else {
        local_19c[0] = (param_4 == 5) + 0x10;
      }
      local_178 = 0x3f800000;
      local_174 = 0x3f800000;
      local_170 = 0x3f000000;
      local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
      switch(param_3) {
      case 0:
        rand();
        goto LAB_0052aa86;
      case 1:
        rand();
        uVar8 = FUN_0054a946();
        local_194 = uVar8 + lVar5;
        break;
      case 2:
        rand();
        uVar8 = FUN_0054a946();
        local_18c = uVar8 + lVar6;
        break;
      case 3:
        rand();
        uVar8 = FUN_0054a946();
        local_194 = CONCAT44((uVar3 - (int)(uVar8 >> 0x20)) - (uint)(uVar2 < (uint)uVar8),
                             uVar2 - (uint)uVar8);
      }
    }
    goto switchD_0052a96b_default;
  }
  local_19c[0] = 10;
  local_178 = 0x3fc00000;
  local_174 = 0x3f800000;
  local_170 = 0x3f800000;
  local_17c = param_3 + 2 & 0x80000003;
  if ((int)local_17c < 0) {
    local_17c = (local_17c - 1 | 0xfffffffc) + 1;
  }
  local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
  switch(param_3) {
  case 0:
    goto LAB_0052a978;
  case 1:
    uVar8 = FUN_0054a946();
    local_194 = uVar8 + lVar5;
    break;
  case 2:
LAB_0052a978:
    uVar8 = FUN_0054a946();
    local_18c = uVar8 + lVar6;
    break;
  case 3:
    uVar8 = FUN_0054a946();
    local_194 = uVar8 + lVar5;
  }
switchD_0052a96b_default:
  FUN_004c8420(param_1,local_19c);
  if (local_154 != (undefined4 *)0x0) {
    FUN_00406310(local_154,local_150);
    operator_delete(local_154);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* World_objectFalloffWeight @ 0052c820  kind=game  attributed-by=ledger  size=1325 */

float10 __thiscall FUN_0052c820(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 local_2c;
  
  fVar1 = (float)param_1[4];
  if (fVar1 < 0.001) {
    return (float10)0;
  }
  uVar10 = param_1[6];
  if (((uVar10 != 0xb) && (uVar10 != 0xc)) && (uVar10 != 0xe)) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    if (uVar10 == 0xd) {
      uVar13 = FUN_0054a946();
      iVar11 = (int)(uVar13 >> 0x20);
      uVar7 = (uint)uVar13;
      uVar10 = *param_2;
      uVar4 = param_2[1];
      uVar13 = FUN_0054a946();
      iVar12 = (int)(uVar13 >> 0x20);
      uVar8 = (uint)uVar13;
      local_2c = CONCAT44((1 - iVar11) - (uint)(0x617d0000 < uVar7),0x617d0000 - uVar7);
      dVar5 = (double)local_2c;
      local_2c = CONCAT44((0x80 - iVar12) - (uint)(0xad580000 < uVar8),-0x52a80000 - uVar8);
      FUN_004d5d30(SUB84((double)local_2c * 1.52587890625e-05,0),
                   (int)((ulonglong)((double)local_2c * 1.52587890625e-05) >> 0x20),
                   dVar5 * 1.52587890625e-05);
      uVar13 = FUN_0054a946();
      uVar9 = (uint)uVar13 - *param_1;
      local_2c = CONCAT44((((int)(uVar13 >> 0x20) - param_1[1]) - (uint)((uint)uVar13 < *param_1)) +
                          uVar4 + (uint)CARRY4(uVar9,uVar10),uVar9 + uVar10);
      fVar6 = (float)local_2c;
      local_2c = CONCAT44(-(uint)(0x700000 < uVar7) - iVar11,0x700000 - uVar7);
      dVar5 = (double)local_2c;
      local_2c = CONCAT44(-(uint)(0xd5f0000 < uVar8) - iVar12,0xd5f0000 - uVar8);
      FUN_004d5d30(SUB84((double)local_2c * 1.52587890625e-05,0),
                   (int)((ulonglong)((double)local_2c * 1.52587890625e-05) >> 0x20),
                   dVar5 * 1.52587890625e-05);
      uVar13 = FUN_0054a946();
      uVar10 = (uint)uVar13 - param_1[2];
      local_2c = CONCAT44((((int)(uVar13 >> 0x20) - param_1[3]) - (uint)((uint)uVar13 < param_1[2]))
                          + uVar3 + (uint)CARRY4(uVar10,uVar2),uVar10 + uVar2);
      return (float10)(((float)local_2c * 1.5258789e-05 * (float)local_2c * 1.5258789e-05 +
                       fVar6 * 1.5258789e-05 * fVar6 * 1.5258789e-05) / (fVar1 * fVar1));
    }
    uVar13 = FUN_0054a946();
    iVar11 = (int)(uVar13 >> 0x20);
    uVar7 = (uint)uVar13;
    uVar10 = *param_2;
    uVar4 = param_2[1];
    uVar13 = FUN_0054a946();
    iVar12 = (int)(uVar13 >> 0x20);
    uVar8 = (uint)uVar13;
    local_2c = CONCAT44((1 - iVar11) - (uint)(0x617d0000 < uVar7),0x617d0000 - uVar7);
    dVar5 = (double)local_2c;
    local_2c = CONCAT44((0x80 - iVar12) - (uint)(0xad580000 < uVar8),-0x52a80000 - uVar8);
    FUN_004d5d30(SUB84((double)local_2c * 1.52587890625e-05,0),
                 (int)((ulonglong)((double)local_2c * 1.52587890625e-05) >> 0x20),
                 dVar5 * 1.52587890625e-05);
    uVar13 = FUN_0054a946();
    uVar9 = (uint)uVar13 - *param_1;
    local_2c = CONCAT44((((int)(uVar13 >> 0x20) - param_1[1]) - (uint)((uint)uVar13 < *param_1)) +
                        uVar4 + (uint)CARRY4(uVar9,uVar10),uVar9 + uVar10);
    fVar6 = (float)local_2c;
    local_2c = CONCAT44(-(uint)(0x700000 < uVar7) - iVar11,0x700000 - uVar7);
    dVar5 = (double)local_2c;
    local_2c = CONCAT44(-(uint)(0xd5f0000 < uVar8) - iVar12,0xd5f0000 - uVar8);
    FUN_004d5d30(SUB84((double)local_2c * 1.52587890625e-05,0),
                 (int)((ulonglong)((double)local_2c * 1.52587890625e-05) >> 0x20),
                 dVar5 * 1.52587890625e-05);
    uVar13 = FUN_0054a946();
    uVar10 = (uint)uVar13 - param_1[2];
    local_2c = CONCAT44((((int)(uVar13 >> 0x20) - param_1[3]) - (uint)((uint)uVar13 < param_1[2])) +
                        uVar3 + (uint)CARRY4(uVar10,uVar2),uVar10 + uVar2);
    return (float10)(((float)local_2c * 1.5258789e-05 * (float)local_2c * 1.5258789e-05 +
                     fVar6 * 1.5258789e-05 * fVar6 * 1.5258789e-05) / (fVar1 * fVar1));
  }
  local_2c = CONCAT44((param_2[1] - param_1[1]) - (uint)(*param_2 < *param_1),*param_2 - *param_1);
  fVar6 = (float)local_2c;
  local_2c = CONCAT44((param_3[1] - param_1[3]) - (uint)(*param_3 < param_1[2]),
                      *param_3 - param_1[2]);
  return (float10)(((float)local_2c * 1.5258789e-05 * (float)local_2c * 1.5258789e-05 +
                   fVar6 * 1.5258789e-05 * fVar6 * 1.5258789e-05) / (fVar1 * fVar1));
}


/* World_sampleTerrainHeight @ 0052cd50  kind=game  attributed-by=ledger  size=731 */

float10 __thiscall FUN_0052cd50(void *param_1,uint param_2,float param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  undefined8 local_20;
  undefined8 local_18;
  uint local_10;
  float local_c;
  void *local_8;
  
  fVar1 = param_3;
  local_18 = (double)(int)param_3 * 0.001;
  local_20 = (double)(int)param_2 * 0.001;
  dVar10 = (double)*(int *)((int)param_1 + 0x800170) + (double)(int)param_2 * 0.01;
  local_8 = param_1;
  fVar7 = FUN_004d5d30(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),
                       (double)*(int *)((int)param_1 + 0x800174) + (double)(int)param_3 * 0.01);
  dVar10 = (double)*(int *)((int)local_8 + 0x800168) + local_20;
  fVar8 = FUN_004d5d30(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),
                       (double)*(int *)((int)local_8 + 0x80016c) + local_18);
  local_c = (float)fVar8;
  fVar9 = (float)fVar7 * 0.1 + local_c;
  fVar7 = FUN_004d5d30(SUB84(local_20,0),(int)((ulonglong)local_20 >> 0x20),local_18);
  local_c = (float)fVar7;
  fVar9 = ABS(fVar9) * ((local_c + 1.0) * 0.1 + 0.8);
  fVar7 = (float10)FUN_00522840(local_8,param_2,(int)param_3);
  local_c = (float)fVar7;
  fVar11 = 1.0 - local_c * 0.75;
  param_3 = fVar9;
  if (0.0 < fVar11) {
    param_3 = fVar11 * fVar11 * 0.05 + fVar9;
  }
  uVar5 = (int)fVar1 >> 0x1f;
  uVar6 = (int)param_2 >> 0x1f;
  puVar3 = (uint *)FUN_004286f0(local_8,(int)(param_2 + (uVar6 & 0x7ff)) >> 0xb,
                                (int)((int)fVar1 + (uVar5 & 0x7ff)) >> 0xb);
  local_18._4_4_ = puVar3;
  if (puVar3 != (uint *)0x0) {
    uVar2 = puVar3[6];
    if ((((uVar2 == 1) || (uVar2 == 2)) || (uVar2 == 4)) || (uVar2 == 0xd)) {
      local_20 = (double)CONCAT44(uVar5 << 0x10 | (uint)fVar1 >> 0x10,(int)fVar1 << 0x10);
      local_c = (float)(uVar6 << 0x10 | param_2 >> 0x10);
      local_10 = param_2 << 0x10;
      fVar7 = FUN_0052c820(puVar3,&local_10,(uint *)&local_20);
      local_c = (float)fVar7;
      fVar9 = 1.0 - local_c;
      if (0.0 < fVar9) {
        fVar9 = fVar9 * fVar9;
      }
      else {
        fVar9 = 0.0;
      }
      param_3 = fVar9 + param_3;
    }
    puVar3 = local_18._4_4_;
    if ((uVar2 == 6) || (uVar2 == 7)) {
      local_20 = (double)CONCAT44(uVar5 << 0x10 | (uint)fVar1 >> 0x10,(int)fVar1 << 0x10);
      local_18._4_4_ = (uint *)(uVar6 << 0x10 | param_2 >> 0x10);
      local_18._0_4_ = param_2 << 0x10;
      fVar7 = FUN_0052c820(puVar3,(uint *)&local_18,(uint *)&local_20);
      fVar11 = 1.0 - (float)fVar7;
      fVar9 = 0.0;
      if (0.0 < fVar11) {
        fVar9 = fVar11 * fVar11;
      }
      param_3 = fVar9 * 0.5 + param_3;
    }
  }
  iVar4 = FUN_00406100(local_8,param_2,(uint)fVar1,param_4);
  if (iVar4 == 0) {
    fVar7 = (float10)FUN_00522e20(local_8,param_2,(int)fVar1);
    fVar1 = (float)fVar7;
  }
  else {
    fVar1 = *(float *)(iVar4 + 0xc);
  }
  return (float10)(fVar1 + param_3);
}


/* World_computeClimateColor @ 0052d990  kind=game  attributed-by=ledger  size=498 */

void __thiscall FUN_0052d990(void *this,uint param_1,uint param_2)

{
  uint *puVar1;
  float10 fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  uint local_2c;
  float local_28;
  uint local_24;
  float local_20;
  float local_1c;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  fVar2 = FUN_004d19f0(this,param_1,param_2);
  local_28 = (float)fVar2;
  FUN_004d5a80(this,&local_18,param_1,param_2);
  fVar2 = (float10)FUN_00522840(this,param_1,param_2);
  local_1c = (float)fVar2;
  if (0.0 < local_28) {
    fVar4 = local_28 * 3.0;
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    fVar4 = 1.0 - fVar4 * fVar4;
    local_20 = 1.0 - fVar4 * fVar4;
    dVar3 = local_18 * 360.0;
    libm_sse2_cos_precise();
    fVar4 = (float)(dVar3 * (double)local_20 + 1.0);
    if (fVar4 < local_1c) {
      local_1c = fVar4;
    }
    dVar3 = local_10 * 360.0;
    libm_sse2_cos_precise();
    fVar4 = (float)(dVar3 * (double)local_20 + 1.0);
    if (fVar4 < local_1c) {
      local_1c = fVar4;
    }
  }
  if (0.65 < local_28) {
    fVar4 = (0.7 - local_28) / 0.05;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    local_1c = fVar4 * local_1c;
  }
  puVar1 = (uint *)FUN_004286f0(this,(int)(param_1 + ((int)param_1 >> 0x1f & 0x7ffU)) >> 0xb,
                                (int)(param_2 + ((int)param_2 >> 0x1f & 0x7ffU)) >> 0xb);
  if ((puVar1 != (uint *)0x0) && ((puVar1[6] == 2 || (puVar1[6] == 4)))) {
    local_20 = (float)(((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10);
    local_24 = param_2 << 0x10;
    local_28 = (float)(((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10);
    local_2c = param_1 << 0x10;
    fVar2 = FUN_0052c820(puVar1,&local_2c,&local_24);
    local_20 = (float)fVar2;
    fVar5 = 1.0 - local_20;
    fVar4 = 0.0;
    if (0.0 < fVar5) {
      fVar4 = fVar5 * fVar5;
    }
    local_1c = fVar4 * 2.0 + local_1c;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* World_falloffSquared @ 0052dee0  kind=gamemisc  attributed-by=ledger  size=60 */

float10 __thiscall FUN_0052dee0(uint *param_1,uint *param_2,uint *param_3)

{
  float10 fVar1;
  float fVar2;
  
  fVar1 = FUN_0052c820(param_1,param_2,param_3);
  fVar2 = 1.0 - (float)fVar1;
  if (fVar2 <= 0.0) {
    return (float10)0;
  }
  return (float10)(fVar2 * fVar2);
}


/* world_create @ 00549c50  kind=game  attributed-by=ledger  size=2242 */

void __thiscall FUN_00549c50(void *this)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  Server *this_00;
  int *piVar4;
  undefined4 *extraout_EAX;
  int iVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  int *piVar7;
  DWORD DVar8;
  int *piVar9;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *unaff_ESI;
  int unaff_EDI;
  undefined4 *this_01;
  undefined8 uVar10;
  int local_494 [8];
  undefined4 local_474 [18];
  basic_ostream<char,std::char_traits<char>_> local_42c [16];
  int local_3ec [8];
  code *local_3cc [14];
  undefined4 local_394 [3];
  int iStack_388;
  basic_istream<char,std::char_traits<char>_> local_384 [3];
  int iStack_378;
  basic_streambuf<char,std::char_traits<char>_> local_374 [2];
  basic_istream<char,std::char_traits<char>_> local_36c;
  int *local_368;
  char *local_33c;
  char *local_338;
  undefined4 local_334;
  undefined1 local_330;
  undefined1 local_32f;
  undefined4 local_32c;
  char local_328;
  FILE *local_324;
  basic_ios<char,std::char_traits<char>_> local_314 [5];
  int iStack_2d0;
  undefined1 local_2cc [16];
  basic_ostream<char,std::char_traits<char>_> local_2bc;
  basic_streambuf<char,std::char_traits<char>_> local_2b4 [2];
  undefined1 local_2ac [8];
  undefined4 *local_2a4;
  undefined4 *local_294;
  undefined4 *local_284;
  undefined4 local_27c;
  uint local_278;
  basic_ios<char,std::char_traits<char>_> local_264 [6];
  _RTL_CRITICAL_SECTION local_21c;
  DWORD local_204;
  undefined4 *local_200;
  Server *local_1fc;
  uint local_1f8;
  World *local_1f4;
  int *local_1f0;
  int local_1ec;
  undefined1 local_1e6;
  char local_1e5;
  WSADATA local_1e4;
  void *local_54 [4];
  void **local_44;
  uint local_40;
  int local_3c;
  int iStack_38;
  undefined8 local_34;
  _Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_vftable
  *local_2c;
  char *local_28;
  Server *pSStack_24;
  undefined1 *local_20;
  _RTL_CRITICAL_SECTION *p_Stack_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00556809;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1f4 = (World *)0x0;
  WSAStartup(0x202,&local_1e4);
  local_1f4 = operator_new(0x80029c);
  local_8 = 0;
  if (local_1f4 == (World *)0x0) {
    local_200 = (undefined4 *)0x0;
  }
  else {
    cube::World::World(local_1f4,0,'\0');
    local_200 = extraout_EAX;
  }
  this_01 = local_200;
  local_8 = 0xffffffff;
  iVar5 = rand();
  local_1f8 = iVar5 % 1000000;
  FUN_00549330(local_384,"server.cfg",1,(int *)0x40,1);
  local_8 = 1;
  if (*(int *)((int)&iStack_378 +
              (local_384[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) == 0) {
    std::basic_istream<char,std::char_traits<char>_>::operator>>(local_384,(int *)&local_1f8);
  }
  else {
    FUN_00549440(local_42c,"server.cfg",2,(int *)0x40,1);
    local_8._0_1_ = 2;
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(local_42c,local_1f8);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0042ed40(local_3cc);
    local_3cc[0] = _vftable__exref;
    std::ios_base::_Ios_base_dtor((ios_base *)local_3cc);
  }
  local_2cc._0_4_ = &PTR_0055b2c0;
  local_2bc.vbtablePtr = (basic_ostream<char,std::char_traits<char>_>_vbtable *)&PTR_00571718;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_264);
  local_8 = CONCAT31(local_8._1_3_,3);
  local_1f4 = (World *)0x1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_2cc,
             (basic_streambuf<char,std::char_traits<char>_> *)local_2b4);
  local_8 = 4;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (local_2cc + *(int *)(local_2cc._0_4_ + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_2d0 + *(int *)(local_2cc._0_4_ + 4)) = *(int *)(local_2cc._0_4_ + 4) + -0x68
  ;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_2b4);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_2b4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_27c = 0;
  local_278 = 0;
  local_8._0_1_ = 6;
  pbVar6 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)&local_2bc,"server_");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,unaff_EDI);
  piVar7 = FUN_004d8f70(local_2cc,local_54);
  local_8._0_1_ = 7;
  FUN_004d83a0(this_01,local_1f8,piVar7);
  local_8._0_1_ = 6;
  if (0xf < local_40) {
    operator_delete(local_54[0]);
  }
  local_18 = 0xf;
  p_Stack_1c = (_RTL_CRITICAL_SECTION *)0x0;
  local_2c = (_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_vftable
              *)((uint)local_2c & 0xffffff00);
  FUN_00401a40(&local_2c,(int *)&DAT_0055b524,0);
  local_8._0_1_ = 8;
  FUN_00431400(&local_2c);
  local_8._0_1_ = 6;
  if (0xf < local_18) {
    operator_delete(local_2c);
  }
  local_1f4 = operator_new(0x54);
  local_8._0_1_ = 9;
  if (local_1f4 == (World *)0x0) {
    local_1fc = (Server *)0x0;
  }
  else {
    local_1fc = cube::Server::Server((Server *)local_1f4,(int)this_01);
  }
  this_00 = local_1fc;
  local_8._0_1_ = 6;
  InitializeCriticalSectionAndSpinCount(&local_21c,0x80000400);
  local_1f0 = (int *)0x0;
  local_1ec = 0;
  local_1f0 = (int *)FUN_00426a30((undefined4 *)0x0,(undefined4 *)0x0);
  local_20 = &local_1e6;
  p_Stack_1c = &local_21c;
  local_1e6 = 1;
  local_8._0_1_ = 0xb;
  local_28 = (char *)this_01;
  pSStack_24 = this_00;
  local_44 = operator_new(0x1c);
  if (local_44 != (void **)0x0) {
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl<std::_Callable_obj<<lambda_90aea85a8928b722e251ae835df30be1>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                        */
    *local_44 = &std::
                 _Func_impl<std::_Callable_obj<<lambda_90aea85a8928b722e251ae835df30be1>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                 ::vftable;
    *(ulonglong *)(local_44 + 1) = CONCAT44(pSStack_24,local_28);
    *(ulonglong *)(local_44 + 3) = CONCAT44(p_Stack_1c,local_20);
    local_44[5] = &local_1f0;
    local_8._0_1_ = 0xc;
    local_1f4 = (World *)FUN_00413640(local_54);
    local_8._0_1_ = 10;
    if (local_44 != (void **)0x0) {
      (**(code **)((int)*local_44 + 0x10))(local_44 != local_54);
      local_44 = (void **)0x0;
    }
    SetThreadPriority(local_1f4,-1);
    std::
    _Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
    ::
    _Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_Constructor_or_Destructor
              ((int)this_00);
    timeBeginPeriod(1);
    pcVar3 = timeGetTime_exref;
    local_204 = timeGetTime();
    local_1e5 = '\x01';
    local_28 = &local_1e5;
    p_Stack_1c = (_RTL_CRITICAL_SECTION *)&local_2c;
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                        */
    local_2c = &std::
                _Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                ::vftable;
    local_8._0_1_ = 0xe;
    FUN_00413640((undefined4 *)p_Stack_1c);
    local_8._0_1_ = 10;
    if (p_Stack_1c != (_RTL_CRITICAL_SECTION *)0x0) {
      (*(*(_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_vftable
           **)p_Stack_1c)->vfunction5)(p_Stack_1c,p_Stack_1c != (_RTL_CRITICAL_SECTION *)&local_2c);
    }
    do {
      if (local_1e5 == '\0') {
        timeEndPeriod(1);
        pbVar6 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                              "stopping generation thread...");
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,unaff_ESI);
        local_1e6 = 0;
        WaitForSingleObject(local_1f4,0xffffffff);
        if (this_00 != (Server *)0x0) {
          (*this_00->vftablePtr->deleting_destructor)(this_00,1);
        }
        if (this_01 != (undefined4 *)0x0) {
          (**(code **)*this_01)(1);
        }
        DeleteCriticalSection(&local_21c);
        WSACleanup();
        piVar7 = (int *)*local_1f0;
        *local_1f0 = (int)local_1f0;
        local_1f0[1] = (int)local_1f0;
        local_1ec = 0;
        if (piVar7 != local_1f0) {
          do {
            piVar9 = (int *)*piVar7;
            operator_delete(piVar7);
            piVar7 = piVar9;
          } while (piVar9 != local_1f0);
        }
        operator_delete(local_1f0);
        local_8 = CONCAT31(local_8._1_3_,1);
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         (local_2cc + *(int *)(local_2cc._0_4_ + 4)) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((int)&iStack_2d0 + *(int *)(local_2cc._0_4_ + 4)) =
             *(int *)(local_2cc._0_4_ + 4) + -0x68;
        local_2b4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                        vftable;
        if ((local_278 & 1) != 0) {
          operator_delete(*(void **)local_2ac._4_4_);
        }
        std::basic_streambuf<char,std::char_traits<char>_>::setg
                  (local_2b4,(char *)0x0,(char *)0x0,(char *)0x0);
        *local_2a4 = 0;
        *local_294 = 0;
        *local_284 = 0;
        local_278 = local_278 & 0xfffffffe;
        local_27c = 0;
        std::basic_streambuf<char,std::char_traits<char>_>::
        ~basic_streambuf<char,std::char_traits<char>_>(local_2b4);
        std::basic_iostream<char,std::char_traits<char>_>::
        ~basic_iostream<char,std::char_traits<char>_>
                  ((basic_iostream<char,std::char_traits<char>_> *)local_2ac);
        std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                  (local_264);
        local_8 = 0xffffffff;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ifstream<char,std::char_traits<char>_> */
        *(basic_ifstream<char,std::char_traits<char>_>_vftable **)
         ((int)&local_384[0].vbtablePtr +
         (local_384[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             &std::basic_ifstream<char,std::char_traits<char>_>::vftable;
        *(int *)((int)&iStack_388 +
                (local_384[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             (local_384[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x70;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
        local_374[0] = (basic_streambuf<char,std::char_traits<char>_>)
                       &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
        if ((local_324 != (FILE *)0x0) && ((undefined1 *)*local_368 == &local_330)) {
          std::basic_streambuf<char,std::char_traits<char>_>::setg
                    (local_374,local_33c,local_338,local_338);
        }
        if (local_328 != '\0') {
          if (local_324 != (FILE *)0x0) {
            FUN_0042f070((int *)local_374);
            fclose(local_324);
          }
          local_328 = '\0';
          local_32f = 0;
          std::basic_streambuf<char,std::char_traits<char>_>::_Init(local_374);
          local_324 = (FILE *)0x0;
          local_32c = DAT_00583e00;
          local_334 = 0;
        }
        std::basic_streambuf<char,std::char_traits<char>_>::
        ~basic_streambuf<char,std::char_traits<char>_>(local_374);
        std::basic_istream<char,std::char_traits<char>_>::
        ~basic_istream<char,std::char_traits<char>_>(&local_36c);
        std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                  (local_314);
        ExceptionList = local_10;
        local_494[1] = 0x54a50e;
        __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
        return;
      }
      DVar8 = (*pcVar3)();
      FUN_00423510(local_3ec);
      local_8._0_1_ = 0xf;
      FUN_00428230(this_00,local_3ec);
      FUN_00428170(this_00,local_394);
      FUN_004d3df0((int)this_01);
      FUN_00423510(local_494);
      local_8 = CONCAT31(local_8._1_3_,0x10);
      FUN_005322d0(this_01,DVar8 - local_204,local_494,local_3ec);
      local_204 = DVar8;
      FUN_004281d0(this_00,local_474);
      FUN_004272d0(this_00,local_494);
      EnterCriticalSection(&local_21c);
      piVar7 = (int *)*local_1f0;
      *local_1f0 = (int)local_1f0;
      local_1f0[1] = (int)local_1f0;
      local_1ec = 0;
      if (piVar7 != local_1f0) {
        do {
          piVar9 = (int *)*piVar7;
          operator_delete(piVar7);
          piVar7 = piVar9;
        } while (piVar9 != local_1f0);
      }
      piVar7 = *(int **)this_01[1];
      piVar9 = local_1f0;
      if (piVar7 != (int *)this_01[1]) {
        do {
          iVar5 = piVar7[6];
          if ((iVar5 != 0) && (*(char *)(iVar5 + 0x60) == '\0')) {
            uVar10 = __alldiv(*(uint *)(iVar5 + 0x18),*(uint *)(iVar5 + 0x1c),0x10000,0);
            iVar5 = (int)uVar10;
            uVar10 = __alldiv(*(uint *)(piVar7[6] + 0x10),*(uint *)(piVar7[6] + 0x14),0x10000,0);
            local_3c = (int)uVar10;
            local_34 = CONCAT44((int)(iVar5 + (iVar5 >> 0x1f & 0xffU)) >> 8,
                                (int)(local_3c + (local_3c >> 0x1f & 0xffU)) >> 8);
            iStack_38 = iVar5;
            iVar5 = FUN_00549300(piVar9,(undefined4 *)piVar9[1],(undefined4 *)&local_34);
            if (local_1ec == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("list<T> too long");
            }
            local_1ec = local_1ec + 1;
            piVar9[1] = iVar5;
            **(int **)(iVar5 + 4) = iVar5;
            piVar9 = local_1f0;
            this_01 = local_200;
          }
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            piVar2 = (int *)piVar7[2];
            if (*(char *)((int)piVar2 + 0xd) == '\0') {
              cVar1 = *(char *)(*piVar2 + 0xd);
              piVar7 = piVar2;
              piVar2 = (int *)*piVar2;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar2 + 0xd);
                piVar7 = piVar2;
                piVar2 = (int *)*piVar2;
              }
            }
            else {
              cVar1 = *(char *)(piVar7[1] + 0xd);
              piVar4 = (int *)piVar7[1];
              piVar2 = piVar7;
              while ((piVar7 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
                cVar1 = *(char *)(piVar7[1] + 0xd);
                piVar4 = (int *)piVar7[1];
                piVar2 = piVar7;
              }
            }
          }
        } while (piVar7 != (int *)this_01[1]);
      }
      LeaveCriticalSection(&local_21c);
      FUN_004d5c60((int)this_01);
      Sleep(0x14);
      FUN_004239f0(local_494);
      local_8._0_1_ = 10;
      FUN_004239f0(local_3ec);
      pcVar3 = timeGetTime_exref;
      this_00 = local_1fc;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


