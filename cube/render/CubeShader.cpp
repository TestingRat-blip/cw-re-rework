// CubeShader (render) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "CubeShader.h"

/* cube::CubeShader::CubeShader @ 00447c20  kind=game  attributed-by=rtti  size=70 */

CubeShader * __thiscall cube::CubeShader::CubeShader(CubeShader *this,int *param_1)

{
  this[3].field1_0x4 = param_1;
  this->vftablePtr = &vftable;
  this->field1_0x4 = (int *)0x0;
  this[1].vftablePtr = (CubeShader_vftable *)0x0;
  this[1].field1_0x4 = (int *)0x0;
  this[2].vftablePtr = (CubeShader_vftable *)0x0;
  this[2].field1_0x4 = (int *)0x0;
  this[3].vftablePtr = (CubeShader_vftable *)0x0;
  this[4].vftablePtr = (CubeShader_vftable *)0x0;
  return this;
}


/* cube::CubeShader::~CubeShader @ 00447c70  kind=game  attributed-by=rtti  size=102 */

void __thiscall cube::CubeShader::~CubeShader(CubeShader *this)

{
  int *piVar1;
  CubeShader_vftable *pCVar2;
  
  piVar1 = this->field1_0x4;
  this->vftablePtr = &vftable;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  pCVar2 = this[1].vftablePtr;
  if (pCVar2 != (CubeShader_vftable *)0x0) {
    (**(code **)(pCVar2->deleting_destructor + 8))(pCVar2);
  }
  piVar1 = this[2].field1_0x4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = this[1].field1_0x4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  pCVar2 = this[2].vftablePtr;
  if (pCVar2 != (CubeShader_vftable *)0x0) {
    (**(code **)(pCVar2->deleting_destructor + 8))(pCVar2);
  }
  pCVar2 = this[3].vftablePtr;
  if (pCVar2 != (CubeShader_vftable *)0x0) {
    (**(code **)(pCVar2->deleting_destructor + 8))(pCVar2);
  }
  pCVar2 = this[4].vftablePtr;
  if (pCVar2 != (CubeShader_vftable *)0x0) {
    (**(code **)(pCVar2->deleting_destructor + 8))(pCVar2);
  }
  return;
}


/* cube::CubeShader::deleting_destructor @ 00447ce0  kind=game  attributed-by=rtti  size=30 */

CubeShader * __thiscall cube::CubeShader::deleting_destructor(CubeShader *this,byte param_1)

{
  ~CubeShader(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


