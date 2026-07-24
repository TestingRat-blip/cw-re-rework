// stl (_library) -- cube. 117 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "stl.h"

/* std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_> @ 00403df0  kind=lib  attributed-by=stl-ns  size=67 */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
  this->vftablePtr = &vftable;
  if ((iVar1 != 0) &&
     (piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8,
     (undefined1 *)*piVar2 == &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40))
  {
    uVar3 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x38;
    *piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x34;
    *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18 = uVar3;
    *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28 = 0;
  }
  if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x48 != '\0') {
    FUN_0040c4c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00403e2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  return;
}


/* std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_> @ 00403e40  kind=lib  attributed-by=stl-ns  size=108 */

void __thiscall
std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
          (basic_ifstream<char,std::char_traits<char>_> *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
                    /* inlined constructor:
                       std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
                        */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)
   (*(int *)(*(int *)&this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x8 + 4) +
    -0x70 + (int)this) = &vftable;
  iVar1 = *(int *)(*(int *)&this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x8 + 4
                  );
  *(int *)(iVar1 + -0x74 + (int)this) = iVar1 + -0x70;
  iVar1 = *(int *)&this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x68;
  *(basic_filebuf<char,std::char_traits<char>_>_vftable **)
   &this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x18 =
       &basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((iVar1 != 0) &&
     (piVar2 = *(int **)&this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x24,
     (undefined1 *)*piVar2 == &this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x5c
     )) {
    uVar3 = *(undefined4 *)&this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x54;
    *piVar2 = *(int *)&this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x50;
    **(undefined4 **)&this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x34 = uVar3;
    **(undefined4 **)&this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x44 = 0;
  }
  if (this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x64 != '\0') {
    FUN_0040c4c0();
  }
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)
             &this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x18);
                    /* WARNING: Could not recover jumptable at 0x00403ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)
             &this[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x20);
  return;
}


/* std::basic_ifstream<char,std::char_traits<char>_>::vfunction1 @ 0040447b  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall std::basic_ifstream<char,std::char_traits<char>_>::vfunction1(void)

{
  FUN_004044f0();
  return;
}


/* std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vfunction1 @ 00404483  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vfunction1
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  FUN_00404570((int)this - (int)this[-1].vftablePtr);
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::deleting_destructor @ 00404490  kind=lib  attributed-by=stl-ns  size=88 */

basic_filebuf<char,std::char_traits<char>_> * __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::deleting_destructor
          (basic_filebuf<char,std::char_traits<char>_> *this,byte param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
                    /* inlined destructor:
                       std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
                        */
  this->vftablePtr = &vftable;
  if ((iVar1 != 0) &&
     (piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8,
     (undefined1 *)*piVar2 == &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40))
  {
    uVar3 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x38;
    *piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x34;
    *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18 = uVar3;
    *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28 = 0;
  }
  if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x48 != '\0') {
    FUN_0040c4c0();
  }
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::deleting_destructor @ 00404540  kind=lib  attributed-by=stl-ns  size=44 */

basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::deleting_destructor
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,byte param_1)

{
                    /* inlined destructor:
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
                        */
  this->vftablePtr = &vftable;
  FUN_0040b4e0();
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* std::_System_error_category::deleting_destructor @ 00404620  kind=lib  attributed-by=stl-ns  size=31 */

error_category * __thiscall
std::_System_error_category::deleting_destructor(_System_error_category *this,byte param_1)

{
                    /* inlined destructor: std::error_category::~error_category */
  this->vftablePtr = (_System_error_category_vftable *)&error_category::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return (error_category *)this;
}


/* std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vfunction2 @ 0040503c  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall
std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vfunction2
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00405042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<char,std::char_traits<char>_>::_Add_vtordisp1
            ((basic_istream<char,std::char_traits<char>_> *)
             ((int)this + (-0x50 - (int)this[-1].vftablePtr)));
  return;
}


/* std::basic_ifstream<char,std::char_traits<char>_>::vfunction2 @ 00405048  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall
std::basic_ifstream<char,std::char_traits<char>_>::vfunction2
          (basic_ifstream<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040504e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<char,std::char_traits<char>_>::_Add_vtordisp1
            ((basic_istream<char,std::char_traits<char>_> *)
             ((int)this + (-0x58 - (int)this[-1]._Iosb<int>)));
  return;
}


/* std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vfunction3 @ 00405054  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall
std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vfunction3
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040505a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::_Add_vtordisp2
            ((basic_ostream<char,std::char_traits<char>_> *)
             ((int)this + (-0x50 - (int)this[-1].vftablePtr)));
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction2 @ 004090a0  kind=lib  attributed-by=stl-ns  size=16 */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction2
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  FILE *_File;
  
  _File = (FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
  if (_File != (FILE *)0x0) {
    _lock_file(_File);
  }
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back @ 0040a990  kind=lib  attributed-by=stl-ns  size=33 */

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


/* std::basic_filebuf<char,std::char_traits<char>_>::_Set_back @ 0040b4a0  kind=lib  attributed-by=stl-ns  size=54 */

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


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction3 @ 0040b540  kind=lib  attributed-by=stl-ns  size=16 */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction3
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  FILE *_File;
  
  _File = (FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
  if (_File != (FILE *)0x0) {
    _unlock_file(_File);
  }
  return;
}


/* std::_System_error_category::vfunction4 @ 0040c6d0  kind=lib  attributed-by=stl-ns  size=50 */

void __thiscall
std::_System_error_category::vfunction4(_System_error_category *this,int *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = std::_Syserror_map(param_2);
  *param_1 = param_2;
  if (pcVar1 != (char *)0x0) {
    param_1[1] = (int)&PTR_vftable_00765064;
    return;
  }
  param_1[1] = (int)&PTR_vftable_0076506c;
  return;
}


/* std::error_category::vfunction4 @ 0040c710  kind=lib  attributed-by=stl-ns  size=18 */

/* std::error_category member function inherited by std::_Generic_error_category
   std::error_category member function inherited by std::_Iostream_error_category */

void __thiscall
std::error_category::vfunction4(error_category *this,undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = this;
  return;
}


/* std::error_category::vfunction5 @ 0040c730  kind=lib  attributed-by=stl-ns  size=30 */

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


/* std::error_category::vfunction6 @ 0040c750  kind=lib  attributed-by=stl-ns  size=51 */

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


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction15 @ 0040cc00  kind=lib  attributed-by=stl-ns  size=62 */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction15
          (basic_filebuf<char,std::char_traits<char>_> *this,undefined4 param_1)

{
  bool bVar1;
  codecvt_base *this_00;
  
  this_00 = (codecvt_base *)FUN_004030e0(param_1);
  bVar1 = std::codecvt_base::always_noconv(this_00);
  if (bVar1) {
    *(undefined4 *)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x3c = 0;
    return;
  }
  *(codecvt_base **)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x3c = this_00;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  return;
}


/* std::_Generic_error_category::vfunction3 @ 0040d0c0  kind=lib  attributed-by=stl-ns  size=113 */

undefined1 * __thiscall
std::_Generic_error_category::vfunction3
          (_Generic_error_category *this,undefined1 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = std::_Syserror_map(param_2);
  pcVar3 = "unknown error";
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if (*pcVar3 == '\0') {
    FUN_0040c280(pcVar3,0);
    return param_1;
  }
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0040c280(pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  return param_1;
}


/* std::_Iostream_error_category::vfunction3 @ 0040d140  kind=lib  attributed-by=stl-ns  size=79 */

undefined1 * __thiscall
std::_Iostream_error_category::vfunction3
          (_Iostream_error_category *this,undefined1 *param_1,int param_2)

{
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_0040c280("iostream stream error",0x15);
    return param_1;
  }
  _Generic_error_category::vfunction3((_Generic_error_category *)this,param_1,param_2);
  return param_1;
}


/* std::_System_error_category::vfunction3 @ 0040d190  kind=lib  attributed-by=stl-ns  size=113 */

undefined1 * __thiscall
std::_System_error_category::vfunction3
          (_System_error_category *this,undefined1 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = std::_Winerror_map(param_2);
  pcVar3 = "unknown error";
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if (*pcVar3 == '\0') {
    FUN_0040c280(pcVar3,0);
    return param_1;
  }
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0040c280(pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  return param_1;
}


/* std::_Generic_error_category::vfunction2 @ 0040d210  kind=lib  attributed-by=stl-ns  size=6 */

char * __thiscall std::_Generic_error_category::vfunction2(void)

{
  return "generic";
}


/* std::_Iostream_error_category::vfunction2 @ 0040d220  kind=lib  attributed-by=stl-ns  size=6 */

char * __thiscall std::_Iostream_error_category::vfunction2(void)

{
  return "iostream";
}


/* std::_System_error_category::vfunction2 @ 0040d230  kind=lib  attributed-by=stl-ns  size=6 */

char * __thiscall std::_System_error_category::vfunction2(void)

{
  return "system";
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction4 @ 0040d350  kind=lib  attributed-by=stl-ns  size=480 */

/* WARNING: Removing unreachable block (ram,0x0040d41d) */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction4
          (basic_filebuf<char,std::char_traits<char>_> *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  size_t sVar6;
  char *pcVar7;
  char cVar8;
  size_t _Count;
  char *local_38;
  char *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined1 local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  if (param_1 != -1) {
    uVar1 = **(uint **)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x1c;
    cVar8 = (char)param_1;
    if (uVar1 != 0) {
      piVar2 = *(int **)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x2c;
      iVar4 = *piVar2;
      if (uVar1 < iVar4 + uVar1) {
        *piVar2 = iVar4 + -1;
        piVar2 = *(int **)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x1c;
        pcVar7 = (char *)*piVar2;
        *piVar2 = (int)(pcVar7 + 1);
        *pcVar7 = cVar8;
        goto LAB_0040d515;
      }
    }
    if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c != 0) {
      if ((undefined1 *)*(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8 ==
          &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40) {
        pcVar7 = (char *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x38;
        std::basic_streambuf<char,std::char_traits<char>_>::setg
                  ((basic_streambuf<char,std::char_traits<char>_> *)this,
                   (char *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x34,
                   pcVar7,pcVar7);
      }
      if (*(int *)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x3c == 0) {
        fputc((int)cVar8,
              (FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
      }
      else {
        local_2c = 0;
        local_30 = CONCAT31(local_30._1_3_,cVar8);
        local_18 = 0xf;
        local_1c = 8;
        local_24 = 0;
        local_8 = 0;
        while( true ) {
          pcVar7 = (char *)&local_2c;
          if (0xf < local_18) {
            pcVar7 = (char *)local_2c;
          }
          iVar4 = std::codecvt<char,char,int>::out
                            (*(codecvt<char,char,int> **)
                              &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x3c,
                             (int *)&(this->basic_filebuf<char,std::char_traits<char>_>_data).
                                     field_0x44,(char *)&local_30,(char *)((int)&local_30 + 1),
                             &local_38,pcVar7,pcVar7 + local_1c,&local_34);
          if (iVar4 < 0) goto LAB_0040d502;
          if (1 < iVar4) break;
          puVar5 = &local_2c;
          if (0xf < local_18) {
            puVar5 = (undefined8 *)(char *)local_2c;
          }
          _Count = (int)local_34 - (int)puVar5;
          if (_Count != 0) {
            puVar5 = &local_2c;
            if (0xf < local_18) {
              puVar5 = (undefined8 *)(char *)local_2c;
            }
            sVar6 = fwrite(puVar5,1,_Count,
                           (FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).
                                   offset_0x4c);
            if (_Count != sVar6) goto LAB_0040d502;
          }
          (this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x41 = 1;
          if (local_38 != (char *)&local_30) goto LAB_0040d502;
          if (_Count == 0) {
            if (0x1f < local_1c) goto LAB_0040d502;
            FUN_0040bff0(8,0);
          }
        }
        if (iVar4 == 3) {
          FUN_00402350(local_30,(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c
                       ,uVar3);
        }
LAB_0040d502:
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete((char *)local_2c);
        }
      }
    }
  }
LAB_0040d515:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction4 @ 0040d540  kind=lib  attributed-by=stl-ns  size=452 */

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
      goto LAB_0040d5d2;
    }
  }
  pdVar6 = (deleting_destructor *)0x0;
LAB_0040d5d2:
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
  if (uVar4 == 0) {
    return -1;
  }
  pdVar5 = pdVar6 + uVar4;
  pbVar3 = (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)
           FUN_0040bfc0(pdVar5);
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
  if (((uint)this[0xf].vftablePtr & 1) == 0) {
    this[0xf].vftablePtr =
         (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable *)
         ((uint)this[0xf].vftablePtr | 1);
    pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::_Pninc
                       ((basic_streambuf<char,std::char_traits<char>_> *)this);
    *pcVar2 = (char)param_1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(_Src);
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction5 @ 0040d710  kind=lib  attributed-by=stl-ns  size=136 */

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
  _File = (FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
  if ((_File != (FILE *)0x0) && (param_1 != 0xffffffff)) {
    if ((*(int *)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x3c == 0) &&
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


/* std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction5 @ 0040d7a0  kind=lib  attributed-by=stl-ns  size=87 */

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


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction11 @ 0040dad0  kind=lib  attributed-by=stl-ns  size=242 */

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
     (*(int *)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x3c == 0)) {
    iVar5 = param_3 + -1 + (uint)(param_2 != 0);
    iVar6 = param_2 + -1;
  }
  if (((((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c != 0) &&
       (cVar4 = FUN_00405cc0(), cVar4 != '\0')) &&
      (((iVar6 == 0 && iVar5 == 0 && (param_4 == 1)) ||
       (iVar5 = _fseeki64((FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).
                                  offset_0x4c,CONCAT44(param_4,iVar5),unaff_EDI), iVar5 == 0)))) &&
     (iVar5 = fgetpos((FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c,
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
    uVar2 = *(undefined4 *)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x44;
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


/* std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction11 @ 0040dbd0  kind=lib  attributed-by=stl-ns  size=449 */

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
      if (param_2 == 0 && param_3 == 0) goto LAB_0040dd6b;
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
          goto LAB_0040dd6b;
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
LAB_0040dc45:
        param_2 = *(uint *)_BADOFF_exref;
        param_3 = *(uint *)(_BADOFF_exref + 4);
      }
    }
    else if (param_4 != 0) goto LAB_0040dc45;
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
        goto LAB_0040dd6b;
      }
    }
  }
  param_2 = *(uint *)_BADOFF_exref;
  param_3 = *(uint *)(_BADOFF_exref + 4);
LAB_0040dd6b:
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction12 @ 0040dda0  kind=lib  attributed-by=stl-ns  size=219 */

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
  if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c != 0) {
    cVar3 = FUN_00405cc0();
    if (cVar3 != '\0') {
      iVar4 = fsetpos((FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c,
                      (fpos_t *)&local_c);
      if (iVar4 == 0) {
        if (param_2 != 0 || param_3 != 0) {
          iVar4 = _fseeki64((FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).
                                    offset_0x4c,CONCAT44(1,param_3),unaff_EDI);
          if (iVar4 != 0) goto LAB_0040de4a;
        }
        iVar4 = fgetpos((FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c
                        ,(fpos_t *)&local_c);
        if (iVar4 == 0) {
          *(undefined4 *)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x44 =
               param_6;
          _Reset_back(this);
          param_1[2] = local_c;
          param_1[3] = local_8;
          uVar1 = *(undefined4 *)
                   &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x44;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[4] = uVar1;
          return;
        }
      }
    }
  }
LAB_0040de4a:
  pcVar2 = _BADOFF_exref;
  *param_1 = *(undefined4 *)_BADOFF_exref;
  param_1[1] = *(undefined4 *)(pcVar2 + 4);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


/* std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction12 @ 0040de80  kind=lib  attributed-by=stl-ns  size=287 */

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


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction13 @ 0040dfa0  kind=lib  attributed-by=stl-ns  size=137 */

basic_filebuf<char,std::char_traits<char>_> * __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction13
          (basic_filebuf<char,std::char_traits<char>_> *this,char *param_1,size_t param_2,
          int param_3)

{
  FILE *_File;
  undefined4 *puVar1;
  int iVar2;
  
  _File = (FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
  if (_File != (FILE *)0x0) {
    if ((param_1 == (char *)0x0) && (param_2 == 0 && param_3 == 0)) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0;
    }
    iVar2 = setvbuf(_File,param_1,iVar2,param_2);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c;
      (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x48 = '\x01';
      (this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x41 = 0;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init
                ((basic_streambuf<char,std::char_traits<char>_> *)this);
      if (puVar1 != (undefined4 *)0x0) {
        (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8 = puVar1 + 2;
        *(undefined4 **)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0xc =
             puVar1 + 2;
        (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18 = puVar1;
        *(undefined4 **)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x1c =
             puVar1;
        (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28 = puVar1 + 1;
        *(undefined4 **)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x2c =
             puVar1 + 1;
      }
      (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c = (int)puVar1;
      *(undefined4 *)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x44 =
           DAT_0076af5c;
      *(undefined4 *)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x3c = 0;
      return this;
    }
  }
  return (basic_filebuf<char,std::char_traits<char>_> *)0x0;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction14 @ 0040e160  kind=lib  attributed-by=stl-ns  size=46 */

undefined4 __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::vfunction14
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  
  if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c != 0) {
    iVar1 = (*this->vftablePtr->vfunction4)(this,-1);
    if (iVar1 != -1) {
      iVar1 = fflush((FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction8 @ 0040e190  kind=lib  attributed-by=stl-ns  size=489 */

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
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18;
  if (uVar1 != 0) {
    piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x28;
    iVar3 = *piVar2;
    if (uVar1 < iVar3 + uVar1) {
      *piVar2 = iVar3 + -1;
      piVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x18;
      *piVar2 = *piVar2 + 1;
      goto LAB_0040e324;
    }
  }
  if ((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c != 0) {
    if ((undefined1 *)*(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x8 ==
        &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x40) {
      pcVar5 = (char *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x38;
      std::basic_streambuf<char,std::char_traits<char>_>::setg
                ((basic_streambuf<char,std::char_traits<char>_> *)this,
                 (char *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x34,pcVar5
                 ,pcVar5);
    }
    if (*(int *)&(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x3c != 0) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (char *****)((uint)local_2c[0] & 0xffffff00);
      local_8 = 0;
      iVar3 = fgetc((FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
      do {
        if (iVar3 == -1) goto LAB_0040e311;
        FUN_0040bff0(1,iVar3);
        ppppppcVar4 = local_2c;
        if (0xf < local_18) {
          ppppppcVar4 = (char ******)local_2c[0];
        }
        iVar3 = std::codecvt<char,char,int>::in
                          (*(codecvt<char,char,int> **)
                            &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x3c,
                           (int *)&(this->basic_filebuf<char,std::char_traits<char>_>_data).
                                   field_0x44,(char *)ppppppcVar4,
                           (char *)((int)ppppppcVar4 + local_1c),&local_34,&local_2d,
                           (char *)local_2c,&local_38);
        if (iVar3 < 0) goto LAB_0040e311;
        if (iVar3 < 2) {
          if (local_38 != &local_2d) {
            ppppppcVar4 = local_2c;
            if (0xf < local_18) {
              ppppppcVar4 = (char ******)local_2c[0];
            }
            for (pcVar5 = (char *)((int)ppppppcVar4 + (local_1c - (int)local_34)); 0 < (int)pcVar5;
                pcVar5 = pcVar5 + -1) {
              ungetc((int)local_34[(int)(pcVar5 + -1)],
                     (FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
            }
LAB_0040e311:
            if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_2c[0]);
            }
            goto LAB_0040e324;
          }
          ppppppcVar4 = local_2c;
          if (0xf < local_18) {
            ppppppcVar4 = (char ******)local_2c[0];
          }
          FUN_0040cb00(0,(int)local_34 - (int)ppppppcVar4);
        }
        else {
          if (iVar3 != 3) goto LAB_0040e311;
          if (local_1c != 0) {
            ppppppcVar4 = local_2c;
            if (0xf < local_18) {
              ppppppcVar4 = (char ******)local_2c[0];
            }
            memcpy_s(&local_2d,1,ppppppcVar4,1);
            goto LAB_0040e311;
          }
        }
        iVar3 = fgetc((FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
      } while( true );
    }
    fgetc((FILE *)(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x4c);
  }
LAB_0040e324:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_filebuf<char,std::char_traits<char>_>::vfunction7 @ 0040e380  kind=lib  attributed-by=stl-ns  size=61 */

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


/* std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vfunction7 @ 0040e3c0  kind=lib  attributed-by=stl-ns  size=89 */

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


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 0040ebe0  kind=lib  attributed-by=stl-ns  size=229 */

basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          uint param_1,int param_2)

{
  undefined1 *this_00;
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1a62;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    this->vbtablePtr = &vbtable;
    *(undefined **)&this->field_0x10 = &DAT_006fcd08;
    this->vftablePtr =
         (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *)
         _vftable__exref;
    this->vftablePtr =
         (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *)
         _vftable__exref;
    local_8 = 0;
  }
  this_00 = &(this->
             basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
             field_0x4;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)this,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this_00);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   ((int)&this->vbtablePtr + this->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset)
       = &vftable;
  iVar1 = this->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -0x68;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this_00);
  uVar2 = 0;
  if ((param_1 & 1) == 0) {
    uVar2 = 4;
  }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)this_00 =
       &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  if ((param_1 & 2) == 0) {
    uVar2 = uVar2 | 2;
  }
  if ((param_1 & 8) != 0) {
    uVar2 = uVar2 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar2 = uVar2 | 0x10;
  }
  *(uint *)&(this->
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
            field_0x40 = uVar2;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x3c = 0;
  ExceptionList = local_10;
  return this;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 0040efb0  kind=lib  attributed-by=stl-ns  size=91 */

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
  FUN_0040b4e0();
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


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction1 @ 0040f00b  kind=lib  attributed-by=stl-ns  size=8 */

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


/* std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::deleting_destructor @ 0040f020  kind=lib  attributed-by=stl-ns  size=44 */

basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
deleting_destructor(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                    *this,byte param_1)

{
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  this->vftablePtr = &vftable;
  FUN_0040b4e0();
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 0040f050  kind=lib  attributed-by=stl-ns  size=116 */

undefined1 * __thiscall
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
  FUN_0040b4e0();
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
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar1);
  }
  return puVar1;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction2 @ 0040f0f3  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction2
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040f0f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::_Add_vtordisp1
            ((basic_istream<wchar_t,std::char_traits<wchar_t>_> *)
             ((int)this + (-0x50 - (int)this[-1].vftablePtr)));
  return;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction3 @ 0040f0ff  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction3
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040f105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Add_vtordisp2
            ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
             ((int)this + (-0x50 - (int)this[-1].vftablePtr)));
  return;
}


/* std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction4 @ 004114c0  kind=lib  attributed-by=stl-ns  size=514 */

wchar_t __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction4
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          wchar_t param_1)

{
  int iVar1;
  deleting_destructor *pdVar2;
  basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *pbVar3;
  deleting_destructor *pdVar4;
  deleting_destructor *pdVar5;
  wchar_t *pwVar6;
  basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *pbVar7;
  uint uVar8;
  uint uVar9;
  
  if (((uint)this[0xf].vftablePtr & 2) != 0) {
    return L'\xffff';
  }
  if (param_1 == L'\xffff') {
    return L'\0';
  }
  if (((uint)this[0xf].vftablePtr & 8) != 0) {
    pbVar7 = (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *)
             (this[8].vftablePtr)->deleting_destructor;
    if ((pbVar7 != (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
                    *)0x0) && (pbVar3 = this[0xe].vftablePtr, pbVar7 < pbVar3)) {
      pdVar4 = (this[0xc].vftablePtr)->deleting_destructor;
      (this[8].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar3;
      (this[0xc].vftablePtr)->deleting_destructor =
           (deleting_destructor *)((int)((int)pbVar7 + ((int)pdVar4 * 2 - (int)pbVar3)) >> 1);
    }
  }
  pdVar4 = (this[8].vftablePtr)->deleting_destructor;
  if (pdVar4 != (deleting_destructor *)0x0) {
    if (pdVar4 < pdVar4 + (int)(this[0xc].vftablePtr)->deleting_destructor * 2) {
      pwVar6 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Pninc
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
      *pwVar6 = param_1;
      return param_1;
    }
    if (pdVar4 != (deleting_destructor *)0x0) {
      uVar9 = (int)(pdVar4 + ((int)(this[0xc].vftablePtr)->deleting_destructor * 2 -
                             (int)(this[3].vftablePtr)->deleting_destructor)) >> 1;
      goto LAB_00411561;
    }
  }
  uVar9 = 0;
LAB_00411561:
  uVar8 = uVar9 >> 1;
  if (uVar8 < 0x20) {
    uVar8 = 0x20;
  }
  else if (uVar8 == 0) {
    return L'\xffff';
  }
  do {
    if (uVar9 <= 0x7fffffff - uVar8) break;
    uVar8 = uVar8 >> 1;
  } while (uVar8 != 0);
  if (uVar8 == 0) {
    return L'\xffff';
  }
  iVar1 = uVar8 + uVar9;
  pbVar7 = (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *)
           FUN_0040f650(iVar1);
  pdVar4 = (this[3].vftablePtr)->deleting_destructor;
  if ((uVar9 == 0) || (memcpy(pbVar7,pdVar4,uVar9 * 2), uVar9 == 0)) {
    this[0xe].vftablePtr = pbVar7;
    (this[4].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar7;
    (this[8].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar7;
    (this[0xc].vftablePtr)->deleting_destructor = (deleting_destructor *)(iVar1 * 2 >> 1);
    pbVar3 = this[0xf].vftablePtr;
    (this[3].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar7;
    if (((uint)pbVar3 & 4) == 0) {
      (this[7].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar7;
      (this[0xb].vftablePtr)->deleting_destructor = (deleting_destructor *)0x1;
    }
    else {
      (this[7].vftablePtr)->deleting_destructor = (deleting_destructor *)0x0;
      (this[0xb].vftablePtr)->deleting_destructor = (deleting_destructor *)((int)pbVar7 >> 1);
    }
  }
  else {
    this[0xe].vftablePtr =
         (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *)
         ((int)&pbVar7->deleting_destructor + ((int)this[0xe].vftablePtr - (int)pdVar4 >> 1) * 2);
    pdVar2 = (deleting_destructor *)
             ((int)&pbVar7->deleting_destructor +
             ((int)(this[8].vftablePtr)->deleting_destructor - (int)pdVar4 >> 1) * 2);
    (this[4].vftablePtr)->deleting_destructor =
         (deleting_destructor *)
         ((int)&pbVar7->deleting_destructor +
         ((int)(this[4].vftablePtr)->deleting_destructor - (int)pdVar4 >> 1) * 2);
    (this[8].vftablePtr)->deleting_destructor = pdVar2;
    (this[0xc].vftablePtr)->deleting_destructor =
         (deleting_destructor *)((int)((iVar1 * 2 - (int)pdVar2) + (int)pbVar7) >> 1);
    if (((uint)this[0xf].vftablePtr & 4) == 0) {
      pdVar5 = (this[8].vftablePtr)->deleting_destructor;
      pdVar2 = (deleting_destructor *)
               ((int)&pbVar7->deleting_destructor +
               ((int)(this[7].vftablePtr)->deleting_destructor - (int)pdVar4 >> 1) * 2);
      (this[3].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar7;
      (this[7].vftablePtr)->deleting_destructor = pdVar2;
      (this[0xb].vftablePtr)->deleting_destructor =
           (deleting_destructor *)((int)(pdVar5 + (2 - (int)pdVar2)) >> 1);
    }
    else {
      (this[3].vftablePtr)->deleting_destructor = (deleting_destructor *)pbVar7;
      (this[7].vftablePtr)->deleting_destructor = (deleting_destructor *)0x0;
      (this[0xb].vftablePtr)->deleting_destructor = (deleting_destructor *)((int)pbVar7 >> 1);
    }
  }
  if (((uint)this[0xf].vftablePtr & 1) == 0) {
    this[0xf].vftablePtr =
         (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable *)
         ((uint)this[0xf].vftablePtr | 1);
    pwVar6 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Pninc
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    *pwVar6 = param_1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pdVar4);
}


/* std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction5 @ 004116d0  kind=lib  attributed-by=stl-ns  size=97 */

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


/* std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction11 @ 00411760  kind=lib  attributed-by=stl-ns  size=489 */

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
      if (param_2 == 0 && param_3 == 0) goto LAB_00411923;
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
          goto LAB_00411923;
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
LAB_004117d9:
        param_2 = *(uint *)_BADOFF_exref;
        param_3 = *(uint *)(_BADOFF_exref + 4);
      }
    }
    else if (param_4 != 0) goto LAB_004117d9;
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
        goto LAB_00411923;
      }
    }
  }
  param_2 = *(uint *)_BADOFF_exref;
  param_3 = *(uint *)(_BADOFF_exref + 4);
LAB_00411923:
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


/* std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction12 @ 00411950  kind=lib  attributed-by=stl-ns  size=317 */

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


/* std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vfunction7 @ 00411c80  kind=lib  attributed-by=stl-ns  size=103 */

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


/* std::_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil> @ 00450fb0  kind=lib  attributed-by=stl-ns  size=101 */

_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
* __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::
_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
          (_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
           *this,undefined4 *param_1)

{
  if (this != (_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
               *)0x0) {
    this->vftablePtr = &vftable;
    (this->
    _Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
    ).offset_0x0 = *param_1;
    (this->
    _Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
    ).offset_0xc = this;
    return this;
  }
  uRam00000010 = 0;
  return (_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
          *)0x0;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil> @ 00451020  kind=lib  attributed-by=stl-ns  size=101 */

_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
* __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::
_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
          (_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
           *this,undefined4 *param_1)

{
  if (this != (_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
               *)0x0) {
    this->vftablePtr = &vftable;
    (this->
    _Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
    ).offset_0x0 = *param_1;
    (this->
    _Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
    ).offset_0xc = this;
    return this;
  }
  uRam00000010 = 0;
  return (_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
          *)0x0;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil> @ 00451090  kind=lib  attributed-by=stl-ns  size=101 */

_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
* __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::
_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
          (_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
           *this,undefined4 *param_1)

{
  if (this != (_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
               *)0x0) {
    this->vftablePtr = &vftable;
    (this->
    _Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
    ).offset_0x0 = *param_1;
    (this->
    _Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
    ).offset_0xc = this;
    return this;
  }
  uRam00000010 = 0;
  return (_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
          *)0x0;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil> @ 00451100  kind=lib  attributed-by=stl-ns  size=101 */

_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
* __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::
_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
          (_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
           *this,undefined4 *param_1)

{
  if (this != (_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
               *)0x0) {
    this->vftablePtr = &vftable;
    (this->
    _Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
    ).offset_0x0 = *param_1;
    (this->
    _Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
    ).offset_0xc = this;
    return this;
  }
  uRam00000010 = 0;
  return (_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
          *)0x0;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil> @ 00451170  kind=lib  attributed-by=stl-ns  size=101 */

_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
* __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::
_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
          (_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
           *this,undefined4 *param_1)

{
  if (this != (_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
               *)0x0) {
    this->vftablePtr = &vftable;
    (this->
    _Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
    ).offset_0x0 = *param_1;
    (this->
    _Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
    ).offset_0xc = this;
    return this;
  }
  uRam00000010 = 0;
  return (_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
          *)0x0;
}


/* std::pair<unsigned___int64,unsigned___int64>::operator=<std::pair<unsigned___int64,unsigned___int64>,0> @ 00458cf0  kind=lib  attributed-by=stl-ns  size=34 */

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


/* std::_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::deleting_destructor @ 0046d2c0  kind=lib  attributed-by=stl-ns  size=31 */

_Func_base<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil> * __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::deleting_destructor
          (_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
           *this,byte param_1)

{
                    /* inlined destructor:
                       std::_Func_base<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::~_Func_base<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                        */
  this->vftablePtr =
       (_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_vftable
        *)&_Func_base<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::
           vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return (_Func_base<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil> *)
         this;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction1 @ 0046da50  kind=lib  attributed-by=stl-ns  size=50 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction1(_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
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
  param_1[1] = (this->
               _Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
               ).offset_0x0;
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction5 @ 0046da90  kind=lib  attributed-by=stl-ns  size=30 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction5(_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this,char param_1)

{
  (*this->vftablePtr->deleting_destructor)(this,0);
  if (param_1 != '\0') {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction3 @ 0046db70  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction3(void)

{
  FUN_004690a0();
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction3 @ 0046db80  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction3(void)

{
  FUN_00469590();
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction3 @ 0046db90  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction3(void)

{
  FUN_00469c10();
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction3 @ 0046dba0  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction3(_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  cube::WorldInfo::WorldInfo_Constructor_or_Destructor
            ((int *)&this->
                     _Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
            );
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction3 @ 0046dbb0  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction3(_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
             *this)

{
  FUN_0046b740((int *)&this->
                       _Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
              );
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction1 @ 0046e050  kind=lib  attributed-by=stl-ns  size=50 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction1(_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
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
  param_1[1] = (this->
               _Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
               ).offset_0x0;
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction1 @ 0046e090  kind=lib  attributed-by=stl-ns  size=50 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction1(_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
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
  param_1[1] = (this->
               _Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
               ).offset_0x0;
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction1 @ 0046e0d0  kind=lib  attributed-by=stl-ns  size=50 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction1(_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
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
  param_1[1] = (this->
               _Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
               ).offset_0x0;
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction1 @ 0046e110  kind=lib  attributed-by=stl-ns  size=50 */

void __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction1(_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
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
  param_1[1] = (this->
               _Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_data
               ).offset_0x0;
  return;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction4 @ 0046ea20  kind=lib  attributed-by=stl-ns  size=6 */

TypeDescriptor * __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction4(void)

{
  return &<lambda_1ffef8671b5d330b7078b5ff273ee5fb>::RTTI_Type_Descriptor;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction4 @ 0046ea30  kind=lib  attributed-by=stl-ns  size=6 */

TypeDescriptor * __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction4(void)

{
  return &<lambda_29209b183b27224642a038ec1f3692c5>::RTTI_Type_Descriptor;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction4 @ 0046ea40  kind=lib  attributed-by=stl-ns  size=6 */

TypeDescriptor * __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction4(void)

{
  return &<lambda_864084cd43f09ea2a93402c86ee87b29>::RTTI_Type_Descriptor;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction4 @ 0046ea50  kind=lib  attributed-by=stl-ns  size=6 */

TypeDescriptor * __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction4(void)

{
  return &<lambda_fdf816e424f0da55b18915c89c349fdd>::RTTI_Type_Descriptor;
}


/* std::_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::vfunction4 @ 0046ea60  kind=lib  attributed-by=stl-ns  size=6 */

TypeDescriptor * __thiscall
std::
_Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
::vfunction4(void)

{
  return &<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>::RTTI_Type_Descriptor;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 0046fc50  kind=lib  attributed-by=stl-ns  size=3421 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          char *param_1)

{
  u_short uVar1;
  SOCKET SVar2;
  ulong uVar3;
  hostent *phVar4;
  int iVar5;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar6;
  undefined4 uVar7;
  int iVar8;
  Creature *pCVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this_00;
  int iVar14;
  int *piVar15;
  longlong *buf;
  char *pcVar16;
  undefined1 **buf_00;
  double dVar17;
  double dVar18;
  _func_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr
  *p_Var19;
  int iStack_2810;
  undefined1 local_280c [24];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_27f4 [14];
  undefined4 local_27bc;
  undefined4 local_27b8;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_27a4 [5];
  int iStack_2760;
  undefined1 local_275c [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_274c [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_2744 [14];
  undefined4 local_270c;
  undefined4 local_2708;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_26f4 [5];
  int iStack_26b0;
  undefined1 local_26ac [24];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_2694 [14];
  undefined4 local_265c;
  undefined4 local_2658;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_2644 [6];
  Creature *local_25fc;
  char local_25f8 [4];
  undefined4 local_25f4;
  longlong local_25f0;
  undefined4 local_25e8;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_25e4;
  int local_25e0;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_25dc;
  undefined1 *local_25d8;
  SOCKET local_25d4;
  char local_25d0 [4456];
  undefined1 local_1468 [4456];
  undefined1 local_300 [304];
  undefined1 local_1d0 [64];
  undefined1 local_190 [24];
  undefined1 local_178 [24];
  _Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
  local_160;
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  void *local_e8 [5];
  uint local_d4;
  _Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
  local_d0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  void *local_88 [5];
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  sockaddr local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e58f8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_25e8 = 0;
  local_25dc = this;
  if (*(int *)(param_1 + 0x10) == 0) goto LAB_00470956;
  this[8].basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
  field_0x24 = 1;
  SVar2 = socket(2,1,0);
  *(SOCKET *)
   &this[0x12f78].
    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.field_0x18 =
       SVar2;
  pcVar16 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pcVar16 = *(char **)param_1;
  }
  uVar3 = inet_addr(pcVar16);
  if (uVar3 == 0xffffffff) {
    if (0xf < *(uint *)(param_1 + 0x14)) {
      param_1 = *(char **)param_1;
    }
    phVar4 = gethostbyname(param_1);
    if (phVar4 != (hostent *)0x0) {
      uVar3 = *(ulong *)*phVar4->h_addr_list;
    }
  }
  local_24.sa_data[6] = '\0';
  local_24.sa_data[7] = '\0';
  local_24.sa_data[8] = '\0';
  local_24.sa_data[9] = '\0';
  local_24.sa_data[10] = '\0';
  local_24.sa_data[0xb] = '\0';
  local_24.sa_data[0xc] = '\0';
  local_24.sa_data[0xd] = '\0';
  local_24.sa_data[2] = (char)uVar3;
  local_24.sa_data[3] = (char)(uVar3 >> 8);
  local_24.sa_data[4] = (char)(uVar3 >> 0x10);
  local_24.sa_data[5] = (char)(uVar3 >> 0x18);
  local_24.sa_family = 2;
  local_24.sa_data[0] = '\0';
  local_24.sa_data[1] = '\0';
  uVar1 = htons(0x3039);
  local_24.sa_data[0] = (char)uVar1;
  local_24.sa_data[1] = (char)(uVar1 >> 8);
  iVar5 = connect(*(SOCKET *)
                   &this[0x12f78].
                    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                    .field_0x18,&local_24,0x10);
  if (iVar5 == -1) {
    local_280c._0_4_ = &vbtable;
    local_280c._16_4_ = &DAT_006fcd08;
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_27a4);
    local_8 = 0;
    local_25e8 = 1;
    std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
    basic_iostream<wchar_t,std::char_traits<wchar_t>_>
              ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_280c,
               (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_27f4);
    local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
    *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
     (local_280c + *(int *)(local_280c._0_4_ + 4)) = &vftable;
    *(int *)((int)&iStack_2810 + *(int *)(local_280c._0_4_ + 4)) =
         *(int *)(local_280c._0_4_ + 4) + -0x68;
    std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
    basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_27f4);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
    local_27f4[0] =
         (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
         &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
    local_27bc = 0;
    local_27b8 = 0;
    local_8 = 3;
    p_Var19 = endl_exref;
    pbVar6 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e6f0();
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar6,p_Var19);
    uVar7 = FUN_00411bc0(local_e8);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00636ad0(uVar7);
    if (7 < local_d4) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_e8[0]);
    }
    closesocket(*(SOCKET *)
                 &this[0x12f78].
                  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                  .field_0x18);
    iVar5 = *(int *)&this[0x12f7c].
                     basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                     .field_0x30;
    *(undefined4 *)
     &this[0x12f78].
      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.field_0x18
         = 0;
    this[8].basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
    field_0x24 = 0;
    iVar5 = *(int *)(iVar5 + 0x3c);
    *(undefined4 *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) = 1;
    this_00 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              local_280c;
    goto LAB_00470951;
  }
  local_25e0 = 0x11;
  iVar5 = send(*(SOCKET *)
                &this[0x12f78].
                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                 .field_0x18,(char *)&local_25e0,4,0);
  if (iVar5 == -1) {
    FUN_0040eb60(L"Connection error.");
    local_8 = 5;
    FUN_00636ad0(local_88);
    if (7 < local_74) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_88[0]);
    }
  }
  else {
    local_25f8[0] = '\x03';
    local_25f8[1] = '\0';
    local_25f8[2] = '\0';
    local_25f8[3] = '\0';
    iVar5 = send(*(SOCKET *)
                  &this[0x12f78].
                   basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                   .field_0x18,local_25f8,4,0);
    if (iVar5 != -1) {
      local_25d8 = *(undefined1 **)
                    &this[0x12f78].
                     basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                     .field_0x18;
      iVar5 = 4;
      piVar15 = &local_25e0;
      do {
        iVar8 = recv((SOCKET)local_25d8,(char *)piVar15,iVar5,0);
        if (iVar8 < 1) {
          if (iVar8 == -1) {
            FUN_0040eb60(L"Connection error.");
            local_8 = 7;
            FUN_00636ad0(local_a0);
            FUN_00593e50();
            goto LAB_0046fece;
          }
          break;
        }
        iVar5 = iVar5 - iVar8;
        piVar15 = (int *)((int)piVar15 + iVar8);
      } while (0 < iVar5);
      if (local_25e0 == 0x11) {
        local_25dc = *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                       **)&this[0x12f78].
                           basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                           .field_0x18;
        local_25d8 = (undefined1 *)0x0;
        iVar5 = 4;
        buf_00 = &local_25d8;
        do {
          iVar8 = recv((SOCKET)local_25dc,(char *)buf_00,iVar5,0);
          if (iVar8 < 1) {
            if (iVar8 == -1) {
              FUN_0040eb60(L"Connection error.");
              local_8 = 8;
              FUN_00636ad0(local_148);
              FUN_00593e50();
              goto LAB_0046fece;
            }
            break;
          }
          iVar5 = iVar5 - iVar8;
          buf_00 = (undefined1 **)((int)buf_00 + iVar8);
        } while (0 < iVar5);
        FUN_00601cb0();
        local_275c._0_4_ = &vbtable;
        local_274c[0].vbtablePtr =
             (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
        std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
        basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_26f4);
        local_8 = 9;
        local_25e8 = 2;
        std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
        basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                  ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_275c,
                   (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_2744);
        local_8 = 10;
        *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
         (local_275c + *(int *)(local_275c._0_4_ + 4)) = &vftable;
        *(int *)((int)&iStack_2760 + *(int *)(local_275c._0_4_ + 4)) =
             *(int *)(local_275c._0_4_ + 4) + -0x68;
        std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
        basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_2744);
        local_2744[0] =
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
             &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
        local_270c = 0;
        local_2708 = 0;
        dVar18 = 0.03;
        dVar17 = (double)(int)local_25d8 * 0.01;
        local_8 = 0xc;
        p_Var19 = endl_exref;
        pbVar6 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
                 FUN_0040e6f0(local_274c,L"Error: Server has different version (",dVar17,
                              L") than client (",0x3f9eb851eb851eb8,&DAT_006fd740);
        std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar6,dVar17);
        pbVar6 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e6f0();
        std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar6,dVar18);
        pbVar6 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e6f0();
        std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar6,p_Var19);
        uVar7 = FUN_00411bc0(local_178);
        local_8._0_1_ = 0xd;
        FUN_00636ad0(uVar7);
        local_8 = CONCAT31(local_8._1_3_,0xc);
        FUN_00593e50();
        FUN_00601e90();
        closesocket(*(SOCKET *)
                     &this[0x12f78].
                      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                      .field_0x18);
        iVar5 = *(int *)&this[0x12f7c].
                         basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                         .field_0x30;
        *(undefined4 *)
         &this[0x12f78].
          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
          field_0x18 = 0;
        this[8].basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
        field_0x24 = 0;
        iVar5 = *(int *)(iVar5 + 0x3c);
        *(undefined4 *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) = 1;
        this_00 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                  local_275c;
      }
      else {
        if (local_25e0 != 0x12) {
          if (local_25e0 == 0x10) {
            local_25d8 = &this[6].
                          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                          .field_0x48;
            FUN_00601cb0();
            FUN_0040eb60(L"Connected.\n");
            local_8 = 0x14;
            local_34 = 0x3f800000;
            local_30 = 0x3f000000;
            local_2c = 0x3e4ccccd;
            local_28 = 0x3f800000;
            FUN_0043ab30(local_118,&local_34);
            local_8 = 0xffffffff;
            FUN_00593e50();
            FUN_00601e90();
            local_25d4 = *(SOCKET *)
                          &this[0x12f78].
                           basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                           .field_0x18;
            iVar5 = 4;
            piVar15 = &local_25e0;
            do {
              iVar8 = recv(local_25d4,(char *)piVar15,iVar5,0);
              if (iVar8 < 1) {
                if (iVar8 == -1) {
                  FUN_0040eb60(L"Connection error.");
                  local_8 = 0x15;
                  FUN_00636ad0(local_b8);
                  FUN_00593e50();
                  closesocket(*(SOCKET *)
                               &this[0x12f78].
                                basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                .field_0x18);
                  *(undefined4 *)
                   &this[0x12f78].
                    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                    .field_0x18 = 0;
                  this[8].
                  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                  .field_0x24 = 0;
                  goto LAB_00470956;
                }
                break;
              }
              iVar5 = iVar5 - iVar8;
              piVar15 = (int *)((int)piVar15 + iVar8);
            } while (0 < iVar5);
            if (local_25e0 == 0) {
              local_25d4 = *(SOCKET *)
                            &this[0x12f78].
                             basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                             .field_0x18;
              local_25f0 = 0;
              iVar5 = 8;
              buf = &local_25f0;
              do {
                iVar8 = recv(local_25d4,(char *)buf,iVar5,0);
                if (iVar8 < 1) {
                  if (iVar8 == -1) goto LAB_00470956;
                  break;
                }
                iVar5 = iVar5 - iVar8;
                buf = (longlong *)((int)buf + iVar8);
              } while (0 < iVar5);
              FUN_0043c100();
              local_25d4 = *(SOCKET *)
                            &this[0x12f78].
                             basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                             .field_0x18;
              iVar5 = 0x1168;
              pcVar16 = local_25d0;
              do {
                iVar8 = recv(local_25d4,pcVar16,iVar5,0);
                if (iVar8 < 1) {
                  if (iVar8 == -1) goto LAB_00470956;
                  break;
                }
                iVar5 = iVar5 - iVar8;
                pcVar16 = pcVar16 + iVar8;
              } while (0 < iVar5);
              if (-1 < local_25f0) {
                FUN_00601cb0();
                FUN_00466050(*(int *)&this[0x12f78].
                                      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                      .field_0x1c + 0x10);
                FUN_00465ae0(*(int *)&this[0x12f78].
                                      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                      .field_0x1c + 0x11dc);
                local_8 = 0x16;
                FUN_00465ef0(*(undefined4 *)
                              (*(int *)&this[0x12f78].
                                        basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                        .field_0x1c + 0x1d28));
                iVar5 = *(int *)&this[0x12f78].
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 .field_0x1c;
                local_8._0_1_ = 0x17;
                local_25e4 = *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                               **)(iVar5 + 0x1198);
                uVar7 = *(undefined4 *)(iVar5 + 0x119c);
                piVar15 = *(int **)&this[6].
                                    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                    .field_0x4c;
                local_25d4 = *piVar15;
                local_25f4 = uVar7;
                if ((int *)local_25d4 != piVar15) {
                  do {
                    if (*(undefined4 **)(local_25d4 + 0x18) != (undefined4 *)0x0) {
                      (**(code **)**(undefined4 **)(local_25d4 + 0x18))(1);
                    }
                    FUN_005c3ea0();
                  } while (local_25d4 !=
                           *(SOCKET *)
                            &this[6].
                             basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                             .field_0x4c);
                }
                FUN_0067e480();
                iVar5 = FUN_0042f000(&local_25f0);
                *(int *)&this[0x12f78].
                         basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                         .field_0x1c = iVar5;
                if (iVar5 == 0) {
                  local_25fc = operator_new(0x1e60);
                  local_8._0_1_ = 0x18;
                  if (local_25fc == (Creature *)0x0) {
                    pCVar9 = (Creature *)0x0;
                  }
                  else {
                    pCVar9 = cube::Creature::Creature(local_25fc,(undefined4 *)&local_25f0);
                  }
                  local_8._0_1_ = 0x17;
                  *(Creature **)
                   &this[0x12f78].
                    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                    .field_0x1c = pCVar9;
                  puVar10 = (undefined4 *)FUN_00468ad0(&local_25f0);
                  *puVar10 = pCVar9;
                  uVar7 = local_25f4;
                }
                FUN_0044b040(local_1468);
                FUN_0044aff0(local_300);
                if (*(int *)(*(int *)&this[0x12f78].
                                      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                      .field_0x1c + 0x1d28) == 0) {
                  local_25fc = operator_new(0x40);
                  local_8._0_1_ = 0x19;
                  if (local_25fc == (Creature *)0x0) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = FUN_0044a7e0();
                  }
                  local_8._0_1_ = 0x17;
                  *(undefined4 *)
                   (*(int *)&this[0x12f78].
                             basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                             .field_0x1c + 0x1d28) = uVar11;
                }
                FUN_004686e0(local_1d0);
                *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)
                 (*(int *)&this[0x12f78].
                           basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                           .field_0x1c + 0x1198) = local_25e4;
                *(undefined4 *)
                 (*(int *)&this[0x12f78].
                           basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                           .field_0x1c + 0x119c) = uVar7;
                iVar5 = *(int *)&this[0x12f78].
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 .field_0x1c;
                *(undefined4 *)(iVar5 + 0x1d3c) = *(undefined4 *)(iVar5 + 400);
                iVar5 = *(int *)&this[0x12f78].
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 .field_0x1c;
                *(undefined4 *)(iVar5 + 0x1d40) = *(undefined4 *)(iVar5 + 0x194);
                *(undefined4 *)
                 &this[8].
                  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                  .field_0x28 =
                     *(undefined4 *)
                      &this[0x12f78].
                       basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                       .field_0x1c;
                iVar5 = 0;
                do {
                  iVar8 = 0;
                  do {
                    iVar12 = FUN_00434a90(iVar5,iVar8);
                    if (iVar12 != 0) {
                      puVar10 = (undefined4 *)(iVar12 + 0x1404c);
                      iVar13 = 8;
                      do {
                        iVar14 = iVar13;
                        iVar13 = 8;
                        do {
                          puVar10[-2] = 0;
                          puVar10[-1] = 0;
                          *puVar10 = 0;
                          puVar10[1] = 0;
                          puVar10[2] = 0;
                          *(undefined2 *)(puVar10 + 3) = 0;
                          puVar10[4] = 0;
                          puVar10[5] = 0;
                          local_3c = 0;
                          uStack_38 = 0;
                          *(undefined8 *)(puVar10 + 6) = 0;
                          puVar10[8] = 0;
                          puVar10[9] = 0;
                          *(undefined1 *)(puVar10 + 10) = 0;
                          *(undefined8 *)(puVar10 + 0xb) = local_64;
                          puVar10 = puVar10 + 0x1a;
                          local_5c = 0;
                          local_58 = 0;
                          local_54 = 0;
                          local_50 = 0;
                          local_4c = 0;
                          local_48 = 0;
                          local_44 = 0;
                          local_40 = 0;
                          local_70 = 0;
                          local_6c = 0;
                          local_68 = 0;
                          iVar13 = iVar13 + -1;
                        } while (iVar13 != 0);
                        iVar13 = iVar14 + -1;
                      } while (iVar13 != 0);
                      *(undefined1 *)(iVar12 + 8) = 1;
                      piVar15 = (int *)(iVar12 + 0x10018);
                      iVar14 = iVar14 + 0x3f;
                      do {
                        iVar12 = 0x40;
                        do {
                          if (*piVar15 != 0) {
                            *(undefined1 *)(*piVar15 + 0x74) = 1;
                          }
                          piVar15 = piVar15 + 1;
                          iVar12 = iVar12 + -1;
                        } while (iVar12 != 0);
                        iVar14 = iVar14 + -1;
                      } while (iVar14 != 0);
                    }
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < 0x400);
                  iVar5 = iVar5 + 1;
                } while (iVar5 < 0x400);
                FUN_00601e90();
                FUN_0043c790();
                local_8 = 0xffffffff;
                FUN_0063de60();
                this = local_25dc;
              }
              this[0x12f75].
              basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
              field_0x15 = 1;
              local_25dc = this;
              _Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
              ::
              _Func_impl<std::_Callable_obj<<lambda_ff38bf9ea15b41cb34bc5dae16af8ab3>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                        (&local_d0,&local_25dc);
              local_8 = 0x1a;
              uVar7 = FUN_00450e70(&local_d0);
              *(undefined4 *)
               &this[0x12f75].
                basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
                field_0x20 = uVar7;
              local_8 = 0xffffffff;
              FUN_00450dc0();
              SetThreadPriority(*(HANDLE *)
                                 &this[0x12f75].
                                  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                  .field_0x20,-1);
              local_25e4 = this;
              _Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
              ::
              _Func_impl<std::_Callable_obj<<lambda_864084cd43f09ea2a93402c86ee87b29>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                        (&local_160,&local_25e4);
              local_8 = 0x1b;
              uVar7 = FUN_00450e70(&local_160);
              *(undefined4 *)
               &this[0x12f75].
                basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
                field_0x24 = uVar7;
              FUN_00450dc0();
              SetThreadPriority(*(HANDLE *)
                                 &this[0x12f75].
                                  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                  .field_0x24,-1);
            }
            goto LAB_00470956;
          }
          FUN_0040eb60(L"Connection error");
          local_8 = 0x13;
          FUN_00636ad0(local_130);
          local_8 = 0xffffffff;
          FUN_00593e50();
          FUN_00601e90();
          goto LAB_0046fece;
        }
        FUN_00601cb0();
        local_26ac._0_4_ = &vbtable;
        local_26ac._16_4_ = &DAT_006fcd08;
        std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
        basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_2644);
        local_8 = 0xe;
        local_25e8 = 4;
        std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
        basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                  ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_26ac,
                   (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_2694);
        local_8 = 0xf;
        *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
         (local_26ac + *(int *)(local_26ac._0_4_ + 4)) = &vftable;
        *(int *)((int)&iStack_26b0 + *(int *)(local_26ac._0_4_ + 4)) =
             *(int *)(local_26ac._0_4_ + 4) + -0x68;
        std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
        basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_2694);
        local_2694[0] =
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
             &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
        local_265c = 0;
        local_2658 = 0;
        local_8 = 0x11;
        p_Var19 = endl_exref;
        pbVar6 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e6f0();
        std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar6,p_Var19);
        uVar7 = FUN_00411bc0(local_190);
        local_8._0_1_ = 0x12;
        FUN_00636ad0(uVar7);
        local_8 = CONCAT31(local_8._1_3_,0x11);
        FUN_00593e50();
        FUN_00601e90();
        closesocket(*(SOCKET *)
                     &this[0x12f78].
                      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                      .field_0x18);
        iVar5 = *(int *)&this[0x12f7c].
                         basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                         .field_0x30;
        *(undefined4 *)
         &this[0x12f78].
          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
          field_0x18 = 0;
        this[8].basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
        field_0x24 = 0;
        iVar5 = *(int *)(iVar5 + 0x3c);
        *(undefined4 *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) = 1;
        this_00 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                  local_26ac;
      }
LAB_00470951:
      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                (this_00);
      goto LAB_00470956;
    }
    FUN_0040eb60(L"Connection error.");
    local_8 = 6;
    FUN_00636ad0(local_100);
    FUN_00593e50();
  }
LAB_0046fece:
  closesocket(*(SOCKET *)
               &this[0x12f78].
                basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
                field_0x18);
  iVar5 = *(int *)&this[0x12f7c].
                   basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                   .field_0x30;
  *(undefined4 *)
   &this[0x12f78].
    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.field_0x18 =
       0;
  this[8].basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
  field_0x24 = 0;
  iVar5 = *(int *)(iVar5 + 0x3c);
  *(undefined4 *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) = 1;
LAB_00470956:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 00477fa0  kind=lib  attributed-by=stl-ns  size=1912 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          undefined4 param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  int iStack_210;
  basic_iostream<wchar_t,std::char_traits<wchar_t>_> local_20c;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_1f4 [2];
  undefined1 local_1ec [48];
  undefined4 local_1bc;
  uint local_1b8;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_1a4 [6];
  undefined4 local_15c;
  undefined4 *local_158;
  undefined4 local_154;
  int *local_150;
  int *local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 *local_13c;
  undefined4 local_138;
  undefined1 local_134 [24];
  undefined1 local_11c [24];
  undefined1 local_104 [24];
  undefined1 local_ec [24];
  undefined1 local_d4 [24];
  undefined1 local_bc [24];
  undefined1 local_a4 [24];
  undefined1 local_8c [24];
  undefined1 local_74 [24];
  undefined1 local_5c [24];
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006e5abf;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_15c = 0;
  local_154 = param_1;
  local_150 = (int *)0x0;
  local_14c = (int *)0x0;
  local_148 = 0;
  local_8 = 0;
  local_144 = 0;
  local_140 = 0;
  local_144 = FUN_0046d520(local_14);
  local_8._0_1_ = 1;
  local_13c = (undefined4 *)0x0;
  local_138 = 0;
  local_13c = (undefined4 *)FUN_00630a10();
  local_8._0_1_ = 2;
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
  FUN_0040f7a0(L"@name",5);
  local_8._0_1_ = 3;
  local_158 = (undefined4 *)
              FUN_005a0ed0(local_44,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38))
  ;
  local_8 = CONCAT31(local_8._1_3_,4);
  puVar5 = (undefined4 *)FUN_004689a0(&local_2c);
  if (puVar5 != local_158) {
    if (7 < (uint)puVar5[5]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar5);
    }
    puVar5[5] = 7;
    puVar5[4] = 0;
    *(undefined2 *)puVar5 = 0;
    FUN_0040f110(local_158);
  }
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 2;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"creature",8);
  local_8._0_1_ = 5;
  FUN_00594c80(&local_2c,*(undefined4 *)(param_2 + 0x38),0,0,&local_144);
  local_8._0_1_ = 2;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  FUN_0040eb60(L"scenery");
  local_8._0_1_ = 6;
  FUN_005953a0(local_44,param_2,&local_144);
  local_8._0_1_ = 2;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 2;
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  switch(*(undefined4 *)(param_2 + 0x34)) {
  case 1:
    FUN_0040eb60(L"objective:monster");
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_004e4a20(local_44,&local_144,&local_150);
    break;
  case 2:
    local_8._0_1_ = uVar3;
    FUN_0040eb60(L"objective:rareboss");
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_004e4a20(local_bc,&local_144,&local_150);
    break;
  case 3:
    local_8._0_1_ = uVar3;
    FUN_0040eb60(L"objective:villagemonster");
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_004e4a20(&local_2c,&local_144,&local_150);
    break;
  case 4:
    local_8._0_1_ = uVar3;
    FUN_0040eb60(L"objective:villagerareboss");
    local_8 = CONCAT31(local_8._1_3_,0xf);
    FUN_004e4a20(local_ec,&local_144,&local_150);
    break;
  case 5:
    local_8._0_1_ = uVar3;
    FUN_0040eb60(L"objective:dungeon");
    local_8 = CONCAT31(local_8._1_3_,0x10);
    FUN_004e4a20(local_11c,&local_144,&local_150);
    break;
  default:
    goto switchD_004781cc_caseD_6;
  case 7:
    local_8._0_1_ = uVar3;
    FUN_0040eb60(L"objective:invasion");
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_004e4a20(local_104,&local_144,&local_150);
    break;
  case 8:
    local_8._0_1_ = uVar3;
    FUN_0040eb60(L"objective:sceneryinvasion");
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_004e4a20(local_5c,&local_144,&local_150);
    break;
  case 9:
    local_8._0_1_ = uVar3;
    FUN_0040eb60(L"objective:villageinvasion");
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_004e4a20(local_d4,&local_144,&local_150);
    break;
  case 10:
    local_8._0_1_ = uVar3;
    FUN_0040eb60(L"objective:caveinvasion");
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_004e4a20(local_74,&local_144,&local_150);
    break;
  case 0xb:
    local_8._0_1_ = uVar3;
    FUN_0040eb60(L"objective:riverinvasion");
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_004e4a20(local_8c,&local_144,&local_150);
    break;
  case 0xc:
    local_8._0_1_ = uVar3;
    FUN_0040eb60(L"objective:gang");
    local_8 = CONCAT31(local_8._1_3_,0x11);
    FUN_004e4a20(local_134,&local_144,&local_150);
    break;
  case 0xd:
    local_8._0_1_ = uVar3;
    FUN_0040eb60(L"objective:gangboss");
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_004e4a20(local_a4,&local_144,&local_150);
  }
  local_8._0_1_ = 2;
  FUN_00593e50();
switchD_004781cc_caseD_6:
  bVar8 = true;
  local_20c.vbtablePtr = (basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&vbtable;
  local_20c.basic_ostream<wchar_t,std::char_traits<wchar_t>_>.vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_1a4);
  local_8 = CONCAT31(local_8._1_3_,0x13);
  local_15c = 2;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            (&local_20c,(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_1f4);
  local_8 = 0x14;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   ((int)&local_20c.vbtablePtr +
   (local_20c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) = &vftable;
  *(int *)((int)&iStack_210 +
          (local_20c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) =
       (local_20c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset + -0x68;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_1f4);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_1f4[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  local_1bc = 0;
  local_1b8 = 0;
  local_8._0_1_ = 0x16;
  if ((local_150 != local_14c) && (piVar7 = *(int **)*local_150, piVar7 != (int *)*local_150)) {
    do {
      piVar1 = piVar7 + 2;
      iVar6 = FUN_00428db0(0,piVar7[6],&DAT_007020b8,1);
      if ((iVar6 == 0) ||
         ((((iVar6 = FUN_00428db0(0,piVar7[6],&DAT_007020bc,1), iVar6 == 0 ||
            (iVar6 = FUN_00428db0(0,piVar7[6],&DAT_007020c0,1), iVar6 == 0)) ||
           (iVar6 = FUN_00428db0(0,piVar7[6],&DAT_007020c4,1), iVar6 == 0)) ||
          ((cVar4 = FUN_00439190(piVar1,&DAT_007020c8), cVar4 != '\0' ||
           (cVar4 = FUN_00439190(piVar1,&DAT_007020cc), cVar4 != '\0')))))) {
LAB_004785f9:
        bVar2 = true;
      }
      else {
        cVar4 = FUN_00439190(piVar1,&DAT_00701ba8);
        bVar2 = false;
        if (cVar4 != '\0') goto LAB_004785f9;
      }
      if ((!bVar8) && (!bVar2)) {
        FUN_0040e6f0(&local_20c.basic_ostream<wchar_t,std::char_traits<wchar_t>_>,&DAT_006fd844);
      }
      iVar6 = FUN_00428db0(0,piVar7[6],&DAT_007020bc,1);
      bVar8 = iVar6 == 0;
      FUN_00424ba0(&local_20c.basic_ostream<wchar_t,std::char_traits<wchar_t>_>,piVar1);
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*local_150);
  }
  FUN_00411bc0(local_154);
  local_8._0_1_ = 2;
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   ((int)&local_20c.vbtablePtr +
   (local_20c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) = &vftable;
  *(int *)((int)&iStack_210 +
          (local_20c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) =
       (local_20c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset + -0x68;
  local_1f4[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  if ((local_1b8 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)local_1ec._4_4_);
  }
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
            (local_1f4,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
            (local_1f4,(wchar_t *)0x0,(wchar_t *)0x0);
  local_1b8 = local_1b8 & 0xfffffffe;
  local_1bc = 0;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_1f4);
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_1ec);
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::~basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_1a4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004777f0(&local_154,*local_13c,local_13c);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_13c);
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 00478800  kind=lib  attributed-by=stl-ns  size=9515 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          undefined4 param_1,int param_2)

{
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float fVar6;
  undefined *puVar7;
  int iStack_584;
  undefined1 local_580 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_570 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_568 [14];
  undefined4 local_530;
  undefined4 local_52c;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_518 [6];
  undefined4 *local_4d0;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_4cc;
  undefined4 *local_4c8;
  undefined1 local_4c4 [24];
  undefined1 local_4ac [24];
  undefined1 local_494 [24];
  undefined1 local_47c [24];
  undefined1 local_464 [24];
  undefined1 local_44c [24];
  undefined1 local_434 [24];
  undefined1 local_41c [24];
  undefined1 local_404 [24];
  undefined1 local_3ec [24];
  undefined1 local_3d4 [24];
  undefined1 local_3bc [24];
  undefined1 local_3a4 [24];
  undefined1 local_38c [24];
  undefined1 local_374 [24];
  undefined1 local_35c [24];
  undefined1 local_344 [24];
  undefined1 local_32c [24];
  undefined1 local_314 [24];
  undefined1 local_2fc [24];
  undefined1 local_2e4 [24];
  undefined1 local_2cc [24];
  undefined1 local_2b4 [24];
  undefined1 local_29c [24];
  undefined1 local_284 [24];
  undefined1 local_26c [24];
  undefined1 local_254 [24];
  undefined1 local_23c [24];
  undefined1 local_224 [24];
  undefined1 local_20c [24];
  undefined1 local_1f4 [24];
  undefined1 local_1dc [24];
  undefined1 local_1c4 [24];
  undefined1 local_1ac [24];
  undefined1 local_194 [24];
  undefined1 local_17c [24];
  undefined1 local_164 [24];
  undefined1 local_14c [24];
  undefined1 local_134 [24];
  undefined1 local_11c [24];
  undefined1 local_104 [24];
  undefined1 local_ec [24];
  undefined1 local_d4 [24];
  undefined1 local_bc [24];
  undefined1 local_a4 [24];
  undefined1 local_8c [24];
  undefined1 local_74 [24];
  undefined1 local_5c [24];
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e5fa2;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4d0 = (undefined4 *)0x0;
  local_580._0_4_ = &vbtable;
  local_570[0].vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  local_4cc = this;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_518);
  local_8 = 0;
  local_4d0 = (undefined4 *)0x1;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_580,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_568);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (local_580 + *(int *)(local_580._0_4_ + 4)) = &vftable;
  *(int *)((int)&iStack_584 + *(int *)(local_580._0_4_ + 4)) = *(int *)(local_580._0_4_ + 4) + -0x68
  ;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_568);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_568[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  local_530 = 0;
  local_52c = 0;
  local_8 = 3;
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,param_2);
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c._2_2_ << 0x10);
  FUN_0040f7a0(L"@level",6);
  local_8._0_1_ = 4;
  local_4d0 = (undefined4 *)FUN_00411bc0(local_44);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_4c8 = (undefined4 *)FUN_004689a0(&local_2c);
  if (local_4c8 != local_4d0) {
    if (7 < (uint)local_4c8[5]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*local_4c8);
    }
    local_4c8[5] = 7;
    local_4c8[4] = 0;
    *(undefined2 *)local_4c8 = 0;
    FUN_0040f110(local_4d0);
  }
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 6;
  FUN_0040b4e0();
  puVar4 = &local_2c;
  if (7 < local_18) {
    puVar4 = local_2c;
  }
  FUN_0040f3c0(puVar4,local_1c,local_52c);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  fVar5 = (float10)FUN_0043c980(param_2);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar6 = (float)local_4c8 * 50.0;
  if (0.0 <= fVar6) {
    fVar6 = (float)(int)(fVar6 * 100.0 + 0.5) * 0.01;
  }
  else {
    fVar5 = (float10)FUN_004874a0(-fVar6);
    local_4c8 = (undefined4 *)(float)fVar5;
    fVar6 = -(float)local_4c8;
    if (fVar6 == 0.0) {
      fVar6 = 0.0;
    }
  }
  puVar7 = &DAT_007020e0;
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,fVar6);
  FUN_0040e440(pbVar1,puVar7);
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"@health",7);
  local_8._0_1_ = 7;
  local_4d0 = (undefined4 *)FUN_00411bc0(local_44);
  local_8 = CONCAT31(local_8._1_3_,8);
  local_4c8 = (undefined4 *)FUN_004689a0(&local_2c);
  if (local_4c8 != local_4d0) {
    if (7 < (uint)local_4c8[5]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*local_4c8);
    }
    local_4c8[5] = 7;
    local_4c8[4] = 0;
    *(undefined2 *)local_4c8 = 0;
    FUN_0040f110(local_4d0);
  }
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 9;
  FUN_0040b4e0();
  puVar4 = &local_2c;
  if (7 < local_18) {
    puVar4 = local_2c;
  }
  FUN_0040f3c0(puVar4,local_1c,local_52c);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  fVar5 = (float10)FUN_00446aa0(param_2);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar6 = (float)local_4c8 * 100.0;
  if (0.0 <= fVar6) {
    fVar6 = (float)(int)(fVar6 * 100.0 + 0.5) * 0.01;
  }
  else {
    fVar5 = (float10)FUN_004874a0(-fVar6);
    local_4c8 = (undefined4 *)(float)fVar5;
    fVar6 = -(float)local_4c8;
    if (fVar6 == 0.0) {
      fVar6 = 0.0;
    }
  }
  puVar7 = &DAT_007020e0;
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,fVar6);
  FUN_0040e440(pbVar1,puVar7);
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"@ridingspeed",0xc);
  local_8._0_1_ = 10;
  local_4d0 = (undefined4 *)FUN_00411bc0(local_44);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  local_4c8 = (undefined4 *)FUN_004689a0(&local_2c);
  if (local_4c8 != local_4d0) {
    if (7 < (uint)local_4c8[5]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*local_4c8);
    }
    local_4c8[5] = 7;
    local_4c8[4] = 0;
    *(undefined2 *)local_4c8 = 0;
    FUN_0040f110(local_4d0);
  }
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 0xc;
  FUN_0040b4e0();
  puVar4 = &local_2c;
  if (7 < local_18) {
    puVar4 = local_2c;
  }
  FUN_0040f3c0(puVar4,local_1c,local_52c);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  fVar5 = (float10)FUN_0043e660(param_2);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar6 = (float)local_4c8 * 100.0;
  if (0.0 <= fVar6) {
    fVar6 = (float)(int)(fVar6 * 100.0 + 0.5) * 0.01;
  }
  else {
    fVar5 = (float10)FUN_004874a0(-fVar6);
    local_4c8 = (undefined4 *)(float)fVar5;
    fVar6 = -(float)local_4c8;
    if (fVar6 == 0.0) {
      fVar6 = 0.0;
    }
  }
  puVar7 = &DAT_007020e0;
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,fVar6);
  FUN_0040e440(pbVar1,puVar7);
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"@climbingpower",0xe);
  local_8._0_1_ = 0xd;
  local_4d0 = (undefined4 *)FUN_00411bc0(local_44);
  local_8 = CONCAT31(local_8._1_3_,0xe);
  local_4c8 = (undefined4 *)FUN_004689a0(&local_2c);
  if (local_4c8 != local_4d0) {
    if (7 < (uint)local_4c8[5]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*local_4c8);
    }
    local_4c8[5] = 7;
    local_4c8[4] = 0;
    *(undefined2 *)local_4c8 = 0;
    FUN_0040f110(local_4d0);
  }
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 0xf;
  FUN_0040b4e0();
  puVar4 = &local_2c;
  if (7 < local_18) {
    puVar4 = local_2c;
  }
  FUN_0040f3c0(puVar4,local_1c,local_52c);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  fVar5 = (float10)FUN_0043f770(param_2,&DAT_007020e0);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0((float)local_4c8 * 100.0);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e440(pbVar1);
  FUN_0040eb60(L"@flyingspeed");
  local_8._0_1_ = 0x10;
  local_4d0 = (undefined4 *)FUN_00411bc0(local_44);
  local_8 = CONCAT31(local_8._1_3_,0x11);
  local_4c8 = (undefined4 *)FUN_004689a0(&local_2c);
  if (local_4c8 != local_4d0) {
    if (7 < (uint)local_4c8[5]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*local_4c8);
    }
    local_4c8[5] = 7;
    local_4c8[4] = 0;
    *(undefined2 *)local_4c8 = 0;
    FUN_0040f110(local_4d0);
  }
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x12;
  FUN_0040b4e0();
  puVar4 = &local_2c;
  if (7 < local_18) {
    puVar4 = local_2c;
  }
  FUN_0040f3c0(puVar4,local_1c,local_52c);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  fVar5 = (float10)FUN_004476a0(param_2,&DAT_007020e0);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0((float)local_4c8 * 100.0);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e440(pbVar1);
  FUN_0040eb60(L"@swimmingspeed");
  local_8._0_1_ = 0x13;
  local_4d0 = (undefined4 *)FUN_00411bc0(local_44);
  local_8 = CONCAT31(local_8._1_3_,0x14);
  local_4c8 = (undefined4 *)FUN_004689a0(&local_2c);
  if (local_4c8 != local_4d0) {
    if (7 < (uint)local_4c8[5]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*local_4c8);
    }
    local_4c8[5] = 7;
    local_4c8[4] = 0;
    *(undefined2 *)local_4c8 = 0;
    FUN_0040f110(local_4d0);
  }
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x15;
  FUN_0040b4e0();
  puVar4 = &local_2c;
  if (7 < local_18) {
    puVar4 = local_2c;
  }
  FUN_0040f3c0(puVar4,local_1c,local_52c);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  fVar5 = (float10)FUN_0043e2c0(param_2,&DAT_007020e0);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0((float)local_4c8 * 100.0);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e440(pbVar1);
  FUN_0040eb60(L"@boatspeed");
  local_8._0_1_ = 0x16;
  local_4d0 = (undefined4 *)FUN_00411bc0(local_44);
  local_8 = CONCAT31(local_8._1_3_,0x17);
  local_4c8 = (undefined4 *)FUN_004689a0(&local_2c);
  if (local_4c8 != local_4d0) {
    if (7 < (uint)local_4c8[5]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*local_4c8);
    }
    local_4c8[5] = 7;
    local_4c8[4] = 0;
    *(undefined2 *)local_4c8 = 0;
    FUN_0040f110(local_4d0);
  }
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x18;
  FUN_0040b4e0();
  puVar4 = &local_2c;
  if (7 < local_18) {
    puVar4 = local_2c;
  }
  FUN_0040f3c0(puVar4,local_1c,local_52c);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  iVar2 = FUN_0043e6a0(0x36,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@smashcooldown");
  local_8._0_1_ = 0x19;
  uVar3 = FUN_00411bc0(local_44);
  local_8._0_1_ = 0x1a;
  FUN_004689a0(&local_2c);
  FUN_00467fa0(uVar3);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x1b;
  FUN_0040b4e0();
  puVar4 = &local_2c;
  if (7 < local_18) {
    puVar4 = local_2c;
  }
  FUN_0040f3c0(puVar4,local_1c,local_52c);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  iVar2 = FUN_0043e6a0(0x56,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@cyclonecooldown");
  local_8._0_1_ = 0x1c;
  uVar3 = FUN_00411bc0(local_44);
  local_8._0_1_ = 0x1d;
  FUN_004689a0(&local_2c);
  FUN_00467fa0(uVar3);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x1e;
  FUN_0040b4e0();
  puVar4 = &local_2c;
  if (7 < local_18) {
    puVar4 = local_2c;
  }
  FUN_0040f3c0(puVar4,local_1c,local_52c);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  iVar2 = FUN_00447310(0x56);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@cycloneduration");
  local_8._0_1_ = 0x1f;
  uVar3 = FUN_00411bc0(local_44);
  local_8._0_1_ = 0x20;
  FUN_004689a0(&local_2c);
  FUN_00467fa0(uVar3);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x21;
  FUN_0040b4e0();
  puVar4 = &local_2c;
  if (7 < local_18) {
    puVar4 = local_2c;
  }
  FUN_0040f3c0(puVar4,local_1c,local_52c);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  iVar2 = FUN_0043e6a0(0x65,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@bulwarkcooldown");
  local_8._0_1_ = 0x22;
  uVar3 = FUN_00411bc0(local_44);
  local_8._0_1_ = 0x23;
  FUN_004689a0(&local_2c);
  FUN_00467fa0(uVar3);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x24;
  FUN_0040b4e0();
  puVar4 = &local_2c;
  if (7 < local_18) {
    puVar4 = local_2c;
  }
  FUN_0040f3c0(puVar4,local_1c,local_52c);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  puVar7 = &DAT_007020e0;
  fVar5 = (float10)FUN_0043ed60(0x65,param_2);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0(((float)local_4c8 * 0.3 + 0.25) * 100.0,puVar7);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e440(pbVar1);
  FUN_0040eb60(L"@bulwarkamount");
  local_8._0_1_ = 0x25;
  uVar3 = FUN_00411bc0(local_44);
  local_8._0_1_ = 0x26;
  FUN_004689a0(&local_2c);
  FUN_00467fa0(uVar3);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x27;
  FUN_0040b4e0();
  puVar4 = &local_2c;
  if (7 < local_18) {
    puVar4 = local_2c;
  }
  FUN_0040f3c0(puVar4,local_1c,local_52c);
  local_8._0_1_ = 3;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  FUN_0040e6f0(local_570,&DAT_00702230);
  FUN_0040eb60(L"@bulwarkduration");
  local_8._0_1_ = 0x28;
  uVar3 = FUN_00411bc0(local_44);
  local_8._0_1_ = 0x29;
  FUN_004689a0(&local_2c);
  FUN_00467fa0(uVar3);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_4c8 = (undefined4 *)0x0;
  local_34 = 0;
  FUN_0040f8a0(local_44,&local_4c8);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x2a;
  FUN_00411b90(local_44);
  local_8._0_1_ = 3;
  FUN_00593e50();
  iVar2 = FUN_0043e6a0(0x66,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@warfrenzycooldown");
  local_8._0_1_ = 0x2b;
  uVar3 = FUN_00411bc0(&local_2c);
  local_8._0_1_ = 0x2c;
  FUN_004689a0(local_44);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x2d;
  FUN_00411b90(local_44);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040e6f0(local_570,&DAT_00702230);
  FUN_0040eb60(L"@warfrenzyduration");
  local_8._0_1_ = 0x2e;
  uVar3 = FUN_00411bc0(&local_2c);
  local_8._0_1_ = 0x2f;
  FUN_004689a0(local_44);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x30;
  FUN_00411b90(local_8c);
  local_8._0_1_ = 3;
  FUN_00593e50();
  puVar7 = &DAT_007020e0;
  fVar5 = (float10)FUN_0043ed60(0x66,param_2);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0(((float)local_4c8 * 9.0 + 1.0) * 100.0,puVar7);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e440(pbVar1);
  FUN_0040eb60(L"@warfrenzyamount");
  local_8._0_1_ = 0x31;
  uVar3 = FUN_00411bc0(local_8c);
  local_8._0_1_ = 0x32;
  FUN_004689a0(local_2e4);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x33;
  FUN_00411b90(local_20c);
  local_8._0_1_ = 3;
  FUN_00593e50();
  iVar2 = FUN_0043e6a0(0x15,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@rangerkickcooldown");
  local_8._0_1_ = 0x34;
  uVar3 = FUN_00411bc0(local_20c);
  local_8._0_1_ = 0x35;
  FUN_004689a0(local_2fc);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x36;
  FUN_00411b90(local_bc);
  local_8._0_1_ = 3;
  FUN_00593e50();
  fVar5 = (float10)FUN_0043c980(param_2,&DAT_006fd728);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0((float)local_4c8 * 100.0);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e6f0(pbVar1);
  FUN_0040eb60(L"@rangerkickknockback");
  local_8._0_1_ = 0x37;
  uVar3 = FUN_00411bc0(local_bc);
  local_8._0_1_ = 0x38;
  FUN_004689a0(local_3bc);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x39;
  FUN_00411b90(local_1ac);
  local_8._0_1_ = 3;
  FUN_00593e50();
  iVar2 = FUN_0043e6a0(0x32,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@retreatcooldown");
  local_8._0_1_ = 0x3a;
  uVar3 = FUN_00411bc0(local_1ac);
  local_8._0_1_ = 0x3b;
  FUN_004689a0(local_3d4);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x3c;
  FUN_00411b90(local_ec);
  local_8._0_1_ = 3;
  FUN_00593e50();
  fVar5 = (float10)FUN_0043c980(param_2,&DAT_006fd728);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0((float)local_4c8 * 100.0);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e6f0(pbVar1);
  FUN_0040eb60(L"@retreatdistance");
  local_8._0_1_ = 0x3d;
  uVar3 = FUN_00411bc0(local_ec);
  local_8._0_1_ = 0x3e;
  FUN_004689a0(local_2cc);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x3f;
  FUN_00411b90(local_26c);
  local_8._0_1_ = 3;
  FUN_00593e50();
  iVar2 = FUN_0043e6a0(99,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@aimcooldown");
  local_8._0_1_ = 0x40;
  uVar3 = FUN_00411bc0(local_26c);
  local_8._0_1_ = 0x41;
  FUN_004689a0(local_32c);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x42;
  FUN_00411b90(local_11c);
  local_8._0_1_ = 3;
  FUN_00593e50();
  fVar5 = (float10)FUN_0043c980(param_2,&DAT_006fd728);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0((float)local_4c8 * 100.0);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e6f0(pbVar1);
  FUN_0040eb60(L"@aimstealth");
  local_8._0_1_ = 0x43;
  uVar3 = FUN_00411bc0(local_11c);
  local_8._0_1_ = 0x44;
  FUN_004689a0(local_38c);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x45;
  FUN_00411b90(local_1dc);
  local_8._0_1_ = 3;
  FUN_00593e50();
  iVar2 = FUN_0043e6a0(100,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@swiftnesscooldown");
  local_8._0_1_ = 0x46;
  uVar3 = FUN_00411bc0(local_1dc);
  local_8._0_1_ = 0x47;
  FUN_004689a0(local_3ec);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x48;
  FUN_00411b90(local_14c);
  local_8._0_1_ = 3;
  FUN_00593e50();
  fVar5 = (float10)FUN_0043c980(param_2,&DAT_006fd728);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0((float)local_4c8 * 100.0);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e6f0(pbVar1);
  FUN_0040eb60(L"@swiftnessamount");
  local_8._0_1_ = 0x49;
  uVar3 = FUN_00411bc0(local_14c);
  local_8._0_1_ = 0x4a;
  FUN_004689a0(local_344);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x4b;
  FUN_00411b90(local_5c);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040e6f0(local_570,&DAT_00702230);
  FUN_0040eb60(L"@swiftnessduration");
  local_8._0_1_ = 0x4c;
  uVar3 = FUN_00411bc0(local_5c);
  local_8._0_1_ = 0x4d;
  FUN_004689a0(local_434);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x4e;
  FUN_00411b90(local_17c);
  local_8._0_1_ = 3;
  FUN_00593e50();
  iVar2 = FUN_0043e6a0(0x58,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@fireexplosioncooldown");
  local_8._0_1_ = 0x4f;
  uVar3 = FUN_00411bc0(local_17c);
  local_8._0_1_ = 0x50;
  FUN_004689a0(local_29c);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x51;
  FUN_00411b90(local_74);
  local_8._0_1_ = 3;
  FUN_00593e50();
  fVar5 = (float10)FUN_0043c980(param_2,&DAT_006fd728);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0((float)local_4c8 * 100.0);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e6f0(pbVar1);
  FUN_0040eb60(L"@fireexplosionknockback");
  local_8._0_1_ = 0x52;
  uVar3 = FUN_00411bc0(local_74);
  local_8._0_1_ = 0x53;
  FUN_004689a0(local_47c);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x54;
  FUN_00411b90(local_a4);
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040e6f0(local_570,&DAT_00702474);
  FUN_0040eb60(L"@manashieldduration");
  local_8._0_1_ = 0x55;
  uVar3 = FUN_00411bc0(local_a4);
  local_8._0_1_ = 0x56;
  FUN_004689a0(local_41c);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x57;
  FUN_00411b90(local_d4);
  local_8._0_1_ = 3;
  FUN_00593e50();
  iVar2 = FUN_0043e6a0(0x67,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@manashieldcooldown");
  local_8._0_1_ = 0x58;
  uVar3 = FUN_00411bc0(local_d4);
  local_8._0_1_ = 0x59;
  FUN_004689a0(local_35c);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x5a;
  FUN_00411b90(local_104);
  local_8._0_1_ = 3;
  FUN_00593e50();
  puVar7 = &DAT_006fd728;
  fVar5 = (float10)FUN_0043ed60(0x67,param_2);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0((float)local_4c8 * 100.0,puVar7);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e6f0(pbVar1);
  FUN_0040eb60(L"@manashieldpower");
  local_8._0_1_ = 0x5b;
  uVar3 = FUN_00411bc0(local_104);
  local_8._0_1_ = 0x5c;
  FUN_004689a0(local_374);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x5d;
  FUN_00411b90(local_134);
  local_8._0_1_ = 3;
  FUN_00593e50();
  iVar2 = FUN_0043e6a0(0x31,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@teleportcooldown");
  local_8._0_1_ = 0x5e;
  uVar3 = FUN_00411bc0(local_134);
  local_8._0_1_ = 0x5f;
  FUN_004689a0(local_44c);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x60;
  FUN_00411b90(local_164);
  local_8._0_1_ = 3;
  FUN_00593e50();
  fVar5 = (float10)FUN_00444ae0(0x22,param_2);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0((float)local_4c8 * 100.0 * 8.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@healingstreamcost");
  local_8._0_1_ = 0x61;
  uVar3 = FUN_00411bc0(local_164);
  local_8._0_1_ = 0x62;
  FUN_004689a0(local_4c4);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 99;
  FUN_00411b90(local_194);
  local_8._0_1_ = 3;
  FUN_00593e50();
  iVar2 = FUN_0043e6a0(0x30,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@interceptcooldown");
  local_8._0_1_ = 100;
  uVar3 = FUN_00411bc0(local_194);
  local_8._0_1_ = 0x65;
  FUN_004689a0(local_2b4);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x66;
  FUN_00411b90(local_1c4);
  local_8._0_1_ = 3;
  FUN_00593e50();
  iVar2 = FUN_0043e6a0(0x60,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@shurikencooldown");
  local_8._0_1_ = 0x67;
  uVar3 = FUN_00411bc0(local_1c4);
  local_8._0_1_ = 0x68;
  FUN_004689a0(local_314);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x69;
  FUN_00411b90(local_1f4);
  local_8._0_1_ = 3;
  FUN_00593e50();
  iVar2 = FUN_0043e6a0(0x61,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@camouflagecooldown");
  local_8._0_1_ = 0x6a;
  uVar3 = FUN_00411bc0(local_1f4);
  local_8._0_1_ = 0x6b;
  FUN_004689a0(local_3a4);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x6c;
  FUN_00411b90(local_224);
  local_8._0_1_ = 3;
  FUN_00593e50();
  fVar5 = (float10)FUN_0043ed60(0x61,0xffffffff);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0(((float)local_4c8 * 12000.0 + 8000.0) / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@camouflageduration");
  local_8._0_1_ = 0x6d;
  uVar3 = FUN_00411bc0(local_224);
  local_8._0_1_ = 0x6e;
  FUN_004689a0(local_404);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x6f;
  FUN_00411b90(local_254);
  local_8._0_1_ = 3;
  FUN_00593e50();
  iVar2 = FUN_0043e6a0(0x4f,param_2);
  fVar5 = (float10)FUN_004874a0((float)iVar2 / 1000.0);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_570,(float)fVar5);
  FUN_0040eb60(L"@sneakcooldown");
  local_8._0_1_ = 0x70;
  uVar3 = FUN_00411bc0(local_254);
  local_8._0_1_ = 0x71;
  FUN_004689a0(local_464);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x72;
  FUN_00411b90(local_284);
  local_8._0_1_ = 3;
  FUN_00593e50();
  puVar7 = &DAT_007020e0;
  fVar5 = (float10)FUN_0043ed60(0x4f,param_2);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0((float)local_4c8 * 0.4 * 100.0,puVar7);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e440(pbVar1);
  FUN_0040eb60(L"@sneakspeed");
  local_8._0_1_ = 0x73;
  uVar3 = FUN_00411bc0(local_284);
  local_8._0_1_ = 0x74;
  FUN_004689a0(local_4ac);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  local_8._0_1_ = 3;
  FUN_00593e50();
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x75;
  FUN_00411b90(local_23c);
  local_8._0_1_ = 3;
  FUN_00593e50();
  puVar7 = &DAT_007020e0;
  fVar5 = (float10)FUN_0043ed60(0x4f,param_2);
  local_4c8 = (undefined4 *)(float)fVar5;
  fVar5 = (float10)FUN_004874a0((float)local_4c8 * 100.0,puVar7);
  pbVar1 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                     (local_570,(float)fVar5);
  FUN_0040e440(pbVar1);
  FUN_0040eb60(L"@sneakstealth");
  local_8._0_1_ = 0x76;
  uVar3 = FUN_00411bc0(local_23c);
  local_8 = CONCAT31(local_8._1_3_,0x77);
  FUN_004689a0(local_494);
  FUN_00467fa0(uVar3);
  FUN_00593e50();
  FUN_00593e50();
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             local_580);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 00480fb0  kind=lib  attributed-by=stl-ns  size=1308 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this_00;
  undefined4 uStack_174;
  void **ppvStack_170;
  undefined4 uStack_16c;
  int *piVar5;
  int iStack_14c;
  basic_iostream<wchar_t,std::char_traits<wchar_t>_> local_148;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_130 [2];
  basic_iostream<wchar_t,std::char_traits<wchar_t>_> local_128 [2];
  undefined4 local_f8;
  undefined4 local_f4;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_e0 [6];
  undefined1 *local_98;
  undefined4 local_94;
  undefined4 local_84;
  uint local_80;
  int *local_7c;
  undefined4 local_6c;
  uint local_68;
  void *local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6344;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_98 = (undefined1 *)0x0;
  if (param_2 ==
      *(int *)&this[0x12f78].
               basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
               field_0x1c) {
    FUN_0040eb60();
    local_8 = 0;
    local_3c = 0x3f800000;
    local_38 = 0x3f800000;
    local_34 = 0x3f800000;
    local_30 = 0x3f800000;
    FUN_0043ab30();
    piVar5 = local_2c[0];
    if (local_18 < 8) {
LAB_0048114f:
      local_8 = 0xffffffff;
      local_148.vbtablePtr = (basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&vbtable;
      local_148.basic_ostream<wchar_t,std::char_traits<wchar_t>_>.vbtablePtr =
           (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
      std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
      basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_e0);
      local_8 = 4;
      local_98 = (undefined1 *)0x1;
      std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
      basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                (&local_148,(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_130);
      local_8 = 5;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
      *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
       ((int)&local_148.vbtablePtr +
       (local_148.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) = &vftable;
      *(int *)((int)&iStack_14c +
              (local_148.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) =
           (local_148.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset + -0x68;
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
      basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_130);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
      local_130[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                     &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                      vftable;
      local_f8 = 0;
      local_f4 = 0;
      cVar1 = *param_1;
      local_8 = 7;
      if (cVar1 == '\f') {
        local_98 = (undefined1 *)&uStack_174;
        FUN_0040eb60(L"singular");
        local_8._0_1_ = 8;
        uVar3 = FUN_0059ff60(local_64,param_1[0xd]);
        local_8._0_1_ = 10;
        FUN_00480e00(local_2c,uVar3);
        local_8._0_1_ = 0xb;
        uStack_16c = 0x48125e;
        std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                  (&local_148.basic_ostream<wchar_t,std::char_traits<wchar_t>_>,
                   *(short *)(param_1 + 0x10));
        uStack_16c = 0x481264;
        FUN_0040e440();
        FUN_00424ba0();
        if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (int *)((uint)local_2c[0] & 0xffff0000);
        local_8._0_1_ = 7;
        if (7 < local_50) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_64[0]);
        }
        FUN_00411bc0();
        local_8._0_1_ = 0xc;
        local_3c = 0x3f800000;
        local_38 = 0x3f800000;
        local_34 = 0x3f800000;
        local_30 = 0x3f800000;
      }
      else {
        if (((((cVar1 == '\r') || (cVar1 == '\x15')) || ((cVar1 == '\v' && (param_1[1] != '\x0e'))))
            || (((cVar1 == '\0' || (cVar1 == '\x19')) || (cVar1 == '\x14')))) ||
           ((cVar1 == '\x18' || (cVar1 == '\x17')))) {
          std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                    (&local_148.basic_ostream<wchar_t,std::char_traits<wchar_t>_>,
                     *(short *)(param_1 + 0x10));
          FUN_0040e6f0();
        }
        basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                  ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *
                   )&this[6].
                     basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                     .field_0x48,local_2c,param_1);
        local_8._0_1_ = 0xd;
        FUN_00424ba0();
        local_8._0_1_ = 7;
        if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c[0]);
        }
        cVar1 = *param_1;
        if ((((cVar1 != '\f') && (cVar1 != '\r')) &&
            ((cVar1 != '\x15' &&
             ((((cVar1 != '\v' || (param_1[1] == '\x0e')) && (cVar1 != '\0')) &&
              ((cVar1 != '\x19' && (cVar1 != '\x14')))))))) &&
           ((cVar1 != '\x18' && (cVar1 != '\x17')))) {
          iVar4 = FUN_004c76a0();
          uStack_16c = 0x4813a6;
          this_00 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e6f0();
          std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(this_00,iVar4);
        }
        FUN_00411bc0();
        local_8._0_1_ = 0xe;
        FUN_004c7d20();
      }
      FUN_0043ab30();
      local_8._0_1_ = 7;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_80 = 7;
      local_84 = 0;
      local_94 = (void *)((uint)local_94._2_2_ << 0x10);
      FUN_0040f7a0();
      local_8 = CONCAT31(local_8._1_3_,0xf);
      local_4c = 0x3f800000;
      local_48 = 0x3f800000;
      local_44 = 0x3f800000;
      local_40 = 0x3f800000;
      FUN_0043ab30();
      if (7 < local_80) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_94);
      }
      *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
       ((int)&local_148.vbtablePtr +
       (local_148.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) = &vftable;
      *(int *)((int)&iStack_14c +
              (local_148.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) =
           (local_148.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset + -0x68;
      local_130[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                     &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                      vftable;
      FUN_0040b4e0();
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
      ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_130);
      std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
      ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>(local_128);
      std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
      ~basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_e0);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else {
    local_68 = 0xf;
    cVar1 = *(char *)(param_2 + 0x1168);
    local_6c = 0;
    local_7c = (int *)((uint)local_7c & 0xffffff00);
    pcVar2 = (char *)(param_2 + 0x1168);
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    }
    FUN_0040c280();
    local_8 = 1;
    uStack_16c = FUN_006089c0();
    ppvStack_170 = local_64;
    local_8._0_1_ = 2;
    uStack_174 = 0x4810ba;
    FUN_00451800();
    local_8 = CONCAT31(local_8._1_3_,3);
    local_3c = 0x3f800000;
    local_38 = 0x3f800000;
    local_34 = 0x3f800000;
    local_30 = 0x3f800000;
    FUN_0043ab30();
    if (7 < local_50) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_64[0]);
    }
    local_50 = 7;
    local_54 = 0;
    local_64[0] = (void *)((uint)local_64[0] & 0xffff0000);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (int *)((uint)local_2c[0] & 0xffff0000);
    piVar5 = local_7c;
    if (local_68 < 0x10) goto LAB_0048114f;
  }
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar5);
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 00482530  kind=lib  attributed-by=stl-ns  size=1139 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *****pppppuVar4;
  int iVar5;
  undefined4 *puVar6;
  basic_iostream<wchar_t,std::char_traits<wchar_t>_> local_140;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_128 [2];
  basic_iostream<wchar_t,std::char_traits<wchar_t>_> local_120 [3];
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_d8 [6];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *local_90;
  void *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  undefined4 ****local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e6653;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_78 = (undefined4 *)0x0;
  iVar5 = *(int *)(*(int *)&this[0x12f7c].
                            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                            .field_0x2c + 0x3c);
  *(undefined4 *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) = 0;
  *(undefined4 *)&this[4].field_0x10 = 0x40a00000;
  *(undefined4 *)&this[4].field_0xc = 0x40a00000;
  this[4].vbtablePtr =
       (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *)
       0x42b40000;
  *(undefined4 *)&this[4].field_0x4 = 0;
  *(undefined4 *)&this[4].field_0x8 = 0x43340000;
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable **)
   &this[3].basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
    field_0x4c = this[4].vbtablePtr;
  *(undefined4 *)
   &this[3].basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
    field_0x50 = *(undefined4 *)&this[4].field_0x4;
  this[3].vftablePtr =
       *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
        &this[4].field_0x8;
  local_8c = (void *)0x0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  iVar5 = *(int *)&this[0x12f7f].
                   basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                   .field_0x38;
  iVar2 = *(int *)&this[0x12f7f].
                   basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                   .field_0x34;
  puVar1 = &this[0x12f7f].
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
            field_0x34;
  local_8 = 0;
  FUN_005870c0(4);
  *(int *)((int)local_8c + local_80) = (iVar5 - iVar2 >> 2) + 1;
  local_80 = local_80 + 4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280(&DAT_00700e68,3);
  local_8._0_1_ = 1;
  FUN_004499c0(local_2c,&local_8c);
  local_8._0_1_ = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  FUN_0040f7a0(L"edit",4);
  local_8._0_1_ = 2;
  FUN_00635550(local_74,&local_44,1);
  local_8._0_1_ = 4;
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44);
  }
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(L"edit",4);
  local_8._0_1_ = 5;
  FUN_00635550(local_5c,local_2c,1);
  local_8._0_1_ = 7;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  puVar3 = operator_new(0x28);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
                    /* inlined constructor or destructor (approx location) for cube::WorldInfo */
    *puVar3 = &cube::WorldInfo::vftable;
    puVar3[1] = 0;
    puVar3[7] = 0xf;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    puVar3[9] = 0;
  }
  local_140.vbtablePtr = (basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&vbtable;
  local_140.basic_ostream<wchar_t,std::char_traits<wchar_t>_>.vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  local_7c = puVar3;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_d8);
  local_8 = CONCAT31(local_8._1_3_,8);
  local_78 = (undefined4 *)0x1;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            (&local_140,(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_128);
  local_8 = 9;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   ((int)&local_140.vbtablePtr +
   (local_140.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) = &vftable;
  *(int *)(&local_128[-7].field_0x0 +
          (local_140.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) =
       (local_140.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset + -0x68;
  local_90 = local_128;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_90);
  pppppuVar4 = local_5c;
  if (7 < local_48) {
    pppppuVar4 = (undefined4 *****)local_5c[0];
  }
  local_8._0_1_ = 10;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_128[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  FUN_0040f3c0(pppppuVar4,local_4c,0);
  local_8._0_1_ = 0xb;
  std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::operator>>
            ((basic_istream<wchar_t,std::char_traits<wchar_t>_> *)&local_140,puVar3 + 8);
  local_8 = CONCAT31(local_8._1_3_,7);
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   ((int)&local_140.vbtablePtr +
   (local_140.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) = &vftable;
  *(int *)(&local_128[-7].field_0x0 +
          (local_140.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) =
       (local_140.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset + -0x68;
  local_128[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  FUN_0040b4e0();
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_128);
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>(local_120);
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::~basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_d8);
  local_78 = (undefined4 *)FUN_00659f50(&local_44,local_74);
  puVar6 = puVar3 + 2;
  if (puVar6 != local_78) {
    if (0xf < (uint)puVar3[7]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar6);
    }
    puVar3[7] = 0xf;
    puVar3[6] = 0;
    *(undefined1 *)puVar6 = 0;
    FUN_00405060(local_78);
  }
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44);
  }
  FUN_0066add0(&local_7c);
  iVar5 = (*(int *)&this[0x12f7f].
                    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                    .field_0x38 - *(int *)puVar1 >> 2) + -1;
  *(int *)&this[0x12f80].field_0x10 = iVar5;
  FUN_004878a0(this,iVar5,local_7c,1);
  iVar5 = *(int *)(*(int *)puVar1 + *(int *)&this[0x12f80].field_0x10 * 4);
  FUN_0046f620(*(undefined4 *)(iVar5 + 0x20),iVar5 + 8);
  FUN_004a23d0();
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (undefined4 ****)((uint)local_5c[0] & 0xffff0000);
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74[0]);
  }
  local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
  local_60 = 7;
  local_64 = 0;
  if (local_8c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_8c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 004a28c0  kind=lib  attributed-by=stl-ns  size=11670 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          char *param_1,int param_2,int param_3,float param_4,int param_5,char param_6,char param_7)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 extraout_EAX;
  int iVar3;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar4;
  undefined4 uVar5;
  int iVar6;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float10 fVar14;
  void **ppvVar15;
  undefined1 *puVar16;
  int **ppiVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  void *pvVar25;
  undefined4 uVar26;
  short sVar27;
  undefined *puVar28;
  undefined4 uVar29;
  int iStack_2a8;
  undefined1 local_2a4 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_294 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_28c [14];
  undefined4 local_254;
  undefined4 local_250;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_23c [6];
  undefined1 local_1f1;
  char *local_1f0;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined1 local_1dc [8];
  undefined4 local_1d4;
  undefined1 local_c4 [16];
  undefined1 local_b4 [24];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int *local_8c [5];
  uint local_78;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  float local_1c;
  float local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e7d08;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = (float)param_2;
  local_1e4 = 0.0;
  local_18 = (float)param_3;
  local_1f0 = param_1;
  local_2a4._0_4_ = &vbtable;
  local_294[0].vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  local_1ec = this;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_23c);
  local_8 = 0;
  local_1e4 = 1.4013e-45;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_2a4,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_28c);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (local_2a4 + *(int *)(local_2a4._0_4_ + 4)) = &vftable;
  *(int *)((int)&iStack_2a8 + *(int *)(local_2a4._0_4_ + 4)) = *(int *)(local_2a4._0_4_ + 4) + -0x68
  ;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_28c);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_28c[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  local_254 = 0;
  local_250 = 0;
  local_8 = 3;
  FUN_004c7d20(local_c4);
  local_20 = 7;
  local_24 = 0;
  local_34 = (undefined4 *)((uint)local_34._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 4;
  FUN_0040b4e0();
  puVar10 = &local_34;
  if (7 < local_20) {
    puVar10 = local_34;
  }
  FUN_0040f3c0(puVar10,local_24,local_250);
  local_8._0_1_ = 3;
  if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_34);
  }
  if (*param_1 == '\x14') {
    FUN_0040e440(local_294,"Pet food: ");
  }
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             &this[6].
              basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
              field_0x48,local_8c,param_1);
  local_8._0_1_ = 5;
  FUN_00424ba0(local_294,extraout_EAX);
  local_8._0_1_ = 3;
  if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_8c[0]);
  }
  cVar2 = *param_1;
  if (((((((cVar2 != '\f') && (cVar2 != '\r')) && (cVar2 != '\x15')) &&
        ((cVar2 != '\v' || (param_1[1] == '\x0e')))) &&
       ((cVar2 != '\0' && ((cVar2 != '\x19' && (cVar2 != '\x14')))))) && (cVar2 != '\x18')) &&
     ((cVar2 != '\x17' && (cVar2 != '\x13')))) {
    iVar3 = FUN_004c76a0();
    pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
             FUN_0040e440(local_294,&DAT_0070182c);
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,iVar3);
  }
  if (param_6 != '\0') {
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 6;
    uVar5 = FUN_00411bc0(local_5c);
    local_1e4 = param_4 * 10.0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x3f800000;
    local_2c = 0x3f800000;
    local_28 = 0x3f800000;
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_8._0_1_ = 7;
    FUN_00639b30(local_8c,uVar5,0,0x40400000,local_1c,local_18,local_1e4,0x40400000,&local_2c,
                 &local_44,&local_6c,0x10,(float)param_5,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 8;
    uVar5 = FUN_00411bc0(local_5c);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_8._0_1_ = 9;
    FUN_00639b30(local_8c,uVar5,0,0x40400000,local_1c,local_18,local_1e4,0,local_c4,&local_44,
                 &local_2c,0x10,(float)param_5,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
  }
  local_20 = 7;
  local_24 = 0;
  local_34 = (undefined4 *)((uint)local_34 & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 10;
  FUN_0040b4e0();
  puVar10 = &local_34;
  if (7 < local_20) {
    puVar10 = local_34;
  }
  FUN_0040f3c0(puVar10,local_24,local_250);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_34);
  }
  cVar2 = *param_1;
  local_9c = 0x3f800000;
  local_18 = param_4 * 30.0 + local_18;
  local_98 = 0x3f800000;
  local_94 = 0x3f800000;
  local_90 = 0x3f800000;
  if (((((cVar2 == '\f') || (cVar2 == '\r')) || (cVar2 == '\x15')) ||
      (((cVar2 == '\v' && (param_1[1] != '\x0e')) ||
       ((cVar2 == '\0' || ((cVar2 == '\x19' || (cVar2 == '\x14')))))))) ||
     ((cVar2 == '\x18' || (cVar2 == '\x17')))) {
    if (1 < *(short *)(param_1 + 0x10)) {
      puVar28 = &DAT_0070287c;
      pbVar7 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                         (local_294,(int)*(short *)(param_1 + 0x10));
      FUN_0040e440(pbVar7,puVar28);
    }
  }
  else {
    if (cVar2 == '\x13') {
      sVar27 = *(short *)(param_1 + 0x10);
      pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
               FUN_0040e440(local_294,&DAT_00702880);
      std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,sVar27);
    }
    else {
      iVar3 = FUN_004c76a0();
      pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e440(local_294,"Power ")
      ;
      std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,iVar3);
    }
    iVar3 = FUN_00445f10();
    iVar6 = FUN_004c76a0();
    this = local_1ec;
    if (iVar3 < iVar6) {
      local_9c = 0x3f800000;
      local_98 = 0;
      local_94 = 0;
      local_90 = 0x3f800000;
    }
  }
  if ((param_1[0xe] & 1U) != 0) {
    FUN_0040e6f0(local_294,L" (adapted)");
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74._2_2_ << 0x10);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0xb;
  uVar5 = FUN_00411bc0(local_5c);
  local_1e8 = param_4 * 9.0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0x3f800000;
  local_8._0_1_ = 0xc;
  FUN_00639b30(&local_74,uVar5,0,0x40000000,local_1c,local_18,local_1e8,0x40400000,&local_9c,
               &local_44,&local_2c,0x10,(float)param_5,1);
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0xd;
  uVar5 = FUN_00411bc0(local_5c);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_8._0_1_ = 0xe;
  FUN_00639b30(&local_74,uVar5,0,0x40000000,local_1c,local_18,local_1e8,0,&local_9c,&local_44,
               &local_2c,0x10,(float)param_5,1);
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8._0_1_ = 3;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 3;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  if (param_7 != '\0') {
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0xf;
    FUN_0040b4e0();
    puVar10 = &local_34;
    if (7 < local_20) {
      puVar10 = local_34;
    }
    FUN_0040f3c0(puVar10,local_24,local_250);
    local_8._0_1_ = 3;
    if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_34);
    }
    local_18 = param_4 * 14.0 + local_18;
    cVar2 = FUN_004c6f20(*(undefined1 *)
                          (*(int *)&this[0x12f78].
                                    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                    .field_0x1c + 0x140));
    if (cVar2 == '\0') {
      FUN_0040eb60(&PTR_006fccac);
      local_8._0_1_ = 0x10;
      FUN_0040b4e0();
      puVar10 = &local_34;
      if (7 < local_20) {
        puVar10 = local_34;
      }
      FUN_0040f3c0(puVar10,local_24,local_250);
      local_8 = CONCAT31(local_8._1_3_,3);
      if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_34);
      }
      cVar2 = FUN_004c6f20(1);
      if (cVar2 != '\0') {
        FUN_0040e6f0(local_294,L"Warrior ");
      }
      cVar2 = FUN_004c6f20(2);
      if (cVar2 != '\0') {
        FUN_0040e6f0(local_294,L"Ranger ");
      }
      cVar2 = FUN_004c6f20(3);
      if (cVar2 != '\0') {
        FUN_0040e6f0(local_294,L"Mage ");
      }
      cVar2 = FUN_004c6f20(4);
      if (cVar2 != '\0') {
        FUN_0040e6f0(local_294,L"Rogue ");
      }
      FUN_0040eb60(L"resource1.dat");
      local_8._0_1_ = 0x11;
      uVar5 = FUN_00411bc0(local_5c);
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0x3f800000;
      local_6c = 0x3f800000;
      local_68 = 0x3f800000;
      local_64 = 0x3f800000;
      local_60 = 0x3f800000;
      local_8._0_1_ = 0x12;
      FUN_00639b30(local_8c,uVar5,0,0x40000000,local_1c,local_18,local_1e8,0x40400000,&local_6c,
                   &local_44,&local_2c,0x10,(float)param_5,1);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      FUN_0040eb60(L"resource1.dat");
      local_8._0_1_ = 0x13;
      uVar5 = FUN_00411bc0(local_5c);
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_6c = 0x3f800000;
      local_68 = 0;
      local_64 = 0;
      local_60 = 0x3f800000;
      local_8._0_1_ = 0x14;
      FUN_00639b30(local_8c,uVar5,0,0x40000000,local_1c,local_18,local_1e8,0,&local_6c,&local_44,
                   &local_2c,0x10,(float)param_5,1);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      local_8._0_1_ = 3;
      uVar1 = (undefined1)local_8;
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
    }
    else {
      uVar1 = (undefined1)local_8;
      if (*param_1 == '\x02') {
        FUN_0040ee70(param_1);
        local_1dc[0] = (undefined1)local_1d4;
        local_1d4 = 0;
        cVar2 = FUN_00444a90(local_1dc);
        uVar1 = (undefined1)local_8;
        if (cVar2 != '\0') {
          local_18 = param_4 * 27.0 + local_18;
          FUN_0040eb60(L"Already known");
          local_8._0_1_ = 0x15;
          FUN_0040eb60(L"resource1.dat");
          local_2c = 0;
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          local_38 = 0x3f800000;
          local_6c = 0x3f800000;
          local_68 = 0x3f800000;
          local_64 = 0x3f800000;
          local_60 = 0x3f800000;
          local_8._0_1_ = 0x16;
          FUN_00639b30(local_5c,local_8c,0,0x40000000,local_1c,local_18,local_1e8,0x40400000,
                       &local_6c,&local_44,&local_2c,0x10,(float)param_5,1);
          local_8._0_1_ = 0x15;
          FUN_00593e50();
          FUN_0040eb60(L"resource1.dat");
          local_8._0_1_ = 0x17;
          local_2c = 0;
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          local_38 = 0;
          local_6c = 0x3f800000;
          local_68 = 0;
          local_64 = 0;
          local_60 = 0x3f800000;
          FUN_00639b30(local_5c,local_8c,0,0x40000000,local_1c,local_18,local_1e8,0,&local_6c,
                       &local_44,&local_2c,0x10,(float)param_5,1);
          FUN_00593e50();
          local_8._0_1_ = 3;
          FUN_00593e50();
          uVar1 = (undefined1)local_8;
        }
      }
    }
  }
  local_8._0_1_ = uVar1;
  local_20 = 7;
  local_24 = 0;
  local_34 = (undefined4 *)((uint)local_34 & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 0x18;
  FUN_0040b4e0();
  puVar10 = &local_34;
  if (7 < local_20) {
    puVar10 = local_34;
  }
  FUN_0040f3c0(puVar10,local_24,local_250);
  local_8._0_1_ = 3;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 3;
  if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_34);
  }
  local_1e8 = param_4 * 16.0;
  local_18 = local_18 + local_1e8;
  if (*param_1 == '\x13') {
    fVar14 = (float10)FUN_0043ca60((float)(int)*(short *)(param_1 + 0x10));
    local_1e4 = (float)fVar14;
    iVar3 = (int)(local_1e4 * 1000.0 + 50.0);
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x19;
    FUN_0040b4e0();
    puVar10 = &local_34;
    if (7 < local_20) {
      puVar10 = local_34;
    }
    FUN_0040f3c0(puVar10,local_24,local_250);
    local_8._0_1_ = 3;
    if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_34);
    }
    uVar23 = *(uint *)(param_1 + 4);
    pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
             FUN_0040e6f0(local_294,&DAT_00702904,uVar23,&DAT_00701904);
    pbVar7 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,uVar23);
    pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e440(pbVar7);
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,iVar3);
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x1a;
    uVar5 = FUN_00411bc0(local_5c);
    local_1e4 = param_4 * 10.0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x3f800000;
    local_6c = 0x3f800000;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x1b;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e4,0x40000000,&local_6c,&local_44,
                 &local_2c,0,0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x1c;
    uVar5 = FUN_00411bc0(local_5c);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_6c = 0x3f000000;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x1d;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e4,0,&local_6c,&local_44,&local_2c,0,
                 0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    local_1e0 = param_4 * 14.0;
    local_18 = local_18 + local_1e0;
    cVar2 = FUN_00444760(param_1[1]);
    uVar1 = (undefined1)local_8;
    if (cVar2 != '\0') {
      FUN_0040eb60(&PTR_006fccac);
      local_8._0_1_ = 0x1e;
      FUN_0040b4e0();
      puVar10 = &local_34;
      if (7 < local_20) {
        puVar10 = local_34;
      }
      FUN_0040f3c0(puVar10,local_24,local_250);
      local_8._0_1_ = 3;
      if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_34);
      }
      FUN_0040e6f0(local_294,L"Ridable");
      FUN_0040eb60(L"resource1.dat");
      local_8._0_1_ = 0x1f;
      uVar5 = FUN_00411bc0(local_5c);
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0x3f800000;
      local_6c = 0x3f800000;
      local_68 = 0x3f800000;
      local_64 = 0x3f800000;
      local_60 = 0x3f800000;
      local_8._0_1_ = 0x20;
      FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e4,0x40000000,&local_6c,&local_44,
                   &local_2c,0,0xbf800000,1);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      FUN_0040eb60(L"resource1.dat");
      local_8._0_1_ = 0x21;
      uVar5 = FUN_00411bc0(local_5c);
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_6c = 0x3f400000;
      local_68 = 0x3f000000;
      local_64 = 0x3f800000;
      local_60 = 0x3f800000;
      local_8._0_1_ = 0x22;
      FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e4,0,&local_6c,&local_44,&local_2c,0,
                   0xbf800000,1);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      local_18 = local_18 + local_1e0;
      uVar1 = (undefined1)local_8;
    }
  }
  local_8._0_1_ = uVar1;
  if (*param_1 == '\x03') {
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x23;
    FUN_0040b4e0();
    puVar10 = &local_34;
    if (7 < local_20) {
      puVar10 = local_34;
    }
    FUN_0040f3c0(puVar10,local_24,local_250);
    local_8._0_1_ = 3;
    if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_34);
    }
    fVar14 = (float10)FUN_004c7f60();
    fVar14 = (float10)FUN_00439110((float)fVar14);
    fVar20 = (float)fVar14;
    pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
             FUN_0040e440(local_294,&DAT_0070291c);
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,fVar20);
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x24;
    uVar5 = FUN_00411bc0(local_5c);
    local_1e0 = param_4 * 10.0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x3f800000;
    local_6c = 0x3f800000;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x25;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e0,0x40000000,&local_6c,&local_44,
                 &local_2c,0,0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x26;
    uVar5 = FUN_00411bc0(local_5c);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_6c = 0x3f400000;
    local_68 = 0x3f000000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x27;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e0,0,&local_6c,&local_44,&local_2c,0,
                 0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    local_18 = param_4 * 14.0 + local_18;
  }
  fVar14 = (float10)FUN_004c70b0();
  local_1e0 = (float)fVar14;
  if (0.1 <= local_1e0) {
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x28;
    FUN_0040b4e0();
    puVar10 = &local_34;
    if (7 < local_20) {
      puVar10 = local_34;
    }
    FUN_0040f3c0(puVar10,local_24,local_250);
    local_8._0_1_ = 3;
    if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_34);
    }
    fVar14 = (float10)FUN_004c70b0();
    fVar14 = (float10)FUN_00439110((float)fVar14);
    fVar20 = (float)fVar14;
    pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
             FUN_0040e440(local_294,&DAT_00702924);
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,fVar20);
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x29;
    uVar5 = FUN_00411bc0(local_5c);
    local_1e0 = param_4 * 10.0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x3f800000;
    local_6c = 0x3f800000;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x2a;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e0,0x40000000,&local_6c,&local_44,
                 &local_2c,0,0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x2b;
    uVar5 = FUN_00411bc0(local_5c);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_6c = 0x3f400000;
    local_68 = 0x3f000000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x2c;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e0,0,&local_6c,&local_44,&local_2c,0,
                 0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    local_18 = param_4 * 14.0 + local_18;
  }
  fVar14 = (float10)FUN_004c6a90();
  local_1e0 = (float)fVar14;
  if (0.1 <= local_1e0) {
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x2d;
    FUN_0040b4e0();
    puVar10 = &local_34;
    if (7 < local_20) {
      puVar10 = local_34;
    }
    FUN_0040f3c0(puVar10,local_24,local_250);
    local_8._0_1_ = 3;
    if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_34);
    }
    fVar14 = (float10)FUN_004c6a90();
    fVar14 = (float10)FUN_00439110((float)fVar14);
    fVar20 = (float)fVar14;
    pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e440(local_294,"ARMOR ");
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,fVar20);
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x2e;
    uVar5 = FUN_00411bc0(local_5c);
    local_1e0 = param_4 * 10.0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x3f800000;
    local_6c = 0x3f800000;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x2f;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e0,0x40000000,&local_6c,&local_44,
                 &local_2c,0,0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x30;
    uVar5 = FUN_00411bc0(local_5c);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_6c = 0x3f400000;
    local_68 = 0x3f000000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x31;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e0,0,&local_6c,&local_44,&local_2c,0,
                 0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    local_18 = local_18 + local_1e8;
  }
  fVar14 = (float10)FUN_004c7af0();
  local_1e0 = (float)fVar14;
  if (0.1 <= local_1e0) {
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x32;
    FUN_0040b4e0();
    puVar10 = &local_34;
    if (7 < local_20) {
      puVar10 = local_34;
    }
    FUN_0040f3c0(puVar10,local_24,local_250);
    local_8._0_1_ = 3;
    if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_34);
    }
    fVar14 = (float10)FUN_004c7af0();
    fVar14 = (float10)FUN_00439110((float)fVar14);
    fVar20 = (float)fVar14;
    pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e440(local_294,"RESI ");
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,fVar20);
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x33;
    uVar5 = FUN_00411bc0(local_5c);
    local_1e0 = param_4 * 10.0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x3f800000;
    local_6c = 0x3f800000;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x34;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e0,0x40000000,&local_6c,&local_44,
                 &local_2c,0,0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x35;
    uVar5 = FUN_00411bc0(local_5c);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_6c = 0x3f400000;
    local_68 = 0x3f000000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x36;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e0,0,&local_6c,&local_44,&local_2c,0,
                 0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    local_18 = local_18 + local_1e8;
  }
  fVar14 = (float10)FUN_004c7c00();
  local_1e0 = (float)fVar14;
  if (0.001 <= local_1e0) {
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x37;
    FUN_0040b4e0();
    puVar10 = &local_34;
    if (7 < local_20) {
      puVar10 = local_34;
    }
    FUN_0040f3c0(puVar10,local_24,local_250);
    local_8._0_1_ = 3;
    if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_34);
    }
    fVar14 = (float10)FUN_004c7c00(&DAT_007020e0);
    local_1e0 = (float)fVar14;
    fVar14 = (float10)FUN_00439110(local_1e0 * 100.0);
    fVar20 = (float)fVar14;
    pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e440(local_294,"TEMPO ");
    pbVar7 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,fVar20);
    FUN_0040e440(pbVar7);
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x38;
    uVar5 = FUN_00411bc0(local_5c);
    local_1e0 = param_4 * 10.0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x3f800000;
    local_6c = 0x3f800000;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x39;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e0,0x40000000,&local_6c,&local_44,
                 &local_2c,0,0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x3a;
    uVar5 = FUN_00411bc0(local_5c);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_6c = 0;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x3b;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e0,0,&local_6c,&local_44,&local_2c,0,
                 0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    local_18 = local_18 + local_1e8;
  }
  fVar14 = (float10)FUN_004c6ba0();
  local_1e0 = (float)fVar14;
  if (0.001 <= local_1e0) {
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x3c;
    FUN_0040b4e0();
    puVar10 = &local_34;
    if (7 < local_20) {
      puVar10 = local_34;
    }
    FUN_0040f3c0(puVar10,local_24,local_250);
    local_8._0_1_ = 3;
    if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_34);
    }
    fVar14 = (float10)FUN_004c6ba0(&DAT_007020e0);
    local_1e0 = (float)fVar14;
    fVar14 = (float10)FUN_00439110(local_1e0 * 100.0);
    fVar20 = (float)fVar14;
    pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e440(local_294,"CRIT ");
    pbVar7 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,fVar20);
    FUN_0040e440(pbVar7);
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x3d;
    uVar5 = FUN_00411bc0(local_5c);
    local_1e0 = param_4 * 10.0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x3f800000;
    local_6c = 0x3f800000;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8._0_1_ = 0x3e;
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e0,0x40000000,&local_6c,&local_44,
                 &local_2c,0,0xbf800000,1);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x3f;
    uVar5 = FUN_00411bc0(local_5c);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_6c = 0;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_8 = CONCAT31(local_8._1_3_,0x40);
    FUN_00639b30(local_8c,uVar5,0,0,local_1c,local_18,local_1e0,0,&local_6c,&local_44,&local_2c,0,
                 0xbf800000,1);
    if (7 < local_48) {
      iVar3 = local_48 + 1;
      pvVar25 = local_5c[0];
      FUN_0046dcb0(&local_1f1);
      FUN_0040f8c0(pvVar25,iVar3);
    }
    local_48 = 7;
    FUN_0040f2d0(0);
    local_8._0_1_ = 3;
    FUN_00593e50();
    pfVar8 = (float *)FUN_00428970(1);
    *pfVar8 = *pfVar8 + local_1e8;
  }
  fVar14 = (float10)FUN_004c78c0();
  local_1e0 = (float)fVar14;
  if (0.1 <= local_1e0) {
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x41;
    FUN_00411b90(local_8c);
    local_8._0_1_ = 3;
    FUN_00593e50();
    fVar14 = (float10)FUN_004c78c0();
    fVar14 = (float10)FUN_00439110((float)fVar14);
    fVar20 = (float)fVar14;
    pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
             FUN_0040e440(local_294,&DAT_00702948);
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,fVar20);
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x42;
    uVar9 = FUN_00411bc0(local_8c);
    local_1e4 = param_4 * 10.0;
    local_8._0_1_ = 0x43;
    pfVar8 = (float *)FUN_00428970(1);
    puVar10 = (undefined4 *)FUN_00428970(0);
    uVar29 = 1;
    uVar26 = 0xbf800000;
    uVar24 = 0;
    uVar11 = FUN_0040eac0(0,0,0,0);
    uVar12 = FUN_0040eac0(0,0,0,0x3f800000);
    uVar13 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    uVar22 = 0x40000000;
    fVar20 = *pfVar8;
    uVar5 = *puVar10;
    uVar19 = 0;
    uVar18 = 0;
    ppvVar15 = local_5c;
    fVar21 = local_1e4;
    FUN_00411320(ppvVar15,uVar9,0,0,uVar5,fVar20,local_1e4,0x40000000,uVar13,uVar12,uVar11,uVar24,
                 uVar26,uVar29);
    FUN_00639b30(ppvVar15,uVar9,uVar18,uVar19,uVar5,fVar20,fVar21,uVar22,uVar13,uVar12,uVar11,uVar24
                 ,uVar26,uVar29);
    FUN_00593e50();
    local_8._0_1_ = 3;
    FUN_00593e50();
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x44;
    uVar9 = FUN_00411bc0(local_8c);
    uVar29 = 1;
    uVar26 = 0xbf800000;
    uVar24 = 0;
    local_8._0_1_ = 0x45;
    uVar11 = FUN_0040eac0(0,0,0,0);
    uVar12 = FUN_0040eac0(0,0,0,0);
    uVar13 = FUN_0040eac0(0,0x3f800000,0x3f800000,0x3f800000);
    puVar16 = local_b4;
    uVar22 = 0;
    fVar20 = *pfVar8;
    uVar5 = *puVar10;
    uVar19 = 0;
    uVar18 = 0;
    fVar21 = local_1e4;
    FUN_00411320(puVar16,uVar9,0,0,uVar5,fVar20,local_1e4,0,uVar13,uVar12,uVar11,uVar24,uVar26,
                 uVar29);
    FUN_00639b30(puVar16,uVar9,uVar18,uVar19,uVar5,fVar20,fVar21,uVar22,uVar13,uVar12,uVar11,uVar24,
                 uVar26,uVar29);
    FUN_00593e50();
    local_8._0_1_ = 3;
    FUN_00593e50();
    *pfVar8 = *pfVar8 + local_1e8;
    param_1 = local_1f0;
  }
  if (*param_1 == '\x01') {
    fVar14 = (float10)FUN_004c6e10();
    local_1f0 = (char *)(float)fVar14;
    if (0.1 <= (float)local_1f0) {
      FUN_0040eb60(&PTR_006fccac);
      local_8._0_1_ = 0x46;
      FUN_00411b90(local_b4);
      local_8._0_1_ = 3;
      FUN_00593e50();
      FUN_004c6e10();
      iVar3 = FUN_0068d910();
      pbVar4 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
               FUN_0040e440(local_294,&DAT_00702950);
      std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar4,iVar3);
      FUN_0040eb60(L"resource1.dat");
      local_8._0_1_ = 0x47;
      uVar9 = FUN_00411bc0(local_b4);
      local_1e4 = param_4 * 10.0;
      local_8._0_1_ = 0x48;
      pfVar8 = (float *)FUN_00428970(1);
      puVar10 = (undefined4 *)FUN_00428970(0);
      uVar29 = 1;
      uVar26 = 0xbf800000;
      uVar24 = 0;
      uVar11 = FUN_0040eac0(0,0,0,0);
      uVar12 = FUN_0040eac0(0,0,0,0x3f800000);
      uVar13 = FUN_0040eac0(0x3e800000,0x3f800000,0x3e800000,0x3f800000);
      uVar22 = 0x40000000;
      fVar20 = *pfVar8;
      uVar5 = *puVar10;
      uVar19 = 0;
      uVar18 = 0;
      ppiVar17 = local_8c;
      fVar21 = local_1e4;
      FUN_00411320(ppiVar17,uVar9,0,0,uVar5,fVar20,local_1e4,0x40000000,uVar13,uVar12,uVar11,uVar24,
                   uVar26,uVar29);
      FUN_00639b30(ppiVar17,uVar9,uVar18,uVar19,uVar5,fVar20,fVar21,uVar22,uVar13,uVar12,uVar11,
                   uVar24,uVar26,uVar29);
      FUN_00593e50();
      local_8._0_1_ = 3;
      FUN_00593e50();
      FUN_0040eb60(L"resource1.dat");
      local_8._0_1_ = 0x49;
      uVar9 = FUN_00411bc0(local_b4);
      uVar29 = 1;
      uVar26 = 0xbf800000;
      uVar24 = 0;
      local_8._0_1_ = 0x4a;
      uVar11 = FUN_0040eac0(0,0,0,0);
      uVar12 = FUN_0040eac0(0,0,0,0);
      uVar13 = FUN_0040eac0(0x3e800000,0x3f800000,0x3e800000,0x3f800000);
      ppvVar15 = local_5c;
      uVar22 = 0;
      fVar20 = *pfVar8;
      uVar5 = *puVar10;
      uVar19 = 0;
      uVar18 = 0;
      fVar21 = local_1e4;
      FUN_00411320(ppvVar15,uVar9,0,0,uVar5,fVar20,local_1e4,0,uVar13,uVar12,uVar11,uVar24,uVar26,
                   uVar29);
      FUN_00639b30(ppvVar15,uVar9,uVar18,uVar19,uVar5,fVar20,fVar21,uVar22,uVar13,uVar12,uVar11,
                   uVar24,uVar26,uVar29);
      FUN_00593e50();
      FUN_00593e50();
      *pfVar8 = param_4 * 14.0 + *pfVar8;
    }
  }
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             local_2a4);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_ofstream<char,std::char_traits<char>_>::vfunction1 @ 004cb2b5  kind=lib  attributed-by=stl-ns  size=8 */

void __thiscall std::basic_ofstream<char,std::char_traits<char>_>::vfunction1(void)

{
  FUN_004cb2c0();
  return;
}


/* std::basic_ofstream<char,std::char_traits<char>_>::vfunction3 @ 004cb301  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall
std::basic_ofstream<char,std::char_traits<char>_>::vfunction3
          (basic_ofstream<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x004cb307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::_Add_vtordisp2
            ((basic_ostream<char,std::char_traits<char>_> *)
             ((int)this + (-0x58 - (int)this[-1].vftablePtr)));
  return;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 004e1970  kind=lib  attributed-by=stl-ns  size=4005 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data *pbVar1;
  short sVar2;
  undefined4 ******ppppppuVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  int *piVar7;
  short *psVar8;
  int iVar9;
  undefined4 ******ppppppuVar10;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar11;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *pbVar12;
  undefined4 *puVar13;
  QuestText *pQVar14;
  short *psVar15;
  uint uVar16;
  undefined1 *puVar17;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *local_2c0;
  undefined1 *puStack_2bc;
  void *pvStack_2b8;
  undefined4 ******ppppppuStack_2b4;
  int iStack_28c;
  basic_iostream<wchar_t,std::char_traits<wchar_t>_> local_288;
  undefined1 local_270 [80];
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_220 [6];
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_1d8;
  uint local_19c;
  undefined1 *local_198;
  Database local_194;
  undefined1 *local_18c;
  undefined1 *local_188;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data *local_184;
  uint local_180;
  void *local_17c;
  void *local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 *local_16c;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_158;
  int local_154;
  int local_150;
  undefined4 ******local_14c;
  int local_148;
  undefined4 local_144;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_140;
  undefined1 *local_134;
  undefined1 local_68 [12];
  void *local_5c;
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  int local_34;
  uint local_30;
  undefined4 ******local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e983b;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar16 = 0;
  local_180 = 0;
                    /* inlined constructor: cube::Speech::Speech */
  this->vbtablePtr =
       (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *)
       &cube::Speech::vftable;
  *(undefined4 *)&this->field_0x4 = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  local_1d8 = this;
  local_140 = this;
  uVar6 = FUN_004e3480();
  *(undefined4 *)&this->field_0x4 = uVar6;
  puVar17 = &this->field_0xc;
  local_8 = 0;
  *(undefined4 *)puVar17 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  local_198 = puVar17;
  uVar6 = FUN_00630a10();
  *(undefined4 *)puVar17 = uVar6;
  pbVar1 = &this->
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data;
  local_8._0_1_ = 1;
  *(undefined4 *)pbVar1 = 0;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x4 = 0;
  local_184 = pbVar1;
  uVar6 = FUN_00630a10();
  *(undefined4 *)pbVar1 = uVar6;
  puVar17 = &(this->
             basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
             field_0x8;
  local_8._0_1_ = 2;
  *(undefined4 *)puVar17 = 0;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0xc = 0;
  local_18c = puVar17;
  uVar6 = FUN_00630a10();
  *(undefined4 *)puVar17 = uVar6;
  puVar17 = &(this->
             basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
             field_0x10;
  local_8._0_1_ = 3;
  *(undefined4 *)puVar17 = 0;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x14 = 0;
  local_188 = puVar17;
  uVar6 = FUN_00630a10();
  *(undefined4 *)puVar17 = uVar6;
  local_8._0_1_ = 4;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x18 = 0;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x1c = 0;
  uVar6 = FUN_00630a10();
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x18 = uVar6;
  puVar17 = &(this->
             basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
             field_0x20;
  local_8._0_1_ = 5;
  *(undefined4 *)puVar17 = 0;
  *(undefined4 *)
   &(this->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x24 = 0;
  local_16c = puVar17;
  uVar6 = FUN_00630a10();
  pbVar11 = local_140;
  *(undefined4 *)puVar17 = uVar6;
  local_8._0_1_ = 6;
  local_134 = &(local_140->
               basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
               field_0x28;
  *(undefined4 *)local_134 = 0;
  *(undefined4 *)
   &(local_140->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data)
    .field_0x2c = 0;
  uVar6 = FUN_0064e370();
  *(undefined4 *)
   &(pbVar11->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x28 = uVar6;
  local_8._0_1_ = 7;
  *(undefined4 *)
   &(pbVar11->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x30 = 0;
  *(undefined4 *)
   &(pbVar11->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x34 = 0;
  uVar6 = FUN_0064e370();
  *(undefined4 *)
   &(pbVar11->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x30 = uVar6;
  local_8._0_1_ = 8;
  *(undefined4 *)
   &(pbVar11->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x38 = 0;
  *(undefined4 *)
   &(pbVar11->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x3c = 0;
  uVar6 = FUN_0064e370();
  *(undefined4 *)
   &(pbVar11->basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data).
    field_0x38 = uVar6;
  local_8._0_1_ = 9;
  FUN_004d6d10();
  local_8._0_1_ = 10;
  cube::Database::Database(&local_194);
  local_8._0_1_ = 0xb;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 ******)((uint)local_2c[0] & 0xffffff00);
  ppppppuStack_2b4 = (undefined4 ******)0x4e1af0;
  FUN_0040c280();
  local_8._0_1_ = 0xc;
  FUN_004497b0();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_17c = (void *)0x0;
  local_178 = (void *)0x0;
  local_174 = 0;
  local_170 = 0;
  local_8._0_1_ = 0xd;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 ******)((uint)local_2c[0] & 0xffffff00);
  ppppppuStack_2b4 = (undefined4 ******)0x4e1b61;
  FUN_0040c280();
  local_8._0_1_ = 0xe;
  ppppppuStack_2b4 = (undefined4 ******)0x4e1b7b;
  FUN_004498d0();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_004496a0();
  if (0 < (int)local_178 - (int)local_17c) {
    local_144 = 0;
    pvStack_2b8 = local_17c;
    if (local_17c == local_178) {
      pvStack_2b8 = (void *)0x0;
    }
    puStack_2bc = local_68;
    local_2c0 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                 *)0x4e1bdb;
    ppppppuStack_2b4 = (undefined4 ******)((int)local_178 - (int)local_17c);
    piVar7 = (int *)FUN_004d7b00();
    if (*piVar7 == 0) {
      FUN_004d7860();
      FUN_004d70a0();
      FUN_004d7840();
      cVar5 = FUN_004d6d40();
      while (cVar5 != '\0') {
        FUN_00458de0();
        psVar8 = (short *)FUN_004d7bc0();
        local_48 = 7;
        local_4c = 0;
        local_5c = (void *)((uint)local_5c & 0xffff0000);
        sVar2 = *psVar8;
        while (sVar2 != 0) {
          sVar2 = *psVar8;
          psVar8 = psVar8 + 1;
        }
        ppppppuStack_2b4 = (undefined4 ******)0x4e1c7f;
        FUN_0040f7a0();
        local_8._0_1_ = 0xf;
        ppppppuStack_2b4 = (undefined4 ******)0x4e1c9a;
        FUN_00458de0();
        ppppppuStack_2b4 = (undefined4 ******)0x4e1ca1;
        FUN_004d7020();
        psVar8 = (short *)FUN_004d7bc0();
        local_30 = 7;
        local_34 = 0;
        local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
        sVar2 = *psVar8;
        while (sVar2 != 0) {
          sVar2 = *psVar8;
          psVar8 = psVar8 + 1;
        }
        ppppppuStack_2b4 = (undefined4 ******)0x4e1ce9;
        FUN_0040f7a0();
        local_8._0_1_ = 0x10;
        uVar4 = (undefined1)local_8;
        local_8._0_1_ = 0x10;
        if (local_34 != 0) {
          ppppppuStack_2b4 = (undefined4 ******)local_4c;
          pvStack_2b8 = (void *)0x0;
          puStack_2bc = (undefined1 *)0x4e1d0b;
          local_154 = FUN_00428db0();
          if (local_154 == 0) {
            local_150 = local_154;
            local_154 = FUN_00630a10();
            local_8._0_1_ = 0x11;
            local_14c = (undefined4 ******)0x0;
            local_148 = 0;
            ppppppuStack_2b4 = (undefined4 ******)0x4e1d57;
            local_14c = (undefined4 ******)FUN_00439600();
            local_8 = CONCAT31(local_8._1_3_,0x12);
            FUN_00458de0();
            FUN_004d70a0();
            FUN_00458de0();
            FUN_004d7840();
            cVar5 = FUN_004d6d40();
            while (cVar5 != '\0') {
              FUN_00458de0();
              iVar9 = FUN_004d7bc0();
              if (iVar9 != 0) {
                FUN_00458de0();
                iVar9 = FUN_004d7150();
                if (iVar9 != 0) {
                  FUN_00458de0();
                  FUN_004d7bc0();
                  FUN_0040eb60();
                  local_8._0_1_ = 0x13;
                  FUN_00458de0();
                  psVar8 = (short *)FUN_004d7150();
                  FUN_004689a0();
                  sVar2 = *psVar8;
                  while (sVar2 != 0) {
                    sVar2 = *psVar8;
                    psVar8 = psVar8 + 1;
                  }
                  ppppppuStack_2b4 = (undefined4 ******)0x4e1e4f;
                  FUN_0040f7a0();
                  local_8 = CONCAT31(local_8._1_3_,0x12);
                  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
                    operator_delete(local_2c[0]);
                  }
                }
              }
              ppppppuStack_2b4 = (undefined4 ******)0x4e1e78;
              FUN_004d6d70();
              FUN_00458de0();
              FUN_004d7840();
              cVar5 = FUN_004d6d40();
            }
            ppppppuStack_2b4 = (undefined4 ******)0x4e1ebc;
            FUN_00458de0();
            ppppppuStack_2b4 = (undefined4 *******)0x4e1ec3;
            FUN_004d7020();
            iVar9 = FUN_004d6d60();
            if (iVar9 != -1) {
              ppppppuStack_2b4 = (undefined4 ******)0x4e1eea;
              FUN_00458de0();
              ppppppuStack_2b4 = (undefined4 ******)0x4e1ef1;
              FUN_004d7020();
              psVar8 = (short *)FUN_004d7bc0();
              local_18 = 7;
              local_1c = 0;
              local_2c[0] = (undefined4 ******)((uint)local_2c[0] & 0xffff0000);
              sVar2 = *psVar8;
              while (sVar2 != 0) {
                sVar2 = *psVar8;
                psVar8 = psVar8 + 1;
              }
              ppppppuStack_2b4 = (undefined4 ******)0x4e1f39;
              FUN_0040f7a0();
              local_8._0_1_ = 0x14;
              local_288.vbtablePtr =
                   (basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&vbtable;
              local_288.basic_ostream<wchar_t,std::char_traits<wchar_t>_>.vbtablePtr =
                   (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
              std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
              basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_220);
              local_180 = uVar16 | 1;
              local_8 = CONCAT31(local_8._1_3_,0x15);
              ppppppuStack_2b4 = (undefined4 ******)0x4e1f7f;
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
              ppppppuStack_2b4 = local_2c;
              if (7 < local_18) {
                ppppppuStack_2b4 = local_2c[0];
              }
              local_8 = CONCAT31(local_8._1_3_,0x17);
                    /* inlined constructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
              local_270._0_4_ =
                   &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                    vftable;
              pvStack_2b8 = (void *)0x4e1feb;
              FUN_0040f3c0();
              if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
                operator_delete(local_2c[0]);
              }
              iVar9 = *(int *)(&local_288.basic_iostream<wchar_t,std::char_traits<wchar_t>_>_data.
                                field_0x8 +
                              (local_288.vbtablePtr)->
                              basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
              while (local_8._1_3_ = (undefined3)((uint)local_8 >> 8), iVar9 == 0) {
                local_18 = 7;
                local_1c = 0;
                local_2c[0] = (undefined4 ******)((uint)local_2c[0] & 0xffff0000);
                local_8 = CONCAT31(local_8._1_3_,0x1a);
                ppppppuStack_2b4 = (undefined4 *******)0x4e2048;
                FUN_00451210();
                ppppppuVar3 = local_14c;
                if (local_1c != 0) {
                  ppppppuStack_2b4 = local_14c;
                  pvStack_2b8 = (void *)0x4e206a;
                  ppppppuVar10 = (undefined4 ******)FUN_004521c0();
                  if (local_148 == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("list<T> too long");
                  }
                  local_148 = local_148 + 1;
                  ppppppuVar3[1] = ppppppuVar10;
                  *ppppppuVar10[1] = ppppppuVar10;
                }
                if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
                  operator_delete(local_2c[0]);
                }
                iVar9 = *(int *)(&local_288.basic_iostream<wchar_t,std::char_traits<wchar_t>_>_data.
                                  field_0x8 +
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
              FUN_0040b4e0();
              std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
              ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
                        ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_270);
              std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
              ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                        ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(local_270 + 8));
              std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
              ~basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_220);
            }
            piVar7 = (int *)FUN_004e3060();
            if (piVar7 != &local_154) {
              FUN_0046dbc0();
              local_19c = local_19c & 0xffffff00;
              *(int *)(*piVar7 + 4) = *piVar7;
              *(int *)*piVar7 = *piVar7;
              *(int *)(*piVar7 + 8) = *piVar7;
              piVar7[1] = 0;
              ppppppuStack_2b4 = (undefined4 *******)0x4e2171;
              FUN_004e03c0();
            }
            if ((undefined4 *******)(piVar7 + 2) != &local_14c) {
              ppppppuStack_2b4 = (undefined4 *******)0x4e218c;
              FUN_004e16b0();
            }
            local_8 = CONCAT31(local_8._1_3_,0x10);
            FUN_0046f990();
                    /* WARNING: Subroutine does not return */
            operator_delete(local_14c);
          }
          ppppppuStack_2b4 = (undefined4 ******)local_4c;
          pvStack_2b8 = (void *)0x0;
          puStack_2bc = (undefined1 *)0x4e21ec;
          iVar9 = FUN_00428db0();
          if (iVar9 == 0) {
            FUN_00458de0();
            psVar8 = (short *)FUN_004d7150();
            FUN_004e31e0();
            sVar2 = *psVar8;
            while (sVar2 != 0) {
              sVar2 = *psVar8;
              psVar8 = psVar8 + 1;
            }
            ppppppuStack_2b4 = (undefined4 ******)0x4e2238;
            FUN_0040f7a0();
          }
          ppppppuStack_2b4 = (undefined4 ******)local_4c;
          pvStack_2b8 = (void *)0x0;
          puStack_2bc = (undefined1 *)0x4e224c;
          iVar9 = FUN_00428db0();
          if (iVar9 == 0) {
            ppppppuStack_2b4 = (undefined4 ******)0x4e226b;
            FUN_00458de0();
            ppppppuStack_2b4 = (undefined4 ******)0x4e2272;
            FUN_004d70d0();
            psVar8 = (short *)FUN_004d7150();
            FUN_004e31e0();
            sVar2 = *psVar8;
            while (sVar2 != 0) {
              sVar2 = *psVar8;
              psVar8 = psVar8 + 1;
            }
            ppppppuStack_2b4 = (undefined4 ******)0x4e22b8;
            FUN_0040f7a0();
            ppppppuStack_2b4 = (undefined4 ******)0x4e22cf;
            FUN_00458de0();
            ppppppuStack_2b4 = (undefined4 ******)0x4e22d6;
            FUN_004d70d0();
            psVar8 = (short *)FUN_004d7150();
            FUN_004e31e0();
            sVar2 = *psVar8;
            while (sVar2 != 0) {
              sVar2 = *psVar8;
              psVar8 = psVar8 + 1;
            }
            ppppppuStack_2b4 = (undefined4 ******)0x4e2318;
            FUN_0040f7a0();
            ppppppuStack_2b4 = (undefined4 ******)0x4e232f;
            FUN_00458de0();
            ppppppuStack_2b4 = (undefined4 ******)0x4e2336;
            FUN_004d70d0();
            psVar8 = (short *)FUN_004d7150();
            FUN_004e31e0();
            sVar2 = *psVar8;
            while (sVar2 != 0) {
              sVar2 = *psVar8;
              psVar8 = psVar8 + 1;
            }
            ppppppuStack_2b4 = (undefined4 ******)0x4e2378;
            FUN_0040f7a0();
            ppppppuStack_2b4 = (undefined4 ******)0x4e238f;
            FUN_00458de0();
            ppppppuStack_2b4 = (undefined4 ******)0x4e2396;
            FUN_004d70d0();
            psVar8 = (short *)FUN_004d7150();
            FUN_004e31e0();
            sVar2 = *psVar8;
            while (sVar2 != 0) {
              sVar2 = *psVar8;
              psVar8 = psVar8 + 1;
            }
            ppppppuStack_2b4 = (undefined4 ******)0x4e23d8;
            FUN_0040f7a0();
          }
          ppppppuStack_2b4 = (undefined4 ******)local_4c;
          pvStack_2b8 = (void *)0x0;
          puStack_2bc = (undefined1 *)0x4e23ec;
          iVar9 = FUN_00428db0();
          if (iVar9 == 0) {
            pbVar11 = operator_new(8);
            local_8._0_1_ = 0x1b;
            local_158 = pbVar11;
            if (pbVar11 ==
                (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                0x0) {
              pbVar11 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                         *)0x0;
            }
            else {
              pbVar11->vbtablePtr =
                   (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                    *)0x0;
              *(undefined4 *)&pbVar11->field_0x4 = 0;
              pbVar12 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                         *)FUN_004e3480();
              pbVar11->vbtablePtr = pbVar12;
            }
            local_8._0_1_ = 0x10;
            puVar13 = (undefined4 *)FUN_00661830();
            *puVar13 = pbVar11;
            FUN_00458de0();
            FUN_004d70a0();
            FUN_00458de0();
            FUN_004d7840();
            cVar5 = FUN_004d6d40();
            while (cVar5 != '\0') {
              FUN_00458de0();
              iVar9 = FUN_004d7bc0();
              if (iVar9 != 0) {
                FUN_00458de0();
                iVar9 = FUN_004d7150();
                if (iVar9 != 0) {
                  FUN_00458de0();
                  psVar8 = (short *)FUN_004d7bc0();
                  local_18 = 7;
                  local_1c = 0;
                  local_2c[0] = (undefined4 ******)((uint)local_2c[0] & 0xffff0000);
                  sVar2 = *psVar8;
                  while (sVar2 != 0) {
                    sVar2 = *psVar8;
                    psVar8 = psVar8 + 1;
                  }
                  ppppppuStack_2b4 = (undefined4 ******)0x4e2509;
                  FUN_0040f7a0();
                  local_8._0_1_ = 0x1c;
                  FUN_00458de0();
                  psVar8 = (short *)FUN_004d7150();
                  local_158 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                               *)&local_2c0;
                  local_2c0 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                               *)((uint)local_2c0 & 0xffff0000);
                  if (*psVar8 == 0) {
                    iVar9 = 0;
                  }
                  else {
                    psVar15 = psVar8;
                    do {
                      sVar2 = *psVar15;
                      psVar15 = psVar15 + 1;
                    } while (sVar2 != 0);
                    iVar9 = (int)psVar15 - (int)(psVar8 + 1) >> 1;
                  }
                  FUN_0040f7a0(psVar8,iVar9);
                  local_8._0_1_ = 0x1d;
                  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                            (pbVar11,(int)local_2c);
                  local_8._0_1_ = 0x1c;
                  FUN_004da850();
                  local_8._0_1_ = 0x10;
                  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
                    operator_delete(local_2c[0]);
                  }
                }
              }
              ppppppuStack_2b4 = (undefined4 ******)0x4e25ab;
              FUN_004d6d70();
              FUN_00458de0();
              FUN_004d7840();
              cVar5 = FUN_004d6d40();
              uVar16 = local_180;
            }
          }
          ppppppuStack_2b4 = (undefined4 ******)local_4c;
          pvStack_2b8 = (void *)0x0;
          puStack_2bc = (undefined1 *)0x4e25f2;
          iVar9 = FUN_00428db0();
          uVar4 = (undefined1)local_8;
          if (iVar9 == 0) {
            local_158 = operator_new(0x10);
            local_8._0_1_ = 0x1e;
            if (local_158 ==
                (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                0x0) {
              pQVar14 = (QuestText *)0x0;
            }
            else {
              pQVar14 = cube::QuestText::QuestText((QuestText *)local_158);
            }
            local_8._0_1_ = 0x10;
            puVar13 = (undefined4 *)FUN_00661830();
            *puVar13 = pQVar14;
            FUN_00458de0();
            psVar8 = (short *)FUN_004d7150();
            local_158 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                         *)&local_2c0;
            local_2c0 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                         *)((uint)local_2c0 & 0xffff0000);
            if (*psVar8 == 0) {
              iVar9 = 0;
            }
            else {
              psVar15 = psVar8;
              do {
                sVar2 = *psVar15;
                psVar15 = psVar15 + 1;
              } while (sVar2 != 0);
              iVar9 = (int)psVar15 - (int)(psVar8 + 1) >> 1;
            }
            FUN_0040f7a0(psVar8,iVar9);
            local_8._0_1_ = 0x1f;
            FUN_00661830(local_44);
            local_8._0_1_ = 0x10;
            FUN_004da850();
            uVar4 = (undefined1)local_8;
          }
        }
        local_8._0_1_ = uVar4;
        if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_44[0]);
        }
        local_30 = 7;
        local_34 = 0;
        local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
        local_8 = CONCAT31(local_8._1_3_,0xd);
        if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_5c);
        }
        ppppppuStack_2b4 = (undefined4 ******)0x4e270f;
        FUN_004d6d70();
        FUN_004d7840();
        cVar5 = FUN_004d6d40();
      }
    }
  }
  local_134 = (undefined1 *)0x1;
  FUN_004e2df0();
  ppppppuStack_2b4 = (undefined4 ******)0x4e275c;
  FUN_0040f7a0();
  local_134 = (undefined1 *)0x2;
  FUN_004e2df0();
  ppppppuStack_2b4 = (undefined4 ******)0x4e2783;
  FUN_0040f7a0();
  local_134 = (undefined1 *)0x3;
  FUN_004e2df0();
  ppppppuStack_2b4 = (undefined4 ******)0x4e27aa;
  FUN_0040f7a0();
  local_134 = (undefined1 *)0x4;
  FUN_004e2df0();
  ppppppuStack_2b4 = (undefined4 ******)0x4e27d1;
  FUN_0040f7a0();
  local_134 = (undefined1 *)0x5;
  FUN_004e2df0();
  ppppppuStack_2b4 = (undefined4 ******)0x4e27f8;
  FUN_0040f7a0();
  local_134 = (undefined1 *)0x6;
  FUN_004e2df0();
  ppppppuStack_2b4 = (undefined4 ******)0x4e281f;
  FUN_0040f7a0();
  local_134 = (undefined1 *)0x7;
  FUN_004e2df0();
  ppppppuStack_2b4 = (undefined4 ******)0x4e2846;
  FUN_0040f7a0();
  local_134 = (undefined1 *)0x8;
  FUN_004e2df0();
  ppppppuStack_2b4 = (undefined4 ******)0x4e286d;
  FUN_0040f7a0();
  local_134 = (undefined1 *)0x9;
  FUN_004e2df0();
  ppppppuStack_2b4 = (undefined4 ******)0x4e2894;
  FUN_0040f7a0();
  local_134 = (undefined1 *)0xa;
  FUN_004e2df0();
  ppppppuStack_2b4 = (undefined4 ******)0x4e28bb;
  FUN_0040f7a0();
  local_134 = (undefined1 *)0xb;
  FUN_004e2df0();
  ppppppuStack_2b4 = (undefined4 ******)0x4e28e2;
  FUN_0040f7a0();
  local_134 = (undefined1 *)0xc;
  FUN_004e2df0();
  ppppppuStack_2b4 = (undefined4 ******)0x4e2909;
  FUN_0040f7a0();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  if (local_17c != (void *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_17c);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_17c);
  }
  local_8._0_1_ = 10;
  cube::Database::Database(&local_194);
  local_8 = CONCAT31(local_8._1_3_,9);
  thunk_FUN_004d77d0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 004e3320  kind=lib  attributed-by=stl-ns  size=289 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          int param_1)

{
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *pbVar1;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *pbVar2;
  int iVar3;
  QuestText *pQVar4;
  QuestText local_54;
  undefined1 local_41;
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
  puStack_c = &LAB_006e9a20;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = this;
  pbVar1 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *
           )FUN_004e3790(param_1);
  if (pbVar1 != this->vbtablePtr) {
    pbVar2 = pbVar1 + 2;
    if (7 < (uint)pbVar1[4].basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) {
      pbVar2 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                *)pbVar2->
                  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_offset
      ;
    }
    iVar3 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),pbVar2,
                         pbVar1[4].
                         basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_offset
                        );
    if (-1 < iVar3) goto LAB_004e3423;
  }
  pQVar4 = cube::QuestText::QuestText(&local_54);
  local_8 = 0;
  FUN_0040eaf0(param_1);
                    /* inlined constructor or destructor (approx location) for cube::QuestText */
  local_24.vftablePtr = &cube::QuestText::vftable;
  local_24.QuestText_data.offset_0x0 = (pQVar4->QuestText_data).offset_0x0;
  local_8._0_1_ = 1;
  FUN_004e1830(&(pQVar4->QuestText_data).offset_0x4,&local_41);
  local_8._0_1_ = 2;
  iVar3 = cube::QuestText::~QuestText((QuestText *)local_40,(int)local_3c);
  FUN_004e0fe0(&local_40,pbVar1,iVar3 + 0x10,iVar3);
  local_8 = CONCAT31(local_8._1_3_,3);
  cube::QuestText::~QuestText(&local_24);
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c[0]);
  }
  local_28 = 7;
  local_2c = 0;
  local_3c[0] = (void *)((uint)local_3c[0] & 0xffff0000);
  local_8 = 0xffffffff;
  cube::QuestText::~QuestText(&local_54);
LAB_004e3423:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 004e4bd0  kind=lib  attributed-by=stl-ns  size=1711 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this_00;
  undefined4 uVar5;
  int iStack_27c;
  undefined1 local_278 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_268 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_260 [14];
  undefined4 local_228;
  undefined4 local_224;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_210 [6];
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined2 local_1b0;
  undefined1 local_1ae;
  undefined2 local_1ac;
  undefined1 local_1a8 [256];
  undefined4 local_a8;
  undefined1 local_a4 [24];
  undefined1 local_8c [24];
  undefined1 local_74 [24];
  void *local_5c [5];
  uint local_48;
  void *local_44 [2];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  uint local_30;
  void *local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9c3c;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c0 = 0;
  local_1c4 = param_4;
  local_1c8 = this;
  local_14 = uVar2;
  srand(param_3[2]);
  iVar3 = FUN_00487da0((int)(*param_3 + (*param_3 >> 0x1f & 7U)) >> 3,
                       (int)(param_3[1] + (param_3[1] >> 0x1f & 7U)) >> 3);
  if (param_2 == 4) {
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) {
      FUN_00465fd0();
      local_8 = 0;
      FUN_0040eb60(L"scenery");
      local_8._0_1_ = 1;
      FUN_005953a0(local_2c,iVar3,&local_3c);
      local_8._0_1_ = 0;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      FUN_0040eb60(L"explored");
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_004e4a20(local_2c,&local_3c,local_1c4);
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      FUN_00467af0();
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else if (param_2 == 3) {
    iVar3 = *(int *)(param_1 + 0x8c);
    iVar1 = *(int *)(param_1 + 0x88);
    uVar4 = rand();
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x88) + (uVar4 % (uint)(iVar3 - iVar1 >> 2)) * 4);
    local_3c = 0;
    local_38 = 0;
    local_3c = FUN_0046d520(uVar2);
    local_8 = 3;
    local_34 = (undefined4 *)0x0;
    local_30 = 0;
    local_34 = (undefined4 *)FUN_00630a10();
    local_8 = 4;
    FUN_0040eb60(L"creature");
    local_8._0_1_ = 5;
    FUN_00594c80(local_2c,uVar5,0,0,&local_3c);
    local_8._0_1_ = 4;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_1ac = 1;
    local_1b8 = 0;
    local_1b4 = 0;
    local_1b0 = 0;
    local_1ae = 0;
    local_a8 = 0;
    memset(local_1a8,0,0x100);
    local_1bc = CONCAT11((char)uVar5,0x14);
    FUN_0040eb60(L"food");
    local_8._0_1_ = 6;
    FUN_00595010(local_2c,&local_1bc,&local_3c);
    local_8._0_1_ = 4;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    FUN_0040eb60(L"petfood");
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_004e4a20(local_2c,&local_3c,local_1c4);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_8 = 0xffffffff;
    FUN_004777f0(&local_1c0,*local_34,local_34);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_34);
  }
  local_24 = 0;
  local_20 = 0;
  local_24 = FUN_0046d520(uVar2);
  local_8 = 8;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_1c = (undefined4 *)FUN_00630a10();
  local_8 = 9;
  iVar3 = rand();
  switch(iVar3 % 5) {
  case 0:
    FUN_0042f3e0();
    local_1bc = 0xc0b;
    FUN_0040eb60(L"itemvendoritem");
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_00595010(local_44,&local_1bc,&local_24);
    break;
  case 1:
    FUN_0042f3e0();
    local_1bc = CONCAT11(local_1bc._1_1_,0x18);
    local_1b0 = CONCAT11(1,(undefined1)local_1b0);
    FUN_0040eb60(L"itemvendoritem");
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_00595010(local_74,&local_1bc,&local_24);
    break;
  case 2:
    FUN_0042f3e0();
    local_1bc = 0x17;
    FUN_0040eb60(L"itemvendoritem");
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_00595010(local_a4,&local_1bc,&local_24);
    break;
  case 3:
    FUN_0042f3e0();
    local_1bc = 0x117;
    FUN_0040eb60(L"itemvendoritem");
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_00595010(local_8c,&local_1bc,&local_24);
    break;
  case 4:
    FUN_0042f3e0();
    local_1bc = 0x701;
    FUN_0040eb60(L"itemvendoritem");
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_00595010(local_5c,&local_1bc,&local_24);
    break;
  default:
    goto switchD_004e4f0a_default;
  }
  local_8 = CONCAT31(local_8._1_3_,9);
  FUN_00593e50();
switchD_004e4f0a_default:
  iVar3 = *(int *)(param_1 + 0x8c);
  iVar1 = *(int *)(param_1 + 0x88);
  uVar2 = rand();
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x88) + (uVar2 % (uint)(iVar3 - iVar1 >> 2)) * 4);
  FUN_0040eb60(&DAT_00703d6c);
  local_8._0_1_ = 0xf;
  FUN_00594c80(local_44,uVar5,0,0,&local_24);
  local_8._0_1_ = 9;
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  uVar5 = 0x6c;
  iVar3 = rand();
  switch(iVar3 % 0xb) {
  case 1:
    uVar5 = 0x6d;
    break;
  case 2:
    uVar5 = 0x72;
    break;
  case 3:
    uVar5 = 0x73;
    break;
  case 4:
    uVar5 = 0x77;
    break;
  case 5:
    uVar5 = 0x6f;
    break;
  case 6:
    uVar5 = 0x71;
    break;
  case 7:
    uVar5 = 0x70;
    break;
  case 8:
    uVar5 = 0x74;
    break;
  case 9:
    uVar5 = 0x6e;
    break;
  case 10:
    uVar5 = 0x75;
  }
  FUN_0040eb60(L"monster");
  local_8._0_1_ = 0x10;
  FUN_00594c80(local_44,uVar5,0,0,&local_24);
  local_8._0_1_ = 9;
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_278._0_4_ = &vbtable;
  local_268[0].vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_210);
  local_8 = CONCAT31(local_8._1_3_,0x11);
  local_1c0 = 1;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_278,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_260);
  local_8 = 0x12;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (local_278 + *(int *)(local_278._0_4_ + 4)) = &vftable;
  *(int *)((int)&iStack_27c + *(int *)(local_278._0_4_ + 4)) = *(int *)(local_278._0_4_ + 4) + -0x68
  ;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_260);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_260[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  local_228 = 0;
  local_224 = 0;
  local_8._0_1_ = 0x14;
  iVar3 = rand();
  iVar3 = iVar3 % 0x1e + 1;
  this_00 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e6f0(local_268,L"random:");
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(this_00,iVar3);
  uVar5 = FUN_00411bc0(local_5c);
  local_8 = CONCAT31(local_8._1_3_,0x15);
  FUN_004e4a20(uVar5,&local_24,local_1c4);
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             local_278);
  local_8 = 0xffffffff;
  FUN_004777f0(&local_1c0,*local_1c,local_1c);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_1c);
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 004e5740  kind=lib  attributed-by=stl-ns  size=708 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          undefined4 *param_1)

{
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *pbVar1;
  undefined4 **ppuVar2;
  int iVar3;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined8 *in_stack_0000001c;
  basic_iostream<wchar_t,std::char_traits<wchar_t>_> local_12c;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_114 [2];
  basic_iostream<wchar_t,std::char_traits<wchar_t>_> local_10c [3];
  code *local_c4 [18];
  undefined8 local_7c;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  undefined8 local_5c;
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined8 local_3c;
  undefined8 local_34;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9d6d;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_12c.vbtablePtr = (basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&vbtable;
  local_12c.basic_ostream<wchar_t,std::char_traits<wchar_t>_>.vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  local_c4[0] = _vftable__exref;
  local_8 = 1;
  local_5c = CONCAT44(1,(undefined4)local_5c);
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            (&local_12c,(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_114);
  local_8 = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   ((int)&local_12c.vbtablePtr +
   (local_12c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) = &vftable;
  *(int *)(&local_114[-7].field_0x0 +
          (local_12c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) =
       (local_12c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset + -0x68;
  local_7c = CONCAT44(local_114,(undefined4)local_7c);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_114);
  ppuVar2 = &param_1;
  if (7 < in_stack_00000018) {
    ppuVar2 = (undefined4 **)param_1;
  }
  local_8._0_1_ = 3;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_114[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  FUN_0040f3c0(ppuVar2,in_stack_00000014,0);
  local_8._0_1_ = 4;
  iVar3 = *(int *)(&local_12c.basic_iostream<wchar_t,std::char_traits<wchar_t>_>_data.field_0x8 +
                  (local_12c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  while( true ) {
    if (iVar3 != 0) {
      local_8._0_1_ = 4;
      *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
       ((int)&local_12c.vbtablePtr +
       (local_12c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) = &vftable;
      *(int *)(&local_114[-7].field_0x0 +
              (local_12c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) =
           (local_12c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset + -0x68;
      local_114[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                     &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                      vftable;
      FUN_0040b4e0();
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
      ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_114);
      std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
      ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>(local_10c);
      std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
      ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
                ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)local_c4);
      if (7 < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
        operator_delete(param_1);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    local_8._0_1_ = 5;
    FUN_00451210(&local_12c,local_2c);
    local_7c = *in_stack_0000001c;
    local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
    local_5c = in_stack_0000001c[1];
    local_60 = 7;
    local_64 = 0;
    FUN_0040f680(local_2c,0,0xffffffff);
    local_54[0] = (void *)((uint)local_54[0] & 0xffff0000);
    local_8._0_1_ = 6;
    local_40 = 7;
    local_44 = 0;
    FUN_0040f680(local_74,0,0xffffffff);
    local_3c = local_7c;
    local_34 = local_5c;
    if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_74[0]);
    }
    local_60 = 7;
    local_64 = 0;
    local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
    pbVar1 = this->vbtablePtr;
    local_8._0_1_ = 7;
    iVar3 = FUN_004e0300(pbVar1,pbVar1->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset,
                         local_54);
    if (*(int *)&this->field_0x4 == 0x5555554) break;
    *(int *)&this->field_0x4 = *(int *)&this->field_0x4 + 1;
    pbVar1->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    if (7 < local_40) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_54[0]);
    }
    local_8._0_1_ = 4;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    iVar3 = *(int *)(&local_12c.basic_iostream<wchar_t,std::char_traits<wchar_t>_>_data.field_0x8 +
                    (local_12c.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor @ 00598a50  kind=lib  attributed-by=stl-ns  size=5340 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          int **param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int **ppiVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 local_78c;
  int *piStack_788;
  undefined4 uStack_784;
  int **ppiStack_780;
  int iStack_764;
  undefined1 local_760 [24];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_748 [14];
  undefined4 local_710;
  undefined4 local_70c;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_6f8 [6];
  undefined4 local_6b0;
  int **local_6ac;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_6a8;
  char *local_6a4;
  int *local_6a0;
  char local_699;
  int *local_698;
  int *local_694;
  int local_690;
  void *local_68c;
  undefined4 local_688;
  char local_684 [8];
  undefined4 local_67c;
  int local_254 [90];
  void *local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  void *local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  void *local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  int *local_a4 [5];
  uint local_90;
  undefined4 local_8c;
  undefined4 local_7c;
  uint local_78;
  int *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [2];
  int local_54 [2];
  int *local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  int *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f203b;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_6b0 = 0;
  cVar1 = *param_2;
  local_6ac = param_1;
  local_6a4 = param_2;
  local_6a8 = this;
  if (cVar1 == '\x02') {
    FUN_0040ee70();
    local_684[0] = (char)local_67c;
    local_67c = 0;
    ppiStack_780 = (int **)0x598ae0;
    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
              (this,local_74,local_684);
    local_8 = 0;
    FUN_0040eb60();
    local_8 = CONCAT31(local_8._1_3_,1);
LAB_00598afa:
    ppiStack_780 = param_1;
    uStack_784 = 0x598b02;
    FUN_0058d730();
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_2c[0] = (int *)((uint)local_2c[0] & 0xffff0000);
LAB_00598b2a:
    local_18 = 7;
    local_1c = 0;
    local_a4[0] = local_74[0];
    local_90 = local_60;
joined_r0x00599fcb:
    if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_a4[0]);
    }
LAB_00599fdd:
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (cVar1 == '\x13') {
    ppiStack_780 = (int **)0x598b4e;
    FUN_0059aa60();
    local_8 = 2;
    FUN_0040eb60();
    local_8 = CONCAT31(local_8._1_3_,3);
    goto LAB_00598afa;
  }
  if (cVar1 == '\x15') {
    local_698 = &local_78c;
    FUN_0040eb60(L"singular");
    local_8 = 4;
    uVar4 = FUN_0059fbf0(local_74,*param_2,param_2[1]);
    local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
    local_8._0_1_ = 6;
    uVar4 = FUN_00480e00(local_5c,uVar4);
    ppiStack_780 = (int **)&local_8c;
    local_8._0_1_ = 7;
    uStack_784 = 0x598bd5;
    FUN_005a0ed0();
    ppiStack_780 = local_2c;
    local_8._0_1_ = 8;
    uStack_784 = 0x598be8;
    piStack_788 = (int *)FUN_00451800();
    local_78c = param_1;
    local_8 = CONCAT31(local_8._1_3_,9);
    uStack_784 = uVar4;
    FUN_0058d730();
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (int *)((uint)local_2c[0] & 0xffff0000);
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c);
    }
    local_78 = 7;
    local_7c = 0;
    local_8c = (void *)((uint)local_8c & 0xffff0000);
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = (int *)0x0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    goto LAB_00598b2a;
  }
  if (((cVar1 == '\x01') || (cVar1 == '\x12')) || (cVar1 == '\x0e')) {
    local_698 = &local_78c;
    FUN_0040eb60(L"singular");
    local_8 = 10;
    uVar4 = FUN_0059fbf0(local_a4,*param_2,param_2[1]);
    local_8 = CONCAT31((int3)((uint)local_8 >> 8),0xc);
    FUN_00480e00(param_1,uVar4);
    goto joined_r0x00599fcb;
  }
  iVar9 = *(int *)(param_2 + 0x114);
  local_54[0] = 0;
  local_54[1] = 0;
  local_4c = (int *)0x0;
  local_48 = 0;
  if (0 < iVar9) {
    pbVar8 = (byte *)(param_2 + 0x17);
    do {
      if (0x7f < *pbVar8) {
        local_254[*pbVar8] = local_254[*pbVar8] + 1;
      }
      pbVar8 = pbVar8 + 8;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  local_760._0_4_ = &vbtable;
  local_760._16_4_ = &DAT_006fcd08;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_6f8);
  local_8 = 0xd;
  local_6b0 = 2;
  ppiStack_780 = (int **)0x598d0e;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_760,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_748);
  local_8 = 0xe;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (local_760 + *(int *)(local_760._0_4_ + 4)) = &vftable;
  *(int *)((int)&iStack_764 + *(int *)(local_760._0_4_ + 4)) = *(int *)(local_760._0_4_ + 4) + -0x68
  ;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_748);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_748[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  local_710 = 0;
  local_70c = 0;
  local_698 = &local_78c;
  local_8 = 0x10;
  local_78c = (int **)((uint)local_78c._2_2_ << 0x10);
  FUN_0040f7a0(L"item",4);
  local_8._0_1_ = 0x11;
  uVar4 = FUN_0059ff60(local_ec,param_2[0xd]);
  local_8._0_1_ = 0x13;
  FUN_00480e00(local_44,uVar4);
  local_8._0_1_ = 0x15;
  if (7 < local_d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_ec[0]);
  }
  local_ec[0] = (void *)((uint)local_ec[0] & 0xffff0000);
  ppiStack_780 = &local_6a0;
  local_d8 = 7;
  local_dc = 0;
  local_6a0 = (int *)0x40;
  uStack_784 = 0x598e19;
  local_6a0 = (int *)FUN_004d9950();
  if (local_6a0 == (int *)0xffffffff) {
    local_698 = &local_78c;
    FUN_0040eb60(L"singular");
    local_8._0_1_ = 0x16;
    uVar4 = FUN_0059fbf0(local_2c,*param_2,param_2[1]);
    local_8 = CONCAT31(local_8._1_3_,0x18);
    FUN_00480e00(local_6ac,uVar4);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (int *)((uint)local_2c[0] & 0xffff0000);
    if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    local_30 = 7;
    local_34 = 0;
    local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
              ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               local_760);
    goto LAB_00599fdd;
  }
  ppiStack_780 = local_74;
  uStack_784 = 0x598edc;
  FUN_0059fbf0();
  local_8._0_1_ = 0x19;
  FUN_005a02d0();
  ppiStack_780 = (int **)0x598efa;
  FUN_004e1790();
  local_8._0_1_ = 0x1a;
  FUN_004e18d0();
  local_8._0_1_ = 0x1c;
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74[0]);
  }
  local_60 = 7;
  local_64 = 0;
  local_74[0] = (int *)((uint)local_74[0] & 0xffff0000);
  FUN_0040eb60();
  local_8._0_1_ = 0x1d;
  ppiStack_780 = (int **)FUN_004689a0();
  local_8c = (void *)((uint)local_8c._2_2_ << 0x10);
  local_78 = 7;
  local_7c = 0;
  uStack_784 = 0x598f76;
  FUN_0040f680();
  local_8._0_1_ = 0x1f;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (int *)((uint)local_2c[0] & 0xffff0000);
  local_694 = (int *)0x0;
  local_690 = 0;
  local_694 = (int *)FUN_00630a10();
  local_8._0_1_ = 0x20;
  local_68c = (void *)0x0;
  local_688 = 0;
  ppiStack_780 = (int **)0x598fe3;
  local_68c = (void *)FUN_00439600();
  ppiStack_780 = (int **)&local_8c;
  uStack_784 = 1;
  piStack_788 = local_6a0;
  local_8._0_1_ = 0x21;
  local_78c = (int **)0x599008;
  FUN_00486d00();
  uVar2 = *(uint *)(param_2 + 4);
  if (uVar2 == 0) goto LAB_00599ead;
  switch(param_2[0xc]) {
  case '\0':
    switch(uVar2 % 10) {
    case 0:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x22);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 1:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x23);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 2:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x24);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 3:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x25);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 4:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x26);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 5:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x27);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 6:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x28);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 7:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x29);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 8:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x2a);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 9:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x2b);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    default:
      goto switchD_00599020_default;
    }
    break;
  case '\x01':
    switch(uVar2 % 10) {
    case 0:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x2c);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 1:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x2d);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 2:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x2e);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 3:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x2f);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 4:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x30);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 5:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x31);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 6:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x32);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 7:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x33);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 8:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x34);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 9:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x35);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    default:
      goto switchD_00599020_default;
    }
    break;
  case '\x02':
    switch(uVar2 % 10) {
    case 0:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x36);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 1:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x37);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 2:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x38);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 3:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x39);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 4:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x3a);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 5:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x3b);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 6:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x3c);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 7:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x3d);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 8:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x3e);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 9:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x3f);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    default:
      goto switchD_00599020_default;
    }
    break;
  case '\x03':
    switch(uVar2 % 10) {
    case 0:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x40);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 1:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x41);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 2:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x42);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 3:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x43);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 4:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x44);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 5:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x45);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 6:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x46);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 7:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x47);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 8:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x48);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 9:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x49);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    default:
      goto switchD_00599020_default;
    }
    break;
  case '\x04':
    switch(uVar2 % 10) {
    case 0:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x4a);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 1:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x4b);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 2:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x4c);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 3:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x4d);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 4:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x4e);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 5:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x4f);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 6:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x50);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 7:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x51);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 8:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x52);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    case 9:
      FUN_0040eb60();
      local_8 = CONCAT31(local_8._1_3_,0x53);
      FUN_005a02d0();
      FUN_004e2d90();
      break;
    default:
      goto switchD_00599020_default;
    }
    break;
  default:
    goto switchD_00599020_default;
  }
  local_8._0_1_ = 0x21;
  FUN_00593e50();
switchD_00599020_default:
  local_699 = '\0';
  piVar7 = (int *)*local_4c;
  if (piVar7 != local_4c) {
    do {
      piVar3 = local_694;
      piVar5 = (int *)FUN_004e3790();
      if (piVar5 == local_694) {
LAB_00599c22:
        local_698 = local_694;
        ppiVar6 = &local_698;
      }
      else {
        ppiStack_780 = (int **)piVar7[6];
        uStack_784 = 0;
        piStack_788 = (int *)0x599c10;
        iVar9 = FUN_00428db0();
        if (iVar9 < 0) goto LAB_00599c22;
        local_6a0 = piVar5;
        ppiVar6 = &local_6a0;
      }
      if (*ppiVar6 != piVar3) {
        ppiStack_780 = (int **)FUN_004e31e0();
        local_bc[0] = (void *)((uint)local_bc[0] & 0xffff0000);
        local_a8 = 7;
        local_ac = 0;
        uStack_784 = 0x599c8a;
        FUN_0040f680();
        ppiStack_780 = &local_698;
        local_8 = CONCAT31(local_8._1_3_,0x54);
        local_698 = (int *)0x40;
        uStack_784 = 0x599cae;
        piVar7 = (int *)FUN_004d9950();
        if (piVar7 != (int *)0xffffffff) {
          ppiStack_780 = local_44;
          uStack_784 = 1;
          local_78c = (int **)0x599cc9;
          piStack_788 = piVar7;
          FUN_00486d00();
          ppiStack_780 = local_bc;
          uStack_784 = 0x599cdc;
          FUN_0040f680();
          local_699 = '\x01';
        }
        ppiStack_780 = &local_698;
        local_698 = (int *)&DAT_00000023;
        uStack_784 = 0x599d00;
        piVar7 = (int *)FUN_004d9950();
        if (piVar7 != (int *)0xffffffff) {
          ppiStack_780 = local_a4;
          uStack_784 = 0x599d36;
          ppiStack_780 = (int **)FUN_005a0ed0();
          uStack_784 = 1;
          local_8 = CONCAT31(local_8._1_3_,0x55);
          local_78c = (int **)0x599d4a;
          piStack_788 = piVar7;
          FUN_00486d00();
          if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_a4[0]);
          }
        }
        local_8._0_1_ = 0x21;
        if (7 < local_a8) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_bc[0]);
        }
        if (local_699 != '\0') goto LAB_00599ead;
        break;
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != local_4c);
  }
  if (local_690 != 0) {
    ppiStack_780 = (int **)(*local_694 + 0x28);
    local_d4[0] = (void *)((uint)local_d4[0] & 0xffff0000);
    local_c0 = 7;
    local_c4 = 0;
    uStack_784 = 0x599dcd;
    FUN_0040f680();
    ppiStack_780 = &local_698;
    local_8 = CONCAT31(local_8._1_3_,0x56);
    local_698 = (int *)0x40;
    uStack_784 = 0x599df1;
    piVar7 = (int *)FUN_004d9950();
    if (piVar7 != (int *)0xffffffff) {
      ppiStack_780 = local_44;
      uStack_784 = 1;
      local_78c = (int **)0x599e0c;
      piStack_788 = piVar7;
      FUN_00486d00();
      ppiStack_780 = local_d4;
      uStack_784 = 0x599e1f;
      FUN_0040f680();
    }
    ppiStack_780 = &local_698;
    local_698 = (int *)&DAT_00000023;
    uStack_784 = 0x599e3c;
    piVar7 = (int *)FUN_004d9950();
    if (piVar7 != (int *)0xffffffff) {
      ppiStack_780 = local_a4;
      uStack_784 = 0x599e67;
      ppiStack_780 = (int **)FUN_005a0ed0();
      uStack_784 = 1;
      local_8 = CONCAT31(local_8._1_3_,0x57);
      local_78c = (int **)0x599e7b;
      piStack_788 = piVar7;
      FUN_00486d00();
      if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_a4[0]);
      }
    }
    local_8._0_1_ = 0x21;
    if (7 < local_c0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_d4[0]);
    }
  }
LAB_00599ead:
  ppiStack_780 = (int **)0x599ebd;
  FUN_00424ba0();
  local_8 = CONCAT31(local_8._1_3_,0x1f);
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete(local_68c);
}


/* std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_> @ 0064cfe0  kind=lib  attributed-by=stl-ns  size=220 */

basic_ifstream<char,std::char_traits<char>_> * __thiscall
std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
          (basic_ifstream<char,std::char_traits<char>_> *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6152;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    this->vbtablePtr = &vbtable;
    this->vftablePtr = (basic_ifstream<char,std::char_traits<char>_>_vftable *)_vftable__exref;
    this->vftablePtr = (basic_ifstream<char,std::char_traits<char>_>_vftable *)_vftable__exref;
    local_8 = 0;
  }
  this_00 = &(this->basic_ifstream<char,std::char_traits<char>_>_data).field_0xc;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)this,
             (basic_streambuf<char,std::char_traits<char>_> *)this_00,false);
  local_8 = 1;
                    /* inlined constructor:
                       std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
                        */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)
   ((int)&this->vbtablePtr + this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) =
       &vftable;
  iVar1 = this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -0x70;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this_00);
  local_8 = CONCAT31(local_8._1_3_,2);
                    /* inlined constructor:
                       std::basic_filebuf<char,std::char_traits<char>_>::basic_filebuf<char,std::char_traits<char>_>
                        */
  *(basic_filebuf<char,std::char_traits<char>_>_vftable **)this_00 =
       &basic_filebuf<char,std::char_traits<char>_>::vftable;
  (this->basic_ifstream<char,std::char_traits<char>_>_data).field_0x58 = 0;
  (this->basic_ifstream<char,std::char_traits<char>_>_data).field_0x51 = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init
            ((basic_streambuf<char,std::char_traits<char>_> *)this_00);
  *(undefined4 *)&(this->basic_ifstream<char,std::char_traits<char>_>_data).field_0x5c = 0;
  *(undefined4 *)&(this->basic_ifstream<char,std::char_traits<char>_>_data).field_0x54 =
       DAT_0076af5c;
  *(undefined4 *)&(this->basic_ifstream<char,std::char_traits<char>_>_data).field_0x4c = 0;
  ExceptionList = local_10;
  return this;
}


/* std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 0064f650  kind=lib  attributed-by=stl-ns  size=1739 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          int param_1,int param_2,int param_3,undefined4 param_4)

{
  PixelFont *pPVar1;
  undefined4 *****pppppuVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  int iStack_1a8;
  basic_iostream<wchar_t,std::char_traits<wchar_t>_> local_1a4;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_18c [2];
  undefined1 local_184 [48];
  undefined4 local_154;
  uint local_150;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_13c [6];
  int local_f4;
  PixelFont *local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  PixelFont *local_dc;
  int local_d8;
  int local_d4;
  undefined4 ***local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  void *local_bc [5];
  uint local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float fStack_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 uStack_78;
  int local_74;
  int iStack_70;
  float local_6c;
  float fStack_68;
  int local_64;
  int iStack_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  int local_4c;
  int iStack_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 ****local_34 [4];
  undefined4 ***local_24;
  undefined4 ***local_20;
  int local_1c;
  int iStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f659c;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_d0 = (undefined4 ***)0x0;
  local_34[0] = (undefined4 ****)((uint)local_34[0] & 0xffff0000);
  local_c0 = param_1;
  local_c4 = param_2;
  local_20 = (undefined4 ****)0x7;
  local_24 = (undefined4 ****)0x0;
  FUN_0040f680(param_4,0,0xffffffff);
  local_8 = 0;
  if (param_2 < 1) {
    local_c4 = 0x10;
    local_d8 = 0x10;
    local_1a4.vbtablePtr = (basic_iostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&vbtable;
    local_1a4.basic_ostream<wchar_t,std::char_traits<wchar_t>_>.vbtablePtr =
         (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_13c);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_d0 = (undefined4 ***)0x1;
    std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
    basic_iostream<wchar_t,std::char_traits<wchar_t>_>
              (&local_1a4,(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_18c);
    local_8 = 2;
                    /* inlined constructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
    *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
     ((int)&local_1a4.vbtablePtr +
     (local_1a4.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) = &vftable;
    *(int *)((int)&iStack_1a8 +
            (local_1a4.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) =
         (local_1a4.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset + -0x68;
    std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
    basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_18c);
                    /* inlined constructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
    local_18c[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                   &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                    vftable;
    local_154 = 0;
    local_150 = 0;
    local_8 = CONCAT31(local_8._1_3_,4);
    iVar4 = 0;
    do {
      FUN_0064b0d0(&local_1a4.basic_ostream<wchar_t,std::char_traits<wchar_t>_>,iVar4);
      iVar4 = iVar4 + 1;
    } while ((ushort)iVar4 < 0x100);
    pppppuVar2 = (undefined4 *****)FUN_00411bc0(local_bc);
    param_1 = local_c0;
    if (local_34 != pppppuVar2) {
      if ((undefined4 ****)0x7 < local_20) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_34[0]);
      }
      local_20 = (undefined4 ***)0x7;
      local_24 = (undefined4 ***)0x0;
      local_34[0] = (undefined4 ****)((uint)local_34[0] & 0xffff0000);
      if (pppppuVar2[5] < (undefined4 ****)0x8) {
        if ((int)pppppuVar2[4] + 1 != 0) {
          memmove(local_34,pppppuVar2,((int)pppppuVar2[4] + 1) * 2);
        }
      }
      else {
        local_34[0] = *pppppuVar2;
        *pppppuVar2 = (undefined4 ****)0x0;
      }
      local_24 = pppppuVar2[4];
      local_20 = pppppuVar2[5];
      pppppuVar2[5] = (undefined4 ****)0x7;
      pppppuVar2[4] = (undefined4 ****)0x0;
      *(undefined2 *)pppppuVar2 = 0;
    }
    if (7 < local_a8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_bc[0]);
    }
    local_8 = local_8 & 0xffffff00;
    *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
     ((int)&local_1a4.vbtablePtr +
     (local_1a4.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) = &vftable;
    *(int *)((int)&iStack_1a8 +
            (local_1a4.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset) =
         (local_1a4.vbtablePtr)->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset + -0x68;
    local_18c[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                   &basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                    vftable;
    if ((local_150 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)local_184._4_4_);
    }
    std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
              (local_18c,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
    std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
              (local_18c,(wchar_t *)0x0,(wchar_t *)0x0);
    local_150 = local_150 & 0xfffffffe;
    local_154 = 0;
    std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_18c);
    std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
              ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_184);
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_13c);
  }
  else {
    local_d8 = param_3;
  }
  local_d0 = local_24;
  local_f0 = operator_new(0x74);
  local_8._0_1_ = 5;
  if (local_f0 == (PixelFont *)0x0) {
    local_dc = (PixelFont *)0x0;
  }
  else {
    local_dc = plasma::PixelFont::PixelFont(local_f0,(Font *)this,param_1 + 0xc);
  }
  pPVar1 = local_dc;
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0067fa50(param_1);
  (pPVar1->NamedObject_data).offset_0x40 =
       (int)(float)(((*(int *)(param_1 + 0x44) / local_c4) * 2) / 3);
  local_1c = *(int *)(param_1 + 0x44) / local_c4;
  local_f0 = (PixelFont *)(((int)(local_1c + (local_1c >> 0x1f & 0xfU)) >> 4) + -1);
  iStack_18 = *(int *)(param_1 + 0x48) / local_d8;
  local_d4 = 0;
  if (0 < (int)local_d0) {
    do {
      local_3c = CONCAT44(iStack_18,local_1c);
      iVar4 = local_1c + -1;
      iVar6 = iStack_18 + -1;
      local_e8 = 0;
      local_e0 = 0;
      local_f4 = local_1c * (local_d4 % local_c4);
      local_e4 = iStack_18 * (local_d4 / local_c4);
      iVar5 = 0;
      if (0 < local_1c) {
        do {
          iVar3 = 0;
          if (0 < iStack_18) {
            local_ec = local_f4 + iVar5;
            local_c8 = *(int *)(local_c0 + 0x44);
            local_cc = local_c8 * local_e4;
            do {
              if (((local_ec < local_c8) && (local_e4 + iVar3 < *(int *)(local_c0 + 0x48))) &&
                 (*(char *)(*(int *)(local_c0 + 0x24) + 3 + (local_cc + local_ec) * 4) != '\0')) {
                if (local_e8 < iVar5) {
                  local_e8 = iVar5;
                }
                if (local_e0 < iVar3) {
                  local_e0 = iVar3;
                }
                if (iVar5 < iVar4) {
                  iVar4 = iVar5;
                }
                if (iVar3 < iVar6) {
                  iVar6 = iVar3;
                }
              }
              iVar3 = iVar3 + 1;
              local_cc = local_cc + local_c8;
            } while (iVar3 < iStack_18);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_1c);
      }
      if ((local_e8 < iVar4) || (iVar5 = local_e0, iVar3 = local_e8, local_e0 < iVar6)) {
        local_7c = 0;
        uStack_78 = 0;
        local_3c = 0;
        local_3c._4_4_ = 0;
        local_3c._0_4_ = 0;
        local_64 = (*(int *)(local_c0 + 0x44) / local_c4) / 3;
        iStack_60 = (*(int *)(local_c0 + 0x48) / local_d8) / 3;
        iVar5 = iStack_60;
        iVar3 = local_64;
        iVar4 = (int)local_3c;
        iVar6 = local_3c._4_4_;
      }
      _local_4c = CONCAT44(iVar5 + 1,iVar3 + 1);
      iVar6 = iVar6 + -1;
      iVar5 = (iVar5 + 1) - iVar6;
      iVar3 = (iVar3 + 1) - (iVar4 + -1);
      local_44 = CONCAT44(iVar5,iVar3);
      local_8c = local_44;
      fVar8 = 1.0 / (float)*(int *)(local_c0 + 0x44);
      fVar7 = 1.0 / (float)*(int *)(local_c0 + 0x48);
      iVar3 = iVar3 + 1;
      local_98 = (float)iVar6;
      local_a4 = (float)iVar3;
      local_a0 = (float)(iVar5 + 1);
      _local_5c = CONCAT44(fVar7 * local_a0,fVar8 * local_a4);
      local_84 = CONCAT44(local_e4,local_f4);
      local_94 = (float)(local_f4 + iVar4 + -1);
      fStack_90 = (float)(local_e4 + iVar6);
      pppppuVar2 = local_34;
      if ((undefined4 ****)0x7 < local_20) {
        pppppuVar2 = (undefined4 *****)local_34[0];
      }
      local_9c = 0;
      _local_54 = CONCAT44(fVar7 * fStack_90,fVar8 * local_94);
      local_74 = local_f4;
      iStack_70 = local_e4;
      local_6c = local_a4;
      fStack_68 = local_a0;
      FUN_0067f980(*(undefined2 *)((int)pppppuVar2 + local_d4 * 2),&local_9c,&local_a4,&local_54,
                   &local_5c,(float)((int)local_f0 + iVar3));
      local_d4 = local_d4 + 1;
    } while (local_d4 < (int)local_d0);
  }
  if (local_20 < (undefined4 ****)0x8) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_34[0]);
}


/* std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_> @ 00650e80  kind=lib  attributed-by=stl-ns  size=5968 */

/* WARNING: Type propagation algorithm not settling */

void std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
               (undefined4 *param_1,int param_2,float param_3)

{
  short sVar1;
  char *pcVar2;
  undefined8 *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  PlasmaFont *pPVar10;
  SmoothMeshShape *pSVar11;
  basic_ostream<char,std::char_traits<char>_> *this;
  undefined4 *******pppppppuVar12;
  char *pcVar13;
  short *psVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  SmoothMeshShape *pSVar18;
  basic_streambuf<char,std::char_traits<char>_> *pbVar19;
  _Container_base0 *p_Var20;
  Font *pFVar21;
  int *piVar22;
  basic_ifstream<char,std::char_traits<char>_>_vftable *pbVar23;
  float fVar24;
  float fVar25;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var26;
  basic_ios<char,std::char_traits<char>_> local_2d8;
  basic_streambuf<char,std::char_traits<char>_> local_2c8 [16];
  undefined4 local_288;
  undefined1 local_283;
  undefined4 local_280;
  undefined1 local_27c;
  FILE *local_278;
  undefined1 local_268 [76];
  float local_21c;
  undefined4 local_218;
  float local_214;
  int local_210;
  int local_20c;
  float local_208;
  _Container_base0 *local_204;
  _Container_base0 *local_200;
  undefined4 local_1fc;
  basic_ifstream<char,std::char_traits<char>_>_vftable *local_1f8;
  int local_1f4;
  _Iosb<int> local_1f0;
  undefined4 *local_1ec;
  _Container_base0 *local_1e8;
  _Container_base0 *local_1e4;
  undefined4 local_1e0;
  SmoothMeshShape *local_1dc;
  int local_1d8;
  int *local_1d4;
  int *local_1d0;
  int *local_1cc;
  int local_1c8;
  Font *local_1c4;
  byte local_1bd;
  short local_1bc [2];
  int *local_1b8;
  SmoothMeshShape *local_1b4;
  int local_1b0;
  undefined1 local_1ac [8];
  void *local_1a4 [4];
  undefined4 local_194;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  int local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  float local_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  float local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  float local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  float local_f4;
  float fStack_f0;
  float local_ec;
  basic_ifstream<char,std::char_traits<char>_>_vftable *pbStack_e8;
  float local_e4;
  undefined4 uStack_e0;
  void *local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  undefined4 local_c4;
  int local_b4;
  uint local_b0;
  void *local_ac [2];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  int local_84;
  uint local_80;
  undefined4 *******local_7c [5];
  uint local_68;
  float local_64;
  basic_ifstream<char,std::char_traits<char>_>_vftable *pbStack_60;
  SmoothMeshShape *local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float local_4c;
  float fStack_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f67a3;
  local_10 = ExceptionList;
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1f8 = (basic_ifstream<char,std::char_traits<char>_>_vftable *)param_3;
  local_1ec = param_1;
  local_1c8 = 0x2f;
  local_14 = uVar6;
  iVar7 = FUN_00639a70(&local_1c8,0xffffffff,1);
  local_1c8 = 0x5c;
  local_1f4 = iVar7;
  local_1c8 = FUN_00639a70(&local_1c8,0xffffffff,1);
  piVar16 = &local_1c8;
  if (local_1c8 <= iVar7) {
    piVar16 = &local_1f4;
  }
  FUN_0043a450(local_7c,*piVar16 + 1,(param_1[4] - *piVar16) + -1);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  piVar16 = *(int **)&(local_1c4->NamedObject_data).field_0x98;
  piVar17 = (int *)*piVar16;
  if (piVar17 != piVar16) {
    do {
      iVar7 = __RTDynamicCast(piVar17[2],0,&plasma::Font::RTTI_Type_Descriptor,
                              &plasma::PlasmaFont::RTTI_Type_Descriptor,0,uVar6);
      if (iVar7 != 0) {
        pppppppuVar12 = local_7c;
        if (7 < local_68) {
          pppppppuVar12 = local_7c[0];
        }
        iVar7 = FUN_00428db0(0,*(undefined4 *)(iVar7 + 0x44),pppppppuVar12,local_7c[4]);
        if (iVar7 == 0) {
          iVar7 = FUN_0067e4d0();
          if ((undefined4 ********)(iVar7 + 0x34) != local_7c) {
            FUN_0040f680(local_7c,0,0xffffffff);
          }
          *(int *)(iVar7 + 0x4c) = param_2;
          *(undefined4 *)(iVar7 + 0x50) = 0;
          goto LAB_00652666;
        }
      }
      piVar17 = (int *)*piVar17;
      param_1 = local_1ec;
    } while (piVar17 != (int *)*(int *)&(local_1c4->NamedObject_data).field_0x98);
  }
  local_2d8.ios_base._0_4_ = &vbtable;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)local_268);
  local_8._0_1_ = 1;
  local_1c8 = 1;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)&local_2d8,
             (basic_streambuf<char,std::char_traits<char>_> *)local_2c8,false);
  local_8 = 2;
                    /* inlined constructor:
                       std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
                        */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)
   (&local_2d8.ios_base.field_0x0 + *(int *)(local_2d8.ios_base._0_4_ + 4)) = &vftable;
  *(int *)(&local_2c8[-5].field_0x0 + *(int *)(local_2d8.ios_base._0_4_ + 4)) =
       *(int *)(local_2d8.ios_base._0_4_ + 4) + -0x70;
  local_1b4 = (SmoothMeshShape *)local_2c8;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_1b4);
  local_8._0_1_ = 3;
                    /* inlined constructor:
                       std::basic_filebuf<char,std::char_traits<char>_>::basic_filebuf<char,std::char_traits<char>_>
                        */
  local_2c8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &basic_filebuf<char,std::char_traits<char>_>::vftable;
  local_27c = 0;
  local_283 = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(local_2c8);
  local_278 = (FILE *)0x0;
  local_280 = DAT_0076af5c;
  local_288 = 0;
  local_8._0_1_ = 4;
  puVar9 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar9 = (undefined4 *)*param_1;
  }
  iVar7 = FUN_00653210(puVar9,0x21,0x40);
  if (iVar7 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (&local_2d8.ios_base.field_0x0 + *(int *)(local_2d8.ios_base._0_4_ + 4)),2,false);
  }
  else {
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)
               (&local_2d8.ios_base.field_0x0 + *(int *)(local_2d8.ios_base._0_4_ + 4)),0,false);
  }
  local_b0 = 7;
  local_b4 = 0;
  local_c4 = (void *)((uint)local_c4._2_2_ << 0x10);
  local_8._0_1_ = 5;
  if (local_278 == (FILE *)0x0) {
    piVar16 = (int *)(local_1c4->NamedObject_data).offset_0x130;
    piVar17 = (int *)*piVar16;
    if (piVar17 != piVar16) {
      do {
        local_8._0_1_ = 5;
        uVar8 = FUN_00451850(local_dc,piVar17 + 2,&DAT_006fd42c);
        local_8._0_1_ = 6;
        puVar9 = (undefined4 *)FUN_004517d0(local_2c,uVar8,local_7c);
        local_8._0_1_ = 7;
        if (7 < (uint)puVar9[5]) {
          puVar9 = (undefined4 *)*puVar9;
        }
        iVar7 = FUN_00653210(puVar9,0x21,0x40);
        if (iVar7 == 0) {
          std::basic_ios<char,std::char_traits<char>_>::setstate
                    ((basic_ios<char,std::char_traits<char>_> *)
                     (&local_2d8.ios_base.field_0x0 + *(int *)(local_2d8.ios_base._0_4_ + 4)),2,
                     false);
        }
        else {
          std::basic_ios<char,std::char_traits<char>_>::clear
                    ((basic_ios<char,std::char_traits<char>_> *)
                     (&local_2d8.ios_base.field_0x0 + *(int *)(local_2d8.ios_base._0_4_ + 4)),0,
                     false);
        }
        if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        local_8._0_1_ = 5;
        if (7 < local_c8) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_dc[0]);
        }
        if (local_278 != (FILE *)0x0) {
          if (&local_c4 != piVar17 + 2) {
            FUN_0040f680(piVar17 + 2,0,0xffffffff);
          }
          if (local_278 != (FILE *)0x0) goto LAB_00651289;
          break;
        }
        piVar17 = (int *)*piVar17;
      } while (piVar17 != (int *)(local_1c4->NamedObject_data).offset_0x130);
    }
    local_1b4 = operator_new(0x70);
    local_8._0_1_ = 8;
    if (local_1b4 == (SmoothMeshShape *)0x0) {
      pPVar10 = (PlasmaFont *)0x0;
    }
    else {
      pPVar10 = plasma::PlasmaFont::PlasmaFont((PlasmaFont *)local_1b4,local_1c4,(int)local_7c);
    }
    local_8._0_1_ = 5;
    if (&(pPVar10->NamedObject_data).offset_0x28 != local_7c) {
      FUN_0040f680(local_7c,0,0xffffffff);
    }
    (pPVar10->NamedObject_data).offset_0x40 = param_2;
  }
  else {
LAB_00651289:
    pbVar19 = local_2c8;
    if (local_278 == (FILE *)0x0) {
      pbVar19 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
    else {
      cVar5 = FUN_00405cc0();
      if (cVar5 == '\0') {
        pbVar19 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
      }
      iVar7 = fclose(local_278);
      if (iVar7 != 0) {
        pbVar19 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
      }
    }
    local_27c = 0;
    local_283 = 0;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init(local_2c8);
    local_278 = (FILE *)0x0;
    local_280 = DAT_0076af5c;
    local_288 = 0;
    if (pbVar19 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 (&local_2d8.ios_base.field_0x0 + *(int *)(local_2d8.ios_base._0_4_ + 4)),2,false);
    }
    if (local_b4 == 0) {
      if (&local_c4 != param_1) {
        FUN_0040f680(param_1,0,0xffffffff);
      }
    }
    else {
      uVar8 = FUN_0064b2e0(local_2c,&DAT_006fd42c,local_7c);
      local_8._0_1_ = 9;
      FUN_0046f170(uVar8,0,0xffffffff);
      local_8._0_1_ = 5;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
    }
    puVar9 = (undefined4 *)FUN_00659f50(local_2c,&local_c4);
    pFVar21 = local_1c4;
    if (0xf < (uint)puVar9[5]) {
      puVar9 = (undefined4 *)*puVar9;
    }
    iVar7 = FUN_00694f00((local_1c4->NamedObject_data).offset_0x64,puVar9,0,&local_1b0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    if (iVar7 == 0) {
      pcVar2 = *(char **)(local_1b0 + 0x14);
      local_98 = 0xf;
      local_9c = 0;
      local_ac[0] = (void *)((uint)local_ac[0] & 0xffffff00);
      if (*pcVar2 == '\0') {
        iVar7 = 0;
      }
      else {
        pcVar13 = pcVar2;
        do {
          cVar5 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar5 != '\0');
        iVar7 = (int)pcVar13 - (int)(pcVar2 + 1);
      }
      FUN_0040c280(pcVar2,iVar7);
      local_8._0_1_ = 10;
      uVar8 = FUN_00451550(local_2c,local_ac,&DAT_006fcfbc);
      local_8._0_1_ = 0xb;
      FUN_00451550(local_1a4,uVar8,*(undefined4 *)(local_1b0 + 0x18));
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_8._0_1_ = 0xe;
      if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_ac[0]);
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac[0] = (void *)((uint)local_ac[0] & 0xffffff00);
      FUN_0068f990(local_1b0,100,100);
      local_80 = 7;
      local_84 = 0;
      local_94 = (undefined4 *)((uint)local_94._2_2_ << 0x10);
      FUN_0040f680(local_1f8,0,0xffffffff);
      local_8._0_1_ = 0xf;
      local_210 = local_84;
      if (local_84 == 0) {
        FUN_0040f7a0(&DAT_0071ea70,0x60);
      }
      local_210 = local_84;
      local_1c8 = FUN_0064f4e0(0,0,0,*(undefined4 *)&(pFVar21->NamedObject_data).field_0xb0,local_7c
                              );
      *(uint *)(local_1c8 + 200) = *(uint *)(local_1c8 + 200) | 8;
      local_1f4 = 0;
      if (0 < local_210) {
        uStack_108 = 0xc2c80000;
        uStack_e0 = 0xc2c80000;
        uStack_150 = 0;
        uStack_120 = 0;
        local_104 = 0x3f19999a;
        uStack_100 = 0x3f19999a;
        local_fc = 0x3f19999a;
        uStack_f8 = 0x3f000000;
        local_11c = 0x3f4ccccd;
        uStack_118 = 0x3f4ccccd;
        local_114 = 0x3f4ccccd;
        uStack_110 = 0x3f000000;
        local_134 = 0x3f333333;
        uStack_130 = 0x3f333333;
        local_12c = 0x3f333333;
        uStack_128 = 0x3f000000;
        local_14c = 0x3f000000;
        uStack_148 = 0x3f000000;
        local_144 = 0x3f000000;
        uStack_140 = 0x3f000000;
        do {
          puVar9 = &local_94;
          if (7 < local_80) {
            puVar9 = local_94;
          }
          local_1bc[0] = *(short *)((int)puVar9 + local_1f4 * 2);
          local_1bc[1] = 0;
          puVar9 = &local_94;
          if (7 < local_80) {
            puVar9 = local_94;
          }
          FUN_00692920(local_1b0,*(undefined2 *)((int)puVar9 + local_1f4 * 2),0x800a);
          local_30 = 7;
          local_34 = 0;
          local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
          if (local_1bc[0] == 0) {
            iVar7 = 0;
          }
          else {
            psVar14 = local_1bc;
            do {
              sVar1 = *psVar14;
              psVar14 = psVar14 + 1;
            } while (sVar1 != 0);
            iVar7 = (int)psVar14 - (int)(local_1bc + 1) >> 1;
          }
          FUN_0040f7a0(local_1bc,iVar7);
          local_8._0_1_ = 0x10;
          local_1b4 = operator_new(0xc34);
          local_8._0_1_ = 0x11;
          if (local_1b4 == (SmoothMeshShape *)0x0) {
            pSVar11 = (SmoothMeshShape *)0x0;
          }
          else {
            pSVar11 = plasma::SmoothMeshShape::SmoothMeshShape(local_1b4,(int)pFVar21,local_44);
          }
          local_8._0_1_ = 0xf;
          if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_44[0]);
          }
          local_30 = 7;
          local_34 = 0;
          local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
          local_c8 = 7;
          local_cc = 0;
          local_dc[0] = (void *)((uint)local_dc[0] & 0xffff0000);
          if (local_1bc[0] == 0) {
            iVar7 = 0;
          }
          else {
            psVar14 = local_1bc;
            do {
              sVar1 = *psVar14;
              psVar14 = psVar14 + 1;
            } while (sVar1 != 0);
            iVar7 = (int)psVar14 - (int)(local_1bc + 1) >> 1;
          }
          FUN_0040f7a0(local_1bc,iVar7);
          local_8._0_1_ = 0x12;
          local_1ec = (undefined4 *)FUN_0064f4e0(0,pSVar11,0,local_1c8,local_dc);
          local_8._0_1_ = 0xf;
          if (7 < local_c8) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_dc[0]);
          }
          local_dc[0] = (void *)((uint)local_dc[0] & 0xffff0000);
          local_c8 = 7;
          local_cc = 0;
          local_1ec[0x32] = local_1ec[0x32] | 8;
          FUN_00642a50(0,1);
          iVar7 = 0;
          if (0 < (int)(*(int *)&(pSVar11->NamedObject_data).field_0xa0 -
                        (pSVar11->NamedObject_data).offset_0x9c & 0xfffffffcU)) {
            do {
              FUN_0042bea0(4);
              iVar7 = iVar7 + 1;
            } while (iVar7 < *(int *)&(pSVar11->NamedObject_data).field_0xa0 -
                             (pSVar11->NamedObject_data).offset_0x9c >> 2);
          }
          iVar7 = 0;
          if (0 < (int)(*(int *)&(pSVar11->NamedObject_data).offset_0x150 -
                        (pSVar11->NamedObject_data).offset_0x14c & 0xfffffffcU)) {
            do {
              FUN_0042bf80(4);
              iVar7 = iVar7 + 1;
            } while (iVar7 < *(int *)&(pSVar11->NamedObject_data).offset_0x150 -
                             (pSVar11->NamedObject_data).offset_0x14c >> 2);
          }
          local_10c = (float)*(int *)(*(int *)(local_1b0 + 0x54) + 100) * 0.015625;
          *(ulonglong *)
           **(undefined4 **)
             ((pSVar11->NamedObject_data).offset_0x9c + (pSVar11->NamedObject_data).offset_0x70 * 4)
               = CONCAT44(uStack_108,local_10c);
          local_e4 = (float)*(int *)(*(int *)(local_1b0 + 0x54) + 0x40) * 0.015625;
          *(ulonglong *)
           (**(int **)((pSVar11->NamedObject_data).offset_0x9c +
                      (pSVar11->NamedObject_data).offset_0x70 * 4) + 8) =
               CONCAT44(uStack_e0,local_e4);
          local_154 = (float)*(int *)(*(int *)(local_1b0 + 0x54) + 0x40) * 0.015625;
          *(ulonglong *)
           (**(int **)((pSVar11->NamedObject_data).offset_0x9c +
                      (pSVar11->NamedObject_data).offset_0x70 * 4) + 0x10) =
               CONCAT44(uStack_150,local_154);
          local_124 = (float)*(int *)(*(int *)(local_1b0 + 0x54) + 100) * 0.015625;
          *(ulonglong *)
           (**(int **)((pSVar11->NamedObject_data).offset_0x9c +
                      (pSVar11->NamedObject_data).offset_0x70 * 4) + 0x18) =
               CONCAT44(uStack_120,local_124);
          puVar3 = (undefined8 *)
                   **(int **)((pSVar11->NamedObject_data).offset_0x14c +
                             (pSVar11->NamedObject_data).offset_0x120 * 4);
          *puVar3 = CONCAT44(uStack_100,local_104);
          puVar3[1] = CONCAT44(uStack_f8,local_fc);
          iVar7 = **(int **)((pSVar11->NamedObject_data).offset_0x14c +
                            (pSVar11->NamedObject_data).offset_0x120 * 4);
          *(ulonglong *)(iVar7 + 0x10) = CONCAT44(uStack_118,local_11c);
          *(ulonglong *)(iVar7 + 0x18) = CONCAT44(uStack_110,local_114);
          iVar7 = **(int **)((pSVar11->NamedObject_data).offset_0x14c +
                            (pSVar11->NamedObject_data).offset_0x120 * 4);
          *(ulonglong *)(iVar7 + 0x20) = CONCAT44(uStack_130,local_134);
          *(ulonglong *)(iVar7 + 0x28) = CONCAT44(uStack_128,local_12c);
          iVar7 = **(int **)((pSVar11->NamedObject_data).offset_0x14c +
                            (pSVar11->NamedObject_data).offset_0x120 * 4);
          *(ulonglong *)(iVar7 + 0x30) = CONCAT44(uStack_148,local_14c);
          *(undefined4 *)(iVar7 + 0x38) = local_144;
          *(undefined4 *)(iVar7 + 0x3c) = uStack_140;
          local_1e8 = (_Container_base0 *)0x0;
          local_1e4 = (_Container_base0 *)0x0;
          local_1e0 = 0;
          FUN_00487380(1);
          local_8._0_1_ = 0x13;
          FUN_0040d9d0(4);
          **(undefined4 **)(local_1e4 + -0xc) = 0;
          *(undefined4 *)(*(int *)(local_1e4 + -0xc) + 4) = 1;
          *(undefined4 *)(*(int *)(local_1e4 + -0xc) + 8) = 2;
          *(undefined4 *)(*(int *)(local_1e4 + -0xc) + 0xc) = 3;
          FUN_00642a20(&local_1e8,1);
          local_30 = 7;
          local_34 = 0;
          local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
          if (local_1bc[0] == 0) {
            iVar7 = 0;
          }
          else {
            psVar14 = local_1bc;
            do {
              sVar1 = *psVar14;
              psVar14 = psVar14 + 1;
            } while (sVar1 != 0);
            iVar7 = (int)psVar14 - (int)(local_1bc + 1) >> 1;
          }
          FUN_0040f7a0(local_1bc,iVar7);
          local_8._0_1_ = 0x14;
          local_1b4 = operator_new(0xc34);
          local_8._0_1_ = 0x15;
          if (local_1b4 == (SmoothMeshShape *)0x0) {
            pSVar11 = (SmoothMeshShape *)0x0;
          }
          else {
            pSVar11 = plasma::SmoothMeshShape::SmoothMeshShape(local_1b4,(int)local_1c4,local_44);
          }
          local_1dc = pSVar11;
          local_8._0_1_ = 0x13;
          if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_44[0]);
          }
          local_30 = 7;
          local_34 = 0;
          local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
          local_18 = 7;
          local_1c = 0;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
          if (local_1bc[0] == 0) {
            iVar7 = 0;
          }
          else {
            psVar14 = local_1bc;
            do {
              sVar1 = *psVar14;
              psVar14 = psVar14 + 1;
            } while (sVar1 != 0);
            iVar7 = (int)psVar14 - (int)(local_1bc + 1) >> 1;
          }
          FUN_0040f7a0(local_1bc,iVar7);
          local_8._0_1_ = 0x16;
          iVar7 = FUN_0064f4e0(0,pSVar11,0,local_1ec,local_2c);
          if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_2c[0]);
          }
          local_18 = 7;
          local_1c = 0;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
          *(uint *)(iVar7 + 200) = *(uint *)(iVar7 + 200) | 8;
          local_1d8 = 0;
          local_204 = (_Container_base0 *)0x0;
          local_200 = (_Container_base0 *)0x0;
          local_1fc = 0;
          local_1b8 = (int *)(local_1b0 + 0x54);
          local_218 = 0x40800000;
          local_1f0 = (_Iosb<int>)0x0;
          if (0 < *(short *)(*local_1b8 + 0x6c)) {
            do {
              iVar7 = *local_1b8;
              iVar15 = (int)*(short *)(*(int *)(iVar7 + 0x78) + (int)local_1f0 * 2);
              fVar24 = 0.0;
              pbVar23 = (basic_ifstream<char,std::char_traits<char>_>_vftable *)
                        (-(float)*(int *)(*(int *)(iVar7 + 0x70) + 4 + iVar15 * 8) * 0.015625);
              local_208 = (float)*(int *)(*(int *)(iVar7 + 0x70) + iVar15 * 8) * 0.015625;
              fVar25 = 0.0;
              local_1bd = ~*(byte *)(*(int *)(iVar7 + 0x74) + iVar15) & 1;
              piVar22 = (int *)0x0;
              piVar16 = (int *)0x0;
              piVar17 = (int *)0x0;
              local_21c = 0.0;
              local_214 = 0.0;
              local_1d4 = (int *)0x0;
              local_1d0 = (int *)0x0;
              local_1cc = (int *)0x0;
              local_1b8 = (int *)*local_1b8;
              local_8._0_1_ = 0x18;
              local_1f8 = pbVar23;
              if (local_1d8 <= *(short *)(*(int *)((int)local_1b8 + 0x78) + (int)local_1f0 * 2)) {
                do {
                  pSVar11 = local_1dc;
                  local_64 = (float)*(int *)(*(int *)((int)local_1b8 + 0x70) + local_1d8 * 8) *
                             0.015625;
                  pbStack_60 = (basic_ifstream<char,std::char_traits<char>_>_vftable *)
                               (-(float)*(int *)(*(int *)((int)local_1b8 + 0x70) + 4 + local_1d8 * 8
                                                ) * 0.015625);
                  local_1b4 = (SmoothMeshShape *)(local_64 - local_208);
                  local_268._72_4_ = (float)pbStack_60 - (float)pbVar23;
                  fStack_58 = (float)local_268._72_4_;
                  local_5c = local_1b4;
                  if (0.001 <= (float)local_268._72_4_ * (float)local_268._72_4_ +
                               (float)local_1b4 * (float)local_1b4) {
                    if ((*(byte *)(local_1d8 + *(int *)((int)local_1b8 + 0x74)) & 2) != 0) {
                      p_Var26 = endl_exref;
                      this = (basic_ostream<char,std::char_traits<char>_> *)
                             FUN_00449150(cout_exref,"FT_CURVE_TAG_CUBIC");
                      std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,p_Var26);
                      piVar16 = local_1d0;
                      piVar17 = local_1cc;
                      piVar22 = local_1d4;
                      fVar24 = local_21c;
                      fVar25 = local_214;
                    }
                    if (((float)local_1b4 * fVar25 - (float)local_268._72_4_ * fVar24 == 0.0) &&
                       ((float)local_268._72_4_ * fVar25 + (float)local_1b4 * fVar24 < 0.0)) {
                      piVar16 = *(int **)(pSVar11->NamedObject_data).offset_0x9c;
                      FUN_00642770((piVar16[1] - *piVar16 >> 3) + -1);
                      piVar16 = *(int **)(pSVar11->NamedObject_data).offset_0x9c;
                      FUN_00642770(piVar16[1] - *piVar16 >> 3);
                      piVar16 = *(int **)(pSVar11->NamedObject_data).offset_0x9c;
                      FUN_006427e0(piVar16[1] - *piVar16 >> 3);
                      piVar16 = *(int **)(pSVar11->NamedObject_data).offset_0x9c;
                      FUN_006427e0(piVar16[1] - *piVar16 >> 3);
                      piVar16 = *(int **)(pSVar11->NamedObject_data).offset_0x9c;
                      FUN_00642700(piVar16[1] - *piVar16 >> 3);
                      iVar7 = (pSVar11->MeshShape_data).offset_0x168;
                      if ((pSVar11->MeshShape_data).offset_0x164 != iVar7) {
                        (pSVar11->MeshShape_data).offset_0x168 = iVar7 + -4;
                      }
                      piVar16 = local_1d0;
                      piVar17 = local_1cc;
                      piVar22 = local_1d4;
                      if (local_1d4 != local_1d0) {
                        piVar16 = local_1d0 + -1;
                        local_1d0 = piVar16;
                      }
                    }
                    _local_f4 = _local_5c;
                    if ((local_1bd != 0) &&
                       (pSVar11 = local_1dc,
                       (*(byte *)(local_1d8 + *(int *)(*(int *)(local_1b0 + 0x54) + 0x74)) & 1) == 0
                       )) {
                      piVar4 = *(int **)(local_1dc->NamedObject_data).offset_0x9c;
                      local_20c = piVar4[1] - *piVar4 >> 3;
                      if ((&local_20c < piVar16) && (piVar22 <= &local_20c)) {
                        local_1b8 = (int *)((int)&local_20c - (int)piVar22 >> 2);
                        if ((piVar16 == piVar17) && ((int)piVar17 - (int)piVar16 >> 2 == 0)) {
                          iVar7 = (int)piVar16 - (int)piVar22 >> 2;
                          if (iVar7 == 0x3fffffff) {
LAB_00652696:
                    /* WARNING: Subroutine does not return */
                            std::_Xlength_error("vector<T> too long");
                          }
                          local_1b4 = (SmoothMeshShape *)(iVar7 + 1);
                          uVar6 = (int)piVar17 - (int)piVar22 >> 2;
                          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
                            pSVar18 = (SmoothMeshShape *)0x0;
                          }
                          else {
                            pSVar18 = (SmoothMeshShape *)(uVar6 + (uVar6 >> 1));
                          }
                          if (pSVar18 < local_1b4) {
                            pSVar18 = local_1b4;
                          }
                          FUN_0063da20(pSVar18);
                          piVar16 = local_1d0;
                          piVar22 = local_1d4;
                        }
                        piVar17 = (int *)0x0;
                        if (piVar16 != (int *)0x0) {
                          piVar22 = (int *)piVar22[(int)local_1b8];
LAB_00652013:
                          *piVar16 = (int)piVar22;
                          piVar17 = local_1d0;
                        }
                      }
                      else {
                        local_1b8 = (int *)local_20c;
                        if ((piVar16 == piVar17) && ((int)piVar17 - (int)piVar16 >> 2 == 0)) {
                          iVar7 = (int)piVar16 - (int)piVar22 >> 2;
                          if (iVar7 == 0x3fffffff) goto LAB_00652696;
                          local_1b4 = (SmoothMeshShape *)(iVar7 + 1);
                          uVar6 = (int)piVar17 - (int)piVar22 >> 2;
                          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
                            pSVar18 = (SmoothMeshShape *)0x0;
                          }
                          else {
                            pSVar18 = (SmoothMeshShape *)(uVar6 + (uVar6 >> 1));
                          }
                          if (pSVar18 < local_1b4) {
                            pSVar18 = local_1b4;
                          }
                          FUN_0063da20(pSVar18);
                          piVar16 = local_1d0;
                        }
                        piVar17 = (int *)0x0;
                        piVar22 = local_1b8;
                        if (piVar16 != (int *)0x0) goto LAB_00652013;
                      }
                      local_1d0 = piVar17 + 1;
                      fStack_50 = (float)local_1f8 + (float)pbStack_60;
                      local_54 = local_208 + local_64;
                      fStack_48 = ((float)local_1f8 + (float)pbStack_60) * 0.5;
                      local_4c = (local_208 + local_64) * 0.5;
                      FUN_0064e8f0(&local_4c);
                      local_16c._0_1_ = 0;
                      local_16c._1_3_ = 0x3f8000;
                      local_168 = 0x3f800000;
                      local_164 = 0x3f800000;
                      local_160 = 0x3f800000;
                      FUN_0064e9b0(&local_16c);
                      local_15c = 0;
                      local_158 = 0;
                      FUN_0064e8f0(&local_15c);
                      local_17c = 0x3f800000;
                      local_178 = 0x3f800000;
                      local_174 = 0x3f800000;
                      local_170 = 0x3f800000;
                      FUN_0064e9b0(&local_17c);
                      FUN_0064e850(&local_218);
                      local_1b4 = (SmoothMeshShape *)0x1;
                      FUN_0066add0(&local_1b4);
                    }
                    piVar16 = *(int **)(pSVar11->NamedObject_data).offset_0x9c;
                    local_1b4 = (SmoothMeshShape *)(piVar16[1] - *piVar16 >> 3);
                    FUN_0066add0(&local_1b4);
                    FUN_0064e8f0(&local_64);
                    local_18c = 0x3f800000;
                    local_188 = 0x3f800000;
                    local_184 = 0x3f800000;
                    local_180 = 0x3f800000;
                    FUN_0064e9b0(&local_18c);
                    local_13c = 0;
                    local_138 = 0;
                    FUN_0064e8f0(&local_13c);
                    local_a4 = 0x3f800000;
                    local_a0 = 0x3f800000;
                    local_9c = 0x3f800000;
                    local_98 = 0x3f800000;
                    FUN_0064e9b0(&local_a4);
                    FUN_0064e850(&local_218);
                    iVar7 = local_1d8;
                    local_1b4 = (SmoothMeshShape *)
                                (2 - (uint)((*(byte *)(local_1d8 +
                                                      *(int *)(*(int *)(local_1b0 + 0x54) + 0x74)) &
                                            1) != 0));
                    FUN_0066add0(&local_1b4);
                    local_1b8 = *(int **)(local_1b0 + 0x54);
                    local_ec = local_64;
                    pbStack_e8 = pbStack_60;
                    local_1bd = ~*(byte *)(*(int *)((int)local_1b8 + 0x74) + iVar7) & 1;
                    local_214 = fStack_f0;
                    local_21c = local_f4;
                    local_1f8 = pbStack_60;
                    local_208 = local_64;
                    piVar16 = local_1d0;
                    piVar17 = local_1cc;
                    piVar22 = local_1d4;
                    fVar24 = local_f4;
                    fVar25 = fStack_f0;
                    pbVar23 = pbStack_60;
                  }
                  local_1d8 = local_1d8 + 1;
                } while (local_1d8 <=
                         *(short *)(*(int *)((int)local_1b8 + 0x78) + (int)local_1f0 * 2));
              }
              pSVar11 = local_1dc;
              FUN_00642610(&local_1d4);
              local_8._0_1_ = 0x17;
              local_1d8 = *(short *)(*(int *)(*(int *)(local_1b0 + 0x54) + 0x78) +
                                    (int)local_1f0 * 2) + 1;
              if (local_1d4 != (int *)0x0) {
                std::_Container_base0::_Orphan_all((_Container_base0 *)&local_1d4);
                    /* WARNING: Subroutine does not return */
                operator_delete(local_1d4);
              }
              local_1b8 = (int *)(local_1b0 + 0x54);
              local_1f0 = (_Iosb<int>)((int)local_1f0 + 1);
            } while ((int)local_1f0 < (int)*(short *)(*local_1b8 + 0x6c));
          }
          local_8._0_1_ = 0x17;
          (pSVar11->MeshShape_data).offset_0x6fc =
               (pSVar11->MeshShape_data).offset_0x6fc & 0xfffffff3 | 1;
          FUN_00642a20(&local_204,1);
          local_1ec[0x32] = local_1ec[0x32] | 3;
          FUN_00631520(local_1ac,0);
          local_8._0_1_ = 0x13;
          if (local_204 != (_Container_base0 *)0x0) {
            std::_Container_base0::_Orphan_all((_Container_base0 *)&local_204);
            p_Var20 = local_204;
            while( true ) {
              if (p_Var20 == local_200) {
                    /* WARNING: Subroutine does not return */
                operator_delete(local_204);
              }
              if (*(int *)p_Var20 != 0) break;
              p_Var20 = p_Var20 + 0xc;
            }
            std::_Container_base0::_Orphan_all(p_Var20);
                    /* WARNING: Subroutine does not return */
            operator_delete(*(void **)p_Var20);
          }
          local_8._0_1_ = 0xf;
          if (local_1e8 != (_Container_base0 *)0x0) {
            std::_Container_base0::_Orphan_all((_Container_base0 *)&local_1e8);
            p_Var20 = local_1e8;
            while( true ) {
              if (p_Var20 == local_1e4) {
                    /* WARNING: Subroutine does not return */
                operator_delete(local_1e8);
              }
              if (*(int *)p_Var20 != 0) break;
              p_Var20 = p_Var20 + 0xc;
            }
            std::_Container_base0::_Orphan_all(p_Var20);
                    /* WARNING: Subroutine does not return */
            operator_delete(*(void **)p_Var20);
          }
          local_1f4 = local_1f4 + 1;
          pFVar21 = local_1c4;
        } while (local_1f4 < local_210);
      }
      FUN_00693180(local_1b0);
      uVar8 = FUN_006089c0(local_2c,local_1a4);
      local_8._0_1_ = 0x19;
      iVar7 = FUN_0064fda0(local_1c8,uVar8);
      local_8._0_1_ = 0xf;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      local_18 = 7;
      local_1c = 0;
      if ((undefined4 ********)(iVar7 + 0x34) != local_7c) {
        FUN_0040f680(local_7c,0,0xffffffff);
      }
      *(int *)(iVar7 + 0x4c) = param_2;
      *(undefined4 *)(iVar7 + 0x50) = 0;
      if (7 < local_80) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_94);
      }
      local_80 = 7;
      local_84 = 0;
      local_94 = (undefined4 *)((uint)local_94 & 0xffff0000);
      if (0xf < local_190) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1a4[0]);
      }
      local_190 = 0xf;
      local_194._0_1_ = 0;
      local_194._1_3_ = 0;
      local_1a4[0] = (void *)((uint)local_1a4[0] & 0xffffff00);
    }
  }
  if (7 < local_b0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_c4);
  }
  local_b0 = 7;
  local_b4 = 0;
  local_c4 = (void *)((uint)local_c4 & 0xffff0000);
  basic_ifstream<char,std::char_traits<char>_>
            ((basic_ifstream<char,std::char_traits<char>_> *)local_268);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)local_268);
LAB_00652666:
  if (7 < local_68) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_7c[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_> @ 00657480  kind=lib  attributed-by=stl-ns  size=1373 */

void __thiscall
std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
          (basic_ifstream<char,std::char_traits<char>_> *this,undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  PlasmaFont *pPVar5;
  undefined4 ****ppppuVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  int *piVar10;
  basic_streambuf<char,std::char_traits<char>_> *pbVar11;
  undefined1 local_13c [16];
  basic_streambuf<char,std::char_traits<char>_> local_12c [2];
  basic_istream<char,std::char_traits<char>_> local_124;
  int *local_120;
  char *local_f4;
  char *local_f0;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined4 local_e4;
  char local_e0;
  FILE *local_dc;
  basic_ios<char,std::char_traits<char>_> local_cc [6];
  int local_84;
  undefined8 local_80;
  int local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [3];
  void *local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6c06;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_80 = CONCAT44(param_1,(undefined4)local_80);
  local_78 = 0x2f;
  iVar2 = FUN_00639a70(&local_78,0xffffffff,1);
  local_78 = 0x5c;
  local_84 = iVar2;
  local_78 = FUN_00639a70(&local_78,0xffffffff,1);
  piVar7 = &local_78;
  if (local_78 <= iVar2) {
    piVar7 = &local_84;
  }
  FUN_0043a450(local_2c,*piVar7 + 1,(param_1[4] - *piVar7) + -1);
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  basic_ifstream<char,std::char_traits<char>_>
            ((basic_ifstream<char,std::char_traits<char>_> *)local_13c,1);
  local_8._0_1_ = 2;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  iVar2 = FUN_00653210(param_1,0x21,0x40);
  if (iVar2 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_13c + *(int *)(local_13c._0_4_ + 4)),2,false);
  }
  else {
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_13c + *(int *)(local_13c._0_4_ + 4)),0,false);
  }
  pcVar9 = fclose_exref;
  if (local_dc == (FILE *)0x0) {
    piVar7 = *(int **)&this[2].basic_ifstream<char,std::char_traits<char>_>_data.field_0x40;
    piVar10 = (int *)*piVar7;
    if (piVar10 != piVar7) {
      do {
        uVar3 = FUN_00451850(local_74,piVar10 + 2,&DAT_006fd42c);
        local_8._0_1_ = 3;
        puVar4 = (undefined4 *)FUN_004517d0(local_5c,uVar3,local_2c);
        local_8 = CONCAT31(local_8._1_3_,4);
        if (7 < (uint)puVar4[5]) {
          puVar4 = (undefined4 *)*puVar4;
        }
        iVar2 = FUN_00653210(puVar4,0x21,0x40);
        if (iVar2 == 0) {
          std::basic_ios<char,std::char_traits<char>_>::setstate
                    ((basic_ios<char,std::char_traits<char>_> *)
                     (local_13c + *(int *)(local_13c._0_4_ + 4)),2,false);
        }
        else {
          std::basic_ios<char,std::char_traits<char>_>::clear
                    ((basic_ios<char,std::char_traits<char>_> *)
                     (local_13c + *(int *)(local_13c._0_4_ + 4)),0,false);
        }
        if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_5c[0]);
        }
        local_48 = 7;
        local_4c = 0;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
        local_8._0_1_ = 2;
        if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_74[0]);
        }
        if (local_dc != (FILE *)0x0) {
          if (&local_44 != piVar10 + 2) {
            FUN_0040f680(piVar10 + 2,0,0xffffffff);
          }
          if (local_dc != (FILE *)0x0) goto LAB_006576d8;
          break;
        }
        piVar10 = (int *)*piVar10;
      } while (piVar10 !=
               (int *)*(int *)&this[2].basic_ifstream<char,std::char_traits<char>_>_data.field_0x40)
      ;
    }
    pPVar5 = operator_new(0x70);
    local_80 = CONCAT44(pPVar5,(undefined4)local_80);
    local_8._0_1_ = 5;
    if (pPVar5 == (PlasmaFont *)0x0) {
      pPVar5 = (PlasmaFont *)0x0;
    }
    else {
      pPVar5 = plasma::PlasmaFont::PlasmaFont(pPVar5,(Font *)this,(int)local_2c);
    }
    local_8._0_1_ = 2;
    if (&(pPVar5->NamedObject_data).offset_0x28 != local_2c) {
      FUN_0040f680(local_2c,0,0xffffffff);
    }
  }
  else {
LAB_006576d8:
    pbVar11 = local_12c;
    if (local_dc == (FILE *)0x0) {
      pbVar11 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
    else {
      cVar1 = FUN_00405cc0();
      if (cVar1 == '\0') {
        pbVar11 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
      }
      iVar2 = fclose(local_dc);
      if (iVar2 != 0) {
        pbVar11 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
      }
    }
    local_e0 = '\0';
    local_e7 = 0;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init(local_12c);
    local_dc = (FILE *)0x0;
    local_e4 = DAT_0076af5c;
    local_ec = 0;
    if (pbVar11 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 (local_13c + *(int *)(local_13c._0_4_ + 4)),2,false);
    }
    iVar2 = *(int *)&this[1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x3c;
    iVar8 = 0;
    piVar7 = (int *)**(int **)(iVar2 + 0x2c);
    if (piVar7 != *(int **)(iVar2 + 0x2c)) {
      do {
        ppppuVar6 = local_2c;
        if (7 < local_18) {
          ppppuVar6 = (undefined4 ****)local_2c[0];
        }
        iVar2 = FUN_00428db0(0,*(undefined4 *)(piVar7[2] + 0x1c),ppppuVar6,local_1c);
        if (iVar2 == 0) {
          iVar8 = piVar7[2];
          break;
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)*(int *)(*(int *)&this[1].
                                                  basic_ifstream<char,std::char_traits<char>_>_data.
                                                  field_0x3c + 0x2c));
    }
    if (local_34 == 0) {
      if (&local_44 != local_80._4_4_) {
        FUN_0040f680(local_80._4_4_,0,0xffffffff);
      }
    }
    else {
      uVar3 = FUN_0064b2e0(local_74,&DAT_006fd42c,local_2c);
      local_8._0_1_ = 6;
      FUN_0046f170(uVar3,0,0xffffffff);
      local_8._0_1_ = 2;
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
    }
    if (iVar8 == 0) {
      iVar8 = FUN_0064f4e0(0,0,0,*(undefined4 *)
                                  &this[1].basic_ifstream<char,std::char_traits<char>_>_data.
                                   field_0x3c,local_2c);
      local_80 = 0;
      local_50 = (void *)0x0;
      local_4c = 0;
      local_48 = 0;
      FUN_0046da00(1,&local_80);
      local_8._0_1_ = 7;
      FUN_00653770(&local_44,iVar8,7,0,&local_50);
      local_8._0_1_ = 2;
      if (local_50 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_50);
      }
      *(uint *)(iVar8 + 200) = *(uint *)(iVar8 + 200) | 8;
    }
    pPVar5 = (PlasmaFont *)FUN_0064fda0(iVar8,local_2c);
    if (&(pPVar5->NamedObject_data).offset_0x28 != local_2c) {
      FUN_0040f680(local_2c,0,0xffffffff);
    }
    pcVar9 = fclose_exref;
    *(undefined4 *)&(pPVar5->NamedObject_data).offset_0x44 = 0;
  }
  (pPVar5->NamedObject_data).offset_0x40 = param_2;
  local_8 = CONCAT31(local_8._1_3_,1);
                    /* inlined constructor:
                       std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
                        */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)
   (local_13c + *(int *)(local_13c._0_4_ + 4)) = &vftable;
  *(int *)(&stack0xfffffec0 + *(int *)(local_13c._0_4_ + 4)) = *(int *)(local_13c._0_4_ + 4) + -0x70
  ;
                    /* inlined constructor:
                       std::basic_filebuf<char,std::char_traits<char>_>::basic_filebuf<char,std::char_traits<char>_>
                        */
  local_12c[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((local_dc != (FILE *)0x0) && ((undefined1 *)*local_120 == &local_e8)) {
    std::basic_streambuf<char,std::char_traits<char>_>::setg(local_12c,local_f4,local_f0,local_f0);
  }
  if (local_e0 != '\0') {
    if (local_dc != (FILE *)0x0) {
      FUN_00405cc0();
      (*pcVar9)(local_dc);
    }
    local_e0 = '\0';
    local_e7 = 0;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init(local_12c);
    local_dc = (FILE *)0x0;
    local_e4 = DAT_0076af5c;
    local_ec = 0;
  }
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_12c);
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            (&local_124);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_cc);
  if (local_30 < 8) {
    local_30 = 7;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffff0000);
    if (local_18 < 8) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_44);
}


/* std::bad_alloc::bad_alloc @ 0066e250  kind=lib  attributed-by=stl-ns  size=28 */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  this->vftablePtr = &vftable;
  return this;
}


/* std::bad_alloc::~bad_alloc @ 0066ec00  kind=lib  attributed-by=stl-ns  size=12 */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  this->vftablePtr = &vftable;
                    /* WARNING: Could not recover jumptable at 0x0066ec06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)this);
  return;
}


/* std::bad_alloc::deleting_destructor @ 00671230  kind=lib  attributed-by=stl-ns  size=37 */

bad_alloc * __thiscall std::bad_alloc::deleting_destructor(bad_alloc *this,byte param_1)

{
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
  this->vftablePtr = &vftable;
  std::exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* MSVCP110.DLL::std::basic_ios<char,std::char_traits<char>_>::_Add_vtordisp2 @ 0068d5e0  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_ios<char,std::char_traits<char>_>::_Add_vtordisp2
          (basic_ios<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0068d5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Add_vtordisp2(this);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::_Lock @ 0068d5e6  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::_Lock
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0068d5e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Lock(this);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::_Unlock @ 0068d5ec  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::_Unlock
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0068d5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Unlock(this);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::imbue @ 0068d5f2  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::imbue
          (basic_streambuf<char,std::char_traits<char>_> *this,locale *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0068d5f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  imbue(this,param_1);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::setbuf @ 0068d5f8  kind=lib  attributed-by=stl-ns  size=6 */

basic_streambuf<char,struct_std::char_traits<char>_> * __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::setbuf
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar1 = setbuf(this,param_1,param_2);
  return pbVar1;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::showmanyc @ 0068d5fe  kind=lib  attributed-by=stl-ns  size=6 */

__int64 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::showmanyc
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d5fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = showmanyc(this);
  return _Var1;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::sync @ 0068d604  kind=lib  attributed-by=stl-ns  size=6 */

int __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::sync
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sync(this);
  return iVar1;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::uflow @ 0068d60a  kind=lib  attributed-by=stl-ns  size=6 */

int __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::uflow
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d60a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = uflow(this);
  return iVar1;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::xsgetn @ 0068d610  kind=lib  attributed-by=stl-ns  size=6 */

__int64 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::xsgetn
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = xsgetn(this,param_1,param_2);
  return _Var1;
}


/* MSVCP110.DLL::std::basic_streambuf<char,std::char_traits<char>_>::xsputn @ 0068d616  kind=lib  attributed-by=stl-ns  size=6 */

__int64 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::xsputn
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = xsputn(this,param_1,param_2);
  return _Var1;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Lock @ 0068d61c  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Lock
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0068d61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Lock(this);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Unlock @ 0068d622  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Unlock
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0068d622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Unlock(this);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::imbue @ 0068d628  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::imbue
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this,locale *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0068d628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  imbue(this,param_1);
  return;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setbuf @ 0068d62e  kind=lib  attributed-by=stl-ns  size=6 */

basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> * __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setbuf
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this,wchar_t *param_1,
          __int64 param_2)

{
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d62e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar1 = setbuf(this,param_1,param_2);
  return pbVar1;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::showmanyc @ 0068d634  kind=lib  attributed-by=stl-ns  size=6 */

__int64 __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::showmanyc
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = showmanyc(this);
  return _Var1;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sync @ 0068d63a  kind=lib  attributed-by=stl-ns  size=6 */

int __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sync
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d63a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sync(this);
  return iVar1;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::uflow @ 0068d640  kind=lib  attributed-by=stl-ns  size=6 */

ushort __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::uflow
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = uflow(this);
  return uVar1;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::xsgetn @ 0068d646  kind=lib  attributed-by=stl-ns  size=6 */

__int64 __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::xsgetn
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this,wchar_t *param_1,
          __int64 param_2)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = xsgetn(this,param_1,param_2);
  return _Var1;
}


/* MSVCP110.DLL::std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::xsputn @ 0068d64c  kind=lib  attributed-by=stl-ns  size=6 */

__int64 __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::xsputn
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this,wchar_t *param_1,
          __int64 param_2)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = xsputn(this,param_1,param_2);
  return _Var1;
}


/* MSVCP110.DLL::std::basic_ios<char,std::char_traits<char>_>::_Add_vtordisp1 @ 0068d65c  kind=lib  attributed-by=stl-ns  size=6 */

void __thiscall
std::basic_ios<char,std::char_traits<char>_>::_Add_vtordisp1
          (basic_ios<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0068d65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Add_vtordisp1(this);
  return;
}


/* MSVCR110.DLL::std::exception::what @ 0068e40e  kind=lib  attributed-by=stl-ns  size=6 */

char * __thiscall std::exception::what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068e40e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}


/* std::error_category::~error_category @ 006fb120  kind=lib  attributed-by=stl-ns  size=11 */

void std::error_category::~error_category(void)

{
  PTR_vftable_00765064 = (undefined *)&vftable;
  return;
}


/* std::error_category::~error_category @ 006fb130  kind=lib  attributed-by=stl-ns  size=11 */

void std::error_category::~error_category(void)

{
  PTR_vftable_00765068 = (undefined *)&vftable;
  return;
}


/* std::error_category::~error_category @ 006fb140  kind=lib  attributed-by=stl-ns  size=11 */

void std::error_category::~error_category(void)

{
  PTR_vftable_0076506c = (undefined *)&vftable;
  return;
}


