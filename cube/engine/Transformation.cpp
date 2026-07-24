// Transformation (engine) -- cube. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Transformation.h"

/* plasma::Transformation::~Transformation @ 00678370  kind=game  attributed-by=rtti  size=92 */

void __thiscall plasma::Transformation::~Transformation(Transformation *this)

{
  undefined4 *puVar1;
  undefined1 local_18 [4];
  Transformation *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f856f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  puVar1 = (this->Transformation_data).offset_0x48;
  local_8 = 3;
  local_14 = this;
  FUN_0067eb10(local_18,*puVar1,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete((this->Transformation_data).offset_0x48);
}


/* plasma::Transformation::deleting_destructor @ 006784f0  kind=game  attributed-by=rtti  size=30 */

Transformation * __thiscall
plasma::Transformation::deleting_destructor(Transformation *this,byte param_1)

{
  ~Transformation(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::Transformation::vfunction3 @ 00678550  kind=game  attributed-by=rtti  size=172 */

int * __thiscall plasma::Transformation::vfunction3(Transformation *this)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00650360(&this->NamedObject_data);
  FUN_00661680(&(this->NamedObject_data).offset_0x3c);
  FUN_0063d170(&(this->NamedObject_data).offset_0x88);
  FUN_00661680(&(this->NamedObject_data).field_0x94);
  FUN_0063d050(&(this->NamedObject_data).offset_0xe0);
  FUN_00661680(&(this->NamedObject_data).field_0xec);
  FUN_0063d290(&(this->NamedObject_data).offset_0x138);
  FUN_00661680(&(this->NamedObject_data).offset_0x144);
  FUN_0063d170(&(this->Transformation_data).field_0x3c);
  (**(code **)(*piVar1 + 4))(1);
  return piVar1;
}


/* plasma::Transformation::vfunction2 @ 00678600  kind=game  attributed-by=rtti  size=2282 */

void __thiscall plasma::Transformation::vfunction2(Transformation *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  
  puVar6 = (undefined4 *)&(this->Transformation_data).field_0x50;
  FUN_00423e70();
  iVar5 = (this->NamedObject_data).offset_0x5c;
  iVar3 = (this->NamedObject_data).offset_0x88;
  fVar8 = *(float *)(iVar3 + iVar5 * 8);
  fVar9 = *(float *)(iVar3 + 4 + iVar5 * 8);
  *(float *)&(this->Transformation_data).field_0x80 =
       *(float *)&(this->Transformation_data).field_0x60 * fVar9 + fVar8 * (float)*puVar6 +
       *(float *)&(this->Transformation_data).field_0x80;
  *(float *)&(this->Transformation_data).field_0x84 =
       *(float *)&(this->Transformation_data).field_0x54 * fVar8 +
       *(float *)&(this->Transformation_data).field_0x64 * fVar9 +
       *(float *)&(this->Transformation_data).field_0x84;
  *(float *)&(this->Transformation_data).field_0x88 =
       *(float *)&(this->Transformation_data).field_0x58 * fVar8 +
       *(float *)&(this->Transformation_data).field_0x68 * fVar9 +
       *(float *)&(this->Transformation_data).field_0x88;
  *(float *)&(this->Transformation_data).field_0x8c =
       *(float *)&(this->Transformation_data).field_0x5c * fVar8 +
       *(float *)&(this->Transformation_data).field_0x6c * fVar9 +
       *(float *)&(this->Transformation_data).field_0x8c;
  iVar5 = *(int *)&(this->Transformation_data).field_0x10;
  iVar3 = *(int *)&(this->Transformation_data).field_0x3c;
  fVar8 = *(float *)(iVar3 + iVar5 * 8);
  fVar9 = *(float *)(iVar3 + 4 + iVar5 * 8);
  *(float *)&(this->Transformation_data).field_0x80 =
       *(float *)&(this->Transformation_data).field_0x60 * fVar9 + fVar8 * (float)*puVar6 +
       *(float *)&(this->Transformation_data).field_0x80;
  *(float *)&(this->Transformation_data).field_0x84 =
       *(float *)&(this->Transformation_data).field_0x54 * fVar8 +
       *(float *)&(this->Transformation_data).field_0x64 * fVar9 +
       *(float *)&(this->Transformation_data).field_0x84;
  *(float *)&(this->Transformation_data).field_0x88 =
       *(float *)&(this->Transformation_data).field_0x58 * fVar8 +
       *(float *)&(this->Transformation_data).field_0x68 * fVar9 +
       *(float *)&(this->Transformation_data).field_0x88;
  *(float *)&(this->Transformation_data).field_0x8c =
       *(float *)&(this->Transformation_data).field_0x5c * fVar8 +
       *(float *)&(this->Transformation_data).field_0x6c * fVar9 +
       *(float *)&(this->Transformation_data).field_0x8c;
  fVar8 = *(float *)((this->NamedObject_data).offset_0x138 +
                    *(int *)&(this->NamedObject_data).field_0x10c * 0xc) * 0.017453292;
  dVar10 = (double)fVar8;
  libm_sse2_cos_precise();
  fVar9 = (float)dVar10;
  dVar10 = (double)fVar8;
  libm_sse2_sin_precise();
  fVar8 = *(float *)&(this->Transformation_data).field_0x60;
  fVar11 = (float)dVar10;
  *(float *)&(this->Transformation_data).field_0x60 =
       *(float *)&(this->Transformation_data).field_0x70 * fVar11 + fVar8 * fVar9;
  *(float *)&(this->Transformation_data).field_0x70 =
       *(float *)&(this->Transformation_data).field_0x70 * fVar9 - fVar8 * fVar11;
  fVar8 = *(float *)&(this->Transformation_data).field_0x64;
  *(float *)&(this->Transformation_data).field_0x64 =
       *(float *)&(this->Transformation_data).field_0x74 * fVar11 + fVar8 * fVar9;
  *(float *)&(this->Transformation_data).field_0x74 =
       *(float *)&(this->Transformation_data).field_0x74 * fVar9 - fVar8 * fVar11;
  fVar8 = *(float *)&(this->Transformation_data).field_0x68;
  *(float *)&(this->Transformation_data).field_0x68 =
       *(float *)&(this->Transformation_data).field_0x78 * fVar11 + fVar8 * fVar9;
  *(float *)&(this->Transformation_data).field_0x78 =
       *(float *)&(this->Transformation_data).field_0x78 * fVar9 - fVar8 * fVar11;
  fVar8 = *(float *)&(this->Transformation_data).field_0x6c;
  *(float *)&(this->Transformation_data).field_0x6c =
       *(float *)&(this->Transformation_data).field_0x7c * fVar11 + fVar8 * fVar9;
  *(float *)&(this->Transformation_data).field_0x7c =
       *(float *)&(this->Transformation_data).field_0x7c * fVar9 - fVar8 * fVar11;
  fVar8 = *(float *)((this->NamedObject_data).offset_0x138 + 4 +
                    *(int *)&(this->NamedObject_data).field_0x10c * 0xc) * 0.017453292;
  dVar10 = (double)fVar8;
  libm_sse2_cos_precise();
  fVar9 = (float)dVar10;
  dVar10 = (double)fVar8;
  libm_sse2_sin_precise();
  fVar8 = (float)*puVar6;
  fVar11 = (float)dVar10;
  *puVar6 = fVar8 * fVar9 - *(float *)&(this->Transformation_data).field_0x70 * fVar11;
  *(float *)&(this->Transformation_data).field_0x70 =
       *(float *)&(this->Transformation_data).field_0x70 * fVar9 + fVar8 * fVar11;
  fVar8 = *(float *)&(this->Transformation_data).field_0x54;
  *(float *)&(this->Transformation_data).field_0x54 =
       fVar8 * fVar9 - *(float *)&(this->Transformation_data).field_0x74 * fVar11;
  *(float *)&(this->Transformation_data).field_0x74 =
       *(float *)&(this->Transformation_data).field_0x74 * fVar9 + fVar8 * fVar11;
  fVar8 = *(float *)&(this->Transformation_data).field_0x58;
  *(float *)&(this->Transformation_data).field_0x58 =
       fVar8 * fVar9 - *(float *)&(this->Transformation_data).field_0x78 * fVar11;
  *(float *)&(this->Transformation_data).field_0x78 =
       *(float *)&(this->Transformation_data).field_0x78 * fVar9 + fVar8 * fVar11;
  fVar8 = *(float *)&(this->Transformation_data).field_0x5c;
  *(float *)&(this->Transformation_data).field_0x5c =
       fVar8 * fVar9 - *(float *)&(this->Transformation_data).field_0x7c * fVar11;
  *(float *)&(this->Transformation_data).field_0x7c =
       *(float *)&(this->Transformation_data).field_0x7c * fVar9 + fVar8 * fVar11;
  fVar8 = *(float *)((this->NamedObject_data).offset_0x138 + 8 +
                    *(int *)&(this->NamedObject_data).field_0x10c * 0xc) * 0.017453292;
  dVar10 = (double)fVar8;
  libm_sse2_cos_precise();
  fVar9 = (float)dVar10;
  dVar10 = (double)fVar8;
  libm_sse2_sin_precise();
  fVar8 = (float)*puVar6;
  fVar11 = (float)dVar10;
  *puVar6 = *(float *)&(this->Transformation_data).field_0x60 * fVar11 + fVar8 * fVar9;
  *(float *)&(this->Transformation_data).field_0x60 =
       *(float *)&(this->Transformation_data).field_0x60 * fVar9 - fVar8 * fVar11;
  fVar8 = *(float *)&(this->Transformation_data).field_0x54;
  *(float *)&(this->Transformation_data).field_0x54 =
       fVar8 * fVar9 + *(float *)&(this->Transformation_data).field_0x64 * fVar11;
  *(float *)&(this->Transformation_data).field_0x64 =
       *(float *)&(this->Transformation_data).field_0x64 * fVar9 - fVar8 * fVar11;
  fVar8 = *(float *)&(this->Transformation_data).field_0x58;
  *(float *)&(this->Transformation_data).field_0x58 =
       fVar8 * fVar9 + *(float *)&(this->Transformation_data).field_0x68 * fVar11;
  *(float *)&(this->Transformation_data).field_0x68 =
       *(float *)&(this->Transformation_data).field_0x68 * fVar9 - fVar8 * fVar11;
  fVar8 = *(float *)&(this->Transformation_data).field_0x5c;
  *(float *)&(this->Transformation_data).field_0x5c =
       fVar8 * fVar9 + *(float *)&(this->Transformation_data).field_0x6c * fVar11;
  *(float *)&(this->Transformation_data).field_0x6c =
       *(float *)&(this->Transformation_data).field_0x6c * fVar9 - fVar8 * fVar11;
  fVar8 = (float)*puVar6;
  fVar9 = *(float *)&(this->Transformation_data).field_0x60;
  fVar11 = *(float *)&(this->Transformation_data).field_0x70;
  fVar1 = *(float *)&(this->Transformation_data).field_0x80;
  pfVar4 = (float *)(*(int *)&(this->NamedObject_data).field_0xb4 * 0x40 +
                    (this->NamedObject_data).offset_0xe0);
  *puVar6 = fVar9 * pfVar4[1] + fVar8 * *pfVar4 + fVar11 * pfVar4[2] + pfVar4[3] * fVar1;
  *(float *)&(this->Transformation_data).field_0x60 =
       pfVar4[5] * fVar9 + pfVar4[4] * fVar8 + fVar11 * pfVar4[6] + fVar1 * pfVar4[7];
  *(float *)&(this->Transformation_data).field_0x70 =
       pfVar4[9] * fVar9 + pfVar4[8] * fVar8 + pfVar4[10] * fVar11 + fVar1 * pfVar4[0xb];
  fVar2 = *(float *)&(this->Transformation_data).field_0x84;
  *(float *)&(this->Transformation_data).field_0x80 =
       fVar9 * pfVar4[0xd] + fVar8 * pfVar4[0xc] + pfVar4[0xe] * fVar11 + pfVar4[0xf] * fVar1;
  fVar8 = *(float *)&(this->Transformation_data).field_0x54;
  fVar9 = *(float *)&(this->Transformation_data).field_0x64;
  fVar11 = *(float *)&(this->Transformation_data).field_0x74;
  *(float *)&(this->Transformation_data).field_0x54 =
       fVar9 * pfVar4[1] + fVar8 * *pfVar4 + fVar11 * pfVar4[2] + pfVar4[3] * fVar2;
  *(float *)&(this->Transformation_data).field_0x64 =
       pfVar4[5] * fVar9 + pfVar4[4] * fVar8 + fVar11 * pfVar4[6] + fVar2 * pfVar4[7];
  *(float *)&(this->Transformation_data).field_0x74 =
       pfVar4[9] * fVar9 + pfVar4[8] * fVar8 + pfVar4[10] * fVar11 + fVar2 * pfVar4[0xb];
  fVar1 = *(float *)&(this->Transformation_data).field_0x88;
  *(float *)&(this->Transformation_data).field_0x84 =
       fVar9 * pfVar4[0xd] + fVar8 * pfVar4[0xc] + pfVar4[0xe] * fVar11 + pfVar4[0xf] * fVar2;
  fVar8 = *(float *)&(this->Transformation_data).field_0x58;
  fVar9 = *(float *)&(this->Transformation_data).field_0x68;
  fVar11 = *(float *)&(this->Transformation_data).field_0x78;
  *(float *)&(this->Transformation_data).field_0x58 =
       fVar9 * pfVar4[1] + fVar8 * *pfVar4 + fVar11 * pfVar4[2] + pfVar4[3] * fVar1;
  *(float *)&(this->Transformation_data).field_0x68 =
       pfVar4[5] * fVar9 + pfVar4[4] * fVar8 + fVar11 * pfVar4[6] + fVar1 * pfVar4[7];
  *(float *)&(this->Transformation_data).field_0x78 =
       pfVar4[9] * fVar9 + pfVar4[8] * fVar8 + pfVar4[10] * fVar11 + fVar1 * pfVar4[0xb];
  fVar2 = *(float *)&(this->Transformation_data).field_0x8c;
  *(float *)&(this->Transformation_data).field_0x88 =
       fVar9 * pfVar4[0xd] + fVar8 * pfVar4[0xc] + pfVar4[0xe] * fVar11 + pfVar4[0xf] * fVar1;
  fVar8 = *(float *)&(this->Transformation_data).field_0x5c;
  fVar9 = *(float *)&(this->Transformation_data).field_0x6c;
  fVar11 = *(float *)&(this->Transformation_data).field_0x7c;
  *(float *)&(this->Transformation_data).field_0x5c =
       fVar9 * pfVar4[1] + fVar8 * *pfVar4 + fVar11 * pfVar4[2] + pfVar4[3] * fVar2;
  *(float *)&(this->Transformation_data).field_0x6c =
       pfVar4[5] * fVar9 + pfVar4[4] * fVar8 + fVar11 * pfVar4[6] + fVar2 * pfVar4[7];
  *(float *)&(this->Transformation_data).field_0x7c =
       pfVar4[9] * fVar9 + pfVar4[8] * fVar8 + pfVar4[10] * fVar11 + fVar2 * pfVar4[0xb];
  *(float *)&(this->Transformation_data).field_0x8c =
       fVar9 * pfVar4[0xd] + fVar8 * pfVar4[0xc] + pfVar4[0xe] * fVar11 + pfVar4[0xf] * fVar2;
  iVar5 = *(int *)&(this->Transformation_data).field_0x10;
  iVar3 = *(int *)&(this->Transformation_data).field_0x3c;
  fVar8 = *(float *)(iVar3 + iVar5 * 8) * -1.0;
  fVar9 = *(float *)(iVar3 + 4 + iVar5 * 8) * -1.0;
  *(float *)&(this->Transformation_data).field_0x80 =
       fVar9 * *(float *)&(this->Transformation_data).field_0x60 + fVar8 * (float)*puVar6 +
       *(float *)&(this->Transformation_data).field_0x80;
  *(float *)&(this->Transformation_data).field_0x84 =
       *(float *)&(this->Transformation_data).field_0x54 * fVar8 +
       fVar9 * *(float *)&(this->Transformation_data).field_0x64 +
       *(float *)&(this->Transformation_data).field_0x84;
  *(float *)&(this->Transformation_data).field_0x88 =
       *(float *)&(this->Transformation_data).field_0x58 * fVar8 +
       fVar9 * *(float *)&(this->Transformation_data).field_0x68 +
       *(float *)&(this->Transformation_data).field_0x88;
  *(float *)&(this->Transformation_data).field_0x8c =
       *(float *)&(this->Transformation_data).field_0x5c * fVar8 +
       fVar9 * *(float *)&(this->Transformation_data).field_0x6c +
       *(float *)&(this->Transformation_data).field_0x8c;
  *(undefined4 *)&(this->Transformation_data).field_0x58 = 0;
  *(undefined4 *)&(this->Transformation_data).field_0x68 = 0;
  *(undefined4 *)&(this->Transformation_data).field_0x78 = 0x3f800000;
  *(undefined4 *)&(this->Transformation_data).field_0x88 = 0;
  puVar7 = (undefined4 *)&(this->Transformation_data).field_0x90;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_0058c440();
  *(undefined1 *)((int)&(this->NamedObject_data).offset_0x20 + 1) = 1;
  return;
}


