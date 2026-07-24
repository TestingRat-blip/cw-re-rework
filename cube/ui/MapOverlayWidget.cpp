// MapOverlayWidget (ui) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "MapOverlayWidget.h"

/* cube::MapOverlayWidget::scalar_deleting_destructor @ 004c9680  kind=game  attributed-by=rtti  size=6619 */

void __thiscall cube::MapOverlayWidget::scalar_deleting_destructor(MapOverlayWidget *this)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 **ppuVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  int iStack_498;
  undefined1 local_494 [24];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_47c [14];
  undefined4 local_444;
  undefined4 local_440;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_42c [6];
  undefined1 local_3e4 [8];
  uint local_3dc;
  uint local_3d8;
  undefined1 local_3d4 [4];
  uint local_3d0;
  uint local_3cc;
  undefined8 local_3c8;
  int local_3c0;
  int iStack_3bc;
  int local_3b8;
  uint local_3b4;
  int local_3b0;
  int iStack_3ac;
  int local_3a8;
  int iStack_3a4;
  int local_3a0;
  uint local_39c;
  int local_398;
  undefined4 *local_394;
  int local_390;
  undefined4 *local_38c;
  uint local_388;
  int local_384;
  char *local_380;
  float local_37c;
  float local_378;
  undefined4 *local_374;
  undefined4 local_370;
  uint *local_36c;
  uint local_368;
  MapOverlayWidget *local_364;
  int local_360;
  float local_35c;
  uint *local_358;
  float local_354;
  uint local_350;
  float local_34c;
  float local_348;
  uint local_344;
  float local_33c;
  float local_334;
  float local_328;
  float local_318;
  undefined1 local_310 [24];
  undefined1 local_2f8 [24];
  undefined1 local_2e0 [24];
  undefined1 local_2c8 [24];
  undefined1 local_2b0 [24];
  undefined1 local_298 [24];
  uint local_280;
  int local_27c;
  uint local_278;
  int local_274;
  uint *local_270;
  int local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_1c8 [3];
  uint local_1bc [4];
  uint *local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  int local_194;
  int iStack_190;
  int local_18c;
  int iStack_188;
  int local_184;
  int iStack_180;
  uint local_17c;
  float local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  uint local_154;
  float fStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  float local_10c;
  float fStack_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float fStack_f0;
  undefined4 local_ec;
  float local_e8;
  float fStack_e4;
  undefined4 local_e0;
  float local_dc;
  float fStack_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  undefined4 local_c8;
  float local_c4;
  float fStack_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  float local_9c;
  float fStack_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  undefined4 local_88;
  float local_84;
  float fStack_80;
  undefined4 local_7c;
  float local_78;
  float fStack_74;
  undefined4 local_70;
  undefined8 local_6c;
  float local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined8 local_54;
  float local_4c;
  undefined8 local_48;
  float local_40;
  undefined8 local_3c;
  float local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  float local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e84f3;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_388 = 0;
  local_364 = this;
  FUN_0059c480(local_14);
  iVar6 = (this->MapOverlayWidget_data).offset_0x0;
  *(undefined4 *)(iVar6 + 0x800dd4) = 0xffffffff;
  *(undefined4 *)(iVar6 + 0x800dd8) = 0xffffffff;
  iVar6 = (this->MapOverlayWidget_data).offset_0x0;
  local_334 = *(float *)(iVar6 + 0x1000e4c);
  iVar5 = *(int *)(iVar6 + 0x8006d0);
  local_354 = local_334 * 65536.0;
  uVar21 = FUN_0068d946();
  iVar4 = __alldiv((uint)uVar21 + *(uint *)(iVar5 + 0x10),
                   (int)((ulonglong)uVar21 >> 0x20) + *(int *)(iVar5 + 0x14) +
                   (uint)CARRY4((uint)uVar21,*(uint *)(iVar5 + 0x10)),0x10000,0);
  local_33c = *(float *)(iVar6 + 0x1000e50);
  local_354 = local_33c * 65536.0;
  local_360 = (int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8;
  uVar21 = FUN_0068d946();
  iVar5 = __alldiv((uint)uVar21 + *(uint *)(iVar5 + 0x18),
                   (int)((ulonglong)uVar21 >> 0x20) + *(int *)(iVar5 + 0x1c) +
                   (uint)CARRY4((uint)uVar21,*(uint *)(iVar5 + 0x18)),0x10000,0);
  local_384 = (int)((iVar5 >> 0x1f & 0xffU) + iVar5) >> 8;
  uVar21 = CONCAT44(local_3c8._4_4_,(undefined4)local_3c8);
  if ((2.0 < *(float *)(iVar6 + 0x1c4)) &&
     (uVar14 = local_360 - 0x20, local_350 = uVar14,
     uVar21 = CONCAT44(local_3c8._4_4_,(undefined4)local_3c8), (int)uVar14 < local_360 + 0x20)) {
    local_34c = (float)(local_384 + -0x20);
    iVar5 = local_384 + 0x20;
    uVar15 = uVar14 * 0x100 + 0x80;
    iVar6 = local_360;
    do {
      local_35c = local_34c;
      if ((int)local_34c < iVar5) {
        local_368 = (int)local_34c * 0x100 + 0x80;
        local_350 = uVar14;
        local_344 = uVar15;
        do {
          local_3c8 = uVar21;
          local_378 = (float)FUN_00602440(uVar14,local_35c);
          uVar21 = local_3c8;
          if (((local_378 != 0.0) &&
              (local_380 = (char *)((int)local_378 + 0x10), *(char *)((int)local_378 + 0x10) != '\0'
              )) && ((*(byte *)((int)local_378 + 0x30) & 1) != 0)) {
            iVar6 = (this->MapOverlayWidget_data).offset_0x0;
            iVar5 = 0;
            local_1c8[0] = *(float *)(iVar6 + 0x1000e4c);
            local_1c8[1] = (float)*(undefined4 *)(iVar6 + 0x1000e50);
            local_1c8[2] = (float)*(undefined4 *)(iVar6 + 0x1000e54);
            do {
              local_354 = local_1c8[iVar5] * 65536.0;
              uVar21 = FUN_0068d946();
              uVar14 = local_368;
              local_1bc[iVar5 * 2] = (uint)uVar21;
              local_1bc[iVar5 * 2 + 1] = (uint)((ulonglong)uVar21 >> 0x20);
              iVar5 = iVar5 + 1;
            } while (iVar5 < 3);
            iVar6 = *(int *)(iVar6 + 0x8006d0);
            fVar17 = (float10)FUN_005c5e20(local_344,local_368,0);
            local_348 = (float)fVar17;
            local_37c = local_348 * 65536.0;
            uVar21 = FUN_0068d946();
            this = local_364;
            local_3d8 = ((int)local_344 >> 0x1f) << 0x10 | local_344 >> 0x10;
            local_3cc = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
            local_3dc = local_344 * 0x10000;
            local_3d0 = uVar14 * 0x10000;
            local_280 = local_3dc - *(uint *)(iVar6 + 0x10);
            local_27c = (local_3d8 - *(int *)(iVar6 + 0x14)) -
                        (uint)(local_3dc < *(uint *)(iVar6 + 0x10));
            local_278 = local_3d0 - *(uint *)(iVar6 + 0x18);
            local_274 = (local_3cc - *(int *)(iVar6 + 0x1c)) -
                        (uint)(local_3d0 < *(uint *)(iVar6 + 0x18));
            local_270 = (uint *)((uint)uVar21 - *(uint *)(iVar6 + 0x20));
            local_26c = ((int)((ulonglong)uVar21 >> 0x20) - *(int *)(iVar6 + 0x24)) -
                        (uint)((uint)uVar21 < *(uint *)(iVar6 + 0x20));
            local_194 = local_280 - local_1bc[0];
            iStack_190 = (local_27c - local_1bc[1]) - (uint)(local_280 < local_1bc[0]);
            local_18c = local_278 - local_1bc[2];
            iStack_188 = (local_274 - local_1bc[3]) - (uint)(local_278 < local_1bc[2]);
            local_184 = (int)local_270 - (int)local_1ac;
            iStack_180 = (local_26c - local_1a8) - (uint)(local_270 < local_1ac);
            fVar18 = (float)CONCAT44(iStack_190,local_194) * 1.5258789e-05;
            local_348 = (float)CONCAT44(iStack_180,local_184);
            fVar19 = (float)CONCAT44(iStack_188,local_18c) * 1.5258789e-05;
            fVar20 = local_348 * 1.5258789e-05;
            iVar6 = (local_364->MapOverlayWidget_data).offset_0x0;
            local_100 = fVar19 * *(float *)(iVar6 + 0x800d98) +
                        fVar18 * *(float *)(iVar6 + 0x800d88) +
                        fVar20 * *(float *)(iVar6 + 0x800da8) + *(float *)(iVar6 + 0x800db8);
            fStack_fc = fVar19 * *(float *)(iVar6 + 0x800d9c) +
                        fVar18 * *(float *)(iVar6 + 0x800d8c) +
                        fVar20 * *(float *)(iVar6 + 0x800dac) + *(float *)(iVar6 + 0x800dbc);
            local_40 = 1.0 / (fVar19 * *(float *)(iVar6 + 0x800da4) +
                              fVar18 * *(float *)(iVar6 + 0x800d94) +
                              fVar20 * *(float *)(iVar6 + 0x800db4) + *(float *)(iVar6 + 0x800dc4));
            local_f8 = fVar19 * *(float *)(iVar6 + 0x800da0) + fVar18 * *(float *)(iVar6 + 0x800d90)
                       + fVar20 * *(float *)(iVar6 + 0x800db0) + *(float *)(iVar6 + 0x800dc0);
            fVar18 = local_100 * local_40;
            fVar19 = fStack_fc * local_40;
            local_48 = CONCAT44(fVar19,fVar18);
            local_40 = local_f8 * local_40;
            local_20 = local_48;
            uVar14 = local_350;
            uVar15 = local_344;
            local_358 = local_270;
            local_18 = local_40;
            if (0.0 < local_40) {
              local_348 = *(float *)(iVar6 + 0x800d54) * fVar18 +
                          *(float *)(iVar6 + 0x800d64) * fVar19 +
                          *(float *)(iVar6 + 0x800d74) * local_40 + *(float *)(iVar6 + 0x800d84);
              local_d4 = *(float *)(iVar6 + 0x800d60) * fVar19 +
                         *(float *)(iVar6 + 0x800d50) * fVar18 +
                         *(float *)(iVar6 + 0x800d70) * local_40 + *(float *)(iVar6 + 0x800d80);
              local_dc = *(float *)(iVar6 + 0x800d58) * fVar19 +
                         *(float *)(iVar6 + 0x800d48) * fVar18 +
                         *(float *)(iVar6 + 0x800d68) * local_40 + *(float *)(iVar6 + 0x800d78);
              fStack_d8 = *(float *)(iVar6 + 0x800d5c) * fVar19 +
                          *(float *)(iVar6 + 0x800d4c) * fVar18 +
                          *(float *)(iVar6 + 0x800d6c) * local_40 + *(float *)(iVar6 + 0x800d7c);
              local_58 = 1.0 / local_348;
              fVar18 = local_dc * local_58;
              fVar19 = fStack_d8 * local_58;
              _local_60 = CONCAT44(fVar19,fVar18);
              local_58 = local_d4 * local_58;
              local_20 = CONCAT44(fVar19,fVar18);
              local_18 = local_58;
              if (((-1.0 <= fVar18) && (fVar18 <= 1.0)) && ((-1.0 <= fVar19 && (fVar19 <= 1.0)))) {
                iVar6 = (local_364->Object_data).offset_0x0;
                iVar5 = *(int *)(iVar6 + 0x10c);
                iVar6 = *(int *)(iVar6 + 0x110);
                local_f4 = (float)iVar5;
                fStack_f0 = (float)-iVar6;
                local_ec = 0x3f800000;
                local_7c = 0x3f000000;
                local_b8 = (float)iVar5;
                fStack_b4 = (float)iVar6;
                _local_84 = CONCAT44(fStack_f0 * 0.5,local_f4 * 0.5);
                local_b0 = 0;
                local_348 = local_f4 * 0.5 * fVar18 + local_b8 * 0.5;
                local_358 = (uint *)(fVar19 * fStack_f0 * 0.5 + fStack_b4 * 0.5);
                local_88 = 0;
                _local_90 = CONCAT44(fStack_b4 * 0.5,local_b8 * 0.5);
                local_20 = CONCAT44(local_358,local_348);
                local_494._0_4_ =
                     &std::
                      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      ::vbtable;
                local_494._16_4_ = &DAT_006fcd08;
                local_3c8 = uVar21;
                std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
                basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_42c);
                local_388 = local_388 | 1;
                local_8 = 0;
                std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
                basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                          ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_494,
                           (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_47c);
                local_8 = 1;
                    /* inlined destructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
                *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
                  **)(local_494 + *(int *)(local_494._0_4_ + 4)) =
                     &std::
                      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      ::vftable;
                *(int *)((int)&iStack_498 + *(int *)(local_494._0_4_ + 4)) =
                     *(int *)(local_494._0_4_ + 4) + -0x68;
                std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
                basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_47c);
                uVar15 = local_344;
                pcVar2 = local_380;
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
                local_47c[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                               &std::
                                basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                                ::vftable;
                local_444 = 0;
                local_440 = 0;
                local_8 = 3;
                FUN_004e5a20(local_2b0,(this->MapOverlayWidget_data).offset_0x0 + 0x2e4,local_380,
                             local_344,local_368);
                fVar18 = local_35c;
                cVar3 = *pcVar2;
                local_8._0_1_ = 4;
                local_30 = 0x3f8000003f800000;
                local_28 = 0x3f8000003f800000;
                if (cVar3 == '\x01') {
LAB_004ca036:
                  if (cVar3 == '\x04') goto LAB_004ca03f;
                }
                else {
                  if (cVar3 != '\x04') {
                    iVar6 = *(int *)((this->MapOverlayWidget_data).offset_0x0 + 0x8006d0);
                    if (*(int *)(iVar6 + 400) + -2 <= *(int *)((int)local_378 + 0x18)) {
                      if (*(int *)(iVar6 + 400) + 2 < *(int *)((int)local_378 + 0x18)) {
                        local_11c = 0x3f800000;
                        uStack_118 = 0x3e4ccccd;
                        local_30 = 0x3e4ccccd3f800000;
                        local_114 = 0x3e4ccccd;
                        uStack_110 = 0x3f800000;
                      }
                      else {
                        local_174 = 0x3e4ccccd;
                        uStack_170 = 0x3f800000;
                        local_30 = 0x3f8000003e4ccccd;
                        local_16c = 0x3e4ccccd;
                        uStack_168 = 0x3f800000;
                      }
                      local_28 = 0x3f8000003e4ccccd;
                    }
                    goto LAB_004ca036;
                  }
LAB_004ca03f:
                  iVar6 = (this->MapOverlayWidget_data).offset_0x0;
                  uVar15 = local_344;
                  if (*(char *)(iVar6 + 0x800de4) != '\0') {
                    local_14c = 0x3f19999a;
                    uStack_148 = 0x3e800000;
                    local_30 = 0x3e8000003f19999a;
                    local_17c = local_350;
                    local_144 = 0x3f800000;
                    uStack_140 = 0x3f800000;
                    local_28 = 0x3f8000003f800000;
                    local_178 = local_35c;
                    cVar3 = FUN_00468840(iVar6 + 0x800ddc);
                    if (cVar3 != '\0') {
                      local_164 = 0x3f800000;
                      uStack_160 = 0x3e800000;
                      local_30 = 0x3e8000003f800000;
                      local_15c = 0x3f800000;
                      uStack_158 = 0x3f800000;
                      local_28 = 0x3f8000003f800000;
                    }
                    iVar5 = (this->Object_data).offset_0x0;
                    fVar19 = *(float *)(iVar5 + 0xd4);
                    uVar15 = local_344;
                    if (((local_348 - 100.0 <= fVar19) && (fVar19 < local_348 + 100.0)) &&
                       ((fVar19 = *(float *)(iVar5 + 0xd8), (float)local_358 - 20.0 <= fVar19 &&
                        (fVar19 < (float)local_358 + 10.0)))) {
                      local_154 = local_350;
                      fStack_150 = fVar18;
                      *(ulonglong *)(iVar6 + 0x800dd4) = CONCAT44(fVar18,local_350);
                      local_12c = 0x3e4ccccd;
                      uStack_128 = 0x3f800000;
                      local_30 = 0x3f8000003e4ccccd;
                      local_124 = 0x3f800000;
                      uStack_120 = 0x3f800000;
                      local_28 = 0x3f8000003f800000;
                    }
                  }
                }
                FUN_0040eb60(L"resource1.dat");
                local_1d8 = 0;
                local_1d4 = 0;
                local_1d0 = 0;
                local_1cc = 0;
                local_248 = 0;
                local_244 = 0;
                local_240 = 0;
                local_23c = 0x3f800000;
                local_268 = 0x3f800000;
                local_264 = 0x3f800000;
                local_260 = 0x3f800000;
                local_25c = 0x3f800000;
                local_8._0_1_ = 5;
                FUN_00639b30(local_2f8,local_2b0,0,0x40000000,local_348,local_358,0x41200000,
                             0x40400000,&local_268,&local_248,&local_1d8,1,0xbf800000,1);
                local_8._0_1_ = 4;
                FUN_00593e50();
                FUN_0040eb60(L"resource1.dat");
                local_8 = CONCAT31(local_8._1_3_,6);
                local_228 = 0;
                local_224 = 0;
                local_220 = 0;
                local_21c = 0;
                local_208 = 0;
                local_204 = 0;
                local_200 = 0;
                local_1fc = 0;
                FUN_00639b30(local_2e0,local_2b0,0,0x40000000,local_348,local_358,0x41200000,0,
                             &local_30,&local_208,&local_228,1,0xbf800000,1);
                FUN_00593e50();
                FUN_00593e50();
                local_8 = 0xffffffff;
                std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                ::
                basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                          ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                            *)local_494);
                uVar14 = local_350;
                uVar21 = local_3c8;
              }
            }
          }
          local_368 = local_368 + 0x100;
          local_35c = (float)((int)local_35c + 1);
          iVar5 = local_384 + 0x20;
          iVar6 = local_360;
        } while ((int)local_35c < iVar5);
      }
      uVar14 = uVar14 + 1;
      uVar15 = uVar15 + 0x100;
      local_350 = uVar14;
      local_344 = uVar15;
    } while ((int)uVar14 < iVar6 + 0x20);
  }
  local_374 = (undefined4 *)0x0;
  local_370 = 0;
  local_3c8 = uVar21;
  local_374 = (undefined4 *)FUN_00678520();
  local_8 = 7;
  uVar14 = local_360 + -0x20;
  local_398 = local_360 + 0x20;
  local_344 = uVar14;
  if ((int)uVar14 < local_398) {
    local_390 = local_384 + -0x20;
    uVar15 = uVar14 * 0x100 + 0x80;
    iVar6 = local_384 + 0x20;
    iVar5 = local_390;
    do {
      iVar4 = iVar5;
      local_360 = iVar5;
      if (iVar5 < iVar6) {
        local_368 = iVar5 * 0x100 + 0x80;
        local_350 = uVar15;
        local_344 = uVar14;
        do {
          local_360 = iVar5;
          iVar6 = FUN_00602440(uVar14,iVar5);
          if ((iVar6 != 0) && ((*(byte *)(iVar6 + 0x30) & 1) != 0)) {
            puVar7 = (uint *)FUN_006023b0((int)(uVar14 + ((int)uVar14 >> 0x1f & 7U)) >> 3,
                                          (int)(local_360 + (local_360 >> 0x1f & 7U)) >> 3);
            uVar14 = local_344;
            local_36c = puVar7;
            local_358 = puVar7;
            if ((puVar7 != (uint *)0x0) && ((puVar7[6] != 0 && (puVar7[6] != 10)))) {
              puVar8 = (undefined4 *)local_374[1];
              puVar13 = local_374;
              if (*(char *)((int)puVar8 + 0xd) == '\0') {
                do {
                  if ((uint *)puVar8[4] < puVar7) {
                    puVar9 = (undefined4 *)puVar8[2];
                  }
                  else {
                    puVar9 = (undefined4 *)*puVar8;
                    puVar13 = puVar8;
                  }
                  puVar8 = puVar9;
                } while (*(char *)((int)puVar9 + 0xd) == '\0');
                if ((puVar13 == local_374) || (puVar7 < (uint *)puVar13[4])) goto LAB_004ca59b;
                local_394 = puVar13;
                ppuVar10 = &local_394;
              }
              else {
LAB_004ca59b:
                local_38c = local_374;
                ppuVar10 = &local_38c;
              }
              if (*ppuVar10 == local_374) {
                local_3b4 = ((int)local_368 >> 0x1f) << 0x10 | local_368 >> 0x10;
                local_3b8 = local_368 << 0x10;
                local_39c = ((int)uVar15 >> 0x1f) << 0x10 | uVar15 >> 0x10;
                local_3a0 = uVar15 << 0x10;
                fVar17 = (float10)FUN_005fa4c0(&local_3a0,&local_3b8);
                local_34c = (float)fVar17;
                uVar14 = local_344;
                if (0.0 < local_34c) {
                  FUN_0058e7d0(local_3e4,0,&local_36c,DAT_0076b248);
                  iVar6 = *(int *)((this->MapOverlayWidget_data).offset_0x0 + 0x8006d0);
                  uVar11 = __alldiv(puVar7[2],puVar7[3],0x10000,0);
                  uVar12 = __alldiv(*local_358,local_358[1],0x10000,0);
                  fVar17 = (float10)FUN_005c5e20(uVar12,uVar11,0);
                  local_34c = (float)fVar17;
                  local_378 = local_34c * 65536.0;
                  uVar21 = FUN_0068d946();
                  puVar7 = (uint *)(iVar6 + 0x20);
                  local_3c0 = (uint)uVar21 - *puVar7;
                  iStack_3bc = ((int)((ulonglong)uVar21 >> 0x20) - *(int *)(iVar6 + 0x24)) -
                               (uint)((uint)uVar21 < *puVar7);
                  local_34c = (float)CONCAT44(iStack_3bc,local_3c0);
                  local_354 = (float)(local_364->MapOverlayWidget_data).offset_0x0;
                  local_348 = local_34c * 1.5258789e-05;
                  iVar6 = *(int *)((int)local_354 + 0x8006d0);
                  local_318 = *(float *)((int)local_354 + 0x1000e50);
                  local_380 = (char *)(local_318 * 65536.0);
                  uVar14 = local_358[2];
                  uVar15 = *(uint *)(iVar6 + 0x18);
                  uVar16 = uVar14 - *(uint *)(iVar6 + 0x18);
                  uVar1 = local_358[3];
                  iVar5 = *(int *)(iVar6 + 0x1c);
                  uVar21 = FUN_0068d946();
                  local_3a8 = uVar16 - (uint)uVar21;
                  iStack_3a4 = (((uVar1 - iVar5) - (uint)(uVar14 < uVar15)) -
                               (int)((ulonglong)uVar21 >> 0x20)) - (uint)(uVar16 < (uint)uVar21);
                  local_34c = (float)CONCAT44(iStack_3a4,local_3a8);
                  local_35c = local_34c * 1.5258789e-05;
                  local_328 = *(float *)((int)local_354 + 0x1000e4c);
                  uVar14 = *local_36c;
                  local_37c = local_328 * 65536.0;
                  uVar15 = *(uint *)(iVar6 + 0x10);
                  uVar16 = uVar14 - *(uint *)(iVar6 + 0x10);
                  uVar1 = local_36c[1];
                  iVar6 = *(int *)(iVar6 + 0x14);
                  uVar21 = FUN_0068d946();
                  this = local_364;
                  puVar7 = local_36c;
                  local_3b0 = uVar16 - (uint)uVar21;
                  iStack_3ac = (((uVar1 - iVar6) - (uint)(uVar14 < uVar15)) -
                               (int)((ulonglong)uVar21 >> 0x20)) - (uint)(uVar16 < (uint)uVar21);
                  fVar18 = (float)CONCAT44(iStack_3ac,local_3b0) * 1.5258789e-05;
                  local_34c = *(float *)((int)local_354 + 0x800da4) * local_35c +
                              fVar18 * *(float *)((int)local_354 + 0x800d94) +
                              *(float *)((int)local_354 + 0x800db4) * local_348 +
                              *(float *)((int)local_354 + 0x800dc4);
                  local_10c = *(float *)((int)local_354 + 0x800d98) * local_35c +
                              fVar18 * *(float *)((int)local_354 + 0x800d88) +
                              *(float *)((int)local_354 + 0x800da8) * local_348 +
                              *(float *)((int)local_354 + 0x800db8);
                  local_104 = *(float *)((int)local_354 + 0x800da0) * local_35c +
                              fVar18 * *(float *)((int)local_354 + 0x800d90) +
                              *(float *)((int)local_354 + 0x800db0) * local_348 +
                              *(float *)((int)local_354 + 0x800dc0);
                  fStack_108 = *(float *)((int)local_354 + 0x800d9c) * local_35c +
                               fVar18 * *(float *)((int)local_354 + 0x800d8c) +
                               *(float *)((int)local_354 + 0x800dac) * local_348 +
                               *(float *)((int)local_354 + 0x800dbc);
                  local_4c = 1.0 / local_34c;
                  fVar18 = local_4c * local_10c;
                  fVar19 = local_4c * fStack_108;
                  local_4c = local_4c * local_104;
                  local_54 = CONCAT44(fVar19,fVar18);
                  local_3c = local_54;
                  uVar14 = local_344;
                  uVar15 = local_350;
                  local_34 = local_4c;
                  if (0.0 < local_4c) {
                    local_c4 = fVar19 * *(float *)((int)local_354 + 0x800d58) +
                               fVar18 * *(float *)((int)local_354 + 0x800d48) +
                               local_4c * *(float *)((int)local_354 + 0x800d68) +
                               *(float *)((int)local_354 + 0x800d78);
                    fStack_c0 = fVar19 * *(float *)((int)local_354 + 0x800d5c) +
                                fVar18 * *(float *)((int)local_354 + 0x800d4c) +
                                local_4c * *(float *)((int)local_354 + 0x800d6c) +
                                *(float *)((int)local_354 + 0x800d7c);
                    local_64 = 1.0 / (fVar19 * *(float *)((int)local_354 + 0x800d64) +
                                      fVar18 * *(float *)((int)local_354 + 0x800d54) +
                                      local_4c * *(float *)((int)local_354 + 0x800d74) +
                                     *(float *)((int)local_354 + 0x800d84));
                    local_bc = fVar19 * *(float *)((int)local_354 + 0x800d60) +
                               fVar18 * *(float *)((int)local_354 + 0x800d50) +
                               local_4c * *(float *)((int)local_354 + 0x800d70) +
                               *(float *)((int)local_354 + 0x800d80);
                    fVar18 = local_64 * local_c4;
                    fVar19 = local_64 * fStack_c0;
                    local_64 = local_64 * local_bc;
                    local_6c = CONCAT44(fVar19,fVar18);
                    local_3c = local_6c;
                    local_34 = local_64;
                    if ((((-1.0 <= fVar18) && (fVar18 <= 1.0)) && (-1.0 <= fVar19)) &&
                       (fVar19 <= 1.0)) {
                      iVar6 = (local_364->Object_data).offset_0x0;
                      iVar5 = *(int *)(iVar6 + 0x10c);
                      iVar6 = *(int *)(iVar6 + 0x110);
                      local_d0 = (float)iVar5;
                      fStack_cc = (float)-iVar6;
                      local_c8 = 0x3f800000;
                      local_94 = 0x3f000000;
                      local_e8 = (float)iVar5;
                      fStack_e4 = (float)iVar6;
                      _local_9c = CONCAT44(fStack_cc * 0.5,local_d0 * 0.5);
                      local_e0 = 0;
                      local_35c = fVar18 * local_d0 * 0.5 + local_e8 * 0.5;
                      fVar18 = fVar19 * fStack_cc * 0.5 + fStack_e4 * 0.5;
                      local_70 = 0;
                      iVar6 = (int)local_354 + 0x2e4;
                      _local_78 = CONCAT44(fStack_e4 * 0.5,local_e8 * 0.5);
                      local_3c = CONCAT44(fVar18,local_35c);
                      local_354 = fVar18;
                      FUN_004e5590(local_298,iVar6,local_36c);
                      local_ac = 0x3f8000003f800000;
                      local_a4 = 0x3f8000003f800000;
                      local_8._0_1_ = 8;
                      if ((local_358[6] != 1) && (local_358[6] != 10)) {
                        iVar6 = *(int *)((this->MapOverlayWidget_data).offset_0x0 + 0x8006d0);
                        fVar17 = (float10)FUN_0043ca60((float)(int)puVar7[9]);
                        local_36c = (uint *)(float)fVar17;
                        fVar17 = (float10)FUN_0043ca60((float)*(int *)(iVar6 + 400));
                        local_34c = (float)fVar17;
                        if (local_34c - 0.1 < (float)local_36c) {
                          iVar6 = *(int *)((this->MapOverlayWidget_data).offset_0x0 + 0x8006d0);
                          fVar17 = (float10)FUN_0043ca60((float)(int)puVar7[9]);
                          local_36c = (uint *)(float)fVar17;
                          fVar17 = (float10)FUN_0043ca60((float)*(int *)(iVar6 + 400));
                          local_34c = (float)fVar17;
                          if (local_34c + 0.1 < (float)local_36c) {
                            local_1a4 = 0x3f800000;
                            uStack_1a0 = 0x3e4ccccd;
                            local_ac = 0x3e4ccccd3f800000;
                            local_19c = 0x3e4ccccd;
                            uStack_198 = 0x3f800000;
                            local_a4 = 0x3f8000003e4ccccd;
                          }
                          else {
                            local_13c = 0;
                            uStack_138 = 0x3f800000;
                            local_ac = 0x3f80000000000000;
                            local_134 = 0x3f800000;
                            uStack_130 = 0x3f800000;
                            local_a4 = 0x3f8000003f800000;
                          }
                        }
                      }
                      FUN_0040eb60(L"resource1.dat");
                      local_1e8 = 0;
                      local_1e4 = 0;
                      local_1e0 = 0;
                      local_1dc = 0;
                      local_1f8 = 0;
                      local_1f4 = 0;
                      local_1f0 = 0;
                      local_1ec = 0x3f800000;
                      local_218 = 0x3f800000;
                      local_214 = 0x3f800000;
                      local_210 = 0x3f800000;
                      local_20c = 0x3f800000;
                      local_8._0_1_ = 9;
                      FUN_00639b30(local_310,local_298,0,0x40000000,local_35c,local_354,0x41400000,
                                   0x40400000,&local_218,&local_1f8,&local_1e8,1,0xbf800000,1);
                      local_8._0_1_ = 8;
                      FUN_00593e50();
                      FUN_0040eb60(L"resource1.dat");
                      local_8._0_1_ = 10;
                      local_238 = 0;
                      local_234 = 0;
                      local_230 = 0;
                      local_22c = 0;
                      local_258 = 0;
                      local_254 = 0;
                      local_250 = 0;
                      local_24c = 0;
                      FUN_00639b30(local_2c8,local_298,0,0x40000000,local_35c,local_354,0x41400000,0
                                   ,&local_ac,&local_258,&local_238,1,0xbf800000,1);
                      FUN_00593e50();
                      local_8 = CONCAT31(local_8._1_3_,7);
                      FUN_00593e50();
                      uVar14 = local_344;
                      uVar15 = local_350;
                    }
                  }
                }
              }
            }
          }
          local_368 = local_368 + 0x100;
          iVar5 = local_360 + 1;
          iVar6 = local_384 + 0x20;
          iVar4 = local_390;
          local_360 = iVar5;
        } while (iVar5 < iVar6);
      }
      uVar14 = uVar14 + 1;
      uVar15 = uVar15 + 0x100;
      iVar5 = iVar4;
      local_350 = uVar15;
      local_344 = uVar14;
    } while ((int)uVar14 < local_398);
  }
  FUN_00601ea0();
  local_8 = 0xffffffff;
  FUN_0067eb10(local_3d4,*local_374,local_374);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_374);
}


