// Machine (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Machine.h"

/* abstr::Machine::Machine @ 00403560  kind=game  attributed-by=rtti  size=2179 */

Machine * __thiscall abstr::Machine::Machine(Machine *this)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e137d;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->Machine_data).offset_0x0 = 0;
  (this->Machine_data).offset_0x4 = 0;
  uVar2 = FUN_0043c870(uVar1);
  (this->Machine_data).offset_0x0 = uVar2;
  (this->Machine_data).offset_0x8 = 0;
  (this->Machine_data).offset_0xc = 0;
  (this->Machine_data).offset_0x10 = 0;
  (this->Machine_data).offset_0x14 = 0;
  (this->Machine_data).offset_0x18 = 0;
  (this->Machine_data).offset_0x1c = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  (this->Machine_data).offset_0x20 = 0;
  (this->Machine_data).offset_0x24 = 0;
  uVar2 = FUN_0064e370();
  (this->Machine_data).offset_0x20 = uVar2;
  (this->Machine_data).offset_0x28 = 0;
  (this->Machine_data).offset_0x2c = 0;
  (this->Machine_data).offset_0x30 = 0;
  local_8._0_1_ = 4;
  (this->Machine_data).offset_0x34 = (void *)0x0;
  (this->Machine_data).offset_0x38 = 0;
  pvVar3 = (void *)FUN_0046d550(0,0);
  (this->Machine_data).offset_0x34 = pvVar3;
  (this->Machine_data).offset_0x3c = (undefined4 *)0x0;
  (this->Machine_data).offset_0x40 = 0;
  (this->Machine_data).offset_0x44 = 0;
  (this->Machine_data).offset_0x4c = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  if ((uint)(((this->Machine_data).offset_0x30 - (this->Machine_data).offset_0x28) / 0xc) < 0x400) {
    FUN_0063db90(0x400);
  }
  local_14 = 0;
  FUN_004871e0(0x96,&local_14);
  *(this->Machine_data).offset_0x3c = FUN_00406660;
  (this->Machine_data).offset_0x3c[0x33] = FUN_0040a860;
  (this->Machine_data).offset_0x3c[0x10] = FUN_0040aa50;
  (this->Machine_data).offset_0x3c[0x45] = FUN_00406660;
  (this->Machine_data).offset_0x3c[0x19] = FUN_00408080;
  (this->Machine_data).offset_0x3c[0x2a] = FUN_0040ad70;
  (this->Machine_data).offset_0x3c[6] = FUN_00408080;
  (this->Machine_data).offset_0x3c[0x3f] = FUN_00407510;
  (this->Machine_data).offset_0x3c[0x3c] = FUN_00406660;
  (this->Machine_data).offset_0x3c[0x41] = FUN_00407510;
  (this->Machine_data).offset_0x3c[0x2b] = FUN_004066f0;
  (this->Machine_data).offset_0x3c[0xd] = FUN_00407f80;
  (this->Machine_data).offset_0x3c[0x2e] = FUN_004068b0;
  (this->Machine_data).offset_0x3c[0x22] = FUN_00406660;
  (this->Machine_data).offset_0x3c[0x40] = FUN_004066f0;
  (this->Machine_data).offset_0x3c[4] = FUN_00406d50;
  (this->Machine_data).offset_0x3c[0x61] = FUN_0040a200;
  (this->Machine_data).offset_0x3c[0x8a] = FUN_004082f0;
  (this->Machine_data).offset_0x3c[0x95] = FUN_00405850;
  (this->Machine_data).offset_0x3c[100] = FUN_004091c0;
  (this->Machine_data).offset_0x3c[0x44] = FUN_0040a740;
  (this->Machine_data).offset_0x3c[0x1e] = FUN_004069c0;
  (this->Machine_data).offset_0x3c[0x66] = FUN_00407570;
  (this->Machine_data).offset_0x3c[0x5a] = FUN_00408080;
  (this->Machine_data).offset_0x3c[0x29] = FUN_00406660;
  (this->Machine_data).offset_0x3c[0x24] = FUN_0040ab10;
  (this->Machine_data).offset_0x3c[0x18] = FUN_00406660;
  (this->Machine_data).offset_0x3c[0x65] = FUN_0040ac80;
  (this->Machine_data).offset_0x3c[0x8c] = FUN_004092e0;
  (this->Machine_data).offset_0x3c[0x56] = FUN_00405700;
  (this->Machine_data).offset_0x3c[0x5b] = FUN_0040a3a0;
  (this->Machine_data).offset_0x3c[0x3d] = FUN_00408080;
  (this->Machine_data).offset_0x3c[0x46] = FUN_0040b5e0;
  (this->Machine_data).offset_0x3c[5] = FUN_0040b680;
  (this->Machine_data).offset_0x3c[8] = FUN_0040abf0;
  (this->Machine_data).offset_0x3c[0x43] = FUN_00407ed0;
  (this->Machine_data).offset_0x3c[10] = FUN_0040b550;
  (this->Machine_data).offset_0x3c[0x49] = FUN_00404890;
  (this->Machine_data).offset_0x3c[0x25] = FUN_004053b0;
  (this->Machine_data).offset_0x3c[9] = FUN_0040a690;
  (this->Machine_data).offset_0x3c[0x27] = FUN_00406660;
  (this->Machine_data).offset_0x3c[0x1b] = FUN_00407620;
  (this->Machine_data).offset_0x3c[0x13] = FUN_0040b0a0;
  (this->Machine_data).offset_0x3c[0x1a] = FUN_00407680;
  (this->Machine_data).offset_0x3c[2] = FUN_0040a9c0;
  (this->Machine_data).offset_0x3c[1] = FUN_004067c0;
  (this->Machine_data).offset_0x3c[0x26] = FUN_00406660;
  (this->Machine_data).offset_0x3c[3] = FUN_00407e30;
  (this->Machine_data).offset_0x3c[0x28] = FUN_0040aaf0;
  (this->Machine_data).offset_0x3c[0x2f] = FUN_00408080;
  (this->Machine_data).offset_0x3c[0x1d] = FUN_004092e0;
  (this->Machine_data).offset_0x3c[0x34] = FUN_0040a350;
  (this->Machine_data).offset_0x3c[0x5f] = FUN_0040b390;
  (this->Machine_data).offset_0x3c[0x47] = FUN_00406dc0;
  (this->Machine_data).offset_0x3c[0x37] = FUN_00404650;
  (this->Machine_data).offset_0x3c[0x20] = FUN_0040b270;
  (this->Machine_data).offset_0x3c[0x4c] = FUN_00409eb0;
  (this->Machine_data).offset_0x3c[99] = FUN_0040b390;
  (this->Machine_data).offset_0x3c[0x81] = FUN_00409fc0;
  (this->Machine_data).offset_0x3c[0x17] = FUN_004049a0;
  (this->Machine_data).offset_0x3c[0x68] = FUN_004093e0;
  (this->Machine_data).offset_0x3c[0x7d] = FUN_0040b380;
  (this->Machine_data).offset_0x3c[0x2d] = FUN_0040b0c0;
  (this->Machine_data).offset_0x3c[0x21] = FUN_0040b730;
  (this->Machine_data).offset_0x3c[0x74] = FUN_0040a560;
  (this->Machine_data).offset_0x3c[0x83] = FUN_00405640;
  (this->Machine_data).offset_0x3c[0x2c] = FUN_00406e30;
  (this->Machine_data).offset_0x3c[0xc] = &LAB_0040a980;
  (this->Machine_data).offset_0x3c[0x1c] = FUN_00406660;
  (this->Machine_data).offset_0x3c[0xf] = FUN_0040af30;
  (this->Machine_data).offset_0x3c[0x7f] = FUN_00405e70;
  (this->Machine_data).offset_0x3c[0x3a] = FUN_0040a350;
  (this->Machine_data).offset_0x3c[0xe] = FUN_00405120;
  (this->Machine_data).offset_0x3c[0x38] = FUN_00406c30;
  (this->Machine_data).offset_0x3c[0x32] = FUN_00406ec0;
  (this->Machine_data).offset_0x3c[0x12] = FUN_004051e0;
  (this->Machine_data).offset_0x3c[0x16] = FUN_00405290;
  (this->Machine_data).offset_0x3c[0x11] = FUN_0040a600;
  (this->Machine_data).offset_0x3c[0x6e] = FUN_004052b0;
  (this->Machine_data).offset_0x3c[0x23] = FUN_00406d50;
  (this->Machine_data).offset_0x3c[0x58] = FUN_00404760;
  (this->Machine_data).offset_0x3c[0x5c] = FUN_004090b0;
  (this->Machine_data).offset_0x3c[0x7c] = FUN_00405f90;
  (this->Machine_data).offset_0x3c[0x6d] = FUN_00404be0;
  (this->Machine_data).offset_0x3c[0x36] = FUN_00405290;
  (this->Machine_data).offset_0x3c[0x55] = FUN_00404cf0;
  (this->Machine_data).offset_0x3c[0x30] = FUN_0040a4c0;
  (this->Machine_data).offset_0x3c[0x78] = FUN_00404e00;
  (this->Machine_data).offset_0x3c[0x5d] = FUN_00405100;
  (this->Machine_data).offset_0x3c[0x3b] = FUN_00404f10;
  (this->Machine_data).offset_0x3c[0x35] = FUN_004069e0;
  (this->Machine_data).offset_0x3c[0x4d] = FUN_00409b50;
  (this->Machine_data).offset_0x3c[0x6b] = FUN_00404ab0;
  (this->Machine_data).offset_0x3c[0x94] = FUN_00407910;
  (this->Machine_data).offset_0x3c[0x60] = FUN_0040a430;
  (this->Machine_data).offset_0x3c[0x70] = FUN_00408d50;
  (this->Machine_data).offset_0x3c[7] = FUN_004051b0;
  (this->Machine_data).offset_0x3c[0x4f] = FUN_00408280;
  (this->Machine_data).offset_0x3c[0x7b] = FUN_00409c20;
  (this->Machine_data).offset_0x3c[0x31] = FUN_0040b390;
  (this->Machine_data).offset_0x3c[0x80] = FUN_00407a50;
  (this->Machine_data).offset_0x3c[0x59] = FUN_00409de0;
  (this->Machine_data).offset_0x3c[0x62] = FUN_00407170;
  (this->Machine_data).offset_0x3c[0x6a] = FUN_004073d0;
  (this->Machine_data).offset_0x3c[0x91] = FUN_004076d0;
  (this->Machine_data).offset_0x3c[0x57] = FUN_004060b0;
  (this->Machine_data).offset_0x3c[0x39] = FUN_00406540;
  (this->Machine_data).offset_0x3c[0x69] = FUN_00405a70;
  (this->Machine_data).offset_0x3c[0x5e] = FUN_00406300;
  (this->Machine_data).offset_0x3c[0x1f] = FUN_00409860;
  (this->Machine_data).offset_0x3c[0x75] = FUN_00409cf0;
  (this->Machine_data).offset_0x3c[0x6f] = FUN_00406b00;
  (this->Machine_data).offset_0x3c[0x14] = FUN_00407290;
  (this->Machine_data).offset_0x3c[0x48] = FUN_00408160;
  (this->Machine_data).offset_0x3c[0x42] = FUN_00407040;
  (this->Machine_data).offset_0x3c[0x76] = FUN_00408150;
  (this->Machine_data).offset_0x3c[0x8f] = FUN_00409970;
  (this->Machine_data).offset_0x3c[0x93] = FUN_004081b0;
  (this->Machine_data).offset_0x3c[0x8b] = FUN_00409a80;
  (this->Machine_data).offset_0x3c[0x67] = FUN_00407c40;
  (this->Machine_data).offset_0x3c[0x82] = FUN_00408460;
  (this->Machine_data).offset_0x3c[0x8e] = FUN_00409730;
  (this->Machine_data).offset_0x3c[0x4e] = FUN_00405850;
  (this->Machine_data).offset_0x3c[0x87] = HelperCmpClass::HelperCmpClass_Constructor_or_Destructor;
  (this->Machine_data).offset_0x3c[0x53] = FUN_00408a00;
  (this->Machine_data).offset_0x3c[0x6c] = FUN_00408c20;
  (this->Machine_data).offset_0x3c[0x88] =
       HelperIdentityClass::HelperIdentityClass_Constructor_or_Destructor;
  (this->Machine_data).offset_0x3c[0x4a] = FUN_004092e0;
  (this->Machine_data).offset_0x3c[0x86] = FUN_004081e0;
  (this->Machine_data).offset_0x3c[0x7e] = FUN_00405960;
  (this->Machine_data).offset_0x3c[0x8d] = FUN_004083f0;
  (this->Machine_data).offset_0x3c[0x7a] = FUN_004088a0;
  (this->Machine_data).offset_0x3c[0x90] = FUN_00408eb0;
  (this->Machine_data).offset_0x3c[0x79] = FUN_00408230;
  (this->Machine_data).offset_0x3c[0x52] = FUN_00408b10;
  (this->Machine_data).offset_0x3c[0xb] = FUN_00406420;
  (this->Machine_data).offset_0x3c[0x51] = FUN_00406f30;
  (this->Machine_data).offset_0x3c[0x3e] = FUN_004085a0;
  (this->Machine_data).offset_0x3c[0x72] = FUN_004061e0;
  (this->Machine_data).offset_0x3c[0x15] = FUN_00405210;
  (this->Machine_data).offset_0x3c[0x84] = FUN_0040a0e0;
  (this->Machine_data).offset_0x3c[0x54] = FUN_00405ba0;
  (this->Machine_data).offset_0x3c[0x50] = FUN_00409500;
  (this->Machine_data).offset_0x3c[0x89] = FUN_004052e0;
  (this->Machine_data).offset_0x3c[0x4b] = FUN_00404be0;
  (this->Machine_data).offset_0x3c[0x85] = FUN_00409620;
  (this->Machine_data).offset_0x3c[0x71] = FUN_00408eb0;
  (this->Machine_data).offset_0x3c[0x73] = FUN_00408350;
  (this->Machine_data).offset_0x3c[0x77] = FUN_00409eb0;
  (this->Machine_data).offset_0x3c[0x92] = FUN_004077f0;
  ExceptionList = local_10;
  return this;
}


/* abstr::Machine::~Machine @ 00403f10  kind=game  attributed-by=rtti  size=72 */

void __thiscall abstr::Machine::~Machine(Machine *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  this->vftablePtr = &vftable;
  puVar1 = (this->Machine_data).offset_0x3c;
  if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar1);
  }
  puVar1 = (this->Machine_data).offset_0x34;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  pvVar3 = (this->Machine_data).offset_0x34;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  (this->Machine_data).offset_0x38 = 0;
  if (pvVar2 != (this->Machine_data).offset_0x34) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((this->Machine_data).offset_0x34);
}


/* abstr::Machine::deleting_destructor @ 004045f0  kind=game  attributed-by=rtti  size=30 */

Machine * __thiscall abstr::Machine::deleting_destructor(Machine *this,byte param_1)

{
  ~Machine(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


