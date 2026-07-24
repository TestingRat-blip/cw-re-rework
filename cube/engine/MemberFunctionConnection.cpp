// MemberFunctionConnection (engine) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "MemberFunctionConnection.h"

/* plasma::Widget::MemberFunctionConnection<cube::GameController>::vfunction1 @ 0046f480  kind=game  attributed-by=rtti  size=10 */

void __thiscall
plasma::Widget::MemberFunctionConnection<cube::GameController>::vfunction1
          (MemberFunctionConnection<cube::GameController> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0046f488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this[1].field1_0x4)();
  return;
}


/* plasma::Widget::MemberFunctionConnection<cube::CharacterStyleWidget>::vfunction1 @ 004c2040  kind=game  attributed-by=rtti  size=13 */

void __thiscall
plasma::Widget::MemberFunctionConnection<cube::CharacterStyleWidget>::vfunction1
          (MemberFunctionConnection<cube::CharacterStyleWidget> *this)

{
                    /* WARNING: Could not recover jumptable at 0x004c204b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(this->MemberFunctionConnection<cube::CharacterStyleWidget>_data).offset_0xc)();
  return;
}


