// Helpers_01 (world) -- server. 57 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_01.h"

/* FUN_004e1520 @ 004e1520  kind=gamemisc  attributed-by=caller-vote  size=56 */

void __cdecl FUN_004e1520(float *param_1,float param_2,float *param_3)

{
  *param_1 = *param_3 * param_2;
  param_1[1] = param_3[1] * param_2;
  param_1[2] = param_3[2] * param_2;
  return;
}


/* FUN_004e1e90 @ 004e1e90  kind=gamemisc  attributed-by=caller-vote  size=32 */

undefined4 * __thiscall
FUN_004e1e90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return this;
}


/* FUN_004e2360 @ 004e2360  kind=gamemisc  attributed-by=caller-vote  size=32 */

int * __thiscall FUN_004e2360(void *this,int *param_1,int param_2)

{
  *param_1 = *(int *)this / param_2;
  param_1[1] = *(int *)((int)this + 4) / param_2;
  return param_1;
}


/* FUN_004e27b0 @ 004e27b0  kind=gamemisc  attributed-by=caller-vote  size=115 */

void __thiscall FUN_004e27b0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 <= (uint)(*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 3)) {
    return;
  }
  iVar2 = *(int *)((int)this + 4) - *(int *)this >> 3;
  if (0x1fffffffU - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar3 = iVar2 + param_1;
  uVar1 = *(int *)((int)this + 8) - *(int *)this >> 3;
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar3;
    }
    FUN_004e25e0(this,uVar1);
    return;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < uVar3) {
    uVar1 = uVar3;
  }
  FUN_004e25e0(this,uVar1);
  return;
}


/* FUN_004f3880 @ 004f3880  kind=gamemisc  attributed-by=caller-vote  size=31 */

uint * __thiscall FUN_004f3880(void *this,byte *param_1)

{
  *(uint *)this = (uint)*param_1;
  *(uint *)((int)this + 4) = (uint)param_1[1];
  *(uint *)((int)this + 8) = (uint)param_1[2];
  return this;
}


/* FUN_004f3940 @ 004f3940  kind=gamemisc  attributed-by=caller-vote  size=149 */

void __cdecl FUN_004f3940(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    iVar5 = param_1 + iVar4 * 0xc;
    if (*(int *)(iVar5 + 8) < *(int *)(iVar5 + -4)) {
      iVar4 = iVar3 * 2 + 1;
    }
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0xc);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    iVar3 = iVar4;
  }
  iVar5 = iVar3;
  if (iVar4 == param_3) {
    iVar4 = param_1 + param_3 * 0xc;
    iVar5 = param_3 + -1;
    puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar1 = *(undefined4 *)(iVar4 + -0xc);
    puVar1[1] = *(undefined4 *)(iVar4 + -8);
    puVar1[2] = *(undefined4 *)(iVar4 + -4);
  }
  FUN_004f5b40(param_1,iVar5,param_2,param_4);
  return;
}


/* FUN_004f39e0 @ 004f39e0  kind=gamemisc  attributed-by=caller-vote  size=147 */

void __cdecl FUN_004f39e0(int param_1,int param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar2 = *(float *)(param_1 + iVar4 * 0xc);
    pfVar1 = (float *)(param_1 + -0xc + iVar4 * 0xc);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar4 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar3 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -8 + param_3 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    iVar3 = param_3 + -1;
  }
  FUN_004f5bc0(param_1,iVar3,param_2,param_4);
  return;
}


/* FUN_004f3ba0 @ 004f3ba0  kind=gamemisc  attributed-by=caller-vote  size=70 */

int FUN_004f3ba0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004f7b60(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
    *(undefined4 *)(iVar1 + 0x14) = param_3[3];
    *(undefined4 *)(iVar1 + 0x18) = param_3[4];
    *(undefined4 *)(iVar1 + 0x1c) = param_3[5];
  }
  return iVar1;
}


/* FUN_004f3c60 @ 004f3c60  kind=gamemisc  attributed-by=caller-vote  size=518 */

void __thiscall
FUN_004f3c60(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x9249247 < *(uint *)((int)this + 4)) {
    operator_delete(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_004f3e41;
      }
LAB_004f3d98:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_004f3d98;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int *)(*(int *)this + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_004f3e41:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004f4080 @ 004f4080  kind=gamemisc  attributed-by=caller-vote  size=565 */

undefined4 * __thiscall
FUN_004f4080(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uStack_34;
  undefined4 local_24;
  int *local_20;
  void *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00555560;
  local_10 = ExceptionList;
  uStack_34 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_004f3c60(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    puVar3 = &uStack_34;
    if ((*param_3 < param_2[4]) ||
       ((local_14 = (undefined1 *)&uStack_34, *param_3 <= param_2[4] &&
        (local_14 = (undefined1 *)&uStack_34, puVar3 = &uStack_34, param_3[1] < param_2[5])))) {
LAB_004f4111:
      local_14 = (undefined1 *)puVar3;
      FUN_004f3c60(local_1c,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar5 = (undefined4 *)piVar1[2];
    if (((int)puVar5[4] < *param_3) ||
       ((local_14 = (undefined1 *)&uStack_34, (int)puVar5[4] <= *param_3 &&
        (local_14 = (undefined1 *)&uStack_34, (int)puVar5[5] < param_3[1])))) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004f3c60(this,param_1,'\0',puVar5,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    if ((*param_3 < param_2[4]) ||
       ((puVar3 = &uStack_34, *param_3 <= param_2[4] &&
        (puVar3 = &uStack_34, param_3[1] < param_2[5])))) {
      local_20 = param_2;
      FUN_004dad80((int *)&local_20);
      piVar2 = local_20;
      uVar4 = FUN_004ce3b0(local_20 + 4,param_3);
      puVar3 = (uint *)local_14;
      if ((char)uVar4 != '\0') {
        if (*(char *)(piVar2[2] + 0xd) != '\0') {
          FUN_004f3c60(local_1c,param_1,'\0',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_004f4111;
      }
    }
    local_14 = (undefined1 *)puVar3;
    uVar4 = FUN_004ce3b0(param_2 + 4,param_3);
    if ((char)uVar4 != '\0') {
      local_20 = param_2;
      FUN_00407a50((int *)&local_20);
      piVar2 = local_20;
      if ((local_20 == piVar1) || (uVar4 = FUN_004ce3b0(param_3,local_20 + 4), (char)uVar4 != '\0'))
      {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_004f3c60(local_1c,param_1,'\x01',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004f3c60(local_1c,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_004f4560(local_1c,&local_24,'\0',param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004f42d0 @ 004f42d0  kind=gamemisc  attributed-by=caller-vote  size=622 */

undefined4 * __thiscall
FUN_004f42d0(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uStack_34;
  undefined4 local_24;
  int *local_20;
  void *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00555580;
  local_10 = ExceptionList;
  uStack_34 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_004f3e70(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    iVar2 = param_2[4];
    iVar3 = *param_3;
    if ((iVar3 < iVar2) ||
       ((local_14 = (undefined1 *)&uStack_34, iVar3 <= iVar2 &&
        ((param_3[1] < param_2[5] ||
         (((local_14 = (undefined1 *)&uStack_34, iVar3 <= iVar2 &&
           (local_14 = (undefined1 *)&uStack_34, param_3[1] <= param_2[5])) &&
          (local_14 = (undefined1 *)&uStack_34, param_3[2] < param_2[6])))))))) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004f3e70(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar6 = (undefined4 *)piVar1[2];
    local_14 = (undefined1 *)&uStack_34;
    uVar5 = FUN_004f7ab0(puVar6 + 4,param_3);
    if ((char)uVar5 != '\0') {
      FUN_004f3e70(this,param_1,'\0',puVar6,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    uVar5 = FUN_004f7ab0(param_3,param_2 + 4);
    if ((char)uVar5 != '\0') {
      local_20 = param_2;
      FUN_004dad80((int *)&local_20);
      piVar4 = local_20;
      uVar5 = FUN_004f7ab0(local_20 + 4,param_3);
      if ((char)uVar5 != '\0') {
        if (*(char *)(piVar4[2] + 0xd) == '\0') {
          FUN_004f3e70(local_1c,param_1,'\x01',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004f3e70(local_1c,param_1,'\0',piVar4,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    uVar5 = FUN_004f7ab0(param_2 + 4,param_3);
    this = local_1c;
    if ((char)uVar5 != '\0') {
      local_20 = param_2;
      FUN_00407a50((int *)&local_20);
      piVar4 = local_20;
      if ((local_20 == piVar1) ||
         (uVar5 = FUN_004f7ab0(param_3,local_20 + 4), this = local_1c, (char)uVar5 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_004f3e70(local_1c,param_1,'\x01',piVar4,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004f3e70(local_1c,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar6 = (undefined4 *)FUN_004f46c0(this,&local_24,'\0',param_3,param_4);
  *param_1 = *puVar6;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004f4560 @ 004f4560  kind=gamemisc  attributed-by=caller-vote  size=318 */

void __thiscall FUN_004f4560(void *this,undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  bool local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_3;
  puStack_c = &LAB_005555a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_18 = true;
  piVar7 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    iVar2 = *param_3;
    piVar6 = (int *)piVar1[1];
    do {
      piVar7 = piVar6;
      iVar3 = piVar7[4];
      if (param_2 == '\0') {
        if ((iVar2 < iVar3) || ((iVar2 <= iVar3 && (param_3[1] < piVar7[5])))) {
          local_18 = true;
          goto LAB_004f4602;
        }
        local_18 = false;
LAB_004f45f8:
        piVar6 = (int *)piVar7[2];
      }
      else {
        if ((iVar3 < iVar2) || ((iVar3 <= iVar2 && (piVar7[5] < param_3[1])))) {
          local_18 = true;
        }
        else {
          local_18 = false;
        }
        local_18 = !local_18;
        if (!local_18) goto LAB_004f45f8;
LAB_004f4602:
        piVar6 = (int *)*piVar7;
      }
    } while (*(char *)((int)piVar6 + 0xd) == '\0');
  }
  _param_2 = piVar7;
  if (local_18) {
    if (piVar7 == (int *)*piVar1) {
      local_18 = true;
      goto LAB_004f4621;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar1 = _param_2;
  if ((*piVar4 <= _param_2[4]) && ((*piVar4 < _param_2[4] || (piVar4[1] <= _param_2[5])))) {
    operator_delete(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *unaff_FS_OFFSET = local_10;
    return;
  }
LAB_004f4621:
  puVar5 = (undefined4 *)FUN_004f3c60(this,(undefined4 *)&param_2,local_18,piVar7,piVar4,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  *unaff_FS_OFFSET = local_10;
  return;
}


/* FUN_004f46c0 @ 004f46c0  kind=gamemisc  attributed-by=caller-vote  size=382 */

void __thiscall FUN_004f46c0(void *this,undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  bool local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_3;
  puStack_c = &LAB_005555c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_18 = true;
  piVar7 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    iVar2 = *param_3;
    piVar6 = (int *)piVar1[1];
    do {
      piVar7 = piVar6;
      if (param_2 == '\0') {
        if (iVar2 < piVar7[4]) {
LAB_004f4786:
          local_18 = true;
          goto LAB_004f478b;
        }
        if (iVar2 <= piVar7[4]) {
          if ((param_3[1] < piVar7[5]) || ((param_3[1] <= piVar7[5] && (param_3[2] < piVar7[6]))))
          goto LAB_004f4786;
        }
        local_18 = false;
LAB_004f4781:
        piVar6 = (int *)piVar7[2];
      }
      else {
        iVar3 = piVar7[4];
        if ((iVar3 < iVar2) ||
           ((iVar3 <= iVar2 &&
            ((piVar7[5] < param_3[1] ||
             (((iVar3 <= iVar2 && (piVar7[5] <= param_3[1])) && (piVar7[6] < param_3[2])))))))) {
          local_18 = true;
        }
        else {
          local_18 = false;
        }
        local_18 = !local_18;
        if (!local_18) goto LAB_004f4781;
LAB_004f478b:
        piVar6 = (int *)*piVar7;
      }
    } while (*(char *)((int)piVar6 + 0xd) == '\0');
  }
  _param_2 = piVar7;
  if (local_18) {
    if (piVar7 == (int *)*piVar1) {
      local_18 = true;
      goto LAB_004f47aa;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar1 = _param_2;
  iVar2 = _param_2[4];
  iVar3 = *piVar4;
  if ((iVar3 <= iVar2) &&
     ((iVar3 < iVar2 ||
      ((piVar4[1] <= _param_2[5] &&
       (((iVar3 < iVar2 || (piVar4[1] < _param_2[5])) || (piVar4[2] <= _param_2[6])))))))) {
    operator_delete(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *unaff_FS_OFFSET = local_10;
    return;
  }
LAB_004f47aa:
  puVar5 = (undefined4 *)FUN_004f3e70(this,(undefined4 *)&param_2,local_18,piVar7,piVar4,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  *unaff_FS_OFFSET = local_10;
  return;
}


/* FUN_004f4940 @ 004f4940  kind=gamemisc  attributed-by=caller-vote  size=144 */

void __cdecl FUN_004f4940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = param_1;
  if (param_1 != param_2) {
    while (puVar5 = (undefined8 *)((int)puVar6 + 0xc), puVar5 != param_2) {
      iVar4 = *(int *)(puVar5 + 1);
      uVar3 = *puVar5;
      if (iVar4 < *(int *)(param_1 + 1)) {
        if (param_1 != puVar5) {
          puVar6 = puVar6 + 4;
          do {
            *(undefined4 *)((int)puVar6 + -0x14) = *(undefined4 *)(puVar6 + -4);
            *(undefined4 *)(puVar6 + -2) = *(undefined4 *)((int)puVar6 + -0x1c);
            *(undefined4 *)((int)puVar6 + -0xc) = *(undefined4 *)(puVar6 + -3);
            puVar1 = puVar6 + -4;
            puVar6 = (undefined8 *)((int)puVar6 + -0xc);
          } while (puVar1 != param_1);
        }
        *param_1 = uVar3;
        *(int *)(param_1 + 1) = iVar4;
        puVar6 = puVar5;
      }
      else {
        iVar2 = *(int *)(puVar6 + 1);
        puVar6 = puVar5;
        while (iVar4 < iVar2) {
          *(undefined4 *)puVar6 = *(undefined4 *)((int)puVar6 + -0xc);
          *(undefined4 *)((int)puVar6 + 4) = *(undefined4 *)(puVar6 + -1);
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((int)puVar6 + -4);
          iVar2 = *(int *)(puVar6 + -2);
          puVar6 = (undefined8 *)((int)puVar6 + -0xc);
        }
        *puVar6 = uVar3;
        *(int *)(puVar6 + 1) = iVar4;
        puVar6 = puVar5;
      }
    }
  }
  return;
}


/* FUN_004f49d0 @ 004f49d0  kind=gamemisc  attributed-by=caller-vote  size=138 */

void __cdecl FUN_004f49d0(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  
  uVar7 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  pfVar6 = param_1;
  if (param_1 != param_2) {
    while (pfVar6 = pfVar6 + 3, pfVar6 != param_2) {
      fVar2 = *pfVar6;
      uVar5 = *(undefined8 *)(pfVar6 + 1);
      uVar4 = *(undefined8 *)(pfVar6 + 1);
      if (fVar2 < *param_1 || fVar2 == *param_1) {
        fVar3 = pfVar6[-3];
        pfVar8 = pfVar6;
        while (fVar3 < fVar2) {
          *pfVar8 = fVar3;
          pfVar8[1] = pfVar8[-2];
          pfVar8[2] = pfVar8[-1];
          fVar3 = pfVar8[-6];
          pfVar8 = pfVar8 + -3;
        }
        *pfVar8 = fVar2;
        *(undefined8 *)(pfVar8 + 1) = uVar5;
      }
      else {
        if (param_1 != pfVar6) {
          pfVar8 = pfVar6 + 4;
          do {
            pfVar8[-4] = pfVar8[-7];
            pfVar8[-3] = pfVar8[-6];
            pfVar8[-2] = pfVar8[-5];
            pfVar1 = pfVar8 + -7;
            pfVar8 = pfVar8 + -3;
          } while (pfVar1 != param_1);
        }
        *param_1 = fVar2;
        *(undefined8 *)(param_1 + 1) = uVar4;
      }
    }
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f4cb0 @ 004f4cb0  kind=gamemisc  attributed-by=caller-vote  size=273 */

void __cdecl FUN_004f4cb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar4 = (param_2 - param_1) / 0xc;
  iVar9 = iVar4 / 2;
  if (0 < iVar9) {
    iVar7 = iVar9 * 2 + 2;
    iVar5 = param_1 + iVar9 * 0xc;
    do {
      local_14 = *(undefined8 *)(iVar5 + -0xc);
      local_c = *(undefined4 *)(iVar5 + -4);
      iVar7 = iVar7 + -2;
      iVar9 = iVar9 + -1;
      iVar1 = iVar7;
      iVar8 = iVar9;
      while (iVar6 = iVar1, iVar6 < iVar4) {
        iVar1 = param_1 + iVar6 * 0xc;
        if (*(int *)(iVar1 + 8) < *(int *)(iVar1 + -4)) {
          iVar6 = iVar6 + -1;
        }
        puVar2 = (undefined4 *)(param_1 + iVar6 * 0xc);
        puVar3 = (undefined4 *)(param_1 + iVar8 * 0xc);
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        iVar8 = iVar6;
        iVar1 = iVar6 * 2 + 2;
      }
      if (iVar6 == iVar4) {
        iVar1 = param_1 + iVar4 * 0xc;
        puVar2 = (undefined4 *)(param_1 + iVar8 * 0xc);
        *puVar2 = *(undefined4 *)(iVar1 + -0xc);
        puVar2[1] = *(undefined4 *)(iVar1 + -8);
        puVar2[2] = *(undefined4 *)(iVar1 + -4);
        iVar8 = iVar4 + -1;
      }
      FUN_004f5b40(param_1,iVar8,iVar9,(undefined4 *)&local_14);
      iVar5 = iVar5 + -0xc;
    } while (0 < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f4dd0 @ 004f4dd0  kind=gamemisc  attributed-by=caller-vote  size=345 */

void __cdecl FUN_004f4dd0(int param_1,int param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar7 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar5 = (param_2 - param_1) / 0xc;
  iVar12 = iVar5 / 2;
  if (0 < iVar12) {
    iVar10 = iVar12 * 2 + 2;
    iVar8 = param_1 + iVar12 * 0xc + 8;
    do {
      puVar1 = (undefined8 *)(iVar8 + -0x10);
      fVar3 = *(float *)(iVar8 + -0x14);
      iVar8 = iVar8 + -0xc;
      uVar6 = *puVar1;
      iVar10 = iVar10 + -2;
      iVar12 = iVar12 + -1;
      iVar11 = iVar10;
      iVar9 = iVar12;
      while (iVar13 = iVar11, iVar13 < iVar5) {
        fVar4 = *(float *)(param_1 + iVar13 * 0xc);
        pfVar2 = (float *)(param_1 + -0xc + iVar13 * 0xc);
        if (*pfVar2 <= fVar4 && fVar4 != *pfVar2) {
          iVar13 = iVar13 + -1;
        }
        *(undefined4 *)(param_1 + iVar9 * 0xc) = *(undefined4 *)(param_1 + iVar13 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar13 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar13 * 0xc);
        iVar9 = iVar13;
        iVar11 = iVar13 * 2 + 2;
      }
      if (iVar13 == iVar5) {
        *(undefined4 *)(param_1 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -0xc + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -8 + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -4 + iVar5 * 0xc);
        iVar9 = iVar5 + -1;
      }
      while (iVar12 < iVar9) {
        iVar11 = (iVar9 + -1) / 2;
        fVar4 = *(float *)(param_1 + iVar11 * 0xc);
        if (fVar4 <= fVar3) break;
        *(float *)(param_1 + iVar9 * 0xc) = fVar4;
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar11 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar11 * 0xc);
        iVar9 = iVar11;
      }
      *(float *)(param_1 + iVar9 * 0xc) = fVar3;
      *(undefined8 *)(param_1 + 4 + iVar9 * 0xc) = uVar6;
    } while (0 < iVar12);
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f5050 @ 004f5050  kind=gamemisc  attributed-by=caller-vote  size=143 */

void __cdecl FUN_004f5050(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = param_2[2];
  if (iVar1 < (int)param_1[2]) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = iVar1;
  }
  iVar1 = param_3[2];
  if (iVar1 < (int)param_2[2]) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = iVar1;
    if (iVar1 < (int)param_1[2]) {
      uVar3 = param_2[1];
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1[2] = iVar1;
    }
  }
  return;
}


/* FUN_004f5500 @ 004f5500  kind=gamemisc  attributed-by=caller-vote  size=167 */

void __cdecl FUN_004f5500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004f5050(param_1,param_1 + iVar1 * 3,param_1 + iVar1 * 6);
    FUN_004f5050(param_2 + iVar1 * -3,param_2,param_2 + iVar1 * 3);
    FUN_004f5050(param_3 + iVar1 * -6,param_3 + iVar1 * -3,param_3);
    FUN_004f5050(param_1 + iVar1 * 3,param_2,param_3 + iVar1 * -3);
    return;
  }
  FUN_004f5050(param_1,param_2,param_3);
  return;
}


/* FUN_004f55b0 @ 004f55b0  kind=gamemisc  attributed-by=caller-vote  size=899 */

void __cdecl FUN_004f55b0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  
  fVar1 = *param_1;
  iVar5 = ((int)param_3 - (int)param_1) / 0xc;
  if (iVar5 < 0x29) {
    fVar2 = *param_2;
    if (fVar1 < fVar2) {
      fVar3 = param_2[1];
      fVar4 = param_2[2];
      *param_2 = fVar1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = fVar2;
      param_1[1] = fVar3;
      param_1[2] = fVar4;
    }
    fVar1 = *param_3;
    if (*param_2 < fVar1) {
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (*param_1 < fVar1) {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        param_2[2] = param_1[2];
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
      }
    }
  }
  else {
    iVar5 = iVar5 + 1;
    iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
    fVar2 = param_1[iVar5 * 3];
    if (fVar1 < fVar2) {
      fVar3 = param_1[iVar5 * 3 + 2];
      fVar4 = param_1[iVar5 * 3 + 1];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = param_1[1];
      param_1[iVar5 * 3 + 2] = param_1[2];
      *param_1 = fVar2;
      param_1[2] = fVar3;
      param_1[1] = fVar4;
    }
    fVar1 = param_1[iVar5 * 6];
    if (param_1[iVar5 * 3] < fVar1) {
      fVar2 = param_1[iVar5 * 6 + 1];
      fVar3 = param_1[iVar5 * 6 + 2];
      param_1[iVar5 * 6] = param_1[iVar5 * 3];
      param_1[iVar5 * 6 + 1] = param_1[iVar5 * 3 + 1];
      param_1[iVar5 * 6 + 2] = param_1[iVar5 * 3 + 2];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = fVar2;
      param_1[iVar5 * 3 + 2] = fVar3;
      fVar1 = param_1[iVar5 * 3];
      if (*param_1 < fVar1) {
        param_1[iVar5 * 3] = *param_1;
        param_1[iVar5 * 3 + 1] = param_1[1];
        param_1[iVar5 * 3 + 2] = param_1[2];
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
      }
    }
    fVar1 = *param_2;
    pfVar6 = param_2 + iVar5 * -3;
    if (*pfVar6 < fVar1) {
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      *param_2 = *pfVar6;
      param_2[1] = pfVar6[1];
      param_2[2] = pfVar6[2];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
    }
    fVar1 = param_2[iVar5 * 3];
    if (*param_2 < fVar1) {
      fVar2 = param_2[iVar5 * 3 + 1];
      fVar3 = param_2[iVar5 * 3 + 2];
      param_2[iVar5 * 3] = *param_2;
      param_2[iVar5 * 3 + 1] = param_2[1];
      param_2[iVar5 * 3 + 2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (*pfVar6 < fVar1) {
        *param_2 = *pfVar6;
        param_2[1] = pfVar6[1];
        param_2[2] = pfVar6[2];
        *pfVar6 = fVar1;
        pfVar6[1] = fVar2;
        pfVar6[2] = fVar3;
      }
    }
    pfVar7 = param_3 + iVar5 * -6;
    pfVar6 = param_3 + iVar5 * -3;
    fVar1 = *pfVar6;
    if (*pfVar7 < fVar1) {
      fVar2 = pfVar6[2];
      fVar3 = pfVar6[1];
      *pfVar6 = *pfVar7;
      pfVar6[1] = pfVar7[1];
      pfVar6[2] = pfVar7[2];
      *pfVar7 = fVar1;
      pfVar7[2] = fVar2;
      pfVar7[1] = fVar3;
    }
    fVar1 = *param_3;
    if (*pfVar6 < fVar1) {
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      *param_3 = *pfVar6;
      param_3[1] = pfVar6[1];
      param_3[2] = pfVar6[2];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
      fVar1 = *pfVar6;
      if (*pfVar7 < fVar1) {
        fVar2 = pfVar6[1];
        *pfVar6 = *pfVar7;
        pfVar6[1] = pfVar7[1];
        pfVar6[2] = pfVar7[2];
        *pfVar7 = fVar1;
        pfVar7[1] = fVar2;
        pfVar7[2] = fVar3;
      }
    }
    fVar1 = *param_2;
    if (param_1[iVar5 * 3] < fVar1) {
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      *param_2 = param_1[iVar5 * 3];
      param_2[1] = param_1[iVar5 * 3 + 1];
      param_2[2] = param_1[iVar5 * 3 + 2];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = fVar2;
      param_1[iVar5 * 3 + 2] = fVar3;
    }
    fVar1 = *pfVar6;
    if (*param_2 < fVar1) {
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      *pfVar6 = *param_2;
      pfVar6[1] = param_2[1];
      pfVar6[2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (param_1[iVar5 * 3] < fVar1) {
        *param_2 = param_1[iVar5 * 3];
        param_2[1] = param_1[iVar5 * 3 + 1];
        param_2[2] = param_1[iVar5 * 3 + 2];
        param_1[iVar5 * 3] = fVar1;
        param_1[iVar5 * 3 + 1] = fVar2;
        param_1[iVar5 * 3 + 2] = fVar3;
        return;
      }
    }
  }
  return;
}


/* FUN_004f5b40 @ 004f5b40  kind=gamemisc  attributed-by=caller-vote  size=114 */

void __cdecl FUN_004f5b40(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  while (param_3 < param_2) {
    iVar3 = (param_2 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
    if ((int)param_4[2] <= (int)puVar1[2]) break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    param_2 = iVar3;
  }
  puVar1 = (undefined4 *)(param_1 + param_2 * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  return;
}


/* FUN_004f5bc0 @ 004f5bc0  kind=gamemisc  attributed-by=caller-vote  size=113 */

void __cdecl FUN_004f5bc0(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    fVar1 = *(float *)(param_1 + iVar2 * 0xc);
    if (fVar1 < *param_4 || fVar1 == *param_4) break;
    *(float *)(param_1 + param_2 * 0xc) = fVar1;
    *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar2 * 0xc);
    param_2 = iVar2;
  }
  *(float *)(param_1 + param_2 * 0xc) = *param_4;
  *(float *)(param_1 + 4 + param_2 * 0xc) = param_4[1];
  *(float *)(param_1 + 8 + param_2 * 0xc) = param_4[2];
  return;
}


/* FUN_004f5e00 @ 004f5e00  kind=gamemisc  attributed-by=caller-vote  size=310 */

void __cdecl FUN_004f5e00(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_c [2];
  
  iVar3 = (int)param_2 - (int)param_1;
  do {
    iVar3 = iVar3 / 0xc;
    if (iVar3 < 0x21) {
LAB_004f5ed8:
      if (1 < iVar3) {
        FUN_004f4940((undefined8 *)param_1,(undefined8 *)param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar3) {
        if (1 < ((int)param_2 - (int)param_1) / 0xc) {
          FUN_004f4cb0((int)param_1,(int)param_2);
        }
        FUN_004f6280(param_1,param_2);
        return;
      }
      goto LAB_004f5ed8;
    }
    puVar2 = (undefined4 *)FUN_004f67f0(local_c,param_1,param_2);
    piVar4 = (int *)*puVar2;
    piVar1 = (int *)puVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)piVar4 - (int)param_1) / 0xc < ((int)param_2 - (int)piVar1) / 0xc) {
      FUN_004f5e00(param_1,piVar4,param_3,param_4);
      param_1 = piVar1;
      piVar4 = param_2;
    }
    else {
      FUN_004f5e00(piVar1,param_2,param_3,param_4);
    }
    iVar3 = (int)piVar4 - (int)param_1;
    param_2 = piVar4;
  } while( true );
}


/* FUN_004f5f40 @ 004f5f40  kind=gamemisc  attributed-by=caller-vote  size=310 */

void __cdecl FUN_004f5f40(float *param_1,float *param_2,int param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  undefined4 local_c [2];
  
  iVar3 = (int)param_2 - (int)param_1;
  do {
    iVar3 = iVar3 / 0xc;
    if (iVar3 < 0x21) {
LAB_004f6018:
      if (1 < iVar3) {
        FUN_004f49d0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar3) {
        if (1 < ((int)param_2 - (int)param_1) / 0xc) {
          FUN_004f4dd0((int)param_1,(int)param_2);
        }
        FUN_004f6330(param_1,(int)param_2);
        return;
      }
      goto LAB_004f6018;
    }
    puVar2 = (undefined4 *)FUN_004f6a60(local_c,param_1,param_2);
    pfVar4 = (float *)*puVar2;
    pfVar1 = (float *)puVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)pfVar4 - (int)param_1) / 0xc < ((int)param_2 - (int)pfVar1) / 0xc) {
      FUN_004f5f40(param_1,pfVar4,param_3,param_4);
      param_1 = pfVar1;
      pfVar4 = param_2;
    }
    else {
      FUN_004f5f40(pfVar1,param_2,param_3,param_4);
    }
    iVar3 = (int)pfVar4 - (int)param_1;
    param_2 = pfVar4;
  } while( true );
}


/* FUN_004f6280 @ 004f6280  kind=gamemisc  attributed-by=caller-vote  size=163 */

void __cdecl FUN_004f6280(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = (int)param_2 - (int)param_1;
  while (1 < iVar1 / 0xc) {
    local_c = param_2[-1];
    local_14 = *(undefined8 *)(param_2 + -3);
    puVar2 = param_2 + -3;
    *puVar2 = *param_1;
    param_2[-2] = param_1[1];
    param_2[-1] = param_1[2];
    FUN_004f3940((int)param_1,0,(iVar1 + -0xc) / 0xc,(undefined4 *)&local_14);
    param_2 = puVar2;
    iVar1 = (int)puVar2 - (int)param_1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f6330 @ 004f6330  kind=gamemisc  attributed-by=caller-vote  size=192 */

void __cdecl FUN_004f6330(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (1 < (param_2 - (int)param_1) / 0xc) {
    puVar1 = (undefined4 *)(param_2 + -8);
    do {
      local_10 = *puVar1;
      local_14 = (float)puVar1[-1];
      local_c = puVar1[1];
      puVar1[-1] = *param_1;
      *puVar1 = param_1[1];
      puVar1[1] = param_1[2];
      FUN_004f39e0((int)param_1,0,((-4 - (int)param_1) + (int)puVar1) / 0xc,&local_14);
      puVar1 = puVar1 + -3;
    } while (1 < ((8 - (int)param_1) + (int)puVar1) / 0xc);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f67f0 @ 004f67f0  kind=gamemisc  attributed-by=caller-vote  size=616 */

void __cdecl FUN_004f67f0(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_24;
  int *local_20;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_20 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_004f5500(param_2,local_20,param_3 + -3);
  piVar4 = local_20 + 3;
  for (; param_2 < local_20; local_20 = local_20 + -3) {
    if ((local_20[-1] < local_20[2]) || (local_20[2] < local_20[-1])) break;
  }
  local_24 = piVar4;
  piVar2 = piVar4;
  piVar7 = local_20;
  if (piVar4 < param_3) {
    do {
      local_24 = piVar4;
      piVar2 = piVar4;
      if ((piVar4[2] < local_20[2]) || (local_20[2] < piVar4[2])) break;
      piVar4 = piVar4 + 3;
      local_24 = piVar4;
      piVar2 = piVar4;
    } while (piVar4 < param_3);
  }
joined_r0x004f6892:
  do {
    if (param_3 <= piVar4) {
LAB_004f68d9:
      if (param_2 < local_20) {
        piVar5 = local_20 + -1;
        piVar6 = piVar7;
        do {
          piVar7 = piVar6;
          piVar4 = local_24;
          if (piVar6[2] <= *piVar5) {
            if (piVar6[2] < *piVar5) break;
            local_c = piVar6[-1];
            local_14 = *(undefined8 *)(piVar6 + -3);
            piVar7 = piVar6 + -3;
            *piVar7 = piVar5[-2];
            piVar6[-2] = piVar5[-1];
            piVar6[-1] = *piVar5;
            iVar3 = 0;
            do {
              *(undefined4 *)((int)piVar5 + iVar3 + -8) = *(undefined4 *)((int)&local_14 + iVar3);
              iVar3 = iVar3 + 4;
            } while (iVar3 < 8);
            *piVar5 = local_c;
          }
          local_20 = local_20 + -3;
          piVar5 = piVar5 + -3;
          piVar6 = piVar7;
        } while (param_2 < local_20);
      }
      if (local_20 == param_2) {
        if (piVar4 == param_3) {
          *param_1 = piVar7;
          param_1[1] = piVar2;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (piVar2 != piVar4) {
          uVar1 = *(undefined8 *)piVar7;
          iVar3 = piVar7[2];
          *piVar7 = *piVar2;
          piVar7[1] = piVar2[1];
          piVar7[2] = piVar2[2];
          *(undefined8 *)piVar2 = uVar1;
          piVar2[2] = iVar3;
        }
        uVar1 = *(undefined8 *)piVar7;
        iVar3 = piVar7[2];
        *piVar7 = *piVar4;
        piVar7[1] = piVar4[1];
        piVar7[2] = piVar4[2];
        *(undefined8 *)piVar4 = uVar1;
        piVar4[2] = iVar3;
        piVar4 = piVar4 + 3;
        local_24 = piVar4;
        piVar2 = piVar2 + 3;
        piVar7 = piVar7 + 3;
      }
      else {
        piVar5 = local_20 + -3;
        if (piVar4 == param_3) {
          piVar6 = piVar7 + -3;
          if (piVar5 != piVar6) {
            uVar1 = *(undefined8 *)piVar5;
            iVar3 = local_20[-1];
            *piVar5 = *piVar6;
            local_20[-2] = piVar7[-2];
            local_20[-1] = piVar7[-1];
            *(undefined8 *)piVar6 = uVar1;
            piVar7[-1] = iVar3;
          }
          uVar1 = *(undefined8 *)piVar6;
          iVar3 = piVar7[-1];
          *piVar6 = piVar2[-3];
          piVar7[-2] = piVar2[-2];
          piVar7[-1] = piVar2[-1];
          *(undefined8 *)(piVar2 + -3) = uVar1;
          piVar2[-1] = iVar3;
          piVar2 = piVar2 + -3;
          local_20 = piVar5;
          piVar7 = piVar6;
        }
        else {
          uVar1 = *(undefined8 *)piVar4;
          iVar3 = piVar4[2];
          *piVar4 = *piVar5;
          piVar4[1] = local_20[-2];
          piVar4[2] = local_20[-1];
          *(undefined8 *)piVar5 = uVar1;
          local_20[-1] = iVar3;
          piVar4 = piVar4 + 3;
          local_24 = piVar4;
          local_20 = piVar5;
        }
      }
      goto joined_r0x004f6892;
    }
    piVar5 = piVar2;
    if (piVar4[2] <= piVar7[2]) {
      local_24 = piVar4;
      if (piVar4[2] < piVar7[2]) goto LAB_004f68d9;
      piVar5 = piVar2 + 3;
      uVar1 = *(undefined8 *)piVar2;
      iVar3 = piVar2[2];
      *piVar2 = *piVar4;
      piVar2[1] = piVar4[1];
      piVar2[2] = piVar4[2];
      *(undefined8 *)piVar4 = uVar1;
      piVar4[2] = iVar3;
    }
    piVar4 = piVar4 + 3;
    local_24 = piVar4;
    piVar2 = piVar5;
  } while( true );
}


/* FUN_004f6a60 @ 004f6a60  kind=gamemisc  attributed-by=caller-vote  size=170 */

void __cdecl FUN_004f6a60(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *local_64;
  
  uVar5 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_64 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_004f55b0(param_2,local_64,param_3 + -3);
  pfVar6 = local_64 + 3;
  for (; param_2 < local_64; local_64 = local_64 + -3) {
    if ((*local_64 < local_64[-3]) || (local_64[-3] < *local_64)) break;
  }
  pfVar4 = pfVar6;
  pfVar9 = local_64;
  if (pfVar6 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)pfVar6)) / 0xc) {
      fVar1 = *local_64;
      do {
        pfVar4 = pfVar6;
        if ((fVar1 < *pfVar6) || (*pfVar6 < fVar1)) goto joined_r0x004f6b93;
        if ((fVar1 < pfVar6[3]) || (pfVar6[3] < fVar1)) {
          pfVar6 = pfVar6 + 3;
          pfVar4 = pfVar6;
          goto joined_r0x004f6b93;
        }
        if ((fVar1 < pfVar6[6]) || (pfVar6[6] < fVar1)) {
          pfVar6 = pfVar6 + 6;
          pfVar4 = pfVar6;
          goto joined_r0x004f6b93;
        }
        if ((fVar1 < pfVar6[9]) || (pfVar6[9] < fVar1)) {
          pfVar6 = pfVar6 + 9;
          pfVar4 = pfVar6;
          goto joined_r0x004f6b93;
        }
        pfVar6 = pfVar6 + 0xc;
      } while ((int)pfVar6 < (int)(param_3 + -9));
    }
    pfVar4 = pfVar6;
    if (pfVar6 < param_3) {
      do {
        pfVar4 = pfVar6;
        if ((*local_64 < *pfVar6) || (*pfVar6 < *local_64)) break;
        pfVar6 = pfVar6 + 3;
        pfVar4 = pfVar6;
      } while (pfVar6 < param_3);
    }
  }
joined_r0x004f6b93:
  do {
    if (param_3 <= pfVar4) {
joined_r0x004f6be9:
      for (; param_2 < local_64; local_64 = local_64 + -3) {
        fVar1 = local_64[-3];
        pfVar7 = pfVar9;
        if (fVar1 <= *pfVar9) {
          if (fVar1 < *pfVar9) break;
          fVar2 = pfVar9[-3];
          pfVar7 = pfVar9 + -3;
          uVar3 = *(undefined8 *)(pfVar9 + -2);
          *pfVar7 = fVar1;
          pfVar9[-2] = local_64[-2];
          pfVar9[-1] = local_64[-1];
          local_64[-3] = fVar2;
          *(undefined8 *)(local_64 + -2) = uVar3;
        }
        pfVar9 = pfVar7;
      }
      if (local_64 == param_2) {
        if (pfVar4 == param_3) {
          *param_1 = pfVar9;
          param_1[1] = pfVar6;
          __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (pfVar6 != pfVar4) {
          fVar1 = *pfVar9;
          uVar3 = *(undefined8 *)(pfVar9 + 1);
          *pfVar9 = *pfVar6;
          pfVar9[1] = pfVar6[1];
          pfVar9[2] = pfVar6[2];
          *pfVar6 = fVar1;
          *(undefined8 *)(pfVar6 + 1) = uVar3;
        }
        fVar1 = *pfVar9;
        uVar3 = *(undefined8 *)(pfVar9 + 1);
        *pfVar9 = *pfVar4;
        pfVar9[1] = pfVar4[1];
        pfVar9[2] = pfVar4[2];
        *pfVar4 = fVar1;
        *(undefined8 *)(pfVar4 + 1) = uVar3;
        pfVar6 = pfVar6 + 3;
        pfVar4 = pfVar4 + 3;
        pfVar9 = pfVar9 + 3;
      }
      else {
        pfVar7 = local_64 + -3;
        if (pfVar4 == param_3) {
          pfVar10 = pfVar9 + -3;
          if (pfVar7 != pfVar10) {
            fVar1 = *pfVar7;
            uVar3 = *(undefined8 *)(local_64 + -2);
            *pfVar7 = *pfVar10;
            local_64[-2] = pfVar9[-2];
            local_64[-1] = pfVar9[-1];
            *pfVar10 = fVar1;
            *(undefined8 *)(pfVar9 + -2) = uVar3;
          }
          fVar1 = *pfVar10;
          uVar3 = *(undefined8 *)(pfVar9 + -2);
          pfVar8 = pfVar6 + -3;
          *pfVar10 = *pfVar8;
          pfVar9[-2] = pfVar6[-2];
          pfVar9[-1] = pfVar6[-1];
          *pfVar8 = fVar1;
          *(undefined8 *)(pfVar6 + -2) = uVar3;
          pfVar6 = pfVar8;
          local_64 = pfVar7;
          pfVar9 = pfVar10;
        }
        else {
          fVar1 = *pfVar4;
          uVar3 = *(undefined8 *)(pfVar4 + 1);
          *pfVar4 = *pfVar7;
          pfVar4[1] = local_64[-2];
          pfVar4[2] = local_64[-1];
          *pfVar7 = fVar1;
          *(undefined8 *)(local_64 + -2) = uVar3;
          pfVar4 = pfVar4 + 3;
          local_64 = pfVar7;
        }
      }
      goto joined_r0x004f6b93;
    }
    fVar1 = *pfVar4;
    pfVar7 = pfVar6;
    if (*pfVar9 <= fVar1) {
      if (*pfVar9 < fVar1) goto joined_r0x004f6be9;
      pfVar7 = pfVar6 + 3;
      fVar2 = *pfVar6;
      uVar3 = *(undefined8 *)(pfVar6 + 1);
      *pfVar6 = fVar1;
      pfVar6[1] = pfVar4[1];
      pfVar6[2] = pfVar4[2];
      *pfVar4 = fVar2;
      *(undefined8 *)(pfVar4 + 1) = uVar3;
    }
    pfVar6 = pfVar7;
    pfVar4 = pfVar4 + 3;
  } while( true );
}


/* FUN_004f70f0 @ 004f70f0  kind=gamemisc  attributed-by=caller-vote  size=61 */

void * __cdecl FUN_004f70f0(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_004f7400(param_3,param_1);
    }
    param_1 = param_1 + 0x50;
    param_3 = (void *)((int)param_3 + 0x140);
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004f72d0 @ 004f72d0  kind=gamemisc  attributed-by=caller-vote  size=23 */

void __cdecl FUN_004f72d0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = *param_3;
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}


/* FUN_004f72f0 @ 004f72f0  kind=gamemisc  attributed-by=caller-vote  size=31 */

void __cdecl FUN_004f72f0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return;
}


/* FUN_004f7350 @ 004f7350  kind=gamemisc  attributed-by=caller-vote  size=32 */

void __thiscall
FUN_004f7350(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return;
}


/* FUN_004f7620 @ 004f7620  kind=gamemisc  attributed-by=caller-vote  size=52 */

undefined4 * __thiscall FUN_004f7620(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = *param_2;
  *(undefined4 *)((int)this + 0x10) = param_2[1];
  *(undefined4 *)((int)this + 0x14) = param_2[2];
  return this;
}


/* FUN_004f7660 @ 004f7660  kind=gamemisc  attributed-by=caller-vote  size=166 */

undefined4 * __fastcall FUN_004f7660(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return param_1;
}


/* FUN_004f77a0 @ 004f77a0  kind=gamemisc  attributed-by=caller-vote  size=77 */

void __fastcall FUN_004f77a0(undefined4 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* FUN_004f7890 @ 004f7890  kind=gamemisc  attributed-by=caller-vote  size=120 */

int * __thiscall FUN_004f7890(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  piVar1 = FUN_004f7c60(this,param_1);
  if (piVar1 != *(int **)this) {
    if ((piVar1[4] <= *piVar2) && ((piVar1[4] < *piVar2 || (piVar1[5] <= piVar2[1])))) {
      return piVar1 + 6;
    }
  }
  local_10 = *piVar2;
  local_c = piVar2[1];
  local_8 = 0;
  piVar2 = FUN_004f3b20(this,&local_10);
  FUN_004f4080(this,&param_1,piVar1,piVar2 + 4,piVar2);
  return param_1 + 6;
}


/* FUN_004f7910 @ 004f7910  kind=gamemisc  attributed-by=caller-vote  size=146 */

int * __thiscall FUN_004f7910(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  piVar3 = FUN_004f7ca0(this,param_1);
  if (piVar3 != *(int **)this) {
    iVar1 = *piVar4;
    iVar2 = piVar3[4];
    if ((iVar2 <= iVar1) &&
       ((iVar2 < iVar1 ||
        ((piVar3[5] <= piVar4[1] &&
         (((iVar2 < iVar1 || (piVar3[5] < piVar4[1])) || (piVar3[6] <= piVar4[2])))))))) {
      return piVar3 + 7;
    }
  }
  local_14 = *piVar4;
  local_10 = piVar4[1];
  local_c = piVar4[2];
  local_8 = 0;
  piVar4 = FUN_004f3b60(this,&local_14);
  FUN_004f42d0(this,&param_1,piVar3,piVar4 + 4,piVar4);
  return param_1 + 7;
}


/* FUN_004f79d0 @ 004f79d0  kind=gamemisc  attributed-by=caller-vote  size=19 */

void __thiscall FUN_004f79d0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 4;
  return;
}


/* FUN_004f7ab0 @ 004f7ab0  kind=gamemisc  attributed-by=caller-vote  size=67 */

uint FUN_004f7ab0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if ((iVar2 <= iVar1) &&
     ((iVar2 < iVar1 ||
      ((in_EAX = param_1[1], param_2[1] <= (int)in_EAX &&
       (((iVar2 < iVar1 || (in_EAX = param_2[1], (int)in_EAX < param_1[1])) ||
        (in_EAX = param_1[2], param_2[2] <= (int)in_EAX)))))))) {
    return in_EAX & 0xffffff00;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


/* FUN_004f7c60 @ 004f7c60  kind=gamemisc  attributed-by=caller-vote  size=63 */

undefined4 * __thiscall FUN_004f7c60(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (((int)puVar1[4] < *param_1) ||
         (((int)puVar1[4] <= *param_1 && ((int)puVar1[5] < param_1[1])))) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  return puVar3;
}


/* FUN_004f7ca0 @ 004f7ca0  kind=gamemisc  attributed-by=caller-vote  size=85 */

undefined4 * __thiscall FUN_004f7ca0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)this;
  if (*(char *)((int)puVar5[1] + 0xd) == '\0') {
    iVar1 = *param_1;
    puVar3 = (undefined4 *)puVar5[1];
    do {
      iVar2 = puVar3[4];
      if ((iVar2 < iVar1) ||
         ((iVar2 <= iVar1 &&
          (((int)puVar3[5] < param_1[1] ||
           (((iVar2 <= iVar1 && ((int)puVar3[5] <= param_1[1])) && ((int)puVar3[6] < param_1[2])))))
          ))) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return puVar5;
}


/* FUN_004f7df0 @ 004f7df0  kind=gamemisc  attributed-by=caller-vote  size=225 */

void __thiscall FUN_004f7df0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00555670;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xaaaaaab) {
      pvVar3 = operator_new(param_1 * 0x18);
      if (pvVar3 != (void *)0x0) goto LAB_004f7e4f;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004f7e4f:
  local_8 = 0;
  FUN_004f7130(*(int **)this,*(int **)((int)this + 4),pvVar3);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    FUN_004f3bf0(*(undefined4 **)this,*(undefined4 **)((int)this + 4));
    operator_delete(*(void **)this);
  }
  *(void **)this = pvVar3;
  *(void **)((int)this + 8) = (void *)((int)pvVar3 + param_1 * 0x18);
  *(void **)((int)this + 4) = (void *)((int)pvVar3 + ((iVar1 - iVar2) / 0x18) * 0x18);
  ExceptionList = local_10;
  return;
}


/* FUN_004f8180 @ 004f8180  kind=gamemisc  attributed-by=caller-vote  size=162 */

void __thiscall FUN_004f8180(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x18)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (0xaaaaaaaU - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  uVar3 = iVar1 + param_1;
  if (0xaaaaaaa - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_004f7df0(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_004f7df0(this,uVar2);
  return;
}


/* FUN_0050d260 @ 0050d260  kind=gamemisc  attributed-by=caller-vote  size=1642 */

void __thiscall FUN_0050d260(void *this,int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  vfunction1 *pvVar5;
  int iVar6;
  int *piVar7;
  CombatBehavior_vftable *pCVar8;
  CombatBehavior_vftable *pCVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  Spawn *pSVar14;
  char *pcVar15;
  SequentialBehavior *pSVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  CombatBehavior *this_00;
  undefined8 uVar24;
  int local_14c [2];
  CombatBehavior_vftable local_144;
  int local_13c;
  CombatBehavior *local_138;
  CombatBehavior *local_134;
  SequentialBehavior *local_130;
  undefined1 local_12c [280];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00555a8a;
  local_10 = ExceptionList;
  uVar11 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_13c = param_1;
  local_144.vfunction2 = this;
  local_14 = uVar11;
  if (*(int *)((int)this + 0xa4) != 0) {
    iVar20 = *(int *)(param_1 + 0xa0);
    this_00 = (CombatBehavior *)(param_1 + 0x18);
    local_134 = this_00;
    if (iVar20 < *(int *)(param_1 + 0x1c) - (int)this_00->vftablePtr >> 2) {
      piVar1 = (int *)((int)this + 4);
      do {
        FUN_00530600(piVar1,(int *)&local_130,
                     (uint *)((&this_00->vftablePtr->vfunction1)[iVar20] + 0x48));
        if ((local_130 != (SequentialBehavior *)*piVar1) &&
           (local_130[2].vftablePtr != (SequentialBehavior_vftable *)0x0)) {
          (**(code **)(local_130[2].vftablePtr)->vfunction1)(1,uVar11);
          puVar12 = (undefined4 *)
                    FUN_00426b80(piVar1,local_14c,
                                 (uint *)((&this_00->vftablePtr->vfunction1)[iVar20] + 0x48));
          FUN_004fc060(piVar1,&local_138,(int *)*puVar12,(int *)puVar12[1]);
        }
        pvVar5 = (&this_00->vftablePtr->vfunction1)[iVar20];
        if (pvVar5 != (vfunction1 *)0x0) {
          (*(code *)**(undefined4 **)pvVar5)(1);
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < *(int *)(param_1 + 0x1c) - (int)this_00->vftablePtr >> 2);
    }
    FUN_0045f080(this_00,*(uint *)(local_13c + 0xa0));
    iVar20 = 0;
    piVar1 = *(int **)(local_144.vfunction2 + 4);
    piVar13 = (int *)*piVar1;
    if (piVar13 != piVar1) {
      iVar23 = 0;
      do {
        iVar6 = piVar13[6];
        if ((iVar6 != 0) && (*(char *)(iVar6 + 0x60) == '\0')) {
          if ((iVar23 == 0) || (iVar19 = *(int *)(iVar6 + 400), iVar19 < iVar23)) {
            iVar19 = *(int *)(iVar6 + 400);
            iVar23 = iVar19;
          }
          if ((iVar20 == 0) || (iVar20 < iVar19)) {
            iVar20 = iVar19;
          }
        }
        if (*(char *)((int)piVar13 + 0xd) == '\0') {
          piVar7 = (int *)piVar13[2];
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            cVar3 = *(char *)(*piVar7 + 0xd);
            piVar13 = piVar7;
            piVar7 = (int *)*piVar7;
            while (cVar3 == '\0') {
              cVar3 = *(char *)(*piVar7 + 0xd);
              piVar13 = piVar7;
              piVar7 = (int *)*piVar7;
            }
          }
          else {
            cVar3 = *(char *)(piVar13[1] + 0xd);
            piVar10 = (int *)piVar13[1];
            piVar7 = piVar13;
            while ((piVar13 = piVar10, cVar3 == '\0' && (piVar7 == (int *)piVar13[2]))) {
              cVar3 = *(char *)(piVar13[1] + 0xd);
              piVar10 = (int *)piVar13[1];
              piVar7 = piVar13;
            }
          }
        }
        this_00 = local_134;
      } while (piVar13 != piVar1);
    }
    uVar11 = (int)((*(int *)(local_13c + 100) >> 0x1f & 7U) + *(int *)(local_13c + 100)) >> 3;
    uVar21 = (int)((*(int *)(local_13c + 0x60) >> 0x1f & 7U) + *(int *)(local_13c + 0x60)) >> 3;
    if ((((-1 < (int)uVar21) && (-1 < (int)uVar11)) && ((int)uVar21 < 0x2000)) &&
       ((int)uVar11 < 0x2000)) {
      local_134 = (CombatBehavior *)((int)(uVar11 * 8 + ((int)(uVar11 * 8) >> 0x1f & 0x3fU)) >> 6);
      iVar20 = (int)(uVar21 * 8 + ((int)(uVar21 * 8) >> 0x1f & 0x3fU)) >> 6;
      if (((-1 < iVar20) && (-1 < (int)local_134)) &&
         ((iVar20 < 0x400 &&
          (((int)local_134 < 0x400 &&
           (*(int *)(local_144.vfunction2 + (int)((int)local_134 + iVar20 * 0x400) * 4 + 0xbc) != 0)
           ))))) {
        uVar21 = uVar21 & 0x80000007;
        if ((int)uVar21 < 0) {
          uVar21 = (uVar21 - 1 | 0xfffffff8) + 1;
        }
        uVar11 = uVar11 & 0x80000007;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
        }
        local_130 = (SequentialBehavior *)
                    ((uVar11 + uVar21 * 8) * 0x68 + 0x14018 +
                    *(int *)(local_144.vfunction2 +
                            (int)((int)local_134 + iVar20 * 0x400) * 4 + 0xbc));
        if ((local_130 != (SequentialBehavior *)0x0) &&
           (local_130[7].vftablePtr != (SequentialBehavior_vftable *)0x0)) {
          iVar20 = 0;
          pSVar16 = local_130 + 8;
          do {
            if (pSVar16->vftablePtr !=
                *(SequentialBehavior_vftable **)((local_13c - (int)local_130) + (int)pSVar16))
            goto LAB_0050d89e;
            iVar20 = iVar20 + 1;
            pSVar16 = (SequentialBehavior *)&pSVar16->SequentialBehavior_data;
          } while (iVar20 < 2);
          pSVar14 = operator_new(0x10f0);
          if (pSVar14 == (Spawn *)0x0) {
            pSVar14 = (Spawn *)0x0;
          }
          else {
            pSVar14 = cube::Spawn::Spawn(pSVar14);
          }
          (pSVar14->Spawn_data).offset_0x24 = 1;
          if (local_130[4].SequentialBehavior_data.offset_0x0 == (undefined4 *)0x1) {
            puVar2 = &(pSVar14->Spawn_data).field_0x76;
            *(ushort *)puVar2 = *(ushort *)puVar2 | 0x2000;
          }
          uVar11 = *(int *)(local_13c + 100) * 0x100 + 0x80;
          uVar21 = *(int *)(local_13c + 0x60) * 0x100 + 0x80;
          uVar22 = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
          *(uint *)&(pSVar14->Spawn_data).field_0xc = uVar21 * 0x10000;
          *(uint *)&(pSVar14->Spawn_data).field_0x10 =
               ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
          *(uint *)&(pSVar14->Spawn_data).field_0x14 = uVar11 * 0x10000;
          *(uint *)&(pSVar14->Spawn_data).field_0x18 = uVar22;
          *(undefined4 *)&(pSVar14->Spawn_data).field_0x1c = 0;
          *(undefined4 *)&(pSVar14->Spawn_data).field_0x20 = 0;
          iVar20 = local_13c;
          local_144.vfunction1 = (vfunction1 *)pSVar14;
          uVar24 = __alldiv(uVar11 * 0x10000,uVar22,0x10000,0);
          uVar11 = (uint)uVar24;
          uVar24 = __alldiv(*(uint *)&(pSVar14->Spawn_data).field_0xc,
                            *(uint *)&(pSVar14->Spawn_data).field_0x10,0x10000,0);
          iVar20 = FUN_00406100(local_144.vfunction2,(uint)uVar24,uVar11,iVar20);
          uVar11 = *(int *)(iVar20 + 0x1c) + *(int *)(iVar20 + 0x10);
          *(uint *)&(pSVar14->Spawn_data).field_0x1c = uVar11 * 0x10000;
          *(uint *)&(pSVar14->Spawn_data).field_0x20 =
               ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
          (pSVar14->Spawn_data).offset_0x28 = local_130[7].vftablePtr;
          (pSVar14->Spawn_data).offset_0x30 = local_130[7].SequentialBehavior_data.offset_0x0;
          bVar4 = (byte)local_130[7].SequentialBehavior_data.offset_0x4;
          (pSVar14->Spawn_data).offset_0x54 = bVar4;
          uVar11 = bVar4 + 1;
          iVar20 = rand();
          if (iVar20 % 0x14 == 0) {
            uVar11 = bVar4 + 2;
          }
          iVar20 = rand();
          if (iVar20 % 100 == 0) {
            uVar11 = uVar11 + 1;
          }
          iVar20 = -1;
          if (4 < uVar11) {
            uVar11 = 4;
          }
          pcVar15 = (char *)FUN_0052c4e0(local_12c,(short)(pSVar14->Spawn_data).offset_0x30,
                                         (char)uVar11,-1);
          FUN_00427000(&(pSVar14->Spawn_data).offset_0xf68,pcVar15,iVar20);
          uVar11 = (uint)(byte)(pSVar14->Spawn_data).offset_0x54;
          uVar21 = uVar11 + 1;
          iVar20 = rand();
          if (iVar20 % 100 == 0) {
            uVar21 = uVar11 + 2;
          }
          iVar20 = rand();
          if (iVar20 % 1000 == 0) {
            uVar21 = uVar21 + 1;
          }
          iVar20 = -1;
          if (4 < uVar21) {
            uVar21 = 4;
          }
          pcVar15 = (char *)FUN_00528bf0(local_12c,(short)(pSVar14->Spawn_data).offset_0x30,
                                         (char)uVar21,-1);
          FUN_00427000(&(pSVar14->Spawn_data).offset_0xf68,pcVar15,iVar20);
          local_138 = operator_new(0xc);
          local_8 = 0;
          if (local_138 == (CombatBehavior *)0x0) {
            local_130 = (SequentialBehavior *)0x0;
          }
          else {
            local_130 = cube::SequentialBehavior::SequentialBehavior
                                  ((SequentialBehavior *)local_138);
          }
          pSVar16 = local_130;
          local_8 = 0xffffffff;
          local_138 = operator_new(0x14);
          local_8 = 1;
          if (local_138 == (CombatBehavior *)0x0) {
            local_134 = (CombatBehavior *)0x0;
          }
          else {
            local_134 = cube::CombatBehavior::CombatBehavior(local_138,0x41a00000);
          }
          local_138 = (CombatBehavior *)(pSVar16->SequentialBehavior_data).offset_0x0;
          local_8 = 0xffffffff;
          iVar23 = FUN_0052dfb0((undefined4 *)local_138,
                                (undefined4 *)(local_138->CombatBehavior_data).offset_0x0,&local_134
                               );
          iVar20 = (pSVar16->SequentialBehavior_data).offset_0x4;
          if (iVar20 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          (pSVar16->SequentialBehavior_data).offset_0x4 = iVar20 + 1;
          (local_138->CombatBehavior_data).offset_0x0 = iVar23;
          **(int **)(iVar23 + 4) = iVar23;
          local_138 = operator_new(8);
          local_8 = 2;
          if (local_138 == (CombatBehavior *)0x0) {
            local_138 = (CombatBehavior *)0x0;
          }
          else {
            local_138 = (CombatBehavior *)
                        cube::RandomWalkBehavior::RandomWalkBehavior
                                  ((RandomWalkBehavior *)local_138);
          }
          local_134 = (CombatBehavior *)(pSVar16->SequentialBehavior_data).offset_0x0;
          local_8 = 0xffffffff;
          iVar23 = FUN_0052dfb0((undefined4 *)local_134,
                                (undefined4 *)(local_134->CombatBehavior_data).offset_0x0,&local_138
                               );
          iVar20 = (pSVar16->SequentialBehavior_data).offset_0x4;
          if (iVar20 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          (pSVar16->SequentialBehavior_data).offset_0x4 = iVar20 + 1;
          (local_134->CombatBehavior_data).offset_0x0 = iVar23;
          **(int **)(iVar23 + 4) = iVar23;
          *(SequentialBehavior **)&pSVar14[1].Spawn_data.field_0x120 = local_130;
          FUN_0040a840(&(pSVar14->Spawn_data).offset_0x28,(int)&(pSVar14->Spawn_data).offset_0x70,
                       (undefined4 *)0x0);
          FUN_004fb480((int)pSVar14,0);
          uVar11 = *(uint *)(local_13c + 100);
          uVar21 = *(uint *)(local_13c + 0x60);
          uVar17 = uVar11 * 0x10000 + uVar21;
          iVar20 = (this_00->CombatBehavior_data).offset_0x0 - (int)this_00->vftablePtr;
          uVar22 = iVar20 >> 2;
          uVar18 = uVar17 * 0x100;
          (pSVar14->Spawn_data).offset_0x44 = uVar18 + uVar22;
          (pSVar14->Spawn_data).offset_0x48 =
               (((((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10) + ((int)uVar21 >> 0x1f) +
                (uint)CARRY4(uVar11 * 0x10000,uVar21)) * 0x100 | uVar17 >> 0x18) + (iVar20 >> 0x1f)
               + (uint)CARRY4(uVar18,uVar22);
          pCVar8 = (CombatBehavior_vftable *)(this_00->CombatBehavior_data).offset_0x0;
          if (&local_144 < pCVar8) {
            pCVar9 = this_00->vftablePtr;
            if (pCVar9 <= &local_144) {
              if (pCVar8 == (CombatBehavior_vftable *)(this_00->CombatBehavior_data).offset_0x4) {
                FUN_00426eb0(this_00,1);
              }
              puVar12 = (undefined4 *)(this_00->CombatBehavior_data).offset_0x0;
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = (&this_00->vftablePtr->vfunction1)[(int)&local_144 - (int)pCVar9 >> 2];
              }
              (this_00->CombatBehavior_data).offset_0x0 =
                   (this_00->CombatBehavior_data).offset_0x0 + 4;
              goto LAB_0050d8ac;
            }
          }
          if (pCVar8 == (CombatBehavior_vftable *)(this_00->CombatBehavior_data).offset_0x4) {
            FUN_00426eb0(this_00,1);
          }
          puVar12 = (undefined4 *)(this_00->CombatBehavior_data).offset_0x0;
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = pSVar14;
          }
          (this_00->CombatBehavior_data).offset_0x0 = (this_00->CombatBehavior_data).offset_0x0 + 4;
          goto LAB_0050d8ac;
        }
      }
    }
LAB_0050d89e:
    FUN_00509e40(local_144.vfunction2,local_13c,0);
  }
LAB_0050d8ac:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005285c0 @ 005285c0  kind=gamemisc  attributed-by=caller-vote  size=213 */

void __thiscall FUN_005285c0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005560b2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)((int)this + 4);
  if ((param_1 < piVar1) && (piVar2 = *(int **)this, piVar2 <= param_1)) {
    if (piVar1 == *(int **)((int)this + 8)) {
      FUN_004f8180(this,1);
    }
    this_00 = *(void **)((int)this + 4);
    param_1 = (int *)(*(int *)this + (((int)param_1 - (int)piVar2) / 0x18) * 0x18);
    local_8 = 0;
    if (this_00 == (void *)0x0) goto LAB_0052867d;
    FUN_004daa80(this_00,param_1);
    local_8 = CONCAT31(local_8._1_3_,1);
  }
  else {
    if (piVar1 == *(int **)((int)this + 8)) {
      FUN_004f8180(this,1);
    }
    this_00 = *(void **)((int)this + 4);
    local_8 = 2;
    if (this_00 == (void *)0x0) goto LAB_0052867d;
    FUN_004daa80(this_00,param_1);
    local_8 = CONCAT31(local_8._1_3_,3);
  }
  FUN_004daa80((void *)((int)this_00 + 0xc),param_1 + 3);
LAB_0052867d:
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  ExceptionList = local_10;
  return;
}


/* FUN_00528730 @ 00528730  kind=gamemisc  attributed-by=caller-vote  size=115 */

void __thiscall FUN_00528730(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e27b0(this,1);
    }
    puVar3 = *(undefined4 **)((int)this + 4);
    puVar1 = (undefined4 *)(*(int *)this + ((int)param_1 - (int)puVar2 >> 3) * 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e27b0(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return;
}


/* FUN_005290d0 @ 005290d0  kind=gamemisc  attributed-by=caller-vote  size=5775 */

/* WARNING: Type propagation algorithm not settling */

void * __thiscall
FUN_005290d0(void *this,float param_1,float param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void **ppvVar4;
  float10 fVar5;
  float10 fVar6;
  void **local_90;
  void **local_8c;
  void **local_88;
  float local_84;
  float local_80;
  void *local_7c;
  void *local_78;
  void *local_74;
  void *local_70;
  void *local_6c;
  void *local_68;
  void *local_64;
  void *local_60;
  void *local_5c;
  void *local_58;
  void *local_54;
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_44 [2];
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c [2];
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14 [4];
  
  local_14[3] = (void *)0xffffffff;
  local_14[2] = &LAB_0055611b;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  fVar5 = (float10)FUN_004f8b40(this,(int)param_1,(int)param_2);
  local_80 = (float)fVar5;
  fVar5 = (float10)FUN_004f8570(this,param_1,(uint)param_2);
  local_84 = (float)fVar5;
  fVar5 = (float10)FUN_00522e20(this,(int)param_1,(int)param_2);
  fVar6 = (float10)FUN_00523d80((uint)param_1,param_2,0.0);
  local_90 = (void **)0x0;
  local_8c = (void **)0x0;
  local_88 = (void **)0x0;
  local_14[3] = (void *)0x0;
  if (param_3 < 0) {
    param_4 = 0x91;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x92;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x93;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x96;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x98;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x99;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x9b;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x9a;
    FUN_004f2be0(&local_90,&param_4);
  }
  else if ((char)param_4 == '\0') {
    if ((float)fVar5 <= 0.1) {
      FUN_00426eb0(&local_90,1);
      if (local_8c != (void **)0x0) {
        *local_8c = (void *)0x15;
      }
      local_8c = local_8c + 1;
      local_2c[0] = (void *)0x2e;
      if ((local_2c < local_8c) && (local_90 <= local_2c)) {
        iVar3 = (int)local_2c - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x2e;
        }
      }
      local_8c = local_8c + 1;
      if (0.3 < (float)fVar6) {
        local_30 = (void *)0x2f;
        if ((&local_30 < local_8c) && (local_90 <= &local_30)) {
          iVar3 = (int)&local_30 - (int)local_90;
          if (local_8c == local_88) {
            FUN_00426eb0(&local_90,1);
          }
          if (local_8c != (void **)0x0) {
            *local_8c = local_90[iVar3 >> 2];
          }
        }
        else {
          if (local_8c == local_88) {
            FUN_00426eb0(&local_90,1);
          }
          if (local_8c != (void **)0x0) {
            *local_8c = (void *)0x2f;
          }
        }
        local_8c = local_8c + 1;
      }
      if (3 < param_3) {
        if ((local_80 < 0.2) || (0.8 <= local_80)) {
          if ((local_80 < 0.8) || (0.2 <= local_84)) {
            if ((local_80 < 0.6) || (local_84 < 0.6)) {
              if (0.2 <= local_80) goto LAB_0052a6f4;
              param_4 = 0x1c;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x38;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x41;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x5a;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x5d;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x15;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x31;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x16;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x17;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x23;
            }
            else {
              param_4 = 0x36;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x59;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x4b;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x4a;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x47;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x40;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x44;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x3c;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x3a;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x43;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x53;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x54;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x19;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x66;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x68;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x69;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x58;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x3e;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x24;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x32;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x16;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x17;
            }
          }
          else {
            param_4 = 0x36;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x3d;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x48;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x2a;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x49;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x42;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x53;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x54;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x66;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x67;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x58;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x3e;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x24;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 99;
          }
        }
        else {
          local_44[0] = (void *)0x36;
          if ((local_44 < local_8c) && (local_90 <= local_44)) {
            iVar3 = (int)local_44 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x36;
            }
          }
          local_8c = local_8c + 1;
          local_48 = (void *)0x4a;
          if ((&local_48 < local_8c) && (local_90 <= &local_48)) {
            iVar3 = (int)&local_48 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x4a;
            }
          }
          local_8c = local_8c + 1;
          local_4c = (void *)0x1c;
          if ((&local_4c < local_8c) && (local_90 <= &local_4c)) {
            iVar3 = (int)&local_4c - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x1c;
            }
          }
          local_8c = local_8c + 1;
          local_50 = (void *)0x38;
          if ((&local_50 < local_8c) && (local_90 <= &local_50)) {
            iVar3 = (int)&local_50 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x38;
            }
          }
          local_8c = local_8c + 1;
          local_54 = (void *)0x19;
          if ((&local_54 < local_8c) && (local_90 <= &local_54)) {
            iVar3 = (int)&local_54 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x19;
            }
          }
          local_8c = local_8c + 1;
          local_58 = (void *)0x35;
          if ((&local_58 < local_8c) && (local_90 <= &local_58)) {
            iVar3 = (int)&local_58 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x35;
            }
          }
          local_8c = local_8c + 1;
          local_5c = (void *)0x37;
          if ((&local_5c < local_8c) && (local_90 <= &local_5c)) {
            iVar3 = (int)&local_5c - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x37;
            }
          }
          local_8c = local_8c + 1;
          local_60 = (void *)0x3c;
          if ((&local_60 < local_8c) && (local_90 <= &local_60)) {
            iVar3 = (int)&local_60 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x3c;
            }
          }
          local_8c = local_8c + 1;
          local_64 = (void *)0x3f;
          if ((&local_64 < local_8c) && (local_90 <= &local_64)) {
            iVar3 = (int)&local_64 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x3f;
            }
          }
          local_8c = local_8c + 1;
          local_68 = (void *)0x43;
          if ((&local_68 < local_8c) && (local_90 <= &local_68)) {
            iVar3 = (int)&local_68 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x43;
            }
          }
          local_8c = local_8c + 1;
          local_6c = (void *)0x45;
          if ((&local_6c < local_8c) && (local_90 <= &local_6c)) {
            iVar3 = (int)&local_6c - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x45;
            }
          }
          local_8c = local_8c + 1;
          local_70 = (void *)0x46;
          if ((&local_70 < local_8c) && (local_90 <= &local_70)) {
            iVar3 = (int)&local_70 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x46;
            }
          }
          local_8c = local_8c + 1;
          local_74 = (void *)0x47;
          if ((&local_74 < local_8c) && (local_90 <= &local_74)) {
            iVar3 = (int)&local_74 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x47;
            }
          }
          local_8c = local_8c + 1;
          local_78 = (void *)0x57;
          if ((&local_78 < local_8c) && (local_90 <= &local_78)) {
            iVar3 = (int)&local_78 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x57;
            }
          }
          local_8c = local_8c + 1;
          local_7c = (void *)0x58;
          if ((&local_7c < local_8c) && (local_90 <= &local_7c)) {
            iVar3 = (int)&local_7c - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x58;
            }
          }
          local_8c = local_8c + 1;
          param_4 = 100;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x5a;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x5b;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x5c;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x23;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x66;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x68;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x69;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x22;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x21;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x1e;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x1f;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x20;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x13;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x14;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x1a;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x1b;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x62;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x16;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x17;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x97;
        }
        FUN_004f2be0(&local_90,&param_4);
        goto LAB_0052a6f4;
      }
      local_34 = (void *)0x6a;
      if ((&local_34 < local_8c) && (local_90 <= &local_34)) {
        iVar3 = (int)&local_34 - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x6a;
        }
      }
      local_8c = local_8c + 1;
      local_38 = (void *)0x39;
      if ((&local_38 < local_8c) && (local_90 <= &local_38)) {
        iVar3 = (int)&local_38 - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x39;
        }
      }
      local_8c = local_8c + 1;
      local_3c = (void *)0x56;
      if ((&local_3c < local_8c) && (local_90 <= &local_3c)) {
        iVar3 = (int)&local_3c - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x56;
        }
      }
      local_8c = local_8c + 1;
      ppvVar4 = local_44 + 1;
      local_44[1] = (void *)0x19;
      if ((local_8c <= ppvVar4) || (ppvVar4 < local_90)) {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x19;
        }
        local_8c = local_8c + 1;
        goto LAB_0052a6f4;
      }
    }
    else {
      FUN_00426eb0(&local_90,1);
      if (local_8c != (void **)0x0) {
        *local_8c = (void *)0x49;
      }
      local_8c = local_8c + 1;
      local_14[0] = (void *)0x52;
      if ((local_14 < local_8c) && (local_90 <= local_14)) {
        iVar3 = (int)local_14 - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x52;
        }
      }
      local_8c = local_8c + 1;
      local_18 = (void *)0x55;
      if ((&local_18 < local_8c) && (local_90 <= &local_18)) {
        iVar3 = (int)&local_18 - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x55;
        }
      }
      local_8c = local_8c + 1;
      local_1c = (void *)0x70;
      if ((&local_1c < local_8c) && (local_90 <= &local_1c)) {
        iVar3 = (int)&local_1c - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x70;
        }
      }
      local_8c = local_8c + 1;
      local_20 = (void *)0x67;
      if ((&local_20 < local_8c) && (local_90 <= &local_20)) {
        iVar3 = (int)&local_20 - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x67;
        }
      }
      local_8c = local_8c + 1;
      local_24 = (void *)0x3e;
      if ((&local_24 < local_8c) && (local_90 <= &local_24)) {
        iVar3 = (int)&local_24 - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x3e;
        }
      }
      local_8c = local_8c + 1;
      ppvVar4 = local_2c + 1;
      local_2c[1] = (void *)0x6e;
      if ((local_8c <= ppvVar4) || (ppvVar4 < local_90)) {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x6e;
        }
        local_8c = local_8c + 1;
        goto LAB_0052a6f4;
      }
    }
    iVar3 = (int)ppvVar4 - (int)local_90;
    if (local_8c == local_88) {
      FUN_00426eb0(&local_90,1);
    }
    if (local_8c != (void **)0x0) {
      *local_8c = local_90[iVar3 >> 2];
    }
    local_8c = local_8c + 1;
  }
  else {
    param_4 = 2;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 4;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 7;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 9;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0xb;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0xf;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x33;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x30;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x4c;
    FUN_004f2be0(&local_90,&param_4);
  }
LAB_0052a6f4:
  if (local_90 == local_8c) {
    pvVar2 = (void *)0x3c;
  }
  else {
    iVar3 = (int)local_8c - (int)local_90;
    uVar1 = rand();
    pvVar2 = local_90[uVar1 % (uint)(iVar3 >> 2)];
  }
  local_14[3] = (void *)0xffffffff;
  if (local_90 != (void **)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_90);
    operator_delete(local_90);
  }
  ExceptionList = local_14[1];
  return pvVar2;
}


/* FUN_0052bfa0 @ 0052bfa0  kind=gamemisc  attributed-by=caller-vote  size=311 */

uint FUN_0052bfa0(void)

{
  uint uVar1;
  uint in_stack_00000010;
  
  switch(in_stack_00000010) {
  case 0:
  case 1:
    uVar1 = rand();
    in_stack_00000010 = uVar1 & 0x80000001;
    if ((int)in_stack_00000010 < 0) {
      return (in_stack_00000010 - 1 | 0xfffffffe) + 1;
    }
    break;
  case 2:
  case 3:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 2;
  case 4:
  case 5:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 4;
  default:
    break;
  case 7:
  case 8:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 7;
  case 9:
  case 10:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 9;
  case 0xb:
  case 0xc:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0xb;
  case 0xd:
  case 0xe:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0xd;
  case 0xf:
  case 0x10:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0xf;
  case 0x16:
  case 0x17:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0x16;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    return uVar1 + 0x25;
  case 0x53:
  case 0x54:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0x53;
  }
  return in_stack_00000010;
}


/* FUN_0052df80 @ 0052df80  kind=gamemisc  attributed-by=caller-vote  size=44 */

undefined4 * __thiscall FUN_0052df80(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0052ed60(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
  }
  return puVar1;
}


/* FUN_0052ebf0 @ 0052ebf0  kind=gamemisc  attributed-by=caller-vote  size=18 */

void __thiscall FUN_0052ebf0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return;
}


/* FUN_0052ed60 @ 0052ed60  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * __fastcall FUN_0052ed60(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}


/* FUN_00530550 @ 00530550  kind=gamemisc  attributed-by=caller-vote  size=14 */

void __thiscall FUN_00530550(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)this;
  return;
}


/* FUN_00549300 @ 00549300  kind=gamemisc  attributed-by=caller-vote  size=40 */

void FUN_00549300(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00426a30(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
  }
  return;
}


/* FUN_00549330 @ 00549330  kind=gamemisc  attributed-by=caller-vote  size=264 */

basic_istream<char,std::char_traits<char>_> * __thiscall
FUN_00549330(void *this,char *param_1,uint param_2,int *param_3,int param_4)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0055668d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    *(undefined ***)this = &PTR_0055b4f8;
    *(code **)((int)this + 0x70) = _vftable__exref;
    *(code **)((int)this + 0x70) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x10);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00,false);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ifstream<char,std::char_traits<char>_> */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)((int)this + *(int *)(*(int *)this + 4))
       = &std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x70;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  local_8._0_1_ = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x55) = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this_00);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x58) = DAT_00583e00;
  *(undefined4 *)((int)this + 0x50) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  pbVar1 = FUN_0042f890(this_00,param_1,param_2 | 1,param_3);
  if (pbVar1 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*(int *)this + 4) + (int)this),2
               ,false);
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_00549440 @ 00549440  kind=gamemisc  attributed-by=caller-vote  size=264 */

basic_ostream<char,std::char_traits<char>_> * __thiscall
FUN_00549440(void *this,char *param_1,uint param_2,int *param_3,int param_4)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005566ed;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    *(undefined ***)this = &PTR_0055b510;
    *(code **)((int)this + 0x60) = _vftable__exref;
    *(code **)((int)this + 0x60) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 4);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00,false);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ofstream<char,std::char_traits<char>_> */
  *(basic_ofstream<char,std::char_traits<char>_>_vftable **)((int)this + *(int *)(*(int *)this + 4))
       = &std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x60;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  local_8._0_1_ = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x49) = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this_00);
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = DAT_00583e00;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  pbVar1 = FUN_0042f890(this_00,param_1,param_2 | 2,param_3);
  if (pbVar1 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*(int *)this + 4) + (int)this),2
               ,false);
  }
  ExceptionList = local_10;
  return this;
}


/* Facet_Register @ 0054a710  kind=gamemisc  attributed-by=caller-vote  size=40 */

/* Library Function - Multiple Matches With Same Base Name
    private: static void __cdecl std::locale::facet::_Facet_Register(class std::locale::facet *)
    void __cdecl std::_Facet_Register(class std::_Facet_base *)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cdecl Facet_Register(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = DAT_005842f4;
    puVar1[1] = param_1;
  }
  DAT_005842f4 = puVar1;
  return;
}


/* __ArrayUnwind @ 0054ae25  kind=gamemisc  attributed-by=caller-vote  size=50 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Library: Visual Studio 2012 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}


