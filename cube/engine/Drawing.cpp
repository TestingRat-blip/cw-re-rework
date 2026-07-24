// Drawing (engine) -- cube. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Drawing.h"

/* plasma::Drawing::Drawing @ 00672a00  kind=game  attributed-by=rtti  size=405 */

Drawing * __thiscall plasma::Drawing::Drawing(Drawing *this)

{
  this->vftablePtr = &vftable;
  (this->Drawing_data).offset_0x0 = (void *)0x0;
  (this->Drawing_data).offset_0x4 = 0;
  (this->Drawing_data).offset_0x8 = 0;
  (this->Drawing_data).offset_0xc = (void *)0x0;
  (this->Drawing_data).offset_0x10 = 0;
  (this->Drawing_data).offset_0x14 = 0;
  (this->Drawing_data).offset_0x18 = (void *)0x0;
  (this->Drawing_data).offset_0x1c = 0;
  (this->Drawing_data).offset_0x20 = 0;
  (this->Drawing_data).offset_0x24 = (void *)0x0;
  (this->Drawing_data).offset_0x28 = 0;
  (this->Drawing_data).offset_0x2c = 0;
  (this->Drawing_data).offset_0x30 = (void *)0x0;
  (this->Drawing_data).offset_0x34 = 0;
  (this->Drawing_data).offset_0x38 = 0;
  (this->Drawing_data).offset_0x3c = (void *)0x0;
  (this->Drawing_data).offset_0x40 = 0;
  (this->Drawing_data).offset_0x44 = 0;
  (this->Drawing_data).offset_0x48 = (void *)0x0;
  (this->Drawing_data).offset_0x4c = 0;
  (this->Drawing_data).offset_0x50 = 0;
  (this->Drawing_data).offset_0x54 = (void *)0x0;
  (this->Drawing_data).offset_0x58 = 0;
  (this->Drawing_data).offset_0x5c = 0;
  (this->Drawing_data).offset_0x60 = 0;
  (this->Drawing_data).offset_0x64 = 0;
  (this->Drawing_data).offset_0xb8 = 0xf;
  (this->Drawing_data).offset_0xbc = 0xffffffff;
  (this->Drawing_data).offset_0xc0 = (void *)0x0;
  (this->Drawing_data).offset_0xc4 = 0;
  (this->Drawing_data).offset_0xc8 = 0;
  (this->Drawing_data).offset_0xcc = (void *)0x0;
  (this->Drawing_data).offset_0xd0 = 0;
  (this->Drawing_data).offset_0xd4 = 0;
  (this->Drawing_data).offset_0xd8 = (void *)0x0;
  (this->Drawing_data).offset_0xdc = 0;
  (this->Drawing_data).offset_0xe0 = 0;
  (this->Drawing_data).offset_0xe4 = (void *)0x0;
  (this->Drawing_data).offset_0xe8 = 0;
  (this->Drawing_data).offset_0xec = 0;
  (this->Drawing_data).offset_0xf0 = (void *)0x0;
  (this->Drawing_data).offset_0xf4 = 0;
  (this->Drawing_data).offset_0xf8 = 0;
  (this->Drawing_data).offset_0xfc = (void *)0x0;
  (this->Drawing_data).offset_0x100 = 0;
  (this->Drawing_data).offset_0x104 = 0;
  (this->Drawing_data).offset_0x108 = 0;
  (this->Drawing_data).offset_0x11c = 0;
  return this;
}


/* plasma::Drawing::~Drawing @ 00672ba0  kind=game  attributed-by=rtti  size=298 */

void __thiscall plasma::Drawing::~Drawing(Drawing *this)

{
  void *pvVar1;
  undefined1 local_5;
  
  this->vftablePtr = &vftable;
  pvVar1 = (this->Drawing_data).offset_0xfc;
  if (pvVar1 != (void *)0x0) {
    FUN_00639cf0(pvVar1,(this->Drawing_data).offset_0x100,&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((this->Drawing_data).offset_0xfc);
  }
  pvVar1 = (this->Drawing_data).offset_0xf0;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (this->Drawing_data).offset_0xe4;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (this->Drawing_data).offset_0xd8;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (this->Drawing_data).offset_0xcc;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (this->Drawing_data).offset_0xc0;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (this->Drawing_data).offset_0x54;
  if (pvVar1 != (void *)0x0) {
    FUN_00639cf0(pvVar1,(this->Drawing_data).offset_0x58,&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((this->Drawing_data).offset_0x54);
  }
  pvVar1 = (this->Drawing_data).offset_0x48;
  if (pvVar1 != (void *)0x0) {
    FUN_00639cf0(pvVar1,(this->Drawing_data).offset_0x4c,&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((this->Drawing_data).offset_0x48);
  }
  pvVar1 = (this->Drawing_data).offset_0x3c;
  if (pvVar1 != (void *)0x0) {
    FUN_00639cf0(pvVar1,(this->Drawing_data).offset_0x40,&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((this->Drawing_data).offset_0x3c);
  }
  pvVar1 = (this->Drawing_data).offset_0x30;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (this->Drawing_data).offset_0x24;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (this->Drawing_data).offset_0x18;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (this->Drawing_data).offset_0xc;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (this->Drawing_data).offset_0x0;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  return;
}


/* plasma::Drawing::deleting_destructor @ 00672e50  kind=game  attributed-by=rtti  size=30 */

Drawing * __thiscall plasma::Drawing::deleting_destructor(Drawing *this,byte param_1)

{
  ~Drawing(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::Drawing::vfunction2 @ 00675800  kind=game  attributed-by=rtti  size=232 */

void __thiscall plasma::Drawing::vfunction2(Drawing *this)

{
  undefined1 *puVar1;
  float fVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  
  puVar3 = (this->Drawing_data).offset_0x0;
  if (puVar3 != (undefined4 *)(this->Drawing_data).offset_0x4) {
    *(undefined4 *)&(this->Drawing_data).field_0x10c = *puVar3;
    *(undefined4 *)&(this->Drawing_data).field_0x110 = puVar3[1];
    *(undefined4 *)&(this->Drawing_data).field_0x114 =
         *(undefined4 *)&(this->Drawing_data).field_0x10c;
    *(undefined4 *)&(this->Drawing_data).field_0x118 =
         *(undefined4 *)&(this->Drawing_data).field_0x110;
    iVar5 = 1;
    if (8 < (int)((this->Drawing_data).offset_0x4 - (int)(this->Drawing_data).offset_0x0 &
                 0xfffffff8U)) {
      do {
        pvVar4 = (this->Drawing_data).offset_0x0;
        fVar2 = *(float *)((int)pvVar4 + iVar5 * 8);
        if (fVar2 < *(float *)&(this->Drawing_data).field_0x10c) {
          *(float *)&(this->Drawing_data).field_0x10c = fVar2;
        }
        fVar2 = *(float *)((int)pvVar4 + iVar5 * 8 + 4);
        if (fVar2 < *(float *)&(this->Drawing_data).field_0x110) {
          *(float *)&(this->Drawing_data).field_0x110 = fVar2;
        }
        fVar2 = *(float *)((int)pvVar4 + iVar5 * 8);
        puVar1 = &(this->Drawing_data).field_0x114;
        if (*(float *)puVar1 <= fVar2 && fVar2 != *(float *)puVar1) {
          *(float *)&(this->Drawing_data).field_0x114 = fVar2;
        }
        fVar2 = *(float *)((int)pvVar4 + iVar5 * 8 + 4);
        puVar1 = &(this->Drawing_data).field_0x118;
        if (*(float *)puVar1 <= fVar2 && fVar2 != *(float *)puVar1) {
          *(float *)&(this->Drawing_data).field_0x118 = fVar2;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (this->Drawing_data).offset_0x4 - (int)(this->Drawing_data).offset_0x0 >> 3);
    }
    FUN_00674f80();
    return;
  }
  *(undefined4 *)&(this->Drawing_data).field_0x10c = 0;
  *(undefined4 *)&(this->Drawing_data).field_0x110 = 0;
  *(undefined4 *)&(this->Drawing_data).field_0x114 = 0;
  *(undefined4 *)&(this->Drawing_data).field_0x118 = 0;
  return;
}


