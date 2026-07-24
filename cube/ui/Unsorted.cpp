// Unsorted (ui) -- cube. 15 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted.h"

/* FUN_0040e696 @ 0040e696  kind=gamemisc  attributed-by=logic:caller-vote  size=90 */

undefined4 FUN_0040e696(void)

{
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this;
  int *piVar1;
  bool bVar2;
  int *in_EDX;
  int unaff_EBP;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(*(int *)(*in_EDX + 4) + (int)in_EDX),
             unaff_ESI,false);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  bVar2 = std::uncaught_exception();
  this = *(basic_ostream<wchar_t,std::char_traits<wchar_t>_> **)(unaff_EBP + -0x30);
  if (!bVar2) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx(this);
  }
  piVar1 = *(int **)((int)&this[0xe].vbtablePtr +
                    this->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


/* FUN_0040e8d6 @ 0040e8d6  kind=gamemisc  attributed-by=logic:caller-vote  size=92 */

int FUN_0040e8d6(void)

{
  int iVar1;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this;
  int *piVar2;
  bool bVar3;
  int *in_ECX;
  int unaff_EBP;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar1 = *(int *)(unaff_EBP + 8);
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(*(int *)(*in_ECX + 4) + iVar1),
             unaff_ESI,false);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  bVar3 = std::uncaught_exception();
  this = *(basic_ostream<wchar_t,std::char_traits<wchar_t>_> **)(unaff_EBP + -0x20);
  if (!bVar3) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx(this);
  }
  piVar2 = *(int **)((int)&this[0xe].vbtablePtr +
                    this->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


/* FUN_0040f3c0 @ 0040f3c0  kind=gamemisc  attributed-by=logic:caller-vote  size=197 */

void FUN_0040f3c0(void *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  void *_Dst;
  int in_ECX;
  void *pvVar2;
  
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = param_3;
  if ((param_2 != 0) && (((byte)param_3 & 6) != 6)) {
    if (param_2 < 0x80000000) {
      param_2 = param_2 * 2;
      _Dst = operator_new(param_2);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_1,param_2);
        *(void **)(in_ECX + 0x38) = (void *)(param_2 + (int)_Dst);
        if ((*(byte *)(in_ECX + 0x3c) & 4) == 0) {
          **(undefined4 **)(in_ECX + 0xc) = _Dst;
          **(undefined4 **)(in_ECX + 0x1c) = _Dst;
          **(int **)(in_ECX + 0x2c) = (int)param_2 >> 1;
        }
        uVar1 = *(uint *)(in_ECX + 0x3c);
        if ((uVar1 & 2) == 0) {
          **(undefined4 **)(in_ECX + 0x10) = _Dst;
          pvVar2 = _Dst;
          if ((uVar1 & 0x10) != 0) {
            pvVar2 = (void *)(param_2 + (int)_Dst);
          }
          **(undefined4 **)(in_ECX + 0x20) = pvVar2;
          **(int **)(in_ECX + 0x30) = (int)((param_2 - (int)pvVar2) + (int)_Dst) >> 1;
          if (**(int **)(in_ECX + 0x1c) == 0) {
            **(undefined4 **)(in_ECX + 0xc) = _Dst;
            **(undefined4 **)(in_ECX + 0x1c) = 0;
            **(int **)(in_ECX + 0x2c) = (int)_Dst >> 1;
          }
        }
        *(uint *)(in_ECX + 0x3c) = *(uint *)(in_ECX + 0x3c) | 1;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  return;
}


/* FUN_00448f10 @ 00448f10  kind=gamemisc  attributed-by=logic:caller-vote  size=187 */

void FUN_00448f10(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int in_ECX;
  ulonglong *puVar3;
  int iVar4;
  ulonglong local_108 [32];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x178))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x68),param_1,10);
  puVar3 = local_108;
  puVar2 = (uint *)(param_2 + 8);
  iVar4 = 0x10;
  do {
    uVar1 = *puVar2;
    *puVar3 = *(ulonglong *)(puVar2 + -2);
    puVar3[1] = (ulonglong)uVar1;
    puVar2 = puVar2 + 3;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x178))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x6c),local_108,10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00471b60 @ 00471b60  kind=gamemisc  attributed-by=logic:caller-vote  size=486 */

void FUN_00471b60(char *param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_60;
  undefined1 local_58 [16];
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (*param_1 != '\0') {
    fVar6 = (float10)FUN_004c7be0();
    FUN_00448fe0((float)fVar6);
    local_60 = 0;
    if (0 < *(int *)(param_1 + 0x114)) {
      pcVar3 = param_1 + 0x15;
      do {
        cVar1 = pcVar3[1];
        fVar9 = (float)(int)pcVar3[-1];
        fVar7 = (float)(int)*pcVar3;
        pfVar4 = param_2;
        pfVar5 = local_48;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar5 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar5 = pfVar5 + 1;
        }
        fVar8 = (float)(int)cVar1;
        local_18 = local_38 * fVar7 + local_48[0] * fVar9 + local_28 * fVar8 + local_18;
        local_14 = local_34 * fVar7 + local_48[1] * fVar9 + local_24 * fVar8 + local_14;
        local_10 = local_30 * fVar7 + local_48[2] * fVar9 + local_20 * fVar8 + local_10;
        local_c = local_2c * fVar7 + local_48[3] * fVar9 + local_1c * fVar8 + local_c;
        FUN_004c7250(local_58,pcVar3[2],param_5,param_6);
        FUN_00448280(local_58);
        FUN_004482a0(local_48,param_3,param_4);
        FUN_004e6df0();
        local_60 = local_60 + 1;
        pcVar3 = pcVar3 + 8;
      } while (local_60 < *(int *)(param_1 + 0x114));
    }
    FUN_00448fe0(0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004758c0 @ 004758c0  kind=gamemisc  attributed-by=logic:caller-vote  size=3484 */

void FUN_004758c0(float param_1,float param_2,float *param_3,float param_4,char *param_5,
                 float param_6)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  float10 fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  undefined1 local_158 [64];
  undefined1 local_118 [64];
  undefined1 local_d8 [64];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (param_5 != (char *)0x0) {
    iVar1 = FUN_004ec400(param_5);
    if (*param_5 == '\0') {
      if ((int)(*(int *)(in_ECX + 0x308) - *(int *)(in_ECX + 0x304) & 0xfffffffcU) < 0x2571)
      goto LAB_0047664b;
      iVar1 = *(int *)(*(int *)(in_ECX + 0x304) + 0x2570);
    }
    if (iVar1 != 0) {
      (**(code **)(**(int **)(in_ECX + 0x134) + 0xe4))(*(int **)(in_ECX + 0x134),7,1);
      (**(code **)(**(int **)(in_ECX + 0x134) + 0xe4))(*(int **)(in_ECX + 0x134),0x17,2);
      iVar3 = *(int *)(iVar1 + 0x44);
      if (*(int *)(iVar1 + 0x44) < *(int *)(iVar1 + 0x48)) {
        iVar3 = *(int *)(iVar1 + 0x48);
      }
      if (iVar3 < *(int *)(iVar1 + 0x4c)) {
        iVar3 = *(int *)(iVar1 + 0x4c);
      }
      FUN_00423e70();
      fVar9 = local_38 * 0.0 + local_48 * 0.0 + local_28 + local_18;
      fVar10 = local_34 * 0.0 + local_44 * 0.0 + local_24 + local_14;
      fVar11 = local_30 * 0.0 + local_40 * 0.0 + local_20 + local_10;
      fVar8 = *param_3;
      fVar12 = local_2c * 0.0 + local_3c * 0.0 + local_1c + local_c;
      dVar6 = (double)(fVar8 * 0.017453292);
      local_18 = fVar9;
      local_14 = fVar10;
      local_10 = fVar11;
      local_c = fVar12;
      libm_sse2_cos_precise();
      fVar5 = (float)dVar6;
      dVar6 = (double)(fVar8 * 0.017453292);
      libm_sse2_sin_precise();
      fVar7 = (float)dVar6;
      fVar14 = local_38 * fVar5 + local_28 * fVar7;
      fVar18 = local_28 * fVar5 - local_38 * fVar7;
      fVar15 = local_34 * fVar5 + local_24 * fVar7;
      fVar19 = local_24 * fVar5 - local_34 * fVar7;
      fVar20 = local_20 * fVar5 - local_30 * fVar7;
      fVar16 = local_30 * fVar5 + local_20 * fVar7;
      fVar17 = local_2c * fVar5 + local_1c * fVar7;
      fVar8 = param_3[1];
      dVar6 = (double)(fVar8 * 0.017453292);
      fVar21 = local_1c * fVar5 - local_2c * fVar7;
      libm_sse2_cos_precise();
      fVar5 = (float)dVar6;
      dVar6 = (double)(fVar8 * 0.017453292);
      libm_sse2_sin_precise();
      fVar7 = (float)dVar6;
      local_16c = fVar18 * fVar5 + local_48 * fVar7;
      fVar18 = local_48 * fVar5 - fVar18 * fVar7;
      fVar13 = local_44 * fVar5 - fVar19 * fVar7;
      local_178 = fVar19 * fVar5 + local_44 * fVar7;
      local_170 = fVar20 * fVar5 + local_40 * fVar7;
      fVar19 = local_40 * fVar5 - fVar20 * fVar7;
      fVar20 = local_3c * fVar5 - fVar21 * fVar7;
      fVar8 = param_3[2];
      dVar6 = (double)(fVar8 * 0.017453292);
      local_168 = fVar21 * fVar5 + local_3c * fVar7;
      local_28 = local_16c;
      local_24 = local_178;
      local_20 = local_170;
      local_1c = local_168;
      libm_sse2_cos_precise();
      fVar5 = (float)dVar6;
      dVar6 = (double)(fVar8 * 0.017453292);
      libm_sse2_sin_precise();
      fVar8 = (float)dVar6;
      fVar21 = fVar14 * fVar5 - fVar18 * fVar8;
      fVar7 = fVar18 * fVar5 + fVar14 * fVar8;
      fVar14 = fVar15 * fVar5 - fVar13 * fVar8;
      fVar18 = fVar13 * fVar5 + fVar15 * fVar8;
      fVar13 = fVar19 * fVar5 + fVar16 * fVar8;
      fVar19 = fVar16 * fVar5 - fVar19 * fVar8;
      fVar15 = fVar20 * fVar5 + fVar17 * fVar8;
      fVar8 = fVar17 * fVar5 - fVar20 * fVar8;
      local_48 = fVar7;
      local_38 = fVar21;
      local_34 = fVar14;
      local_30 = fVar19;
      if (*param_5 == '\t') {
        dVar6 = 1.5707963705062866;
        local_44 = fVar18;
        local_40 = fVar13;
        local_3c = fVar15;
        local_2c = fVar8;
        libm_sse2_cos_precise();
        fVar5 = (float)dVar6;
        dVar6 = 1.5707963705062866;
        libm_sse2_sin_precise();
        fVar20 = (float)dVar6;
        fVar16 = fVar21 * fVar5 + local_16c * fVar20;
        local_16c = local_16c * fVar5 - fVar21 * fVar20;
        fVar17 = fVar14 * fVar5 + local_178 * fVar20;
        local_178 = local_178 * fVar5 - fVar14 * fVar20;
        fVar14 = fVar19 * fVar5 + local_170 * fVar20;
        local_170 = local_170 * fVar5 - fVar19 * fVar20;
        fVar21 = fVar8 * fVar5 + local_168 * fVar20;
        dVar6 = -1.5707963705062866;
        local_168 = local_168 * fVar5 - fVar8 * fVar20;
        local_28 = local_16c;
        local_24 = local_178;
        local_20 = local_170;
        local_1c = local_168;
        libm_sse2_cos_precise();
        fVar5 = (float)dVar6;
        dVar6 = -1.5707963705062866;
        libm_sse2_sin_precise();
        fVar19 = (float)dVar6;
        local_48 = fVar7 * fVar5 + fVar16 * fVar19;
        local_38 = fVar16 * fVar5 - fVar7 * fVar19;
        local_34 = fVar17 * fVar5 - fVar18 * fVar19;
        fVar18 = fVar18 * fVar5 + fVar17 * fVar19;
        local_30 = fVar14 * fVar5 - fVar13 * fVar19;
        fVar13 = fVar13 * fVar5 + fVar14 * fVar19;
        fVar8 = fVar15 * fVar19;
        fVar15 = fVar15 * fVar5 + fVar21 * fVar19;
        fVar8 = fVar21 * fVar5 - fVar8;
      }
      local_44 = fVar18;
      local_40 = fVar13;
      local_3c = fVar15;
      local_2c = fVar8;
      if (param_4 != 1.0) {
        local_38 = local_38 * param_4;
        local_16c = local_16c * param_4;
        local_34 = local_34 * param_4;
        local_178 = local_178 * param_4;
        local_48 = local_48 * param_4;
        local_170 = local_170 * param_4;
        local_30 = local_30 * param_4;
        local_168 = local_168 * param_4;
        local_44 = fVar18 * param_4;
        local_40 = fVar13 * param_4;
        local_3c = fVar15 * param_4;
        local_2c = fVar8 * param_4;
        local_28 = local_16c;
        local_24 = local_178;
        local_20 = local_170;
        local_1c = local_168;
      }
      fVar8 = 1.0 / (float)iVar3;
      if (fVar8 != 1.0) {
        local_38 = local_38 * fVar8;
        local_34 = local_34 * fVar8;
        local_30 = local_30 * fVar8;
        local_48 = local_48 * fVar8;
        local_44 = local_44 * fVar8;
        local_40 = local_40 * fVar8;
        local_3c = local_3c * fVar8;
        local_2c = local_2c * fVar8;
        local_16c = local_16c * fVar8;
        local_178 = local_178 * fVar8;
        local_170 = local_170 * fVar8;
        local_168 = local_168 * fVar8;
        local_28 = local_16c;
        local_24 = local_178;
        local_20 = local_170;
        local_1c = local_168;
      }
      fVar7 = (float)*(int *)(iVar1 + 0x44) * -0.5;
      fVar5 = (float)*(int *)(iVar1 + 0x48) * -0.5;
      fVar8 = (float)*(int *)(iVar1 + 0x4c) * -0.5;
      local_18 = local_48 * fVar7 + local_38 * fVar5 + local_16c * fVar8 + fVar9;
      local_14 = local_44 * fVar7 + local_34 * fVar5 + local_178 * fVar8 + fVar10;
      local_10 = local_40 * fVar7 + local_30 * fVar5 + local_170 * fVar8 + fVar11;
      local_c = local_3c * fVar7 + local_2c * fVar5 + local_168 * fVar8 + fVar12;
      FUN_00423e70();
      FUN_00427910(0x3f490fdb,-((float)*(int *)(in_ECX + 0x11c) / (float)*(int *)(in_ECX + 0x120)),
                   0x3dcccccd,0x447a0000);
      FUN_00423e70();
      fVar5 = ((param_1 - (float)*(int *)(in_ECX + 0x11c) * 0.5) / (float)*(int *)(in_ECX + 0x11c))
              * 2.0;
      fVar8 = ((param_2 - (float)*(int *)(in_ECX + 0x120) * 0.5) / (float)*(int *)(in_ECX + 0x120))
              * -2.0;
      local_58 = local_88 * fVar5 + local_78 * fVar8 + local_68 * param_6 + local_58;
      local_54 = local_84 * fVar5 + local_74 * fVar8 + local_64 * param_6 + local_54;
      local_50 = local_80 * fVar5 + local_70 * fVar8 + local_60 * param_6 + local_50;
      local_4c = local_7c * fVar5 + local_6c * fVar8 + local_5c * param_6 + local_4c;
      FUN_00447d10();
      uVar2 = FUN_00424f30(local_158,local_118);
      FUN_004482a0(&local_48,local_d8,uVar2);
      FUN_00447fb0(0x3f800000);
      fVar4 = (float10)FUN_004c7be0();
      FUN_00448fe0((float)fVar4);
      FUN_004e6df0();
      puVar22 = &local_98;
      uVar23 = 0;
      local_98 = 0x3f800000;
      local_94 = 0x3f800000;
      local_90 = 0x3f800000;
      local_8c = 0x3f800000;
      uVar2 = FUN_00424f30(local_158,local_118);
      FUN_00471b60(param_5,&local_48,local_d8,uVar2,puVar22,uVar23);
    }
  }
LAB_0047664b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c7be0 @ 004c7be0  kind=gamemisc  attributed-by=logic:caller-vote  size=30 */

float10 FUN_004c7be0(void)

{
  char cVar1;
  char *in_ECX;
  
  if ((*in_ECX != '\0') &&
     ((((cVar1 = in_ECX[0xd], cVar1 == '\x01' || (cVar1 == '\v')) || (cVar1 == '\f')) ||
      (cVar1 == '\x16')))) {
    return (float10)1;
  }
  return (float10)0;
}


/* FUN_004e0730 @ 004e0730  kind=gamemisc  attributed-by=logic:caller-vote  size=513 */

void FUN_004e0730(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x4924922 < (uint)in_ECX[1]) {
    FUN_004e2a00();
                    /* WARNING: Subroutine does not return */
    operator_delete(param_5);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] == '\0') goto LAB_004e0871;
      if (piVar4 == (int *)piVar6[2]) {
        piVar4 = (int *)piVar6[2];
        piVar6[2] = *piVar4;
        if (*(char *)(*piVar4 + 0xd) == '\0') {
          *(int **)(*piVar4 + 4) = piVar6;
        }
        piVar4[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar4;
        }
        else {
          piVar5 = (int *)piVar6[1];
          if (piVar6 == (int *)*piVar5) {
            *piVar5 = (int)piVar4;
          }
          else {
            piVar5[2] = (int)piVar4;
          }
        }
        *piVar4 = (int)piVar6;
        piVar6[1] = (int)piVar4;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)*piVar6;
      *piVar6 = piVar5[2];
      if (*(char *)(piVar5[2] + 0xd) == '\0') {
        *(int **)(piVar5[2] + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
        piVar5[2] = (int)piVar6;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          *piVar2 = (int)piVar5;
          piVar5[2] = (int)piVar6;
        }
      }
LAB_004e091a:
      piVar6[1] = (int)piVar5;
    }
    else {
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)*piVar6) {
          iVar3 = *piVar6;
          *piVar6 = *(int *)(iVar3 + 8);
          if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
            *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
          }
          *(int *)(iVar3 + 4) = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int *)(*in_ECX + 4) = iVar3;
          }
          else {
            piVar4 = (int *)piVar6[1];
            if (piVar6 == (int *)piVar4[2]) {
              piVar4[2] = iVar3;
            }
            else {
              *piVar4 = iVar3;
            }
          }
          *(int **)(iVar3 + 8) = piVar6;
          piVar6[1] = iVar3;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)piVar6[2];
        piVar6[2] = *piVar5;
        if (*(char *)(*piVar5 + 0xd) == '\0') {
          *(int **)(*piVar5 + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)*piVar2) {
            *piVar2 = (int)piVar5;
          }
          else {
            piVar2[2] = (int)piVar5;
          }
        }
        *piVar5 = (int)piVar6;
        goto LAB_004e091a;
      }
LAB_004e0871:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004e15e0 @ 004e15e0  kind=gamemisc  attributed-by=logic:caller-vote  size=157 */

void FUN_004e15e0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e95f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004521c0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x7fffffe) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004ec370 @ 004ec370  kind=gamemisc  attributed-by=logic:caller-vote  size=25 */

undefined4 FUN_004ec370(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x354;
  case 1:
    return 0x351;
  case 2:
    return 0x352;
  case 3:
    return 0x353;
  case 4:
    return 0x95b;
  case 5:
    return 0x82c;
  case 6:
    return 0x959;
  case 7:
    return 0x9f2;
  case 8:
    return 0x91f;
  case 9:
    return 0x91d;
  default:
    return 0x34b;
  }
}


/* FUN_004ec400 @ 004ec400  kind=gamemisc  attributed-by=logic:caller-vote  size=6657 */

/* WARNING: Removing unreachable block (ram,0x004edcd7) */

undefined4 FUN_004ec400(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  
  switch(*param_1) {
  case 1:
    uVar4 = FUN_004ec370(param_1[1]);
    uVar4 = FUN_004120c0(uVar4);
    return uVar4;
  case 2:
    if (0x25d4 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
      return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x25d4);
    }
    break;
  case 3:
    uVar4 = FUN_0051be60(param_1[1],*(undefined4 *)(param_1 + 4),param_1[0xc],param_1[0xd]);
    uVar4 = FUN_004120c0(uVar4);
    return uVar4;
  case 4:
    switch(param_1[0xd]) {
    case 5:
      if (0x2018 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2018);
      }
      break;
    case 6:
      switch(param_1[1]) {
      case 0:
        if (0x1334 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1334);
        }
        break;
      case 1:
        if (0x1338 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1338);
        }
        break;
      case 2:
        if (0x133c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x133c);
        }
        break;
      case 3:
        if (0x1340 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1340);
        }
        break;
      case 4:
        if (0x1344 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1344);
        }
        break;
      case 5:
        if (0x1348 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1348);
        }
        break;
      case 6:
        if (0x134c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x134c);
        }
        break;
      default:
        goto switchD_004ec417_caseD_7;
      }
      break;
    case 7:
      if (0x204c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x204c);
      }
      break;
    default:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0(uVar3 + (*(uint *)(param_1 + 4) % 5) * 5 + 0x464);
      return uVar4;
    case 0xb:
      if (0x2038 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2038);
      }
      break;
    case 0x12:
      if (0x1320 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1320);
      }
      break;
    case 0x13:
      if (0x2504 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2504);
      }
      break;
    case 0x14:
      if (0x251c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x251c);
      }
      break;
    case 0x16:
      if (0x24e0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24e0);
      }
      break;
    case 0x17:
      if (0xa78 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xa78);
      }
      break;
    case 0x19:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x685 + uVar3);
      return uVar4;
    case 0x1a:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x54f + uVar3);
      return uVar4;
    case 0x1b:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x5b3 + uVar3);
      return uVar4;
    }
    break;
  case 5:
    switch(param_1[0xd]) {
    case 1:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x496 + uVar3);
      return uVar4;
    default:
      if (0x1c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1c);
      }
      break;
    case 5:
      if (0x2024 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2024);
      }
      break;
    case 7:
      if (0x2058 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2058);
      }
      break;
    case 0xb:
      if (0x2044 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2044);
      }
      break;
    case 0x12:
      if (0x1328 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1328);
      }
      break;
    case 0x13:
      if (0x2500 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2500);
      }
      break;
    case 0x14:
      if (0x2518 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2518);
      }
      break;
    case 0x16:
      if (0x24e8 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24e8);
      }
      break;
    case 0x17:
      if (0xa80 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xa80);
      }
      break;
    case 0x19:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0(uVar3 + (*(uint *)(param_1 + 4) % 5) * 5 + 0x6d0);
      return uVar4;
    case 0x1a:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x59a + uVar3);
      return uVar4;
    case 0x1b:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x5fe + uVar3);
      return uVar4;
    }
    break;
  case 6:
    switch(param_1[0xd]) {
    case 1:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x4af + uVar3);
      return uVar4;
    default:
      if (0x6c4 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x6c4);
      }
      break;
    case 5:
      if (0x2020 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2020);
      }
      break;
    case 7:
      if (0x2054 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2054);
      }
      break;
    case 0xb:
      if (0x2040 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2040);
      }
      break;
    case 0x12:
      if (0x132c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x132c);
      }
      break;
    case 0x13:
      if (0x2508 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2508);
      }
      break;
    case 0x14:
      if (0x2520 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2520);
      }
      break;
    case 0x16:
      if (0x24e4 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24e4);
      }
      break;
    case 0x17:
      if (0xa84 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xa84);
      }
      break;
    case 0x19:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x6b7 + uVar3);
      return uVar4;
    case 0x1a:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x581 + uVar3);
      return uVar4;
    case 0x1b:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x5e5 + uVar3);
      return uVar4;
    }
    break;
  case 7:
switchD_004ec417_caseD_7:
    switch(param_1[0xd]) {
    case 5:
      if (0x201c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x201c);
      }
      break;
    default:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x47d + uVar3);
      return uVar4;
    case 7:
      if (0x2050 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2050);
      }
      break;
    case 0xb:
      if (0x203c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x203c);
      }
      break;
    case 0x12:
      if (0x1324 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1324);
      }
      break;
    case 0x13:
      if (0x2510 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2510);
      }
      break;
    case 0x14:
      if (0x2528 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2528);
      }
      break;
    case 0x16:
      if (0x24dc < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24dc);
      }
      break;
    case 0x17:
      if (0xa7c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xa7c);
      }
      break;
    case 0x19:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x69e + uVar3);
      return uVar4;
    case 0x1a:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0(uVar3 + (*(uint *)(param_1 + 4) % 5) * 5 + 0x568);
      return uVar4;
    case 0x1b:
      uVar3 = (uint)(byte)param_1[0xc];
      if (3 < (byte)param_1[0xc]) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0(uVar3 + (*(uint *)(param_1 + 4) % 5) * 5 + 0x5cc);
      return uVar4;
    }
    break;
  case 8:
    bVar1 = param_1[0xc];
    uVar3 = (uint)bVar1;
    if (param_1[0xd] != '\f') {
      if (3 < bVar1) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0(uVar3 + (*(uint *)(param_1 + 4) % 5) * 5 + 0x61c);
      return uVar4;
    }
    if (3 < bVar1) {
      uVar3 = 4;
    }
    uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x63a + uVar3);
    return uVar4;
  case 9:
    bVar1 = param_1[0xc];
    uVar3 = (uint)bVar1;
    if (param_1[0xd] != '\f') {
      if (3 < bVar1) {
        uVar3 = 4;
      }
      uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) % 5) * 5 + 0x653 + uVar3);
      return uVar4;
    }
    if (3 < bVar1) {
      uVar3 = 4;
    }
    uVar4 = FUN_004120c0(uVar3 + (*(uint *)(param_1 + 4) % 5) * 5 + 0x66c);
    return uVar4;
  case 10:
    if (0x206c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
      return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x206c);
    }
    break;
  case 0xb:
    switch(param_1[1]) {
    case 0:
      switch(param_1[0xd]) {
      case 1:
        if (0x2484 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2484);
        }
        break;
      case 2:
        iVar5 = *(int *)(in_ECX + 4);
        if ((int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU) < 0x24f5) {
          return 0;
        }
LAB_004ed66a:
        return *(undefined4 *)(iVar5 + 0x24f4);
      case 0xb:
        if (0x248c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x248c);
        }
        break;
      case 0xc:
        if (0x2488 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2488);
        }
        break;
      case 0xd:
        if (0x2490 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2490);
        }
        break;
      case 0xe:
        if (0x2494 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2494);
        }
        break;
      case 0xf:
        if (0x2498 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2498);
        }
        break;
      case 0x10:
        if (0x249c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x249c);
        }
        break;
      case 0x11:
        if (0x24f0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24f0);
        }
      }
      break;
    case 1:
      iVar5 = *(int *)(in_ECX + 4);
      if (0x24f4 < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) goto LAB_004ed66a;
      break;
    case 2:
      if (0x24f8 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24f8);
      }
      break;
    case 5:
      if (0x2568 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2568);
      }
      break;
    case 6:
      if (0x24c0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24c0);
      }
      break;
    case 7:
      if (0x2514 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2514);
      }
      break;
    case 8:
      iVar5 = *(int *)(in_ECX + 4);
      uVar3 = *(int *)(in_ECX + 8) - iVar5;
      goto joined_r0x004ed5ea;
    case 9:
      iVar5 = *(int *)(in_ECX + 4);
      if (0x24ec < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) goto LAB_004ed71e;
      break;
    case 10:
      switch(param_1[0xd]) {
      case 1:
        if (0x24a0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24a0);
        }
        break;
      case 2:
        if (0x24ac < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24ac);
        }
        break;
      case 0xb:
        if (0x24a8 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24a8);
        }
        break;
      case 0xc:
        if (0x24a4 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
          return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24a4);
        }
      }
      break;
    case 0xb:
      if (0x21c0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x21c0);
      }
      break;
    case 0xc:
      if (0x2554 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2554);
      }
      break;
    case 0xd:
      if (0x2480 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2480);
      }
      break;
    case 0xe:
      cVar2 = param_1[0xd];
      iVar5 = *(int *)(in_ECX + 4);
      if (cVar2 == -0x7f) {
        if (0x24b8 < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) {
          return *(undefined4 *)(iVar5 + 0x24b8);
        }
      }
      else if (cVar2 == -0x7e) {
        if (0x24b4 < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) {
          return *(undefined4 *)(iVar5 + 0x24b4);
        }
      }
      else if (cVar2 == -0x7d) {
        if (0x24bc < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) {
          return *(undefined4 *)(iVar5 + 0x24bc);
        }
      }
      else if (0x24b0 < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) {
        return *(undefined4 *)(iVar5 + 0x24b0);
      }
      break;
    case 0xf:
      if (0xd2c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd2c);
      }
      break;
    case 0x10:
      if (0x2470 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2470);
      }
      break;
    case 0x11:
      iVar5 = *(int *)(in_ECX + 4);
      if ((int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU) < 0x2479) {
        return 0;
      }
LAB_004ed565:
      return *(undefined4 *)(iVar5 + 0x2478);
    case 0x12:
      if (0x255c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x255c);
      }
      break;
    case 0x13:
      if (0xd30 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd30);
      }
      break;
    case 0x14:
      if (0x20c4 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c4);
      }
      break;
    case 0x15:
      if (0x2560 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2560);
      }
      break;
    case 0x16:
      if (0xd34 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd34);
      }
      break;
    case 0x17:
      if (0xd3c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd3c);
      }
      break;
    case 0x18:
      if (0xd38 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd38);
      }
      break;
    case 0x19:
      if (0xd40 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd40);
      }
      break;
    case 0x1a:
      if (0x2558 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2558);
      }
      break;
    case 0x1b:
      if (0x20ac < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20ac);
      }
    }
    break;
  case 0xc:
    iVar5 = *(int *)(in_ECX + 4);
    if (param_1[0xd] == '\v') {
      if (0x2098 < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) {
        return *(undefined4 *)(iVar5 + 0x2098);
      }
    }
    else if (param_1[0xd] == '\f') {
      if (0x2094 < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) {
        return *(undefined4 *)(iVar5 + 0x2094);
      }
    }
    else if (0x2090 < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) {
      return *(undefined4 *)(iVar5 + 0x2090);
    }
    break;
  case 0xd:
    iVar5 = *(int *)(in_ECX + 4);
    uVar3 = *(int *)(in_ECX + 8) - iVar5;
joined_r0x004ed5ea:
    if (0x24d4 < (int)(uVar3 & 0xfffffffc)) {
      return *(undefined4 *)(iVar5 + 0x24d4);
    }
    break;
  case 0xe:
    iVar5 = (byte)param_1[0xc] - 1;
    if ((-1 < iVar5) && (3 < iVar5)) {
      uVar4 = FUN_004120c0(0x911);
      return uVar4;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    uVar4 = FUN_004120c0(iVar5 + 0x90e);
    return uVar4;
  case 0xf:
    if (0x24fc < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
      return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24fc);
    }
    break;
  case 0x10:
    uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) & 1) + 0x909);
    return uVar4;
  case 0x11:
    uVar4 = FUN_004120c0((*(uint *)(param_1 + 4) & 3) + 0x841);
    return uVar4;
  case 0x12:
    if (param_1[1] != '\x01') {
      uVar4 = FUN_004120c0(*(uint *)(param_1 + 4) % 3 + 0x845);
      return uVar4;
    }
    uVar4 = FUN_004120c0(*(uint *)(param_1 + 4) % 3 + 0x848);
    return uVar4;
  case 0x13:
    iVar5 = *(int *)(in_ECX + 4);
    if (param_1[1] == '\x18') {
      if (0x21d0 < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) {
        return *(undefined4 *)(iVar5 + 0x21d0);
      }
    }
    else if (param_1[1] == '\x19') {
      if (0x21c4 < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) {
        return *(undefined4 *)(iVar5 + 0x21c4);
      }
    }
    else if (0x2080 < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) {
      return *(undefined4 *)(iVar5 + 0x2080);
    }
    break;
  case 0x14:
    switch(param_1[1]) {
    case 0x13:
      if (0xdac < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdac);
      }
      break;
    default:
      iVar5 = *(int *)(in_ECX + 4);
      if (0x2478 < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) goto LAB_004ed565;
      break;
    case 0x16:
      if (0xd90 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd90);
      }
      break;
    case 0x17:
      if (0xd94 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd94);
      }
      break;
    case 0x19:
      if (0xdb4 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdb4);
      }
      break;
    case 0x1a:
      if (0xdbc < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdbc);
      }
      break;
    case 0x1b:
      if (0xd9c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd9c);
      }
      break;
    case 0x1e:
      if (0xd6c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd6c);
      }
      break;
    case 0x21:
      if (0xd68 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd68);
      }
      break;
    case 0x22:
      if (0xd7c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd7c);
      }
      break;
    case 0x23:
      if (0xd64 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd64);
      }
      break;
    case 0x24:
      if (0xde4 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xde4);
      }
      break;
    case 0x25:
      if (0xd54 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd54);
      }
      break;
    case 0x26:
      if (0xd58 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd58);
      }
      break;
    case 0x27:
      if (0xd60 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd60);
      }
      break;
    case 0x28:
      if (0xd5c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd5c);
      }
      break;
    case 0x32:
      if (0xd98 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd98);
      }
      break;
    case 0x35:
      if (0xd80 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd80);
      }
      break;
    case 0x37:
      if (0xdb0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdb0);
      }
      break;
    case 0x38:
      if (0xd84 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd84);
      }
      break;
    case 0x39:
      if (0xde8 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xde8);
      }
      break;
    case 0x3a:
      if (0xdec < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdec);
      }
      break;
    case 0x3b:
      if (0xdf0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdf0);
      }
      break;
    case 0x3c:
      if (0xdf4 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdf4);
      }
      break;
    case 0x3d:
      if (0xdf8 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdf8);
      }
      break;
    case 0x3e:
      if (0xdfc < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdfc);
      }
      break;
    case 0x3f:
      if (0xdd0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdd0);
      }
      break;
    case 0x40:
      if (0xdd8 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdd8);
      }
      break;
    case 0x41:
      if (0xddc < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xddc);
      }
      break;
    case 0x42:
      if (0xdd4 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdd4);
      }
      break;
    case 0x43:
      if (0xda8 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xda8);
      }
      break;
    case 0x4a:
      if (0xde0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xde0);
      }
      break;
    case 0x4b:
      if (0xdb8 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdb8);
      }
      break;
    case 0x56:
      if (0xdc0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdc0);
      }
      break;
    case 0x57:
      if (0xd78 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd78);
      }
      break;
    case 0x58:
      if (0xe00 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xe00);
      }
      break;
    case 0x5a:
      if (0xd88 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd88);
      }
      break;
    case 0x5b:
      if (0xd8c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd8c);
      }
      break;
    case 0x5c:
      if (0xd70 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd70);
      }
      break;
    case 0x5d:
      if (0xd74 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xd74);
      }
      break;
    case 0x62:
      if (0xdc8 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdc8);
      }
      break;
    case 99:
      if (0xdc4 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdc4);
      }
      break;
    case 0x66:
      if (0x25a0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x25a0);
      }
      break;
    case 0x67:
      if (0xe04 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xe04);
      }
      break;
    case 0x68:
      if (0xda0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xda0);
      }
      break;
    case 0x69:
      if (0xda4 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xda4);
      }
      break;
    case 0x6a:
      if (0xdcc < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xdcc);
      }
      break;
    case 0x97:
      if (0xe08 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xe08);
      }
    }
    break;
  case 0x15:
    switch((uint)(byte)param_1[1]) {
    case 3:
      if (0x25d8 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x25d8);
      }
      break;
    case 4:
      iVar5 = *(int *)(in_ECX + 4);
      if (0xd4c < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) goto LAB_004edc26;
      break;
    case 5:
      iVar5 = *(int *)(in_ECX + 4);
      if ((int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU) < 0xd4d) {
        return 0;
      }
LAB_004edc26:
      return *(undefined4 *)(iVar5 + 0xd4c);
    case 6:
      if (0x27d8 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x27d8);
      }
      break;
    case 7:
      if (0x984 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x984);
      }
      break;
    case 8:
      iVar5 = *(int *)(in_ECX + 4);
      if ((int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU) < 0x24ed) {
        return 0;
      }
LAB_004ed71e:
      return *(undefined4 *)(iVar5 + 0x24ec);
    case 9:
      if (0x256c < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x256c);
      }
      break;
    default:
      uVar4 = FUN_004120c0(((byte)param_1[1] & 0x80000003) + 0x821);
      return uVar4;
    }
    break;
  case 0x17:
    iVar5 = *(int *)(in_ECX + 4);
    if (param_1[1] == '\x01') {
      if (0x27d0 < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) {
        return *(undefined4 *)(iVar5 + 0x27d0);
      }
    }
    else if (0x27cc < (int)(*(int *)(in_ECX + 8) - iVar5 & 0xfffffffcU)) {
      return *(undefined4 *)(iVar5 + 0x27cc);
    }
    break;
  case 0x18:
    if (0x2604 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
      return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2604);
    }
    break;
  case 0x19:
    if (0x2818 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffffcU)) {
      return *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2818);
    }
  }
  return 0;
}


/* FUN_0051be60 @ 0051be60  kind=gamemisc  attributed-by=logic:caller-vote  size=29 */

int FUN_0051be60(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  switch(param_1) {
  case 0:
    break;
  case 1:
    if (param_4 == 5) {
      return 0x80c;
    }
    if (param_4 == 7) {
      return 0x81a;
    }
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return (param_2 % 0xb + 0x162) * 5 + iVar2;
  case 2:
    if (param_4 == 2) {
      iVar2 = 4;
      if (param_3 < 4) {
        iVar2 = param_3;
      }
      return iVar2 + 0x298;
    }
    if (param_4 == 7) {
      return 0x819;
    }
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return iVar2 + 0x261 + (param_2 % 0xb) * 5;
  case 3:
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return iVar2 + 0x3ba + (param_2 % 0xb) * 5;
  case 4:
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return iVar2 + 0x3f1 + (param_2 % 0xb) * 5;
  case 5:
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return (param_2 % 0xb + 0x178) * 5 + iVar2;
  case 6:
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return iVar2 + 0x2a2 + (param_2 % 0xb) * 5;
  case 7:
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return iVar2 + 0x2d9 + (param_2 % 0xb) * 5;
  case 8:
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return iVar2 + 0x310 + (param_2 % 0xb) * 5;
  case 9:
    return 0x348;
  case 10:
    if (param_4 == 5) {
      iVar2 = 4;
      if (param_3 < 4) {
        iVar2 = param_3;
      }
      return iVar2 + 0x25c;
    }
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return iVar2 + 0x1b2 + (param_2 % 0xb) * 5;
  case 0xb:
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return iVar2 + 0x1e9 + (param_2 % 0xb) * 5;
  case 0xc:
    iVar2 = (param_2 % 6) * 5;
    if (param_4 != 0xb) {
      iVar1 = 4;
      if (param_3 < 4) {
        iVar1 = param_3;
      }
      return iVar1 + 0x23e + iVar2;
    }
    iVar1 = 4;
    if (param_3 < 4) {
      iVar1 = param_3;
    }
    return iVar1 + 0x220 + iVar2;
  case 0xd:
    if (param_4 == 2) {
      iVar2 = 4;
      if (param_3 < 4) {
        iVar2 = param_3;
      }
      return iVar2 + 0x45f;
    }
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return iVar2 + 0x428 + (param_2 % 0xb) * 5;
  case 0xe:
    return 0x347;
  case 0xf:
    if (param_4 == 5) {
      return 0x790;
    }
    if (param_4 == 7) {
      return 0x78f;
    }
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return (param_2 % 0xb + 0x16d) * 5 + iVar2;
  case 0x10:
    if (param_4 == 5) {
      return 0x7c9;
    }
    if (param_4 == 7) {
      return 0x7c8;
    }
    if (param_4 == 0x12) {
      return 0x7ca;
    }
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return iVar2 + 0x791 + (param_2 % 0xb) * 5;
  case 0x11:
    if (param_4 == 2) {
      return 0x7cb;
    }
    if (param_4 == 5) {
      return 0x805;
    }
    if (param_4 == 7) {
      return 0x804;
    }
    iVar2 = 4;
    if (param_3 < 4) {
      iVar2 = param_3;
    }
    return iVar2 + 0x7cc + (param_2 % 0xb) * 5;
  case 0x12:
    return 0x91b;
  case 0x13:
    return 0x803;
  case 0x14:
    return 0x34a;
  default:
    return 899;
  }
  if (param_4 == 5) {
    return 0x80b;
  }
  if (param_4 == 7) {
    return 0x818;
  }
  iVar2 = 4;
  if (param_3 < 4) {
    iVar2 = param_3;
  }
  return iVar2 + 899 + (param_2 % 0xb) * 5;
}


/* FUN_00627d50 @ 00627d50  kind=gamemisc  attributed-by=logic:caller-vote  size=99 */

void FUN_00627d50(void)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  undefined4 in_EDX;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(in_ECX + 0x50);
  fVar2 = *(float *)(in_ECX + 0x60);
  fVar3 = (fVar1 + *(float *)(in_ECX + 0x78)) - fVar2;
  fVar4 = (fVar1 + *(float *)(in_ECX + 0x70)) - fVar2;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  if (fVar4 < fVar3) {
    fVar4 = fVar3;
  }
  __security_check_cookie
            (DAT_0076aa78 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc,in_EDX,
             (fVar2 + fVar4) - fVar1);
  return;
}


/* FUN_006294d0 @ 006294d0  kind=gamemisc  attributed-by=logic:caller-vote  size=194 */

void FUN_006294d0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int in_ECX;
  float fVar6;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pfVar5 = (float *)FUN_0062d7f0(local_48);
  fVar1 = pfVar5[5];
  fVar6 = 1.0 / (pfVar5[7] * 0.0 + pfVar5[3] * 0.0 + pfVar5[0xf]);
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[0xd];
  fVar4 = *(float *)(*(int *)(in_ECX + 4) + 0xd8);
  *param_1 = *(float *)(*(int *)(in_ECX + 4) + 0xd4) -
             fVar6 * (pfVar5[4] * 0.0 + *pfVar5 * 0.0 + pfVar5[0xc]);
  param_1[1] = fVar4 - fVar6 * (fVar1 * 0.0 + fVar2 * 0.0 + fVar3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00639b30 @ 00639b30  kind=gamemisc  attributed-by=logic:caller-vote  size=174 */

void FUN_00639b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00639800(param_1);
  if (iVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x24));
    (**(code **)(**(int **)(in_ECX + 4) + 0x40))(0);
    FUN_0065bc70(param_2,param_5,param_6,param_7,param_8,param_3,param_4,param_13,param_9,param_10,
                 param_11,param_12,param_14);
    (**(code **)(**(int **)(in_ECX + 4) + 0x44))(0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x24));
  }
  return;
}


