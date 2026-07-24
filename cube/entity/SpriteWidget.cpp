// SpriteWidget (entity) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "SpriteWidget.h"

/* cube::SpriteWidget::vfunction2_for_NamedObject @ 0051c3d0  kind=game  attributed-by=rtti  size=909 */

void __thiscall cube::SpriteWidget::vfunction2_for_NamedObject(SpriteWidget *this)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8 [32];
  undefined8 local_c8 [24];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((*(int *)&this->field_0x160 != 0) || (*(int *)&this->field_0x164 != 0)) {
    piVar2 = *(int **)(this->field210_0x168 + 0x134);
    (**(code **)(*piVar2 + 0xe4))(piVar2,7,1);
    local_1d8 = 0;
    uStack_1d4 = 0;
    local_1d0 = 0;
    uStack_1cc = 0;
    puVar4 = local_c8;
    puVar5 = local_1c8;
    iVar6 = 0x10;
    do {
      *puVar5 = 0;
      *puVar4 = 0;
      puVar5[1] = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar5 = puVar5 + 2;
      puVar4 = (undefined8 *)((int)puVar4 + 0xc);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    FUN_00447d10();
    FUN_00448f10(local_1c8,local_c8);
    FUN_00447fb0(0x3f800000);
    FUN_00448fe0(0);
    local_1d8 = 0x3f800000;
    uStack_1d4 = 0x3f800000;
    local_1d0 = 0x3f800000;
    uStack_1cc = 0x3f800000;
    FUN_00448280(&local_1d8);
    fVar8 = (float10)FUN_00627d50();
    fVar9 = (float10)FUN_00627ce0();
    iVar6 = this->offset_0x13c;
    iVar3 = *(int *)(*(int *)(iVar6 + 0x38) + 0x170);
    iVar7 = *(int *)(*(int *)(iVar6 + 0x38) + 0x19c);
    fVar12 = *(float *)(iVar7 + iVar3 * 8);
    fVar1 = *(float *)(iVar7 + 4 + iVar3 * 8);
    fVar11 = 1.0 / (*(float *)(iVar6 + 0x54) * fVar12 + *(float *)(iVar6 + 100) * fVar1 +
                   *(float *)(iVar6 + 0x84));
    pcVar13 = *(char **)&this->field_0x164;
    fVar10 = (float)fVar8 * 0.5 +
             fVar11 * (*(float *)(iVar6 + 0x58) * fVar1 + fVar12 * *(float *)(iVar6 + 0x48) +
                      *(float *)(iVar6 + 0x78));
    fVar12 = (float)fVar9 * 0.5 +
             fVar11 * (*(float *)(iVar6 + 0x4c) * fVar12 + *(float *)(iVar6 + 0x5c) * fVar1 +
                      *(float *)(iVar6 + 0x7c));
    if (pcVar13 == (char *)0x0) {
      iVar6 = *(int *)&this->field_0x160;
      iVar3 = this->field210_0x168;
      iVar7 = *(int *)(iVar6 + 0x44);
      if (*(int *)(iVar6 + 0x44) < *(int *)(iVar6 + 0x48)) {
        iVar7 = *(int *)(iVar6 + 0x48);
      }
      uVar14 = 0;
      if (iVar7 < *(int *)(iVar6 + 0x4c)) {
        iVar7 = *(int *)(iVar6 + 0x4c);
      }
      fVar8 = (float10)FUN_00627d50(iVar6,0);
      FUN_00476660(fVar10,fVar12,iVar3 + 0x800a1c,((float)fVar8 * 0.0006) / (float)iVar7,iVar6,
                   uVar14);
    }
    else if (*pcVar13 != '\0') {
      iVar6 = this->field210_0x168;
      uVar14 = 0;
      fVar8 = (float10)FUN_00627d50(pcVar13,0);
      FUN_004758c0(fVar10,fVar12,iVar6 + 0x800a1c,(float)fVar8 * 0.0006,pcVar13,uVar14);
    }
    piVar2 = *(int **)(this->field210_0x168 + 0x134);
    (**(code **)(*piVar2 + 0xe4))(piVar2,7,0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


