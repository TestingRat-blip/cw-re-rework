// stl (_library) -- server. 96 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "stl.h"

/* std::_System_error_category::scalar_deleting_destructor @ 00401690  kind=lib  attributed-by=stl-ns  size=34 */

undefined4 * __thiscall
std::_System_error_category::scalar_deleting_destructor(_System_error_category *this,byte param_1)

{
                    /* inlined destructor: std::error_category::~error_category */
  this->vftablePtr = (_System_error_category_vftable *)&error_category::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


/* std::_System_error_category::vfunction4 @ 00401b40  kind=lib  attributed-by=stl-ns  size=50 */

void __thiscall std::_System_error_category::vfunction4(_System_error_category *this,int param_1)

{
  char *pcVar1;
  int in_stack_00000008;
  
  pcVar1 = std::_Syserror_map(in_stack_00000008);
  *(int *)param_1 = in_stack_00000008;
  if (pcVar1 != (char *)0x0) {
    *(undefined ***)(param_1 + 4) = &PTR_vftable_00582000;
    return;
  }
  *(undefined ***)(param_1 + 4) = &PTR_vftable_00582008;
  return;
}


/* std::error_category::vfunction4 @ 00401b80  kind=lib  attributed-by=stl-ns  size=18 */

/* std::error_category member function inherited by std::_Generic_error_category
   std::error_category member function inherited by std::_Iostream_error_category */

void __thiscall
std::error_category::vfunction4(error_category *this,undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = this;
  return;
}


/* std::error_category::vfunction5 @ 00401ba0  kind=lib  attributed-by=stl-ns  size=30 */

/* std::error_category member function inherited by std::_Generic_error_category
   std::error_category member function inherited by std::_Iostream_error_category
   std::error_category member function inherited by std::_System_error_category */

uint __thiscall std::error_category::vfunction5(error_category *this,int *param_1,int param_2)

{
  if ((this == (error_category *)param_1[1]) &&
     (param_1 = (int *)*param_1, param_1 == (int *)param_2)) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return (uint)param_1 & 0xffffff00;
}


/* std::error_category::vfunction6 @ 00401bc0  kind=lib  attributed-by=stl-ns  size=51 */

/* std::error_category member function inherited by std::_Generic_error_category
   std::error_category member function inherited by std::_Iostream_error_category
   std::error_category member function inherited by std::_System_error_category */

uint __thiscall
std::error_category::vfunction6(error_category *this,undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_c [2];
  
  piVar1 = (int *)(*this->vftablePtr->vfunction4)(this,local_c,param_1);
  if ((piVar1[1] == param_2[1]) && (piVar1 = (int *)*piVar1, piVar1 == (int *)*param_2)) {
    return CONCAT31((int3)((uint)piVar1 >> 8),1);
  }
  return (uint)piVar1 & 0xffffff00;
}


/* std::_Generic_error_category::vfunction3 @ 00401dd0  kind=lib  attributed-by=stl-ns  size=113 */

undefined1 * __thiscall
std::_Generic_error_category::vfunction3(_Generic_error_category *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int in_stack_00000008;
  
  piVar2 = (int *)std::_Syserror_map(in_stack_00000008);
  piVar3 = (int *)"unknown error";
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)param_1 = 0;
  if ((char)*piVar3 == '\0') {
    FUN_00401a40((void *)param_1,piVar3,0);
    return (undefined1 *)param_1;
  }
  piVar2 = piVar3;
  do {
    iVar1 = *piVar2;
    piVar2 = (int *)((int)piVar2 + 1);
  } while ((char)iVar1 != '\0');
  FUN_00401a40((void *)param_1,piVar3,(int)piVar2 - ((int)piVar3 + 1));
  return (undefined1 *)param_1;
}


/* std::_Iostream_error_category::vfunction3 @ 00401e50  kind=lib  attributed-by=stl-ns  size=79 */

undefined1 * __thiscall
std::_Iostream_error_category::vfunction3(_Iostream_error_category *this,int param_1)

{
  int in_stack_00000008;
  
  if (in_stack_00000008 == 1) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)param_1 = 0;
    FUN_00401a40((void *)param_1,(int *)"iostream stream error",0x15);
    return (undefined1 *)param_1;
  }
  _Generic_error_category::vfunction3((_Generic_error_category *)this,param_1);
  return (undefined1 *)param_1;
}


/* std::_System_error_category::vfunction3 @ 00401ea0  kind=lib  attributed-by=stl-ns  size=113 */

undefined1 * __thiscall
std::_System_error_category::vfunction3(_System_error_category *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int in_stack_00000008;
  
  piVar2 = (int *)std::_Winerror_map(in_stack_00000008);
  piVar3 = (int *)"unknown error";
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)param_1 = 0;
  if ((char)*piVar3 == '\0') {
    FUN_00401a40((void *)param_1,piVar3,0);
    return (undefined1 *)param_1;
  }
  piVar2 = piVar3;
  do {
    iVar1 = *piVar2;
    piVar2 = (int *)((int)piVar2 + 1);
  } while ((char)iVar1 != '\0');
  FUN_00401a40((void *)param_1,piVar3,(int)piVar2 - ((int)piVar3 + 1));
  return (undefined1 *)param_1;
}


/* std::_Generic_error_category::vfunction2 @ 00401f20  kind=lib  attributed-by=stl-ns  size=6 */

char * __thiscall std::_Generic_error_category::vfunction2(_Generic_error_category *this)

{
  return "generic";
}


/* std::_Iostream_error_category::vfunction2 @ 00401f30  kind=lib  attributed-by=stl-ns  size=6 */

char * __thiscall std::_Iostream_error_category::vfunction2(_Iostream_error_category *this)

{
  return "iostream";
}


/* std::_System_error_category::vfunction2 @ 00401f40  kind=lib  attributed-by=stl-ns  size=6 */

char * __thiscall std::_System_error_category::vfunction2(_System_error_category *this)

{
  return "system";
}


/* std::pair<unsigned___int64,unsigned___int64>::operator=<std::pair<unsigned___int64,unsigned___int64>,0> @ 0041cb60  kind=lib  attributed-by=stl-ns  size=34 */

/* Library Function - Single Match
    public: struct std::pair<unsigned __int64,unsigned __int64> & __thiscall std::pair<unsigned
   __int64,unsigned __int64>::operator=<struct std::pair<unsigned __int64,unsigned
   __int64>,0>(struct std::pair<unsigned __int64,unsigned __int64> &&)
   
   Library: Visual Studio 2019 Release */

pair<unsigned___int64,unsigned___int64> * __thiscall
std::pair<unsigned___int64,unsigned___int64>::
operator=<std::pair<unsigned___int64,unsigned___int64>,0>
          (pair<unsigned___int64,unsigned___int64> *this,
          pair<unsigned___int64,unsigned___int64> *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction1 @ 00426ab0  kind=lib  attributed-by=stl-ns  size=104 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction1(_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this,undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = operator_new(0x40);
    if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
  }
  *param_1 = &vftable;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(this + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(this + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(this + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(this + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(this + 0xc);
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction5 @ 00426b20  kind=lib  attributed-by=stl-ns  size=33 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction5(_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this,char param_1)

{
  (*this->vftablePtr->deleting_destructor)(this,0);
  if (param_1 != '\0') {
    operator_delete(this);
  }
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction3 @ 00426b50  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction3(_Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  FUN_00423dd0((int *)(this + 2));
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction3 @ 00426b60  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction3(_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  FUN_004254a0(this + 1);
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction3 @ 00426b70  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction3(_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  FUN_00426020((int *)(this + 2));
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction7 @ 00426c70  kind=lib  attributed-by=stl-ns  size=4 */

int __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction7(_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  return (int)(this + 1);
}


/* std::_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction7 @ 00426c80  kind=lib  attributed-by=stl-ns  size=4 */

int __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction7(_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  return (int)(this + 2);
}


/* std::_Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction1 @ 00426c90  kind=lib  attributed-by=stl-ns  size=94 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction1(_Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this,undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = operator_new(0x38);
    if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
  }
  *param_1 = &vftable;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(this + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(this + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(this + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(this + 10);
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction1 @ 00426cf0  kind=lib  attributed-by=stl-ns  size=50 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction1(_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this,undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = operator_new(0xc);
    if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
  }
  *param_1 = &vftable;
  param_1[1] = this[1].vftablePtr;
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction4 @ 00426f30  kind=lib  attributed-by=stl-ns  size=6 */

TypeDescriptor * __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction4(_Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  return &<lambda_38361316b522edf94308fdf9d1a2954a>::RTTI_Type_Descriptor;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction4 @ 00426f40  kind=lib  attributed-by=stl-ns  size=6 */

TypeDescriptor * __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction4(_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  return &<lambda_8ac7a930af6f0ab005bd27e10d1330ab>::RTTI_Type_Descriptor;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction4 @ 00426f50  kind=lib  attributed-by=stl-ns  size=6 */

TypeDescriptor * __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction4(_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  return &<lambda_ab9fa502c78db4b4288c2bfaac953e1a>::RTTI_Type_Descriptor;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_Constructor_or_Destructor @ 00428790  kind=lib  attributed-by=stl-ns  size=386 */

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffc4 : 0x004288e7 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void __fastcall
std::
_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::
_Func_impl<std::_Callable_obj<<lambda_8ac7a930af6f0ab005bd27e10d1330ab>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_Constructor_or_Destructor
          (int param_1)

{
  u_short uVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  SOCKET SVar3;
  int iVar4;
  undefined4 uVar5;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *unaff_ESI;
  int in_stack_ffffffc4;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *in_stack_ffffffd0;
  sockaddr local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054ca20;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pbVar2 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                        "Starting server...");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar2,unaff_ESI);
  SVar3 = socket(2,1,0);
  *(SOCKET *)(param_1 + 0x24) = SVar3;
  if (SVar3 == 0xffffffff) {
    FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                 "Could not create server socket.");
  }
  local_24.sa_data[6] = '\0';
  local_24.sa_data[7] = '\0';
  local_24.sa_data[8] = '\0';
  local_24.sa_data[9] = '\0';
  local_24.sa_data[10] = '\0';
  local_24.sa_data[0xb] = '\0';
  local_24.sa_data[0xc] = '\0';
  local_24.sa_data[0xd] = '\0';
  local_24.sa_family = 2;
  local_24.sa_data[0] = '\0';
  local_24.sa_data[1] = '\0';
  local_24.sa_data[2] = '\0';
  local_24.sa_data[3] = '\0';
  local_24.sa_data[4] = '\0';
  local_24.sa_data[5] = '\0';
  uVar1 = htons(0x3039);
  local_24.sa_data[0] = (char)uVar1;
  local_24.sa_data[1] = (char)(uVar1 >> 8);
  local_24.sa_data[2] = '\0';
  local_24.sa_data[3] = '\0';
  local_24.sa_data[4] = '\0';
  local_24.sa_data[5] = '\0';
  iVar4 = bind(*(SOCKET *)(param_1 + 0x24),&local_24,0x10);
  if (iVar4 == -1) {
    pbVar2 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                          "Could not bind socket.");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)pbVar2,in_stack_ffffffd0);
  }
  iVar4 = listen(*(SOCKET *)(param_1 + 0x24),10);
  if (iVar4 == -1) {
    pbVar2 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,"Listen failed."
                         );
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)pbVar2,in_stack_ffffffd0);
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  pbVar2 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                        "Server started. Enter Q to quit.");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar2,in_stack_ffffffd0);
  local_8 = 1;
  uVar5 = FUN_00413640((undefined4 *)&stack0xffffffc4);
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  local_8 = 0xffffffff;
  if ((undefined4 *)&stack0xffffffc4 != (undefined4 *)0x0) {
    (**(code **)(in_stack_ffffffc4 + 0x10))(&stack0xffffffc4,'\0');
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 0042b220  kind=lib  attributed-by=stl-ns  size=4112 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  undefined1 *puVar1;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data *pbVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  void *this_00;
  void *pvVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 *******pppppppuVar12;
  int **this_01;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar13;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *pbVar14;
  undefined4 *puVar15;
  void *this_02;
  QuestText *pQVar16;
  int *piVar17;
  uint uVar18;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *pbVar19;
  ushort *puVar20;
  wchar_t *pwVar21;
  int local_298 [2];
  int local_290;
  int iStack_28c;
  basic_iostream<wchar_t,std::char_traits<wchar_t>_> local_288;
  undefined1 local_270 [80];
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_220 [6];
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_1d8;
  int local_1d4;
  undefined4 local_1d0 [2];
  int local_1c8;
  undefined4 local_1c4;
  int local_1c0;
  undefined4 local_1bc [2];
  int local_1b4;
  undefined4 local_1b0 [2];
  int local_1a8;
  int local_1a4;
  int local_1a0;
  uint local_19c;
  void *local_198;
  Database local_194;
  void *local_18c;
  void *local_188;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data *local_184;
  uint local_180;
  uint *local_17c;
  uint *local_178;
  undefined4 local_174;
  undefined4 local_170;
  void *local_16c;
  undefined4 local_168 [2];
  undefined4 local_160 [2];
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_158;
  int *local_154;
  int *local_150;
  int *local_14c;
  int local_148;
  undefined4 local_144;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_140;
  undefined4 local_13c [2];
  undefined4 *local_134;
  int local_130 [50];
  undefined8 local_68;
  void *local_5c [4];
  uint local_4c;
  uint local_48;
  void *local_44 [4];
  int local_34;
  uint local_30;
  undefined4 ******local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cf6b;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar18 = 0;
  local_180 = 0;
                    /* inlined constructor: cube::Speech::Speech */
  this->vbtablePtr =
       (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *)
       &cube::Speech::vftable;
  *(undefined4 *)&this->field_0x4 = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  local_1d8 = this;
  local_140 = this;
  uVar5 = FUN_0042ced0();
  *(undefined4 *)&this->field_0x4 = uVar5;
  puVar1 = &this->field_0xc;
  local_8 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  local_198 = puVar1;
  uVar5 = FUN_0041a030();
  *(undefined4 *)puVar1 = uVar5;
  pbVar2 = &this->
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data;
  local_8._0_1_ = 1;
  *(undefined4 *)pbVar2 = 0;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x4 = 0;
  local_184 = pbVar2;
  uVar5 = FUN_0041a030();
  *(undefined4 *)pbVar2 = uVar5;
  puVar1 = &(this->
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
            field_0x8;
  local_8._0_1_ = 2;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0xc = 0;
  local_18c = puVar1;
  uVar5 = FUN_0041a030();
  *(undefined4 *)puVar1 = uVar5;
  puVar1 = &(this->
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
            field_0x10;
  local_8._0_1_ = 3;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x14 = 0;
  local_188 = puVar1;
  uVar5 = FUN_0041a030();
  *(undefined4 *)puVar1 = uVar5;
  local_8._0_1_ = 4;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x18 = 0;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x1c = 0;
  uVar5 = FUN_0041a030();
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x18 = uVar5;
  pvVar9 = &(this->
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
            field_0x20;
  local_8._0_1_ = 5;
  *(undefined4 *)pvVar9 = 0;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x24 = 0;
  local_16c = pvVar9;
  uVar5 = FUN_0041a030();
  pbVar13 = local_140;
  *(undefined4 *)pvVar9 = uVar5;
  local_8._0_1_ = 6;
  local_134 = (undefined4 *)
              &(local_140->
               basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
               field_0x28;
  *local_134 = 0;
  *(undefined4 *)
   &(local_140->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data)
    .field_0x2c = 0;
  uVar5 = FUN_0042cea0();
  *(undefined4 *)
   &(pbVar13->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x28 = uVar5;
  local_8._0_1_ = 7;
  *(undefined4 *)
   &(pbVar13->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x30 = 0;
  *(undefined4 *)
   &(pbVar13->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x34 = 0;
  uVar5 = FUN_0042cea0();
  *(undefined4 *)
   &(pbVar13->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x30 = uVar5;
  local_8._0_1_ = 8;
  *(undefined4 *)
   &(pbVar13->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x38 = 0;
  *(undefined4 *)
   &(pbVar13->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x3c = 0;
  uVar5 = FUN_0042cea0();
  *(undefined4 *)
   &(pbVar13->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x38 = uVar5;
  local_8._0_1_ = 9;
  FUN_00416b60(local_130);
  local_8._0_1_ = 10;
  cube::Database::Database(&local_194);
  local_8._0_1_ = 0xb;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 ******)((uint)local_2c[0] & 0xffffff00);
  FUN_00401a40(local_2c,(int *)"data4.db",8);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_00413010(&local_194,(int *)local_2c);
  if (0xf < local_18) {
    operator_delete(local_2c[0]);
  }
  local_17c = (uint *)0x0;
  local_178 = (uint *)0x0;
  local_174 = 0;
  local_170 = 0;
  local_8._0_1_ = 0xd;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 ******)((uint)local_2c[0] & 0xffffff00);
  FUN_00401a40(local_2c,(int *)"dict_en.xml",0xb);
  local_8._0_1_ = 0xe;
  FUN_00413130(&local_194,local_2c,&local_17c);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  if (0xf < local_18) {
    operator_delete(local_2c[0]);
  }
  FUN_00412f80((int *)&local_17c);
  if (0 < (int)local_178 - (int)local_17c) {
    local_144 = 0;
    puVar7 = local_17c;
    if (local_17c == local_178) {
      puVar7 = (uint *)0x0;
    }
    pbVar19 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
               *)0x42b48b;
    piVar6 = (int *)FUN_004180a0(local_130,&local_68,puVar7,(int)local_178 - (int)local_17c,0x74,0);
    if (*piVar6 == 0) {
      FUN_00417e00(local_130,&local_144);
      FUN_00417590(&local_144,local_13c);
      puVar7 = (uint *)FUN_00417d30(&local_144,local_1bc);
      uVar8 = FUN_00416be0(local_13c,puVar7);
      cVar4 = (char)uVar8;
      while (cVar4 != '\0') {
        piVar6 = (int *)FUN_0041cba0(local_13c);
        piVar6 = (int *)FUN_00418160(piVar6);
        local_48 = 7;
        local_4c = 0;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
        if ((short)*piVar6 == 0) {
          uVar8 = 0;
        }
        else {
          piVar17 = piVar6;
          do {
            iVar11 = *piVar17;
            piVar17 = (int *)((int)piVar17 + 2);
          } while ((short)iVar11 != 0);
          uVar8 = (int)piVar17 - ((int)piVar6 + 2) >> 1;
        }
        FUN_00417410(local_5c,piVar6,uVar8);
        puVar20 = (ushort *)&DAT_0055b2e0;
        piVar6 = &local_1b4;
        local_8._0_1_ = 0xf;
        this_00 = (void *)FUN_0041cba0(local_13c);
        piVar6 = (int *)FUN_00417510(this_00,piVar6,puVar20);
        piVar6 = (int *)FUN_00418160(piVar6);
        local_30 = 7;
        local_34 = 0;
        local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
        if ((short)*piVar6 == 0) {
          uVar8 = 0;
        }
        else {
          piVar17 = piVar6;
          do {
            iVar11 = *piVar17;
            piVar17 = (int *)((int)piVar17 + 2);
          } while ((short)iVar11 != 0);
          uVar8 = (int)piVar17 - ((int)piVar6 + 2) >> 1;
        }
        FUN_00417410(local_44,piVar6,uVar8);
        local_8._0_1_ = 0x10;
        uVar3 = (undefined1)local_8;
        local_8._0_1_ = 0x10;
        pbVar13 = local_140;
        if (local_34 != 0) {
          piVar6 = (int *)FUN_00419ef0(local_5c,0,local_4c,(ushort *)L"name",4);
          if (piVar6 == (int *)0x0) {
            local_154 = piVar6;
            local_150 = piVar6;
            local_154 = (int *)FUN_0041a030();
            local_8._0_1_ = 0x11;
            local_14c = (int *)0x0;
            local_148 = 0;
            local_14c = (int *)FUN_004f7b60((undefined4 *)0x0,(undefined4 *)0x0);
            puVar15 = local_168;
            local_8 = CONCAT31(local_8._1_3_,0x12);
            pvVar9 = (void *)FUN_0041cba0(local_13c);
            FUN_00417590(pvVar9,puVar15);
            puVar15 = local_1b0;
            pvVar9 = (void *)FUN_0041cba0(local_13c);
            puVar7 = (uint *)FUN_00417d30(pvVar9,puVar15);
            uVar8 = FUN_00416be0(local_168,puVar7);
            cVar4 = (char)uVar8;
            while (cVar4 != '\0') {
              piVar6 = (int *)FUN_0041cba0(local_168);
              puVar10 = FUN_00418160(piVar6);
              if (puVar10 != (undefined *)0x0) {
                piVar6 = (int *)FUN_0041cba0(local_168);
                puVar10 = FUN_00417640(piVar6);
                if (puVar10 != (undefined *)0x0) {
                  piVar6 = (int *)FUN_0041cba0(local_168);
                  piVar6 = (int *)FUN_00418160(piVar6);
                  FUN_00416b00(local_2c,piVar6);
                  local_8._0_1_ = 0x13;
                  piVar6 = (int *)FUN_0041cba0(local_168);
                  piVar6 = (int *)FUN_00417640(piVar6);
                  pvVar9 = (void *)FUN_0042c9a0(&local_154,(ushort *)local_2c);
                  if ((short)*piVar6 == 0) {
                    uVar8 = 0;
                  }
                  else {
                    piVar17 = piVar6;
                    do {
                      iVar11 = *piVar17;
                      piVar17 = (int *)((int)piVar17 + 2);
                    } while ((short)iVar11 != 0);
                    uVar8 = (int)piVar17 - ((int)piVar6 + 2) >> 1;
                  }
                  FUN_00417410(pvVar9,piVar6,uVar8);
                  local_8 = CONCAT31(local_8._1_3_,0x12);
                  if (7 < local_18) {
                    operator_delete(local_2c[0]);
                  }
                }
              }
              FUN_00416c30(local_168,local_298);
              puVar15 = local_1b0;
              pvVar9 = (void *)FUN_0041cba0(local_13c);
              puVar7 = (uint *)FUN_00417d30(pvVar9,puVar15);
              uVar8 = FUN_00416be0(local_168,puVar7);
              cVar4 = (char)uVar8;
            }
            pwVar21 = L"tags";
            piVar6 = &local_1c8;
            pvVar9 = (void *)FUN_0041cba0(local_13c);
            piVar6 = (int *)FUN_00417510(pvVar9,piVar6,(ushort *)pwVar21);
            iVar11 = FUN_00416c20(piVar6);
            if (iVar11 != -1) {
              pwVar21 = L"tags";
              piVar6 = &local_1d4;
              pvVar9 = (void *)FUN_0041cba0(local_13c);
              piVar6 = (int *)FUN_00417510(pvVar9,piVar6,(ushort *)pwVar21);
              piVar6 = (int *)FUN_00418160(piVar6);
              local_18 = 7;
              local_1c = 0;
              local_2c[0] = (undefined4 ******)((uint)local_2c[0] & 0xffff0000);
              if ((short)*piVar6 == 0) {
                uVar8 = 0;
              }
              else {
                piVar17 = piVar6;
                do {
                  iVar11 = *piVar17;
                  piVar17 = (int *)((int)piVar17 + 2);
                } while ((short)iVar11 != 0);
                uVar8 = (int)piVar17 - ((int)piVar6 + 2) >> 1;
              }
              FUN_00417410(local_2c,piVar6,uVar8);
              local_8._0_1_ = 0x14;
              local_288.vbtablePtr =
                   (basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&PTR_0055b2c0;
              local_288.basic_ostream<wchar_t,std::char_traits<wchar_t>_>.vbtablePtr =
                   (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&PTR_00571718;
              std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
              basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_220);
              uVar18 = uVar18 | 1;
              local_8 = CONCAT31(local_8._1_3_,0x15);
              local_180 = uVar18;
              std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
              basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                        (&local_288,(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_270
                        );
              local_8 = 0x16;
                    /* inlined constructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
              *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
                **)((int)&local_288.vbtablePtr +
                   (local_288.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) =
                   &vftable;
              *(int *)((int)&iStack_28c +
                      (local_288.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset)
                   = (local_288.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset +
                     -0x68;
              local_158 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                           *)local_270;
              std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
              basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
                        ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_158);
              pppppppuVar12 = local_2c;
              if (7 < local_18) {
                pppppppuVar12 = (undefined4 *******)local_2c[0];
              }
              local_8 = CONCAT31(local_8._1_3_,0x17);
                    /* inlined constructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
              local_270._0_4_ =
                   &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                    vftable;
              FUN_0042d300(local_270,pppppppuVar12,local_1c,0);
              if (7 < local_18) {
                operator_delete(local_2c[0]);
              }
              iVar11 = *(int *)(&local_288.basic_iostream<wchar_t,std::char_traits<wchar_t>_>_data.
                                 field_0x8 +
                               (local_288.vbtablePtr)->
                               basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
              while (local_8._1_3_ = (undefined3)((uint)local_8 >> 8), iVar11 == 0) {
                local_18 = 7;
                local_1c = 0;
                local_2c[0] = (undefined4 ******)((uint)local_2c[0] & 0xffff0000);
                local_8 = CONCAT31(local_8._1_3_,0x1a);
                FUN_00428ef0((basic_istream<wchar_t,std::char_traits<wchar_t>_> *)&local_288,
                             local_2c);
                piVar6 = local_14c;
                if (local_1c != 0) {
                  iVar11 = FUN_004291a0(local_14c,(undefined4 *)local_14c[1],(int *)local_2c);
                  if (local_148 == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("list<T> too long");
                  }
                  local_148 = local_148 + 1;
                  piVar6[1] = iVar11;
                  **(int **)(iVar11 + 4) = iVar11;
                }
                if (7 < local_18) {
                  operator_delete(local_2c[0]);
                }
                iVar11 = *(int *)(&local_288.basic_iostream<wchar_t,std::char_traits<wchar_t>_>_data
                                   .field_0x8 +
                                 (local_288.vbtablePtr)->
                                 basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
              }
              local_8 = CONCAT31(local_8._1_3_,0x12);
              *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
                **)((int)&local_288.vbtablePtr +
                   (local_288.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) =
                   &vftable;
              *(int *)((int)&iStack_28c +
                      (local_288.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset)
                   = (local_288.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset +
                     -0x68;
              local_270._0_4_ =
                   &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                    vftable;
              FUN_004ce990((int)local_270);
              std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
              ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
                        ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_270);
              std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
              ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                        ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(local_270 + 8));
              std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
              ~basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_220);
            }
            this_01 = (int **)FUN_0042c820(&local_140->field_0x4,(ushort *)local_44);
            if (this_01 != &local_154) {
              FUN_0041a090((int *)(*this_01)[1]);
              local_19c = local_19c & 0xffffff00;
              (*this_01)[1] = (int)*this_01;
              **this_01 = (int)*this_01;
              (*this_01)[2] = (int)*this_01;
              this_01[1] = (int *)0x0;
              FUN_00429430(this_01,(int *)&local_154,local_19c);
            }
            if (this_01 + 2 != &local_14c) {
              FUN_0042ae70(this_01 + 2,(undefined4 *)*local_14c,local_14c);
            }
            local_8._0_1_ = 0x10;
            FUN_0042d520((int *)&local_14c);
            operator_delete(local_14c);
            FUN_0041a180(&local_154,&local_1c4,(int *)*local_154,local_154);
            operator_delete(local_154);
            pvVar9 = local_16c;
          }
          uVar8 = FUN_00419ef0(local_5c,0,local_4c,(ushort *)L"sentence",8);
          if (uVar8 == 0) {
            piVar6 = (int *)FUN_0041cba0(local_13c);
            piVar6 = (int *)FUN_00417640(piVar6);
            pvVar9 = (void *)FUN_0042cad0(pvVar9,(ushort *)local_44);
            if ((short)*piVar6 == 0) {
              uVar8 = 0;
            }
            else {
              piVar17 = piVar6;
              do {
                iVar11 = *piVar17;
                piVar17 = (int *)((int)piVar17 + 2);
              } while ((short)iVar11 != 0);
              uVar8 = (int)piVar17 - ((int)piVar6 + 2) >> 1;
            }
            FUN_00417410(pvVar9,piVar6,uVar8);
          }
          uVar8 = FUN_00419ef0(local_5c,0,local_4c,(ushort *)L"landscape",9);
          if (uVar8 == 0) {
            pwVar21 = L"normal";
            piVar6 = &local_1a4;
            pvVar9 = (void *)FUN_0041cba0(local_13c);
            piVar6 = (int *)FUN_004175c0(pvVar9,piVar6,(ushort *)pwVar21);
            piVar6 = (int *)FUN_00417640(piVar6);
            pvVar9 = (void *)FUN_0042cad0(local_198,(ushort *)local_44);
            if ((short)*piVar6 == 0) {
              uVar8 = 0;
            }
            else {
              piVar17 = piVar6;
              do {
                iVar11 = *piVar17;
                piVar17 = (int *)((int)piVar17 + 2);
              } while ((short)iVar11 != 0);
              uVar8 = (int)piVar17 - ((int)piVar6 + 2) >> 1;
            }
            FUN_00417410(pvVar9,piVar6,uVar8);
            puVar20 = (ushort *)&DAT_0055b32c;
            piVar6 = &local_1a8;
            pvVar9 = (void *)FUN_0041cba0(local_13c);
            piVar6 = (int *)FUN_004175c0(pvVar9,piVar6,puVar20);
            piVar6 = (int *)FUN_00417640(piVar6);
            pvVar9 = (void *)FUN_0042cad0(local_184,(ushort *)local_44);
            if ((short)*piVar6 == 0) {
              uVar8 = 0;
            }
            else {
              piVar17 = piVar6;
              do {
                iVar11 = *piVar17;
                piVar17 = (int *)((int)piVar17 + 2);
              } while ((short)iVar11 != 0);
              uVar8 = (int)piVar17 - ((int)piVar6 + 2) >> 1;
            }
            FUN_00417410(pvVar9,piVar6,uVar8);
            puVar20 = (ushort *)&DAT_0055b334;
            piVar6 = &local_1a0;
            pvVar9 = (void *)FUN_0041cba0(local_13c);
            piVar6 = (int *)FUN_004175c0(pvVar9,piVar6,puVar20);
            piVar6 = (int *)FUN_00417640(piVar6);
            pvVar9 = (void *)FUN_0042cad0(local_18c,(ushort *)local_44);
            if ((short)*piVar6 == 0) {
              uVar8 = 0;
            }
            else {
              piVar17 = piVar6;
              do {
                iVar11 = *piVar17;
                piVar17 = (int *)((int)piVar17 + 2);
              } while ((short)iVar11 != 0);
              uVar8 = (int)piVar17 - ((int)piVar6 + 2) >> 1;
            }
            FUN_00417410(pvVar9,piVar6,uVar8);
            puVar20 = (ushort *)&DAT_0055b33c;
            piVar6 = &local_1c0;
            pvVar9 = (void *)FUN_0041cba0(local_13c);
            piVar6 = (int *)FUN_004175c0(pvVar9,piVar6,puVar20);
            piVar6 = (int *)FUN_00417640(piVar6);
            pvVar9 = (void *)FUN_0042cad0(local_188,(ushort *)local_44);
            if ((short)*piVar6 == 0) {
              uVar8 = 0;
            }
            else {
              piVar17 = piVar6;
              do {
                iVar11 = *piVar17;
                piVar17 = (int *)((int)piVar17 + 2);
              } while ((short)iVar11 != 0);
              uVar8 = (int)piVar17 - ((int)piVar6 + 2) >> 1;
            }
            FUN_00417410(pvVar9,piVar6,uVar8);
          }
          uVar8 = FUN_00419ef0(local_5c,0,local_4c,(ushort *)L"quest",5);
          if (uVar8 == 0) {
            pbVar13 = operator_new(8);
            local_8._0_1_ = 0x1b;
            local_158 = pbVar13;
            if (pbVar13 ==
                (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                0x0) {
              pbVar13 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                         *)0x0;
            }
            else {
              pbVar13->vbtablePtr =
                   (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                    *)0x0;
              *(undefined4 *)&pbVar13->field_0x4 = 0;
              pbVar14 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                         *)FUN_0042ced0();
              pbVar13->vbtablePtr = pbVar14;
            }
            local_8._0_1_ = 0x10;
            puVar15 = (undefined4 *)FUN_004ce000(local_134,(ushort *)local_44);
            *puVar15 = pbVar13;
            puVar15 = local_160;
            pvVar9 = (void *)FUN_0041cba0(local_13c);
            FUN_00417590(pvVar9,puVar15);
            puVar15 = local_1d0;
            pvVar9 = (void *)FUN_0041cba0(local_13c);
            puVar7 = (uint *)FUN_00417d30(pvVar9,puVar15);
            uVar8 = FUN_00416be0(local_160,puVar7);
            cVar4 = (char)uVar8;
            while (cVar4 != '\0') {
              piVar6 = (int *)FUN_0041cba0(local_160);
              puVar10 = FUN_00418160(piVar6);
              if (puVar10 != (undefined *)0x0) {
                piVar6 = (int *)FUN_0041cba0(local_160);
                puVar10 = FUN_00417640(piVar6);
                if (puVar10 != (undefined *)0x0) {
                  piVar6 = (int *)FUN_0041cba0(local_160);
                  piVar6 = (int *)FUN_00418160(piVar6);
                  local_18 = 7;
                  local_1c = 0;
                  local_2c[0] = (undefined4 ******)((uint)local_2c[0] & 0xffff0000);
                  if ((short)*piVar6 == 0) {
                    uVar18 = 0;
                  }
                  else {
                    piVar17 = piVar6;
                    do {
                      iVar11 = *piVar17;
                      piVar17 = (int *)((int)piVar17 + 2);
                    } while ((short)iVar11 != 0);
                    uVar18 = (int)piVar17 - ((int)piVar6 + 2) >> 1;
                  }
                  FUN_00417410(local_2c,piVar6,uVar18);
                  local_8._0_1_ = 0x1c;
                  piVar6 = (int *)FUN_0041cba0(local_160);
                  piVar6 = (int *)FUN_00417640(piVar6);
                  local_158 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                               *)&stack0xfffffd40;
                  pbVar19 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                             *)((uint)pbVar19 & 0xffff0000);
                  if ((short)*piVar6 == 0) {
                    uVar18 = 0;
                  }
                  else {
                    piVar17 = piVar6;
                    do {
                      iVar11 = *piVar17;
                      piVar17 = (int *)((int)piVar17 + 2);
                    } while ((short)iVar11 != 0);
                    uVar18 = (int)piVar17 - ((int)piVar6 + 2) >> 1;
                  }
                  FUN_00417410(&stack0xfffffd40,piVar6,uVar18);
                  local_8._0_1_ = 0x1d;
                  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                            (pbVar13,(ushort *)local_2c);
                  local_8._0_1_ = 0x1c;
                  FUN_0041b050(this_02,&pbVar19->
                                        basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_offset
                              );
                  local_8._0_1_ = 0x10;
                  if (7 < local_18) {
                    operator_delete(local_2c[0]);
                  }
                }
              }
              FUN_00416c30(local_160,&local_290);
              puVar15 = local_1d0;
              pvVar9 = (void *)FUN_0041cba0(local_13c);
              puVar7 = (uint *)FUN_00417d30(pvVar9,puVar15);
              uVar18 = FUN_00416be0(local_160,puVar7);
              cVar4 = (char)uVar18;
              uVar18 = local_180;
            }
          }
          uVar8 = FUN_00419ef0(local_5c,0,local_4c,(ushort *)L"speech",6);
          pbVar13 = local_140;
          pvVar9 = local_16c;
          uVar3 = (undefined1)local_8;
          if (uVar8 == 0) {
            local_158 = operator_new(0x10);
            local_8._0_1_ = 0x1e;
            if (local_158 ==
                (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                0x0) {
              pQVar16 = (QuestText *)0x0;
            }
            else {
              pQVar16 = cube::QuestText::QuestText((QuestText *)local_158);
            }
            local_8._0_1_ = 0x10;
            puVar15 = (undefined4 *)
                      FUN_004ce000(&(local_140->
                                    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                    ).field_0x30,(ushort *)local_44);
            *puVar15 = pQVar16;
            piVar6 = (int *)FUN_0041cba0(local_13c);
            piVar6 = (int *)FUN_00417640(piVar6);
            local_158 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                         *)&stack0xfffffd40;
            pbVar19 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                       *)((uint)pbVar19 & 0xffff0000);
            if ((short)*piVar6 == 0) {
              uVar8 = 0;
            }
            else {
              piVar17 = piVar6;
              do {
                iVar11 = *piVar17;
                piVar17 = (int *)((int)piVar17 + 2);
              } while ((short)iVar11 != 0);
              uVar8 = (int)piVar17 - ((int)piVar6 + 2) >> 1;
            }
            FUN_00417410(&stack0xfffffd40,piVar6,uVar8);
            pbVar13 = local_140;
            local_8._0_1_ = 0x1f;
            puVar15 = (undefined4 *)
                      FUN_004ce000(&(local_140->
                                    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                    ).field_0x30,(ushort *)local_44);
            local_8._0_1_ = 0x10;
            FUN_0041b050((void *)*puVar15,
                         &pbVar19->
                          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_offset
                        );
            pvVar9 = local_16c;
            uVar3 = (undefined1)local_8;
          }
        }
        local_8._0_1_ = uVar3;
        if (7 < local_30) {
          operator_delete(local_44[0]);
        }
        local_30 = 7;
        local_34 = 0;
        local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
        local_8 = CONCAT31(local_8._1_3_,0xd);
        if (7 < local_48) {
          operator_delete(local_5c[0]);
        }
        FUN_00416c30(local_13c,(int *)((int)&local_68 + 4));
        puVar7 = (uint *)FUN_00417d30(&local_144,local_1bc);
        uVar8 = FUN_00416be0(local_13c,puVar7);
        cVar4 = (char)uVar8;
      }
    }
  }
  local_134 = (undefined4 *)0x1;
  pvVar9 = (void *)FUN_0042c710(&(pbVar13->
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 ).field_0x38,(int *)&local_134);
  FUN_00417410(pvVar9,(int *)L"talk:test:1",0xb);
  local_134 = (undefined4 *)0x2;
  pvVar9 = (void *)FUN_0042c710(&(pbVar13->
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 ).field_0x38,(int *)&local_134);
  FUN_00417410(pvVar9,(int *)L"talk:test:2",0xb);
  local_134 = (undefined4 *)0x3;
  pvVar9 = (void *)FUN_0042c710(&(pbVar13->
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 ).field_0x38,(int *)&local_134);
  FUN_00417410(pvVar9,(int *)L"talk:test:3",0xb);
  local_134 = (undefined4 *)0x4;
  pvVar9 = (void *)FUN_0042c710(&(pbVar13->
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 ).field_0x38,(int *)&local_134);
  FUN_00417410(pvVar9,(int *)L"talk:test:4",0xb);
  local_134 = (undefined4 *)0x5;
  pvVar9 = (void *)FUN_0042c710(&(pbVar13->
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 ).field_0x38,(int *)&local_134);
  FUN_00417410(pvVar9,(int *)L"kill:test",9);
  local_134 = (undefined4 *)0x6;
  pvVar9 = (void *)FUN_0042c710(&(pbVar13->
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 ).field_0x38,(int *)&local_134);
  FUN_00417410(pvVar9,(int *)L"creature:strong",0xf);
  local_134 = (undefined4 *)0x7;
  pvVar9 = (void *)FUN_0042c710(&(pbVar13->
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 ).field_0x38,(int *)&local_134);
  FUN_00417410(pvVar9,(int *)L"creature:stupid",0xf);
  local_134 = (undefined4 *)0x8;
  pvVar9 = (void *)FUN_0042c710(&(pbVar13->
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 ).field_0x38,(int *)&local_134);
  FUN_00417410(pvVar9,(int *)L"creature:clever",0xf);
  local_134 = (undefined4 *)0x9;
  pvVar9 = (void *)FUN_0042c710(&(pbVar13->
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 ).field_0x38,(int *)&local_134);
  FUN_00417410(pvVar9,(int *)L"takecare:1",10);
  local_134 = (undefined4 *)0xa;
  pvVar9 = (void *)FUN_0042c710(&(pbVar13->
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 ).field_0x38,(int *)&local_134);
  FUN_00417410(pvVar9,(int *)L"takecare:2",10);
  local_134 = (undefined4 *)0xb;
  pvVar9 = (void *)FUN_0042c710(&(pbVar13->
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 ).field_0x38,(int *)&local_134);
  FUN_00417410(pvVar9,(int *)L"takecare:3",10);
  local_134 = (undefined4 *)0xc;
  pvVar9 = (void *)FUN_0042c710(&(pbVar13->
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 ).field_0x38,(int *)&local_134);
  FUN_00417410(pvVar9,(int *)L"takecare:4",10);
  local_8._0_1_ = 0xb;
  if (local_17c != (uint *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_17c);
    operator_delete(local_17c);
    local_17c = (uint *)0x0;
    local_178 = (uint *)0x0;
    local_174 = 0;
  }
  local_8._0_1_ = 10;
  cube::Database::Database(&local_194);
  local_8 = CONCAT31(local_8._1_3_,9);
  thunk_FUN_00417cc0(local_130);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 0042cc10  kind=lib  attributed-by=stl-ns  size=292 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          ushort *param_1)

{
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *pbVar1;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *pbVar2;
  uint uVar3;
  QuestText *pQVar4;
  int *piVar5;
  QuestText local_54;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  QuestText local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d150;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = this;
  pbVar1 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *
           )FUN_0042d3d0(this,param_1);
  if (pbVar1 != this->vbtablePtr) {
    pbVar2 = pbVar1 + 2;
    if (7 < (uint)pbVar1[4].basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) {
      pbVar2 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                *)pbVar2->
                  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_offset
      ;
    }
    uVar3 = FUN_00419ef0(param_1,0,*(uint *)(param_1 + 8),(ushort *)pbVar2,
                         pbVar1[4].
                         basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_offset
                        );
    if (-1 < (int)uVar3) goto LAB_0042cd13;
  }
  pQVar4 = cube::QuestText::QuestText(&local_54);
  local_8 = 0;
  FUN_00416a90(local_3c,(undefined4 *)param_1);
                    /* inlined constructor or destructor (approx location) for cube::QuestText */
  local_24.vftablePtr = &cube::QuestText::vftable;
  local_24.QuestText_data.offset_0x0 = (pQVar4->QuestText_data).offset_0x0;
  local_8._0_1_ = 1;
  FUN_0042b0e0(&local_24.QuestText_data.offset_0x4,(int *)&(pQVar4->QuestText_data).offset_0x4);
  local_8._0_1_ = 2;
  piVar5 = FUN_00429380(local_40,local_3c);
  FUN_0042a640(local_40,&local_40,(ushort *)pbVar1,(ushort *)(piVar5 + 4),piVar5);
  local_8 = CONCAT31(local_8._1_3_,3);
  cube::QuestText::~QuestText(&local_24);
  if (7 < local_28) {
    operator_delete(local_3c[0]);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c[0] = (void *)((uint)local_3c[0] & 0xffff0000);
  local_8 = 0xffffffff;
  cube::QuestText::~QuestText(&local_54);
LAB_0042cd13:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 0042cd40  kind=lib  attributed-by=stl-ns  size=91 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **ppbVar1;
  int iVar2;
  
  ppbVar1 = &this->vftablePtr;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   ((int)ppbVar1 + this->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset + -0x68) =
       &vftable;
  iVar2 = this->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  *(int *)((int)ppbVar1 + iVar2 + -0x6c) = iVar2 + -0x68;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x4 = &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                 vftable;
  FUN_004ce990((int)&(this->
                     basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                     ).field_0x4);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)
             &(this->
              basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
              field_0x4);
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)
             &(this->
              basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
              field_0xc);
  *ppbVar1 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
              *)_vftable__exref;
  *ppbVar1 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
              *)_vftable__exref;
  std::ios_base::_Ios_base_dtor((ios_base *)ppbVar1);
  return;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction1 @ 0042cd9b  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction1
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          byte param_1)

{
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             ((int)this - (int)this[-1].vftablePtr),param_1);
  return;
}


/* std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::scalar_deleting_destructor @ 0042cdb0  kind=lib  attributed-by=stl-ns  size=47 */

basic_streambuf<wchar_t,std::char_traits<wchar_t>_> * __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
scalar_deleting_destructor
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          byte param_1)

{
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  this->vftablePtr = &vftable;
  FUN_004ce990((int)this);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 0042cde0  kind=lib  attributed-by=stl-ns  size=119 */

ios_base * __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          byte param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = &this[-1].field_0x4;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (*(int *)(*(int *)puVar1 + 4) + -0x68 + (int)this) = &vftable;
  iVar2 = *(int *)(*(int *)&this[-1].field_0x4 + 4);
  *(int *)((int)&this[-1].vbtablePtr + iVar2) = iVar2 + -0x68;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   &this[-1].basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
    field_0x8 = &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                 vftable;
  FUN_004ce990((int)&this[-1].
                     basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                     .field_0x8);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)
             &this[-1].
              basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
              field_0x8);
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)
             &this[-1].
              basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
              field_0x10);
  this->vbtablePtr =
       (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *)
       _vftable__exref;
  this->vbtablePtr =
       (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *)
       _vftable__exref;
  std::ios_base::_Ios_base_dtor((ios_base *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(puVar1);
  }
  return (ios_base *)puVar1;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction2 @ 0042ce81  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction2
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0042ce87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::_Add_vtordisp1
            ((basic_istream<wchar_t,std::char_traits<wchar_t>_> *)
             ((int)this + (-0x50 - (int)this[-1].vftablePtr)));
  return;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction3 @ 0042ce8d  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction3
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0042ce93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Add_vtordisp2
            ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
             ((int)this + (-0x50 - (int)this[-1].vftablePtr)));
  return;
}


/* std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction4 @ 0042e260  kind=lib  attributed-by=stl-ns  size=517 */

wchar_t __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction4
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          wchar_t param_1)

{
  deleting_destructor *pdVar1;
  basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *pbVar2;
  deleting_destructor *pdVar3;
  deleting_destructor *pdVar4;
  wchar_t *pwVar5;
  basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *pbVar6;
  uint uVar7;
  uint uVar8;
  
  if (((uint)this[0xf].vftablePtr & 2) != 0) {
    return L'\xffff';
  }
  if (param_1 == L'\xffff') {
    return L'\0';
  }
  if (((uint)this[0xf].vftablePtr & 8) != 0) {
    pbVar6 = (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *)
             (this[8].vftablePtr)->deleting_destructor;
    if ((pbVar6 != (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
                    *)0x0) && (pbVar2 = this[0xe].vftablePtr, pbVar6 < pbVar2)) {
      pdVar3 = (this[0xc].vftablePtr)->deleting_destructor;
      (this[8].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar2;
      (this[0xc].vftablePtr)->deleting_destructor =
           (deleting_destructor *)((int)((int)pbVar6 + ((int)pdVar3 * 2 - (int)pbVar2)) >> 1);
    }
  }
  pdVar3 = (this[8].vftablePtr)->deleting_destructor;
  if (pdVar3 != (deleting_destructor *)0x0) {
    if (pdVar3 < pdVar3 + (int)(this[0xc].vftablePtr)->deleting_destructor * 2) {
      pwVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Pninc
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
      *pwVar5 = param_1;
      return param_1;
    }
    if (pdVar3 != (deleting_destructor *)0x0) {
      uVar8 = (int)(pdVar3 + ((int)(this[0xc].vftablePtr)->deleting_destructor * 2 -
                             (int)(this[3].vftablePtr)->deleting_destructor)) >> 1;
      goto LAB_0042e301;
    }
  }
  uVar8 = 0;
LAB_0042e301:
  uVar7 = uVar8 >> 1;
  if (uVar7 < 0x20) {
    uVar7 = 0x20;
  }
  else if (uVar7 == 0) {
    return L'\xffff';
  }
  do {
    if (uVar8 <= 0x7fffffff - uVar7) break;
    uVar7 = uVar7 >> 1;
  } while (uVar7 != 0);
  if (uVar7 != 0) {
    uVar7 = uVar7 + uVar8;
    pbVar6 = FUN_00416ec0(uVar7);
    pdVar3 = (this[3].vftablePtr)->deleting_destructor;
    if ((uVar8 == 0) || (memcpy(pbVar6,pdVar3,uVar8 * 2), uVar8 == 0)) {
      this[0xe].vftablePtr = pbVar6;
      (this[4].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar6;
      (this[8].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar6;
      (this[0xc].vftablePtr)->deleting_destructor = (deleting_destructor *)((int)(uVar7 * 2) >> 1);
      pbVar2 = this[0xf].vftablePtr;
      (this[3].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar6;
      if (((uint)pbVar2 & 4) == 0) {
        (this[7].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar6;
        (this[0xb].vftablePtr)->deleting_destructor = (deleting_destructor *)0x1;
      }
      else {
        (this[7].vftablePtr)->deleting_destructor = (deleting_destructor *)0x0;
        (this[0xb].vftablePtr)->deleting_destructor = (deleting_destructor *)((int)pbVar6 >> 1);
      }
    }
    else {
      this[0xe].vftablePtr =
           (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *)
           ((int)&pbVar6->deleting_destructor + ((int)this[0xe].vftablePtr - (int)pdVar3 >> 1) * 2);
      pdVar1 = (deleting_destructor *)
               ((int)&pbVar6->deleting_destructor +
               ((int)(this[8].vftablePtr)->deleting_destructor - (int)pdVar3 >> 1) * 2);
      (this[4].vftablePtr)->deleting_destructor =
           (deleting_destructor *)
           ((int)&pbVar6->deleting_destructor +
           ((int)(this[4].vftablePtr)->deleting_destructor - (int)pdVar3 >> 1) * 2);
      (this[8].vftablePtr)->deleting_destructor = pdVar1;
      (this[0xc].vftablePtr)->deleting_destructor =
           (deleting_destructor *)((int)((uVar7 * 2 - (int)pdVar1) + (int)pbVar6) >> 1);
      if (((uint)this[0xf].vftablePtr & 4) == 0) {
        pdVar4 = (this[8].vftablePtr)->deleting_destructor;
        pdVar1 = (deleting_destructor *)
                 ((int)&pbVar6->deleting_destructor +
                 ((int)(this[7].vftablePtr)->deleting_destructor - (int)pdVar3 >> 1) * 2);
        (this[3].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar6;
        (this[7].vftablePtr)->deleting_destructor = pdVar1;
        (this[0xb].vftablePtr)->deleting_destructor =
             (deleting_destructor *)((int)(pdVar4 + (2 - (int)pdVar1)) >> 1);
      }
      else {
        (this[3].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar6;
        (this[7].vftablePtr)->deleting_destructor = (deleting_destructor *)0x0;
        (this[0xb].vftablePtr)->deleting_destructor = (deleting_destructor *)((int)pbVar6 >> 1);
      }
    }
    if (((uint)this[0xf].vftablePtr & 1) != 0) {
      operator_delete(pdVar3);
    }
    this[0xf].vftablePtr =
         (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *)
         ((uint)this[0xf].vftablePtr | 1);
    pwVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Pninc
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    *pwVar5 = param_1;
    return param_1;
  }
  return L'\xffff';
}


/* std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction5 @ 0042e470  kind=lib  attributed-by=stl-ns  size=97 */

uint __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction5
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          ushort param_1)

{
  deleting_destructor *pdVar1;
  basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *pbVar2;
  
  pbVar2 = this[7].vftablePtr;
  pdVar1 = pbVar2->deleting_destructor;
  if (((pdVar1 != (deleting_destructor *)0x0) &&
      (pbVar2 = this[3].vftablePtr, pbVar2->deleting_destructor < pdVar1)) &&
     ((param_1 == 0xffff ||
      ((param_1 == *(ushort *)(pdVar1 + -2) || (((uint)this[0xf].vftablePtr & 2) == 0)))))) {
    (this[0xb].vftablePtr)->deleting_destructor = (this[0xb].vftablePtr)->deleting_destructor + 1;
    (this[7].vftablePtr)->deleting_destructor = (this[7].vftablePtr)->deleting_destructor + -2;
    if (param_1 != 0xffff) {
      *(ushort *)(this[7].vftablePtr)->deleting_destructor = param_1;
      return (uint)param_1;
    }
    return 0;
  }
  return CONCAT22((short)((uint)pbVar2 >> 0x10),0xffff);
}


/* std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction11 @ 0042e4e0  kind=lib  attributed-by=stl-ns  size=489 */

void __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction11
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          uint *param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *pbVar1;
  deleting_destructor *pdVar2;
  deleting_destructor *pdVar3;
  deleting_destructor *pdVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  pbVar1 = (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *)
           (this[8].vftablePtr)->deleting_destructor;
  if ((pbVar1 != (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
                  *)0x0) && (this[0xe].vftablePtr < pbVar1)) {
    this[0xe].vftablePtr = pbVar1;
  }
  if (((param_5 & 1) == 0) ||
     (pdVar2 = (this[7].vftablePtr)->deleting_destructor, pdVar2 == (deleting_destructor *)0x0)) {
    if (((param_5 & 2) == 0) ||
       (pdVar2 = (this[8].vftablePtr)->deleting_destructor, pdVar2 == (deleting_destructor *)0x0)) {
      if (param_2 == 0 && param_3 == 0) goto LAB_0042e6a3;
    }
    else {
      if (param_4 == 2) {
        iVar5 = (int)this[0xe].vftablePtr - (int)(this[3].vftablePtr)->deleting_destructor;
        uVar6 = iVar5 >> 1;
        bVar8 = CARRY4(param_2,uVar6);
        param_2 = param_2 + uVar6;
        param_3 = param_3 + (iVar5 >> 0x1f) + (uint)bVar8;
      }
      else if (param_4 == 1) {
        iVar5 = (int)pdVar2 - (int)(this[3].vftablePtr)->deleting_destructor;
        uVar6 = iVar5 >> 1;
        bVar8 = CARRY4(param_2,uVar6);
        param_2 = param_2 + uVar6;
        param_3 = param_3 + (iVar5 >> 0x1f) + (uint)bVar8;
      }
      else if (param_4 != 0) {
        param_2 = *(uint *)_BADOFF_exref;
        param_3 = *(uint *)(_BADOFF_exref + 4);
      }
      if (-1 < (int)param_3) {
        pdVar3 = (this[3].vftablePtr)->deleting_destructor;
        iVar5 = (int)this[0xe].vftablePtr - (int)pdVar3;
        iVar7 = iVar5 >> 0x1f;
        if (((int)param_3 <= iVar7) && (((int)param_3 < iVar7 || (param_2 <= (uint)(iVar5 >> 1)))))
        {
          iVar5 = ((int)pdVar3 - (int)pdVar2 >> 1) + param_2;
          (this[0xc].vftablePtr)->deleting_destructor =
               (this[0xc].vftablePtr)->deleting_destructor + -iVar5;
          (this[8].vftablePtr)->deleting_destructor =
               (this[8].vftablePtr)->deleting_destructor + iVar5 * 2;
          goto LAB_0042e6a3;
        }
      }
    }
  }
  else {
    if (param_4 == 2) {
      iVar5 = (int)this[0xe].vftablePtr - (int)(this[3].vftablePtr)->deleting_destructor;
      uVar6 = iVar5 >> 1;
      bVar8 = CARRY4(param_2,uVar6);
      param_2 = param_2 + uVar6;
      param_3 = param_3 + (iVar5 >> 0x1f) + (uint)bVar8;
    }
    else if (param_4 == 1) {
      if ((param_5 & 2) == 0) {
        iVar5 = (int)pdVar2 - (int)(this[3].vftablePtr)->deleting_destructor;
        uVar6 = iVar5 >> 1;
        bVar8 = CARRY4(param_2,uVar6);
        param_2 = param_2 + uVar6;
        param_3 = param_3 + (iVar5 >> 0x1f) + (uint)bVar8;
      }
      else {
LAB_0042e559:
        param_2 = *(uint *)_BADOFF_exref;
        param_3 = *(uint *)(_BADOFF_exref + 4);
      }
    }
    else if (param_4 != 0) goto LAB_0042e559;
    if (-1 < (int)param_3) {
      pdVar3 = (this[3].vftablePtr)->deleting_destructor;
      iVar5 = (int)this[0xe].vftablePtr - (int)pdVar3;
      iVar7 = iVar5 >> 0x1f;
      if (((int)param_3 <= iVar7) && (((int)param_3 < iVar7 || (param_2 <= (uint)(iVar5 >> 1))))) {
        iVar5 = ((int)pdVar3 - (int)pdVar2 >> 1) + param_2;
        (this[0xb].vftablePtr)->deleting_destructor =
             (this[0xb].vftablePtr)->deleting_destructor + -iVar5;
        (this[7].vftablePtr)->deleting_destructor =
             (this[7].vftablePtr)->deleting_destructor + iVar5 * 2;
        if ((param_5 & 2) != 0) {
          pdVar2 = (this[8].vftablePtr)->deleting_destructor;
          if (pdVar2 != (deleting_destructor *)0x0) {
            pdVar3 = (this[0xc].vftablePtr)->deleting_destructor;
            pdVar4 = (this[7].vftablePtr)->deleting_destructor;
            (this[8].vftablePtr)->deleting_destructor = pdVar4;
            (this[0xc].vftablePtr)->deleting_destructor =
                 (deleting_destructor *)((int)(pdVar2 + ((int)pdVar3 * 2 - (int)pdVar4)) >> 1);
          }
        }
        goto LAB_0042e6a3;
      }
    }
  }
  param_2 = *(uint *)_BADOFF_exref;
  param_3 = *(uint *)(_BADOFF_exref + 4);
LAB_0042e6a3:
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


/* std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction12 @ 0042e6d0  kind=lib  attributed-by=stl-ns  size=317 */

void __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction12
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          uint *param_1,uint param_2,int param_3,uint param_4,int param_5,undefined4 param_6,
          undefined4 param_7,uint param_8)

{
  basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *pbVar1;
  uint uVar2;
  uint uVar3;
  deleting_destructor *pdVar4;
  deleting_destructor *pdVar5;
  deleting_destructor *pdVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar11 = param_4 + param_2;
  uVar9 = param_5 + param_3 + (uint)CARRY4(param_4,param_2);
  pbVar1 = (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *)
           (this[8].vftablePtr)->deleting_destructor;
  if ((pbVar1 != (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
                  *)0x0) && (this[0xe].vftablePtr < pbVar1)) {
    this[0xe].vftablePtr = pbVar1;
  }
  uVar2 = *(uint *)_BADOFF_exref;
  uVar3 = *(uint *)(_BADOFF_exref + 4);
  if ((uVar11 != uVar2) || (uVar10 = uVar9, uVar12 = uVar11, uVar9 != uVar3)) {
    uVar10 = uVar3;
    uVar12 = uVar2;
    if (((param_8 & 1) == 0) ||
       (pdVar4 = (this[7].vftablePtr)->deleting_destructor, pdVar4 == (deleting_destructor *)0x0)) {
      if ((((param_8 & 2) != 0) &&
          (pdVar4 = (this[8].vftablePtr)->deleting_destructor, pdVar4 != (deleting_destructor *)0x0)
          ) && (-1 < (int)uVar9)) {
        pdVar5 = (this[3].vftablePtr)->deleting_destructor;
        iVar7 = (int)this[0xe].vftablePtr - (int)pdVar5;
        iVar8 = iVar7 >> 0x1f;
        if (((int)uVar9 <= iVar8) && (((int)uVar9 < iVar8 || (uVar11 <= (uint)(iVar7 >> 1))))) {
          iVar7 = ((int)pdVar5 - (int)pdVar4 >> 1) + uVar11;
          (this[0xc].vftablePtr)->deleting_destructor =
               (this[0xc].vftablePtr)->deleting_destructor + -iVar7;
          (this[8].vftablePtr)->deleting_destructor =
               (this[8].vftablePtr)->deleting_destructor + iVar7 * 2;
          uVar10 = uVar9;
          uVar12 = uVar11;
        }
      }
    }
    else if (-1 < (int)uVar9) {
      pdVar5 = (this[3].vftablePtr)->deleting_destructor;
      iVar7 = (int)this[0xe].vftablePtr - (int)pdVar5;
      iVar8 = iVar7 >> 0x1f;
      if (((int)uVar9 <= iVar8) && (((int)uVar9 < iVar8 || (uVar11 <= (uint)(iVar7 >> 1))))) {
        iVar7 = ((int)pdVar5 - (int)pdVar4 >> 1) + uVar11;
        (this[0xb].vftablePtr)->deleting_destructor =
             (this[0xb].vftablePtr)->deleting_destructor + -iVar7;
        (this[7].vftablePtr)->deleting_destructor =
             (this[7].vftablePtr)->deleting_destructor + iVar7 * 2;
        uVar10 = uVar9;
        uVar12 = uVar11;
        if ((param_8 & 2) != 0) {
          pdVar4 = (this[8].vftablePtr)->deleting_destructor;
          if (pdVar4 != (deleting_destructor *)0x0) {
            pdVar5 = (this[0xc].vftablePtr)->deleting_destructor;
            pdVar6 = (this[7].vftablePtr)->deleting_destructor;
            (this[8].vftablePtr)->deleting_destructor = pdVar6;
            (this[0xc].vftablePtr)->deleting_destructor =
                 (deleting_destructor *)((int)(pdVar4 + ((int)pdVar5 * 2 - (int)pdVar6)) >> 1);
          }
        }
      }
    }
  }
  *param_1 = uVar12;
  param_1[1] = uVar10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


/* std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction7 @ 0042e810  kind=lib  attributed-by=stl-ns  size=103 */

undefined2 __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction7
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *pbVar1;
  basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *pbVar2;
  
  pbVar1 = (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *)
           (this[7].vftablePtr)->deleting_destructor;
  if (pbVar1 == (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
                 *)0x0) {
    return 0xffff;
  }
  if (pbVar1 < (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
                *)((int)&pbVar1->deleting_destructor +
                  (int)(this[0xb].vftablePtr)->deleting_destructor * 2)) {
    return *(undefined2 *)&pbVar1->deleting_destructor;
  }
  if (((((uint)this[0xf].vftablePtr & 4) == 0) &&
      (pbVar2 = (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
                 *)(this[8].vftablePtr)->deleting_destructor,
      pbVar2 != (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
                 *)0x0)) && ((pbVar1 < pbVar2 || (pbVar1 < this[0xe].vftablePtr)))) {
    if (this[0xe].vftablePtr < pbVar2) {
      this[0xe].vftablePtr = pbVar2;
    }
    (this[0xb].vftablePtr)->deleting_destructor =
         (deleting_destructor *)
         ((int)this[0xe].vftablePtr - (int)(this[7].vftablePtr)->deleting_destructor >> 1);
    return *(undefined2 *)(this[7].vftablePtr)->deleting_destructor;
  }
  return 0xffff;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_> @ 0042ec80  kind=lib  attributed-by=stl-ns  size=67 */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  FILE *pFVar1;
  int *piVar2;
  undefined4 uVar3;
  
  pFVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
  this->vftablePtr = &vftable;
  if ((pFVar1 != (FILE *)0x0) &&
     (piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8,
     (undefined1 *)*piVar2 == &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40))
  {
    uVar3 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x38;
    *piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x34;
    *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18 = uVar3;
    *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28 = 0;
  }
  if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x48 !=
      (basic_streambuf<char,std::char_traits<char>_>)0x0) {
    FUN_0042f480((basic_streambuf<char,std::char_traits<char>_> *)this);
  }
                    /* WARNING: Could not recover jumptable at 0x0042ecbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  return;
}


/* std::basic_ifstream<char,std::char_traits<char>_>::vfunction1 @ 0042ee65  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::basic_ifstream<char,std::char_traits<char>_>::vfunction1
          (basic_ifstream<char,std::char_traits<char>_> *this,byte param_1)

{
  FUN_0042eee0((void *)((int)this - (int)this[-1].vftablePtr),param_1);
  return;
}


/* std::basic_ofstream<char,std::char_traits<char>_>::vfunction1 @ 0042ee6d  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::basic_ofstream<char,std::char_traits<char>_>::vfunction1
          (basic_ofstream<char,std::char_traits<char>_> *this,byte param_1)

{
  FUN_0042ef30((void *)((int)this - (int)this[-1].vftablePtr),param_1);
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::scalar_deleting_destructor @ 0042ee80  kind=lib  attributed-by=stl-ns  size=91 */

basic_streambuf<char,std::char_traits<char>_> * __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::scalar_deleting_destructor
          (basic_filebuf<char,std::char_traits<char>_> *this,byte param_1)

{
  FILE *pFVar1;
  int *piVar2;
  undefined4 uVar3;
  
  pFVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
                    /* inlined destructor:
                       std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
                        */
  this->vftablePtr = &vftable;
  if ((pFVar1 != (FILE *)0x0) &&
     (piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8,
     (undefined1 *)*piVar2 == &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40))
  {
    uVar3 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x38;
    *piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x34;
    *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18 = uVar3;
    *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28 = 0;
  }
  if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x48 !=
      (basic_streambuf<char,std::char_traits<char>_>)0x0) {
    FUN_0042f480((basic_streambuf<char,std::char_traits<char>_> *)this);
  }
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (basic_streambuf<char,std::char_traits<char>_> *)this;
}


/* std::basic_ifstream<char,std::char_traits<char>_>::vfunction2 @ 0042f023  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall
std::basic_ifstream<char,std::char_traits<char>_>::vfunction2
          (basic_ifstream<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0042f029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<char,std::char_traits<char>_>::_Add_vtordisp1
            ((basic_istream<char,std::char_traits<char>_> *)
             ((int)this + (-0x58 - (int)this[-1].vftablePtr)));
  return;
}


/* std::basic_ofstream<char,std::char_traits<char>_>::vfunction3 @ 0042f02f  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall
std::basic_ofstream<char,std::char_traits<char>_>::vfunction3
          (basic_ofstream<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0042f035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::_Add_vtordisp2
            ((basic_ostream<char,std::char_traits<char>_> *)
             ((int)this + (-0x58 - (int)this[-1].vftablePtr)));
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction2 @ 0042f240  kind=lib  attributed-by=stl-ns  size=16 */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction2
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  FILE *_File;
  
  _File = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
  if (_File != (FILE *)0x0) {
    _lock_file(_File);
  }
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back @ 0042f3d0  kind=lib  attributed-by=stl-ns  size=33 */

/* Library Function - Single Match
    private: void __thiscall std::basic_filebuf<char,struct std::char_traits<char>
   >::_Reset_back(void)
   
   Library: Visual Studio 2012 Release */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8;
  if ((undefined1 *)*piVar1 == &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40)
  {
    uVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x38;
    *piVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x34;
    *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18 = uVar2;
    *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28 = 0;
  }
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::_Set_back @ 0042f400  kind=lib  attributed-by=stl-ns  size=54 */

/* Library Function - Single Match
    private: void __thiscall std::basic_filebuf<char,struct std::char_traits<char>
   >::_Set_back(void)
   
   Library: Visual Studio 2012 Release */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::_Set_back
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8;
  puVar1 = &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40;
  puVar3 = (undefined1 *)*piVar2;
  if (puVar3 != puVar1) {
    (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x34 = (int)puVar3;
    (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x38 =
         *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28 +
         *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18;
  }
  *piVar2 = (int)puVar1;
  *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18 = puVar1;
  *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28 =
       (int)this + (0x45 - (int)puVar1);
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction3 @ 0042f470  kind=lib  attributed-by=stl-ns  size=16 */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction3
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  FILE *_File;
  
  _File = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
  if (_File != (FILE *)0x0) {
    _unlock_file(_File);
  }
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction15 @ 0042f850  kind=lib  attributed-by=stl-ns  size=62 */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction15
          (basic_filebuf<char,std::char_traits<char>_> *this,locale *param_1)

{
  bool bVar1;
  facet *this_00;
  
  this_00 = FUN_0042e9a0(param_1);
  bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this_00);
  if (bVar1) {
    (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x3c = 0;
    return;
  }
  (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x3c = this_00;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction4 @ 0042fc30  kind=lib  attributed-by=stl-ns  size=483 */

/* WARNING: Removing unreachable block (ram,0x0042fcfd) */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction4
          (basic_filebuf<char,std::char_traits<char>_> *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  size_t sVar5;
  char *pcVar6;
  char cVar7;
  size_t _Count;
  char *local_38;
  char *local_34;
  char local_30;
  char acStack_2f [3];
  undefined8 local_2c;
  undefined1 local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d388;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != -1) {
    uVar1 = **(uint **)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x1c;
    cVar7 = (char)param_1;
    if (uVar1 != 0) {
      piVar2 = *(int **)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x2c;
      iVar3 = *piVar2;
      if (uVar1 < iVar3 + uVar1) {
        *piVar2 = iVar3 + -1;
        piVar2 = *(int **)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x1c;
        pcVar6 = (char *)*piVar2;
        *piVar2 = (int)(pcVar6 + 1);
        *pcVar6 = cVar7;
        goto LAB_0042fdf5;
      }
    }
    if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c != (FILE *)0x0) {
      if ((undefined1 *)*(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8 ==
          &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40) {
        pcVar6 = (char *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x38;
        std::basic_streambuf<char,std::char_traits<char>_>::setg
                  ((basic_streambuf<char,std::char_traits<char>_> *)this,
                   (char *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x34,
                   pcVar6,pcVar6);
      }
      if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x3c == 0) {
        fputc((int)cVar7,(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
      }
      else {
        local_2c = 0;
        _local_30 = CONCAT31(acStack_2f,cVar7);
        local_18 = 0xf;
        local_1c = 8;
        local_24 = 0;
        local_8 = 0;
        while( true ) {
          pcVar6 = (char *)&local_2c;
          if (0xf < local_18) {
            pcVar6 = (char *)local_2c;
          }
          iVar3 = std::codecvt<char,char,int>::out
                            ((codecvt<char,char,int> *)
                             (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x3c,
                             &(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x44,
                             &local_30,acStack_2f,&local_38,pcVar6,pcVar6 + local_1c,&local_34);
          if (iVar3 < 0) goto LAB_0042fde2;
          if (1 < iVar3) break;
          puVar4 = &local_2c;
          if (0xf < local_18) {
            puVar4 = (undefined8 *)(char *)local_2c;
          }
          _Count = (int)local_34 - (int)puVar4;
          if (_Count != 0) {
            puVar4 = &local_2c;
            if (0xf < local_18) {
              puVar4 = (undefined8 *)(char *)local_2c;
            }
            sVar5 = fwrite(puVar4,1,_Count,
                           (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
            if (_Count != sVar5) goto LAB_0042fde2;
          }
          (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x41 =
               (basic_streambuf<char,std::char_traits<char>_>)0x1;
          if (local_38 != &local_30) goto LAB_0042fde2;
          if (_Count == 0) {
            if (0x1f < local_1c) goto LAB_0042fde2;
            FUN_004170c0(&local_2c,8,'\0');
          }
        }
        if (iVar3 == 3) {
          FUN_0042e900((char)_local_30,
                       (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
        }
LAB_0042fde2:
        if (0xf < local_18) {
          operator_delete((char *)local_2c);
        }
      }
    }
  }
LAB_0042fdf5:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction5 @ 0042fe20  kind=lib  attributed-by=stl-ns  size=136 */

uint __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction5
          (basic_filebuf<char,std::char_traits<char>_> *this,uint param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  FILE *_File;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18;
  if (((uVar3 != 0) &&
      ((uint)*(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8 < uVar3)) &&
     ((param_1 == 0xffffffff || (*(byte *)(uVar3 - 1) == param_1)))) {
    piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28;
    *piVar2 = *piVar2 + 1;
    piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18;
    *piVar2 = *piVar2 + -1;
    uVar3 = 0;
    if (param_1 != 0xffffffff) {
      uVar3 = param_1;
    }
    return uVar3;
  }
  _File = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
  if ((_File != (FILE *)0x0) && (param_1 != 0xffffffff)) {
    if (((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x3c == 0) &&
       (iVar4 = ungetc(param_1 & 0xff,_File), iVar4 != -1)) {
      return param_1;
    }
    puVar1 = &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40;
    if ((undefined1 *)*(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18 !=
        puVar1) {
      *puVar1 = (char)param_1;
      _Set_back(this);
      return param_1;
    }
  }
  return 0xffffffff;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction11 @ 00430050  kind=lib  attributed-by=stl-ns  size=242 */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction11
          (basic_filebuf<char,std::char_traits<char>_> *this,undefined4 *param_1,int param_2,
          int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int unaff_EDI;
  int iVar6;
  
  iVar5 = param_3;
  iVar6 = param_2;
  if ((((undefined1 *)*(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18 ==
        &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40) && (param_4 == 1)) &&
     ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x3c == 0)) {
    iVar5 = param_3 + -1 + (uint)(param_2 != 0);
    iVar6 = param_2 + -1;
  }
  if (((((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c != (FILE *)0x0) &&
       (cVar4 = FUN_0042f070((int *)this), cVar4 != '\0')) &&
      (((iVar6 == 0 && iVar5 == 0 && (param_4 == 1)) ||
       (iVar5 = _fseeki64((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c,
                          CONCAT44(param_4,iVar5),unaff_EDI), iVar5 == 0)))) &&
     (iVar5 = fgetpos((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c,
                      (fpos_t *)&param_2), iVar5 == 0)) {
    piVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8;
    if ((undefined1 *)*piVar1 ==
        &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40) {
      uVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x38;
      *piVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x34;
      *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18 = uVar2;
      *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28 = 0;
    }
    param_1[2] = param_2;
    param_1[3] = param_3;
    uVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x44;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = uVar2;
    return;
  }
  pcVar3 = _BADOFF_exref;
  *param_1 = *(undefined4 *)_BADOFF_exref;
  param_1[1] = *(undefined4 *)(pcVar3 + 4);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction12 @ 00430150  kind=lib  attributed-by=stl-ns  size=219 */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction12
          (basic_filebuf<char,std::char_traits<char>_> *this,undefined4 *param_1,int param_2,
          int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_4;
  local_8 = param_5;
  if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c != (FILE *)0x0) {
    cVar3 = FUN_0042f070((int *)this);
    if (cVar3 != '\0') {
      iVar4 = fsetpos((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c,
                      (fpos_t *)&local_c);
      if (iVar4 == 0) {
        if (param_2 != 0 || param_3 != 0) {
          iVar4 = _fseeki64((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c,
                            CONCAT44(1,param_3),unaff_EDI);
          if (iVar4 != 0) goto LAB_004301fa;
        }
        iVar4 = fgetpos((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c,
                        (fpos_t *)&local_c);
        if (iVar4 == 0) {
          (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x44 = param_6;
          _Reset_back(this);
          param_1[2] = local_c;
          param_1[3] = local_8;
          uVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x44;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[4] = uVar1;
          return;
        }
      }
    }
  }
LAB_004301fa:
  pcVar2 = _BADOFF_exref;
  *param_1 = *(undefined4 *)_BADOFF_exref;
  param_1[1] = *(undefined4 *)(pcVar2 + 4);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction13 @ 00430440  kind=lib  attributed-by=stl-ns  size=137 */

basic_streambuf<char,std::char_traits<char>_> * __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction13
          (basic_filebuf<char,std::char_traits<char>_> *this,char *param_1,size_t param_2,
          int param_3)

{
  FILE *pFVar1;
  int iVar2;
  
  pFVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
  if (pFVar1 != (FILE *)0x0) {
    if ((param_1 == (char *)0x0) && (param_2 == 0 && param_3 == 0)) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0;
    }
    iVar2 = setvbuf(pFVar1,param_1,iVar2,param_2);
    if (iVar2 == 0) {
      pFVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
      (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x48 =
           (basic_streambuf<char,std::char_traits<char>_>)0x1;
      (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x41 =
           (basic_streambuf<char,std::char_traits<char>_>)0x0;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init
                ((basic_streambuf<char,std::char_traits<char>_> *)this);
      if (pFVar1 != (FILE *)0x0) {
        (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8 = (int *)&pFVar1->_base;
        *(char ***)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0xc =
             &pFVar1->_base;
        (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18 = &pFVar1->_ptr;
        *(FILE **)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x1c = pFVar1;
        (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28 = &pFVar1->_cnt;
        *(int **)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x2c =
             &pFVar1->_cnt;
      }
      (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c = pFVar1;
      (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x44 = DAT_00583e00;
      (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x3c = 0;
      return (basic_streambuf<char,std::char_traits<char>_> *)this;
    }
  }
  return (basic_streambuf<char,std::char_traits<char>_> *)0x0;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction14 @ 004304d0  kind=lib  attributed-by=stl-ns  size=46 */

undefined4 __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction14
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  
  if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c != (FILE *)0x0) {
    iVar1 = (*this->vftablePtr->vfunction4)(this,-1);
    if (iVar1 != -1) {
      iVar1 = fflush((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction8 @ 00430500  kind=lib  attributed-by=stl-ns  size=492 */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction8
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char ******ppppppcVar4;
  char *pcVar5;
  char *local_38;
  char *local_34;
  char local_2d;
  char *****local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d388;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18;
  if (uVar1 != 0) {
    piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28;
    iVar3 = *piVar2;
    if (uVar1 < iVar3 + uVar1) {
      *piVar2 = iVar3 + -1;
      piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18;
      *piVar2 = *piVar2 + 1;
      goto LAB_00430694;
    }
  }
  if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c != (FILE *)0x0) {
    if ((undefined1 *)*(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8 ==
        &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40) {
      pcVar5 = (char *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x38;
      std::basic_streambuf<char,std::char_traits<char>_>::setg
                ((basic_streambuf<char,std::char_traits<char>_> *)this,
                 (char *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x34,pcVar5
                 ,pcVar5);
    }
    if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x3c != 0) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (char *****)((uint)local_2c[0] & 0xffffff00);
      local_8 = 0;
      iVar3 = fgetc((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
      do {
        if (iVar3 == -1) goto LAB_00430681;
        FUN_004170c0(local_2c,1,(char)iVar3);
        ppppppcVar4 = local_2c;
        if (0xf < local_18) {
          ppppppcVar4 = (char ******)local_2c[0];
        }
        iVar3 = std::codecvt<char,char,int>::in
                          ((codecvt<char,char,int> *)
                           (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x3c,
                           &(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x44,
                           (char *)ppppppcVar4,(char *)((int)ppppppcVar4 + local_1c),&local_34,
                           &local_2d,(char *)local_2c,&local_38);
        if (iVar3 < 0) goto LAB_00430681;
        if (iVar3 < 2) {
          if (local_38 != &local_2d) {
            ppppppcVar4 = local_2c;
            if (0xf < local_18) {
              ppppppcVar4 = (char ******)local_2c[0];
            }
            for (pcVar5 = (char *)((int)ppppppcVar4 + (local_1c - (int)local_34)); 0 < (int)pcVar5;
                pcVar5 = pcVar5 + -1) {
              ungetc((int)local_34[(int)(pcVar5 + -1)],
                     (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
            }
LAB_00430681:
            if (0xf < local_18) {
              operator_delete(local_2c[0]);
            }
            goto LAB_00430694;
          }
          ppppppcVar4 = local_2c;
          if (0xf < local_18) {
            ppppppcVar4 = (char ******)local_2c[0];
          }
          FUN_00401c00(local_2c,0,(int)local_34 - (int)ppppppcVar4);
        }
        else {
          if (iVar3 != 3) goto LAB_00430681;
          if (local_1c != 0) {
            ppppppcVar4 = local_2c;
            if (0xf < local_18) {
              ppppppcVar4 = (char ******)local_2c[0];
            }
            memcpy_s(&local_2d,1,ppppppcVar4,1);
            goto LAB_00430681;
          }
        }
        iVar3 = fgetc((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
      } while( true );
    }
    fgetc((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
  }
LAB_00430694:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction7 @ 004306f0  kind=lib  attributed-by=stl-ns  size=61 */

uint __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction7
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)*(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18;
  if ((pbVar1 != (byte *)0x0) &&
     (pbVar1 < pbVar1 + *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28)) {
    return (uint)*pbVar1;
  }
  uVar2 = (*this->vftablePtr->vfunction8)(this);
  if (uVar2 == 0xffffffff) {
    return 0xffffffff;
  }
  (*this->vftablePtr->vfunction5)(this,uVar2);
  return uVar2;
}


/* std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vfunction1 @ 004ce43b  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vfunction1
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *this,byte param_1)

{
  FUN_004ce480((void *)((int)this - (int)this[-1].vftablePtr),param_1);
  return;
}


/* std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::scalar_deleting_destructor @ 004ce450  kind=lib  attributed-by=stl-ns  size=47 */

basic_streambuf<char,std::char_traits<char>_> * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::scalar_deleting_destructor
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,byte param_1)

{
                    /* inlined destructor:
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
                        */
  this->vftablePtr = &vftable;
  FUN_004ce990((int)this);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (basic_streambuf<char,std::char_traits<char>_> *)this;
}


/* std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vfunction2 @ 004ce561  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall
std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vfunction2
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x004ce567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<char,std::char_traits<char>_>::_Add_vtordisp1
            ((basic_istream<char,std::char_traits<char>_> *)
             ((int)this + (-0x50 - (int)this[-1].vftablePtr)));
  return;
}


/* std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vfunction3 @ 004ce56d  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall
std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vfunction3
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x004ce573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::_Add_vtordisp2
            ((basic_ostream<char,std::char_traits<char>_> *)
             ((int)this + (-0x50 - (int)this[-1].vftablePtr)));
  return;
}


/* std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction4 @ 004d6350  kind=lib  attributed-by=stl-ns  size=455 */

int __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction4
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,int param_1)

{
  basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *pbVar1;
  deleting_destructor *_Src;
  char *pcVar2;
  basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *pbVar3;
  uint uVar4;
  deleting_destructor *pdVar5;
  deleting_destructor *pdVar6;
  
  if (((uint)this[0xf].vftablePtr & 2) != 0) {
    return -1;
  }
  if (param_1 == -1) {
    return 0;
  }
  if (((((uint)this[0xf].vftablePtr & 8) != 0) &&
      (pbVar3 = (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)
                (this[8].vftablePtr)->deleting_destructor,
      pbVar3 != (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)0x0))
     && (pbVar1 = this[0xe].vftablePtr, pbVar3 < pbVar1)) {
    pdVar6 = (this[0xc].vftablePtr)->deleting_destructor;
    (this[8].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar1;
    (this[0xc].vftablePtr)->deleting_destructor =
         (deleting_destructor *)((int)pbVar3 + ((int)pdVar6 - (int)pbVar1));
  }
  pdVar6 = (this[8].vftablePtr)->deleting_destructor;
  if (pdVar6 != (deleting_destructor *)0x0) {
    if (pdVar6 < (this[0xc].vftablePtr)->deleting_destructor + (int)pdVar6) {
      pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::_Pninc
                         ((basic_streambuf<char,std::char_traits<char>_> *)this);
      *pcVar2 = (char)param_1;
      return param_1;
    }
    if (pdVar6 != (deleting_destructor *)0x0) {
      pdVar6 = pdVar6 + ((int)(this[0xc].vftablePtr)->deleting_destructor -
                        (int)(this[3].vftablePtr)->deleting_destructor);
      goto LAB_004d63e2;
    }
  }
  pdVar6 = (deleting_destructor *)0x0;
LAB_004d63e2:
  uVar4 = (uint)pdVar6 >> 1;
  if (uVar4 < 0x20) {
    uVar4 = 0x20;
  }
  else if (uVar4 == 0) {
    return -1;
  }
  do {
    if (pdVar6 <= (deleting_destructor *)(0x7fffffff - uVar4)) break;
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  if (uVar4 != 0) {
    pdVar5 = pdVar6 + uVar4;
    pbVar3 = FUN_004018f0((uint)pdVar5);
    _Src = (this[3].vftablePtr)->deleting_destructor;
    if ((pdVar6 == (deleting_destructor *)0x0) ||
       (memcpy(pbVar3,_Src,(size_t)pdVar6), pdVar6 == (deleting_destructor *)0x0)) {
      this[0xe].vftablePtr = pbVar3;
      (this[4].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar3;
      (this[8].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar3;
      (this[0xc].vftablePtr)->deleting_destructor = pdVar5;
      pbVar1 = this[0xf].vftablePtr;
      (this[3].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar3;
      if (((uint)pbVar1 & 4) == 0) {
        (this[7].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar3;
        (this[0xb].vftablePtr)->deleting_destructor = (deleting_destructor *)0x1;
      }
      else {
        (this[7].vftablePtr)->deleting_destructor = (deleting_destructor *)0x0;
        (this[0xb].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar3;
      }
    }
    else {
      this[0xe].vftablePtr =
           (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)
           ((int)this[0xe].vftablePtr + ((int)pbVar3 - (int)_Src));
      pdVar6 = (this[8].vftablePtr)->deleting_destructor;
      (this[4].vftablePtr)->deleting_destructor =
           (deleting_destructor *)
           ((int)pbVar3 + ((int)(this[4].vftablePtr)->deleting_destructor - (int)_Src));
      pdVar6 = (deleting_destructor *)(((int)pdVar6 - (int)_Src) + (int)pbVar3);
      (this[8].vftablePtr)->deleting_destructor = pdVar6;
      (this[0xc].vftablePtr)->deleting_destructor =
           (deleting_destructor *)((int)pbVar3 + ((int)pdVar5 - (int)pdVar6));
      if (((uint)this[0xf].vftablePtr & 4) == 0) {
        pdVar6 = (this[8].vftablePtr)->deleting_destructor;
        pdVar5 = (this[7].vftablePtr)->deleting_destructor;
        (this[3].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar3;
        pdVar5 = (deleting_destructor *)(((int)pdVar5 - (int)_Src) + (int)pbVar3);
        (this[7].vftablePtr)->deleting_destructor = pdVar5;
        (this[0xb].vftablePtr)->deleting_destructor = pdVar6 + (1 - (int)pdVar5);
      }
      else {
        (this[3].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar3;
        (this[7].vftablePtr)->deleting_destructor = (deleting_destructor *)0x0;
        (this[0xb].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar3;
      }
    }
    if (((uint)this[0xf].vftablePtr & 1) != 0) {
      operator_delete(_Src);
    }
    this[0xf].vftablePtr =
         (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)
         ((uint)this[0xf].vftablePtr | 1);
    pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::_Pninc
                       ((basic_streambuf<char,std::char_traits<char>_> *)this);
    *pcVar2 = (char)param_1;
    return param_1;
  }
  return -1;
}


/* std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction5 @ 004d6520  kind=lib  attributed-by=stl-ns  size=87 */

int __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction5
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,int param_1)

{
  deleting_destructor *pdVar1;
  
  pdVar1 = (this[7].vftablePtr)->deleting_destructor;
  if ((pdVar1 != (deleting_destructor *)0x0) && ((this[3].vftablePtr)->deleting_destructor < pdVar1)
     ) {
    if ((param_1 == -1) ||
       ((SUB41(param_1,0) == pdVar1[-1] || (((uint)this[0xf].vftablePtr & 2) == 0)))) {
      (this[0xb].vftablePtr)->deleting_destructor = (this[0xb].vftablePtr)->deleting_destructor + 1;
      (this[7].vftablePtr)->deleting_destructor = (this[7].vftablePtr)->deleting_destructor + -1;
      if (param_1 != -1) {
        *(this[7].vftablePtr)->deleting_destructor = SUB41(param_1,0);
        return param_1;
      }
      return 0;
    }
  }
  return -1;
}


/* std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction11 @ 004d89a0  kind=lib  attributed-by=stl-ns  size=449 */

void __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction11
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint *param_1,
          uint param_2,uint param_3,int param_4,uint param_5)

{
  basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *pbVar1;
  deleting_destructor *pdVar2;
  deleting_destructor *pdVar3;
  uint uVar4;
  deleting_destructor *pdVar5;
  int iVar6;
  bool bVar7;
  
  pbVar1 = (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)
           (this[8].vftablePtr)->deleting_destructor;
  if ((pbVar1 != (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)0x0)
     && (this[0xe].vftablePtr < pbVar1)) {
    this[0xe].vftablePtr = pbVar1;
  }
  if (((param_5 & 1) == 0) ||
     (pdVar2 = (this[7].vftablePtr)->deleting_destructor, pdVar2 == (deleting_destructor *)0x0)) {
    if (((param_5 & 2) == 0) ||
       (pdVar2 = (this[8].vftablePtr)->deleting_destructor, pdVar2 == (deleting_destructor *)0x0)) {
      if (param_2 == 0 && param_3 == 0) goto LAB_004d8b3b;
    }
    else {
      if (param_4 == 2) {
        uVar4 = (int)this[0xe].vftablePtr - (int)(this[3].vftablePtr)->deleting_destructor;
        bVar7 = CARRY4(param_2,uVar4);
        param_2 = param_2 + uVar4;
        param_3 = param_3 + ((int)uVar4 >> 0x1f) + (uint)bVar7;
      }
      else if (param_4 == 1) {
        uVar4 = (int)pdVar2 - (int)(this[3].vftablePtr)->deleting_destructor;
        bVar7 = CARRY4(param_2,uVar4);
        param_2 = param_2 + uVar4;
        param_3 = param_3 + ((int)uVar4 >> 0x1f) + (uint)bVar7;
      }
      else if (param_4 != 0) {
        param_2 = *(uint *)_BADOFF_exref;
        param_3 = *(uint *)(_BADOFF_exref + 4);
      }
      if (-1 < (int)param_3) {
        pdVar5 = (this[3].vftablePtr)->deleting_destructor;
        uVar4 = (int)this[0xe].vftablePtr - (int)pdVar5;
        iVar6 = (int)uVar4 >> 0x1f;
        if (((int)param_3 <= iVar6) && (((int)param_3 < iVar6 || (param_2 <= uVar4)))) {
          pdVar5 = pdVar5 + (param_2 - (int)pdVar2);
          (this[0xc].vftablePtr)->deleting_destructor =
               (this[0xc].vftablePtr)->deleting_destructor + -(int)pdVar5;
          (this[8].vftablePtr)->deleting_destructor =
               (this[8].vftablePtr)->deleting_destructor + (int)pdVar5;
          goto LAB_004d8b3b;
        }
      }
    }
  }
  else {
    if (param_4 == 2) {
      uVar4 = (int)this[0xe].vftablePtr - (int)(this[3].vftablePtr)->deleting_destructor;
      bVar7 = CARRY4(param_2,uVar4);
      param_2 = param_2 + uVar4;
      param_3 = param_3 + ((int)uVar4 >> 0x1f) + (uint)bVar7;
    }
    else if (param_4 == 1) {
      if ((param_5 & 2) == 0) {
        uVar4 = (int)pdVar2 - (int)(this[3].vftablePtr)->deleting_destructor;
        bVar7 = CARRY4(param_2,uVar4);
        param_2 = param_2 + uVar4;
        param_3 = param_3 + ((int)uVar4 >> 0x1f) + (uint)bVar7;
      }
      else {
LAB_004d8a15:
        param_2 = *(uint *)_BADOFF_exref;
        param_3 = *(uint *)(_BADOFF_exref + 4);
      }
    }
    else if (param_4 != 0) goto LAB_004d8a15;
    if (-1 < (int)param_3) {
      pdVar5 = (this[3].vftablePtr)->deleting_destructor;
      uVar4 = (int)this[0xe].vftablePtr - (int)pdVar5;
      iVar6 = (int)uVar4 >> 0x1f;
      if (((int)param_3 <= iVar6) && (((int)param_3 < iVar6 || (param_2 <= uVar4)))) {
        pdVar5 = pdVar5 + (param_2 - (int)pdVar2);
        (this[0xb].vftablePtr)->deleting_destructor =
             (this[0xb].vftablePtr)->deleting_destructor + -(int)pdVar5;
        (this[7].vftablePtr)->deleting_destructor =
             (this[7].vftablePtr)->deleting_destructor + (int)pdVar5;
        if (((param_5 & 2) != 0) &&
           (pbVar1 = this[8].vftablePtr, pbVar1->deleting_destructor != (deleting_destructor *)0x0))
        {
          pdVar2 = (this[0xc].vftablePtr)->deleting_destructor;
          pdVar5 = pbVar1->deleting_destructor;
          pdVar3 = (this[7].vftablePtr)->deleting_destructor;
          pbVar1->deleting_destructor = pdVar3;
          (this[0xc].vftablePtr)->deleting_destructor = pdVar2 + (int)pdVar5 + -(int)pdVar3;
        }
        goto LAB_004d8b3b;
      }
    }
  }
  param_2 = *(uint *)_BADOFF_exref;
  param_3 = *(uint *)(_BADOFF_exref + 4);
LAB_004d8b3b:
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


/* std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction12 @ 004d8b70  kind=lib  attributed-by=stl-ns  size=287 */

void __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction12
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint *param_1,
          uint param_2,int param_3,uint param_4,int param_5,undefined4 param_6,undefined4 param_7,
          uint param_8)

{
  basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *pbVar1;
  uint uVar2;
  deleting_destructor *pdVar3;
  uint uVar4;
  deleting_destructor *pdVar5;
  deleting_destructor *pdVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = param_4 + param_2;
  uVar8 = param_5 + param_3 + (uint)CARRY4(param_4,param_2);
  pbVar1 = (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)
           (this[8].vftablePtr)->deleting_destructor;
  if ((pbVar1 != (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)0x0)
     && (this[0xe].vftablePtr < pbVar1)) {
    this[0xe].vftablePtr = pbVar1;
  }
  uVar4 = *(uint *)_BADOFF_exref;
  uVar2 = *(uint *)(_BADOFF_exref + 4);
  if ((uVar10 != uVar4) || (uVar9 = uVar8, uVar11 = uVar10, uVar8 != uVar2)) {
    uVar9 = uVar2;
    uVar11 = uVar4;
    if (((param_8 & 1) == 0) ||
       (pdVar6 = (this[7].vftablePtr)->deleting_destructor, pdVar6 == (deleting_destructor *)0x0)) {
      if ((((param_8 & 2) != 0) &&
          ((this[8].vftablePtr)->deleting_destructor != (deleting_destructor *)0x0)) &&
         (-1 < (int)uVar8)) {
        pdVar6 = (this[3].vftablePtr)->deleting_destructor;
        uVar4 = (int)this[0xe].vftablePtr - (int)pdVar6;
        iVar7 = (int)uVar4 >> 0x1f;
        if (((int)uVar8 <= iVar7) && (((int)uVar8 < iVar7 || (uVar10 <= uVar4)))) {
          pdVar6 = pdVar6 + (uVar10 - (int)(this[8].vftablePtr)->deleting_destructor);
          (this[0xc].vftablePtr)->deleting_destructor =
               (this[0xc].vftablePtr)->deleting_destructor + -(int)pdVar6;
          (this[8].vftablePtr)->deleting_destructor =
               (this[8].vftablePtr)->deleting_destructor + (int)pdVar6;
          uVar9 = uVar8;
          uVar11 = uVar10;
        }
      }
    }
    else if (-1 < (int)uVar8) {
      pdVar5 = (this[3].vftablePtr)->deleting_destructor;
      uVar4 = (int)this[0xe].vftablePtr - (int)pdVar5;
      iVar7 = (int)uVar4 >> 0x1f;
      if (((int)uVar8 <= iVar7) && (((int)uVar8 < iVar7 || (uVar10 <= uVar4)))) {
        pdVar5 = pdVar5 + (uVar10 - (int)pdVar6);
        (this[0xb].vftablePtr)->deleting_destructor =
             (this[0xb].vftablePtr)->deleting_destructor + -(int)pdVar5;
        (this[7].vftablePtr)->deleting_destructor =
             (this[7].vftablePtr)->deleting_destructor + (int)pdVar5;
        uVar9 = uVar8;
        uVar11 = uVar10;
        if (((param_8 & 2) != 0) &&
           (pbVar1 = this[8].vftablePtr, pbVar1->deleting_destructor != (deleting_destructor *)0x0))
        {
          pdVar6 = (this[0xc].vftablePtr)->deleting_destructor;
          pdVar5 = pbVar1->deleting_destructor;
          pdVar3 = (this[7].vftablePtr)->deleting_destructor;
          pbVar1->deleting_destructor = pdVar3;
          (this[0xc].vftablePtr)->deleting_destructor = pdVar6 + (int)pdVar5 + -(int)pdVar3;
        }
      }
    }
  }
  *param_1 = uVar11;
  param_1[1] = uVar9;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


/* std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction7 @ 004d9100  kind=lib  attributed-by=stl-ns  size=89 */

uint __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction7
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *pbVar1;
  basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *pbVar2;
  
  pbVar1 = (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)
           (this[7].vftablePtr)->deleting_destructor;
  if (pbVar1 == (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)0x0) {
    return 0xffffffff;
  }
  if (pbVar1 < (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)
               ((int)&pbVar1->deleting_destructor + (int)(this[0xb].vftablePtr)->deleting_destructor
               )) {
    return (uint)(byte)*(code *)&pbVar1->deleting_destructor;
  }
  if (((((uint)this[0xf].vftablePtr & 4) == 0) &&
      (pbVar2 = (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)
                (this[8].vftablePtr)->deleting_destructor,
      pbVar2 != (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)0x0))
     && ((pbVar1 < pbVar2 || (pbVar1 < this[0xe].vftablePtr)))) {
    if (this[0xe].vftablePtr < pbVar2) {
      this[0xe].vftablePtr = pbVar2;
    }
    (this[0xb].vftablePtr)->deleting_destructor =
         (deleting_destructor *)
         ((int)this[0xe].vftablePtr - (int)(this[7].vftablePtr)->deleting_destructor);
    return (uint)(byte)*(this[7].vftablePtr)->deleting_destructor;
  }
  return 0xffffffff;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::scalar_deleting_destructor @ 00549b20  kind=lib  attributed-by=stl-ns  size=34 */

undefined4 * __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::scalar_deleting_destructor
          (_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
           *this,byte param_1)

{
                    /* inlined destructor:
                       std::_Func_base<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::~_Func_base<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                        */
  this->vftablePtr =
       (_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_vftable
        *)&_Func_base<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::
           vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction3 @ 00549b50  kind=lib  attributed-by=stl-ns  size=59 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction3(_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  undefined4 uStack_8;
  
  uStack_8 = this;
  do {
    Sleep(1000);
    FUN_00549200((basic_istream<char,std::char_traits<char>_> *)cin_exref,
                 (undefined1 *)((int)&uStack_8 + 3));
  } while (uStack_8._3_1_ != 'q');
  *(undefined1 *)&(this[1].vftablePtr)->vfunction1 = 0;
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_90aea85a8928b722e251ae835df30be1>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction3 @ 00549b90  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_90aea85a8928b722e251ae835df30be1>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction3(_Func_impl<std::_Callable_obj<<lambda_90aea85a8928b722e251ae835df30be1>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  FUN_00549550((int *)(this + 1));
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction1 @ 00549ba0  kind=lib  attributed-by=stl-ns  size=50 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction1(_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this,undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = operator_new(0xc);
    if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
  }
  *param_1 = &vftable;
  param_1[1] = this[1].vftablePtr;
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_90aea85a8928b722e251ae835df30be1>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction1 @ 00549be0  kind=lib  attributed-by=stl-ns  size=70 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_90aea85a8928b722e251ae835df30be1>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction1(_Func_impl<std::_Callable_obj<<lambda_90aea85a8928b722e251ae835df30be1>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this,undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = operator_new(0x1c);
    if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
  }
  *param_1 = &vftable;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(this + 1);
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(this + 3);
  param_1[5] = this[5].vftablePtr;
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction4 @ 00549c30  kind=lib  attributed-by=stl-ns  size=6 */

TypeDescriptor * __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction4(_Func_impl<std::_Callable_obj<<lambda_00ca7a589ff1e281ef3a7159f4e6a134>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  return &<lambda_00ca7a589ff1e281ef3a7159f4e6a134>::RTTI_Type_Descriptor;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_90aea85a8928b722e251ae835df30be1>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction4 @ 00549c40  kind=lib  attributed-by=stl-ns  size=6 */

TypeDescriptor * __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_90aea85a8928b722e251ae835df30be1>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction4(_Func_impl<std::_Callable_obj<<lambda_90aea85a8928b722e251ae835df30be1>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  return &<lambda_90aea85a8928b722e251ae835df30be1>::RTTI_Type_Descriptor;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Lock @ 0054a738  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Lock
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0054a738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Lock(this);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Unlock @ 0054a73e  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Unlock
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0054a73e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Unlock(this);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::imbue @ 0054a744  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::imbue
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this,locale *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0054a744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  imbue(this,param_1);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setbuf @ 0054a74a  kind=lib  attributed-by=stl-ns  size=6 */

basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> * __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setbuf
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this,wchar_t *param_1,
          __int64 param_2)

{
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a74a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar1 = setbuf(this,param_1,param_2);
  return pbVar1;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::showmanyc @ 0054a750  kind=lib  attributed-by=stl-ns  size=6 */

__int64 __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::showmanyc
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = showmanyc(this);
  return _Var1;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sync @ 0054a756  kind=lib  attributed-by=stl-ns  size=6 */

int __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sync
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sync(this);
  return iVar1;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::uflow @ 0054a75c  kind=lib  attributed-by=stl-ns  size=6 */

ushort __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::uflow
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = uflow(this);
  return uVar1;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::xsgetn @ 0054a762  kind=lib  attributed-by=stl-ns  size=6 */

__int64 __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::xsgetn
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this,wchar_t *param_1,
          __int64 param_2)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = xsgetn(this,param_1,param_2);
  return _Var1;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::xsputn @ 0054a768  kind=lib  attributed-by=stl-ns  size=6 */

__int64 __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::xsputn
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this,wchar_t *param_1,
          __int64 param_2)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = xsputn(this,param_1,param_2);
  return _Var1;
}


/* MSVCP110.DLL::std::basic_ios<char,std::char_traits<char>_>::_Add_vtordisp1 @ 0054a76e  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_ios<char,std::char_traits<char>_>::_Add_vtordisp1
          (basic_ios<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0054a76e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Add_vtordisp1(this);
  return;
}


/* MSVCP110.DLL::std::basic_ios<char,std::char_traits<char>_>::_Add_vtordisp2 @ 0054a774  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_ios<char,std::char_traits<char>_>::_Add_vtordisp2
          (basic_ios<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0054a774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Add_vtordisp2(this);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::showmanyc @ 0054a77a  kind=lib  attributed-by=stl-ns  size=6 */

__int64 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::showmanyc
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a77a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = showmanyc(this);
  return _Var1;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::xsgetn @ 0054a780  kind=lib  attributed-by=stl-ns  size=6 */

__int64 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::xsgetn
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = xsgetn(this,param_1,param_2);
  return _Var1;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::xsputn @ 0054a786  kind=lib  attributed-by=stl-ns  size=6 */

__int64 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::xsputn
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = xsputn(this,param_1,param_2);
  return _Var1;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::_Lock @ 0054a78c  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::_Lock
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0054a78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Lock(this);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::_Unlock @ 0054a792  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::_Unlock
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0054a792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Unlock(this);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::imbue @ 0054a798  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::imbue
          (basic_streambuf<char,std::char_traits<char>_> *this,locale *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0054a798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  imbue(this,param_1);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::setbuf @ 0054a79e  kind=lib  attributed-by=stl-ns  size=6 */

basic_streambuf<char,struct_std::char_traits<char>_> * __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::setbuf
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a79e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar1 = setbuf(this,param_1,param_2);
  return pbVar1;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::sync @ 0054a7a4  kind=lib  attributed-by=stl-ns  size=6 */

int __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::sync
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sync(this);
  return iVar1;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::uflow @ 0054a7aa  kind=lib  attributed-by=stl-ns  size=6 */

int __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::uflow
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a7aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = uflow(this);
  return iVar1;
}


/* std::error_category::~error_category @ 00557630  kind=lib  attributed-by=stl-ns  size=11 */

void std::error_category::~error_category(void)

{
  PTR_vftable_00582000 = (undefined *)&vftable;
  return;
}


/* std::error_category::~error_category @ 00557640  kind=lib  attributed-by=stl-ns  size=11 */

void std::error_category::~error_category(void)

{
  PTR_vftable_00582004 = (undefined *)&vftable;
  return;
}


/* std::error_category::~error_category @ 00557650  kind=lib  attributed-by=stl-ns  size=11 */

void std::error_category::~error_category(void)

{
  PTR_vftable_00582008 = (undefined *)&vftable;
  return;
}


