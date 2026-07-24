// ObjectiveWidget (ui) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "ObjectiveWidget.h"

/* cube::ObjectiveWidget::vfunction1_for_NamedObject @ 004ce240  kind=game  attributed-by=rtti  size=48 */

ObjectiveWidget * __thiscall
cube::ObjectiveWidget::vfunction1_for_NamedObject(ObjectiveWidget *this,byte param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(this->ObjectiveWidget_data).offset_0x0;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  plasma::Widget::~Widget((Widget *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


