// Display (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Display.h"

/* plasma::Display::~Display @ 006792a0  kind=game  attributed-by=rtti  size=92 */

void __thiscall plasma::Display::~Display(Display *this)

{
  undefined4 *puVar1;
  undefined1 local_18 [4];
  Display *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f86ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  puVar1 = (this->Display_data).offset_0xa4;
  local_8 = 4;
  local_14 = this;
  FUN_0067eb10(local_18,*puVar1,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete((this->Display_data).offset_0xa4);
}


/* plasma::Display::deleting_destructor @ 00679460  kind=game  attributed-by=rtti  size=30 */

Display * __thiscall plasma::Display::deleting_destructor(Display *this,byte param_1)

{
  ~Display(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::Display::vfunction3 @ 00679490  kind=game  attributed-by=rtti  size=221 */

int __thiscall plasma::Display::vfunction3(Display *this)

{
  int iVar1;
  
  iVar1 = FUN_0064f180(&this->NamedObject_data);
  FUN_00661680(&(this->NamedObject_data).offset_0x3c);
  FUN_0067a7b0(&(this->NamedObject_data).offset_0x88);
  FUN_00661680(&(this->NamedObject_data).field_0x94);
  FUN_0067a7b0(&(this->NamedObject_data).offset_0xe0);
  FUN_00661680(&(this->NamedObject_data).offset_0x144);
  FUN_0063d400(&(this->Display_data).field_0x3c);
  FUN_00661680(&(this->NamedObject_data).field_0xec);
  FUN_0063d400(&(this->NamedObject_data).offset_0x138);
  FUN_00661680(&(this->Display_data).offset_0x48);
  FUN_0067a7b0(&(this->Display_data).offset_0x94);
  *(undefined4 *)(iVar1 + 0x200) = (this->Display_data).offset_0xa0;
  return iVar1;
}


