// Controller (control) -- cube. 11 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Controller.h"

/* cube::Controller::vfunction12 @ 004114b0  kind=game  attributed-by=rtti  size=1 */

void __thiscall cube::Controller::vfunction12(void)

{
  return;
}


/* cube::Controller::vfunction2 @ 0043a000  kind=game  attributed-by=rtti  size=3 */

undefined1 __thiscall cube::Controller::vfunction2(void)

{
  return 1;
}


/* cube::Controller::Controller @ 0043b4c0  kind=game  attributed-by=rtti  size=121 */

Controller * __thiscall cube::Controller::Controller(Controller *this,undefined4 param_1)

{
  this->vftablePtr = &vftable;
  (this->Controller_data).offset_0x120 = 0;
  (this->Controller_data).offset_0x124 = 0;
  (this->Controller_data).offset_0x128 = 0;
  (this->Controller_data).offset_0x12c = 0;
  (this->Controller_data).offset_0x130 = param_1;
  memset(&(this->Controller_data).field_0x15,0,0x100);
  (this->Controller_data).offset_0x115 = 0;
  (this->Controller_data).offset_0x117 = 0;
  (this->Controller_data).offset_0x0 = 0;
  (this->Controller_data).offset_0x8 = 0;
  (this->Controller_data).offset_0x10 = 0;
  (this->Controller_data).offset_0x14 = 0;
  return this;
}


/* cube::Controller::~Controller @ 0043b540  kind=game  attributed-by=rtti  size=7 */

void __thiscall cube::Controller::~Controller(Controller *this)

{
  this->vftablePtr = &vftable;
  return;
}


/* cube::Controller::deleting_destructor @ 0043b550  kind=game  attributed-by=rtti  size=31 */

Controller * __thiscall cube::Controller::deleting_destructor(Controller *this,byte param_1)

{
                    /* inlined destructor: cube::Controller::~Controller */
  this->vftablePtr = &vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* cube::Controller::vfunction8 @ 0043b580  kind=game  attributed-by=rtti  size=18 */

void __thiscall cube::Controller::vfunction8(Controller *this,int param_1)

{
  *(undefined1 *)((int)&(this->Controller_data).offset_0x115 + param_1) = 1;
  return;
}


/* cube::Controller::vfunction9 @ 0043b5a0  kind=game  attributed-by=rtti  size=18 */

void __thiscall cube::Controller::vfunction9(Controller *this,int param_1)

{
  *(undefined1 *)((int)&(this->Controller_data).offset_0x115 + param_1) = 0;
  return;
}


/* cube::Controller::vfunction3 @ 0043b5c0  kind=game  attributed-by=rtti  size=16 */

void __thiscall cube::Controller::vfunction3(Controller *this,byte param_1)

{
  (&(this->Controller_data).field_0x15)[param_1] = 1;
  return;
}


/* cube::Controller::vfunction4 @ 0043b5d0  kind=game  attributed-by=rtti  size=16 */

void __thiscall cube::Controller::vfunction4(Controller *this,byte param_1)

{
  (&(this->Controller_data).field_0x15)[param_1] = 0;
  return;
}


/* cube::Controller::vfunction5 @ 00663b50  kind=game  attributed-by=rtti  size=3 */

void __thiscall cube::Controller::vfunction5(void)

{
  return;
}


/* cube::Controller::vfunction6 @ 00675660  kind=game  attributed-by=rtti  size=3 */

void __thiscall cube::Controller::vfunction6(void)

{
  return;
}


