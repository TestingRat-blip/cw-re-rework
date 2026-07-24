// PixelFont (engine) -- cube. 7 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "PixelFont.h"

/* plasma::PixelFont::PixelFont @ 0067f290  kind=game  attributed-by=rtti  size=147 */

PixelFont * __thiscall plasma::PixelFont::PixelFont(PixelFont *this,Font *param_1,int param_2)

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
  (this->NamedObject_data).offset_0x4c = 0;
  local_8 = 0;
  (this->NamedObject_data).offset_0x50 = 0;
  (this->NamedObject_data).offset_0x54 = 0;
  uVar2 = FUN_0043c870(uVar1);
  (this->NamedObject_data).offset_0x50 = uVar2;
  (this->NamedObject_data).offset_0x58 = 0;
  (this->NamedObject_data).offset_0x5c = 0;
  (this->NamedObject_data).offset_0x60 = 0;
  (this->NamedObject_data).offset_0x64 = 0;
  ExceptionList = local_10;
  return this;
}


/* plasma::PixelFont::~PixelFont @ 0067f330  kind=game  attributed-by=rtti  size=132 */

void __thiscall plasma::PixelFont::~PixelFont(PixelFont *this)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  PixelFont *local_8;
  
  piVar2 = (int *)(this->NamedObject_data).offset_0x50;
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
    } while (piVar5 != (int *)(this->NamedObject_data).offset_0x50);
  }
  puVar3 = (undefined4 *)(this->NamedObject_data).offset_0x50;
  FUN_0067eb10(&local_8,*puVar3,puVar3);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)(this->NamedObject_data).offset_0x50);
}


/* plasma::PixelFont::deleting_destructor @ 0067f3d0  kind=game  attributed-by=rtti  size=30 */

PixelFont * __thiscall plasma::PixelFont::deleting_destructor(PixelFont *this,byte param_1)

{
  ~PixelFont(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::PixelFont::vfunction5 @ 0067f400  kind=game  attributed-by=rtti  size=21 */

void __thiscall plasma::PixelFont::vfunction5(PixelFont *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (this->NamedObject_data).offset_0x64;
  *param_1 = (this->NamedObject_data).offset_0x60;
  param_1[1] = uVar1;
  return;
}


/* plasma::PixelFont::vfunction4 @ 0067f420  kind=game  attributed-by=rtti  size=21 */

void __thiscall plasma::PixelFont::vfunction4(PixelFont *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (this->NamedObject_data).offset_0x5c;
  *param_1 = (this->NamedObject_data).offset_0x58;
  param_1[1] = uVar1;
  return;
}


/* plasma::PixelFont::vfunction3 @ 0067f450  kind=game  attributed-by=rtti  size=718 */

void __thiscall
plasma::PixelFont::vfunction3
          (PixelFont *this,undefined4 *param_1,float *param_2,float *param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  PixelFont *pPVar11;
  int iVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 *local_44;
  undefined4 *local_40;
  float local_3c;
  float local_38;
  int local_34;
  float *local_30;
  float *local_2c;
  float local_28;
  float *local_24;
  PixelFont *local_20;
  float *local_1c;
  float local_18;
  float fStack_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_2c = param_2 + 1;
  *local_2c = 0.0;
  local_30 = param_3 + 1;
  *param_2 = 0.0;
  *param_3 = 0.0;
  *local_30 = 0.0;
  local_34 = param_1[4];
  fVar14 = 0.0;
  iVar12 = 0;
  local_24 = param_2;
  local_1c = param_3;
  fVar16 = 0.0;
  local_28 = 0.0;
  local_20 = this;
  if (0 < local_34) {
    do {
      pPVar11 = local_20;
      puVar4 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar4 = (undefined4 *)*param_1;
      }
      if (*(short *)((int)puVar4 + iVar12 * 2) == 10) {
        fVar16 = 0.0;
        local_28 = fVar14 + ((float)(this->NamedObject_data).offset_0x64 -
                            (float)(this->NamedObject_data).offset_0x5c);
        pPVar11 = this;
        fVar14 = local_28;
      }
      else {
        puVar4 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar4 = (undefined4 *)*param_1;
        }
        puVar10 = (undefined4 *)(this->NamedObject_data).offset_0x50;
        uVar2 = *(ushort *)((int)puVar4 + iVar12 * 2);
        cVar1 = *(char *)((int)puVar10[1] + 0xd);
        puVar4 = puVar10;
        puVar9 = (undefined4 *)puVar10[1];
        while (cVar1 == '\0') {
          if (*(ushort *)(puVar9 + 4) < uVar2) {
            puVar5 = (undefined4 *)puVar9[2];
            puVar9 = puVar4;
          }
          else {
            puVar5 = (undefined4 *)*puVar9;
          }
          puVar4 = puVar9;
          puVar9 = puVar5;
          cVar1 = *(char *)((int)puVar5 + 0xd);
        }
        if ((puVar4 == puVar10) || (uVar2 < *(ushort *)(puVar4 + 4))) {
          local_40 = puVar10;
          ppuVar6 = &local_40;
        }
        else {
          local_44 = puVar4;
          ppuVar6 = &local_44;
        }
        param_3 = local_1c;
        if ((*ppuVar6 != puVar10) &&
           (puVar3 = (undefined8 *)(*ppuVar6)[5], puVar3 != (undefined8 *)0x0)) {
          local_10._0_4_ = (float)*puVar3;
          local_10._4_4_ = (float)((ulonglong)*puVar3 >> 0x20);
          local_10._4_4_ = local_10._4_4_ + fVar14;
          local_10._0_4_ = (float)local_10 + fVar16;
          fVar14 = *(float *)(puVar3 + 1) + (float)local_10;
          fVar15 = *(float *)((int)puVar3 + 0xc) + local_10._4_4_;
          _local_18 = CONCAT44(fVar15,fVar14);
          if (iVar12 == 0) {
            *(undefined8 *)local_24 = local_10;
            *local_1c = fVar14;
            local_1c[1] = fVar15;
          }
          else {
            pfVar7 = (float *)&local_10;
            if (*local_24 <= (float)local_10) {
              pfVar7 = local_24;
            }
            *local_24 = *pfVar7;
            pfVar7 = (float *)((int)&local_10 + 4);
            if (*local_2c <= local_10._4_4_) {
              pfVar7 = local_2c;
            }
            *local_2c = *pfVar7;
            pfVar7 = local_1c + 1;
            pfVar8 = &local_18;
            if (fVar14 < *local_1c || fVar14 == *local_1c) {
              pfVar8 = local_1c;
            }
            *local_1c = *pfVar8;
            pfVar8 = &fStack_14;
            if (fVar15 < *pfVar7 || fVar15 == *pfVar7) {
              pfVar8 = pfVar7;
            }
            *pfVar7 = *pfVar8;
          }
          fVar16 = fVar16 + *(float *)(puVar3 + 4);
          fVar14 = local_28;
          local_38 = fVar16;
          if (iVar12 < local_34 + -1) {
            puVar10 = param_1;
            puVar4 = param_1;
            if (7 < (uint)param_1[5]) {
              puVar10 = (undefined4 *)*param_1;
              puVar4 = (undefined4 *)*param_1;
            }
            fVar13 = (float10)FUN_00687fd0(*(undefined2 *)((int)puVar10 + iVar12 * 2),
                                           *(undefined2 *)((int)puVar4 + iVar12 * 2 + 2));
            local_3c = (float)fVar13;
            fVar16 = local_3c + local_38;
            param_3 = local_1c;
            fVar14 = local_28;
          }
        }
      }
      iVar12 = iVar12 + 1;
      this = pPVar11;
    } while (iVar12 < local_34);
  }
  if ((param_4 & 1) == 0) {
    if ((param_4 & 2) != 0) {
      *local_24 = *local_24 - *param_3;
      *param_3 = 0.0;
    }
  }
  else {
    fVar14 = (*local_24 + *param_3) * 0.5;
    *local_24 = *local_24 - fVar14;
    *param_3 = *param_3 - fVar14;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 8) != 0) {
      *local_2c = *local_2c - *local_30;
      *local_30 = 0.0;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  fVar14 = (*local_30 + *local_2c) * 0.5;
  *local_2c = *local_2c - fVar14;
  *local_30 = *local_30 - fVar14;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::PixelFont::vfunction2 @ 0067f720  kind=game  attributed-by=rtti  size=602 */

void __thiscall
plasma::PixelFont::vfunction2
          (PixelFont *this,undefined4 *param_1,int param_2,float *param_3,float *param_4,
          float *param_5)

{
  char cVar1;
  ushort uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 **ppuVar9;
  undefined4 ****ppppuVar10;
  undefined4 *puVar11;
  undefined4 ****ppppuVar12;
  int iVar13;
  PixelFont *pPVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 *local_74;
  undefined4 *local_70;
  float local_6c;
  float local_68;
  float *local_64;
  float *local_60;
  float local_5c;
  PixelFont *local_58;
  float local_54 [2];
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  undefined4 ***local_3c [4];
  int local_2c;
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8ab8;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = param_4;
  local_64 = param_3;
  local_58 = this;
  local_14 = uVar5;
  FUN_00451850(local_3c,param_1,&DAT_006fd844);
  local_8 = 0;
  if (local_2c == 0) {
    *param_3 = 0.0;
    param_3[1] = 0.0;
    *local_60 = 0.0;
    local_60[1] = 0.0;
  }
  else {
    if (param_2 < 0) {
      param_2 = 0;
    }
    iVar6 = local_2c + -1;
    if (iVar6 < param_2) {
      param_2 = iVar6;
    }
    fVar18 = 0.0;
    iVar13 = 0;
    local_5c = 0.0;
    pPVar14 = this;
    fVar16 = 0.0;
    if (-1 < param_2) {
      do {
        this = local_58;
        puVar7 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        if (*(short *)((int)puVar7 + iVar13 * 2) == 10) {
          local_5c = fVar18 + ((float)(pPVar14->NamedObject_data).offset_0x64 -
                              (float)(pPVar14->NamedObject_data).offset_0x5c);
          this = pPVar14;
          fVar17 = 0.0;
          fVar18 = local_5c;
        }
        else {
          puVar7 = (undefined4 *)(pPVar14->NamedObject_data).offset_0x50;
          ppppuVar10 = local_3c;
          if (7 < local_28) {
            ppppuVar10 = (undefined4 ****)local_3c[0];
          }
          uVar2 = *(ushort *)((int)ppppuVar10 + iVar13 * 2);
          cVar1 = *(char *)((int)puVar7[1] + 0xd);
          puVar4 = puVar7;
          puVar11 = (undefined4 *)puVar7[1];
          while (cVar1 == '\0') {
            if (*(ushort *)(puVar11 + 4) < uVar2) {
              puVar8 = (undefined4 *)puVar11[2];
              puVar11 = puVar4;
            }
            else {
              puVar8 = (undefined4 *)*puVar11;
            }
            puVar4 = puVar11;
            puVar11 = puVar8;
            cVar1 = *(char *)((int)puVar8 + 0xd);
          }
          if ((puVar4 == puVar7) || (uVar2 < *(ushort *)(puVar4 + 4))) {
            local_70 = puVar7;
            ppuVar9 = &local_70;
          }
          else {
            local_74 = puVar4;
            ppuVar9 = &local_74;
          }
          fVar17 = fVar16;
          if ((*ppuVar9 != puVar7) && (pfVar3 = (float *)(*ppuVar9)[5], pfVar3 != (float *)0x0)) {
            fVar17 = pfVar3[1];
            _local_1c = CONCAT44(fVar17 + fVar18,*pfVar3 + fVar16);
            *local_64 = *pfVar3 + fVar16;
            local_64[1] = fVar17 + fVar18;
            *local_60 = pfVar3[2];
            local_60[1] = pfVar3[3];
            fVar17 = fVar16 + pfVar3[8];
            local_6c = fVar17;
            local_44 = fVar16;
            fStack_40 = fVar18;
            if (iVar13 < iVar6) {
              ppppuVar10 = local_3c;
              if (7 < local_28) {
                ppppuVar10 = (undefined4 ****)local_3c[0];
              }
              ppppuVar12 = local_3c;
              if (7 < local_28) {
                ppppuVar12 = (undefined4 ****)local_3c[0];
              }
              fVar15 = (float10)FUN_00687fd0(*(undefined2 *)((int)ppppuVar12 + iVar13 * 2),
                                             *(undefined2 *)((int)ppppuVar10 + iVar13 * 2 + 2));
              local_68 = (float)fVar15;
              fVar17 = local_68 + local_6c;
              fVar18 = local_5c;
            }
          }
        }
        iVar13 = iVar13 + 1;
        pPVar14 = this;
        fVar16 = fVar17;
      } while (iVar13 <= param_2);
    }
    puVar7 = param_1;
    (*this->vftablePtr->vfunction3)(param_1,&local_4c,local_54,(float *)0x0,uVar5);
    (*this->vftablePtr->vfunction3)(param_1,&local_24,local_54,param_5,(uint)puVar7);
    local_24 = local_24 - local_4c;
    local_20 = local_20 - local_48;
    *local_64 = local_24 + *local_64;
    local_64[1] = local_64[1] + local_20;
  }
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


