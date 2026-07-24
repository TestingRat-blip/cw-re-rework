// VoxelWidget (ui) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "VoxelWidget.h"

/* cube::VoxelWidget::vfunction1_for_NamedObject @ 005881b0  kind=game  attributed-by=rtti  size=121 */

VoxelWidget * __thiscall
cube::VoxelWidget::vfunction1_for_NamedObject(VoxelWidget *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f1476;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  Sprite::~Sprite(&this->field798_0x3e0);
  if (this->field206_0x170 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this->field206_0x170);
  }
  local_8 = 0xffffffff;
  plasma::Widget::~Widget((Widget *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  ExceptionList = local_10;
  return this;
}


/* cube::VoxelWidget::deleting_destructor_for_NamedObject @ 00588500  kind=game  attributed-by=rtti  size=16128 */

void __thiscall cube::VoxelWidget::deleting_destructor_for_NamedObject(VoxelWidget *this)

{
  undefined1 uVar1;
  int *piVar2;
  VoxelWidget *pVVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  void **ppvVar9;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar10;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar11;
  int iVar12;
  float *pfVar13;
  undefined8 *puVar14;
  char *pcVar15;
  float fVar16;
  int *piVar17;
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *pbVar18;
  char *pcVar19;
  float **ppfVar20;
  float *pfVar21;
  float10 fVar22;
  double dVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined8 *puVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  _func_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr
  *p_Var37;
  undefined4 uVar38;
  undefined1 auStack_770 [8];
  float local_768;
  float *local_764;
  float *local_760;
  void *local_75c;
  float local_758;
  undefined4 uStack_754;
  float *local_750;
  undefined4 uStack_74c;
  float local_748;
  float fStack_744;
  float local_740;
  float local_73c;
  float local_738;
  float *pfStack_730;
  float fStack_72c;
  float fStack_728;
  float fStack_724;
  float fStack_720;
  float fStack_71c;
  float fStack_718;
  float fStack_714;
  float *local_710;
  float fStack_70c;
  float fStack_708;
  float fStack_704;
  float fStack_700;
  float fStack_6fc;
  VoxelWidget *local_6f8;
  float fStack_6f4;
  float **local_6f0;
  float fStack_6ec;
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *pbStack_6e8;
  undefined1 auStack_6e4 [4];
  float fStack_6e0;
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *pbStack_6dc;
  undefined1 auStack_6d8 [4];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> abStack_6d4 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> abStack_6cc [14];
  undefined4 uStack_694;
  undefined4 uStack_690;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> abStack_67c [6];
  int iStack_62c;
  undefined1 auStack_628 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> abStack_618 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> abStack_610 [14];
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> abStack_5c0 [6];
  float afStack_578 [4];
  undefined8 uStack_568;
  float fStack_560;
  undefined4 uStack_55c;
  float fStack_558;
  float *pfStack_554;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  void *pvStack_534;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  int aiStack_518 [4];
  float afStack_508 [4];
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  void *apvStack_4e8 [4];
  undefined4 uStack_4d8;
  uint uStack_4d4;
  int aiStack_4d0 [4];
  void *local_4c0;
  float fStack_4bc;
  float fStack_4b8;
  undefined4 uStack_4b4;
  uint uStack_4ac;
  void *apvStack_4a8 [4];
  undefined4 uStack_498;
  uint uStack_494;
  float afStack_490 [4];
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float *pfStack_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  void *apvStack_450 [4];
  undefined4 uStack_440;
  uint uStack_43c;
  float afStack_438 [4];
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float afStack_3f8 [6];
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined4 local_370;
  undefined2 local_36c;
  undefined1 local_36a;
  undefined2 local_368;
  undefined1 local_364 [256];
  undefined4 local_264;
  float local_260;
  undefined2 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined2 local_250;
  undefined1 local_24e;
  undefined2 local_24c;
  undefined1 local_248 [256];
  undefined4 local_148;
  float local_140;
  undefined2 local_13c [2];
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined2 local_12c;
  undefined1 local_128 [256];
  undefined4 local_28;
  uint local_1c;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_006f15b0;
  local_14 = ExceptionList;
  local_1c = DAT_0076aa78 ^ (uint)auStack_770;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffff888;
  ExceptionList = &local_14;
  local_768 = 0.0;
  local_378._0_2_ = 0;
  local_378._4_4_ = 0;
  local_370 = 0;
  local_36c = 0;
  local_36a = 0;
  local_368 = 1;
  local_264 = 0;
  local_6f8 = this;
  memset(local_364,0,0x100);
  FUN_0042c5e0(&local_378);
  local_6f0 = &this->field206_0x170;
  this->field207_0x174 = this->field206_0x170;
  if (this->field202_0x160 == 0) goto LAB_0058bbf5;
  local_378._4_4_ = 0;
  local_370 = 0;
  local_36c = local_36c & 0xff00;
  local_36a = 0;
  local_264 = 0;
  memset(local_364,0,0x100);
  local_368 = 1;
  local_36c = CONCAT11(*(undefined1 *)(this->field202_0x160 + 0xd),(undefined1)local_36c);
  local_768 = *(float *)(this->field489_0x298 + 0x8006d0);
  local_378._0_2_ = 0xa0b;
  local_73c = 0.0;
  local_75c = (void *)0x0;
  if (0 < (*(int *)((int)local_768 + 0x11e0) - *(int *)((int)local_768 + 0x11dc)) / 0xc) {
    local_764 = (float *)0x0;
    do {
      piVar17 = *(int **)(*(int *)((int)local_768 + 0x11dc) + (int)local_764);
      if (piVar17 != *(int **)(*(int *)((int)local_768 + 0x11dc) + 4 + (int)local_764)) {
        piVar2 = *(int **)(*(int *)((int)local_768 + 0x11dc) + 4 + (int)local_764);
        do {
          cVar4 = FUN_0042f4a0(&local_378);
          if (cVar4 != '\0') {
            local_73c = (float)((int)local_73c + *piVar17);
          }
          piVar17 = piVar17 + 0x47;
        } while (piVar17 != piVar2);
      }
      fVar16 = local_73c;
      local_764 = local_764 + 3;
      local_75c = (void *)((int)local_75c + 1);
    } while ((int)local_75c <
             (*(int *)((int)local_768 + 0x11e0) - *(int *)((int)local_768 + 0x11dc)) / 0xc);
    this = local_6f8;
    if (local_73c != 0.0) {
      local_24c = 1;
      local_25c = 0;
      local_258 = 0;
      local_254 = 0;
      local_250 = 0;
      local_24e = 0;
      local_148 = 0;
      memset(local_248,0,0x100);
      local_260 = fVar16;
      FUN_0042c5e0(&local_378);
      FUN_00486700(&local_260);
      this = local_6f8;
    }
  }
  iVar6 = FUN_004c76a0(uVar5);
  fVar16 = (float)(iVar6 + -10);
  local_75c = (void *)FUN_004c76a0();
  if ((int)fVar16 < 1) {
    fVar16 = 1.4013e-45;
  }
  local_740 = fVar16;
  if ((int)fVar16 <= (int)local_75c) {
    do {
      local_738 = 1.79366e-43;
      do {
        iVar6 = *(int *)(this->field489_0x298 + 0x8006d0);
        local_748 = 0.0;
        local_768 = 0.0;
        if (0 < (*(int *)(iVar6 + 0x11e0) - *(int *)(iVar6 + 0x11dc)) / 0xc) {
          local_764 = (float *)0x0;
          do {
            iVar6 = *(int *)(this->field489_0x298 + 0x8006d0);
            piVar17 = *(int **)(*(int *)(iVar6 + 0x11dc) + (int)local_764);
            if (piVar17 != *(int **)(*(int *)(iVar6 + 0x11dc) + 4 + (int)local_764)) {
              do {
                if (((((char)piVar17[1] == '\v') && (*(char *)((int)piVar17 + 5) == '\x0e')) &&
                    ((float)(uint)*(byte *)((int)piVar17 + 0x11) == local_738)) &&
                   (fVar16 = (float)FUN_004c76a0(), fVar16 == local_740)) {
                  local_748 = (float)((int)local_748 + *piVar17);
                }
                piVar17 = piVar17 + 0x47;
              } while (piVar17 !=
                       *(int **)(*(int *)(*(int *)(this->field489_0x298 + 0x8006d0) + 0x11dc) + 4 +
                                (int)local_764));
            }
            fVar16 = local_748;
            iVar6 = *(int *)(this->field489_0x298 + 0x8006d0);
            local_764 = local_764 + 3;
            local_768 = (float)((int)local_768 + 1);
          } while ((int)local_768 < (*(int *)(iVar6 + 0x11e0) - *(int *)(iVar6 + 0x11dc)) / 0xc);
          if (local_748 != 0.0) {
            local_138 = 0;
            local_134 = 0;
            local_130 = 0;
            local_12e = 0;
            local_28 = 0;
            memset(local_128,0,0x100);
            local_140 = fVar16;
            local_13c[0] = 0xe0b;
            local_12f = SUB41(local_738,0);
            fVar22 = (float10)FUN_004462f0((float)(int)local_740 * 0.01);
            local_760 = this->field207_0x174;
            local_750 = (float *)(float)fVar22;
            local_12c = (undefined2)(int)fVar22;
            if ((&local_140 < local_760) &&
               (local_750 = this->field206_0x170, fVar16 = local_748, local_750 <= &local_140)) {
              local_768 = (float)(((int)local_13c + (-4 - (int)local_750)) / 0x11c);
              ppfVar20 = &this->field206_0x170;
              if ((local_760 == this->field208_0x178) &&
                 (iVar12 = (int)this->field208_0x178 - (int)local_760, iVar6 = iVar12 >> 0x1f,
                 iVar12 / 0x11c + iVar6 == iVar6)) {
                iVar6 = ((int)local_760 - (int)*ppfVar20) / 0x11c;
                if (iVar6 == 0xe6c2b4) {
LAB_00588c7d:
                    /* WARNING: Subroutine does not return */
                  std::_Xlength_error("vector<T> too long");
                }
                local_710 = (float *)(iVar6 + 1);
                uVar5 = ((int)this->field208_0x178 - (int)*ppfVar20) / 0x11c;
                if (0xe6c2b4 - (uVar5 >> 1) < uVar5) {
                  pfVar13 = (float *)0x0;
                }
                else {
                  pfVar13 = (float *)(uVar5 + (uVar5 >> 1));
                }
                if (pfVar13 < local_710) {
                  pfVar13 = local_710;
                }
                FUN_0044ba10(pfVar13);
              }
              pfVar13 = *ppfVar20;
              if (this->field207_0x174 != (float *)0x0) {
                *this->field207_0x174 = pfVar13[(int)local_768 * 0x47];
                FUN_0040ee70(pfVar13 + (int)local_768 * 0x47 + 1);
              }
              this->field207_0x174 = this->field207_0x174 + 0x47;
            }
            else {
              local_764 = this->field208_0x178;
              if ((local_760 == local_764) &&
                 (iVar6 = (int)local_764 - (int)local_760 >> 0x1f,
                 ((int)local_764 - (int)local_760) / 0x11c + iVar6 == iVar6)) {
                local_710 = this->field206_0x170;
                local_760 = (float *)((int)local_760 - (int)local_710);
                local_750 = (float *)((int)local_760 / 0x11c);
                if (local_750 == (float *)0xe6c2b4) goto LAB_00588c7d;
                local_758 = (float)((int)local_750 + 1);
                local_764 = (float *)((int)local_764 - (int)local_710);
                local_750 = (float *)((int)local_764 / 0x11c);
                local_768 = (float)((uint)local_750 >> 1);
                if ((float *)(0xe6c2b4 - (int)local_768) < local_750) {
                  fVar25 = 0.0;
                }
                else {
                  fVar25 = (float)((int)local_750 + (int)local_768);
                }
                if ((uint)fVar25 < (uint)local_758) {
                  fVar25 = local_758;
                }
                FUN_0044ba10(fVar25);
              }
              if (this->field207_0x174 != (float *)0x0) {
                *this->field207_0x174 = fVar16;
                FUN_0040ee70(local_13c);
              }
              this->field207_0x174 = this->field207_0x174 + 0x47;
            }
          }
        }
        local_738 = (float)((int)local_738 + 1);
      } while ((int)local_738 < 0x84);
      local_740 = (float)((int)local_740 + 1);
    } while ((int)local_740 <= (int)local_75c);
  }
  if ((int)this->field497_0x2ac < 0) {
    cVar4 = this->field778_0x3c8;
    if (cVar4 == '\0') {
      if (((int)this->field209_0x17c < 0) ||
         (((int)this->field207_0x174 - (int)this->field206_0x170) / 0x11c <=
          (int)this->field209_0x17c)) goto LAB_00588caf;
      cVar4 = this->field778_0x3c8;
    }
    if (cVar4 == '\0') {
      FUN_0042c5e0(this->field206_0x170 + (int)this->field209_0x17c * 0x47 + 1);
    }
    else {
      this->field210_0x180 = 0xb;
      this->field211_0x181 = (0x7f < this->field794_0x3d8) * '\x04' + '\n';
      this->field226_0x190 = this->field795_0x3dc;
      this->field223_0x18d = (char)this->field794_0x3d8;
    }
  }
LAB_00588caf:
  ppfVar20 = &this->field206_0x170;
  iVar6 = *(int *)(this->offset_0x13c + 0x38);
  iVar12 = *(int *)(iVar6 + 0x170);
  iVar6 = *(int *)(iVar6 + 0x19c);
  local_710 = *(float **)(iVar6 + iVar12 * 8);
  local_750 = *(float **)(iVar6 + 4 + iVar12 * 8);
  if (((int)this->field207_0x174 - (int)*ppfVar20) / 0x11c <= (int)this->field209_0x17c) {
    this->field209_0x17c = (float *)(((int)this->field207_0x174 - (int)*ppfVar20) / 0x11c + -1);
  }
  local_760 = (float *)FUN_004ec400(this->field202_0x160);
  if (local_760 != (float *)0x0) {
    piVar17 = *(int **)(this->field489_0x298 + 0x134);
    (**(code **)(*piVar17 + 0xe4))(piVar17,7,1);
    afStack_578[0] = 0.0;
    afStack_578[1] = 0.0;
    afStack_578[2] = 0.0;
    afStack_578[3] = 0.0;
    afStack_508[0] = 0.0;
    afStack_508[1] = 0.0;
    afStack_508[2] = 0.0;
    pfVar13 = &local_260;
    puVar14 = &local_378;
    iVar6 = 0x10;
    do {
      *puVar14 = 0;
      pfVar13[0] = 0.0;
      pfVar13[1] = 0.0;
      puVar14[1] = 0;
      pfVar13[2] = 0.0;
      puVar14 = puVar14 + 2;
      pfVar13 = pfVar13 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    FUN_00447d10();
    FUN_00448f10(&local_378,&local_260);
    afStack_578[0] = 1.0;
    afStack_578[1] = 1.0;
    afStack_578[2] = 1.0;
    afStack_578[3] = 1.0;
    FUN_00448280(afStack_578);
    FUN_00447fb0(0x3f800000);
    fVar22 = (float10)FUN_0062f600();
    local_758 = (float)fVar22;
    fStack_718 = local_758 * 0.5;
    fVar22 = (float10)FUN_006291d0();
    iVar6 = this->offset_0x13c;
    fVar16 = 1.0 / (*(float *)(iVar6 + 0x54) * (float)local_710 +
                    *(float *)(iVar6 + 100) * (float)local_750 + *(float *)(iVar6 + 0x84));
    uStack_3b8 = 0x3f800000;
    pbStack_6dc = *(basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable **)
                   ((int)local_760 + 0x44);
    auStack_6e4 = *(undefined1 (*) [4])((int)local_760 + 0x48);
    pbStack_6e8 = *(basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable **)
                   ((int)local_760 + 0x4c);
    fStack_718 = fStack_718 +
                 (*(float *)(iVar6 + 0x58) * (float)local_750 +
                  *(float *)(iVar6 + 0x48) * (float)local_710 + *(float *)(iVar6 + 0x78)) * fVar16;
    fStack_72c = (float)fVar22 * 0.6 +
                 (*(float *)(iVar6 + 0x5c) * (float)local_750 +
                  *(float *)(iVar6 + 0x4c) * (float)local_710 + *(float *)(iVar6 + 0x7c)) * fVar16;
    pbVar18 = pbStack_6dc;
    if ((int)pbStack_6dc < (int)auStack_6e4) {
      pbVar18 = (basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)auStack_6e4;
    }
    if ((int)pbVar18 < (int)pbStack_6e8) {
      pbVar18 = pbStack_6e8;
    }
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    fStack_744 = 0.0;
    uStack_3a8 = 0;
    uStack_3a4 = 0x3f800000;
    uStack_3a0 = 0;
    local_73c = 0.0;
    uStack_39c = 0;
    uStack_398 = 0;
    uStack_394 = 0;
    uStack_390 = 0x3f800000;
    uStack_38c = 0;
    uStack_388 = 0;
    uStack_384 = 0;
    uStack_380 = 0;
    fStack_6e0 = 0.0;
    uStack_37c = 0x3f800000;
    local_758 = this->field203_0x164 * 0.017453292;
    fStack_6ec = 1.0;
    dVar23 = (double)local_758;
    fStack_71c = 1.0;
    libm_sse2_cos_precise();
    local_764 = (float *)(float)dVar23;
    dVar23 = (double)local_758;
    libm_sse2_sin_precise();
    fStack_720 = (float)dVar23;
    fVar25 = fStack_720 * 0.0;
    fVar16 = (float)local_764 * 0.0;
    local_768 = fVar25 + fVar16;
    local_75c = (void *)(fVar16 - fVar25);
    fStack_70c = (float)local_764 + fVar25;
    local_764 = (float *)((float)local_764 - fVar25);
    pfStack_730 = (float *)(fVar16 - fStack_720);
    fStack_720 = fStack_720 + fVar16;
    local_758 = this->field204_0x168 * 0.017453292;
    dVar23 = (double)local_758;
    libm_sse2_cos_precise();
    fStack_714 = (float)dVar23;
    dVar23 = (double)local_758;
    libm_sse2_sin_precise();
    fVar26 = (float)dVar23;
    fVar16 = fStack_714 - fVar26 * (float)local_75c;
    local_748 = fStack_714 * (float)local_75c + fVar26;
    fVar27 = fStack_714 * 0.0;
    fVar25 = fVar26 * 0.0;
    fStack_6fc = fStack_714 * (float)pfStack_730 + fVar25;
    fStack_728 = fVar27 - fVar26 * (float)local_764;
    fStack_704 = fStack_714 * (float)local_764 + fVar25;
    local_764 = (float *)(fVar27 - fVar26 * (float)local_75c);
    fStack_714 = fStack_714 * (float)local_75c + fVar25;
    local_758 = this->field205_0x16c * 0.017453292;
    dVar23 = (double)local_758;
    local_75c = (void *)fVar16;
    pfStack_730 = (float *)(fVar27 - fVar26 * (float)pfStack_730);
    libm_sse2_cos_precise();
    local_738 = (float)dVar23;
    dVar23 = (double)local_758;
    libm_sse2_sin_precise();
    fVar16 = (float)dVar23;
    afStack_490[0] = (fVar16 * local_768 + local_738 * (float)local_75c) * 0.25;
    fStack_480 = (local_738 * local_768 - (float)local_75c * fVar16) * 0.25;
    afStack_490[1] = (fVar16 * fStack_70c + local_738 * (float)pfStack_730) * 0.25;
    afStack_490[3] = (fVar16 * local_768 + local_738 * (float)local_764) * 0.25;
    fStack_47c = (local_738 * fStack_70c - (float)pfStack_730 * fVar16) * 0.25;
    afStack_490[2] = (fVar16 * fStack_720 + local_738 * fStack_728) * 0.25;
    fStack_478 = (local_738 * fStack_720 - fStack_728 * fVar16) * 0.25;
    local_738 = (local_738 * local_768 - (float)local_764 * fVar16) * 0.25;
    local_748 = local_748 * 0.25;
    fStack_46c = fStack_6fc * 0.25;
    fStack_468 = fStack_704 * 0.25;
    fStack_714 = fStack_714 * 0.25;
    fVar16 = 1.0 / (float)(int)pbVar18;
    if (fVar16 != 1.0) {
      afStack_490[0] = fVar16 * afStack_490[0];
      afStack_490[1] = fVar16 * afStack_490[1];
      afStack_490[2] = fVar16 * afStack_490[2];
      afStack_490[3] = fVar16 * afStack_490[3];
      fStack_480 = fVar16 * fStack_480;
      fStack_47c = fVar16 * fStack_47c;
      fStack_478 = fVar16 * fStack_478;
      local_738 = fVar16 * local_738;
      local_748 = fVar16 * local_748;
      fStack_46c = fVar16 * fStack_46c;
      fStack_468 = fVar16 * fStack_468;
      fStack_714 = fVar16 * fStack_714;
    }
    fVar26 = (float)(int)auStack_6e4 * -0.5;
    fVar25 = (float)(int)pbStack_6dc * -0.5;
    fVar16 = (float)(int)pbStack_6e8 * -0.5;
    iVar6 = (this->Object_data).offset_0x0;
    local_764 = (float *)(fVar26 * fStack_480 + fVar25 * afStack_490[0] + fVar16 * local_748 +
                         fStack_6e0);
    fStack_70c = fVar26 * fStack_47c + fVar25 * afStack_490[1] + fVar16 * fStack_46c + fStack_6e0;
    dVar23 = 0.39269909262657166;
    local_758 = fVar26 * fStack_478 + fVar25 * afStack_490[2] + fVar16 * fStack_468 + fStack_6ec;
    local_768 = fVar26 * local_738 + fVar25 * afStack_490[3] + fVar16 * fStack_714 + fStack_71c;
    uStack_754 = afStack_490[2];
    uStack_74c = afStack_490[1];
    local_740 = fStack_47c;
    fStack_724 = fStack_480;
    fStack_708 = fStack_478;
    fStack_704 = fStack_468;
    fStack_700 = afStack_490[0];
    fStack_6fc = fStack_46c;
    fStack_6f4 = afStack_490[3];
    fStack_474 = local_738;
    fStack_470 = local_748;
    fStack_464 = fStack_714;
    pfStack_460 = local_764;
    fStack_45c = fStack_70c;
    fStack_458 = local_758;
    fStack_454 = local_768;
    libm_sse2_tan_precise();
    fVar27 = 1.0 / (float)dVar23;
    afStack_3f8[4] = 0.0;
    fVar26 = -(fVar27 / ((float)*(int *)(iVar6 + 0x10c) / (float)*(int *)(iVar6 + 0x110)));
    afStack_3f8[0] = fVar26;
    uStack_3d8 = 0;
    uStack_3c8 = 0;
    afStack_3f8[1] = 0.0;
    afStack_3f8[5] = fVar27;
    uStack_3d4 = 0;
    uStack_3c4 = 0;
    afStack_3f8[2] = 0.0;
    uStack_3e0 = 0;
    uStack_3d0 = 0x3f800347;
    uStack_3c0 = 0xbdccd20b;
    afStack_3f8[3] = 0.0;
    uStack_3dc = 0;
    uStack_3cc = 0x3f800000;
    uStack_3bc = 0;
    fVar28 = ((fStack_718 - (float)*(int *)(iVar6 + 0x10c) * 0.5) / (float)*(int *)(iVar6 + 0x10c))
             * 2.0;
    fVar29 = fVar28 * 0.0;
    fVar25 = ((fStack_72c - (float)*(int *)(iVar6 + 0x110) * 0.5) / (float)*(int *)(iVar6 + 0x110))
             * -2.0;
    fStack_558 = 1.0;
    pfStack_554 = (float *)0x0;
    fStack_550 = 0.0;
    fStack_54c = 0.0;
    fStack_548 = 0.0;
    fStack_544 = 1.0;
    fStack_540 = 0.0;
    fStack_53c = 0.0;
    fVar16 = fVar25 * 0.0;
    fStack_538 = 0.0;
    fVar30 = fVar29 + fVar16;
    pvStack_534 = (void *)0x0;
    fStack_530 = 1.0;
    fStack_52c = 0.0;
    fStack_528 = fVar28 + fVar16 + fStack_744 + 0.0;
    fStack_524 = fVar25 + fVar29 + fStack_744 + 0.0;
    fStack_718 = fStack_528 * 0.0;
    fStack_520 = fVar30 + 0.0 + 0.0;
    fStack_51c = fVar30 + fStack_744 + 1.0;
    pfVar13 = &fStack_558;
    pfVar21 = afStack_438;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar21 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar21 = pfVar21 + 1;
    }
    fVar16 = fStack_744 + fVar26 + fStack_744 + fStack_718;
    afStack_438[0] = fVar16;
    fVar25 = fVar27 * 0.0 + 0.0 + fStack_744 + fStack_718;
    fStack_428 = fVar25;
    fStack_528 = local_73c + 0.0 + fStack_528;
    fStack_418 = fStack_528;
    fVar28 = afStack_438[1] * 0.0;
    fStack_718 = (local_73c - 0.0) + fStack_718;
    fStack_408 = fStack_718;
    fVar29 = fStack_404 * 0.0;
    afStack_438[1] = fVar26 * afStack_438[1] + fStack_424 * 0.0 + fStack_414 * 0.0 + fVar29;
    fVar31 = fVar28 + fStack_424 * 0.0;
    fStack_424 = fVar27 * fStack_424 + fVar28 + fStack_414 * 0.0 + fVar29;
    fVar30 = fStack_414 * 0.10001;
    fStack_414 = fStack_414 * 1.0001 + fVar31 + fStack_404;
    fVar28 = fStack_400 * 0.0;
    fStack_404 = (fVar31 - fVar30) + fVar29;
    fVar29 = afStack_438[2] * 0.0;
    fVar30 = fStack_420 * 0.0 + fVar29;
    afStack_438[2] = fVar26 * afStack_438[2] + fStack_420 * 0.0 + fStack_410 * 0.0 + fVar28;
    fStack_420 = fVar27 * fStack_420 + fVar29 + fStack_410 * 0.0 + fVar28;
    fVar29 = fStack_410 * 0.10001;
    fStack_410 = fStack_410 * 1.0001 + fVar30 + fStack_400;
    fStack_400 = (fVar30 - fVar29) + fVar28;
    fVar28 = fStack_3fc * 0.0;
    fVar29 = afStack_438[3] * 0.0;
    fVar30 = fStack_41c * 0.0 + fVar29;
    afStack_438[3] = fVar26 * afStack_438[3] + fStack_41c * 0.0 + fStack_40c * 0.0 + fVar28;
    fVar26 = fStack_40c * 1.0001 + fVar30 + fStack_3fc;
    fStack_41c = fVar27 * fStack_41c + fVar29 + fStack_40c * 0.0 + fVar28;
    fStack_3fc = (fVar30 - fStack_40c * 0.10001) + fVar28;
    fStack_40c = fVar26;
    fVar27 = fStack_528 * 0.0;
    fVar26 = fStack_718 * 0.0;
    pfVar13 = afStack_438;
    pfVar21 = afStack_3f8;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar21 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar21 = pfVar21 + 1;
    }
    fVar28 = fVar16 * 0.0 + fVar25 * 0.0;
    fStack_744 = fVar25 * 0.0 + fVar16 + fVar27 + fVar26;
    pfVar13 = afStack_438;
    pfVar21 = &fStack_558;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar21 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar21 = pfVar21 + 1;
    }
    fVar29 = fVar16 * 0.0 + fVar25 + fVar27 + fVar26;
    fStack_718 = fVar28 + fVar27 + fStack_718;
    fVar26 = fVar28 + fStack_528 + fVar26;
    fVar16 = fStack_524 * 0.0;
    fStack_71c = fStack_544 * 0.0 + (float)pfStack_554 + (float)pvStack_534 * 0.0 + fVar16;
    fStack_72c = (float)pfStack_554 * 0.0 + fStack_544 + (float)pvStack_534 * 0.0 + fVar16;
    fVar25 = fStack_544 * 0.0 + (float)pfStack_554 * 0.0;
    fVar16 = fVar25 + (float)pvStack_534 + fVar16;
    fStack_720 = (float)pvStack_534 * 0.0 + fVar25 + fStack_524;
    fStack_6e0 = fStack_520 * 0.0;
    fStack_6ec = fStack_540 * 0.0 + fStack_550 + fStack_530 * 0.0 + fStack_6e0;
    fVar25 = fStack_540 * 0.0 + fStack_550 * 0.0;
    fStack_728 = fStack_550 * 0.0 + fStack_540 + fStack_530 * 0.0 + fStack_6e0;
    fStack_6e0 = fVar25 + fStack_530 + fStack_6e0;
    local_73c = fStack_530 * 0.0 + fVar25 + fStack_520;
    fVar25 = fStack_51c * 0.0;
    pbStack_6e8 = (basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)
                  (fStack_53c * 0.0 + fStack_54c + fStack_52c * 0.0 + fVar25);
    pfStack_730 = (float *)(fStack_54c * 0.0 + fStack_53c + fStack_52c * 0.0 + fVar25);
    fVar27 = fStack_53c * 0.0 + fStack_54c * 0.0;
    auStack_6e4 = (undefined1  [4])(fVar27 + fStack_52c + fVar25);
    local_75c = (void *)(fStack_52c * 0.0 + fVar27 + fStack_51c);
    fStack_558 = fVar29 * uStack_74c + fStack_744 * fStack_700 + fVar26 * uStack_754 +
                 fStack_718 * fStack_6f4;
    fStack_548 = fVar29 * local_740 + fStack_744 * fStack_724 + fVar26 * fStack_708 +
                 fStack_718 * local_738;
    fStack_538 = fVar29 * fStack_6fc + fStack_744 * local_748 + fVar26 * fStack_704 +
                 fStack_718 * fStack_714;
    fStack_528 = fVar29 * fStack_70c + fStack_744 * (float)local_764 + fVar26 * local_758 +
                 fStack_718 * local_768;
    pfStack_554 = (float *)(fStack_72c * uStack_74c + fStack_71c * fStack_700 + fVar16 * uStack_754
                           + fStack_720 * fStack_6f4);
    fStack_544 = fStack_72c * local_740 + fStack_71c * fStack_724 + fVar16 * fStack_708 +
                 fStack_720 * local_738;
    pvStack_534 = (void *)(fStack_72c * fStack_6fc + fStack_71c * local_748 + fVar16 * fStack_704 +
                          fStack_720 * fStack_714);
    fStack_524 = fStack_72c * fStack_70c + fStack_71c * (float)local_764 + fVar16 * local_758 +
                 fStack_720 * local_768;
    fStack_550 = fStack_728 * uStack_74c + fStack_6ec * fStack_700 + fStack_6e0 * uStack_754 +
                 local_73c * fStack_6f4;
    fStack_540 = fStack_728 * local_740 + fStack_6ec * fStack_724 + fStack_6e0 * fStack_708 +
                 local_73c * local_738;
    fStack_530 = fStack_728 * fStack_6fc + fStack_6ec * local_748 + fStack_6e0 * fStack_704 +
                 local_73c * fStack_714;
    fStack_520 = fStack_728 * fStack_70c + fStack_6ec * (float)local_764 + fStack_6e0 * local_758 +
                 local_73c * local_768;
    fStack_54c = (float)pfStack_730 * uStack_74c + (float)pbStack_6e8 * fStack_700 +
                 (float)auStack_6e4 * uStack_754 + (float)local_75c * fStack_6f4;
    fStack_53c = (float)pbStack_6e8 * fStack_724 + (float)pfStack_730 * local_740 +
                 (float)auStack_6e4 * fStack_708 + (float)local_75c * local_738;
    fStack_52c = (float)pfStack_730 * fStack_6fc + (float)pbStack_6e8 * local_748 +
                 (float)auStack_6e4 * fStack_704 + (float)local_75c * fStack_714;
    fStack_51c = (float)pfStack_730 * fStack_70c + (float)pbStack_6e8 * (float)local_764 +
                 (float)auStack_6e4 * local_758 + (float)local_75c * local_768;
    FUN_0058c440();
    this = local_6f8;
    iVar6 = (local_6f8->Object_data).offset_0x0;
    fVar26 = (*(float *)(iVar6 + 0xd4) / (float)*(int *)(iVar6 + 0x10c)) * 2.0 - 1.0;
    fVar25 = 1.0 - (*(float *)(iVar6 + 0xd8) / (float)*(int *)(iVar6 + 0x110)) * 2.0;
    fVar16 = 1.0 / (fStack_53c * fVar25 + fStack_54c * fVar26 + fStack_52c * 0.0 + fStack_51c);
    local_75c = (void *)(fVar16 * (fStack_548 * fVar25 + fStack_558 * fVar26 + fStack_538 * 0.0 +
                                  fStack_528));
    fStack_70c = fVar16 * (fStack_540 * fVar25 + fStack_550 * fVar26 + fStack_530 * 0.0 + fStack_520
                          );
    pfStack_730 = (float *)(fVar16 * (fStack_544 * fVar25 + (float)pfStack_554 * fVar26 +
                                      (float)pvStack_534 * 0.0 + fStack_524));
    fVar25 = (*(float *)(iVar6 + 0xd4) / (float)*(int *)(iVar6 + 0x10c)) * 2.0 - 1.0;
    fVar16 = 1.0 - (*(float *)(iVar6 + 0xd8) / (float)*(int *)(iVar6 + 0x110)) * 2.0;
    fVar26 = 1.0 / (fVar16 * fStack_53c + fVar25 * fStack_54c + fStack_52c + fStack_51c);
    fStack_744 = fVar26 * (fVar16 * fStack_548 + fVar25 * fStack_558 + fStack_538 + fStack_528) -
                 (float)local_75c;
    fStack_71c = fVar26 * (fVar16 * fStack_540 + fVar25 * fStack_550 + fStack_530 + fStack_520) -
                 fStack_70c;
    fStack_72c = fVar26 * (fVar16 * fStack_544 + fVar25 * (float)pfStack_554 + (float)pvStack_534 +
                          fStack_524) - (float)pfStack_730;
    auVar24._0_8_ =
         (double)(fStack_72c * fStack_72c + fStack_744 * fStack_744 + fStack_71c * fStack_71c);
    auVar24._8_8_ = 0;
    local_4c0 = local_75c;
    fStack_4bc = (float)pfStack_730;
    fStack_4b8 = fStack_70c;
    libm_sse2_sqrt_precise();
    fStack_718 = 1.0 / (float)auVar24._0_8_;
    fStack_720 = fStack_718 * fStack_744;
    fStack_728 = fStack_718 * fStack_72c;
    fStack_718 = fStack_718 * fStack_71c;
    afStack_508[0] = fStack_720;
    afStack_508[1] = fStack_728;
    afStack_508[2] = fStack_718;
    local_758 = 0.0;
    iVar6 = 0;
    do {
      iVar12 = iVar6 + 4;
      *(int *)((int)aiStack_518 + iVar6) = (int)*(float *)((int)&local_4c0 + iVar6);
      iVar6 = iVar12;
    } while (iVar12 < 0xc);
    if ((float)local_75c < 0.0) {
      aiStack_518[0] = aiStack_518[0] + -1;
    }
    if ((float)pfStack_730 < 0.0) {
      aiStack_518[1] = aiStack_518[1] + -1;
    }
    if (fStack_70c < 0.0) {
      aiStack_518[2] = aiStack_518[2] + -1;
    }
    aiStack_4d0[0] = 0;
    aiStack_4d0[1] = 0;
    aiStack_4d0[2] = 0;
    this->field493_0x2a8 = 0;
    do {
      if (((((aiStack_518[0] < 0) || (aiStack_518[1] < 0)) || (aiStack_518[2] < 0)) ||
          ((*(int *)((int)local_760 + 0x44) <= aiStack_518[0] ||
           (*(int *)((int)local_760 + 0x48) <= aiStack_518[1])))) ||
         (*(int *)((int)local_760 + 0x4c) <= aiStack_518[2])) {
        puVar7 = &DAT_0076b340;
      }
      else {
        puVar7 = (undefined1 *)
                 (((aiStack_518[2] * *(int *)((int)local_760 + 0x48) + aiStack_518[1]) *
                   *(int *)((int)local_760 + 0x44) + aiStack_518[0]) * 3 +
                 *(int *)((int)local_760 + 0x30));
      }
      cVar4 = FUN_004e71d0(puVar7,0);
      if (cVar4 == '\0') {
        this->field493_0x2a8 = 1;
      }
      local_768 = 0.0;
      if (0 < *(int *)(this->field202_0x160 + 0x114)) {
        cVar4 = this->field778_0x3c8;
        pcVar19 = (char *)(this->field202_0x160 + 0x14);
        do {
          fVar25 = uStack_74c;
          fVar16 = uStack_754;
          if (cVar4 == '\0') {
LAB_0058a821:
            uStack_754._0_2_ = CONCAT11((char)aiStack_518[1],(char)aiStack_518[0]);
            uStack_754._3_1_ = SUB41(fVar16,3);
            uStack_754._0_3_ = CONCAT12((char)aiStack_518[2],(undefined2)uStack_754);
            iVar6 = 0;
            pcVar15 = pcVar19;
            while (*pcVar15 == *(char *)((int)&uStack_754 + iVar6)) {
              iVar6 = iVar6 + 1;
              pcVar15 = pcVar15 + 1;
              if (2 < iVar6) {
                iVar6 = this->field202_0x160;
                this->field493_0x2a8 = 1;
                this->field210_0x180 = 0xb;
                this->field211_0x181 = '\x0e';
                this->field223_0x18d = *(undefined1 *)(iVar6 + 0x17 + (int)local_768 * 8);
                this->field226_0x190 = *(undefined2 *)(iVar6 + 0x18 + (int)local_768 * 8);
                this->field222_0x18c = 2;
                goto LAB_0058a89a;
              }
            }
          }
          else {
            uStack_74c._0_2_ = CONCAT11(this->field786_0x3d0,this->field782_0x3cc);
            uStack_74c._3_1_ = SUB41(fVar25,3);
            uStack_74c._0_3_ = CONCAT12(this->field790_0x3d4,(undefined2)uStack_74c);
            iVar6 = 0;
            pcVar15 = pcVar19;
            do {
              if (*pcVar15 != *(char *)((int)&uStack_74c + iVar6)) goto LAB_0058a821;
              iVar6 = iVar6 + 1;
              pcVar15 = pcVar15 + 1;
            } while (iVar6 < 3);
          }
          local_768 = (float)((int)local_768 + 1);
          pcVar19 = pcVar19 + 8;
          cVar4 = this->field778_0x3c8;
        } while ((int)local_768 < *(int *)(this->field202_0x160 + 0x114));
      }
      if (this->field493_0x2a8 != '\0') break;
      uStack_568 = CONCAT44(afStack_508[1],afStack_508[0]);
      uStack_4f8 = CONCAT44(fStack_4bc,local_4c0);
      fStack_560 = afStack_508[2];
      uStack_4f0 = CONCAT44(uStack_4f0._4_4_,fStack_4b8);
      fVar16 = 10.0;
      if (fStack_720 != 0.0) {
        iVar6 = aiStack_518[0];
        if (0.0 < fStack_720) {
          iVar6 = aiStack_518[0] + 1;
        }
        fVar25 = ((float)iVar6 - ((float)local_4c0 + afStack_508[0] * local_758)) / fStack_720;
        if (fVar25 < 10.0) {
          fVar16 = fVar25;
        }
      }
      iVar6 = 0;
      if (fStack_728 != 0.0) {
        iVar12 = aiStack_518[1];
        if (0.0 < fStack_728) {
          iVar12 = aiStack_518[1] + 1;
        }
        fVar25 = ((float)iVar12 - (fStack_4bc + afStack_508[1] * local_758)) / fStack_728;
        if (fVar25 < fVar16) {
          iVar6 = 1;
          fVar16 = fVar25;
        }
      }
      if (fStack_718 != 0.0) {
        iVar12 = aiStack_518[2];
        if (0.0 < fStack_718) {
          iVar12 = aiStack_518[2] + 1;
        }
        fVar25 = ((float)iVar12 - (fStack_4b8 + afStack_508[2] * local_758)) / fStack_718;
        if (fVar25 < fVar16) {
          iVar6 = 2;
          fVar16 = fVar25;
        }
      }
      afStack_578[0] = 0.0;
      afStack_578[1] = 0.0;
      aiStack_4d0[0] = 0;
      aiStack_4d0[1] = 0;
      aiStack_4d0[2] = 0;
      if (afStack_508[iVar6] <= 0.0) {
        aiStack_518[iVar6] = aiStack_518[iVar6] + -1;
        aiStack_4d0[iVar6] = 1;
      }
      else {
        aiStack_518[iVar6] = aiStack_518[iVar6] + 1;
        aiStack_4d0[iVar6] = -1;
      }
      local_758 = fVar16 + local_758;
    } while (local_758 < 1000.0);
LAB_0058a89a:
    this->field490_0x29c = aiStack_518[0];
    this->field491_0x2a0 = aiStack_518[1];
    this->field492_0x2a4 = aiStack_518[2];
    FUN_004482a0(afStack_490,&uStack_3b8,afStack_3f8);
    FUN_004e6df0();
    pVVar3 = local_6f8;
    if ((int)this->field497_0x2ac < 0) {
      if ((this->field778_0x3c8 != '\0') ||
         ((ppfVar20 = &this->field206_0x170, -1 < (int)this->field209_0x17c &&
          ((int)this->field209_0x17c < ((int)this->field207_0x174 - (int)*ppfVar20) / 0x11c)))) {
        pfVar13 = afStack_490;
        pfVar21 = &fStack_558;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar21 = *pfVar13;
          pfVar13 = pfVar13 + 1;
          pfVar21 = pfVar21 + 1;
        }
        if (local_6f8->field493_0x2a8 == '\0') {
          fVar28 = fStack_720 * 100.0 + (float)local_75c;
          fVar16 = fStack_728 * 100.0 + (float)pfStack_730;
          fVar27 = fStack_718 * 100.0 + fStack_70c;
          fStack_528 = fVar16 * fStack_480 + fVar28 * afStack_490[0] + fVar27 * fStack_470;
          fVar25 = fVar16 * fStack_544 + fVar28 * (float)pfStack_554 + fVar27 * (float)pvStack_534;
          fVar26 = fVar16 * fStack_540 + fVar28 * fStack_550 + fVar27 * fStack_530;
          fVar16 = fVar16 * fStack_53c + fVar28 * fStack_54c + fVar27 * fStack_52c;
        }
        else {
          local_6f8->field490_0x29c = local_6f8->field490_0x29c + aiStack_4d0[0];
          local_6f8->field491_0x2a0 = local_6f8->field491_0x2a0 + aiStack_4d0[1];
          local_6f8->field492_0x2a4 = local_6f8->field492_0x2a4 + aiStack_4d0[2];
          fVar28 = (float)local_6f8->field490_0x29c;
          fVar16 = (float)local_6f8->field491_0x2a0;
          fVar27 = (float)local_6f8->field492_0x2a4;
          fStack_528 = fVar16 * fStack_480 + fVar28 * afStack_490[0] + fVar27 * fStack_470;
          fVar25 = fStack_544 * fVar16 + (float)pfStack_554 * fVar28 + (float)pvStack_534 * fVar27;
          fVar26 = fStack_540 * fVar16 + fStack_550 * fVar28 + fStack_530 * fVar27;
          fVar16 = fStack_53c * fVar16 + fStack_54c * fVar28 + fStack_52c * fVar27;
        }
        fStack_51c = fVar16 + fStack_51c;
        fStack_520 = fVar26 + fStack_520;
        fStack_524 = fVar25 + fStack_524;
        fStack_528 = fStack_528 + (float)pfStack_460;
        afStack_578[0] = 1.0;
        afStack_578[1] = 1.0;
        afStack_578[2] = 1.0;
        afStack_578[3] = 1.0;
        if (local_6f8->field778_0x3c8 == '\0') {
          uVar5 = (uint)*(byte *)((int)local_6f8->field206_0x170 +
                                 (int)local_6f8->field209_0x17c * 0x11c + 0x11);
        }
        else {
          uVar5 = local_6f8->field794_0x3d8;
        }
        uVar8 = FUN_004c7250(&uStack_568,uVar5,afStack_578,0);
        FUN_00448280(uVar8);
        FUN_004482a0(&fStack_558,&uStack_3b8,afStack_3f8);
        FUN_004e6df0();
        this = pVVar3;
        goto LAB_0058addd;
      }
    }
    else {
LAB_0058addd:
      ppfVar20 = &this->field206_0x170;
    }
    local_760 = (float *)0x0;
    if (0 < *(int *)(this->field202_0x160 + 0x114)) {
      do {
        pVVar3 = local_6f8;
        fVar25 = uStack_74c;
        fVar16 = uStack_754;
        if (this->field778_0x3c8 == '\0') {
LAB_0058ae4e:
          pfVar13 = afStack_490;
          pfVar21 = &fStack_558;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar21 = *pfVar13;
            pfVar13 = pfVar13 + 1;
            pfVar21 = pfVar21 + 1;
          }
          pcVar19 = (char *)((int)local_760 * 8 + 0x14 + local_6f8->field202_0x160);
          fVar27 = (float)(int)*pcVar19;
          fVar16 = (float)(int)pcVar19[1];
          fVar26 = (float)(int)pcVar19[2];
          local_768 = fStack_544;
          local_764 = pfStack_554;
          fStack_744 = fVar16 * fStack_480 + fVar27 * afStack_490[0] + fVar26 * fStack_470 +
                       (float)pfStack_460;
          fStack_528 = fStack_744;
          local_75c = pvStack_534;
          local_73c = fStack_540;
          fStack_72c = fStack_544 * fVar16 + (float)pfStack_554 * fVar27 +
                       (float)pvStack_534 * fVar26 + fStack_524;
          fStack_524 = fStack_72c;
          local_758 = fStack_550;
          local_748 = fStack_530;
          local_738 = fStack_53c;
          fStack_71c = fStack_540 * fVar16 + fStack_550 * fVar27 + fStack_530 * fVar26 + fStack_520;
          fStack_520 = fStack_71c;
          local_740 = fStack_54c;
          fStack_724 = fStack_52c;
          fStack_6ec = fStack_53c * fVar16 + fStack_54c * fVar27 + fStack_52c * fVar26 + fStack_51c;
          fStack_51c = fStack_6ec;
          if (local_6f8->field493_0x2a8 == '\0') {
LAB_0058b410:
            afStack_508[0] = 1.0;
            afStack_508[1] = 1.0;
            afStack_508[2] = 1.0;
            afStack_508[3] = 1.0;
            pfVar13 = afStack_508;
            uVar1 = *(undefined1 *)(local_6f8->field202_0x160 + 0x17 + (int)local_760 * 8);
            ppvVar9 = apvStack_450;
          }
          else {
            uStack_74c._0_2_ =
                 CONCAT11((char)local_6f8->field491_0x2a0,(char)local_6f8->field490_0x29c);
            uStack_74c._3_1_ = SUB41(fVar25,3);
            uStack_74c._0_3_ = CONCAT12((char)local_6f8->field492_0x2a4,(undefined2)uStack_74c);
            iVar6 = 0;
            do {
              if (*pcVar19 != *(char *)((int)&uStack_74c + iVar6)) goto LAB_0058b410;
              iVar6 = iVar6 + 1;
              pcVar19 = pcVar19 + 1;
            } while (iVar6 < 3);
            fStack_528 = fStack_548 * 0.5 + fStack_558 * 0.5 + fStack_538 * 0.5 + fStack_744;
            fStack_744 = fStack_544 * 0.5 + (float)pfStack_554 * 0.5 + (float)pvStack_534 * 0.5 +
                         fStack_72c;
            fStack_72c = fStack_540 * 0.5 + fStack_550 * 0.5 + fStack_530 * 0.5 + fStack_71c;
            local_740 = fStack_54c * 1.1;
            fStack_558 = fStack_558 * 1.1;
            fStack_71c = fStack_53c * 0.5 + fStack_54c * 0.5 + fStack_52c * 0.5 + fStack_6ec;
            fStack_548 = fStack_548 * 1.1;
            local_764 = (float *)((float)pfStack_554 * 1.1);
            fStack_550 = fStack_550 * 1.1;
            local_768 = fStack_544 * 1.1;
            local_73c = fStack_540 * 1.1;
            local_738 = fStack_53c * 1.1;
            local_748 = fStack_530 * 1.1;
            fStack_538 = fStack_538 * 1.1;
            pvStack_534 = (void *)((float)pvStack_534 * 1.1);
            fStack_724 = fStack_52c * 1.1;
            fStack_528 = fStack_528 - (fStack_548 * 0.5 + fStack_558 * 0.5 + fStack_538 * 0.5);
            fStack_524 = fStack_744 -
                         (local_768 * 0.5 + (float)local_764 * 0.5 + (float)pvStack_534 * 0.5);
            fStack_520 = fStack_72c - (local_73c * 0.5 + fStack_550 * 0.5 + local_748 * 0.5);
            fStack_51c = fStack_71c - (local_738 * 0.5 + local_740 * 0.5 + fStack_724 * 0.5);
            dVar23 = (double)((float)*(int *)((local_6f8->Object_data).offset_0x0 + 0xe8) * 0.01);
            pfStack_554 = local_764;
            fStack_54c = local_740;
            fStack_544 = local_768;
            fStack_540 = local_73c;
            fStack_53c = local_738;
            fStack_530 = local_748;
            fStack_52c = fStack_724;
            libm_sse2_cos_precise();
            uStack_568 = 0x3f8000003f800000;
            fVar16 = (float)dVar23 * 0.2 + 1.0;
            fStack_560 = 1.0;
            uStack_55c = 0x3f800000;
            afStack_578[1] = fVar16 * 1.0;
            afStack_578[0] = fVar16 * 1.0;
            afStack_578[3] = fVar16 * 1.0;
            afStack_578[2] = fVar16 * 1.0;
            pfVar13 = afStack_578;
            uVar1 = *(undefined1 *)(pVVar3->field202_0x160 + 0x17 + (int)local_760 * 8);
            ppvVar9 = &local_4c0;
          }
          uVar8 = FUN_004c7250(ppvVar9,uVar1,pfVar13,0);
          FUN_00448280(uVar8);
          FUN_004482a0(&fStack_558,&uStack_3b8,afStack_3f8);
          FUN_004e6df0();
          this = pVVar3;
        }
        else {
          uStack_754._0_2_ = CONCAT11(this->field786_0x3d0,this->field782_0x3cc);
          iVar6 = 0;
          pcVar19 = (char *)((int)local_760 * 8 + 0x14 + this->field202_0x160);
          uStack_754._3_1_ = SUB41(fVar16,3);
          uStack_754._0_3_ = CONCAT12(this->field790_0x3d4,(undefined2)uStack_754);
          do {
            if (*pcVar19 != *(char *)((int)&uStack_754 + iVar6)) goto LAB_0058ae4e;
            iVar6 = iVar6 + 1;
            pcVar19 = pcVar19 + 1;
          } while (iVar6 < 3);
        }
        local_760 = (float *)((int)local_760 + 1);
      } while ((int)local_760 < *(int *)(this->field202_0x160 + 0x114));
      ppfVar20 = &this->field206_0x170;
    }
  }
  iVar6 = this->offset_0x13c;
  fVar16 = *(float *)(iVar6 + 0x5c);
  fVar25 = *(float *)(iVar6 + 0x4c);
  fVar26 = *(float *)(iVar6 + 0x48);
  fVar27 = *(float *)(iVar6 + 0x58);
  fVar30 = 1.0 / (*(float *)(iVar6 + 0x54) * (float)local_710 +
                  *(float *)(iVar6 + 100) * (float)local_750 + *(float *)(iVar6 + 0x84));
  fVar28 = *(float *)(iVar6 + 0x7c);
  local_760 = (float *)0x0;
  fVar29 = *(float *)(iVar6 + 0x78);
  this->field497_0x2ac = (float *)0xffffffff;
  if (0 < ((int)ppfVar20[1] - (int)*ppfVar20) / 0x11c) {
    fStack_744 = fVar30 * (fVar26 * (float)local_710 + fVar27 * (float)local_750 + fVar29) + 20.0;
    fStack_72c = fVar30 * (fVar25 * (float)local_710 + fVar16 * (float)local_750 + fVar28) + 40.0;
    local_768 = 0.0;
    do {
      FUN_0040ee70((int)*ppfVar20 + (int)local_768 + 4U);
      local_750 = (float *)0x3ca3d70a;
      uVar5 = (uint)local_760 & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      local_710 = (float *)(int)((float)(int)(uVar5 * 0x2d) + fStack_744);
      fVar16 = *(float *)((this->Object_data).offset_0x0 + 0xd4);
      fStack_71c = (float)(int)((float)(((int)((int)local_760 + ((int)local_760 >> 0x1f & 7U)) >> 3)
                                       * 0x2d) + fStack_72c);
      if (((((float)(int)local_710 <= fVar16) && (fVar16 < (float)(int)(local_710 + 10))) &&
          (fVar16 = *(float *)((this->Object_data).offset_0x0 + 0xd8),
          (float)(int)fStack_71c <= fVar16)) && (fVar16 < (float)((int)fStack_71c + 0x28))) {
        this->field497_0x2ac = local_760;
        FUN_0042c5e0(&local_378);
      }
      if ((this->field497_0x2ac == local_760) || (this->field209_0x17c == local_760)) {
        local_750 = (float *)0x3cf5c28f;
      }
      afStack_578[0] = 1.0;
      afStack_578[1] = 1.0;
      afStack_578[2] = 1.0;
      afStack_578[3] = 1.0;
      FUN_00448280(afStack_578);
      FUN_004758c0((float)(int)(local_710 + 5),(float)((int)fStack_71c + 0x14),
                   this->field489_0x298 + 0x800a1c,local_750,&local_378,0);
      local_760 = (float *)((int)local_760 + 1);
      local_768 = (float)((int)local_768 + 0x11c);
    } while ((int)local_760 < ((int)ppfVar20[1] - (int)*ppfVar20) / 0x11c);
  }
  p_Var37 = (_func_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr
             *)0x0;
  piVar17 = *(int **)(this->field489_0x298 + 0x134);
  iVar12 = 7;
  (**(code **)(*piVar17 + 0xe4))(piVar17);
  auStack_6e4 = (undefined1  [4])
                &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                 ::vbtable;
  abStack_6d4[0].vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (abStack_67c);
  uStack_18 = 0;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)auStack_6e4,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)abStack_6cc);
  uStack_18 = 1;
                    /* inlined destructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (auStack_6e4 + *(int *)((int)auStack_6e4 + 4)) =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable
  ;
  *(int *)((int)&pbStack_6e8 + *(int *)((int)auStack_6e4 + 4)) =
       *(int *)((int)auStack_6e4 + 4) + -0x68;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(abStack_6cc);
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  abStack_6cc[0] =
       (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
       &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_18 = 3;
  uVar8 = FUN_004c7660(endl_exref);
  iVar6 = *(int *)(this->field202_0x160 + 0x114);
  pbVar10 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
            FUN_0040e6f0(abStack_6d4,L"Upgrades ",iVar6,&DAT_00701904,uVar8);
  pbVar11 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar10,iVar6);
  pbVar10 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e440(pbVar11);
  pbVar11 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar10,iVar12);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
            ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)pbVar11,p_Var37);
  FUN_0040eb60(L"resource1.dat");
  uStack_c._0_1_ = 4;
  uVar8 = FUN_00411bc0(apvStack_4e8);
  uStack_c._0_1_ = 5;
  afStack_578[0] = 0.0;
  afStack_578[1] = 0.0;
  afStack_578[2] = 0.0;
  afStack_578[3] = 0.0;
  uStack_4f8 = 0;
  uStack_4f0 = 0x3f80000000000000;
  uStack_568 = 0x3f8000003f800000;
  fStack_560 = 1.0;
  uVar38 = 1;
  uStack_55c = 0x3f800000;
  uVar36 = 0xbf800000;
  uVar35 = 0;
  pfVar13 = afStack_578;
  puVar14 = &uStack_4f8;
  puVar34 = &uStack_568;
  uVar33 = 0x40000000;
  uVar32 = 0x41200000;
  fVar22 = (float10)FUN_00627ce0(0x41200000,0x40000000,puVar34,puVar14,pfVar13,0,0xbf800000,1);
  fStack_744 = (float)fVar22;
  FUN_00639b30(apvStack_4a8,uVar8,0,0,0x41a00000,fStack_744 - 20.0,uVar32,uVar33,puVar34,puVar14,
               pfVar13,uVar35,uVar36,uVar38);
  if (7 < uStack_4d4) {
                    /* WARNING: Subroutine does not return */
    operator_delete(apvStack_4e8[0]);
  }
  uStack_4d4 = 7;
  uStack_4d8 = 0;
  apvStack_4e8[0] = (void *)((uint)apvStack_4e8[0] & 0xffff0000);
  uStack_c._0_1_ = 3;
  if (7 < uStack_494) {
                    /* WARNING: Subroutine does not return */
    operator_delete(apvStack_4a8[0]);
  }
  FUN_0040eb60(L"resource1.dat");
  uStack_c._0_1_ = 6;
  uVar8 = FUN_00411bc0(apvStack_4e8);
  uVar38 = 1;
  uVar36 = 0xbf800000;
  uVar35 = 0;
  afStack_578[0] = 0.0;
  afStack_578[1] = 0.0;
  afStack_578[2] = 0.0;
  afStack_578[3] = 0.0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_568 = 0x3f8000003f800000;
  fStack_560 = 1.0;
  uStack_55c = 0x3f800000;
  pfVar13 = afStack_578;
  puVar14 = &uStack_4f8;
  puVar34 = &uStack_568;
  uStack_c = CONCAT31(uStack_c._1_3_,7);
  uVar33 = 0;
  uVar32 = 0x41200000;
  fVar22 = (float10)FUN_00627ce0(0x41200000,0,puVar34,puVar14,pfVar13,0,0xbf800000,1);
  fStack_744 = (float)fVar22;
  FUN_00639b30(apvStack_4a8,uVar8,0,0,0x41a00000,fStack_744 - 20.0,uVar32,uVar33,puVar34,puVar14,
               pfVar13,uVar35,uVar36,uVar38);
  if (7 < uStack_4d4) {
                    /* WARNING: Subroutine does not return */
    operator_delete(apvStack_4e8[0]);
  }
  uStack_4d4 = 7;
  uStack_4d8 = 0;
  apvStack_4e8[0] = (void *)((uint)apvStack_4e8[0] & 0xffff0000);
  if (7 < uStack_494) {
                    /* WARNING: Subroutine does not return */
    operator_delete(apvStack_4a8[0]);
  }
  uStack_c = 0xffffffff;
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             auStack_6d8);
  this = local_6f8;
LAB_0058bbf5:
  ppfVar20 = local_6f0;
  FUN_0040eb60(L"Weapon Customization");
  uStack_c = 8;
  FUN_0040eb60(L"resource1.dat");
  afStack_578[0] = 0.0;
  afStack_578[1] = 0.0;
  afStack_578[2] = 0.0;
  afStack_578[3] = 0.0;
  uStack_568 = 0;
  fStack_560 = 0.0;
  uStack_55c = 0x3f800000;
  afStack_508[0] = 1.0;
  afStack_508[1] = 1.0;
  afStack_508[2] = 1.0;
  afStack_508[3] = 1.0;
  uStack_c = CONCAT31(uStack_c._1_3_,9);
  FUN_00639b30(apvStack_450,&local_4c0,0,0,0x41700000,0x41c80000,0x41400000,0x40400000,afStack_508,
               &uStack_568,afStack_578,0,0xbf800000,1);
  if (7 < uStack_43c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(apvStack_450[0]);
  }
  uStack_43c = 7;
  uStack_440 = 0;
  apvStack_450[0] = (void *)((uint)apvStack_450[0] & 0xffff0000);
  uStack_c = 0xffffffff;
  if (7 < uStack_4ac) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c0);
  }
  FUN_0040eb60(L"Weapon Customization");
  uStack_c = 10;
  FUN_0040eb60(L"resource1.dat");
  afStack_578[0] = 0.0;
  afStack_578[1] = 0.0;
  afStack_578[2] = 0.0;
  afStack_578[3] = 0.0;
  uStack_568 = 0;
  fStack_560 = 0.0;
  uStack_55c = 0;
  afStack_508[0] = 1.0;
  afStack_508[1] = 1.0;
  afStack_508[2] = 1.0;
  afStack_508[3] = 1.0;
  uStack_c = CONCAT31(uStack_c._1_3_,0xb);
  FUN_00639b30(apvStack_450,&local_4c0,0,0,0x41700000,0x41c80000,0x41400000,0,afStack_508,
               &uStack_568,afStack_578,0,0xbf800000,1);
  if (7 < uStack_43c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(apvStack_450[0]);
  }
  uStack_43c = 7;
  uStack_440 = 0;
  apvStack_450[0] = (void *)((uint)apvStack_450[0] & 0xffff0000);
  uStack_c = 0xffffffff;
  if (7 < uStack_4ac) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c0);
  }
  pfStack_730 = (float *)0x0;
  if (0 < ((int)ppfVar20[1] - (int)*ppfVar20) / 0x11c) {
    local_75c = (void *)0x0;
    do {
      uVar5 = (uint)pfStack_730 & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      local_750 = (float *)(uVar5 * 0x2d + 0x3c);
      local_6f0 = (float **)
                  (((int)((int)pfStack_730 + ((int)pfStack_730 >> 0x1f & 7U)) >> 3) * 0x2d + 0x50);
      uStack_4f8 = 0x3f8000003f800000;
      if (pfStack_730 == this->field209_0x17c) {
        afStack_578[0] = 0.0;
        afStack_578[1] = 1.0;
        afStack_578[2] = 1.0;
        afStack_578[3] = 1.0;
        uStack_4f8 = 0x3f80000000000000;
      }
      uStack_4f0 = 0x3f8000003f800000;
      auStack_628._0_4_ =
           &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vbtable;
      abStack_618[0].vbtablePtr =
           (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
      std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
      basic_ios<wchar_t,std::char_traits<wchar_t>_>(abStack_5c0);
      local_768 = (float)((uint)local_768 | 2);
      uStack_c = 0xc;
      std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
      basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)auStack_628,
                 (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)abStack_610);
      uStack_c = 0xd;
      *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
       (auStack_628 + *(int *)(auStack_628._0_4_ + 4)) =
           &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vftable;
      *(int *)((int)&iStack_62c + *(int *)(auStack_628._0_4_ + 4)) =
           *(int *)(auStack_628._0_4_ + 4) + -0x68;
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
      basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(abStack_610);
      abStack_610[0] =
           (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
           &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vftable;
      uStack_5d8 = 0;
      uStack_5d4 = 0;
      uStack_c = 0xf;
      p_Var37 = endl_exref;
      pbVar11 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                          (abStack_618,*(int *)((int)*ppfVar20 + (int)local_75c));
      std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)pbVar11,p_Var37);
      FUN_0040eb60(L"resource1.dat");
      uStack_c._0_1_ = 0x10;
      uVar8 = FUN_00411bc0(apvStack_4e8);
      uStack_c._0_1_ = 0x11;
      uStack_568 = 0;
      fStack_560 = 0.0;
      uStack_55c = 0;
      afStack_508[0] = 0.0;
      afStack_508[1] = 0.0;
      afStack_508[2] = 0.0;
      afStack_508[3] = 1.0;
      local_4c0 = (void *)0x3f800000;
      fStack_4bc = 1.0;
      fStack_4b8 = 1.0;
      uStack_4b4 = 0x3f800000;
      FUN_00639b30(apvStack_4a8,uVar8,0,0,(float)(int)local_750,(float)(int)local_6f0,0x41200000,
                   0x40000000,&local_4c0,afStack_508,&uStack_568,2,0xbf800000,1);
      if (7 < uStack_4d4) {
                    /* WARNING: Subroutine does not return */
        operator_delete(apvStack_4e8[0]);
      }
      uStack_4d4 = 7;
      uStack_4d8 = 0;
      apvStack_4e8[0] = (void *)((uint)apvStack_4e8[0] & 0xffff0000);
      uStack_c._0_1_ = 0xf;
      if (7 < uStack_494) {
                    /* WARNING: Subroutine does not return */
        operator_delete(apvStack_4a8[0]);
      }
      FUN_0040eb60(L"resource1.dat");
      uStack_c._0_1_ = 0x12;
      uVar8 = FUN_00411bc0(apvStack_4a8);
      aiStack_4d0[0] = 0;
      aiStack_4d0[1] = 0;
      aiStack_4d0[2] = 0;
      aiStack_4d0[3] = 0;
      aiStack_518[0] = 0;
      aiStack_518[1] = 0;
      aiStack_518[2] = 0;
      aiStack_518[3] = 0;
      uStack_c = CONCAT31(uStack_c._1_3_,0x13);
      FUN_00639b30(apvStack_4e8,uVar8,0,0,(float)(int)local_750,(float)(int)local_6f0,0x41200000,0,
                   &uStack_4f8,aiStack_518,aiStack_4d0,2,0xbf800000,1);
      if (7 < uStack_494) {
                    /* WARNING: Subroutine does not return */
        operator_delete(apvStack_4a8[0]);
      }
      uStack_494 = 7;
      uStack_498 = 0;
      apvStack_4a8[0] = (void *)((uint)apvStack_4a8[0] & 0xffff0000);
      if (7 < uStack_4d4) {
                    /* WARNING: Subroutine does not return */
        operator_delete(apvStack_4e8[0]);
      }
      uStack_4d4 = 7;
      uStack_4d8 = 0;
      apvStack_4e8[0] = (void *)((uint)apvStack_4e8[0] & 0xffff0000);
      uStack_c = 0xffffffff;
      std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 auStack_628);
      pfStack_730 = (float *)((int)pfStack_730 + 1);
      local_75c = (void *)((int)local_75c + 0x11c);
    } while ((int)pfStack_730 < ((int)ppfVar20[1] - (int)*ppfVar20) / 0x11c);
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_770);
  return;
}


