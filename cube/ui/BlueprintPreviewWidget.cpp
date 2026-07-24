// BlueprintPreviewWidget (ui) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "BlueprintPreviewWidget.h"

/* cube::BlueprintPreviewWidget::vfunction1_for_NamedObject @ 0042f5e0  kind=game  attributed-by=rtti  size=48 */

BlueprintPreviewWidget * __thiscall
cube::BlueprintPreviewWidget::vfunction1_for_NamedObject(BlueprintPreviewWidget *this,byte param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->BlueprintPreviewWidget_data).field_0x128;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  plasma::Widget::~Widget((Widget *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* cube::BlueprintPreviewWidget::deleting_destructor_for_NamedObject @ 0042f910  kind=game  attributed-by=rtti  size=9235 */

void __thiscall
cube::BlueprintPreviewWidget::deleting_destructor_for_NamedObject(BlueprintPreviewWidget *this)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  undefined8 *puVar4;
  int iVar5;
  float *pfVar6;
  undefined4 extraout_EAX;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar7;
  undefined4 uVar8;
  int *piVar9;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar10;
  int iVar11;
  CRefTime *pCVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  BlueprintPreviewWidget *pBVar20;
  uint uVar21;
  float10 fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [4];
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 *puVar32;
  int **ppiVar33;
  undefined1 *puVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 *puVar41;
  undefined4 uVar42;
  undefined *puVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  _func_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr
  *p_Var46;
  undefined4 uVar47;
  undefined1 auStack_ec0 [4];
  float fStack_ebc;
  float fStack_eb8;
  undefined4 uStack_eb4;
  float fStack_eb0;
  undefined4 *puStack_eac;
  BlueprintPreviewWidget *local_ea8;
  float fStack_ea4;
  float fStack_ea0;
  float fStack_e9c;
  float fStack_e98;
  float local_e94;
  float fStack_e90;
  undefined4 *puStack_e8c;
  float fStack_e88;
  uint uStack_e84;
  float fStack_e80;
  float fStack_e7c;
  undefined4 uStack_e78;
  float fStack_e74;
  undefined1 auStack_e70 [4];
  float fStack_e6c;
  float local_e68;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> bStack_e60;
  undefined1 auStack_e5c [4];
  undefined1 auStack_e58 [172];
  int iStack_dac;
  undefined1 auStack_da8 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> abStack_d98 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> abStack_d90 [14];
  undefined4 uStack_d58;
  undefined4 uStack_d54;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> abStack_d40 [5];
  float fStack_d04;
  float fStack_cfc;
  float fStack_cf8;
  float fStack_cf4;
  undefined1 local_cf0 [4];
  float fStack_cec;
  float fStack_ce8;
  float fStack_ce4;
  float fStack_ce0;
  float fStack_cdc;
  float fStack_cd8;
  float fStack_cd4;
  float fStack_cd0;
  undefined4 *puStack_ccc;
  float fStack_cc8;
  float fStack_cc4;
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *pbStack_cc0;
  float fStack_cbc;
  float fStack_cb8;
  float fStack_cb4;
  float fStack_cb0;
  float afStack_cac [4];
  float fStack_c9c;
  float fStack_c98;
  float fStack_c94;
  float fStack_c90;
  float fStack_c8c;
  float fStack_c88;
  float fStack_c84;
  float fStack_c80;
  float fStack_c7c;
  float fStack_c78;
  float fStack_c74;
  float fStack_c70;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  float fStack_c50;
  float fStack_c4c;
  float fStack_c48;
  float fStack_c44;
  float fStack_c40;
  float fStack_c3c;
  float fStack_c38;
  float fStack_c34;
  float fStack_c30;
  float fStack_c2c;
  float fStack_c28;
  float fStack_c24;
  float fStack_c14;
  float fStack_c10;
  float fStack_c0c;
  int iStack_c08;
  int iStack_c04;
  int iStack_c00;
  int iStack_bfc;
  int iStack_bf8;
  int iStack_bf4;
  int iStack_bf0;
  int iStack_bec;
  int iStack_be8;
  int iStack_be4;
  int iStack_be0;
  int iStack_bdc;
  int iStack_bd8;
  int iStack_bd4;
  int iStack_bd0;
  int iStack_bcc;
  int iStack_bc8;
  int iStack_bc4;
  int iStack_bc0;
  int iStack_bbc;
  int iStack_bb8;
  int iStack_bb4;
  int iStack_bb0;
  int iStack_bac;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  int iStack_b98;
  int iStack_b94;
  int iStack_b90;
  int iStack_b8c;
  int iStack_b88;
  int iStack_b84;
  undefined4 uStack_b80;
  undefined4 uStack_b7c;
  float fStack_b78;
  float fStack_b74;
  float fStack_b70;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  undefined4 uStack_b58;
  undefined4 uStack_b54;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  undefined4 uStack_b48;
  undefined4 uStack_b44;
  undefined4 uStack_b40;
  undefined4 uStack_b30;
  undefined4 uStack_b2c;
  undefined4 uStack_b28;
  undefined4 uStack_b24;
  undefined4 uStack_b20;
  undefined4 uStack_b1c;
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  undefined4 uStack_b10;
  undefined4 uStack_b00;
  undefined4 uStack_afc;
  undefined4 uStack_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  undefined4 uStack_ae8;
  undefined4 uStack_ae4;
  undefined4 uStack_ae0;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  undefined4 uStack_ac8;
  undefined4 uStack_ac4;
  undefined4 uStack_ac0;
  undefined4 uStack_abc;
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  undefined4 uStack_aa8;
  undefined4 uStack_aa4;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  undefined4 uStack_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  undefined4 uStack_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  undefined4 uStack_a78;
  undefined4 uStack_a74;
  undefined4 uStack_a70;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined4 uStack_a58;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined4 uStack_a48;
  undefined4 uStack_a44;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  undefined4 uStack_a38;
  undefined4 uStack_a34;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  undefined4 uStack_a28;
  undefined4 uStack_a24;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined4 uStack_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  undefined4 uStack_9e4;
  undefined4 uStack_9e0;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  undefined4 uStack_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined4 uStack_988;
  undefined4 uStack_984;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  undefined4 uStack_968;
  undefined4 uStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined4 uStack_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7b0;
  uint uStack_7ac;
  void *apvStack_7a8 [4];
  undefined4 uStack_798;
  uint uStack_794;
  void *apvStack_790 [4];
  undefined4 uStack_780;
  uint uStack_77c;
  void *apvStack_778 [4];
  undefined4 uStack_768;
  uint uStack_764;
  void *apvStack_760 [4];
  undefined4 uStack_750;
  uint uStack_74c;
  void *apvStack_748 [4];
  undefined4 uStack_738;
  uint uStack_734;
  void *apvStack_730 [4];
  undefined4 uStack_720;
  uint uStack_71c;
  void *apvStack_718 [4];
  undefined4 uStack_708;
  uint uStack_704;
  void *apvStack_700 [4];
  undefined4 uStack_6f0;
  uint uStack_6ec;
  void *apvStack_6e8 [4];
  undefined4 uStack_6d8;
  uint uStack_6d4;
  void *apvStack_6d0 [4];
  undefined4 uStack_6c0;
  uint uStack_6bc;
  void *apvStack_6b8 [4];
  undefined4 uStack_6a8;
  uint uStack_6a4;
  void *apvStack_6a0 [4];
  undefined4 uStack_690;
  uint uStack_68c;
  void *apvStack_688 [4];
  undefined4 uStack_678;
  uint uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_660;
  uint uStack_65c;
  void *apvStack_658 [3];
  float afStack_64c [2];
  uint uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  BlueprintPreviewWidget *pBStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  float afStack_5cc [13];
  float fStack_598;
  float fStack_594;
  float fStack_590;
  void *apvStack_580 [4];
  undefined4 uStack_570;
  uint uStack_56c;
  void *apvStack_568 [3];
  float fStack_55c;
  float fStack_558;
  uint uStack_554;
  void *apvStack_548 [4];
  undefined4 uStack_538;
  uint uStack_534;
  void *apvStack_530 [4];
  undefined4 uStack_520;
  uint uStack_51c;
  void *apvStack_518 [4];
  undefined4 uStack_508;
  uint uStack_504;
  void *apvStack_500 [4];
  undefined4 uStack_4f0;
  uint uStack_4ec;
  void *apvStack_4e8 [5];
  uint uStack_4d4;
  void *apvStack_4d0 [5];
  uint uStack_4bc;
  void *apvStack_4b8 [5];
  uint uStack_4a4;
  void *apvStack_4a0 [5];
  uint uStack_48c;
  void *apvStack_488 [5];
  uint uStack_474;
  void *apvStack_470 [5];
  uint uStack_45c;
  undefined1 auStack_458 [24];
  void *apvStack_440 [5];
  uint uStack_42c;
  undefined1 auStack_428 [24];
  void *apvStack_410 [3];
  undefined1 auStack_404 [8];
  uint uStack_3fc;
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [12];
  undefined1 auStack_3cc [20];
  undefined1 auStack_3b8 [24];
  int *apiStack_3a0 [6];
  void *pvStack_388;
  uint uStack_374;
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [12];
  undefined1 auStack_34c [20];
  undefined1 auStack_338 [12];
  undefined1 auStack_32c [284];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [12];
  undefined8 auStack_1ec [24];
  undefined8 auStack_12c [33];
  undefined4 uStack_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c._0_1_ = 0xff;
  uStack_c._1_3_ = 0xffffff;
  puStack_10 = &LAB_006e2494;
  local_14 = ExceptionList;
  local_1c = DAT_0076aa78 ^ (uint)auStack_ec0;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffff138;
  ExceptionList = &local_14;
  local_e68 = 0.0;
  local_ea8 = this;
  fVar3 = (float)FUN_004ec400(&(this->BlueprintPreviewWidget_data).field_0xc);
  local_e94 = fVar3;
  cVar1 = FUN_00444a90(&(this->BlueprintPreviewWidget_data).field_0xc);
  if (cVar1 == '\0') {
    iVar17 = (this->BlueprintPreviewWidget_data).offset_0x134;
    if ((int)(*(int *)(iVar17 + 0x308) - *(int *)(iVar17 + 0x304) & 0xfffffffcU) < 0x2571)
    goto LAB_0043474d;
    fVar3 = *(float *)(*(int *)(iVar17 + 0x304) + 0x2570);
    local_e94 = fVar3;
  }
  if (fVar3 == 0.0) goto LAB_0043474d;
  FUN_0062dc20(local_cf0);
  piVar9 = *(int **)((this->BlueprintPreviewWidget_data).offset_0x134 + 0x134);
  (**(code **)(*piVar9 + 0xe4))(piVar9,7,1,uVar2);
  iStack_b88 = 0;
  iStack_b84 = 0;
  uStack_b80 = 0;
  uStack_b7c = 0;
  fStack_c2c = 0.0;
  fStack_c28 = 0.0;
  fStack_c24 = 0.0;
  puVar4 = auStack_1ec;
  puVar16 = auStack_12c;
  iVar17 = 0x10;
  do {
    *puVar16 = 0;
    *puVar4 = 0;
    puVar16[1] = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar16 = puVar16 + 2;
    puVar4 = (undefined8 *)((int)puVar4 + 0xc);
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  FUN_00447d10();
  FUN_00448f10(auStack_12c,auStack_1ec);
  uStack_9ec = 0x3f800000;
  uStack_9e8 = 0x3f800000;
  uStack_9e4 = 0x3f800000;
  uStack_9e0 = 0x3f666666;
  FUN_00448280(&uStack_9ec);
  dVar23 = 1.7400000095367432;
  uStack_aec = 0x3ecccccd;
  uStack_ae8 = 0x3ecccccd;
  uStack_ae4 = 0x3ecccccd;
  uStack_ae0 = 0x3f800000;
  libm_sse2_sqrt_precise();
  fStack_b70 = 1.0 / (float)dVar23;
  fStack_b78 = fStack_b70 * 0.7;
  fStack_b74 = fStack_b70 * 0.5;
  fStack_b70 = fStack_b70 * -1.0;
  uStack_b4c = 0x3e4ccccd;
  uStack_b48 = 0x3e4ccccd;
  uStack_b44 = 0x3ecccccd;
  uStack_b40 = 0x3f800000;
  uStack_b1c = 0x3f800000;
  uStack_b18 = 0x3f800000;
  uStack_b14 = 0x3f800000;
  uStack_b10 = 0x3f800000;
  FUN_00448170(&uStack_b1c,&uStack_b4c,&fStack_b78,&uStack_aec);
  fVar22 = (float10)FUN_0062f600();
  fStack_eb8 = (float)fVar22;
  iVar17 = *(int *)((int)fStack_ea0 + 0x48);
  iVar11 = *(int *)((int)fStack_ea0 + 0x4c);
  fStack_e98 = fStack_cfc + fStack_eb8 * 0.5;
  fStack_e90 = fStack_cf8 + 110.0;
  iVar5 = iVar11;
  if (iVar11 < iVar17) {
    iVar5 = iVar17;
  }
  iVar18 = *(int *)((int)fStack_ea0 + 0x44);
  if ((*(int *)((int)fStack_ea0 + 0x44) <= iVar5) && (iVar18 = iVar11, iVar11 < iVar17)) {
    iVar18 = iVar17;
  }
  uStack_60c = 0x3f800000;
  fStack_cf4 = 0.06 / (float)iVar18;
  uStack_608 = 0;
  uStack_604 = 0;
  uStack_600 = 0;
  uStack_5fc = 0;
  uStack_5f8 = 0x3f800000;
  uStack_5f4 = 0;
  uStack_5f0 = 0;
  uStack_5ec = 0;
  uStack_5e8 = 0;
  uStack_5e4 = 0x3f800000;
  uStack_5e0 = 0;
  uStack_5dc = 0;
  uStack_5d8 = 0;
  uStack_5d4 = 0;
  uStack_5d0 = 0x3f800000;
  (this->BlueprintPreviewWidget_data).offset_0x8 =
       (float)*(int *)((this->Object_data).offset_0x0 + 0xe4) * 0.02 +
       (float)(this->BlueprintPreviewWidget_data).offset_0x8;
  (this->BlueprintPreviewWidget_data).offset_0x148 = 0xffffffff;
  *(undefined1 *)&(this->BlueprintPreviewWidget_data).offset_0x14c = 0;
  fStack_55c = fStack_e98;
  fStack_558 = fStack_e90;
  pfVar6 = (float *)FUN_006294d0(auStack_404);
  puStack_eac = (undefined4 *)*pfVar6;
  fVar22 = (float10)FUN_00627d50();
  fStack_eb8 = (float)fVar22;
  if ((fStack_eb8 * 0.5 - 60.0 < (float)puStack_eac) &&
     (iVar17 = FUN_006294d0(auStack_34c), 50.0 < *(float *)(iVar17 + 4))) {
    pfVar6 = (float *)FUN_006294d0(auStack_32c);
    puStack_eac = (undefined4 *)*pfVar6;
    fVar22 = (float10)FUN_00627d50();
    fStack_eb8 = (float)fVar22;
    if (((float)puStack_eac < fStack_eb8 * 0.5 + 60.0) &&
       (iVar17 = FUN_006294d0(auStack_3cc),
       *(float *)(iVar17 + 4) <= 170.0 && *(float *)(iVar17 + 4) != 170.0)) {
      FUN_0042c5e0(&(this->BlueprintPreviewWidget_data).field_0xc);
      fStack_cf4 = fStack_cf4 * 1.5;
    }
  }
  fStack_ebc = 0.0;
  fStack_e80 = 0.0;
  fStack_cbc = 0.0;
  fStack_cb8 = 0.0;
  fStack_eb8 = (float)(this->BlueprintPreviewWidget_data).offset_0x0 * 0.017453292;
  puStack_e8c = (undefined4 *)0x3f800000;
  fStack_cb4 = 1.0;
  dVar23 = (double)fStack_eb8;
  local_e94 = 1.0;
  fStack_cb0 = 1.0;
  libm_sse2_cos_precise();
  fStack_ea4 = (float)dVar23;
  dVar23 = (double)fStack_eb8;
  libm_sse2_sin_precise();
  fStack_e6c = (float)dVar23;
  fVar24 = fStack_e6c * 0.0;
  fVar3 = fStack_ea4 * 0.0;
  fStack_e7c = fVar24 + fVar3;
  puStack_eac = (undefined4 *)(fVar3 - fVar24);
  fStack_e9c = fStack_ea4 + fVar24;
  fStack_ea4 = fStack_ea4 - fVar24;
  fStack_eb0 = fVar3 - fStack_e6c;
  fStack_e6c = fStack_e6c + fVar3;
  fStack_eb8 = (float)(this->BlueprintPreviewWidget_data).offset_0x4 * 0.017453292;
  dVar23 = (double)fStack_eb8;
  libm_sse2_cos_precise();
  auStack_e70 = (undefined1  [4])(float)dVar23;
  dVar23 = (double)fStack_eb8;
  libm_sse2_sin_precise();
  fVar24 = (float)dVar23;
  uStack_e78 = (float)auStack_e70 - fVar24 * (float)puStack_eac;
  puStack_ccc = (undefined4 *)((float)auStack_e70 * (float)puStack_eac + fVar24);
  fVar26 = (float)auStack_e70 * 0.0;
  local_e68 = fVar26 - fVar24 * fStack_eb0;
  fVar3 = fVar24 * 0.0;
  fStack_e74 = (float)auStack_e70 * fStack_eb0 + fVar3;
  local_ea8 = (BlueprintPreviewWidget *)((float)auStack_e70 * fStack_ea4 + fVar3);
  fStack_e88 = fVar26 - fVar24 * (float)puStack_eac;
  auStack_e70 = (undefined1  [4])((float)auStack_e70 * (float)puStack_eac + fVar3);
  fStack_eb8 = (float)(this->BlueprintPreviewWidget_data).offset_0x8 * 0.017453292;
  dVar23 = (double)fStack_eb8;
  puStack_eac = puStack_ccc;
  fStack_ea4 = fVar26 - fVar24 * fStack_ea4;
  fStack_cc8 = fStack_e74;
  fStack_cc4 = (float)local_ea8;
  pbStack_cc0 = (basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)auStack_e70;
  libm_sse2_cos_precise();
  fStack_eb0 = (float)dVar23;
  dVar23 = (double)fStack_eb8;
  libm_sse2_sin_precise();
  fVar3 = (float)dVar23;
  fStack_cec = fVar3 * fStack_e7c + fStack_eb0 * uStack_e78;
  fStack_cdc = fStack_eb0 * fStack_e7c - uStack_e78 * fVar3;
  fStack_ce8 = fVar3 * fStack_e9c + fStack_eb0 * local_e68;
  fStack_cd8 = fStack_eb0 * fStack_e9c - local_e68 * fVar3;
  fStack_ce4 = fVar3 * fStack_e6c + fStack_eb0 * fStack_ea4;
  fStack_cd4 = fStack_eb0 * fStack_e6c - fStack_ea4 * fVar3;
  fStack_ce0 = fVar3 * fStack_e7c + fStack_eb0 * fStack_e88;
  fStack_cd0 = fStack_eb0 * fStack_e7c - fStack_e88 * fVar3;
  auVar27 = auStack_e70;
  puVar14 = puStack_eac;
  if (fStack_cf4 != 1.0) {
    fStack_ce8 = fStack_ce8 * fStack_cf4;
    fStack_cec = fStack_cec * fStack_cf4;
    fStack_ce4 = fStack_ce4 * fStack_cf4;
    fStack_cdc = fStack_cdc * fStack_cf4;
    fStack_ce0 = fStack_ce0 * fStack_cf4;
    fStack_cd8 = fStack_cd8 * fStack_cf4;
    fStack_e74 = fStack_e74 * fStack_cf4;
    fStack_cd4 = fStack_cd4 * fStack_cf4;
    local_ea8 = (BlueprintPreviewWidget *)((float)local_ea8 * fStack_cf4);
    fStack_cd0 = fStack_cd0 * fStack_cf4;
    puStack_ccc = (undefined4 *)((float)puStack_eac * fStack_cf4);
    pbStack_cc0 = (basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)
                  ((float)auStack_e70 * fStack_cf4);
    auVar27 = (undefined1  [4])pbStack_cc0;
    puVar14 = puStack_ccc;
    fStack_cc8 = fStack_e74;
    fStack_cc4 = (float)local_ea8;
  }
  fVar26 = (float)*(int *)((int)fStack_ea0 + 0x48) * -0.5;
  fVar24 = (float)*(int *)((int)fStack_ea0 + 0x44) * -0.5;
  fVar3 = (float)*(int *)((int)fStack_ea0 + 0x4c) * -0.5;
  iVar17 = (this->Object_data).offset_0x0;
  fStack_cbc = fVar26 * fStack_cdc + fVar24 * fStack_cec + fVar3 * (float)puVar14 + fStack_e80;
  fStack_cb8 = fVar26 * fStack_cd8 + fVar24 * fStack_ce8 + fVar3 * fStack_e74 + fStack_e80;
  dVar23 = 0.39269909262657166;
  fStack_cb4 = fVar26 * fStack_cd4 + fVar24 * fStack_ce4 + fVar3 * (float)local_ea8 +
               (float)puStack_e8c;
  fStack_cb0 = fVar26 * fStack_cd0 + fVar24 * fStack_ce0 + fVar3 * (float)auVar27 + local_e94;
  fStack_eb8 = fStack_cec;
  fStack_eb0 = fStack_ce0;
  fStack_ea4 = fStack_cd4;
  fStack_e9c = fStack_ce8;
  fStack_e7c = fStack_ce4;
  uStack_e78 = fStack_cd8;
  fStack_d04 = fStack_cdc;
  libm_sse2_tan_precise();
  pBVar20 = uStack_eb4;
  local_ea8 = (BlueprintPreviewWidget *)(1.0 / (float)dVar23);
  uStack_63c = 0;
  fStack_eb0 = -((float)local_ea8 /
                ((float)*(int *)(iVar17 + 0x10c) / (float)*(int *)(iVar17 + 0x110)));
  afStack_64c[0] = fStack_eb0;
  uStack_62c = 0;
  uStack_61c = 0;
  afStack_64c[1] = 0.0;
  pBStack_638 = local_ea8;
  uStack_628 = 0;
  uStack_618 = 0;
  uStack_644 = 0;
  uStack_634 = 0;
  uStack_624 = 0x3f800347;
  uStack_614 = 0xbdccd20b;
  uStack_640 = 0;
  uStack_630 = 0;
  uStack_620 = 0x3f800000;
  uStack_610 = 0;
  afStack_5cc[0] = 1.0;
  afStack_5cc[1] = 0.0;
  fVar24 = ((fStack_e98 - (float)*(int *)(iVar17 + 0x10c) * 0.5) / (float)*(int *)(iVar17 + 0x10c))
           * 2.0;
  afStack_5cc[2] = 0.0;
  afStack_5cc[3] = 0.0;
  fVar28 = ((fStack_e90 - (float)*(int *)(iVar17 + 0x110) * 0.5) / (float)*(int *)(iVar17 + 0x110))
           * -2.0;
  afStack_5cc[4] = 0.0;
  afStack_5cc[5] = 1.0;
  afStack_5cc[6] = 0.0;
  afStack_5cc[7] = 0.0;
  afStack_5cc[8] = 0.0;
  afStack_5cc[9] = 0.0;
  afStack_5cc[10] = 1.0;
  afStack_5cc[0xb] = 0.0;
  fVar3 = fVar28 * 0.0;
  fVar25 = fVar24 * 0.0;
  fVar26 = fVar3 + fVar24 + 0.0;
  afStack_5cc[0xc] = fVar26;
  fVar3 = fVar25 + fVar3;
  fVar24 = fVar26 * 0.0;
  fStack_598 = fVar25 + fVar28 + 0.0;
  fStack_590 = fVar3 + 1.0;
  fStack_594 = fVar3 + 0.0;
  pfVar6 = afStack_5cc;
  pfVar19 = afStack_cac;
  for (iVar17 = 0x10; fVar28 = afStack_cac[3], fVar25 = afStack_cac[2], fVar3 = afStack_cac[1],
      iVar17 != 0; iVar17 = iVar17 + -1) {
    *pfVar19 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar19 = pfVar19 + 1;
  }
  afStack_cac[0] = fStack_eb0 + 0.0 + 0.0 + fVar24;
  fStack_c9c = (float)local_ea8 * 0.0 + 0.0 + 0.0 + fVar24;
  fStack_c8c = fStack_ebc + 0.0 + fVar26;
  fStack_c7c = (fStack_ebc - 0.0) + fVar24;
  fVar26 = fStack_c78 * 0.0;
  afStack_cac[1] = afStack_cac[1] * fStack_eb0 + fStack_c98 * 0.0 + fStack_c88 * 0.0 + fVar26;
  fVar29 = fVar3 * 0.0 + fStack_c98 * 0.0;
  fStack_c98 = (float)local_ea8 * fStack_c98 + fVar3 * 0.0 + fStack_c88 * 0.0 + fVar26;
  fVar3 = fStack_c88 * 0.10001;
  fStack_c88 = fStack_c88 * 1.0001 + fVar29 + fStack_c78;
  fVar24 = fStack_c74 * 0.0;
  fStack_c78 = (fVar29 - fVar3) + fVar26;
  afStack_cac[2] = fStack_eb0 * afStack_cac[2] + fStack_c94 * 0.0 + fStack_c84 * 0.0 + fVar24;
  fVar26 = fStack_c94 * 0.0 + fVar25 * 0.0;
  fStack_c94 = (float)local_ea8 * fStack_c94 + fVar25 * 0.0 + fStack_c84 * 0.0 + fVar24;
  fVar25 = fStack_c84 * 0.10001;
  fVar3 = fStack_c70 * 0.0;
  fStack_c84 = fStack_c84 * 1.0001 + fVar26 + fStack_c74;
  fStack_c74 = (fVar26 - fVar25) + fVar24;
  afStack_cac[3] = fStack_eb0 * afStack_cac[3] + fStack_c90 * 0.0 + fStack_c80 * 0.0 + fVar3;
  fVar24 = fStack_c90 * 0.0 + fVar28 * 0.0;
  fVar26 = fStack_c80 * 0.10001;
  fStack_c90 = (float)local_ea8 * fStack_c90 + fVar28 * 0.0 + fStack_c80 * 0.0 + fVar3;
  fStack_c80 = fStack_c80 * 1.0001 + fVar24 + fStack_c70;
  fStack_c70 = (fVar24 - fVar26) + fVar3;
  pfVar6 = afStack_cac;
  pfVar19 = afStack_64c;
  for (iVar17 = 0x10; iVar17 != 0; iVar17 = iVar17 + -1) {
    *pfVar19 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar19 = pfVar19 + 1;
  }
  FUN_004482a0(&fStack_cec,&uStack_60c,afStack_64c);
  FUN_004e6df0();
  fVar22 = (float10)FUN_0062f600();
  fStack_ebc = (float)fVar22;
  uStack_e78 = (float)(int)((fStack_ebc - 10.0) / 45.0);
  FUN_006291d0();
  fVar22 = (float10)FUN_00627ce0();
  fStack_ebc = (float)fVar22;
  fStack_cf8 = (fStack_ebc - 130.0) + fStack_cf8;
  cVar1 = FUN_00444a90(&(pBVar20->BlueprintPreviewWidget_data).field_0xc);
  if ((cVar1 != '\0') &&
     (iVar17 = 0,
     0 < (*(int *)&(pBVar20->BlueprintPreviewWidget_data).field_0x12c -
         *(int *)&(pBVar20->BlueprintPreviewWidget_data).field_0x128) / 0x11c)) {
    fStack_ea0 = 0.0;
    do {
      fStack_eb8 = 0.025;
      puStack_eac = (undefined4 *)
                    (int)((float)((iVar17 % (int)uStack_e78) * 0x2d) + fStack_cfc + 10.0);
      fStack_ebc = (float)(int)((float)((iVar17 / (int)uStack_e78) * 0x2d) + fStack_cf8 + 10.0);
      fVar3 = *(float *)((pBVar20->Object_data).offset_0x0 + 0xd4);
      if (((((float)(int)puStack_eac <= fVar3) && (fVar3 < (float)(int)(puStack_eac + 10))) &&
          (fVar3 = *(float *)((pBVar20->Object_data).offset_0x0 + 0xd8),
          (float)(int)fStack_ebc <= fVar3)) && (fVar3 < (float)((int)fStack_ebc + 0x28))) {
        (pBVar20->BlueprintPreviewWidget_data).offset_0x148 = iVar17;
        FUN_0042c5e0(*(int *)&(pBVar20->BlueprintPreviewWidget_data).field_0x128 + (int)fStack_ea0);
        fStack_eb8 = 0.0375;
      }
      uStack_a7c = 0x3f800000;
      uStack_a78 = 0x3f800000;
      uStack_a74 = 0x3f800000;
      uStack_a70 = 0x3f800000;
      FUN_00448280(&uStack_a7c);
      FUN_004758c0((float)(int)(puStack_eac + 5),(float)((int)fStack_ebc + 0x14),
                   (pBVar20->BlueprintPreviewWidget_data).offset_0x134 + 0x800a1c,fStack_eb8,
                   *(int *)&(pBVar20->BlueprintPreviewWidget_data).field_0x128 + (int)fStack_ea0,0);
      fStack_ea0 = (float)((int)fStack_ea0 + 0x11c);
      iVar17 = iVar17 + 1;
    } while (iVar17 < (*(int *)&(pBVar20->BlueprintPreviewWidget_data).field_0x12c -
                      *(int *)&(pBVar20->BlueprintPreviewWidget_data).field_0x128) / 0x11c);
  }
  puVar34 = &(pBVar20->BlueprintPreviewWidget_data).field_0xc;
  piVar9 = *(int **)((pBVar20->BlueprintPreviewWidget_data).offset_0x134 + 0x134);
  (**(code **)(*piVar9 + 0xe4))(piVar9,7,0);
  auStack_e70 = (undefined1  [4])
                &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                 ::vbtable;
  bStack_e60.vbtablePtr = (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08
  ;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(auStack_e58 + 0x50));
  uStack_24 = 0;
  fStack_e80 = 1.4013e-45;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)auStack_e70,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)auStack_e58);
  uStack_24 = 1;
                    /* inlined destructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (auStack_e70 + *(int *)((int)auStack_e70 + 4)) =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable
  ;
  *(int *)((int)&fStack_e74 + *(int *)((int)auStack_e70 + 4)) =
       *(int *)((int)auStack_e70 + 4) + -0x68;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)auStack_e58);
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  auStack_e58._0_4_ =
       &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  auStack_e58._56_4_ = 0;
  auStack_e58._60_4_ = 0;
  uStack_24 = 3;
  fStack_e90 = (float)((uint)fStack_e90 & 0xffffff);
  cVar1 = FUN_00444a90(puVar34);
  if (cVar1 == '\0') {
    FUN_0040e6f0(&bStack_e60,L"Unknown");
    FUN_0040eb60(L"resource1.dat");
    uStack_c._0_1_ = 0x11;
    uVar8 = FUN_00411bc0(apvStack_568);
    uStack_870 = 0;
    uStack_86c = 0;
    uStack_868 = 0;
    uStack_864 = 0;
    uStack_a60 = 0;
    uStack_a5c = 0;
    uStack_a58 = 0;
    uStack_a54 = 0x3f800000;
    uStack_850 = 0x3f800000;
    uStack_84c = 0x3f800000;
    uStack_848 = 0x3f800000;
    uStack_844 = 0x3f800000;
    uStack_c._0_1_ = 0x12;
    FUN_00639b30(apvStack_440,uVar8,0,0,0x41700000,0x42820000,0x41700000,0x40400000,&uStack_850,
                 &uStack_a60,&uStack_870,0,0xbf800000,1);
    if (7 < uStack_554) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_568[0]);
    }
    uStack_554 = 7;
    fStack_558 = 0.0;
    apvStack_568[0] = (void *)((uint)apvStack_568[0] & 0xffff0000);
    uStack_c._0_1_ = 3;
    if (7 < uStack_42c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_440[0]);
    }
    FUN_0040eb60(L"resource1.dat");
    uStack_c._0_1_ = 0x13;
    uVar8 = FUN_00411bc0(apvStack_548);
    uStack_a40 = 0;
    uStack_a3c = 0;
    uStack_a38 = 0;
    uStack_a34 = 0;
    uStack_830 = 0;
    uStack_82c = 0;
    uStack_828 = 0;
    uStack_824 = 0;
    uStack_a20 = 0x3f800000;
    uStack_a1c = 0x3f800000;
    uStack_a18 = 0x3f800000;
    uStack_a14 = 0x3f800000;
    uStack_c._0_1_ = 0x14;
    FUN_00639b30(apvStack_410,uVar8,0,0,0x41700000,0x42820000,0x41700000,0,&uStack_a20,&uStack_830,
                 &uStack_a40,0,0xbf800000,1);
    if (7 < uStack_534) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_548[0]);
    }
    uStack_534 = 7;
    uStack_538 = 0;
    apvStack_548[0] = (void *)((uint)apvStack_548[0] & 0xffff0000);
    uStack_c._0_1_ = 3;
    if (7 < uStack_3fc) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_410[0]);
    }
  }
  else {
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
              ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               ((pBVar20->BlueprintPreviewWidget_data).offset_0x134 + 0x2e4),apiStack_3a0,puVar34);
    uStack_24 = CONCAT31(uStack_24._1_3_,4);
    FUN_00424ba0(&bStack_e60,extraout_EAX);
    uStack_c._0_1_ = 3;
    if (7 < uStack_374) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvStack_388);
    }
    cVar1 = *puVar34;
    if (((((cVar1 != '\f') && (cVar1 != '\r')) &&
         ((cVar1 != '\x15' &&
          ((cVar1 != '\v' || ((pBVar20->BlueprintPreviewWidget_data).field_0xd == '\x0e')))))) &&
        (cVar1 != '\0')) &&
       ((((cVar1 != '\x19' && (cVar1 != '\x14')) && (cVar1 != '\x18')) && (cVar1 != '\x17')))) {
      iVar17 = FUN_004c76a0();
      pbVar7 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
               FUN_0040e6f0(auStack_e58 + 0x10,&DAT_006fd424);
      std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar7,iVar17);
    }
    uStack_7ac = 7;
    uStack_7b0 = 0;
    uStack_7c0 = (void *)((uint)uStack_7c0._2_2_ << 0x10);
    FUN_0040f7a0(L"resource1.dat",0xd);
    uStack_c._0_1_ = 5;
    uVar8 = FUN_00411bc0(apvStack_500);
    uStack_b20 = 0;
    uStack_b1c = 0;
    uStack_b18 = 0;
    uStack_b14 = 0;
    uStack_a50 = 0;
    uStack_a4c = 0;
    uStack_a48 = 0;
    uStack_a44 = 0x3f800000;
    uStack_b00 = 0x3f800000;
    uStack_afc = 0x3f800000;
    uStack_af8 = 0x3f800000;
    uStack_af4 = 0x3f800000;
    uVar45 = 1;
    uStack_c._0_1_ = 6;
    fVar22 = (float10)FUN_00627d50(1);
    fVar3 = (float)fVar22;
    uVar42 = 0x11;
    puVar14 = &uStack_b20;
    puVar15 = &uStack_a50;
    puVar41 = &uStack_b00;
    uVar39 = 0x40400000;
    uVar37 = 0x41400000;
    uVar36 = 0x41f00000;
    fVar22 = (float10)FUN_00627d50(0x41f00000,0x41400000,0x40400000,puVar41,puVar15,puVar14,0x11,
                                   fVar3);
    fStack_eb0 = (float)fVar22;
    FUN_00639b30(&uStack_7c0,uVar8,0,0,fStack_eb0 * 0.5,uVar36,uVar37,uVar39,puVar41,puVar15,puVar14
                 ,uVar42,fVar3,uVar45);
    if (7 < uStack_4ec) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_500[0]);
    }
    uStack_4ec = 7;
    uStack_4f0 = 0;
    apvStack_500[0] = (void *)((uint)apvStack_500[0] & 0xffff0000);
    uStack_c._0_1_ = 3;
    if (7 < uStack_7ac) {
                    /* WARNING: Subroutine does not return */
      operator_delete(uStack_7c0);
    }
    uStack_65c = 7;
    uStack_660 = 0;
    uStack_670 = (void *)((uint)uStack_670._2_2_ << 0x10);
    FUN_0040f7a0(L"resource1.dat",0xd);
    uStack_c._0_1_ = 7;
    uVar8 = FUN_00411bc0(apvStack_530);
    uStack_a30 = 0;
    uStack_a2c = 0;
    uStack_a28 = 0;
    uStack_a24 = 0;
    uStack_a10 = 0;
    uStack_a0c = 0;
    uStack_a08 = 0;
    uStack_a04 = 0;
    uStack_8d0 = 0x3f800000;
    uStack_8cc = 0x3f800000;
    uStack_8c8 = 0x3f800000;
    uStack_8c4 = 0x3f800000;
    uVar45 = 1;
    uStack_c._0_1_ = 8;
    fVar22 = (float10)FUN_00627d50(1);
    fVar3 = (float)fVar22;
    uVar42 = 0x11;
    puVar14 = &uStack_a30;
    puVar15 = &uStack_a10;
    puVar41 = &uStack_8d0;
    uVar39 = 0;
    uVar37 = 0x41400000;
    uVar36 = 0x41f00000;
    fVar22 = (float10)FUN_00627d50(0x41f00000,0x41400000,0,puVar41,puVar15,puVar14,0x11,fVar3);
    fStack_eb0 = (float)fVar22;
    FUN_00639b30(&uStack_670,uVar8,0,0,fStack_eb0 * 0.5,uVar36,uVar37,uVar39,puVar41,puVar15,puVar14
                 ,uVar42,fVar3,uVar45);
    pBVar20 = local_ea8;
    if (7 < uStack_51c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_530[0]);
    }
    uStack_51c = 7;
    uStack_520 = 0;
    apvStack_530[0] = (void *)((uint)apvStack_530[0] & 0xffff0000);
    uStack_c._0_1_ = 3;
    if (7 < uStack_65c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(uStack_670);
    }
    fStack_cf8 = 0.0;
    if (0 < (*(int *)&(local_ea8->BlueprintPreviewWidget_data).field_0x12c -
            *(int *)&(local_ea8->BlueprintPreviewWidget_data).field_0x128) / 0x11c) {
      fStack_e98 = 0.0;
      do {
        iVar17 = (int)fStack_cf8 / (int)fStack_e6c;
        fStack_eb8 = (float)(((int)fStack_cf8 % (int)fStack_e6c) * 0x2d + 0x32);
        puStack_eac = *(undefined4 **)
                       (*(int *)&(pBVar20->BlueprintPreviewWidget_data).field_0x128 + 0x118 +
                       (int)fStack_e98);
        fVar22 = (float10)FUN_00627ce0();
        fStack_eb0 = (float)fVar22;
        fStack_e9c = 0.0;
        auStack_e70 = (undefined1  [4])0x0;
        fStack_ea0 = (float)(int)((fStack_eb0 - 130.0) + (float)(iVar17 * 0x2d) + 55.0);
        fVar3 = *(float *)((pBVar20->BlueprintPreviewWidget_data).offset_0x134 + 0x8006d0);
        local_e94 = fVar3;
        if (0 < (*(int *)((int)fVar3 + 0x11e0) - *(int *)((int)fVar3 + 0x11dc)) / 0xc) {
          fStack_e90 = 0.0;
          do {
            piVar9 = (int *)(*(int *)((int)fVar3 + 0x11dc) + (int)fStack_e90);
            fStack_ea4 = 0.0;
            if (0 < (piVar9[1] - *piVar9) / 0x11c) {
              iVar17 = 0;
              do {
                if ((*(int *)(iVar17 + *(int *)(*(int *)((int)local_e94 + 0x11dc) + (int)fStack_e90)
                             ) != 0) &&
                   (cVar1 = FUN_0042f4a0(*(int *)(*(int *)((int)local_e94 + 0x11dc) +
                                                 (int)fStack_e90) + 4 + iVar17), cVar1 != '\0')) {
                  auStack_e70 = (undefined1  [4])
                                ((int)(int *)auStack_e70 +
                                *(int *)(*(int *)(*(int *)((int)local_e94 + 0x11dc) +
                                                 (int)fStack_e90) + iVar17));
                }
                fStack_ea4 = (float)((int)fStack_ea4 + 1);
                piVar9 = (int *)(*(int *)((int)local_e94 + 0x11dc) + (int)fStack_e90);
                iVar17 = iVar17 + 0x11c;
                fVar3 = local_e94;
              } while ((int)fStack_ea4 < (piVar9[1] - *piVar9) / 0x11c);
            }
            fStack_e90 = (float)((int)fStack_e90 + 0xc);
            fStack_e9c = (float)((int)fStack_e9c + 1);
          } while ((int)fStack_e9c <
                   (*(int *)((int)fVar3 + 0x11e0) - *(int *)((int)fVar3 + 0x11dc)) / 0xc);
        }
        auVar27 = auStack_e70;
        uStack_c60 = 0x3f80000000000000;
        uStack_c58 = 0x3f80000000000000;
        if ((int)auStack_e70 < (int)puStack_eac) {
          uStack_ba8 = 0x3f800000;
          uStack_ba4 = 0x3f800000;
          uStack_c60 = 0x3f8000003f800000;
          uStack_ba0 = 0x3f800000;
          uStack_b9c = 0x3f800000;
          uStack_c58 = 0x3f8000003f800000;
          uStack_e78 = (float)CONCAT13(1,(undefined3)uStack_e78);
        }
        auStack_da8._0_4_ =
             &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              vbtable;
        abStack_d98[0].vbtablePtr =
             (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
        std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
        basic_ios<wchar_t,std::char_traits<wchar_t>_>(abStack_d40);
        local_e68 = (float)((uint)local_e68 | 2);
        uStack_c = CONCAT31(uStack_c._1_3_,9);
        std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
        basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                  ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)auStack_da8,
                   (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)abStack_d90);
        uStack_c = 10;
        *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
         (auStack_da8 + *(int *)(auStack_da8._0_4_ + 4)) =
             &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              vftable;
        *(int *)((int)&iStack_dac + *(int *)(auStack_da8._0_4_ + 4)) =
             *(int *)(auStack_da8._0_4_ + 4) + -0x68;
        std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
        basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(abStack_d90);
        abStack_d90[0] =
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
             &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              vftable;
        uStack_d58 = 0;
        uStack_d54 = 0;
        uStack_c._0_1_ = 0xc;
        puVar43 = &DAT_006fd42c;
        puVar14 = puStack_eac;
        p_Var46 = endl_exref;
        pbVar10 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                            (abStack_d98,(int)auVar27);
        pbVar7 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e6f0(pbVar10,puVar43);
        pbVar10 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                            (pbVar7,(int)puVar14);
        std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                  ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)pbVar10,p_Var46);
        uStack_764 = 7;
        uStack_768 = 0;
        apvStack_778[0] = (void *)((uint)apvStack_778[0] & 0xffff0000);
        FUN_0040f7a0(L"resource1.dat",0xd);
        uStack_c._0_1_ = 0xd;
        uVar8 = FUN_00411bc0(apvStack_580);
        fVar3 = fStack_eb8;
        uStack_c._0_1_ = 0xe;
        uStack_ac0 = 0;
        uStack_abc = 0;
        uStack_ab8 = 0;
        uStack_ab4 = 0;
        uStack_8b0 = 0;
        uStack_8ac = 0;
        uStack_8a8 = 0;
        uStack_8a4 = 0x3f800000;
        uStack_aa0 = 0x3f800000;
        uStack_a9c = 0x3f800000;
        uStack_a98 = 0x3f800000;
        uStack_a94 = 0x3f800000;
        FUN_00639b30(apvStack_778,uVar8,0,0,(float)(int)fStack_eb8,(float)(int)fStack_ea0,0x41200000
                     ,0x40000000,&uStack_aa0,&uStack_8b0,&uStack_ac0,2,0xbf800000,1);
        if (7 < uStack_56c) {
                    /* WARNING: Subroutine does not return */
          operator_delete(apvStack_580[0]);
        }
        uStack_56c = 7;
        uStack_570 = 0;
        apvStack_580[0] = (void *)((uint)apvStack_580[0] & 0xffff0000);
        uStack_c._0_1_ = 0xc;
        if (7 < uStack_764) {
                    /* WARNING: Subroutine does not return */
          operator_delete(apvStack_778[0]);
        }
        uStack_6a4 = 7;
        uStack_6a8 = 0;
        apvStack_6b8[0] = (void *)((uint)apvStack_6b8[0] & 0xffff0000);
        FUN_0040f7a0(L"resource1.dat",0xd);
        uStack_c._0_1_ = 0xf;
        uVar8 = FUN_00411bc0(apvStack_518);
        uStack_890 = 0;
        uStack_88c = 0;
        uStack_888 = 0;
        uStack_884 = 0;
        uStack_a80 = 0;
        uStack_a7c = 0;
        uStack_a78 = 0;
        uStack_a74 = 0;
        uStack_c._0_1_ = 0x10;
        FUN_00639b30(apvStack_6b8,uVar8,0,0,(float)(int)fVar3,(float)(int)fStack_ea0,0x41200000,0,
                     &uStack_c60,&uStack_a80,&uStack_890,2,0xbf800000,1);
        if (7 < uStack_504) {
                    /* WARNING: Subroutine does not return */
          operator_delete(apvStack_518[0]);
        }
        uStack_504 = 7;
        uStack_508 = 0;
        apvStack_518[0] = (void *)((uint)apvStack_518[0] & 0xffff0000);
        if (7 < uStack_6a4) {
                    /* WARNING: Subroutine does not return */
          operator_delete(apvStack_6b8[0]);
        }
        uStack_c._0_1_ = 3;
        std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                  ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *
                   )auStack_da8);
        fStack_e98 = (float)((int)fStack_e98 + 0x11c);
        fStack_cf8 = (float)((int)fStack_cf8 + 1);
      } while ((int)fStack_cf8 <
               (*(int *)&(pBVar20->BlueprintPreviewWidget_data).field_0x12c -
               *(int *)&(pBVar20->BlueprintPreviewWidget_data).field_0x128) / 0x11c);
    }
  }
  uStack_eb4 = (BlueprintPreviewWidget *)((uint)uStack_eb4 & 0xffffff);
  cVar1 = '\0';
  switch(*(undefined4 *)&(pBVar20->BlueprintPreviewWidget_data).field_0x124) {
  case 1:
    fStack_eb8 = (float)(pBVar20->BlueprintPreviewWidget_data).offset_0x134;
    iVar17 = *(int *)((int)fStack_eb8 + 0x8006d0);
    if ((*(byte *)(iVar17 + 0x5c) & 2) == 0) {
      fStack_eb0 = *(float *)(iVar17 + 0x88) * 0.5 * 65536.0;
      uVar30 = FUN_0068d946();
      uVar2 = *(uint *)(iVar17 + 0x20);
      iVar17 = *(int *)(iVar17 + 0x24);
      uVar21 = uVar2 - (uint)uVar30;
      uVar31 = FUN_0068d946();
      iVar11 = *(int *)((int)fStack_eb8 + 0x8006d0);
      iVar17 = FUN_0042f860(*(undefined4 *)(iVar11 + 0x10),*(undefined4 *)(iVar11 + 0x14),
                            *(undefined4 *)(iVar11 + 0x18),*(undefined4 *)(iVar11 + 0x1c),
                            uVar21 - (uint)uVar31,
                            (((iVar17 - (int)((ulonglong)uVar30 >> 0x20)) -
                             (uint)(uVar2 < (uint)uVar30)) - (int)((ulonglong)uVar31 >> 0x20)) -
                            (uint)(uVar21 < (uint)uVar31),0);
      if ((*(byte *)(iVar17 + 3) & 0x1f) != 3) {
        uStack_eb4 = (BlueprintPreviewWidget *)CONCAT13(1,(undefined3)uStack_eb4);
        FUN_0040eb60(L"Requires water");
        uStack_c._0_1_ = 0x15;
        fVar22 = (float10)FUN_006291d0();
        fStack_eb0 = (float)fVar22;
        puStack_eac = (undefined4 *)(fStack_eb0 - 40.0);
        FUN_0040eb60(L"resource1.dat");
        uVar8 = 1;
        uStack_c._0_1_ = 0x16;
        uStack_810 = 0;
        uStack_80c = 0;
        uStack_808 = 0;
        uStack_804 = 0;
        uStack_a00 = 0;
        uStack_9fc = 0;
        uStack_9f8 = 0;
        uStack_9f4 = 0x3f800000;
        uStack_7f0 = 0x3f800000;
        uStack_7ec = 0x3e800000;
        uStack_7e8 = 0x3e800000;
        uStack_7e4 = 0x3f800000;
        fVar22 = (float10)FUN_0062f600(1);
        fStack_eb0 = (float)fVar22;
        fVar22 = (float10)FUN_0062f600();
        fStack_eb8 = (float)fVar22;
        FUN_00639b30(apvStack_748,apvStack_488,0,0,0x41700000,puStack_eac,0x41100000,0x40400000,
                     &uStack_7f0,&uStack_a00,&uStack_810,0x10,
                     ((fStack_eb0 - fStack_eb8) - 40.0) - 10.0,uVar8);
        uStack_c._0_1_ = 0x15;
        if (7 < uStack_734) {
                    /* WARNING: Subroutine does not return */
          operator_delete(apvStack_748[0]);
        }
        uStack_734 = 7;
        uStack_738 = 0;
        apvStack_748[0] = (void *)((uint)apvStack_748[0] & 0xffff0000);
        FUN_0040eb60(L"resource1.dat");
        uVar8 = 1;
        uStack_c._0_1_ = 0x17;
        uStack_7d0 = 0;
        uStack_7cc = 0;
        uStack_7c8 = 0;
        uStack_7c4 = 0;
        uStack_7e0 = 0;
        uStack_7dc = 0;
        uStack_7d8 = 0;
        uStack_7d4 = 0;
        uStack_9c0 = 0x3f800000;
        uStack_9bc = 0x3e800000;
        uStack_9b8 = 0x3e800000;
        uStack_9b4 = 0x3f800000;
        fVar22 = (float10)FUN_0062f600(1);
        fStack_eb0 = (float)fVar22;
        fVar22 = (float10)FUN_0062f600();
        fStack_eb8 = (float)fVar22;
        FUN_00639b30(apvStack_658,apvStack_488,0,0,0x41700000,puStack_eac,0x41100000,0,&uStack_9c0,
                     &uStack_7e0,&uStack_7d0,0x10,((fStack_eb0 - fStack_eb8) - 40.0) - 10.0,uVar8);
        if (7 < uStack_644) {
                    /* WARNING: Subroutine does not return */
          operator_delete(apvStack_658[0]);
        }
        uStack_644 = 7;
        afStack_64c[1] = 0.0;
        apvStack_658[0] = (void *)((uint)apvStack_658[0] & 0xffff0000);
        apvStack_4e8[0] = apvStack_488[0];
        uStack_4d4 = uStack_474;
        break;
      }
      pBVar20 = local_ea8;
      cVar1 = uStack_eb4._3_1_;
    }
  default:
    goto LAB_00431f28;
  case 3:
    fStack_eb0 = (float)(pBVar20->BlueprintPreviewWidget_data).offset_0x134;
    fStack_ea4 = *(float *)((int)fStack_eb0 + 0x8006d0);
    iVar17 = __alldiv(*(undefined4 *)((int)fStack_ea4 + 0x10),
                      *(undefined4 *)((int)fStack_ea4 + 0x14),0x10000,0);
    iVar11 = (int)((iVar17 >> 0x1f & 7U) + iVar17) >> 3;
    iVar17 = __alldiv(*(undefined4 *)((int)fStack_ea4 + 0x18),
                      *(undefined4 *)((int)fStack_ea4 + 0x1c),0x10000,0);
    fVar3 = (float)(iVar11 + -1);
    fStack_e7c = (float)(iVar11 + 1);
    fStack_e88 = (float)((int)(iVar17 + (iVar17 >> 0x1f & 7U)) >> 3);
    uStack_eb4 = (BlueprintPreviewWidget *)CONCAT13(1,(undefined3)uStack_eb4);
    fStack_e9c = fVar3;
    if ((int)fVar3 <= (int)fStack_e7c) {
      fStack_e74 = (float)((int)fStack_e88 + -1);
      iVar17 = (int)fStack_e88 + 1;
      fVar24 = fStack_e74;
      do {
        fVar26 = fVar24;
        fStack_ea0 = fVar24;
        if ((int)fVar24 <= iVar17) {
          fStack_e80 = (float)((int)fStack_eb0 + 0x2e4);
          fStack_e9c = fVar3;
          do {
            fStack_ea0 = fVar24;
            puVar14 = (undefined4 *)FUN_0042f640(fVar3,fVar24,0);
            if (puVar14 != (undefined4 *)0x0) {
              puStack_e8c = (undefined4 *)*puVar14;
              for (puStack_eac = (undefined4 *)*puStack_e8c; puStack_eac != puStack_e8c;
                  puStack_eac = (undefined4 *)*puStack_eac) {
                piVar9 = (int *)puStack_eac[2];
                if (*piVar9 == 0x47) {
                  uStack_e84 = piVar9[6];
                  iStack_bd8 = piVar9[2] - *(uint *)((int)fStack_ea4 + 0x10);
                  iStack_bd4 = (piVar9[3] - *(int *)((int)fStack_ea4 + 0x14)) -
                               (uint)((uint)piVar9[2] < *(uint *)((int)fStack_ea4 + 0x10));
                  iStack_bd0 = piVar9[4] - *(uint *)((int)fStack_ea4 + 0x18);
                  iStack_bcc = (piVar9[5] - *(int *)((int)fStack_ea4 + 0x1c)) -
                               (uint)((uint)piVar9[4] < *(uint *)((int)fStack_ea4 + 0x18));
                  iStack_bc8 = uStack_e84 - *(uint *)((int)fStack_ea4 + 0x20);
                  iStack_bc4 = (piVar9[7] - *(int *)((int)fStack_ea4 + 0x24)) -
                               (uint)(uStack_e84 < *(uint *)((int)fStack_ea4 + 0x20));
                  fStack_c2c = (float)CONCAT44(iStack_bd4,iStack_bd8) * 1.5258789e-05;
                  fStack_eb8 = (float)CONCAT44(iStack_bc4,iStack_bc8);
                  fStack_c28 = (float)CONCAT44(iStack_bcc,iStack_bd0) * 1.5258789e-05;
                  fStack_c24 = fStack_eb8 * 1.5258789e-05;
                  if (fStack_c28 * fStack_c28 + fStack_c2c * fStack_c2c + fStack_c24 * fStack_c24 <
                      16.0) goto LAB_004325ae;
                }
                fVar3 = fStack_e9c;
              }
            }
            fVar24 = (float)((int)fStack_ea0 + 1);
            iVar17 = (int)fStack_e88 + 1;
            fVar26 = fStack_e74;
            fStack_ea0 = fVar24;
          } while ((int)fVar24 <= iVar17);
        }
        fVar3 = (float)((int)fVar3 + 1);
        fVar24 = fVar26;
        fStack_e9c = fVar3;
      } while ((int)fVar3 <= (int)fStack_e7c);
    }
    FUN_0040eb60(L"Requires Furnace");
    uStack_c._0_1_ = 0x1e;
    fVar22 = (float10)FUN_006291d0();
    fStack_eb0 = (float)fVar22;
    puStack_eac = (undefined4 *)(fStack_eb0 - 40.0);
    FUN_0040eb60(L"resource1.dat");
    uStack_860 = 0;
    uStack_85c = 0;
    uStack_858 = 0;
    uStack_854 = 0;
    uStack_8e0 = 0;
    uStack_8dc = 0;
    uStack_8d8 = 0;
    uStack_8d4 = 0x3f800000;
    uStack_b60 = 0x3f800000;
    uStack_b5c = 0x3e800000;
    uStack_b58 = 0x3e800000;
    uStack_b54 = 0x3f800000;
    uVar8 = 1;
    uStack_c._0_1_ = 0x1f;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    FUN_00639b30(apvStack_790,apvStack_470,0,0,0x41700000,puStack_eac,0x41100000,0x40400000,
                 &uStack_b60,&uStack_8e0,&uStack_860,0x10,((fStack_eb0 - fStack_eb8) - 40.0) - 10.0,
                 uVar8);
    uStack_c._0_1_ = 0x1e;
    if (7 < uStack_77c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_790[0]);
    }
    uStack_77c = 7;
    uStack_780 = 0;
    apvStack_790[0] = (void *)((uint)apvStack_790[0] & 0xffff0000);
    FUN_0040eb60(L"resource1.dat");
    uVar8 = 1;
    uStack_c._0_1_ = 0x20;
    uStack_9f0 = 0;
    uStack_9ec = 0;
    uStack_9e8 = 0;
    uStack_9e4 = 0;
    uStack_9d0 = 0;
    uStack_9cc = 0;
    uStack_9c8 = 0;
    uStack_9c4 = 0;
    uStack_9b0 = 0x3f800000;
    uStack_9ac = 0x3e800000;
    uStack_9a8 = 0x3e800000;
    uStack_9a4 = 0x3f800000;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    FUN_00639b30(apvStack_760,apvStack_470,0,0,0x41700000,puStack_eac,0x41100000,0,&uStack_9b0,
                 &uStack_9d0,&uStack_9f0,0x10,((fStack_eb0 - fStack_eb8) - 40.0) - 10.0,uVar8);
    if (7 < uStack_74c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_760[0]);
    }
    uStack_74c = 7;
    uStack_750 = 0;
    apvStack_760[0] = (void *)((uint)apvStack_760[0] & 0xffff0000);
    apvStack_4e8[0] = apvStack_470[0];
    uStack_4d4 = uStack_45c;
    break;
  case 4:
    fStack_eb0 = (float)(pBVar20->BlueprintPreviewWidget_data).offset_0x134;
    fStack_ea4 = *(float *)((int)fStack_eb0 + 0x8006d0);
    iVar17 = __alldiv(*(undefined4 *)((int)fStack_ea4 + 0x10),
                      *(undefined4 *)((int)fStack_ea4 + 0x14),0x10000,0);
    iVar11 = (int)((iVar17 >> 0x1f & 7U) + iVar17) >> 3;
    iVar17 = __alldiv(*(undefined4 *)((int)fStack_ea4 + 0x18),
                      *(undefined4 *)((int)fStack_ea4 + 0x1c),0x10000,0);
    fVar3 = (float)(iVar11 + -1);
    fStack_e7c = (float)(iVar11 + 1);
    fStack_e88 = (float)((int)(iVar17 + (iVar17 >> 0x1f & 7U)) >> 3);
    uStack_eb4 = (BlueprintPreviewWidget *)CONCAT13(1,(undefined3)uStack_eb4);
    fStack_e9c = fVar3;
    if ((int)fVar3 <= (int)fStack_e7c) {
      fStack_e74 = (float)((int)fStack_e88 + -1);
      iVar17 = (int)fStack_e88 + 1;
      fVar24 = fStack_e74;
      do {
        fVar26 = fVar24;
        fStack_ea0 = fVar24;
        if ((int)fVar24 <= iVar17) {
          fStack_e80 = (float)((int)fStack_eb0 + 0x2e4);
          fStack_e9c = fVar3;
          do {
            fStack_ea0 = fVar24;
            puVar14 = (undefined4 *)FUN_0042f640(fVar3,fVar24,0);
            if (puVar14 != (undefined4 *)0x0) {
              puStack_e8c = (undefined4 *)*puVar14;
              for (puStack_eac = (undefined4 *)*puStack_e8c; puStack_eac != puStack_e8c;
                  puStack_eac = (undefined4 *)*puStack_eac) {
                piVar9 = (int *)puStack_eac[2];
                if (*piVar9 == 0x48) {
                  uStack_e84 = piVar9[6];
                  iStack_b98 = piVar9[2] - *(uint *)((int)fStack_ea4 + 0x10);
                  iStack_b94 = (piVar9[3] - *(int *)((int)fStack_ea4 + 0x14)) -
                               (uint)((uint)piVar9[2] < *(uint *)((int)fStack_ea4 + 0x10));
                  iStack_b90 = piVar9[4] - *(uint *)((int)fStack_ea4 + 0x18);
                  iStack_b8c = (piVar9[5] - *(int *)((int)fStack_ea4 + 0x1c)) -
                               (uint)((uint)piVar9[4] < *(uint *)((int)fStack_ea4 + 0x18));
                  iStack_b88 = uStack_e84 - *(uint *)((int)fStack_ea4 + 0x20);
                  iStack_b84 = (piVar9[7] - *(int *)((int)fStack_ea4 + 0x24)) -
                               (uint)(uStack_e84 < *(uint *)((int)fStack_ea4 + 0x20));
                  fStack_c14 = (float)CONCAT44(iStack_b94,iStack_b98) * 1.5258789e-05;
                  fStack_eb8 = (float)CONCAT44(iStack_b84,iStack_b88);
                  fStack_c10 = (float)CONCAT44(iStack_b8c,iStack_b90) * 1.5258789e-05;
                  fStack_c0c = fStack_eb8 * 1.5258789e-05;
                  if (fStack_c10 * fStack_c10 + fStack_c14 * fStack_c14 + fStack_c0c * fStack_c0c <
                      16.0) goto LAB_004325ae;
                }
                fVar3 = fStack_e9c;
              }
            }
            fVar24 = (float)((int)fStack_ea0 + 1);
            iVar17 = (int)fStack_e88 + 1;
            fVar26 = fStack_e74;
            fStack_ea0 = fVar24;
          } while ((int)fVar24 <= iVar17);
        }
        fVar3 = (float)((int)fVar3 + 1);
        fVar24 = fVar26;
        fStack_e9c = fVar3;
      } while ((int)fVar3 <= (int)fStack_e7c);
    }
    FUN_0040eb60(L"Requires Anvil");
    uStack_c._0_1_ = 0x21;
    fVar22 = (float10)FUN_006291d0();
    fStack_eb0 = (float)fVar22;
    puStack_eac = (undefined4 *)(fStack_eb0 - 40.0);
    FUN_0040eb60(L"resource1.dat");
    uStack_990 = 0;
    uStack_98c = 0;
    uStack_988 = 0;
    uStack_984 = 0;
    uStack_970 = 0;
    uStack_96c = 0;
    uStack_968 = 0;
    uStack_964 = 0x3f800000;
    uStack_950 = 0x3f800000;
    uStack_94c = 0x3e800000;
    uStack_948 = 0x3e800000;
    uStack_944 = 0x3f800000;
    uVar8 = 1;
    uStack_c._0_1_ = 0x22;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    FUN_00639b30(apvStack_730,apvStack_4b8,0,0,0x41700000,puStack_eac,0x41100000,0x40400000,
                 &uStack_950,&uStack_970,&uStack_990,0x10,((fStack_eb0 - fStack_eb8) - 40.0) - 10.0,
                 uVar8);
    uStack_c._0_1_ = 0x21;
    if (7 < uStack_71c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_730[0]);
    }
    uStack_71c = 7;
    uStack_720 = 0;
    apvStack_730[0] = (void *)((uint)apvStack_730[0] & 0xffff0000);
    FUN_0040eb60(L"resource1.dat");
    uVar8 = 1;
    uStack_c._0_1_ = 0x23;
    uStack_930 = 0;
    uStack_92c = 0;
    uStack_928 = 0;
    uStack_924 = 0;
    uStack_910 = 0;
    uStack_90c = 0;
    uStack_908 = 0;
    uStack_904 = 0;
    uStack_8f0 = 0x3f800000;
    uStack_8ec = 0x3e800000;
    uStack_8e8 = 0x3e800000;
    uStack_8e4 = 0x3f800000;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    FUN_00639b30(apvStack_700,apvStack_4b8,0,0,0x41700000,puStack_eac,0x41100000,0,&uStack_8f0,
                 &uStack_910,&uStack_930,0x10,((fStack_eb0 - fStack_eb8) - 40.0) - 10.0,uVar8);
    if (7 < uStack_6ec) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_700[0]);
    }
    uStack_6ec = 7;
    uStack_6f0 = 0;
    apvStack_700[0] = (void *)((uint)apvStack_700[0] & 0xffff0000);
    apvStack_4e8[0] = apvStack_4b8[0];
    uStack_4d4 = uStack_4a4;
    break;
  case 5:
    fStack_eb0 = (float)(pBVar20->BlueprintPreviewWidget_data).offset_0x134;
    fStack_ea4 = *(float *)((int)fStack_eb0 + 0x8006d0);
    iVar17 = __alldiv(*(undefined4 *)((int)fStack_ea4 + 0x10),
                      *(undefined4 *)((int)fStack_ea4 + 0x14),0x10000,0);
    iVar11 = (int)((iVar17 >> 0x1f & 7U) + iVar17) >> 3;
    iVar17 = __alldiv(*(undefined4 *)((int)fStack_ea4 + 0x18),
                      *(undefined4 *)((int)fStack_ea4 + 0x1c),0x10000,0);
    fVar3 = (float)(iVar11 + -1);
    fStack_e7c = (float)(iVar11 + 1);
    fStack_e88 = (float)((int)(iVar17 + (iVar17 >> 0x1f & 7U)) >> 3);
    uStack_eb4 = (BlueprintPreviewWidget *)CONCAT13(1,(undefined3)uStack_eb4);
    fStack_e9c = fVar3;
    if ((int)fVar3 <= (int)fStack_e7c) {
      fStack_e74 = (float)((int)fStack_e88 + -1);
      iVar17 = (int)fStack_e88 + 1;
      fVar24 = fStack_e74;
      do {
        fVar26 = fVar24;
        fStack_ea0 = fVar24;
        if ((int)fVar24 <= iVar17) {
          fStack_e80 = (float)((int)fStack_eb0 + 0x2e4);
          fStack_e9c = fVar3;
          do {
            fStack_ea0 = fVar24;
            piVar9 = (int *)FUN_0042f640(fVar3,fVar24,0);
            if (piVar9 != (int *)0x0) {
              puStack_e8c = (undefined4 *)*piVar9;
              for (puStack_eac = (undefined4 *)*puStack_e8c; puStack_eac != puStack_e8c;
                  puStack_eac = (undefined4 *)*puStack_eac) {
                piVar9 = (int *)puStack_eac[2];
                if (*piVar9 == 0x49) {
                  uStack_e84 = piVar9[6];
                  iStack_bc0 = piVar9[2] - *(uint *)((int)fStack_ea4 + 0x10);
                  iStack_bbc = (piVar9[3] - *(int *)((int)fStack_ea4 + 0x14)) -
                               (uint)((uint)piVar9[2] < *(uint *)((int)fStack_ea4 + 0x10));
                  iStack_bb8 = piVar9[4] - *(uint *)((int)fStack_ea4 + 0x18);
                  iStack_bb4 = (piVar9[5] - *(int *)((int)fStack_ea4 + 0x1c)) -
                               (uint)((uint)piVar9[4] < *(uint *)((int)fStack_ea4 + 0x18));
                  iStack_bb0 = uStack_e84 - *(uint *)((int)fStack_ea4 + 0x20);
                  iStack_bac = (piVar9[7] - *(int *)((int)fStack_ea4 + 0x24)) -
                               (uint)(uStack_e84 < *(uint *)((int)fStack_ea4 + 0x20));
                  fStack_c50 = (float)CONCAT44(iStack_bbc,iStack_bc0) * 1.5258789e-05;
                  fStack_eb8 = (float)CONCAT44(iStack_bac,iStack_bb0);
                  fStack_c4c = (float)CONCAT44(iStack_bb4,iStack_bb8) * 1.5258789e-05;
                  fStack_c48 = fStack_eb8 * 1.5258789e-05;
                  if (fStack_c4c * fStack_c4c + fStack_c50 * fStack_c50 + fStack_c48 * fStack_c48 <
                      16.0) goto LAB_004325ae;
                }
                fVar3 = fStack_e9c;
              }
            }
            fVar24 = (float)((int)fStack_ea0 + 1);
            iVar17 = (int)fStack_e88 + 1;
            fVar26 = fStack_e74;
            fStack_ea0 = fVar24;
          } while ((int)fVar24 <= iVar17);
        }
        fVar3 = (float)((int)fVar3 + 1);
        fVar24 = fVar26;
        fStack_e9c = fVar3;
      } while ((int)fVar3 <= (int)fStack_e7c);
    }
    FUN_0040eb60(L"Requires Spinning Wheel");
    uStack_c._0_1_ = 0x18;
    fVar22 = (float10)FUN_006291d0();
    fStack_eb0 = (float)fVar22;
    puStack_eac = (undefined4 *)(fStack_eb0 - 40.0);
    FUN_0040eb60(L"resource1.dat");
    uStack_8c0 = 0;
    uStack_8bc = 0;
    uStack_8b8 = 0;
    uStack_8b4 = 0;
    uStack_9a0 = 0;
    uStack_99c = 0;
    uStack_998 = 0;
    uStack_994 = 0x3f800000;
    uStack_840 = 0x3f800000;
    uStack_83c = 0x3e800000;
    uStack_838 = 0x3e800000;
    uStack_834 = 0x3f800000;
    uVar8 = 1;
    uStack_c._0_1_ = 0x19;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    FUN_00639b30(apvStack_718,apvStack_4d0,0,0,0x41700000,puStack_eac,0x41100000,0x40400000,
                 &uStack_840,&uStack_9a0,&uStack_8c0,0x10,((fStack_eb0 - fStack_eb8) - 40.0) - 10.0,
                 uVar8);
    uStack_c._0_1_ = 0x18;
    if (7 < uStack_704) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_718[0]);
    }
    uStack_704 = 7;
    uStack_708 = 0;
    apvStack_718[0] = (void *)((uint)apvStack_718[0] & 0xffff0000);
    FUN_0040eb60(L"resource1.dat");
    uVar8 = 1;
    uStack_c._0_1_ = 0x1a;
    uStack_980 = 0;
    uStack_97c = 0;
    uStack_978 = 0;
    uStack_974 = 0;
    uStack_8a0 = 0;
    uStack_89c = 0;
    uStack_898 = 0;
    uStack_894 = 0;
    uStack_960 = 0x3f800000;
    uStack_95c = 0x3e800000;
    uStack_958 = 0x3e800000;
    uStack_954 = 0x3f800000;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    FUN_00639b30(apvStack_688,apvStack_4d0,0,0,0x41700000,puStack_eac,0x41100000,0,&uStack_960,
                 &uStack_8a0,&uStack_980,0x10,((fStack_eb0 - fStack_eb8) - 40.0) - 10.0,uVar8);
    if (7 < uStack_674) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_688[0]);
    }
    uStack_674 = 7;
    uStack_678 = 0;
    apvStack_688[0] = (void *)((uint)apvStack_688[0] & 0xffff0000);
    apvStack_4e8[0] = apvStack_4d0[0];
    uStack_4d4 = uStack_4bc;
    break;
  case 6:
    fStack_eb0 = (float)(pBVar20->BlueprintPreviewWidget_data).offset_0x134;
    fStack_ea4 = *(float *)((int)fStack_eb0 + 0x8006d0);
    iVar17 = __alldiv(*(undefined4 *)((int)fStack_ea4 + 0x10),
                      *(undefined4 *)((int)fStack_ea4 + 0x14),0x10000,0);
    iVar11 = (int)((iVar17 >> 0x1f & 7U) + iVar17) >> 3;
    iVar17 = __alldiv(*(undefined4 *)((int)fStack_ea4 + 0x18),
                      *(undefined4 *)((int)fStack_ea4 + 0x1c),0x10000,0);
    fVar3 = (float)(iVar11 + -1);
    fStack_e7c = (float)(iVar11 + 1);
    fStack_e88 = (float)((int)(iVar17 + (iVar17 >> 0x1f & 7U)) >> 3);
    uStack_eb4 = (BlueprintPreviewWidget *)CONCAT13(1,(undefined3)uStack_eb4);
    fStack_e9c = fVar3;
    if ((int)fVar3 <= (int)fStack_e7c) {
      fStack_e74 = (float)((int)fStack_e88 + -1);
      iVar17 = (int)fStack_e88 + 1;
      fVar24 = fStack_e74;
      do {
        fVar26 = fVar24;
        fStack_ea0 = fVar24;
        if ((int)fVar24 <= iVar17) {
          fStack_e80 = (float)((int)fStack_eb0 + 0x2e4);
          fStack_e9c = fVar3;
          do {
            fStack_ea0 = fVar24;
            puVar14 = (undefined4 *)FUN_0042f640(fVar3,fVar24,0);
            if (puVar14 != (undefined4 *)0x0) {
              puStack_e8c = (undefined4 *)*puVar14;
              for (puStack_eac = (undefined4 *)*puStack_e8c; puStack_eac != puStack_e8c;
                  puStack_eac = (undefined4 *)*puStack_eac) {
                piVar9 = (int *)puStack_eac[2];
                if (*piVar9 == 0x4a) {
                  uStack_e84 = piVar9[6];
                  iStack_c08 = piVar9[2] - *(uint *)((int)fStack_ea4 + 0x10);
                  iStack_c04 = (piVar9[3] - *(int *)((int)fStack_ea4 + 0x14)) -
                               (uint)((uint)piVar9[2] < *(uint *)((int)fStack_ea4 + 0x10));
                  iStack_c00 = piVar9[4] - *(uint *)((int)fStack_ea4 + 0x18);
                  iStack_bfc = (piVar9[5] - *(int *)((int)fStack_ea4 + 0x1c)) -
                               (uint)((uint)piVar9[4] < *(uint *)((int)fStack_ea4 + 0x18));
                  iStack_bf8 = uStack_e84 - *(uint *)((int)fStack_ea4 + 0x20);
                  iStack_bf4 = (piVar9[7] - *(int *)((int)fStack_ea4 + 0x24)) -
                               (uint)(uStack_e84 < *(uint *)((int)fStack_ea4 + 0x20));
                  fStack_c44 = (float)CONCAT44(iStack_c04,iStack_c08) * 1.5258789e-05;
                  fStack_eb8 = (float)CONCAT44(iStack_bf4,iStack_bf8);
                  fStack_c40 = (float)CONCAT44(iStack_bfc,iStack_c00) * 1.5258789e-05;
                  fStack_c3c = fStack_eb8 * 1.5258789e-05;
                  if (fStack_c40 * fStack_c40 + fStack_c44 * fStack_c44 + fStack_c3c * fStack_c3c <
                      16.0) goto LAB_004325ae;
                }
                fVar3 = fStack_e9c;
              }
            }
            fVar24 = (float)((int)fStack_ea0 + 1);
            iVar17 = (int)fStack_e88 + 1;
            fVar26 = fStack_e74;
            fStack_ea0 = fVar24;
          } while ((int)fVar24 <= iVar17);
        }
        fVar3 = (float)((int)fVar3 + 1);
        fVar24 = fVar26;
        fStack_e9c = fVar3;
      } while ((int)fVar3 <= (int)fStack_e7c);
    }
    FUN_0040eb60(L"Requires Loom");
    uStack_c._0_1_ = 0x1b;
    fVar22 = (float10)FUN_006291d0();
    fStack_eb0 = (float)fVar22;
    puStack_eac = (undefined4 *)(fStack_eb0 - 40.0);
    FUN_0040eb60(L"resource1.dat");
    uStack_800 = 0;
    uStack_7fc = 0;
    uStack_7f8 = 0;
    uStack_7f4 = 0;
    uStack_940 = 0;
    uStack_93c = 0;
    uStack_938 = 0;
    uStack_934 = 0x3f800000;
    uStack_880 = 0x3f800000;
    uStack_87c = 0x3e800000;
    uStack_878 = 0x3e800000;
    uStack_874 = 0x3f800000;
    uVar8 = 1;
    uStack_c._0_1_ = 0x1c;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    FUN_00639b30(apvStack_6e8,apvStack_4a0,0,0,0x41700000,puStack_eac,0x41100000,0x40400000,
                 &uStack_880,&uStack_940,&uStack_800,0x10,((fStack_eb0 - fStack_eb8) - 40.0) - 10.0,
                 uVar8);
    uStack_c._0_1_ = 0x1b;
    if (7 < uStack_6d4) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_6e8[0]);
    }
    uStack_6d4 = 7;
    uStack_6d8 = 0;
    apvStack_6e8[0] = (void *)((uint)apvStack_6e8[0] & 0xffff0000);
    FUN_0040eb60(L"resource1.dat");
    uVar8 = 1;
    uStack_c._0_1_ = 0x1d;
    uStack_920 = 0;
    uStack_91c = 0;
    uStack_918 = 0;
    uStack_914 = 0;
    uStack_820 = 0;
    uStack_81c = 0;
    uStack_818 = 0;
    uStack_814 = 0;
    uStack_900 = 0x3f800000;
    uStack_8fc = 0x3e800000;
    uStack_8f8 = 0x3e800000;
    uStack_8f4 = 0x3f800000;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    FUN_00639b30(apvStack_7a8,apvStack_4a0,0,0,0x41700000,puStack_eac,0x41100000,0,&uStack_900,
                 &uStack_820,&uStack_920,0x10,((fStack_eb0 - fStack_eb8) - 40.0) - 10.0,uVar8);
    if (7 < uStack_794) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_7a8[0]);
    }
    uStack_794 = 7;
    uStack_798 = 0;
    apvStack_7a8[0] = (void *)((uint)apvStack_7a8[0] & 0xffff0000);
    apvStack_4e8[0] = apvStack_4a0[0];
    uStack_4d4 = uStack_48c;
    break;
  case 7:
    fStack_eb0 = (float)(pBVar20->BlueprintPreviewWidget_data).offset_0x134;
    fStack_ea4 = *(float *)((int)fStack_eb0 + 0x8006d0);
    iVar17 = __alldiv(*(undefined4 *)((int)fStack_ea4 + 0x10),
                      *(undefined4 *)((int)fStack_ea4 + 0x14),0x10000,0);
    iVar11 = (int)((iVar17 >> 0x1f & 7U) + iVar17) >> 3;
    iVar17 = __alldiv(*(undefined4 *)((int)fStack_ea4 + 0x18),
                      *(undefined4 *)((int)fStack_ea4 + 0x1c),0x10000,0);
    fVar3 = (float)(iVar11 + -1);
    fStack_e7c = (float)(iVar11 + 1);
    fStack_e88 = (float)((int)(iVar17 + (iVar17 >> 0x1f & 7U)) >> 3);
    uStack_eb4 = (BlueprintPreviewWidget *)CONCAT13(1,(undefined3)uStack_eb4);
    fStack_e9c = fVar3;
    if ((int)fVar3 <= (int)fStack_e7c) {
      fStack_e74 = (float)((int)fStack_e88 + -1);
      iVar17 = (int)fStack_e88 + 1;
      fVar24 = fStack_e74;
      do {
        fVar26 = fVar24;
        fStack_ea0 = fVar24;
        if ((int)fVar24 <= iVar17) {
          fStack_e80 = (float)((int)fStack_eb0 + 0x2e4);
          fStack_e9c = fVar3;
          do {
            fStack_ea0 = fVar24;
            puVar14 = (undefined4 *)FUN_0042f640(fVar3,fVar24,0);
            if (puVar14 != (undefined4 *)0x0) {
              puStack_e8c = (undefined4 *)*puVar14;
              for (puStack_eac = (undefined4 *)*puStack_e8c; puStack_eac != puStack_e8c;
                  puStack_eac = (undefined4 *)*puStack_eac) {
                piVar9 = (int *)puStack_eac[2];
                if (*piVar9 == 0x4b) {
                  uStack_e84 = piVar9[6];
                  iStack_bf0 = piVar9[2] - *(uint *)((int)fStack_ea4 + 0x10);
                  iStack_bec = (piVar9[3] - *(int *)((int)fStack_ea4 + 0x14)) -
                               (uint)((uint)piVar9[2] < *(uint *)((int)fStack_ea4 + 0x10));
                  iStack_be8 = piVar9[4] - *(uint *)((int)fStack_ea4 + 0x18);
                  iStack_be4 = (piVar9[5] - *(int *)((int)fStack_ea4 + 0x1c)) -
                               (uint)((uint)piVar9[4] < *(uint *)((int)fStack_ea4 + 0x18));
                  iStack_be0 = uStack_e84 - *(uint *)((int)fStack_ea4 + 0x20);
                  iStack_bdc = (piVar9[7] - *(int *)((int)fStack_ea4 + 0x24)) -
                               (uint)(uStack_e84 < *(uint *)((int)fStack_ea4 + 0x20));
                  fStack_c38 = (float)CONCAT44(iStack_bec,iStack_bf0) * 1.5258789e-05;
                  fStack_eb8 = (float)CONCAT44(iStack_bdc,iStack_be0);
                  fStack_c34 = (float)CONCAT44(iStack_be4,iStack_be8) * 1.5258789e-05;
                  fStack_c30 = fStack_eb8 * 1.5258789e-05;
                  if (fStack_c34 * fStack_c34 + fStack_c38 * fStack_c38 + fStack_c30 * fStack_c30 <
                      16.0) goto LAB_004325ae;
                }
                fVar3 = fStack_e9c;
              }
            }
            fVar24 = (float)((int)fStack_ea0 + 1);
            iVar17 = (int)fStack_e88 + 1;
            fVar26 = fStack_e74;
            fStack_ea0 = fVar24;
          } while ((int)fVar24 <= iVar17);
        }
        fVar3 = (float)((int)fVar3 + 1);
        fVar24 = fVar26;
        fStack_e9c = fVar3;
      } while ((int)fVar3 <= (int)fStack_e7c);
    }
    FUN_0040eb60(L"Requires Saw");
    uStack_c._0_1_ = 0x24;
    fVar22 = (float10)FUN_006291d0();
    fStack_eb0 = (float)fVar22;
    puStack_eac = (undefined4 *)(fStack_eb0 - 40.0);
    FUN_0040eb60(L"resource1.dat");
    uStack_af0 = 0;
    uStack_aec = 0;
    uStack_ae8 = 0;
    uStack_ae4 = 0;
    uStack_ad0 = 0;
    uStack_acc = 0;
    uStack_ac8 = 0;
    uStack_ac4 = 0x3f800000;
    uStack_ab0 = 0x3f800000;
    uStack_aac = 0x3e800000;
    uStack_aa8 = 0x3e800000;
    uStack_aa4 = 0x3f800000;
    uVar8 = 1;
    uStack_c._0_1_ = 0x25;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    FUN_00639b30(apvStack_6d0,apvStack_4e8,0,0,0x41700000,puStack_eac,0x41100000,0x40400000,
                 &uStack_ab0,&uStack_ad0,&uStack_af0,0x10,((fStack_eb0 - fStack_eb8) - 40.0) - 10.0,
                 uVar8);
    uStack_c._0_1_ = 0x24;
    if (7 < uStack_6bc) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_6d0[0]);
    }
    uStack_6bc = 7;
    uStack_6c0 = 0;
    apvStack_6d0[0] = (void *)((uint)apvStack_6d0[0] & 0xffff0000);
    FUN_0040eb60(L"resource1.dat");
    uVar8 = 1;
    uStack_c._0_1_ = 0x26;
    uStack_a90 = 0;
    uStack_a8c = 0;
    uStack_a88 = 0;
    uStack_a84 = 0;
    uStack_b50 = 0;
    uStack_b4c = 0;
    uStack_b48 = 0;
    uStack_b44 = 0;
    uStack_b30 = 0x3f800000;
    uStack_b2c = 0x3e800000;
    uStack_b28 = 0x3e800000;
    uStack_b24 = 0x3f800000;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    FUN_00639b30(apvStack_6a0,apvStack_4e8,0,0,0x41700000,puStack_eac,0x41100000,0,&uStack_b30,
                 &uStack_b50,&uStack_a90,0x10,((fStack_eb0 - fStack_eb8) - 40.0) - 10.0,uVar8);
    if (7 < uStack_68c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(apvStack_6a0[0]);
    }
    uStack_68c = 7;
    uStack_690 = 0;
    apvStack_6a0[0] = (void *)((uint)apvStack_6a0[0] & 0xffff0000);
    break;
  case 8:
    iVar17 = *(int *)((pBVar20->BlueprintPreviewWidget_data).offset_0x134 + 0x8006d0);
    iVar11 = __alldiv(*(undefined4 *)(iVar17 + 0x10),*(undefined4 *)(iVar17 + 0x14),0x10000,0);
    iVar11 = (int)((iVar11 >> 0x1f & 7U) + iVar11) >> 3;
    iVar17 = __alldiv(*(undefined4 *)(iVar17 + 0x18),*(undefined4 *)(iVar17 + 0x1c),0x10000,0);
    fStack_ea0 = (float)(iVar11 + -1);
    fStack_e88 = (float)(iVar11 + 1);
    uStack_e84 = (int)(iVar17 + (iVar17 >> 0x1f & 7U)) >> 3;
    uStack_eb4 = (BlueprintPreviewWidget *)CONCAT13(1,(undefined3)uStack_eb4);
    if ((int)fStack_ea0 <= (int)fStack_e88) {
      puStack_e8c = (undefined4 *)(uStack_e84 - 1);
      iVar17 = uStack_e84 + 1;
      puVar14 = puStack_e8c;
      do {
        pBVar20 = local_ea8;
        puVar15 = puVar14;
        puStack_eac = puVar14;
        if ((int)puVar14 <= iVar17) {
          do {
            uVar8 = 0;
            fVar3 = fStack_ea0;
            puStack_eac = puVar14;
            FUN_00411d00(fStack_ea0,puVar14,0);
            fStack_eb8 = (float)FUN_0042f640(fVar3,puVar14,uVar8);
            if (fStack_eb8 != 0.0) {
              FUN_0046f440(&local_e94);
              uVar8 = FUN_0060a9f0(&bStack_e60);
              cVar1 = FUN_004688d0(uVar8);
              while (cVar1 != '\0') {
                puVar14 = (undefined4 *)FUN_0042c6c0();
                if (*(int *)*puVar14 == 0x4c) {
                  iVar17 = FUN_00411740();
                  uVar8 = FUN_0042c7a0(auStack_1f8,iVar17 + 0x10);
                  FUN_0042c4a0(uVar8);
                  fVar22 = (float10)FUN_00424860();
                  fStack_eb0 = (float)fVar22;
                  if (fStack_eb0 < 16.0) goto LAB_0043460c;
                }
                FUN_00468d30(auStack_e70,0);
                uVar8 = FUN_0060a9f0(&bStack_e60);
                cVar1 = FUN_004688d0(uVar8);
              }
            }
            puVar14 = (undefined4 *)((int)puStack_eac + 1);
            iVar17 = uStack_e84 + 1;
            puVar15 = puStack_e8c;
            puStack_eac = puVar14;
          } while ((int)puVar14 <= iVar17);
        }
        fStack_ea0 = (float)((int)fStack_ea0 + 1);
        puVar14 = puVar15;
      } while ((int)fStack_ea0 <= (int)fStack_e88);
    }
    FUN_0040eb60(L"Requires Workbench");
    uStack_c._0_1_ = 0x27;
    fVar22 = (float10)FUN_006291d0();
    fStack_eb0 = (float)fVar22;
    FUN_0040ea50(0x41700000,fStack_eb0 - 40.0);
    FUN_0040eb60(L"resource1.dat");
    uStack_c._0_1_ = 0x28;
    puVar14 = (undefined4 *)FUN_00428970(1);
    puVar15 = (undefined4 *)FUN_00428970(0);
    uVar47 = 1;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    FUN_00411cf0();
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    fVar3 = ((fStack_eb0 - fStack_eb8) - 40.0) - 10.0;
    uVar44 = 0x10;
    uVar37 = FUN_0040eac0(0,0,0,0);
    uVar39 = FUN_0040eac0(0,0,0,0x3f800000);
    uVar42 = FUN_0040eac0(0x3f800000,0x3e800000,0x3e800000,0x3f800000);
    uVar8 = *puVar14;
    puVar34 = auStack_428;
    uVar40 = 0x40400000;
    uVar38 = 0x41100000;
    uVar36 = *puVar15;
    uVar35 = 0;
    uVar45 = 0;
    puVar32 = auStack_3d8;
    FUN_00411320(puVar32,puVar34,0,0,uVar36,uVar8,0x41100000,0x40400000,uVar42,uVar39,uVar37,uVar44,
                 fVar3);
    FUN_00639b30(puVar32,puVar34,uVar45,uVar35,uVar36,uVar8,uVar38,uVar40,uVar42,uVar39,uVar37,
                 uVar44,fVar3,uVar47);
    uStack_c._0_1_ = 0x27;
    FUN_00593e50();
    FUN_0040eb60(L"resource1.dat");
    uVar47 = 1;
    uStack_c._0_1_ = 0x29;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    FUN_00411cf0();
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    fVar3 = ((fStack_eb0 - fStack_eb8) - 40.0) - 10.0;
    uVar44 = 0x10;
    uVar37 = FUN_0040eac0(0,0,0,0);
    uVar39 = FUN_0040eac0(0,0,0,0);
    uVar42 = FUN_0040eac0(0x3f800000,0x3e800000,0x3e800000,0x3f800000);
    pBVar20 = local_ea8;
    uVar8 = *puVar14;
    puVar34 = auStack_428;
    uVar40 = 0;
    uVar38 = 0x41100000;
    uVar36 = *puVar15;
    uVar35 = 0;
    uVar45 = 0;
    puVar32 = auStack_358;
    FUN_00411320(puVar32,puVar34,0,0,uVar36,uVar8,0x41100000,0,uVar42,uVar39,uVar37,uVar44,fVar3);
    FUN_00639b30(puVar32,puVar34,uVar45,uVar35,uVar36,uVar8,uVar38,uVar40,uVar42,uVar39,uVar37,
                 uVar44,fVar3,uVar47);
    FUN_00593e50();
    uStack_c._0_1_ = 3;
    FUN_00593e50();
    cVar1 = uStack_eb4._3_1_;
    goto LAB_00431f28;
  case 9:
    uVar8 = 0;
    FUN_00411740(0);
    pCVar12 = (CRefTime *)FUN_004120b0(uVar8);
    lVar13 = CRefTime::Millisecs(pCVar12);
    uVar8 = 1;
    iVar17 = (int)((lVar13 >> 0x1f & 7U) + lVar13) >> 3;
    FUN_00411740(1);
    pCVar12 = (CRefTime *)FUN_004120b0(uVar8);
    lVar13 = CRefTime::Millisecs(pCVar12);
    fStack_ea0 = (float)(iVar17 + -1);
    fStack_e88 = (float)(iVar17 + 1);
    uStack_e84 = (int)(lVar13 + (lVar13 >> 0x1f & 7U)) >> 3;
    uStack_eb4 = (BlueprintPreviewWidget *)CONCAT13(1,(undefined3)uStack_eb4);
    if ((int)fStack_ea0 <= (int)fStack_e88) {
      puStack_e8c = (undefined4 *)(uStack_e84 - 1);
      iVar17 = uStack_e84 + 1;
      puVar14 = puStack_e8c;
      do {
        pBVar20 = local_ea8;
        puVar15 = puVar14;
        puStack_eac = puVar14;
        if ((int)puVar14 <= iVar17) {
          do {
            uVar8 = 0;
            fVar3 = fStack_ea0;
            puStack_eac = puVar14;
            FUN_00411d00(fStack_ea0,puVar14,0);
            fStack_eb8 = (float)FUN_0042f640(fVar3,puVar14,uVar8);
            if (fStack_eb8 != 0.0) {
              FUN_0046f440(&fStack_e98);
              uVar8 = FUN_0060a9f0(auStack_e5c);
              cVar1 = FUN_004688d0(uVar8);
              while (cVar1 != '\0') {
                puVar14 = (undefined4 *)FUN_0042c6c0();
                if (*(int *)*puVar14 == 0x41) {
                  iVar17 = FUN_00411740();
                  uVar8 = FUN_0042c7a0(auStack_210,iVar17 + 0x10);
                  FUN_0042c4a0(uVar8);
                  fVar22 = (float10)FUN_00424860();
                  fStack_eb0 = (float)fVar22;
                  if (fStack_eb0 < 16.0) goto LAB_0043460c;
                }
                FUN_00468d30(&fStack_e6c,0);
                uVar8 = FUN_0060a9f0(auStack_e5c);
                cVar1 = FUN_004688d0(uVar8);
              }
            }
            puVar14 = (undefined4 *)((int)puStack_eac + 1);
            iVar17 = uStack_e84 + 1;
            puVar15 = puStack_e8c;
            puStack_eac = puVar14;
          } while ((int)puVar14 <= iVar17);
        }
        fStack_ea0 = (float)((int)fStack_ea0 + 1);
        puVar14 = puVar15;
      } while ((int)fStack_ea0 <= (int)fStack_e88);
    }
    FUN_0040eb60(L"Requires Campfire");
    uStack_c._0_1_ = 0x2a;
    fVar22 = (float10)FUN_006291d0();
    fStack_eb0 = (float)fVar22;
    FUN_0040ea50(0x41700000,fStack_eb0 - 40.0);
    FUN_0040eb60(L"resource1.dat");
    uStack_c._0_1_ = 0x2b;
    puVar14 = (undefined4 *)FUN_00428970(1);
    puVar15 = (undefined4 *)FUN_00428970(0);
    uVar47 = 1;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    FUN_00411cf0();
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    fVar3 = ((fStack_eb0 - fStack_eb8) - 40.0) - 10.0;
    uVar44 = 0x10;
    uVar37 = FUN_0040eac0(0,0,0,0);
    uVar39 = FUN_0040eac0(0,0,0,0x3f800000);
    uVar42 = FUN_0040eac0(0x3f800000,0x3e800000,0x3e800000,0x3f800000);
    uVar8 = *puVar14;
    puVar34 = auStack_458;
    uVar40 = 0x40400000;
    uVar38 = 0x41100000;
    uVar36 = *puVar15;
    uVar35 = 0;
    uVar45 = 0;
    puVar32 = auStack_3b8;
    FUN_00411320(puVar32,puVar34,0,0,uVar36,uVar8,0x41100000,0x40400000,uVar42,uVar39,uVar37,uVar44,
                 fVar3);
    FUN_00639b30(puVar32,puVar34,uVar45,uVar35,uVar36,uVar8,uVar38,uVar40,uVar42,uVar39,uVar37,
                 uVar44,fVar3,uVar47);
    uStack_c._0_1_ = 0x2a;
    FUN_00593e50();
    FUN_0040eb60(L"resource1.dat");
    uVar47 = 1;
    uStack_c._0_1_ = 0x2c;
    fVar22 = (float10)FUN_0062f600(1);
    fStack_eb0 = (float)fVar22;
    FUN_00411cf0();
    fVar22 = (float10)FUN_0062f600();
    fStack_eb8 = (float)fVar22;
    fVar3 = ((fStack_eb0 - fStack_eb8) - 40.0) - 10.0;
    uVar44 = 0x10;
    uVar37 = FUN_0040eac0(0,0,0,0);
    uVar39 = FUN_0040eac0(0,0,0,0);
    uVar42 = FUN_0040eac0(0x3f800000,0x3e800000,0x3e800000,0x3f800000);
    pBVar20 = local_ea8;
    uVar8 = *puVar14;
    puVar34 = auStack_458;
    uVar40 = 0;
    uVar38 = 0x41100000;
    uVar36 = *puVar15;
    uVar35 = 0;
    uVar45 = 0;
    ppiVar33 = apiStack_3a0;
    FUN_00411320(ppiVar33,puVar34,0,0,uVar36,uVar8,0x41100000,0,uVar42,uVar39,uVar37,uVar44,fVar3);
    FUN_00639b30(ppiVar33,puVar34,uVar45,uVar35,uVar36,uVar8,uVar38,uVar40,uVar42,uVar39,uVar37,
                 uVar44,fVar3,uVar47);
    FUN_00593e50();
    uStack_c._0_1_ = 3;
    FUN_00593e50();
    cVar1 = uStack_eb4._3_1_;
    goto LAB_00431f28;
  }
  if (7 < uStack_4d4) {
    uStack_c._0_1_ = 3;
                    /* WARNING: Subroutine does not return */
    operator_delete(apvStack_4e8[0]);
  }
  uStack_c._0_1_ = 3;
  uStack_eb4._3_1_ = (char)((uint)uStack_eb4 >> 0x18);
  pBVar20 = local_ea8;
  cVar1 = uStack_eb4._3_1_;
LAB_00431f28:
  if ((pBVar20->BlueprintPreviewWidget_data).offset_0x13c != 0) {
    if ((cVar1 == '\0') && (uStack_e78._3_1_ == '\0')) {
      puVar34 = &(pBVar20->BlueprintPreviewWidget_data).field_0xc;
      FUN_00411740(puVar34);
      cVar1 = FUN_00444a90(puVar34);
      if (cVar1 == '\0') goto LAB_00434691;
      FUN_00411cf0();
      cVar1 = FUN_006294c0();
      if (cVar1 != '\0') {
        FUN_0040eb60(L"frame");
        uStack_c._0_1_ = 0x2e;
        uVar8 = FUN_0040eac0(0,0x3f800000,0x3f800000,0x3f800000);
        FUN_00633d70(auStack_370);
        FUN_0040f8e0(uVar8);
        FUN_004288e0(uVar8);
        FUN_00593e50();
        (pBVar20->BlueprintPreviewWidget_data).offset_0x264 = 1;
        goto LAB_00434711;
      }
      FUN_0040eb60(L"frame");
      uStack_c._0_1_ = 0x2f;
      uVar8 = FUN_0040eac0(0,0x3f800000,0,0x3f800000);
      FUN_00633d70(auStack_338);
      FUN_0040f8e0(uVar8);
      FUN_004288e0(uVar8);
    }
    else {
LAB_00434691:
      FUN_0040eb60(L"frame");
      uStack_c._0_1_ = 0x2d;
      uVar8 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
      FUN_00633d70(auStack_3f0);
      FUN_0040f8e0(uVar8);
      FUN_004288e0(uVar8);
    }
    FUN_00593e50();
    (pBVar20->BlueprintPreviewWidget_data).offset_0x264 = 0;
  }
LAB_00434711:
  if ((pBVar20->BlueprintPreviewWidget_data).offset_0x140 != 0) {
    fVar22 = (float10)FUN_0042f720();
    fStack_eb0 = (float)fVar22;
    FUN_00411a90(0.0 <= fStack_eb0);
  }
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             auStack_e58);
LAB_0043474d:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_ec0);
  return;
LAB_0043460c:
  cVar1 = '\0';
  goto LAB_00431f28;
LAB_004325ae:
  cVar1 = '\0';
  pBVar20 = local_ea8;
  goto LAB_00431f28;
}


/* cube::BlueprintPreviewWidget::vfunction11_for_NamedObject @ 004348f0  kind=game  attributed-by=rtti  size=389 */

void __thiscall
cube::BlueprintPreviewWidget::vfunction11_for_NamedObject(BlueprintPreviewWidget *this)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = (this->BlueprintPreviewWidget_data).offset_0x138;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x28) != *(int *)(this->offset_0x13c + 0x28)) {
      FUN_00635fe0(iVar1,this->offset_0x13c);
    }
    uVar7 = 1;
    uVar6 = 0x42b40000;
    fVar2 = (float10)FUN_0062f600(0x42b40000,1);
    fVar3 = (float10)FUN_0062f600();
    FUN_0062a650(((float)fVar2 - (float)fVar3) * 0.5,uVar6,uVar7);
  }
  if ((this->BlueprintPreviewWidget_data).offset_0x13c != 0) {
    uVar6 = 1;
    fVar2 = (float10)FUN_006291d0(1);
    fVar3 = (float10)FUN_006291d0();
    fVar4 = ((float)fVar2 - (float)fVar3) - 20.0;
    fVar2 = (float10)FUN_0062f600(fVar4);
    fVar3 = (float10)FUN_0062f600();
    FUN_0062a650(((float)fVar2 - (float)fVar3) - 20.0,fVar4,uVar6);
  }
  if (((this->BlueprintPreviewWidget_data).offset_0x140 != 0) &&
     ((this->BlueprintPreviewWidget_data).offset_0x13c != 0)) {
    uVar6 = 1;
    fVar2 = (float10)FUN_006291d0(1);
    fVar4 = (float)fVar2;
    fVar2 = (float10)FUN_0062f600(fVar4);
    fVar3 = (float10)FUN_0062f600();
    fVar5 = (((float)fVar2 - (float)fVar3) - 40.0) - 10.0;
    fVar2 = (float10)FUN_006291d0(fVar5);
    fVar3 = (float10)FUN_006291d0();
    FUN_0062bb20(0x41a00000,((float)fVar2 - (float)fVar3) - 20.0,fVar5,fVar4,uVar6);
  }
  return;
}


