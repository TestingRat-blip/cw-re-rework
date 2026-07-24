// CompanionBehavior (ai) -- cube. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "CompanionBehavior.h"

/* cube::CompanionBehavior::CompanionBehavior @ 0043ab80  kind=game  attributed-by=rtti  size=23 */

CompanionBehavior * __thiscall cube::CompanionBehavior::CompanionBehavior(CompanionBehavior *this)

{
  this->vftablePtr = &vftable;
  (this->CompanionBehavior_data).offset_0x4 = 0;
  (this->CompanionBehavior_data).offset_0x8 = 0;
  return this;
}


/* cube::CompanionBehavior::CompanionBehavior @ 0043aba0  kind=game  attributed-by=rtti  size=27 */

CompanionBehavior * __thiscall
cube::CompanionBehavior::CompanionBehavior
          (CompanionBehavior *this,undefined4 param_1,undefined4 param_2)

{
  (this->CompanionBehavior_data).offset_0x4 = param_1;
  (this->CompanionBehavior_data).offset_0x8 = param_2;
  this->vftablePtr = &vftable;
  return this;
}


/* cube::CompanionBehavior::vfunction1 @ 0043ace0  kind=game  attributed-by=rtti  size=1888 */

void __thiscall
cube::CompanionBehavior::vfunction1(CompanionBehavior *this,int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 *puVar18;
  undefined1 auStack_14c [4];
  uint *local_148;
  float local_144;
  float local_140;
  int local_13c;
  int local_138;
  uint *local_134;
  int local_130;
  float local_12c;
  uint local_128;
  int local_124;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  int local_108;
  uint *local_104;
  uint local_100;
  int local_fc;
  int local_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined8 uStack_ac;
  undefined1 local_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  undefined1 auStack_28 [28];
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_14c;
  local_13c = param_1;
  local_130 = param_2;
  FUN_00477d90(&local_144,&(this->CompanionBehavior_data).offset_0x4);
  iVar2 = local_13c;
  if ((local_144 != *(float *)(param_2 + 4)) &&
     (local_138 = *(int *)((int)local_144 + 0x18), local_138 != 0)) {
    local_148 = (uint *)(local_138 + 0x10);
    local_140 = *(float *)(local_138 + 0x24);
    local_134 = (uint *)(local_13c + 0x10);
    local_d0 = *(uint *)(local_138 + 0x10) - *local_134;
    local_cc = (*(int *)(local_138 + 0x14) - *(int *)(local_13c + 0x14)) -
               (uint)(*(uint *)(local_138 + 0x10) < *local_134);
    local_c8 = *(uint *)(local_138 + 0x18) - *(uint *)(local_13c + 0x18);
    local_c4 = (*(int *)(local_138 + 0x1c) - *(int *)(local_13c + 0x1c)) -
               (uint)(*(uint *)(local_138 + 0x18) < *(uint *)(local_13c + 0x18));
    local_c0 = *(uint *)(local_138 + 0x20) - *(uint *)(local_13c + 0x20);
    local_bc = ((int)local_140 - *(int *)(local_13c + 0x24)) -
               (uint)(*(uint *)(local_138 + 0x20) < *(uint *)(local_13c + 0x20));
    FUN_0043ac20(&local_128,&local_d0);
    if ((local_124 < 0) || ((local_124 < 1 && (local_128 < 0x400001)))) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      *(ushort *)(iVar2 + 0x124) = *(ushort *)(iVar2 + 0x124) | 0x40;
    }
    else {
      *(ushort *)(iVar2 + 0x124) = *(ushort *)(iVar2 + 0x124) & 0xffbf;
    }
    if (*(char *)(iVar2 + 0x60) == '\x05') {
      fVar12 = (float10)FUN_00444db0();
      local_140 = (float)fVar12 * (float)param_3 * 0.001 * 0.1 + *(float *)(iVar2 + 0x16c);
      *(float *)(iVar2 + 0x16c) = local_140;
      fVar12 = (float10)FUN_00444db0();
      local_12c = (float)fVar12;
      if (local_12c < local_140) {
        fVar12 = (float10)FUN_00444db0();
        *(float *)(iVar2 + 0x16c) = (float)fVar12;
      }
    }
    iVar8 = local_138;
    iVar2 = local_13c;
    local_f8 = *local_148 - *local_134;
    iStack_f4 = (local_148[1] - local_134[1]) - (uint)(*local_148 < *local_134);
    local_f0 = *(uint *)(local_138 + 0x18) - *(uint *)(local_13c + 0x18);
    iStack_ec = (*(int *)(local_138 + 0x1c) - *(int *)(local_13c + 0x1c)) -
                (uint)(*(uint *)(local_138 + 0x18) < *(uint *)(local_13c + 0x18));
    local_e8 = *(uint *)(local_138 + 0x20) - *(uint *)(local_13c + 0x20);
    iStack_e4 = (*(int *)(local_138 + 0x24) - *(int *)(local_13c + 0x24)) -
                (uint)(*(uint *)(local_138 + 0x20) < *(uint *)(local_13c + 0x20));
    local_11c = (float)CONCAT44(iStack_f4,local_f8) * 1.5258789e-05;
    local_148 = (uint *)(float)CONCAT44(iStack_e4,local_e8);
    local_118 = (float)CONCAT44(iStack_ec,local_f0) * 1.5258789e-05;
    *(undefined4 *)(local_13c + 0x40) = 0;
    *(undefined4 *)(local_13c + 0x44) = 0;
    *(undefined4 *)(local_13c + 0x48) = 0;
    if (16.0 <= local_118 * local_118 + local_11c * local_11c +
                (float)local_148 * 1.5258789e-05 * (float)local_148 * 1.5258789e-05) {
      pfVar6 = (float *)(local_138 + 0x10);
      cVar3 = FUN_00609480(local_13c,local_13c + 0x10,pfVar6,
                           *(float *)(local_13c + 0x80) + *(float *)(local_138 + 0x80));
      if (cVar3 != '\0') {
        FUN_0042ef10();
        fVar16 = local_11c * 5.0;
        fVar17 = local_118 * 5.0;
        fVar15 = 0.0;
        local_144 = 0.0;
        fVar14 = fVar17 * fVar17 + fVar16 * fVar16 + 0.0;
        local_148 = (uint *)fVar16;
        local_12c = fVar17;
        if (900.0 < fVar14) {
          dVar13 = (double)fVar14;
          libm_sse2_sqrt_precise();
          fVar14 = 1.0 / (float)dVar13;
          fVar16 = (float)local_148 * fVar14 * 30.0;
          fVar17 = local_12c * fVar14 * 30.0;
          fVar15 = local_144 * fVar14 * 30.0;
        }
        *(float *)(iVar2 + 0x40) = fVar16;
        *(float *)(iVar2 + 0x44) = fVar17;
        *(float *)(iVar2 + 0x48) = fVar15;
        __security_check_cookie(local_c ^ (uint)auStack_14c);
        return;
      }
      local_144 = *pfVar6;
      local_140 = *(float *)(iVar8 + 0x14);
      local_134 = *(uint **)(iVar8 + 0x1c);
      local_13c = *(int *)(iVar8 + 0x18);
      uVar9 = *(uint *)(iVar8 + 0x20);
      iVar8 = *(int *)(iVar8 + 0x24);
      local_138 = 0;
      local_110 = local_144;
      local_10c = local_140;
      local_108 = local_13c;
      local_104 = local_134;
      do {
        local_100 = uVar9;
        local_fc = iVar8;
        iVar4 = FUN_0042f860(local_144,local_140,local_13c,local_134,uVar9,iVar8,0);
        if (((*(byte *)(iVar4 + 3) & 0x1f) != 0) && ((*(byte *)(iVar4 + 3) & 0x1f) != 2)) {
          local_138 = 0;
          goto LAB_0043b110;
        }
        bVar11 = 0xffff < uVar9;
        uVar9 = uVar9 - 0x10000;
        iVar8 = iVar8 + -1 + (uint)bVar11;
        local_138 = local_138 + 1;
        local_100 = uVar9;
        local_fc = iVar8;
      } while (local_138 < 0x15);
    }
  }
  goto LAB_0043b15c;
  while( true ) {
    if (*(int *)(iVar2 + 0x1464) != 0) {
      iVar8 = *(int *)(*(int *)(iVar2 + 0x1460) + 4);
      piVar7 = (int *)FUN_0042f040(auStack_70,iVar2 + 0x1440);
      uVar1 = *(undefined8 *)(iVar8 + 8);
      iVar10 = *(int *)(iVar8 + 0x10) - piVar7[2];
      uStack_ac._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
      iVar8 = uStack_ac._4_4_ - piVar7[1];
      uStack_ac._0_4_ = (int)uVar1;
      iVar4 = (int)uStack_ac - *piVar7;
      uStack_ac = uVar1;
      if ((float)(iVar10 * iVar10 + iVar8 * iVar8 + iVar4 * iVar4) <
          *(float *)(iVar2 + 0x1458) * *(float *)(iVar2 + 0x1458)) break;
    }
    FUN_005aaab0(iVar2);
    FUN_005a7c90(iVar2);
    local_144 = (float)((int)local_144 + 1);
    if (9 < (int)local_144) break;
LAB_0043b390:
    if (0x32 < *(int *)(iVar2 + 0x1464)) break;
  }
LAB_0043b431:
  __security_check_cookie(local_c ^ (uint)auStack_14c);
  return;
  while( true ) {
    bVar11 = 0xfffeffff < uVar9;
    uVar9 = uVar9 + 0x10000;
    iVar8 = iVar8 + (uint)bVar11;
    local_138 = local_138 + 1;
    local_100 = uVar9;
    local_fc = iVar8;
    if (0x14 < local_138) break;
LAB_0043b110:
    iVar4 = FUN_0042f860(local_144,local_140,local_13c,local_134,uVar9,iVar8,0);
    if (((*(byte *)(iVar4 + 3) & 0x1f) == 0) || ((*(byte *)(iVar4 + 3) & 0x1f) == 2)) {
      local_b0 = *(float *)(iVar2 + 0x88) * 0.5;
      local_b8 = 0;
      local_b4 = 0;
      FUN_0042c460(&local_b8);
      pfVar6 = &local_110;
      puVar18 = local_58;
      FUN_0042c7a0(local_40,local_a0);
      uVar5 = FUN_0042c7a0(puVar18,pfVar6);
      pfVar6 = (float *)FUN_0042c4a0(uVar5);
      if (*pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1] + pfVar6[2] * pfVar6[2] < 16.0) {
        FUN_0042ef10();
        *(undefined4 *)(iVar2 + 0x40) = 0;
        *(undefined4 *)(iVar2 + 0x44) = 0;
        *(undefined4 *)(iVar2 + 0x48) = 0;
        break;
      }
      if (*(int *)(iVar2 + 0x1464) == 0) {
        FUN_0042ef10();
        fStack_d4 = 0.1 - *(float *)(iVar2 + 0x88) * 0.5;
        uStack_dc = 0;
        uStack_d8 = 0;
        FUN_0042c460(&uStack_dc);
        uVar5 = FUN_0042c800(auStack_28,auStack_88);
        FUN_0042c5b0(uVar5);
        FUN_0042c5b0(&local_110);
        iVar8 = __alldiv(*(undefined4 *)(iVar2 + 0x1448),*(undefined4 *)(iVar2 + 0x144c),0x10000,0);
        iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 0xffU)) >> 8;
        iVar4 = __alldiv(*(undefined4 *)(iVar2 + 0x1440),*(undefined4 *)(iVar2 + 0x1444),0x10000,0);
        iVar8 = FUN_00434d10((int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8,iVar8);
        if (iVar8 == 0) break;
        FUN_005a9f90(iVar2);
        *(undefined4 *)(iVar2 + 0x1458) = 0x40000000;
        FUN_005aaab0(iVar2);
        FUN_005a7c90(iVar2);
        *(undefined4 *)(iVar2 + 0x40) = 0;
        *(undefined4 *)(iVar2 + 0x44) = 0;
        *(undefined4 *)(iVar2 + 0x48) = 0;
      }
      if (*(int *)(iVar2 + 0x1410) == 0) goto LAB_0043b431;
      local_144 = 0.0;
      goto LAB_0043b390;
    }
  }
LAB_0043b15c:
  __security_check_cookie(local_c ^ (uint)auStack_14c);
  return;
}


/* cube::CompanionBehavior::vfunction2 @ 0043b450  kind=game  attributed-by=rtti  size=41 */

undefined4 * __thiscall cube::CompanionBehavior::vfunction2(CompanionBehavior *this)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &vftable;
    puVar1[2] = (this->CompanionBehavior_data).offset_0x4;
    puVar1[3] = (this->CompanionBehavior_data).offset_0x8;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


