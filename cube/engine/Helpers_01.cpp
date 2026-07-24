// Helpers_01 (engine) -- cube. 34 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_01.h"

/* FUN_0066b9c0 @ 0066b9c0  kind=gamemisc  attributed-by=caller-vote  size=1200 */

void FUN_0066b9c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_84 [4];
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int *local_68;
  int local_64;
  int *local_60;
  int local_5c;
  int *local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  float local_34;
  float fStack_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_84;
  local_64 = 0;
  if (0 < (*(int *)(in_ECX + 0x8dc) - *(int *)(in_ECX + 0x8d8)) / 0xc) {
    local_68 = *(int **)(in_ECX + 0x8d8);
    local_80 = in_ECX;
    local_58 = local_68;
    do {
      iVar7 = local_68[1] - *local_68 >> 2;
      local_78 = 0;
      if (0 < iVar7) {
        iVar5 = *(int *)(local_80 + 0x2c4);
        piVar3 = (int *)*local_68;
        local_74 = iVar5;
        do {
          local_7c = piVar3[local_78];
          if ((*(uint *)(iVar5 + local_7c * 4) & 0xffff0000) == 0x10000) {
            local_6c = local_78 + 2;
            iVar6 = piVar3[(local_78 + 3) % iVar7];
            if ((*(uint *)(iVar5 + iVar6 * 4) & 0xffff0000) != 0x10000) {
              iVar6 = piVar3[(local_78 + 2) % iVar7];
            }
            local_70 = **(int **)(*(int *)(local_80 + 0xa8) + *(int *)(local_80 + 0x7c) * 4);
            uVar1 = *(undefined8 *)(local_70 + iVar6 * 8);
            local_54._0_4_ = (float)uVar1;
            local_54._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
            local_54._4_4_ = local_54._4_4_ - *(float *)(local_70 + 4 + local_7c * 8);
            local_54._0_4_ = (float)local_54 - *(float *)(local_70 + local_7c * 8);
            fVar9 = local_54._4_4_ * local_54._4_4_ + (float)local_54 * (float)local_54;
            if (0.0 < fVar9) {
              dVar8 = (double)fVar9;
              iVar5 = *(int *)(local_80 + 0x2d0);
              libm_sse2_sqrt_precise();
              fVar9 = *(float *)(iVar5 + local_7c * 4) / (float)dVar8;
              local_24 = local_54;
              uVar2 = local_24;
              uVar1 = *(undefined8 *)(local_70 + local_7c * 8);
              local_24._0_4_ = (float)local_54;
              local_24._4_4_ = (float)((ulonglong)local_54 >> 0x20);
              local_44._0_4_ = (float)uVar1;
              local_44._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              local_44 = CONCAT44(local_44._4_4_ + local_24._4_4_ * fVar9,
                                  (float)local_44 + (float)local_24 * fVar9);
              *(undefined8 *)(local_70 + piVar3[(local_6c + -1) % iVar7] * 8) = local_44;
              local_24 = uVar2;
            }
            iVar5 = piVar3[(iVar7 + -3 + local_78) % iVar7];
            if ((*(uint *)(local_74 + iVar5 * 4) & 0xffff0000) != 0x10000) {
              iVar5 = piVar3[(iVar7 + -2 + local_78) % iVar7];
            }
            local_70 = **(int **)(*(int *)(local_80 + 0xa8) + *(int *)(local_80 + 0x7c) * 4);
            uVar1 = *(undefined8 *)(local_70 + iVar5 * 8);
            local_4c._0_4_ = (float)uVar1;
            local_4c._0_4_ = (float)local_4c - *(float *)(local_70 + local_7c * 8);
            local_4c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
            local_4c._4_4_ = local_4c._4_4_ - *(float *)(local_70 + 4 + local_7c * 8);
            local_54 = local_4c;
            fVar9 = local_4c._4_4_ * local_4c._4_4_ + (float)local_4c * (float)local_4c;
            iVar5 = local_74;
            if (0.0 < fVar9) {
              dVar8 = (double)fVar9;
              iVar5 = *(int *)(local_80 + 0x2d0);
              libm_sse2_sqrt_precise();
              fVar9 = *(float *)(iVar5 + local_7c * 4) / (float)dVar8;
              local_1c = local_4c;
              uVar2 = local_1c;
              uVar1 = *(undefined8 *)(local_70 + local_7c * 8);
              local_1c._0_4_ = (float)local_4c;
              local_1c._4_4_ = (float)((ulonglong)local_4c >> 0x20);
              local_2c._0_4_ = (float)uVar1;
              local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              local_2c = CONCAT44(local_2c._4_4_ + local_1c._4_4_ * fVar9,
                                  (float)local_2c + (float)local_1c * fVar9);
              *(undefined8 *)(local_70 + piVar3[(local_78 + -1 + iVar7) % iVar7] * 8) = local_2c;
              iVar5 = local_74;
              local_1c = uVar2;
            }
          }
          local_78 = local_78 + 1;
        } while (local_78 < iVar7);
        local_6c = 1;
        local_60 = piVar3;
        iVar6 = iVar7;
        do {
          local_5c = *local_60;
          if ((*(uint *)(iVar5 + local_5c * 4) & 0xffff0000) == 0x20000) {
            local_78 = iVar7 + -1 + local_6c;
            local_7c = 0;
            iVar5 = local_6c;
            while ((iVar5 < local_78 &&
                   (local_7c = piVar3[iVar5 % iVar7],
                   (*(uint *)(local_74 + local_7c * 4) & 0xffff0000) == 0x20000))) {
              iVar5 = iVar5 + 1;
            }
            iVar5 = 0;
            iVar4 = local_78;
            do {
              iVar4 = iVar4 + -1;
              if (iVar4 < local_6c) break;
              iVar5 = piVar3[iVar4 % iVar7];
            } while ((*(uint *)(local_74 + iVar5 * 4) & 0xffff0000) == 0x20000);
            fVar9 = *(float *)(*(int *)(local_80 + 0x2d0) + local_5c * 4);
            iVar4 = **(int **)(*(int *)(local_80 + 0xa8) + *(int *)(local_80 + 0x7c) * 4);
            uVar1 = *(undefined8 *)(iVar4 + iVar5 * 8);
            uVar2 = *(undefined8 *)(iVar4 + local_7c * 8);
            local_14._0_4_ = (float)uVar1;
            local_14._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
            local_34 = (float)uVar2;
            local_34 = (1.0 - fVar9) * local_34;
            fStack_30 = (float)((ulonglong)uVar2 >> 0x20);
            fStack_30 = (1.0 - fVar9) * fStack_30;
            local_3c = CONCAT44(fStack_30 + local_14._4_4_ * fVar9,
                                (float)local_14 * fVar9 + local_34);
            *(undefined8 *)(iVar4 + local_5c * 8) = local_3c;
            iVar5 = local_74;
            local_14 = uVar1;
          }
          local_60 = local_60 + 1;
          local_6c = local_6c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        local_70 = 0;
      }
      local_68 = local_68 + 3;
      local_64 = local_64 + 1;
    } while (local_64 < (*(int *)(local_80 + 0x8dc) - (int)local_58) / 0xc);
  }
  __security_check_cookie(local_c ^ (uint)auStack_84);
  return;
}


/* FUN_0066c050 @ 0066c050  kind=gamemisc  attributed-by=caller-vote  size=2197 */

void FUN_0066c050(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int in_ECX;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  
  pfVar1 = (float *)(in_ECX + 0x890);
  FUN_00423e70();
  fVar5 = *(float *)(*(int *)(in_ECX + 0x328) + *(int *)(in_ECX + 0x2fc) * 8);
  fVar6 = *(float *)(*(int *)(in_ECX + 0x328) + 4 + *(int *)(in_ECX + 0x2fc) * 8);
  *(float *)(in_ECX + 0x8c0) =
       fVar5 * *pfVar1 + fVar6 * *(float *)(in_ECX + 0x8a0) + *(float *)(in_ECX + 0x8c0);
  *(float *)(in_ECX + 0x8c4) =
       *(float *)(in_ECX + 0x8a4) * fVar6 + fVar5 * *(float *)(in_ECX + 0x894) +
       *(float *)(in_ECX + 0x8c4);
  *(float *)(in_ECX + 0x8c8) =
       *(float *)(in_ECX + 0x8a8) * fVar6 + fVar5 * *(float *)(in_ECX + 0x898) +
       *(float *)(in_ECX + 0x8c8);
  *(float *)(in_ECX + 0x8cc) =
       *(float *)(in_ECX + 0x8ac) * fVar6 + fVar5 * *(float *)(in_ECX + 0x89c) +
       *(float *)(in_ECX + 0x8cc);
  fVar5 = *(float *)(*(int *)(in_ECX + 0x380) + *(int *)(in_ECX + 0x354) * 8);
  fVar6 = *(float *)(*(int *)(in_ECX + 0x380) + 4 + *(int *)(in_ECX + 0x354) * 8);
  *(float *)(in_ECX + 0x8c0) =
       fVar5 * *pfVar1 + fVar6 * *(float *)(in_ECX + 0x8a0) + *(float *)(in_ECX + 0x8c0);
  *(float *)(in_ECX + 0x8c4) =
       *(float *)(in_ECX + 0x8a4) * fVar6 + fVar5 * *(float *)(in_ECX + 0x894) +
       *(float *)(in_ECX + 0x8c4);
  *(float *)(in_ECX + 0x8c8) =
       *(float *)(in_ECX + 0x8a8) * fVar6 + fVar5 * *(float *)(in_ECX + 0x898) +
       *(float *)(in_ECX + 0x8c8);
  *(float *)(in_ECX + 0x8cc) =
       *(float *)(in_ECX + 0x8ac) * fVar6 + fVar5 * *(float *)(in_ECX + 0x89c) +
       *(float *)(in_ECX + 0x8cc);
  fVar5 = *(float *)(*(int *)(in_ECX + 0x3d8) + *(int *)(in_ECX + 0x3ac) * 0xc) * 0.017453292;
  dVar7 = (double)fVar5;
  libm_sse2_cos_precise();
  fVar6 = (float)dVar7;
  dVar7 = (double)fVar5;
  libm_sse2_sin_precise();
  fVar5 = *(float *)(in_ECX + 0x8a0);
  fVar8 = (float)dVar7;
  *(float *)(in_ECX + 0x8a0) = *(float *)(in_ECX + 0x8b0) * fVar8 + fVar5 * fVar6;
  *(float *)(in_ECX + 0x8b0) = *(float *)(in_ECX + 0x8b0) * fVar6 - fVar5 * fVar8;
  fVar5 = *(float *)(in_ECX + 0x8a4);
  *(float *)(in_ECX + 0x8a4) = *(float *)(in_ECX + 0x8b4) * fVar8 + fVar5 * fVar6;
  *(float *)(in_ECX + 0x8b4) = *(float *)(in_ECX + 0x8b4) * fVar6 - fVar5 * fVar8;
  fVar5 = *(float *)(in_ECX + 0x8a8);
  *(float *)(in_ECX + 0x8a8) = *(float *)(in_ECX + 0x8b8) * fVar8 + fVar5 * fVar6;
  *(float *)(in_ECX + 0x8b8) = *(float *)(in_ECX + 0x8b8) * fVar6 - fVar5 * fVar8;
  fVar5 = *(float *)(in_ECX + 0x8ac);
  *(float *)(in_ECX + 0x8ac) = *(float *)(in_ECX + 0x8bc) * fVar8 + fVar5 * fVar6;
  *(float *)(in_ECX + 0x8bc) = *(float *)(in_ECX + 0x8bc) * fVar6 - fVar5 * fVar8;
  fVar5 = *(float *)(*(int *)(in_ECX + 0x3d8) + 4 + *(int *)(in_ECX + 0x3ac) * 0xc) * 0.017453292;
  dVar7 = (double)fVar5;
  libm_sse2_cos_precise();
  fVar6 = (float)dVar7;
  dVar7 = (double)fVar5;
  libm_sse2_sin_precise();
  fVar5 = *pfVar1;
  fVar8 = (float)dVar7;
  *pfVar1 = fVar5 * fVar6 - *(float *)(in_ECX + 0x8b0) * fVar8;
  *(float *)(in_ECX + 0x8b0) = *(float *)(in_ECX + 0x8b0) * fVar6 + fVar5 * fVar8;
  fVar5 = *(float *)(in_ECX + 0x894);
  *(float *)(in_ECX + 0x894) = fVar5 * fVar6 - *(float *)(in_ECX + 0x8b4) * fVar8;
  *(float *)(in_ECX + 0x8b4) = *(float *)(in_ECX + 0x8b4) * fVar6 + fVar5 * fVar8;
  fVar5 = *(float *)(in_ECX + 0x898);
  *(float *)(in_ECX + 0x898) = fVar5 * fVar6 - *(float *)(in_ECX + 0x8b8) * fVar8;
  *(float *)(in_ECX + 0x8b8) = *(float *)(in_ECX + 0x8b8) * fVar6 + fVar5 * fVar8;
  fVar5 = *(float *)(in_ECX + 0x89c);
  *(float *)(in_ECX + 0x89c) = fVar5 * fVar6 - *(float *)(in_ECX + 0x8bc) * fVar8;
  *(float *)(in_ECX + 0x8bc) = *(float *)(in_ECX + 0x8bc) * fVar6 + fVar5 * fVar8;
  fVar5 = *(float *)(*(int *)(in_ECX + 0x3d8) + 8 + *(int *)(in_ECX + 0x3ac) * 0xc) * 0.017453292;
  dVar7 = (double)fVar5;
  libm_sse2_cos_precise();
  fVar6 = (float)dVar7;
  dVar7 = (double)fVar5;
  libm_sse2_sin_precise();
  fVar5 = *pfVar1;
  fVar8 = (float)dVar7;
  *pfVar1 = fVar5 * fVar6 + fVar8 * *(float *)(in_ECX + 0x8a0);
  *(float *)(in_ECX + 0x8a0) = fVar6 * *(float *)(in_ECX + 0x8a0) - fVar5 * fVar8;
  fVar5 = *(float *)(in_ECX + 0x894);
  *(float *)(in_ECX + 0x894) = *(float *)(in_ECX + 0x8a4) * fVar8 + fVar5 * fVar6;
  *(float *)(in_ECX + 0x8a4) = *(float *)(in_ECX + 0x8a4) * fVar6 - fVar5 * fVar8;
  fVar5 = *(float *)(in_ECX + 0x898);
  *(float *)(in_ECX + 0x898) = *(float *)(in_ECX + 0x8a8) * fVar8 + fVar5 * fVar6;
  *(float *)(in_ECX + 0x8a8) = *(float *)(in_ECX + 0x8a8) * fVar6 - fVar5 * fVar8;
  fVar5 = *(float *)(in_ECX + 0x89c);
  *(float *)(in_ECX + 0x89c) = *(float *)(in_ECX + 0x8ac) * fVar8 + fVar5 * fVar6;
  *(float *)(in_ECX + 0x8ac) = *(float *)(in_ECX + 0x8ac) * fVar6 - fVar5 * fVar8;
  fVar5 = *pfVar1;
  fVar6 = *(float *)(in_ECX + 0x8a0);
  fVar8 = *(float *)(in_ECX + 0x8b0);
  fVar2 = *(float *)(in_ECX + 0x8c0);
  pfVar4 = (float *)(*(int *)(in_ECX + 0x404) * 0x40 + *(int *)(in_ECX + 0x430));
  *pfVar1 = fVar6 * pfVar4[1] + fVar5 * *pfVar4 + fVar8 * pfVar4[2] + pfVar4[3] * fVar2;
  *(float *)(in_ECX + 0x8a0) =
       pfVar4[5] * fVar6 + pfVar4[4] * fVar5 + fVar8 * pfVar4[6] + fVar2 * pfVar4[7];
  *(float *)(in_ECX + 0x8b0) =
       pfVar4[9] * fVar6 + pfVar4[8] * fVar5 + pfVar4[10] * fVar8 + fVar2 * pfVar4[0xb];
  fVar3 = *(float *)(in_ECX + 0x8c4);
  *(float *)(in_ECX + 0x8c0) =
       fVar6 * pfVar4[0xd] + fVar5 * pfVar4[0xc] + pfVar4[0xe] * fVar8 + pfVar4[0xf] * fVar2;
  fVar5 = *(float *)(in_ECX + 0x894);
  fVar6 = *(float *)(in_ECX + 0x8a4);
  fVar8 = *(float *)(in_ECX + 0x8b4);
  *(float *)(in_ECX + 0x894) =
       fVar6 * pfVar4[1] + fVar5 * *pfVar4 + fVar8 * pfVar4[2] + pfVar4[3] * fVar3;
  *(float *)(in_ECX + 0x8a4) =
       pfVar4[5] * fVar6 + pfVar4[4] * fVar5 + fVar8 * pfVar4[6] + fVar3 * pfVar4[7];
  *(float *)(in_ECX + 0x8b4) =
       pfVar4[9] * fVar6 + pfVar4[8] * fVar5 + pfVar4[10] * fVar8 + fVar3 * pfVar4[0xb];
  fVar2 = *(float *)(in_ECX + 0x8c8);
  *(float *)(in_ECX + 0x8c4) =
       fVar6 * pfVar4[0xd] + fVar5 * pfVar4[0xc] + pfVar4[0xe] * fVar8 + pfVar4[0xf] * fVar3;
  fVar5 = *(float *)(in_ECX + 0x898);
  fVar6 = *(float *)(in_ECX + 0x8a8);
  fVar8 = *(float *)(in_ECX + 0x8b8);
  *(float *)(in_ECX + 0x898) =
       fVar6 * pfVar4[1] + fVar5 * *pfVar4 + fVar8 * pfVar4[2] + pfVar4[3] * fVar2;
  *(float *)(in_ECX + 0x8a8) =
       pfVar4[5] * fVar6 + pfVar4[4] * fVar5 + fVar8 * pfVar4[6] + fVar2 * pfVar4[7];
  *(float *)(in_ECX + 0x8b8) =
       pfVar4[9] * fVar6 + pfVar4[8] * fVar5 + pfVar4[10] * fVar8 + fVar2 * pfVar4[0xb];
  fVar3 = *(float *)(in_ECX + 0x8cc);
  *(float *)(in_ECX + 0x8c8) =
       fVar6 * pfVar4[0xd] + fVar5 * pfVar4[0xc] + pfVar4[0xe] * fVar8 + pfVar4[0xf] * fVar2;
  fVar5 = *(float *)(in_ECX + 0x89c);
  fVar6 = *(float *)(in_ECX + 0x8ac);
  fVar8 = *(float *)(in_ECX + 0x8bc);
  *(float *)(in_ECX + 0x89c) =
       fVar6 * pfVar4[1] + fVar5 * *pfVar4 + fVar8 * pfVar4[2] + pfVar4[3] * fVar3;
  *(float *)(in_ECX + 0x8ac) =
       pfVar4[5] * fVar6 + pfVar4[4] * fVar5 + fVar8 * pfVar4[6] + fVar3 * pfVar4[7];
  *(float *)(in_ECX + 0x8bc) =
       pfVar4[9] * fVar6 + pfVar4[8] * fVar5 + pfVar4[10] * fVar8 + fVar3 * pfVar4[0xb];
  *(float *)(in_ECX + 0x8cc) =
       fVar6 * pfVar4[0xd] + fVar5 * pfVar4[0xc] + pfVar4[0xe] * fVar8 + pfVar4[0xf] * fVar3;
  fVar6 = *(float *)(*(int *)(in_ECX + 0x380) + *(int *)(in_ECX + 0x354) * 8) * -1.0;
  fVar5 = *(float *)(*(int *)(in_ECX + 0x380) + 4 + *(int *)(in_ECX + 0x354) * 8) * -1.0;
  *(float *)(in_ECX + 0x8c0) =
       fVar5 * *(float *)(in_ECX + 0x8a0) + fVar6 * *pfVar1 + *(float *)(in_ECX + 0x8c0);
  *(float *)(in_ECX + 0x8c4) =
       *(float *)(in_ECX + 0x8a4) * fVar5 + fVar6 * *(float *)(in_ECX + 0x894) +
       *(float *)(in_ECX + 0x8c4);
  *(float *)(in_ECX + 0x8c8) =
       *(float *)(in_ECX + 0x8a8) * fVar5 + fVar6 * *(float *)(in_ECX + 0x898) +
       *(float *)(in_ECX + 0x8c8);
  *(float *)(in_ECX + 0x8cc) =
       *(float *)(in_ECX + 0x8ac) * fVar5 + fVar6 * *(float *)(in_ECX + 0x89c) +
       *(float *)(in_ECX + 0x8cc);
  return;
}


/* FUN_00671420 @ 00671420  kind=gamemisc  attributed-by=caller-vote  size=43 */

void FUN_00671420(void)

{
  int in_ECX;
  
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
            ((_Concurrent_vector_base_v4 *)(in_ECX + 4),cube::Controller::vfunction12);
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
            ((_Concurrent_vector_base_v4 *)(in_ECX + 0x24),cube::Controller::vfunction12);
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
            ((_Concurrent_vector_base_v4 *)(in_ECX + 0x44),cube::Controller::vfunction12);
  return;
}


/* FUN_00671450 @ 00671450  kind=gamemisc  attributed-by=caller-vote  size=739 */

void FUN_00671450(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  int *piVar9;
  undefined4 *puVar10;
  int in_ECX;
  undefined4 *puVar11;
  uint uVar12;
  undefined1 local_2c [4];
  _Concurrent_vector_base_v4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8258;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  puVar4 = (undefined4 *)FUN_0043c870(DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  uVar6 = *(uint *)(in_ECX + 0x18);
  local_28 = (_Concurrent_vector_base_v4 *)(in_ECX + 4);
  local_8 = 0;
  local_1c = 0;
  uVar12 = 0;
  uVar5 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(local_28);
  if (uVar5 < uVar6) {
    uVar6 = uVar5;
  }
  if (0 < (int)uVar6) {
    do {
      local_18 = 0;
      do {
        uVar6 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar12);
        if (*(char *)((int)puVar4[1] + 0xd) == '\0') {
          uVar6 = *(uint *)(local_18 +
                           *(int *)(*(int *)(local_14 + 0x1c) + uVar6 * 4) +
                           (uVar12 - (1 << ((byte)uVar6 & 0x1f) & 0xfffffffeU)) * 0x7c);
          puVar10 = (undefined4 *)puVar4[1];
          puVar11 = puVar4;
          do {
            if ((uint)puVar10[4] < uVar6) {
              puVar7 = (undefined4 *)puVar10[2];
            }
            else {
              puVar7 = (undefined4 *)*puVar10;
              puVar11 = puVar10;
            }
            puVar10 = puVar7;
          } while (*(char *)((int)puVar7 + 0xd) == '\0');
          if ((puVar11 == puVar4) || (uVar6 < (uint)puVar11[4])) goto LAB_00671535;
          local_20 = puVar11;
          ppuVar8 = &local_20;
        }
        else {
LAB_00671535:
          local_24 = puVar4;
          ppuVar8 = &local_24;
        }
        if (*ppuVar8 == puVar4) {
          uVar6 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar12);
          piVar9 = (int *)FUN_0063d730(*(int *)(*(int *)(local_14 + 0x1c) + uVar6 * 4) +
                                       (uVar12 - (1 << ((byte)uVar6 & 0x1f) & 0xfffffffeU)) * 0x7c +
                                       local_18);
          *piVar9 = local_1c;
          local_1c = local_1c + 1;
        }
        uVar6 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar12);
        iVar2 = *(int *)(*(int *)(local_14 + 0x1c) + uVar6 * 4);
        uVar5 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar12);
        iVar3 = *(int *)(*(int *)(local_14 + 0x1c) + uVar5 * 4);
        puVar10 = (undefined4 *)
                  FUN_0063d730(local_18 +
                               (uVar12 - (1 << ((byte)uVar6 & 0x1f) & 0xfffffffeU)) * 0x7c + iVar2);
        *(undefined4 *)
         (local_18 + 100 + (uVar12 - (1 << ((byte)uVar5 & 0x1f) & 0xfffffffeU)) * 0x7c + iVar3) =
             *puVar10;
        local_18 = local_18 + 4;
      } while (local_18 < 0x10);
      uVar6 = *(uint *)(local_14 + 0x18);
      uVar12 = uVar12 + 1;
      uVar5 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(local_28);
      if (uVar5 < uVar6) {
        uVar6 = uVar5;
      }
    } while ((int)uVar12 < (int)uVar6);
  }
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_resize
            ((_Concurrent_vector_base_v4 *)(local_14 + 0x44),0,4,0x3fffffff,
             cube::Controller::vfunction12,FUN_00671290,(void *)0x0);
  puVar10 = (undefined4 *)*puVar4;
  while (puVar10 != puVar4) {
    uVar6 = puVar10[5];
    uVar5 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar6);
    *(undefined4 *)
     (*(int *)(*(int *)(local_14 + 0x5c) + uVar5 * 4) +
     (uVar6 - (1 << ((byte)uVar5 & 0x1f) & 0xfffffffeU)) * 4) = puVar10[4];
    *(undefined1 *)(puVar10[4] + 0x30) = 0;
    if (*(char *)((int)puVar10 + 0xd) == '\0') {
      puVar11 = (undefined4 *)puVar10[2];
      if (*(char *)((int)puVar11 + 0xd) == '\0') {
        cVar1 = *(char *)((int)*puVar11 + 0xd);
        puVar10 = puVar11;
        puVar11 = (undefined4 *)*puVar11;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar11 + 0xd);
          puVar10 = puVar11;
          puVar11 = (undefined4 *)*puVar11;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar10[1] + 0xd);
        puVar7 = (undefined4 *)puVar10[1];
        puVar11 = puVar10;
        while ((puVar10 = puVar7, cVar1 == '\0' && (puVar11 == (undefined4 *)puVar10[2]))) {
          cVar1 = *(char *)((int)puVar10[1] + 0xd);
          puVar7 = (undefined4 *)puVar10[1];
          puVar11 = puVar10;
        }
      }
    }
  }
  uVar6 = *(uint *)(local_14 + 0x38);
  uVar12 = 0;
  uVar5 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(local_14 + 0x24));
  if (uVar5 < uVar6) {
    uVar6 = uVar5;
  }
  if (0 < (int)uVar6) {
    do {
      uVar6 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar12);
      piVar9 = (int *)((uVar12 - (1 << ((byte)uVar6 & 0x1f) & 0xfffffffeU)) * 0x4c +
                      *(int *)(*(int *)(local_14 + 0x3c) + uVar6 * 4));
      if ((*piVar9 == 0) || (piVar9[1] == 0)) {
        *(byte *)(piVar9[2] + 0x30) = *(byte *)(piVar9[2] + 0x30) | 1;
        *(byte *)(piVar9[3] + 0x30) = *(byte *)(piVar9[3] + 0x30) | 1;
      }
      uVar6 = *(uint *)(local_14 + 0x38);
      uVar12 = uVar12 + 1;
      uVar5 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                        ((_Concurrent_vector_base_v4 *)(local_14 + 0x24));
      if (uVar5 < uVar6) {
        uVar6 = uVar5;
      }
    } while ((int)uVar12 < (int)uVar6);
  }
  local_8 = 0xffffffff;
  FUN_0067eb10(local_2c,*puVar4,puVar4);
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar4);
}


/* FUN_00671750 @ 00671750  kind=gamemisc  attributed-by=caller-vote  size=2062 */

void FUN_00671750(uint param_1)

{
  _Concurrent_vector_base_v4 *this;
  uint uVar1;
  _Concurrent_vector_base_v4 *this_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int in_ECX;
  int *piVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  int *piVar12;
  int iVar13;
  uint local_20;
  int local_1c;
  undefined4 *local_14;
  int *local_10;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  this = (_Concurrent_vector_base_v4 *)(param_1 + 4);
  uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(this);
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_resize
            ((_Concurrent_vector_base_v4 *)(in_ECX + 4),uVar4 << 2,0x7c,0x2108421,
             cube::Controller::vfunction12,cube::Controller::vfunction12,(void *)0x0);
  this_00 = (_Concurrent_vector_base_v4 *)(param_1 + 0x24);
  uVar4 = *(uint *)(param_1 + 0x38);
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(this_00);
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar3 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(param_1 + 4));
  if (uVar3 < uVar1) {
    uVar1 = uVar3;
  }
  if (uVar2 < uVar4) {
    uVar4 = uVar2;
  }
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_resize
            ((_Concurrent_vector_base_v4 *)(in_ECX + 0x24),(uVar4 + uVar1 * 2) * 2,0x4c,0x35e50d7,
             cube::Controller::vfunction12,cube::Controller::vfunction12,(void *)0x0);
  uVar4 = *(uint *)(param_1 + 0x18);
  local_20 = 0;
  uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(this);
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  if (0 < (int)uVar4) {
    local_10 = (int *)0x3;
    do {
      pcVar11 = _Segment_index_of_exref;
      uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(local_20);
      iVar13 = (local_20 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x7c +
               *(int *)(*(int *)(param_1 + 0x1c) + uVar4 * 4);
      iVar10 = local_20 << 2;
      local_14 = (undefined4 *)(iVar13 + 0x54);
      local_1c = 4;
      do {
        iVar5 = (*pcVar11)(iVar10);
        piVar12 = (int *)((iVar10 - (1 << ((byte)iVar5 & 0x1f) & 0xfffffffeU)) * 0x7c +
                         *(int *)(*(int *)(in_ECX + 0x1c) + iVar5 * 4));
        *piVar12 = iVar13 + 0x10;
        uVar4 = (int)local_10 + iVar10 & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        piVar12[1] = *(int *)(iVar13 + 0x44 + uVar4 * 4) + 0x10;
        piVar12[2] = local_14[-0x15];
        piVar12[3] = local_14[-4] + 0x10;
        piVar12[0x15] = 0;
        piVar12[0x16] = 0;
        piVar12[0x17] = 0;
        piVar12[0x18] = 0;
        iVar5 = iVar13;
        if (*(int *)(iVar13 + 0x74) != 0) {
          iVar5 = *(int *)(iVar13 + 0x74);
        }
        piVar12[0x1d] = iVar5;
        piVar12[0x1e] = *(int *)(iVar13 + 0x78);
        *local_14 = piVar12;
        local_14 = local_14 + 1;
        iVar10 = iVar10 + 1;
        local_1c = local_1c + -1;
        pcVar11 = _Segment_index_of_exref;
      } while (local_1c != 0);
      local_10 = (int *)((int)local_10 + -4);
      uVar4 = *(uint *)(param_1 + 0x18);
      local_20 = local_20 + 1;
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(this);
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
    } while ((int)local_20 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  local_14 = (undefined4 *)0x0;
  uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(this);
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  if (0 < (int)uVar4) {
    do {
      pcVar11 = _Segment_index_of_exref;
      uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of((uint)local_14);
      iVar13 = ((int)local_14 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x7c +
               *(int *)(*(int *)(param_1 + 0x1c) + uVar4 * 4);
      local_20 = 3;
      local_10 = (int *)(iVar13 + 0x54);
      iVar10 = (int)local_14 << 2;
      local_1c = 4;
      do {
        iVar5 = (*pcVar11)(iVar10);
        piVar12 = (int *)((iVar10 - (1 << ((byte)iVar5 & 0x1f) & 0xfffffffeU)) * 0x4c +
                         *(int *)(*(int *)(in_ECX + 0x3c) + iVar5 * 4));
        *piVar12 = *local_10;
        uVar4 = local_20 & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        local_10 = local_10 + 1;
        piVar12[1] = *(int *)(iVar13 + 0x54 + uVar4 * 4);
        piVar12[2] = iVar13 + 0x10;
        piVar12[3] = *(int *)(iVar13 + 0x44 + uVar4 * 4) + 0x10;
        local_20 = local_20 + 1;
        *(int **)(*piVar12 + 0x44) = piVar12;
        iVar10 = iVar10 + 1;
        local_1c = local_1c + -1;
        *(int **)(piVar12[1] + 0x50) = piVar12;
        pcVar11 = _Segment_index_of_exref;
      } while (local_1c != 0);
      uVar4 = *(uint *)(param_1 + 0x18);
      local_14 = (undefined4 *)((int)local_14 + 1);
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(this);
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
    } while ((int)local_14 < (int)uVar4);
  }
  pcVar11 = _Internal_capacity_exref;
  uVar4 = *(uint *)(param_1 + 0x38);
  local_14 = (undefined4 *)0x0;
  uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(param_1 + 0x24));
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  if (0 < (int)uVar4) {
    do {
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of((uint)local_14);
      uVar4 = *(uint *)(param_1 + 0x18);
      piVar12 = (int *)(((int)local_14 - (1 << ((byte)uVar1 & 0x1f) & 0xfffffffeU)) * 0x4c +
                       *(int *)(*(int *)(param_1 + 0x3c) + uVar1 * 4));
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                        ((_Concurrent_vector_base_v4 *)(param_1 + 4));
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
      local_1c = 2;
      uVar4 = ((int)local_14 + uVar4 * 2) * 2;
      local_10 = piVar12 + 0x11;
      do {
        uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar4);
        piVar8 = (int *)((uVar4 - (1 << ((byte)uVar1 & 0x1f) & 0xfffffffeU)) * 0x4c +
                        *(int *)(*(int *)(in_ECX + 0x3c) + uVar1 * 4));
        piVar8[2] = (int)(piVar12 + 4);
        piVar8[3] = local_10[-0xf];
        *piVar8 = 0;
        piVar8[1] = 0;
        *local_10 = (int)piVar8;
        iVar10 = 0x54;
        do {
          if ((*piVar12 != 0) &&
             (iVar13 = *(int *)(iVar10 + *piVar12), *(int *)(iVar13 + 8) == piVar8[3])) {
            *piVar8 = iVar13;
            if (piVar8[2] == *(int *)(*(int *)(iVar10 + *piVar12) + 4)) {
              *(int **)(*(int *)(iVar10 + *piVar12) + 0x48) = piVar8;
            }
            if (piVar8[2] == *(int *)(*(int *)(iVar10 + *piVar12) + 0xc)) {
              *(int **)(*(int *)(iVar10 + *piVar12) + 0x4c) = piVar8;
            }
          }
          if ((piVar12[1] != 0) &&
             (iVar13 = *(int *)(iVar10 + piVar12[1]), *(int *)(iVar13 + 8) == piVar8[3])) {
            piVar8[1] = iVar13;
            if (piVar8[2] == *(int *)(*(int *)(iVar10 + piVar12[1]) + 4)) {
              *(int **)(*(int *)(iVar10 + piVar12[1]) + 0x48) = piVar8;
            }
            if (piVar8[2] == *(int *)(*(int *)(iVar10 + piVar12[1]) + 0xc)) {
              *(int **)(*(int *)(iVar10 + piVar12[1]) + 0x4c) = piVar8;
            }
          }
          iVar10 = iVar10 + 4;
        } while (iVar10 < 100);
        local_10 = local_10 + 1;
        uVar4 = uVar4 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      uVar4 = *(uint *)(param_1 + 0x38);
      local_14 = (undefined4 *)((int)local_14 + 1);
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(this_00);
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
      pcVar11 = _Internal_capacity_exref;
    } while ((int)local_14 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  uVar3 = (*pcVar11)();
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar6 = (*pcVar11)();
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar7 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(param_1 + 0x44));
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  if (uVar7 < uVar2) {
    uVar2 = uVar7;
  }
  if (uVar6 < uVar1) {
    uVar1 = uVar6;
  }
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_resize
            ((_Concurrent_vector_base_v4 *)(in_ECX + 0x44),uVar4 + uVar2 + uVar1,4,0x3fffffff,
             cube::Controller::vfunction12,FUN_00671290,(void *)0x0);
  uVar2 = 0;
  uVar4 = *(uint *)(param_1 + 0x58);
  local_14 = (undefined4 *)0x0;
  uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(param_1 + 0x44));
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  if (0 < (int)uVar4) {
    do {
      uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar2);
      iVar10 = *(int *)(*(int *)(in_ECX + 0x5c) + uVar4 * 4);
      iVar13 = uVar2 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU);
      uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of((uint)local_14);
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar10 + iVar13 * 4) =
           *(undefined4 *)
            (*(int *)(*(int *)(param_1 + 0x5c) + uVar4 * 4) +
            ((int)local_14 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 4);
      uVar4 = *(uint *)(param_1 + 0x58);
      local_14 = (undefined4 *)((int)local_14 + 1);
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                        ((_Concurrent_vector_base_v4 *)(param_1 + 0x44));
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
    } while ((int)local_14 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  local_20 = 0;
  uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(this_00);
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  if (0 < (int)uVar4) {
    do {
      uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(local_20);
      *(undefined1 *)
       ((local_20 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x4c + 0x40 +
       *(int *)(*(int *)(param_1 + 0x3c) + uVar4 * 4)) = 0;
      uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(local_20);
      iVar10 = *(int *)(*(int *)(param_1 + 0x3c) + uVar4 * 4);
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar2);
      *(uint *)(*(int *)(*(int *)(in_ECX + 0x5c) + uVar1 * 4) +
               (uVar2 - (1 << ((byte)uVar1 & 0x1f) & 0xfffffffeU)) * 4) =
           (local_20 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x4c + iVar10 + 0x10;
      uVar4 = *(uint *)(param_1 + 0x38);
      local_20 = local_20 + 1;
      uVar2 = uVar2 + 1;
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(this_00);
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
    } while ((int)local_20 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  local_20 = 0;
  uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(this);
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  if (0 < (int)uVar4) {
    do {
      uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(local_20);
      *(undefined1 *)
       ((local_20 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x7c + 0x40 +
       *(int *)(*(int *)(param_1 + 0x1c) + uVar4 * 4)) = 0;
      uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(local_20);
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + uVar4 * 4);
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar2);
      *(uint *)(*(int *)(*(int *)(in_ECX + 0x5c) + uVar1 * 4) +
               (uVar2 - (1 << ((byte)uVar1 & 0x1f) & 0xfffffffeU)) * 4) =
           (local_20 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x7c + iVar10 + 0x10;
      uVar4 = *(uint *)(param_1 + 0x18);
      local_20 = local_20 + 1;
      uVar2 = uVar2 + 1;
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(this);
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
    } while ((int)local_20 < (int)uVar4);
  }
  uVar2 = 0;
  uVar4 = *(uint *)(in_ECX + 0x38);
  uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 0x24));
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  if (0 < (int)uVar4) {
    do {
      uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar2);
      piVar12 = (int *)((uVar2 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x4c +
                       *(int *)(*(int *)(in_ECX + 0x3c) + uVar4 * 4));
      if ((*piVar12 == 0) || (piVar12[1] == 0)) {
        *(byte *)(piVar12[2] + 0x30) = *(byte *)(piVar12[2] + 0x30) | 1;
        *(byte *)(piVar12[3] + 0x30) = *(byte *)(piVar12[3] + 0x30) | 1;
      }
      uVar4 = *(uint *)(in_ECX + 0x38);
      uVar2 = uVar2 + 1;
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                        ((_Concurrent_vector_base_v4 *)(in_ECX + 0x24));
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
    } while ((int)uVar2 < (int)uVar4);
  }
  uVar2 = 0;
  uVar4 = *(uint *)(in_ECX + 0x58);
  uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 0x44));
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  if (0 < (int)uVar4) {
    do {
      uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar2);
      *(uint *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x5c) + uVar4 * 4) +
                        (uVar2 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 4) + 0x2c) = uVar2;
      uVar4 = *(uint *)(in_ECX + 0x58);
      uVar2 = uVar2 + 1;
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                        ((_Concurrent_vector_base_v4 *)(in_ECX + 0x44));
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
    } while ((int)uVar2 < (int)uVar4);
  }
  uVar4 = *(uint *)(in_ECX + 0x18);
  param_1 = 0;
  uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 4));
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  if (0 < (int)uVar4) {
    do {
      iVar10 = 0;
      do {
        uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(param_1);
        iVar5 = *(int *)(*(int *)(in_ECX + 0x1c) + uVar4 * 4);
        uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(param_1);
        iVar13 = iVar10 * 4;
        iVar9 = (param_1 - (1 << ((byte)uVar1 & 0x1f) & 0xfffffffeU)) * 0x1f + iVar10;
        iVar10 = iVar10 + 1;
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1c) + uVar1 * 4) + 100 + iVar9 * 4) =
             *(undefined4 *)
              (*(int *)((param_1 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x7c + iVar5 +
                       iVar13) + 0x2c);
      } while (iVar10 < 4);
      uVar4 = *(uint *)(in_ECX + 0x18);
      param_1 = param_1 + 1;
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                        ((_Concurrent_vector_base_v4 *)(in_ECX + 4));
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
    } while ((int)param_1 < (int)uVar4);
  }
  return;
}


/* FUN_00673010 @ 00673010  kind=gamemisc  attributed-by=caller-vote  size=115 */

void FUN_00673010(void)

{
  int *in_ECX;
  undefined4 local_9;
  undefined1 local_5;
  
  in_ECX[2] = in_ECX[1];
  in_ECX[8] = in_ECX[7];
  in_ECX[5] = in_ECX[4];
  in_ECX[0xe] = in_ECX[0xd];
  FUN_00639cf0(in_ECX[0x10],in_ECX[0x11],&local_5);
  in_ECX[0x11] = in_ECX[0x10];
  FUN_00639cf0(in_ECX[0x40],in_ECX[0x41],&local_5,local_9);
  in_ECX[0x41] = in_ECX[0x40];
  in_ECX[0x1a] = 0;
  (**(code **)(*in_ECX + 4))();
  return;
}


/* FUN_00674690 @ 00674690  kind=gamemisc  attributed-by=caller-vote  size=338 */

void FUN_00674690(float *param_1,float *param_2,float *param_3,char *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int in_ECX;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar5 = 0;
  if (0 < (int)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) & 0xfffffff8U)) {
    do {
      fVar2 = *(float *)(*(int *)(in_ECX + 4) + iVar5 * 8);
      fVar3 = *(float *)(*(int *)(in_ECX + 4) + 4 + iVar5 * 8);
      fVar6 = 1.0 / (fVar2 * param_3[3] + fVar3 * param_3[7] + param_3[0xf]);
      fVar7 = fVar6 * (param_3[4] * fVar3 + *param_3 * fVar2 + param_3[0xc]);
      fVar6 = fVar6 * (param_3[1] * fVar2 + param_3[5] * fVar3 + param_3[0xd]);
      local_10 = CONCAT44(fVar6,fVar7);
      if (*param_4 == '\0') {
        pfVar4 = (float *)&local_10;
        if (*param_1 <= fVar7) {
          pfVar4 = param_1;
        }
        pfVar1 = param_1 + 1;
        *param_1 = *pfVar4;
        pfVar4 = (float *)((int)&local_10 + 4);
        if (*pfVar1 <= fVar6) {
          pfVar4 = pfVar1;
        }
        *pfVar1 = *pfVar4;
        pfVar4 = (float *)&local_10;
        if (fVar7 < *param_2 || fVar7 == *param_2) {
          pfVar4 = param_2;
        }
        pfVar1 = param_2 + 1;
        *param_2 = *pfVar4;
        pfVar4 = (float *)((int)&local_10 + 4);
        if (fVar6 < *pfVar1 || fVar6 == *pfVar1) {
          pfVar4 = pfVar1;
        }
        *pfVar1 = *pfVar4;
      }
      else {
        *(undefined8 *)param_1 = local_10;
        *(undefined8 *)param_2 = local_10;
        *param_4 = '\0';
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006747f0 @ 006747f0  kind=gamemisc  attributed-by=caller-vote  size=373 */

uint FUN_006747f0(float *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int in_ECX;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  float fVar15;
  int local_c;
  
  fVar2 = *param_1;
  if ((((*(float *)(in_ECX + 0x110) <= fVar2) &&
       (fVar3 = param_1[1], *(float *)(in_ECX + 0x114) <= fVar3)) &&
      (fVar2 < *(float *)(in_ECX + 0x118) || fVar2 == *(float *)(in_ECX + 0x118))) &&
     (fVar3 < *(float *)(in_ECX + 0x11c) || fVar3 == *(float *)(in_ECX + 0x11c))) {
    puVar14 = *(uint **)(in_ECX + 0x100);
    iVar6 = (*(int *)(in_ECX + 0x104) - (int)puVar14) / 0xc;
    bVar11 = false;
    local_c = 0;
    iVar8 = iVar6;
    bVar7 = false;
    if (0 < iVar6) {
      do {
        bVar11 = bVar7;
        uVar13 = (int)(puVar14[1] - *puVar14) >> 2;
        if (0 < (int)uVar13) {
          iVar8 = *(int *)(in_ECX + 4);
          iVar12 = *(int *)(in_ECX + 8) - iVar8 >> 3;
          uVar10 = 0;
          do {
            uVar1 = uVar10 + 1;
            uVar9 = *puVar14;
            iVar5 = *(int *)(uVar9 + uVar10 * 4);
            if ((iVar12 <= iVar5) ||
               (uVar9 = *(uint *)(uVar9 + (uVar1 % uVar13) * 4), iVar12 <= (int)uVar9)) {
              return uVar9 & 0xffffff00;
            }
            fVar4 = *(float *)(iVar8 + 4 + iVar5 * 8);
            if ((((fVar4 < fVar3) && (fVar15 = *(float *)(iVar8 + 4 + uVar9 * 8), fVar3 <= fVar15))
                || ((fVar15 = *(float *)(iVar8 + 4 + uVar9 * 8), fVar15 < fVar3 && (fVar3 <= fVar4))
                   )) && (((fVar3 - fVar4) / (fVar15 - fVar4)) *
                          (*(float *)(iVar8 + uVar9 * 8) - *(float *)(iVar8 + iVar5 * 8)) +
                          *(float *)(iVar8 + iVar5 * 8) < fVar2)) {
              bVar11 = !bVar11;
            }
            uVar10 = uVar1;
          } while ((int)uVar1 < (int)uVar13);
        }
        iVar8 = local_c + 1;
        puVar14 = puVar14 + 3;
        local_c = iVar8;
        bVar7 = bVar11;
      } while (iVar8 < iVar6);
    }
    return CONCAT31((int3)((uint)iVar8 >> 8),bVar11);
  }
  return (uint)param_1 & 0xffffff00;
}


/* FUN_00674970 @ 00674970  kind=gamemisc  attributed-by=caller-vote  size=1378 */

void FUN_00674970(float *param_1,float param_2,float *param_3,float *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int **ppiVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_7c [7];
  bool local_75;
  int *local_74;
  int *local_70;
  float local_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  uint local_58;
  undefined8 local_54;
  float local_4c;
  float fStack_48;
  undefined8 local_44;
  float local_3c;
  float fStack_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  float local_1c;
  float fStack_18;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_7c;
  local_6c = param_4[4] * 0.0 + *param_4;
  fVar11 = *param_4 * 0.0 + param_4[4];
  local_70 = (int *)(param_4[5] * 0.0 + param_4[1]);
  fVar8 = param_4[1] * 0.0 + param_4[5];
  dVar10 = (double)(fVar8 * fVar8 + fVar11 * fVar11);
  local_68 = in_ECX;
  libm_sse2_sqrt_precise();
  local_74 = (int *)(float)dVar10;
  dVar10 = (double)((float)local_70 * (float)local_70 + local_6c * local_6c);
  libm_sse2_sqrt_precise();
  local_70 = (int *)(float)dVar10;
  ppiVar5 = &local_74;
  if ((float)local_74 <= (float)dVar10) {
    ppiVar5 = &local_70;
  }
  fVar14 = (float)*ppiVar5 * param_2;
  fVar8 = param_1[1];
  fVar11 = *param_1;
  fVar9 = 1.0 / (param_4[3] * fVar11 + param_4[7] * fVar8 + param_4[0xf]);
  fVar13 = (fVar11 * *param_4 + fVar8 * param_4[4] + param_4[0xc]) * fVar9;
  fVar9 = (fVar11 * param_4[1] + fVar8 * param_4[5] + param_4[0xd]) * fVar9;
  if ((((*(float *)(in_ECX + 0x110) <= fVar13 + fVar14) &&
       (*(float *)(in_ECX + 0x114) <= fVar9 + fVar14)) &&
      (fVar13 = fVar13 - fVar14,
      fVar13 < *(float *)(in_ECX + 0x118) || fVar13 == *(float *)(in_ECX + 0x118))) &&
     (fVar9 = fVar9 - fVar14,
     fVar9 < *(float *)(in_ECX + 0x11c) || fVar9 == *(float *)(in_ECX + 0x11c))) {
    local_74 = *(int **)(in_ECX + 0x100);
    local_60 = (*(int *)(local_68 + 0x104) - (int)local_74) / 0xc;
    local_75 = false;
    local_70 = (int *)0x0;
    if (0 < local_60) {
      do {
        local_58 = local_74[1] - *local_74 >> 2;
        if (0 < (int)local_58) {
          local_5c = *(int *)(local_68 + 4);
          iVar7 = *(int *)(local_68 + 8) - local_5c >> 3;
          uVar6 = 0;
          do {
            uVar1 = uVar6 + 1;
            iVar3 = *(int *)(*local_74 + uVar6 * 4);
            if ((iVar7 <= iVar3) ||
               (iVar4 = *(int *)(*local_74 + (uVar1 % local_58) * 4), iVar7 <= iVar4))
            goto LAB_00674ebc;
            fVar8 = *(float *)(local_5c + 4 + iVar3 * 8);
            fVar11 = *(float *)(local_5c + iVar3 * 8);
            local_3c = *param_3 * fVar11 + param_3[4] * fVar8 + param_3[0xc];
            fVar9 = *(float *)(local_5c + iVar4 * 8);
            fStack_38 = param_3[1] * fVar11 + param_3[5] * fVar8 + param_3[0xd];
            local_2c = CONCAT44(fStack_38,local_3c);
            local_64 = 1.0 / (param_3[7] * fVar8 + fVar11 * param_3[3] + param_3[0xf]);
            fVar8 = *(float *)(local_5c + 4 + iVar4 * 8);
            fVar11 = local_64 * fStack_38;
            local_64 = local_64 * local_3c;
            fVar13 = 1.0 / (fVar9 * param_3[3] + fVar8 * param_3[7] + param_3[0xf]);
            local_1c = fVar9 * *param_3 + fVar8 * param_3[4] + param_3[0xc];
            fStack_18 = fVar9 * param_3[1] + fVar8 * param_3[5] + param_3[0xd];
            fVar14 = fVar13 * local_1c;
            fVar13 = fVar13 * fStack_18;
            local_44._0_4_ = (float)*(undefined8 *)param_1;
            local_44._4_4_ = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
            local_44._0_4_ = (float)local_44 - local_64;
            _local_4c = CONCAT44(fVar13,fVar14);
            fVar9 = fVar14 - local_64;
            local_44._4_4_ = local_44._4_4_ - fVar11;
            fVar8 = fVar13 - fVar11;
            local_54 = CONCAT44(fVar8,fVar9);
            local_6c = fVar8 * fVar8 + fVar9 * fVar9;
            if (1e-20 <= local_6c) {
              fVar12 = (local_44._4_4_ * fVar8 + (float)local_44 * fVar9) / local_6c;
              if (0.0 < fVar12) {
                if (fVar12 < 1.0) {
                  local_24 = local_54;
                  local_14 = local_44;
                  fVar9 = (float)local_44 - fVar9 * fVar12;
                  fVar8 = local_44._4_4_ - fVar8 * fVar12;
                }
                else {
                  uVar2 = *(undefined8 *)param_1;
                  local_34._0_4_ = (float)uVar2;
                  local_34._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                  fVar9 = (float)local_34 - fVar14;
                  fVar8 = local_34._4_4_ - fVar13;
                  local_34 = uVar2;
                }
                fVar8 = fVar8 * fVar8 + fVar9 * fVar9;
              }
              else {
                fVar8 = local_44._4_4_ * local_44._4_4_ + (float)local_44 * (float)local_44;
              }
            }
            else {
              fVar8 = local_44._4_4_ * local_44._4_4_ + (float)local_44 * (float)local_44;
            }
            if (fVar8 <= param_2 * param_2) {
              __security_check_cookie(local_c ^ (uint)auStack_7c);
              return;
            }
            fVar8 = param_1[1];
            if ((((fVar11 < fVar8) && (fVar8 <= fVar13)) || ((fVar13 < fVar8 && (fVar8 <= fVar11))))
               && (((fVar8 - fVar11) / (fVar13 - fVar11)) * (fVar14 - local_64) + local_64 <
                   *param_1)) {
              local_75 = local_75 == false;
            }
            uVar6 = uVar1;
          } while ((int)uVar1 < (int)local_58);
        }
        local_70 = (int *)((int)local_70 + 1);
        local_74 = local_74 + 3;
      } while ((int)local_70 < local_60);
    }
    __security_check_cookie(local_c ^ (uint)auStack_7c);
    return;
  }
LAB_00674ebc:
  __security_check_cookie(local_c ^ (uint)auStack_7c);
  return;
}


/* FUN_00674f80 @ 00674f80  kind=gamemisc  attributed-by=caller-vote  size=580 */

void FUN_00674f80(void)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  uVar3 = *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 3;
  if ((uint)(*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4) >> 3) < uVar3) {
    if (0x1fffffff < uVar3) {
LAB_00674fad:
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_00428ac0(uVar3);
  }
  uVar3 = *(int *)(in_ECX + 0x20) - *(int *)(in_ECX + 0x1c) >> 4;
  if ((uint)(*(int *)(in_ECX + 0x24) - *(int *)(in_ECX + 0x1c) >> 4) < uVar3) {
    if (0xfffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_00428ba0(uVar3);
  }
  uVar3 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) >> 3;
  if ((uint)(*(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x10) >> 3) < uVar3) {
    if (0x1fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_00428ac0(uVar3);
  }
  uVar3 = *(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x34) >> 2;
  if ((uint)(*(int *)(in_ECX + 0x3c) - *(int *)(in_ECX + 0x34) >> 2) < uVar3) {
    if (0x3fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_0063da20(uVar3);
  }
  piVar5 = (int *)(in_ECX + 0x40);
  uVar3 = (*(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x40)) / 0xc;
  if ((uint)((*(int *)(in_ECX + 0x48) - *piVar5) / 0xc) < uVar3) {
    if (0x15555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_0063db90(uVar3);
  }
  iVar2 = 0;
  if (0 < (*(int *)(in_ECX + 0x44) - *piVar5) / 0xc) {
    iVar4 = 0;
    do {
      piVar1 = (int *)(*piVar5 + iVar4);
      uVar3 = piVar1[1] - *piVar1 >> 2;
      if ((uint)(piVar1[2] - *piVar1 >> 2) < uVar3) {
        if (0x3fffffff < uVar3) goto LAB_00674fad;
        FUN_0063da20(uVar3);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < (*(int *)(in_ECX + 0x44) - *piVar5) / 0xc);
  }
  piVar5 = (int *)(in_ECX + 0x100);
  uVar3 = (*(int *)(in_ECX + 0x104) - *piVar5) / 0xc;
  if ((uint)((*(int *)(in_ECX + 0x108) - *piVar5) / 0xc) < uVar3) {
    if (0x15555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_0063db90(uVar3);
  }
  iVar2 = 0;
  if (0 < (*(int *)(in_ECX + 0x104) - *piVar5) / 0xc) {
    iVar4 = 0;
    do {
      piVar1 = (int *)(*piVar5 + iVar4);
      uVar3 = piVar1[1] - *piVar1 >> 2;
      if ((uint)(piVar1[2] - *piVar1 >> 2) < uVar3) {
        if (0x3fffffff < uVar3) goto LAB_00674fad;
        FUN_0063da20(uVar3);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < (*(int *)(in_ECX + 0x104) - *piVar5) / 0xc);
  }
  return;
}


/* FUN_006758f0 @ 006758f0  kind=gamemisc  attributed-by=caller-vote  size=6499 */

void FUN_006758f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int in_ECX;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 *puVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int local_170;
  int local_16c;
  int *local_168;
  int local_164 [2];
  float local_15c;
  float local_158;
  float local_154;
  int local_150;
  int local_14c;
  float local_148;
  int *local_144;
  undefined8 local_140;
  float local_138;
  undefined8 *local_134;
  uint *local_130;
  uint *local_12c;
  uint local_128;
  uint *local_124;
  undefined4 *local_120;
  int *local_11c;
  undefined4 *local_118;
  uint local_114;
  undefined4 *local_110;
  int local_10c;
  int local_108;
  undefined8 local_104;
  undefined4 local_fc;
  float fStack_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  float fStack_e8;
  float local_e4;
  undefined4 *puStack_e0;
  float local_dc;
  float fStack_d8;
  float local_d4;
  undefined4 *puStack_d0;
  float local_cc;
  undefined4 *puStack_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  float local_b4;
  float fStack_b0;
  float local_ac;
  float fStack_a8;
  undefined8 local_a4;
  float local_9c;
  float fStack_98;
  float local_94;
  float local_90;
  undefined4 *puStack_8c;
  float local_88;
  undefined8 local_84;
  undefined8 local_7c;
  float local_74;
  float fStack_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  float local_48 [4];
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  int *local_20;
  int *piStack_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8328;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_144 = (int *)(in_ECX + 4);
  local_10c = in_ECX;
  FUN_0063d170(local_144);
  local_130 = (uint *)(in_ECX + 0xdc);
  FUN_0063d400((int *)(in_ECX + 0x1c));
  local_124 = (uint *)(in_ECX + 0xd0);
  FUN_0063d170((int *)(in_ECX + 0x10));
  puVar18 = (uint *)(in_ECX + 0xe8);
  local_12c = puVar18;
  FUN_0042bf80(*(int *)(in_ECX + 200) - *(int *)(in_ECX + 0xc4) >> 3);
  iVar20 = local_10c;
  iVar14 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0xec) - *puVar18 & 0xfffffff0)) {
    local_48[0] = 0.0;
    local_48[1] = 0.0;
    local_48[2] = 0.0;
    local_48[3] = 0.0;
    iVar12 = 0;
    do {
      uVar16 = *puVar18;
      iVar14 = iVar14 + 1;
      puVar11 = (undefined4 *)(uVar16 + iVar12);
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined8 *)(uVar16 + 8 + iVar12) = 0;
      iVar12 = iVar12 + 0x10;
    } while (iVar14 < (int)(*(int *)(in_ECX + 0xec) - *puVar18) >> 4);
  }
  local_150 = local_10c + 0xf4;
  piVar13 = (int *)(local_10c + 0x34);
  FUN_0067a7b0(piVar13);
  if (*(int *)(iVar20 + 0x100) != *(int *)(iVar20 + 0x104)) {
    iVar14 = 0;
    fVar23 = 0.0;
    local_154 = 0.0;
    if (0 < (int)(*(int *)(iVar20 + 0x38) - *piVar13 & 0xfffffffcU)) {
      iVar12 = *local_144;
      local_6c = 0.0;
      local_18 = (int *)0x0;
      piVar15 = (int *)(*piVar13 + 8);
      do {
        iVar14 = iVar14 + 3;
        fVar21 = *(float *)(iVar12 + piVar15[-2] * 8);
        fVar22 = *(float *)(iVar12 + 4 + piVar15[-2] * 8);
        local_74 = *(float *)(iVar12 + piVar15[-1] * 8);
        fStack_70 = *(float *)(iVar12 + 4 + piVar15[-1] * 8);
        local_20 = *(int **)(iVar12 + *piVar15 * 8);
        piStack_1c = *(int **)(iVar12 + 4 + *piVar15 * 8);
        local_38 = CONCAT44(piStack_1c,local_20);
        local_30 = 0.0;
        local_2c = CONCAT44(fStack_70,local_74);
        local_24 = 0.0;
        fVar23 = fVar23 + ((local_74 - fVar21) * ((float)piStack_1c - fVar22) -
                          ((float)local_20 - fVar21) * (fStack_70 - fVar22));
        piVar15 = piVar15 + 3;
        local_154 = fVar23;
      } while (iVar14 < *(int *)(iVar20 + 0x38) - *piVar13 >> 2);
    }
    local_164[1] = 0;
    iVar20 = local_10c;
    if (0 < (*(int *)(local_10c + 0x104) - *(int *)(local_10c + 0x100)) / 0xc) {
      do {
        iVar14 = *(int *)(iVar20 + 0x100);
        local_108 = local_164[1] * 0xc;
        if (2 < (uint)(*(int *)(local_108 + 4 + iVar14) - *(int *)(local_108 + iVar14) >> 2)) {
          local_20 = (int *)0x0;
          local_168 = (int *)0x0;
          piStack_1c = (int *)0x0;
          local_18 = (int *)0x0;
          local_8 = 0;
          local_128 = 0;
          if (0 < (int)(*(int *)(local_108 + 4 + iVar14) - *(int *)(local_108 + iVar14) &
                       0xfffffffcU)) {
            fVar23 = -local_154;
            local_158 = 0.0;
            do {
              local_11c = *(int **)(local_10c + 0x100);
              uVar16 = ((*(int *)(local_108 + 4 + (int)local_11c) -
                         *(int *)(local_108 + (int)local_11c) >> 2) + (local_128 - 1)) %
                       (uint)(*(int *)(local_108 + 4 + (int)local_11c) -
                              *(int *)(local_108 + (int)local_11c) >> 2);
              local_114 = local_128 + 1;
              uVar17 = local_114 %
                       (uint)(*(int *)(local_108 + 4 + (int)local_11c) -
                              *(int *)(local_108 + (int)local_11c) >> 2);
              local_110 = *(undefined4 **)(local_108 + (int)local_11c);
              local_134 = (undefined8 *)
                          (*local_144 +
                          local_110[local_128 %
                                    (uint)(*(int *)(local_108 + 4 + (int)local_11c) -
                                           *(int *)(local_108 + (int)local_11c) >> 2)] * 8);
              puVar8 = (undefined8 *)
                       (local_110[local_128 %
                                  (uint)(*(int *)(local_108 + 4 + (int)local_11c) -
                                         *(int *)(local_108 + (int)local_11c) >> 2)] * 0x10 +
                       *(int *)(in_ECX + 0x1c));
              local_120 = (undefined4 *)
                          (*(int *)(in_ECX + 0x10) +
                          local_110[local_128 %
                                    (uint)(*(int *)(local_108 + 4 + (int)local_11c) -
                                           *(int *)(local_108 + (int)local_11c) >> 2)] * 8);
              iVar20 = *(int *)(*(int *)(local_108 + (int)local_11c) + uVar16 * 4);
              uVar1 = *local_134;
              local_c4._0_4_ = (float)uVar1;
              local_c4._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              local_c4._4_4_ = local_c4._4_4_ - *(float *)(*local_144 + 4 + iVar20 * 8);
              local_c4._0_4_ = (float)local_c4 - *(float *)(*local_144 + iVar20 * 8);
              local_118 = (undefined4 *)(local_158 - (float)local_c4 * fVar23);
              local_148 = local_c4._4_4_ * fVar23 - local_158;
              local_24 = (float)local_c4 * 0.0 - local_c4._4_4_ * 0.0;
              local_2c = CONCAT44(local_118,local_148);
              fVar21 = (float)local_118 * (float)local_118 + local_148 * local_148 +
                       local_24 * local_24;
              for (local_138 = 0.0;
                  ((fVar21 < 1e-12 && (uVar16 != local_128)) && ((int)local_138 < 10));
                  local_138 = (float)((int)local_138 + 1)) {
                uVar16 = ((*(int *)(local_108 + 4 + (int)local_11c) -
                           *(int *)(local_108 + (int)local_11c) >> 2) + (uVar16 - 1)) %
                         (uint)(*(int *)(local_108 + 4 + (int)local_11c) -
                                *(int *)(local_108 + (int)local_11c) >> 2);
                iVar20 = *(int *)(*(int *)(local_108 + (int)local_11c) + uVar16 * 4);
                uVar2 = *local_134;
                local_bc._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                local_bc._4_4_ = local_bc._4_4_ - *(float *)(*local_144 + 4 + iVar20 * 8);
                local_bc._0_4_ = (float)uVar2;
                local_bc._0_4_ = (float)local_bc - *(float *)(*local_144 + iVar20 * 8);
                local_148 = local_bc._4_4_ * fVar23 - local_158;
                local_118 = (undefined4 *)(local_158 - (float)local_bc * fVar23);
                local_2c = CONCAT44(local_118,local_148);
                local_24 = (float)local_bc * 0.0 - local_bc._4_4_ * 0.0;
                fVar21 = (float)local_118 * (float)local_118 + local_148 * local_148 +
                         local_24 * local_24;
                local_bc = uVar2;
                local_90 = local_148;
                puStack_8c = local_118;
                local_88 = local_24;
              }
              local_140 = CONCAT44(local_24,(undefined4)local_140);
              iVar20 = *(int *)(*(int *)(local_108 + (int)local_11c) + uVar17 * 4);
              uVar2 = *local_134;
              local_a4._0_4_ = (float)uVar2;
              local_a4._0_4_ = (float)local_a4 - *(float *)(*local_144 + iVar20 * 8);
              local_a4._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
              local_a4._4_4_ = local_a4._4_4_ - *(float *)(*local_144 + 4 + iVar20 * 8);
              local_15c = local_a4._4_4_ * local_154 - local_158;
              local_138 = local_158 - (float)local_a4 * local_154;
              local_30 = (float)local_a4 * 0.0 - local_a4._4_4_ * 0.0;
              local_38 = CONCAT44(local_138,local_15c);
              fVar21 = local_138 * local_138 + local_15c * local_15c + local_30 * local_30;
              for (local_14c = 0; ((fVar21 < 1e-12 && (uVar17 != local_128)) && (local_14c < 10));
                  local_14c = local_14c + 1) {
                uVar17 = (uVar17 + 1) %
                         (uint)(*(int *)(local_108 + 4 + (int)local_11c) -
                                *(int *)(local_108 + (int)local_11c) >> 2);
                fStack_70 = (float)*local_134;
                local_6c = (float)((ulonglong)*local_134 >> 0x20);
                iVar20 = *(int *)(*(int *)(local_108 + (int)local_11c) + uVar17 * 4);
                fVar22 = fStack_70 - *(float *)(*local_144 + iVar20 * 8);
                fVar21 = local_6c - *(float *)(*local_144 + 4 + iVar20 * 8);
                local_138 = local_158 - fVar22 * fVar23;
                local_15c = fVar21 * fVar23 - local_158;
                local_30 = fVar22 * 0.0 - fVar21 * 0.0;
                local_38 = CONCAT44(local_138,local_15c);
                fVar21 = local_138 * local_138 + local_15c * local_15c + local_30 * local_30;
                local_9c = local_15c;
                fStack_98 = local_138;
                local_94 = local_30;
              }
              if ((float)local_118 * (float)local_118 + local_148 * local_148 + local_24 * local_24
                  <= 0.0) {
                local_2c._4_4_ = (undefined4 *)((ulonglong)local_38 >> 0x20);
                local_2c._0_4_ = (float)local_38;
                local_118 = local_2c._4_4_;
                local_148 = (float)local_2c;
                local_2c = local_38;
                local_24 = local_30;
              }
              if (local_138 * local_138 + local_15c * local_15c + local_30 * local_30 <= 0.0) {
                local_38 = local_2c;
                uVar7 = local_38;
                local_38._4_4_ = (float)((ulonglong)local_2c >> 0x20);
                local_38._0_4_ = (float)local_2c;
                local_30 = local_24;
                local_138 = local_38._4_4_;
                local_15c = (float)local_38;
                local_38 = uVar7;
              }
              piVar13 = local_110 +
                        local_128 %
                        (uint)(*(int *)(local_108 + 4 + (int)local_11c) -
                               *(int *)(local_108 + (int)local_11c) >> 2);
              local_168 = piStack_1c;
              local_c4 = uVar1;
              local_a4 = uVar2;
              if (0.0 <= local_138 * (float)local_118 + local_15c * local_148 + local_30 * local_24)
              {
                FUN_0066add0(piVar13);
                local_140 = CONCAT44(*(int *)(local_10c + 200) - *(int *)(local_10c + 0xc4) >> 3,
                                     (undefined4)local_140);
                FUN_0066add0((int)&local_140 + 4);
                FUN_00642590(local_134);
                local_f4 = *puVar8;
                fStack_e8 = (float)((ulonglong)puVar8[1] >> 0x20);
                _local_ec = CONCAT44(fStack_e8 * 0.0,(int)puVar8[1]);
                FUN_0042bd20(&local_f4);
                FUN_00642590(local_120);
                local_e4 = local_148;
                local_dc = local_15c;
                puStack_e0 = local_118;
                fStack_d8 = local_138;
                pfVar10 = local_48;
                local_48[1] = (float)local_118 * -1.0;
                local_48[0] = local_148 * -1.0;
                local_48[3] = local_138 * -1.0;
                local_48[2] = local_15c * -1.0;
              }
              else {
                if ((piVar13 < piStack_1c) && (local_20 <= piVar13)) {
                  local_11c = (int *)((int)piVar13 - (int)local_20 >> 2);
                  if ((piStack_1c == local_18) && ((int)local_18 - (int)piStack_1c >> 2 == 0)) {
                    iVar20 = (int)piStack_1c - (int)local_20 >> 2;
                    if (iVar20 == 0x3fffffff) goto LAB_00677238;
                    uVar16 = (int)local_18 - (int)local_20 >> 2;
                    uVar17 = iVar20 + 1;
                    if (0x3fffffff - (uVar16 >> 1) < uVar16) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uVar16 + (uVar16 >> 1);
                    }
                    if (uVar16 < uVar17) {
                      uVar16 = uVar17;
                    }
                    FUN_0063da20(uVar16);
                  }
                  if (piStack_1c != (int *)0x0) {
                    iVar20 = local_20[(int)local_11c];
LAB_0067631a:
                    *piStack_1c = iVar20;
                  }
                }
                else {
                  local_11c = piVar13;
                  if ((piStack_1c == local_18) && ((int)local_18 - (int)piStack_1c >> 2 == 0)) {
                    iVar20 = (int)piStack_1c - (int)local_20 >> 2;
                    if (iVar20 == 0x3fffffff) goto LAB_00677238;
                    uVar16 = (int)local_18 - (int)local_20 >> 2;
                    uVar17 = iVar20 + 1;
                    if (0x3fffffff - (uVar16 >> 1) < uVar16) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uVar16 + (uVar16 >> 1);
                    }
                    if (uVar16 < uVar17) {
                      uVar16 = uVar17;
                    }
                    FUN_0063da20(uVar16);
                  }
                  if (piStack_1c != (int *)0x0) {
                    iVar20 = *local_11c;
                    goto LAB_0067631a;
                  }
                }
                piStack_1c = piStack_1c + 1;
                iVar20 = *(int *)(local_10c + 200) - *(int *)(local_10c + 0xc4) >> 3;
                local_170 = iVar20;
                if ((&local_170 < piStack_1c) && (local_20 <= &local_170)) {
                  iVar20 = (int)&local_170 - (int)local_20;
                  if ((piStack_1c == local_18) && ((int)local_18 - (int)piStack_1c >> 2 == 0)) {
                    iVar14 = (int)piStack_1c - (int)local_20 >> 2;
                    if (iVar14 == 0x3fffffff) goto LAB_00677238;
                    uVar16 = (int)local_18 - (int)local_20 >> 2;
                    uVar17 = iVar14 + 1;
                    if (0x3fffffff - (uVar16 >> 1) < uVar16) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uVar16 + (uVar16 >> 1);
                    }
                    if (uVar16 < uVar17) {
                      uVar16 = uVar17;
                    }
                    FUN_0063da20(uVar16);
                  }
                  if (piStack_1c != (int *)0x0) {
                    *piStack_1c = local_20[iVar20 >> 2];
                  }
                }
                else {
                  if ((piStack_1c == local_18) && ((int)local_18 - (int)piStack_1c >> 2 == 0)) {
                    iVar14 = (int)piStack_1c - (int)local_20 >> 2;
                    if (iVar14 == 0x3fffffff) goto LAB_00677238;
                    uVar16 = (int)local_18 - (int)local_20 >> 2;
                    uVar17 = iVar14 + 1;
                    if (0x3fffffff - (uVar16 >> 1) < uVar16) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uVar16 + (uVar16 >> 1);
                    }
                    if (uVar16 < uVar17) {
                      uVar16 = uVar17;
                    }
                    FUN_0063da20(uVar16);
                  }
                  if (piStack_1c != (int *)0x0) {
                    *piStack_1c = iVar20;
                  }
                }
                piStack_1c = piStack_1c + 1;
                puVar3 = *(undefined8 **)(local_10c + 200);
                if (local_134 < puVar3) {
                  puVar4 = *(undefined8 **)(local_10c + 0xc4);
                  local_140 = CONCAT44(puVar4,(undefined4)local_140);
                  if (local_134 < puVar4) goto LAB_00676507;
                  puVar5 = *(undefined8 **)(local_10c + 0xcc);
                  local_110 = (undefined4 *)((int)local_134 - *(int *)(local_10c + 0xc4) >> 3);
                  if ((puVar3 == puVar5) && ((int)puVar5 - (int)puVar3 >> 3 == 0)) {
                    iVar20 = (int)puVar3 - (int)puVar4 >> 3;
                    if (iVar20 == 0x1fffffff) goto LAB_00677238;
                    uVar17 = (int)puVar5 - (int)puVar4 >> 3;
                    uVar16 = iVar20 + 1;
                    if (0x1fffffff - (uVar17 >> 1) < uVar17) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = uVar17 + (uVar17 >> 1);
                    }
                    if (uVar17 < uVar16) {
                      uVar17 = uVar16;
                    }
                    FUN_00428ac0(uVar17);
                  }
                  puVar11 = *(undefined4 **)(local_10c + 200);
                  if (puVar11 != (undefined4 *)0x0) {
                    iVar20 = *(int *)(local_10c + 0xc4);
                    *puVar11 = *(undefined4 *)(iVar20 + (int)local_110 * 8);
                    uVar9 = *(undefined4 *)(iVar20 + 4 + (int)local_110 * 8);
                    goto LAB_0067659b;
                  }
                }
                else {
LAB_00676507:
                  puVar4 = *(undefined8 **)(local_10c + 0xcc);
                  if ((puVar3 == puVar4) && ((int)puVar4 - (int)puVar3 >> 3 == 0)) {
                    iVar20 = (int)puVar3 - *(int *)(local_10c + 0xc4) >> 3;
                    if (iVar20 == 0x1fffffff) goto LAB_00677238;
                    uVar17 = iVar20 + 1;
                    uVar16 = (int)puVar4 - *(int *)(local_10c + 0xc4) >> 3;
                    local_140 = CONCAT44(uVar17,(undefined4)local_140);
                    if (0x1fffffff - (uVar16 >> 1) < uVar16) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uVar16 + (uVar16 >> 1);
                    }
                    if (uVar16 < uVar17) {
                      uVar16 = uVar17;
                    }
                    FUN_00428ac0(uVar16);
                  }
                  puVar11 = *(undefined4 **)(local_10c + 200);
                  if (puVar11 != (undefined4 *)0x0) {
                    *puVar11 = *(undefined4 *)local_134;
                    uVar9 = *(undefined4 *)((int)local_134 + 4);
LAB_0067659b:
                    puVar11[1] = uVar9;
                  }
                }
                *(int *)(local_10c + 200) = *(int *)(local_10c + 200) + 8;
                local_140 = *puVar8;
                local_7c._4_4_ = (float)((ulonglong)puVar8[1] >> 0x20);
                puVar3 = (undefined8 *)local_130[1];
                local_7c = CONCAT44(local_7c._4_4_ * 0.0,(int)puVar8[1]);
                local_84 = local_140;
                if ((&local_84 < puVar3) && ((undefined8 *)*local_130 <= &local_84)) {
                  local_110 = (undefined4 *)((int)&local_84 - (int)*local_130 >> 4);
                  puVar4 = *(undefined8 **)(local_10c + 0xe4);
                  if ((puVar3 == puVar4) && ((int)puVar4 - (int)puVar3 >> 4 == 0)) {
                    iVar20 = (int)((int)puVar3 - *local_130) >> 4;
                    if (iVar20 == 0xfffffff) goto LAB_00677238;
                    uVar17 = (int)((int)puVar4 - *local_130) >> 4;
                    uVar16 = iVar20 + 1;
                    if (0xfffffff - (uVar17 >> 1) < uVar17) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = uVar17 + (uVar17 >> 1);
                    }
                    if (uVar17 < uVar16) {
                      uVar17 = uVar16;
                    }
                    FUN_00428ba0(uVar17);
                  }
                  local_110 = (undefined4 *)((int)local_110 * 0x10 + *local_130);
                  puVar11 = (undefined4 *)local_130[1];
                  if (puVar11 != (undefined4 *)0x0) {
                    *puVar11 = *local_110;
                    puVar11[1] = local_110[1];
                    puVar11[2] = local_110[2];
                    puVar11[3] = local_110[3];
                  }
                }
                else {
                  puVar4 = (undefined8 *)local_130[2];
                  if ((puVar3 == puVar4) && ((int)puVar4 - (int)puVar3 >> 4 == 0)) {
                    iVar20 = (int)((int)puVar3 - *local_130) >> 4;
                    if (iVar20 == 0xfffffff) goto LAB_00677238;
                    uVar17 = (int)((int)puVar4 - *local_130) >> 4;
                    uVar16 = iVar20 + 1;
                    if (0xfffffff - (uVar17 >> 1) < uVar17) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = uVar17 + (uVar17 >> 1);
                    }
                    if (uVar17 < uVar16) {
                      uVar17 = uVar16;
                    }
                    FUN_00428ba0(uVar17);
                  }
                  puVar3 = (undefined8 *)local_130[1];
                  if (puVar3 != (undefined8 *)0x0) {
                    *puVar3 = local_140;
                    puVar3[1] = local_7c;
                  }
                }
                local_130[1] = local_130[1] + 0x10;
                puVar11 = (undefined4 *)local_124[1];
                if ((local_120 < puVar11) && ((undefined4 *)*local_124 <= local_120)) {
                  local_110 = (undefined4 *)((int)local_120 - (int)*local_124 >> 3);
                  puVar19 = *(undefined4 **)(local_10c + 0xd8);
                  if ((puVar11 == puVar19) && ((int)puVar19 - (int)puVar11 >> 3 == 0)) {
                    iVar20 = (int)((int)puVar11 - *local_124) >> 3;
                    if (iVar20 == 0x1fffffff) goto LAB_00677238;
                    uVar17 = (int)((int)puVar19 - *local_124) >> 3;
                    uVar16 = iVar20 + 1;
                    if (0x1fffffff - (uVar17 >> 1) < uVar17) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = uVar17 + (uVar17 >> 1);
                    }
                    if (uVar17 < uVar16) {
                      uVar17 = uVar16;
                    }
                    FUN_00428ac0(uVar17);
                  }
                  uVar16 = *local_124;
                  puVar11 = (undefined4 *)local_124[1];
                  if (puVar11 != (undefined4 *)0x0) {
                    *puVar11 = *(undefined4 *)(uVar16 + (int)local_110 * 8);
                    uVar9 = *(undefined4 *)(uVar16 + 4 + (int)local_110 * 8);
LAB_006768a0:
                    puVar11[1] = uVar9;
                  }
                }
                else {
                  puVar19 = (undefined4 *)local_124[2];
                  if ((puVar11 == puVar19) && ((int)puVar19 - (int)puVar11 >> 3 == 0)) {
                    iVar20 = (int)((int)puVar11 - *local_124) >> 3;
                    if (iVar20 == 0x1fffffff) goto LAB_00677238;
                    uVar17 = (int)((int)puVar19 - *local_124) >> 3;
                    uVar16 = iVar20 + 1;
                    if (0x1fffffff - (uVar17 >> 1) < uVar17) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = uVar17 + (uVar17 >> 1);
                    }
                    if (uVar17 < uVar16) {
                      uVar17 = uVar16;
                    }
                    FUN_00428ac0(uVar17);
                  }
                  puVar11 = (undefined4 *)local_124[1];
                  if (puVar11 != (undefined4 *)0x0) {
                    *puVar11 = *local_120;
                    uVar9 = local_120[1];
                    goto LAB_006768a0;
                  }
                }
                local_d4 = local_148;
                local_cc = local_148;
                local_124[1] = local_124[1] + 8;
                puStack_d0 = local_118;
                puStack_c8 = local_118;
                puVar3 = (undefined8 *)local_12c[1];
                local_58 = CONCAT44((float)local_118 * -1.0,local_148 * -1.0);
                local_50 = CONCAT44((float)local_118 * -1.0,local_148 * -1.0);
                if ((&local_58 < puVar3) && ((undefined8 *)*local_12c <= &local_58)) {
                  local_118 = (undefined4 *)((int)&local_58 - (int)*local_12c >> 4);
                  puVar4 = *(undefined8 **)(local_10c + 0xf0);
                  if ((puVar3 == puVar4) && ((int)puVar4 - (int)puVar3 >> 4 == 0)) {
                    iVar20 = (int)((int)puVar3 - *local_12c) >> 4;
                    if (iVar20 == 0xfffffff) goto LAB_00677238;
                    uVar17 = (int)((int)puVar4 - *local_12c) >> 4;
                    uVar16 = iVar20 + 1;
                    if (0xfffffff - (uVar17 >> 1) < uVar17) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = uVar17 + (uVar17 >> 1);
                    }
                    if (uVar17 < uVar16) {
                      uVar17 = uVar16;
                    }
                    FUN_00428ba0(uVar17);
                  }
                  local_118 = (undefined4 *)((int)local_118 * 0x10 + *local_12c);
                  puVar11 = (undefined4 *)local_12c[1];
                  if (puVar11 != (undefined4 *)0x0) {
                    *puVar11 = *local_118;
                    puVar11[1] = local_118[1];
                    puVar11[2] = local_118[2];
                    puVar11[3] = local_118[3];
                  }
                }
                else {
                  puVar4 = (undefined8 *)local_12c[2];
                  if ((puVar3 == puVar4) && ((int)puVar4 - (int)puVar3 >> 4 == 0)) {
                    iVar20 = (int)((int)puVar3 - *local_12c) >> 4;
                    if (iVar20 == 0xfffffff) goto LAB_00677238;
                    uVar17 = (int)((int)puVar4 - *local_12c) >> 4;
                    uVar16 = iVar20 + 1;
                    if (0xfffffff - (uVar17 >> 1) < uVar17) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = uVar17 + (uVar17 >> 1);
                    }
                    if (uVar17 < uVar16) {
                      uVar17 = uVar16;
                    }
                    FUN_00428ba0(uVar17);
                  }
                  puVar3 = (undefined8 *)local_12c[1];
                  if (puVar3 != (undefined8 *)0x0) {
                    *puVar3 = local_58;
                    puVar3[1] = local_50;
                  }
                }
                local_12c[1] = local_12c[1] + 0x10;
                local_164[0] = -1;
                if ((local_164 < piStack_1c) && (local_20 <= local_164)) {
                  iVar20 = (int)local_164 - (int)local_20;
                  if ((piStack_1c == local_18) && ((int)local_18 - (int)piStack_1c >> 2 == 0)) {
                    iVar14 = (int)piStack_1c - (int)local_20 >> 2;
                    if (iVar14 == 0x3fffffff) goto LAB_00677238;
                    uVar16 = (int)local_18 - (int)local_20 >> 2;
                    uVar17 = iVar14 + 1;
                    if (0x3fffffff - (uVar16 >> 1) < uVar16) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uVar16 + (uVar16 >> 1);
                    }
                    if (uVar16 < uVar17) {
                      uVar16 = uVar17;
                    }
                    FUN_0063da20(uVar16);
                  }
                  if (piStack_1c != (int *)0x0) {
                    *piStack_1c = local_20[iVar20 >> 2];
                  }
                }
                else {
                  if ((piStack_1c == local_18) && ((int)local_18 - (int)piStack_1c >> 2 == 0)) {
                    iVar20 = (int)piStack_1c - (int)local_20 >> 2;
                    if (iVar20 == 0x3fffffff) goto LAB_00677238;
                    uVar16 = (int)local_18 - (int)local_20 >> 2;
                    uVar17 = iVar20 + 1;
                    if (0x3fffffff - (uVar16 >> 1) < uVar16) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uVar16 + (uVar16 >> 1);
                    }
                    if (uVar16 < uVar17) {
                      uVar16 = uVar17;
                    }
                    FUN_0063da20(uVar16);
                  }
                  if (piStack_1c != (int *)0x0) {
                    *piStack_1c = -1;
                  }
                }
                piStack_1c = piStack_1c + 1;
                local_16c = -1;
                if ((&local_16c < piStack_1c) && (local_20 <= &local_16c)) {
                  iVar20 = (int)&local_16c - (int)local_20;
                  if ((piStack_1c == local_18) && ((int)local_18 - (int)piStack_1c >> 2 == 0)) {
                    iVar14 = (int)piStack_1c - (int)local_20 >> 2;
                    if (iVar14 == 0x3fffffff) goto LAB_00677238;
                    uVar16 = (int)local_18 - (int)local_20 >> 2;
                    uVar17 = iVar14 + 1;
                    if (0x3fffffff - (uVar16 >> 1) < uVar16) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uVar16 + (uVar16 >> 1);
                    }
                    if (uVar16 < uVar17) {
                      uVar16 = uVar17;
                    }
                    FUN_0063da20(uVar16);
                  }
                  if (piStack_1c != (int *)0x0) {
                    *piStack_1c = local_20[iVar20 >> 2];
                  }
                }
                else {
                  if ((piStack_1c == local_18) && ((int)local_18 - (int)piStack_1c >> 2 == 0)) {
                    iVar20 = (int)piStack_1c - (int)local_20 >> 2;
                    if (iVar20 == 0x3fffffff) goto LAB_00677238;
                    uVar16 = (int)local_18 - (int)local_20 >> 2;
                    uVar17 = iVar20 + 1;
                    if (0x3fffffff - (uVar16 >> 1) < uVar16) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uVar16 + (uVar16 >> 1);
                    }
                    if (uVar16 < uVar17) {
                      uVar16 = uVar17;
                    }
                    FUN_0063da20(uVar16);
                  }
                  if (piStack_1c != (int *)0x0) {
                    *piStack_1c = -1;
                  }
                }
                piStack_1c = piStack_1c + 1;
                iVar20 = *(int *)(local_10c + 0x100);
                piVar13 = (int *)(*(int *)(local_108 + iVar20) +
                                 (local_128 %
                                 (uint)(*(int *)(local_108 + 4 + iVar20) -
                                        *(int *)(local_108 + iVar20) >> 2)) * 4);
                if ((piVar13 < piStack_1c) && (local_20 <= piVar13)) {
                  iVar20 = (int)piVar13 - (int)local_20;
                  if ((piStack_1c == local_18) && ((int)local_18 - (int)piStack_1c >> 2 == 0)) {
                    iVar14 = (int)piStack_1c - (int)local_20 >> 2;
                    if (iVar14 == 0x3fffffff) {
LAB_00677238:
                    /* WARNING: Subroutine does not return */
                      std::_Xlength_error("vector<T> too long");
                    }
                    uVar16 = (int)local_18 - (int)local_20 >> 2;
                    uVar17 = iVar14 + 1;
                    if (0x3fffffff - (uVar16 >> 1) < uVar16) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uVar16 + (uVar16 >> 1);
                    }
                    if (uVar16 < uVar17) {
                      uVar16 = uVar17;
                    }
                    FUN_0063da20(uVar16);
                  }
                  if (piStack_1c != (int *)0x0) {
                    iVar20 = local_20[iVar20 >> 2];
LAB_00676d85:
                    *piStack_1c = iVar20;
                  }
                }
                else {
                  if ((piStack_1c == local_18) && ((int)local_18 - (int)piStack_1c >> 2 == 0)) {
                    iVar20 = (int)piStack_1c - (int)local_20 >> 2;
                    if (iVar20 == 0x3fffffff) goto LAB_00677238;
                    uVar16 = (int)local_18 - (int)local_20 >> 2;
                    uVar17 = iVar20 + 1;
                    if (0x3fffffff - (uVar16 >> 1) < uVar16) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uVar16 + (uVar16 >> 1);
                    }
                    if (uVar16 < uVar17) {
                      uVar16 = uVar17;
                    }
                    FUN_0063da20(uVar16);
                  }
                  if (piStack_1c != (int *)0x0) {
                    iVar20 = *piVar13;
                    goto LAB_00676d85;
                  }
                }
                piStack_1c = piStack_1c + 1;
                local_140 = CONCAT44(*(int *)(local_10c + 200) - *(int *)(local_10c + 0xc4) >> 3,
                                     (undefined4)local_140);
                FUN_0066add0((int)&local_140 + 4);
                FUN_00642590(local_134);
                local_104 = *puVar8;
                fStack_f8 = (float)((ulonglong)puVar8[1] >> 0x20);
                _local_fc = CONCAT44(fStack_f8 * 0.0,(int)puVar8[1]);
                FUN_0042bd20(&local_104);
                FUN_00642590(local_120);
                local_b4 = local_15c;
                local_ac = local_15c;
                fStack_b0 = local_138;
                fStack_a8 = local_138;
                pfVar10 = &local_68;
                _local_68 = CONCAT44(local_138 * -1.0,local_15c * -1.0);
                _local_60 = CONCAT44(local_138 * -1.0,local_15c * -1.0);
              }
              FUN_0042bd20(pfVar10);
              local_128 = local_114;
              piVar13 = (int *)(*(int *)(local_10c + 0x100) + local_108);
            } while ((int)local_114 < piVar13[1] - *piVar13 >> 2);
          }
          uVar16 = (int)piStack_1c - (int)local_20 >> 2;
          piVar13 = local_20;
          if (0 < (int)uVar16) {
            local_118 = (undefined4 *)0x0;
            local_120 = (undefined4 *)0x2;
            piVar15 = piStack_1c;
            do {
              local_114 = *(uint *)((int)local_118 + (int)piVar13);
              if ((-1 < (int)local_114) && (-1 < piVar13[(uint)local_120 % uVar16])) {
                FUN_0066add0(&local_114);
                local_114 = *(uint *)((int)(local_118 + 1) + (int)local_20);
                FUN_0066add0(&local_114);
                puVar11 = local_120;
                local_114 = local_20[(uint)local_120 % (uint)((int)piStack_1c - (int)local_20 >> 2)]
                ;
                FUN_0066add0(&local_114);
                local_114 = local_20[(uint)puVar11 % (uint)((int)piStack_1c - (int)local_20 >> 2)];
                FUN_0066add0(&local_114);
                local_114 = *(uint *)((int)(local_118 + 1) + (int)local_20);
                FUN_0066add0(&local_114);
                local_114 = local_20[((int)puVar11 + 1U) %
                                     (uint)((int)piStack_1c - (int)local_20 >> 2)];
                FUN_0066add0(&local_114);
                piVar13 = local_20;
                piVar15 = piStack_1c;
              }
              puVar11 = (undefined4 *)((int)local_120 + 2);
              local_118 = local_118 + 2;
              uVar16 = (int)piVar15 - (int)piVar13 >> 2;
              bVar6 = (int)local_120 < (int)uVar16;
              local_120 = puVar11;
            } while (bVar6);
          }
          local_8 = 0xffffffff;
          iVar20 = local_10c;
          if (piVar13 != (int *)0x0) {
            std::_Container_base0::_Orphan_all((_Container_base0 *)&local_20);
                    /* WARNING: Subroutine does not return */
            operator_delete(local_20);
          }
        }
        local_164[1] = local_164[1] + 1;
      } while (local_164[1] < (*(int *)(iVar20 + 0x104) - *(int *)(iVar20 + 0x100)) / 0xc);
    }
  }
  puVar11 = *(undefined4 **)(iVar20 + 0xf8);
  puVar19 = *(undefined4 **)(iVar20 + 0xf4);
  if (puVar19 != puVar11) {
    do {
      puVar11 = puVar11 + -1;
      if (puVar19 == puVar11) break;
      uVar9 = *puVar19;
      *puVar19 = *puVar11;
      puVar19 = puVar19 + 1;
      *puVar11 = uVar9;
    } while (puVar19 != puVar11);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00679570 @ 00679570  kind=gamemisc  attributed-by=caller-vote  size=452 */

void FUN_00679570(int *param_1,void *param_2,int param_3,undefined4 param_4,uint param_5,int param_6
                 ,int param_7,char param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  int local_10;
  
  if (0 < param_7) {
    local_10 = param_7;
    uVar3 = param_9;
    do {
      iVar1 = *param_1;
      uVar4 = param_1[1] - iVar1 >> 2;
      local_10 = local_10 + -1;
      *(float *)(iVar1 + ((uVar3 + ((int)param_5 / 2 - param_9)) % uVar4 + param_9) * 4) =
           (*(float *)(iVar1 + ((param_5 + uVar3) % uVar4) * 4) +
           *(float *)(iVar1 + (uVar3 % uVar4) * 4)) * 0.5;
      uVar3 = param_5 + uVar3;
    } while (local_10 != 0);
  }
  if (param_8 != '\0') {
    param_7 = param_7 + 1;
  }
  local_10 = 1;
  uVar3 = param_5;
  fVar6 = DAT_0076defc;
  if (1 < param_7) {
    do {
      if ((local_10 % param_6 != 0) ||
         ((*(byte *)((int)param_2 +
                    (int)(((longlong)local_10 / (longlong)param_6 & 0xffffffffU) %
                         (ulonglong)(uint)(param_3 - (int)param_2 >> 2)) * 4) & 2) == 0)) {
        if ((DAT_0076df00 & 1) == 0) {
          dVar5 = 2.0;
          DAT_0076df00 = DAT_0076df00 | 1;
          libm_sse2_sqrt_precise();
          fVar6 = ((float)dVar5 - 1.0) / ((float)dVar5 * 0.5);
          DAT_0076defc = fVar6;
        }
        iVar2 = *param_1;
        uVar4 = param_1[1] - iVar2 >> 2;
        iVar1 = param_9 + uVar3 % uVar4;
        *(float *)(iVar2 + iVar1 * 4) =
             ((*(float *)(iVar2 + (((uVar3 - (int)param_5 / 2) + param_9) % uVar4) * 4) +
              *(float *)(iVar2 + ((uVar3 + (int)param_5 / 2 + param_9) % uVar4) * 4)) * 0.5 -
             *(float *)(iVar2 + ((uVar3 + param_9) % uVar4) * 4)) * fVar6 +
             *(float *)(iVar2 + iVar1 * 4);
      }
      local_10 = local_10 + 1;
      uVar3 = uVar3 + param_5;
    } while (local_10 < param_7);
  }
  if (param_2 == (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_00679740 @ 00679740  kind=gamemisc  attributed-by=caller-vote  size=757 */

void FUN_00679740(int *param_1,void *param_2,int param_3,undefined4 param_4,uint param_5,int param_6
                 ,int param_7,char param_8,uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int *local_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_44;
  local_30 = param_1;
  local_38 = param_5;
  local_3c = param_9;
  if (0 < param_7) {
    local_34 = (int)param_5 / 2 - param_9;
    local_40 = param_7;
    uVar5 = param_9;
    do {
      local_44 = param_5 + uVar5;
      iVar4 = *param_1;
      uVar6 = param_1[1] - iVar4 >> 3;
      pfVar1 = (float *)(iVar4 + (local_44 % uVar6) * 8);
      uVar3 = *(undefined8 *)(iVar4 + (uVar5 % uVar6) * 8);
      local_24 = (float)uVar3;
      local_24 = *pfVar1 + local_24;
      fStack_20 = (float)((ulonglong)uVar3 >> 0x20);
      fStack_20 = pfVar1[1] + fStack_20;
      fVar7 = local_24 * 0.5;
      fVar8 = fStack_20 * 0.5;
      _local_2c = CONCAT44(fVar8,fVar7);
      local_40 = local_40 + -1;
      pfVar1 = (float *)(iVar4 + ((uVar5 + local_34) % uVar6 + param_9) * 8);
      *pfVar1 = fVar7;
      pfVar1[1] = fVar8;
      uVar5 = local_44;
    } while (local_40 != 0);
  }
  if (param_8 != '\0') {
    param_7 = param_7 + 1;
  }
  local_40 = 1;
  fVar7 = DAT_0076deec;
  if (1 < param_7) {
    do {
      local_44 = param_5;
      if ((local_40 % param_6 != 0) ||
         ((*(byte *)((int)param_2 +
                    (int)(((longlong)local_40 / (longlong)param_6 & 0xffffffffU) %
                         (ulonglong)(uint)(param_3 - (int)param_2 >> 2)) * 4) & 2) == 0)) {
        if ((DAT_0076def0 & 1) == 0) {
          dVar10 = 2.0;
          DAT_0076def0 = DAT_0076def0 | 1;
          libm_sse2_sqrt_precise();
          fVar7 = ((float)dVar10 - 1.0) / ((float)dVar10 * 0.5);
          DAT_0076deec = fVar7;
        }
        local_34 = *local_30;
        uVar5 = local_30[1] - local_34 >> 3;
        pfVar1 = (float *)(local_34 + ((local_3c + param_5) % uVar5) * 8);
        pfVar2 = (float *)(local_34 + ((local_44 + (int)local_38 / 2 + local_3c) % uVar5) * 8);
        uVar3 = *(undefined8 *)
                 (local_34 + (((local_44 - (int)local_38 / 2) + local_3c) % uVar5) * 8);
        local_2c = (float)uVar3;
        local_2c = *pfVar2 + local_2c;
        fStack_28 = (float)((ulonglong)uVar3 >> 0x20);
        fStack_28 = pfVar2[1] + fStack_28;
        fVar8 = local_2c * 0.5;
        fVar9 = fStack_28 * 0.5;
        _local_24 = CONCAT44(fVar9,fVar8);
        fVar8 = fVar8 - *pfVar1;
        fVar9 = fVar9 - pfVar1[1];
        local_1c = CONCAT44(fVar9,fVar8);
        local_14 = local_1c;
        iVar4 = local_44 % uVar5 + local_3c;
        *(float *)(local_34 + iVar4 * 8) = *(float *)(local_34 + iVar4 * 8) + fVar8 * fVar7;
        *(float *)(local_34 + 4 + iVar4 * 8) = *(float *)(local_34 + 4 + iVar4 * 8) + fVar9 * fVar7;
      }
      param_5 = local_44 + local_38;
      local_40 = local_40 + 1;
      local_44 = param_5;
    } while (local_40 < param_7);
  }
  if (param_2 == (void *)0x0) {
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_0067aa70 @ 0067aa70  kind=gamemisc  attributed-by=caller-vote  size=191 */

void FUN_0067aa70(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float local_10;
  float fStack_c;
  
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    local_10 = (float)*param_2;
    fStack_c = (float)((ulonglong)*param_2 >> 0x20);
    fVar5 = (fStack_c - *(float *)(param_1 + 4 + iVar2 * 8)) *
            (*(float *)(param_1 + (iVar1 % 3) * 8) - *(float *)(param_1 + iVar2 * 8)) +
            (local_10 - *(float *)(param_1 + iVar2 * 8)) *
            (*(float *)(param_1 + 4 + iVar2 * 8) - *(float *)(param_1 + (iVar1 % 3) * 8 + 4));
    if (0.0 < fVar5) {
      iVar4 = iVar4 + 1;
    }
    if (fVar5 < 0.0) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar1;
  } while (iVar1 < 3);
  if ((iVar4 != 3) && (iVar3 != 3)) {
    __security_check_cookie(DAT_0076aa78 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(DAT_0076aa78 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0067d8a0 @ 0067d8a0  kind=gamemisc  attributed-by=caller-vote  size=49 */

int FUN_0067d8a0(int param_1)

{
  int iVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = FUN_0067d8e0(param_1);
    if (iVar1 != 0) break;
    param_1 = FUN_0062b400();
  }
  return iVar1;
}


/* FUN_0067d8e0 @ 0067d8e0  kind=gamemisc  attributed-by=caller-vote  size=232 */

void FUN_0067d8e0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7308;
  local_10 = ExceptionList;
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x238);
  if ((((iVar1 == 0) || (iVar1 == 1)) && ((*(uint *)(param_1 + 0x128) >> 1 & 1) != 0)) ||
     (((iVar1 == 2 || (iVar1 == 3)) && ((*(byte *)(param_1 + 0x128) & 1) != 0)))) {
    return;
  }
  ExceptionList = &local_10;
  FUN_00629140(&local_18);
  local_8 = 0;
  piVar2 = (int *)*local_18;
  if (piVar2 != local_18) {
    do {
      iVar1 = FUN_0067d8e0(piVar2[2]);
      if (iVar1 != 0) break;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != local_18);
  }
  piVar2 = (int *)*local_18;
  *local_18 = (int)local_18;
  local_18[1] = (int)local_18;
  local_14 = 0;
  if (piVar2 == local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_18);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar2);
}


/* FUN_0067dbf0 @ 0067dbf0  kind=gamemisc  attributed-by=caller-vote  size=289 */

void FUN_0067dbf0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 **ppuVar5;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f89e8;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00629140(&local_20);
  local_8 = 0;
  for (puVar1 = (undefined4 *)*local_20; puVar1 != local_20; puVar1 = (undefined4 *)*puVar1) {
    if ((*(uint *)(puVar1[2] + 0x128) >> 4 & 1) != 0) goto LAB_0067dcd3;
  }
  iVar4 = FUN_0062b400(uVar3);
  if (iVar4 != 0) {
    ppuVar5 = &local_18;
    FUN_0062b400(ppuVar5);
    FUN_00629140(ppuVar5);
    puVar1 = (undefined4 *)*local_18;
    for (puVar2 = puVar1; puVar2 != local_18; puVar2 = (undefined4 *)*puVar2) {
      if ((*(uint *)(puVar2[2] + 0x128) >> 4 & 1) != 0) {
        *local_18 = local_18;
        local_18[1] = local_18;
        local_14 = 0;
        if (puVar1 == local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_18);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(puVar1);
      }
    }
    *local_18 = local_18;
    local_18[1] = local_18;
    local_14 = 0;
    if (puVar1 == local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_18);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar1);
  }
LAB_0067dcd3:
  puVar1 = (undefined4 *)*local_20;
  *local_20 = local_20;
  local_20[1] = local_20;
  local_1c = 0;
  if (puVar1 == local_20) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar1);
}


/* FUN_00687f80 @ 00687f80  kind=gamemisc  attributed-by=caller-vote  size=69 */

undefined4 * FUN_00687f80(ushort *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((*(ushort *)(puVar1 + 4) < *param_1) ||
         ((*(ushort *)(puVar1 + 4) <= *param_1 && (*(ushort *)((int)puVar1 + 0x12) < param_1[1]))))
      {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  return puVar3;
}


/* FUN_00687fd0 @ 00687fd0  kind=gamemisc  attributed-by=caller-vote  size=95 */

float10 FUN_00687fd0(ushort param_1,ushort param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int in_ECX;
  
  uVar3 = param_2;
  uVar2 = param_1;
  _param_1 = CONCAT22(param_2,param_1);
  iVar4 = FUN_00687f80(&param_1);
  iVar1 = *(int *)(in_ECX + 0x24);
  _param_1 = iVar1;
  if (((iVar4 != iVar1) && (*(ushort *)(iVar4 + 0x10) <= uVar2)) &&
     ((*(ushort *)(iVar4 + 0x10) < uVar2 || (*(ushort *)(iVar4 + 0x12) <= uVar3)))) {
    _param_1 = iVar4;
  }
  if (_param_1 != iVar1) {
    return (float10)*(float *)(_param_1 + 0x14);
  }
  return (float10)0;
}


/* FUN_00688770 @ 00688770  kind=gamemisc  attributed-by=caller-vote  size=39 */

void FUN_00688770(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00688b20(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(iVar1 + 8);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


/* FUN_00689f30 @ 00689f30  kind=gamemisc  attributed-by=caller-vote  size=793 */

void FUN_00689f30(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float *local_4c;
  undefined4 local_48 [16];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piVar3 = *(int **)(in_ECX + 0x2c4);
  if ((piVar3 != (int *)0x0) && (*(int *)(in_ECX + 0x2c8) != 0)) {
    (**(code **)(*piVar3 + 0x2c))(piVar3,0,0xc0,&local_4c,0x2000);
    fVar1 = param_1[1];
    *local_4c = *param_1 + 0.0;
    local_4c[1] = fVar1 + 0.0;
    local_4c[2] = *param_5;
    local_4c[3] = param_5[1];
    local_4c[4] = param_5[2];
    local_4c[5] = param_5[3];
    local_4c[6] = 0.0;
    local_4c[7] = 0.0;
    local_4c[8] = 0.0;
    local_4c[9] = 0.0;
    local_4c[10] = *param_3;
    local_4c[0xb] = param_3[1];
    fVar1 = *param_1;
    fVar2 = *param_2;
    local_4c[0xd] = param_1[1] + 0.0;
    local_4c[0xc] = fVar1 + fVar2 + 0.0;
    local_4c[0xe] = *param_5;
    local_4c[0xf] = param_5[1];
    local_4c[0x10] = param_5[2];
    local_4c[0x11] = param_5[3];
    local_4c[0x12] = 0.0;
    local_4c[0x13] = 0.0;
    local_4c[0x14] = 0.0;
    local_4c[0x15] = 0.0;
    fVar1 = *param_3;
    fVar2 = *param_4;
    local_4c[0x17] = param_3[1];
    local_4c[0x16] = fVar1 + fVar2;
    fVar1 = param_1[1];
    fVar2 = param_2[1];
    local_4c[0x18] = *param_1 + *param_2 + 0.0;
    local_4c[0x19] = fVar1 + fVar2 + 0.0;
    local_4c[0x1a] = *param_5;
    local_4c[0x1b] = param_5[1];
    local_4c[0x1c] = param_5[2];
    local_4c[0x1d] = param_5[3];
    local_4c[0x1e] = 0.0;
    local_4c[0x1f] = 0.0;
    local_4c[0x20] = 0.0;
    local_4c[0x21] = 0.0;
    fVar1 = param_4[1];
    fVar2 = param_3[1];
    local_4c[0x22] = *param_3 + *param_4;
    local_4c[0x23] = fVar1 + fVar2;
    fVar1 = param_1[1];
    fVar2 = param_2[1];
    local_4c[0x24] = *param_1 + 0.0;
    local_4c[0x25] = fVar1 + fVar2 + 0.0;
    local_4c[0x26] = *param_5;
    local_4c[0x27] = param_5[1];
    local_4c[0x28] = param_5[2];
    local_4c[0x29] = param_5[3];
    local_4c[0x2a] = 0.0;
    local_4c[0x2b] = 0.0;
    local_4c[0x2c] = 0.0;
    local_4c[0x2d] = 0.0;
    fVar1 = param_4[1];
    fVar2 = param_3[1];
    local_4c[0x2e] = *param_3;
    local_4c[0x2f] = fVar1 + fVar2;
    (**(code **)(**(int **)(in_ECX + 0x2c4) + 0x30))(*(int **)(in_ECX + 0x2c4));
    uVar4 = *(undefined4 *)(in_ECX + 0x20c);
    puVar6 = (undefined4 *)(in_ECX + 0x264);
    puVar7 = local_48;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_004490f0();
    (**(code **)(**(int **)(in_ECX + 0x2c0) + 0x178))(*(int **)(in_ECX + 0x2c0),uVar4,local_48,4);
    (**(code **)(**(int **)(in_ECX + 0x2c0) + 400))
              (*(int **)(in_ECX + 0x2c0),0,*(undefined4 *)(in_ECX + 0x2c4),0,0x30);
    (**(code **)(**(int **)(in_ECX + 0x2c0) + 0x1a0))
              (*(int **)(in_ECX + 0x2c0),*(undefined4 *)(in_ECX + 0x2c8));
    (**(code **)(**(int **)(in_ECX + 0x2c0) + 0x148))(*(int **)(in_ECX + 0x2c0),4,0,0,4,0,2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0068a910 @ 0068a910  kind=gamemisc  attributed-by=caller-vote  size=86 */

void FUN_0068a910(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar2 = local_48;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004490f0();
  (**(code **)(**(int **)(in_ECX + 0x2c0) + 0x178))
            (*(int **)(in_ECX + 0x2c0),param_1,local_48,param_3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0068e8d0 @ 0068e8d0  kind=gamemisc  attributed-by=caller-vote  size=43 */

void FUN_0068e8d0(undefined4 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = &DAT_00736340;
  ppuVar2 = &PTR_DAT_00722650;
  do {
    FUN_00693fc0(param_1,puVar1);
    puVar1 = ppuVar2[1];
    ppuVar2 = ppuVar2 + 1;
  } while (puVar1 != (undefined *)0x0);
  return;
}


/* FUN_0068e900 @ 0068e900  kind=gamemisc  attributed-by=caller-vote  size=71 */

int FUN_0068e900(undefined4 *param_1)

{
  void *_Memory;
  int iVar1;
  
  _Memory = (void *)FUN_006cc680();
  if (_Memory == (void *)0x0) {
    return 7;
  }
  iVar1 = FUN_00693440(_Memory,param_1);
  if (iVar1 != 0) {
    free(_Memory);
    return iVar1;
  }
  FUN_0068e8d0(*param_1);
  return 0;
}


/* FUN_0068e950 @ 0068e950  kind=gamemisc  attributed-by=caller-vote  size=30 */

undefined4 FUN_0068e950(undefined4 *param_1)

{
  void *_Memory;
  
  if (param_1 != (undefined4 *)0x0) {
    _Memory = (void *)*param_1;
    FUN_006934d0(param_1);
    free(_Memory);
  }
  return 0;
}


/* FUN_006932c0 @ 006932c0  kind=gamemisc  attributed-by=caller-vote  size=168 */

int FUN_006932c0(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *unaff_EDI;
  int local_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)unaff_EDI[1];
  uVar1 = *local_4;
  iVar4 = FUN_00692230(uVar1,0xc,&local_8);
  if (local_8 != 0) {
    return local_8;
  }
  iVar2 = *unaff_EDI;
  unaff_EDI[5] = iVar2;
  unaff_EDI[6] = *(int *)(iVar2 + 0x24);
  if ((*(int *)(iVar2 + 0x24) == 0x6f75746c) &&
     (pcVar3 = *(code **)(*(int *)(iVar2 + 0x38) + 4), pcVar3 != (code *)0x0)) {
    iVar5 = (*pcVar3)(uVar1,unaff_EDI + 0xf);
    if (iVar5 != 0) {
      FUN_00691290(uVar1,iVar4);
      return iVar5;
    }
    unaff_EDI[0x10] = *(int *)(*(int *)(iVar2 + 0x38) + 0x10);
    unaff_EDI[0x11] = *(int *)(iVar2 + 0x28);
  }
  *(int **)(iVar4 + 8) = unaff_EDI;
  FUN_006913b0(local_4 + 0x27,iVar4);
  FUN_0068fd60();
  return 0;
}


/* FUN_00693370 @ 00693370  kind=gamemisc  attributed-by=caller-vote  size=103 */

void FUN_00693370(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  
  iVar1 = in_EAX[2];
  iVar2 = *in_EAX;
  iVar3 = in_EAX[1];
  if ((code *)in_EAX[4] != (code *)0x0) {
    (*(code *)in_EAX[4])();
  }
  if ((iVar3 != 0) && (*(int **)(iVar3 + 0xa8) == in_EAX)) {
    *(undefined4 *)(iVar3 + 0xa8) = 0;
  }
  if ((*(byte *)*in_EAX & 2) != 0) {
    FUN_00691b30();
  }
  if ((*(byte *)*in_EAX & 1) != 0) {
    FUN_00692a70();
  }
  if (*(code **)(iVar2 + 0x1c) != (code *)0x0) {
    (**(code **)(iVar2 + 0x1c))();
  }
  FUN_00691290(iVar1);
  return;
}


/* FUN_006933e0 @ 006933e0  kind=gamemisc  attributed-by=caller-vote  size=95 */

undefined4 FUN_006933e0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (param_2 != 0) {
    piVar3 = (int *)(param_1 + 0x1c);
    piVar2 = piVar3 + *(int *)(param_1 + 0x18);
    for (; piVar3 < piVar2; piVar3 = piVar3 + 1) {
      if (*piVar3 == param_2) {
        piVar2 = piVar2 + -1;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        if (piVar3 < piVar2) {
          piVar4 = piVar3;
          for (iVar1 = ((uint)((int)piVar2 + (-1 - (int)piVar3)) >> 2) + 1; piVar3 = piVar3 + 1,
              iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = *piVar3;
            piVar4 = piVar4 + 1;
          }
        }
        *piVar2 = 0;
        FUN_00693370();
        return 0;
      }
    }
  }
  return 0x22;
}


/* FUN_00693440 @ 00693440  kind=gamemisc  attributed-by=caller-vote  size=139 */

int FUN_00693440(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    return 6;
  }
  piVar3 = (int *)FUN_00692230(param_1,0xc4,&param_1);
  if (param_1 == 0) {
    *piVar3 = iVar1;
    piVar3[0x2c] = 0x4000;
    iVar4 = FUN_00692230(iVar1,0x4000,&param_1);
    iVar2 = param_1;
    piVar3[0x2b] = iVar4;
    if (param_1 != 0) {
      FUN_00691290(iVar1,piVar3);
      return iVar2;
    }
    piVar3[3] = 2;
    piVar3[4] = 4;
    piVar3[5] = 1;
    *param_2 = (int)piVar3;
    param_1 = 0;
  }
  return param_1;
}


/* FUN_006934d0 @ 006934d0  kind=gamemisc  attributed-by=caller-vote  size=175 */

undefined4 FUN_006934d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    if ((code *)param_1[2] != (code *)0x0) {
      (*(code *)param_1[2])(param_1);
    }
    uVar4 = 0;
    if (param_1[6] != 0) {
      puVar5 = param_1 + 7;
      do {
        puVar2 = (undefined4 *)*puVar5;
        if ((*(byte *)*puVar2 & 1) != 0) {
          iVar3 = puVar2[6];
          while (iVar3 != 0) {
            FUN_00693180(*(undefined4 *)(iVar3 + 8));
            iVar3 = puVar2[6];
          }
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 < (uint)param_1[6]);
    }
    iVar3 = param_1[6];
    while (iVar3 != 0) {
      FUN_006933e0(param_1,param_1[param_1[6] + 6]);
      iVar3 = param_1[6];
    }
    FUN_00691290(uVar1,param_1[0x2b]);
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    FUN_00691290(uVar1,param_1);
    return 0;
  }
  return 0x21;
}


/* FUN_00693fc0 @ 00693fc0  kind=gamemisc  attributed-by=caller-vote  size=431 */

int FUN_00693fc0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  
  puVar5 = (undefined4 *)param_1;
  if (param_1 == (byte *)0x0) {
    return 0x21;
  }
  if (param_2 == (byte *)0x0) {
    return 6;
  }
  if (0x20004 < *(int *)(param_2 + 0x10)) {
    return 4;
  }
  uVar11 = 0;
  if (*(int *)((int)param_1 + 0x18) != 0) {
    puVar8 = (undefined4 *)((int)param_1 + 0x1c);
    do {
      piVar2 = (int *)*puVar8;
      pbVar6 = *(byte **)(*piVar2 + 8);
      pbVar10 = *(byte **)(param_2 + 8);
      do {
        bVar1 = *pbVar6;
        bVar12 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_00694030:
          iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00694035;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar12 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_00694030;
        pbVar6 = pbVar6 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00694035:
      if (iVar7 == 0) {
        if (*(int *)(param_2 + 0xc) <= *(int *)(*piVar2 + 0xc)) {
          return 5;
        }
        param_1 = *(byte **)(param_2 + 8);
        FUN_006933e0(puVar5,piVar2);
        break;
      }
      uVar11 = uVar11 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 < *(uint *)((int)param_1 + 0x18));
  }
  uVar3 = *puVar5;
  param_1 = (byte *)0x0;
  if (0x1f < (uint)puVar5[6]) {
    return 0x30;
  }
  puVar8 = (undefined4 *)FUN_00692230(uVar3,*(undefined4 *)(param_2 + 4),&param_1);
  iVar7 = (int)param_1;
  if (param_1 == (byte *)0x0) {
    puVar8[1] = puVar5;
    puVar8[2] = uVar3;
    *puVar8 = param_2;
    if ((*param_2 & 2) != 0) {
      iVar9 = FUN_006932c0();
      iVar7 = 0;
      if (iVar9 != 0) goto LAB_0069410c;
    }
    if ((*(byte *)*puVar8 & 4) != 0) {
      puVar5[0x2a] = puVar8;
    }
    puVar4 = (uint *)*puVar8;
    if (((*puVar4 & 1) != 0) && (puVar8[5] = puVar4, (*puVar4 & 0x200) == 0)) {
      iVar9 = FUN_006923a0(uVar3,puVar8 + 9);
      iVar7 = 0;
      if (iVar9 != 0) goto LAB_0069410c;
    }
    if (*(code **)(param_2 + 0x18) != (code *)0x0) {
      iVar9 = (**(code **)(param_2 + 0x18))(puVar8);
      iVar7 = 0;
      if (iVar9 != 0) {
LAB_0069410c:
        if (((*(uint *)*puVar8 & 1) != 0) && ((*(uint *)*puVar8 & 0x200) == 0)) {
          FUN_006915b0(puVar8[9]);
        }
        if ((((*(byte *)*puVar8 & 2) != 0) && (*(int *)(puVar8[5] + 0x24) == 0x6f75746c)) &&
           (puVar8[0xf] != 0)) {
          (**(code **)(*(int *)(puVar8[5] + 0x38) + 0x14))(puVar8[0xf]);
        }
        FUN_00691290(uVar3,puVar8);
        return iVar9;
      }
    }
    puVar5[puVar5[6] + 7] = puVar8;
    puVar5[6] = puVar5[6] + 1;
  }
  return iVar7;
}


/* FUN_00695dd0 @ 00695dd0  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_00695dd0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  uVar1 = unaff_ESI[6];
  FUN_00691290(uVar1,unaff_ESI[2]);
  unaff_ESI[2] = 0;
  FUN_00691290(uVar1,unaff_ESI[3]);
  unaff_ESI[3] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  *(undefined1 *)(unaff_ESI + 7) = 0;
  unaff_ESI[5] = 0xffffffff;
  return;
}


/* FUN_00695f80 @ 00695f80  kind=gamemisc  attributed-by=caller-vote  size=53 */

void FUN_00695f80(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = **(undefined4 **)(param_1 + 0x74);
    FUN_00695dd0();
    FUN_00695dd0();
    *(undefined4 *)(param_1 + 0x74) = 0;
    FUN_00691290(uVar1,param_1);
  }
  return;
}


/* FUN_006cc680 @ 006cc680  kind=gamemisc  attributed-by=caller-vote  size=42 */

void FUN_006cc680(void)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = &LAB_006cc560;
    puVar1[3] = &LAB_006cc570;
    puVar1[2] = &LAB_006cc590;
  }
  return;
}


