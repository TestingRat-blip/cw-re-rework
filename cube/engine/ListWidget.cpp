// ListWidget (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "ListWidget.h"

/* plasma::ListWidget::ListWidget @ 0067d9f0  kind=game  attributed-by=rtti  size=47 */

ListWidget * __thiscall
plasma::ListWidget::ListWidget(ListWidget *this,int param_1,int param_2,undefined4 param_3)

{
  Widget::Widget((Widget *)this,param_1,param_2,param_3);
  this->vftablePtr = &vftable_for_NamedObject;
  this->vftablePtr = &vftable_for_Deformer;
  this->offset_0x2c = 4;
  return this;
}


/* plasma::ListWidget::deleting_destructor_for_NamedObject @ 0067da20  kind=game  attributed-by=rtti  size=43 */

ListWidget * __thiscall
plasma::ListWidget::deleting_destructor_for_NamedObject(ListWidget *this,byte param_1)

{
                    /* inlined destructor: plasma::ListWidget::~ListWidget */
  this->vftablePtr = &vftable_for_NamedObject;
  this->vftablePtr = &vftable_for_Deformer;
  Widget::~Widget((Widget *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::ListWidget::vfunction41_for_NamedObject @ 0067da50  kind=game  attributed-by=rtti  size=141 */

Widget * __thiscall plasma::ListWidget::vfunction41_for_NamedObject(ListWidget *this,int param_1)

{
  Widget *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7dcb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = operator_new(0x160);
  local_8 = 0;
  if (this_00 != (Widget *)0x0) {
    Widget::Widget(this_00,(int)this,param_1);
    this_00->vftablePtr = (Widget_vftable_for_NamedObject *)&vftable_for_NamedObject;
    this_00->vftablePtr = (Widget_vftable_for_Deformer *)&vftable_for_Deformer;
    this_00->offset_0x2c = 5.60519e-45;
    ExceptionList = local_10;
    return this_00;
  }
  ExceptionList = local_10;
  return (Widget *)0x0;
}


