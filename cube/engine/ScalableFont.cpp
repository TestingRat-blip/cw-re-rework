// ScalableFont (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "ScalableFont.h"

/* plasma::ScalableFont::ScalableFont @ 0065a900  kind=game  attributed-by=rtti  size=398 */

ScalableFont * __thiscall plasma::ScalableFont::ScalableFont(ScalableFont *this,undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006f6e82;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (this->ScalableFont_data).offset_0x0 = param_1;
  this->vftablePtr = &vftable;
  (this->ScalableFont_data).offset_0x18 = 7;
  (this->ScalableFont_data).offset_0x14 = 0;
  (this->ScalableFont_data).offset_0x4 = 0;
  (this->ScalableFont_data).offset_0x30 = 7;
  (this->ScalableFont_data).offset_0x2c = 0;
  (this->ScalableFont_data).offset_0x1c = 0;
  (this->ScalableFont_data).offset_0x48 = 7;
  (this->ScalableFont_data).offset_0x44 = 0;
  (this->ScalableFont_data).offset_0x34 = 0;
  (this->ScalableFont_data).offset_0x60 = 7;
  (this->ScalableFont_data).offset_0x5c = 0;
  (this->ScalableFont_data).offset_0x4c = 0;
  local_8 = 3;
  uStack_7 = 0;
  (this->ScalableFont_data).offset_0x64 = 0;
  (this->ScalableFont_data).offset_0x68 = 0;
  uVar2 = FUN_0065ae80(uVar1);
  (this->ScalableFont_data).offset_0x64 = uVar2;
  local_8 = 4;
  (this->ScalableFont_data).offset_0x6c = 0;
  (this->ScalableFont_data).offset_0x70 = 0;
  uVar2 = FUN_0046d520();
  (this->ScalableFont_data).offset_0x6c = uVar2;
  (this->ScalableFont_data).offset_0xc4 = 0;
  (this->ScalableFont_data).offset_0xc8 = 0;
  _local_8 = CONCAT31(uStack_7,5);
  (this->ScalableFont_data).offset_0xcc = (void *)0x0;
  (this->ScalableFont_data).offset_0xd0 = 0;
  pvVar3 = (void *)FUN_0043c870();
  (this->ScalableFont_data).offset_0xcc = pvVar3;
  (this->ScalableFont_data).offset_0xd4 = 0;
  (this->ScalableFont_data).offset_0xd8 = 0;
  (this->ScalableFont_data).offset_0xdc = 0;
  (this->ScalableFont_data).offset_0xe0 = 0;
  (this->ScalableFont_data).offset_0xe8 = 0;
  (this->ScalableFont_data).offset_0xec = 0;
  (this->ScalableFont_data).offset_0xf0 = 0;
  (this->ScalableFont_data).offset_0x104 = 1;
  (this->ScalableFont_data).offset_0x74 = 0x10000;
  (this->ScalableFont_data).offset_0x78 = 0;
  (this->ScalableFont_data).offset_0x7c = 0;
  (this->ScalableFont_data).offset_0x80 = 0x10000;
  FUN_00423e70();
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->ScalableFont_data).field_0x108,0x80000400);
  ExceptionList = local_10;
  return this;
}


/* plasma::ScalableFont::~ScalableFont @ 0065ab10  kind=game  attributed-by=rtti  size=114 */

void __thiscall plasma::ScalableFont::~ScalableFont(ScalableFont *this)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 local_18 [4];
  ScalableFont *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f6ef0;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 6;
  local_14 = this;
  FUN_0065b8f0(uVar2);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->ScalableFont_data).field_0x108);
  puVar1 = (this->ScalableFont_data).offset_0xcc;
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_0067eb10(local_18,*puVar1,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete((this->ScalableFont_data).offset_0xcc);
}


/* plasma::ScalableFont::deleting_destructor @ 0065ade0  kind=game  attributed-by=rtti  size=30 */

ScalableFont * __thiscall plasma::ScalableFont::deleting_destructor(ScalableFont *this,byte param_1)

{
  ~ScalableFont(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


