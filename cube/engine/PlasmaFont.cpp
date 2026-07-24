// PlasmaFont (engine) -- cube. 8 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "PlasmaFont.h"

/* plasma::PlasmaFont::PlasmaFont @ 0067e210  kind=game  attributed-by=rtti  size=140 */

PlasmaFont * __thiscall plasma::PlasmaFont::PlasmaFont(PlasmaFont *this,Font *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8a58;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  Font::Font((Font *)this,param_1,param_2);
  this->vftablePtr = &vftable;
  local_8 = 0;
  (this->NamedObject_data).offset_0x4c = 0;
  (this->NamedObject_data).offset_0x50 = 0;
  uVar2 = FUN_0043c870(uVar1);
  (this->NamedObject_data).offset_0x4c = uVar2;
  (this->NamedObject_data).offset_0x54 = 0;
  (this->NamedObject_data).offset_0x58 = 0;
  (this->NamedObject_data).offset_0x5c = 0;
  (this->NamedObject_data).offset_0x60 = 0;
  ExceptionList = local_10;
  return this;
}


/* plasma::PlasmaFont::~PlasmaFont @ 0067e2a0  kind=game  attributed-by=rtti  size=132 */

void __thiscall plasma::PlasmaFont::~PlasmaFont(PlasmaFont *this)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  PlasmaFont *local_8;
  
  piVar2 = (int *)(this->NamedObject_data).offset_0x4c;
  this->vftablePtr = &vftable;
  piVar5 = (int *)*piVar2;
  local_8 = this;
  if (piVar5 != piVar2) {
    do {
      if ((void *)piVar5[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)piVar5[5]);
      }
      if (*(char *)((int)piVar5 + 0xd) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0xd);
          piVar4 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0xd);
            piVar4 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != (int *)(this->NamedObject_data).offset_0x4c);
  }
  puVar3 = (undefined4 *)(this->NamedObject_data).offset_0x4c;
  FUN_0067eb10(&local_8,*puVar3,puVar3);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)(this->NamedObject_data).offset_0x4c);
}


/* plasma::PlasmaFont::deleting_destructor @ 0067e3d0  kind=game  attributed-by=rtti  size=30 */

PlasmaFont * __thiscall plasma::PlasmaFont::deleting_destructor(PlasmaFont *this,byte param_1)

{
  ~PlasmaFont(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::PlasmaFont::vfunction5 @ 0067e400  kind=game  attributed-by=rtti  size=58 */

void __thiscall plasma::PlasmaFont::vfunction5(PlasmaFont *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(this->NamedObject_data).offset_0x60;
  fVar2 = (float)(this->NamedObject_data).offset_0x40;
  *param_1 = (float)(this->NamedObject_data).offset_0x5c * 0.005 * fVar2;
  param_1[1] = fVar1 * 0.005 * fVar2;
  return;
}


/* plasma::PlasmaFont::vfunction4 @ 0067e440  kind=game  attributed-by=rtti  size=58 */

void __thiscall plasma::PlasmaFont::vfunction4(PlasmaFont *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(this->NamedObject_data).offset_0x58;
  fVar2 = (float)(this->NamedObject_data).offset_0x40;
  *param_1 = (float)(this->NamedObject_data).offset_0x54 * 0.005 * fVar2;
  param_1[1] = fVar1 * 0.005 * fVar2;
  return;
}


/* plasma::PlasmaFont::vfunction6 @ 0067e660  kind=game  attributed-by=rtti  size=1173 */

void __thiscall
plasma::PlasmaFont::vfunction6
          (PlasmaFont *this,undefined4 *param_1,float *param_2,undefined4 *param_3,
          undefined4 *param_4,float *param_5)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint unaff_EDI;
  int iVar8;
  float10 fVar9;
  float fVar10;
  float local_4c;
  float local_44;
  float local_40 [2];
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = (this->Object_data).offset_0x0;
  iVar8 = *(int *)(iVar1 + 0x144);
  iVar4 = FUN_00608a20(iVar8,*(undefined4 *)(iVar8 + 4),iVar1 + 0x15c);
  if (*(int *)(iVar1 + 0x148) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(iVar1 + 0x148) = *(int *)(iVar1 + 0x148) + 1;
  *(int *)(iVar8 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  iVar1 = (this->Object_data).offset_0x0;
  iVar8 = *(int *)(iVar1 + 0x14c);
  iVar4 = FUN_00608a20(iVar8,*(undefined4 *)(iVar8 + 4),iVar1 + 0x16c);
  if (*(int *)(iVar1 + 0x150) != 0xaaaaaa9) {
    *(int *)(iVar1 + 0x150) = *(int *)(iVar1 + 0x150) + 1;
    *(int *)(iVar8 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
    iVar1 = (this->Object_data).offset_0x0;
    *(undefined4 *)(iVar1 + 0x15c) = *param_3;
    *(undefined4 *)(iVar1 + 0x160) = param_3[1];
    *(undefined4 *)(iVar1 + 0x164) = param_3[2];
    *(undefined4 *)(iVar1 + 0x168) = param_3[3];
    iVar1 = (this->Object_data).offset_0x0;
    *(undefined4 *)(iVar1 + 0x16c) = *param_4;
    *(undefined4 *)(iVar1 + 0x170) = param_4[1];
    *(undefined4 *)(iVar1 + 0x174) = param_4[2];
    *(undefined4 *)(iVar1 + 0x178) = param_4[3];
    puVar5 = param_1;
    (*this->vftablePtr->vfunction3)(param_1,&local_28,local_40,(float *)0x0,unaff_EDI);
    (*this->vftablePtr->vfunction3)(param_1,&local_20,local_40,param_5,(uint)puVar5);
    fVar10 = ((float)(this->NamedObject_data).offset_0x40 * 2.0) /
             ((float)(this->NamedObject_data).offset_0x60 -
             (float)(this->NamedObject_data).offset_0x58);
    iVar1 = param_1[4];
    local_20 = *param_2 + (local_20 - local_28);
    iVar8 = 0;
    fStack_1c = param_2[1] + (fStack_1c - local_24);
    local_44 = 0.0;
    local_4c = 0.0;
    if (0 < iVar1) {
      do {
        puVar5 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar5 = (undefined4 *)*param_1;
        }
        if (*(short *)((int)puVar5 + iVar8 * 2) == 10) {
          local_44 = 0.0;
          local_4c = local_4c +
                     ((float)(this->NamedObject_data).offset_0x60 -
                     (float)(this->NamedObject_data).offset_0x58);
        }
        else {
          puVar5 = param_1;
          if (7 < (uint)param_1[5]) {
            puVar5 = (undefined4 *)*param_1;
          }
          puVar5 = (undefined4 *)FUN_0067e340((int)puVar5 + iVar8 * 2);
          pfVar2 = (float *)*puVar5;
          if (pfVar2 != (float *)0x0) {
            fStack_2c = local_4c - (float)(this->NamedObject_data).offset_0x58;
            local_30 = local_44;
            local_10 = CONCAT44(pfVar2[1] + fStack_2c,local_44 + *pfVar2);
            local_38 = local_10;
            local_18 = CONCAT44(fStack_1c + (pfVar2[1] + fStack_2c) * fVar10,
                                local_20 + (local_44 + *pfVar2) * fVar10);
            *(undefined8 *)
             (*(int *)(*(int *)((int)pfVar2[5] + 0x38) + 0x94) +
             *(int *)(*(int *)((int)pfVar2[5] + 0x38) + 0x68) * 8) = local_18;
            FUN_00423e70();
            pfVar6 = (float *)(*(int *)(*(int *)((int)pfVar2[5] + 0x38) + 0xc0) * 0x40 +
                              *(int *)(*(int *)((int)pfVar2[5] + 0x38) + 0xec));
            if (fVar10 != 1.0) {
              *pfVar6 = *pfVar6 * fVar10;
              pfVar6[1] = pfVar6[1] * fVar10;
              pfVar6[2] = pfVar6[2] * fVar10;
              pfVar6[3] = pfVar6[3] * fVar10;
              pfVar6[4] = pfVar6[4] * fVar10;
              pfVar6[5] = pfVar6[5] * fVar10;
              pfVar6[6] = pfVar6[6] * fVar10;
              pfVar6[7] = pfVar6[7] * fVar10;
            }
            (**(code **)(**(int **)((int)pfVar2[5] + 0x38) + 4))(1);
            FUN_00632910(0);
            local_44 = pfVar2[4] + local_44;
            if (iVar8 < iVar1 + -1) {
              puVar7 = param_1;
              puVar5 = param_1;
              if (7 < (uint)param_1[5]) {
                puVar7 = (undefined4 *)*param_1;
                puVar5 = (undefined4 *)*param_1;
              }
              fVar9 = (float10)FUN_00687fd0(*(undefined2 *)((int)puVar7 + iVar8 * 2),
                                            *(undefined2 *)((int)puVar5 + iVar8 * 2 + 2));
              local_44 = (float)fVar9 + local_44;
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
    }
    iVar1 = (this->Object_data).offset_0x0;
    if (*(int *)(iVar1 + 0x148) != 0) {
      iVar8 = *(int *)(*(int *)(iVar1 + 0x144) + 4);
      *(undefined4 *)(iVar1 + 0x15c) = *(undefined4 *)(iVar8 + 8);
      *(undefined4 *)(iVar1 + 0x160) = *(undefined4 *)(iVar8 + 0xc);
      *(undefined4 *)(iVar1 + 0x164) = *(undefined4 *)(iVar8 + 0x10);
      *(undefined4 *)(iVar1 + 0x168) = *(undefined4 *)(iVar8 + 0x14);
      piVar3 = (int *)(*(int **)(iVar1 + 0x144))[1];
      if (piVar3 != *(int **)(iVar1 + 0x144)) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar3);
      }
    }
    iVar1 = (this->Object_data).offset_0x0;
    if (*(int *)(iVar1 + 0x150) != 0) {
      iVar8 = *(int *)(*(int *)(iVar1 + 0x14c) + 4);
      *(undefined4 *)(iVar1 + 0x16c) = *(undefined4 *)(iVar8 + 8);
      *(undefined4 *)(iVar1 + 0x170) = *(undefined4 *)(iVar8 + 0xc);
      *(undefined4 *)(iVar1 + 0x174) = *(undefined4 *)(iVar8 + 0x10);
      *(undefined4 *)(iVar1 + 0x178) = *(undefined4 *)(iVar8 + 0x14);
      piVar3 = (int *)(*(int **)(iVar1 + 0x14c))[1];
      if (piVar3 != *(int **)(iVar1 + 0x14c)) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar3);
      }
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* plasma::PlasmaFont::vfunction3 @ 0067ebb0  kind=game  attributed-by=rtti  size=790 */

void __thiscall
plasma::PlasmaFont::vfunction3
          (PlasmaFont *this,undefined4 *param_1,float *param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  ushort uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  PlasmaFont *pPVar12;
  int iVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 *local_3c;
  float local_38;
  float local_34;
  undefined4 *local_30;
  int local_2c;
  float local_28;
  float *local_24;
  PlasmaFont *local_20;
  float *local_1c;
  float local_18;
  float fStack_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  *param_3 = 0.0;
  param_3[1] = 0.0;
  pfVar1 = param_3 + 1;
  local_2c = param_1[4];
  fVar15 = 0.0;
  iVar13 = 0;
  local_1c = param_2;
  local_24 = param_3;
  fVar17 = 0.0;
  local_28 = 0.0;
  local_34 = ((float)(this->NamedObject_data).offset_0x40 * 2.0) /
             ((float)(this->NamedObject_data).offset_0x60 -
             (float)(this->NamedObject_data).offset_0x58);
  local_20 = this;
  if (0 < local_2c) {
    do {
      pPVar12 = local_20;
      puVar6 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar6 = (undefined4 *)*param_1;
      }
      if (*(short *)((int)puVar6 + iVar13 * 2) == 10) {
        fVar17 = 0.0;
        local_28 = fVar15 + ((float)(this->NamedObject_data).offset_0x60 -
                            (float)(this->NamedObject_data).offset_0x58);
        pPVar12 = this;
        fVar15 = local_28;
      }
      else {
        puVar6 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar6 = (undefined4 *)*param_1;
        }
        puVar11 = (undefined4 *)(this->NamedObject_data).offset_0x4c;
        uVar4 = *(ushort *)((int)puVar6 + iVar13 * 2);
        cVar3 = *(char *)((int)puVar11[1] + 0xd);
        puVar6 = puVar11;
        puVar10 = (undefined4 *)puVar11[1];
        while (cVar3 == '\0') {
          if (*(ushort *)(puVar10 + 4) < uVar4) {
            puVar7 = (undefined4 *)puVar10[2];
            puVar10 = puVar6;
          }
          else {
            puVar7 = (undefined4 *)*puVar10;
          }
          puVar6 = puVar10;
          puVar10 = puVar7;
          cVar3 = *(char *)((int)puVar7 + 0xd);
        }
        if ((puVar6 == puVar11) || (uVar4 < *(ushort *)(puVar6 + 4))) {
          local_30 = puVar11;
          ppuVar8 = &local_30;
        }
        else {
          local_3c = puVar6;
          ppuVar8 = &local_3c;
        }
        param_2 = local_1c;
        if ((*ppuVar8 != puVar11) &&
           (puVar5 = (undefined8 *)(*ppuVar8)[5], puVar5 != (undefined8 *)0x0)) {
          local_10._0_4_ = (float)*puVar5;
          local_10._4_4_ = (float)((ulonglong)*puVar5 >> 0x20);
          local_10._4_4_ = local_10._4_4_ + fVar15;
          local_10._0_4_ = (float)local_10 + fVar17;
          fVar15 = *(float *)(puVar5 + 1) + (float)local_10;
          fVar16 = *(float *)((int)puVar5 + 0xc) + local_10._4_4_;
          _local_18 = CONCAT44(fVar16,fVar15);
          if (iVar13 == 0) {
            *(undefined8 *)local_1c = local_10;
            *local_24 = fVar15;
            local_24[1] = fVar16;
          }
          else {
            pfVar9 = (float *)&local_10;
            if (*local_1c <= (float)local_10) {
              pfVar9 = local_1c;
            }
            pfVar2 = local_1c + 1;
            *local_1c = *pfVar9;
            pfVar9 = (float *)((int)&local_10 + 4);
            if (*pfVar2 <= local_10._4_4_) {
              pfVar9 = pfVar2;
            }
            *pfVar2 = *pfVar9;
            pfVar9 = &local_18;
            if (fVar15 < *local_24 || fVar15 == *local_24) {
              pfVar9 = local_24;
            }
            *local_24 = *pfVar9;
            pfVar9 = &fStack_14;
            if (fVar16 < *pfVar1 || fVar16 == *pfVar1) {
              pfVar9 = pfVar1;
            }
            *pfVar1 = *pfVar9;
          }
          fVar17 = fVar17 + *(float *)(puVar5 + 2);
          fVar15 = local_28;
          if (iVar13 < local_2c + -1) {
            puVar11 = param_1;
            puVar6 = param_1;
            if (7 < (uint)param_1[5]) {
              puVar11 = (undefined4 *)*param_1;
              puVar6 = (undefined4 *)*param_1;
            }
            fVar14 = (float10)FUN_00687fd0(*(undefined2 *)((int)puVar11 + iVar13 * 2),
                                           *(undefined2 *)((int)puVar6 + iVar13 * 2 + 2));
            local_38 = (float)fVar14;
            fVar17 = (float)fVar14 + fVar17;
            param_2 = local_1c;
            fVar15 = local_28;
          }
        }
      }
      iVar13 = iVar13 + 1;
      this = pPVar12;
    } while (iVar13 < local_2c);
  }
  *param_2 = *param_2 * local_34;
  param_2[1] = param_2[1] * local_34;
  fVar15 = *local_24 * local_34;
  *local_24 = fVar15;
  local_24[1] = local_34 * local_24[1];
  if ((param_4 & 1) == 0) {
    if ((param_4 & 2) != 0) {
      *param_2 = *param_2 - fVar15;
      *local_24 = 0.0;
    }
  }
  else {
    fVar15 = (fVar15 + *param_2) * 0.5;
    *param_2 = *param_2 - fVar15;
    *local_24 = *local_24 - fVar15;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 8) != 0) {
      param_2[1] = param_2[1] - local_24[1];
      local_24[1] = 0.0;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  fVar15 = (param_2[1] + local_24[1]) * 0.5;
  param_2[1] = param_2[1] - fVar15;
  local_24[1] = local_24[1] - fVar15;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::PlasmaFont::vfunction2 @ 0067eed0  kind=game  attributed-by=rtti  size=723 */

void __thiscall
plasma::PlasmaFont::vfunction2
          (PlasmaFont *this,undefined4 param_1,int param_2,float *param_3,float *param_4,
          uint param_5)

{
  char cVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 ****ppppuVar8;
  undefined4 *puVar9;
  undefined4 ****ppppuVar10;
  uint uVar11;
  undefined4 ****ppppuVar12;
  int iVar13;
  PlasmaFont *pPVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 *local_74;
  float *local_70;
  float local_6c;
  undefined4 *local_68;
  float local_64;
  float *local_60;
  int local_5c;
  float local_58;
  float local_54;
  PlasmaFont *local_50;
  undefined8 local_4c;
  float local_44;
  float fStack_40;
  undefined4 ***local_3c [4];
  int local_2c;
  uint local_28;
  float local_24;
  float fStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8a88;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = param_3;
  local_70 = param_4;
  local_50 = this;
  FUN_00451850(local_3c,param_1,&DAT_006fd844,local_14);
  local_58 = ((float)(this->NamedObject_data).offset_0x40 * 2.0) /
             ((float)(this->NamedObject_data).offset_0x60 -
             (float)(this->NamedObject_data).offset_0x58);
  if (param_2 < 0) {
    param_2 = 0;
  }
  local_5c = local_2c + -1;
  if (local_5c < param_2) {
    param_2 = local_5c;
  }
  local_4c._0_4_ = 0.0;
  local_4c._4_4_ = 0.0;
  fVar20 = 0.0;
  iVar13 = 0;
  local_8 = 0;
  local_4c = 0;
  local_44 = 0.0;
  fStack_40 = 0.0;
  fVar19 = 0.0;
  local_54 = 0.0;
  uVar11 = local_28;
  ppppuVar12 = (undefined4 ****)local_3c[0];
  if (-1 < param_2) {
    do {
      pPVar14 = local_50;
      ppppuVar8 = local_3c;
      if (7 < uVar11) {
        ppppuVar8 = ppppuVar12;
      }
      if (*(short *)((int)ppppuVar8 + iVar13 * 2) == 10) {
        fVar19 = 0.0;
        local_54 = fVar20 + ((float)(this->NamedObject_data).offset_0x60 -
                            (float)(this->NamedObject_data).offset_0x58);
        pPVar14 = this;
        fVar20 = local_54;
      }
      else {
        puVar3 = (undefined4 *)(this->NamedObject_data).offset_0x4c;
        ppppuVar8 = local_3c;
        if (7 < uVar11) {
          ppppuVar8 = ppppuVar12;
        }
        uVar2 = *(ushort *)((int)ppppuVar8 + iVar13 * 2);
        cVar1 = *(char *)((int)puVar3[1] + 0xd);
        puVar5 = puVar3;
        puVar9 = (undefined4 *)puVar3[1];
        while (cVar1 == '\0') {
          if (*(ushort *)(puVar9 + 4) < uVar2) {
            puVar6 = (undefined4 *)puVar9[2];
            puVar9 = puVar5;
          }
          else {
            puVar6 = (undefined4 *)*puVar9;
          }
          puVar5 = puVar9;
          puVar9 = puVar6;
          cVar1 = *(char *)((int)puVar6 + 0xd);
        }
        if ((puVar5 == puVar3) || (uVar2 < *(ushort *)(puVar5 + 4))) {
          local_68 = puVar3;
          ppuVar7 = &local_68;
        }
        else {
          local_74 = puVar5;
          ppuVar7 = &local_74;
        }
        uVar11 = local_28;
        if ((*ppuVar7 != puVar3) &&
           (puVar4 = (undefined8 *)(*ppuVar7)[5], puVar4 != (undefined8 *)0x0)) {
          local_1c._0_4_ = (float)*puVar4;
          local_1c._0_4_ = (float)local_1c + fVar19;
          fVar19 = fVar19 + *(float *)(puVar4 + 2);
          local_1c._4_4_ = (float)((ulonglong)*puVar4 >> 0x20);
          local_1c._4_4_ = local_1c._4_4_ + fVar20;
          local_6c = fVar19;
          local_4c = local_1c;
          local_44 = *(float *)(puVar4 + 1) + (float)local_1c;
          fStack_40 = *(float *)((int)puVar4 + 0xc) + local_1c._4_4_;
          _local_24 = CONCAT44(fStack_40,local_44);
          if (iVar13 < local_5c) {
            ppppuVar8 = local_3c;
            if (7 < local_28) {
              ppppuVar8 = ppppuVar12;
            }
            ppppuVar10 = local_3c;
            if (7 < local_28) {
              ppppuVar10 = ppppuVar12;
            }
            fVar15 = (float10)FUN_00687fd0(*(undefined2 *)((int)ppppuVar10 + iVar13 * 2),
                                           *(undefined2 *)((int)ppppuVar8 + iVar13 * 2 + 2));
            local_64 = (float)fVar15;
            fVar19 = local_64 + local_6c;
            uVar11 = local_28;
            ppppuVar12 = (undefined4 ****)local_3c[0];
            fVar20 = local_54;
          }
        }
      }
      iVar13 = iVar13 + 1;
      this = pPVar14;
    } while (iVar13 <= param_2);
  }
  fVar19 = (float)local_4c * local_58;
  fVar20 = local_4c._4_4_ * local_58;
  fVar18 = local_44 * local_58;
  fVar17 = fStack_40 * local_58;
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) != 0) {
      fVar19 = fVar19 - fVar18;
      fVar18 = 0.0;
    }
  }
  else {
    fVar16 = (fVar18 + fVar19) * 0.5;
    fVar19 = fVar19 - fVar16;
    fVar18 = fVar18 - fVar16;
  }
  if ((param_5 & 4) == 0) {
    if ((param_5 & 8) != 0) {
      fVar20 = fVar20 - fVar17;
      fVar17 = 0.0;
    }
  }
  else {
    fVar16 = (fVar17 + fVar20) * 0.5;
    fVar20 = fVar20 - fVar16;
    fVar17 = fVar17 - fVar16;
  }
  *local_60 = fVar19;
  local_60[1] = fVar20;
  *local_70 = fVar18 - fVar19;
  local_70[1] = fVar17 - fVar20;
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(ppppuVar12);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


