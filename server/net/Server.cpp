// Server (net) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Server.h"

/* cube::Server::Server @ 00422e80  kind=game  attributed-by=rtti  size=262 */

Server * __thiscall cube::Server::Server(Server *this,int param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0054c717;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  this->field1_0x4 = (void *)param_1;
  this[4].vftablePtr = (Server_vftable *)0xf;
  this[3].field1_0x4 = (void *)0x0;
  *(undefined1 *)&this[1].field1_0x4 = 0;
  this[5].vftablePtr = (Server_vftable *)0x0;
  this[5].field1_0x4 = (void *)0x0;
  this[6].vftablePtr = (Server_vftable *)0x0;
  local_8 = 1;
  uStack_7 = 0;
  this[6].field1_0x4 = (void *)0x0;
  this[7].vftablePtr = (Server_vftable *)0x0;
  pvVar1 = (void *)FUN_004268b0((undefined4 *)0x0,(undefined4 *)0x0);
  this[6].field1_0x4 = pvVar1;
  local_8 = 2;
  this[7].field1_0x4 = (void *)0x0;
  this[8].vftablePtr = (Server_vftable *)0x0;
  pvVar1 = (void *)FUN_00407ba0((undefined4 *)0x0,(undefined4 *)0x0);
  this[7].field1_0x4 = pvVar1;
  local_8 = 3;
  this[8].field1_0x4 = (void *)0x0;
  this[9].vftablePtr = (Server_vftable *)0x0;
  pvVar1 = (void *)FUN_004267f0((undefined4 *)0x0,(undefined4 *)0x0);
  this[8].field1_0x4 = pvVar1;
  *(undefined1 *)&this[9].field1_0x4 = 0;
  _local_8 = CONCAT31(uStack_7,4);
  this[1].vftablePtr = *(Server_vftable **)(param_1 + 0x800164);
  if (&this[1].field1_0x4 != (void **)(param_1 + 0x94)) {
    FUN_00401920(&this[1].field1_0x4,(int *)(param_1 + 0x94),0,0xffffffff);
  }
  ExceptionList = local_10;
  return this;
}


/* cube::Server::~Server @ 00423880  kind=game  attributed-by=rtti  size=364 */

void __thiscall cube::Server::~Server(Server *this)

{
  int *piVar1;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  int *piVar2;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c817;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 4;
  this_00 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                         "Stopping server...");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this_00,unaff_EDI);
  *(undefined1 *)&this[9].field1_0x4 = 0;
  closesocket((SOCKET)this[4].field1_0x4);
  WaitForSingleObject(this[10].vftablePtr,0xffffffff);
  piVar1 = this[8].field1_0x4;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(void **)((int)this[8].field1_0x4 + 4) = this[8].field1_0x4;
  this[9].vftablePtr = (Server_vftable *)0x0;
  if (piVar2 != this[8].field1_0x4) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != this[8].field1_0x4);
  }
  operator_delete(this[8].field1_0x4);
  piVar1 = this[7].field1_0x4;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(void **)((int)this[7].field1_0x4 + 4) = this[7].field1_0x4;
  this[8].vftablePtr = (Server_vftable *)0x0;
  if (piVar2 != this[7].field1_0x4) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != this[7].field1_0x4);
  }
  operator_delete(this[7].field1_0x4);
  piVar1 = this[6].field1_0x4;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(void **)((int)this[6].field1_0x4 + 4) = this[6].field1_0x4;
  this[7].vftablePtr = (Server_vftable *)0x0;
  if (piVar2 != this[6].field1_0x4) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != this[6].field1_0x4);
  }
  operator_delete(this[6].field1_0x4);
  if (this[5].vftablePtr != (Server_vftable *)0x0) {
    operator_delete(this[5].vftablePtr);
    this[5].vftablePtr = (Server_vftable *)0x0;
    this[5].field1_0x4 = (void *)0x0;
    this[6].vftablePtr = (Server_vftable *)0x0;
  }
  if ((Server_vftable *)0xf < this[4].vftablePtr) {
    operator_delete(this[1].field1_0x4);
  }
  this[4].vftablePtr = (Server_vftable *)0xf;
  this[3].field1_0x4 = (void *)0x0;
  *(undefined1 *)&this[1].field1_0x4 = 0;
  ExceptionList = local_10;
  return;
}


/* cube::Server::scalar_deleting_destructor @ 00426780  kind=game  attributed-by=rtti  size=33 */

undefined4 * __thiscall cube::Server::scalar_deleting_destructor(Server *this,byte param_1)

{
  ~Server(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}


