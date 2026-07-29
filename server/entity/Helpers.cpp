// Helpers (entity) -- server. 29 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers.h"

/* FUN_00401140 @ 00401140  kind=gamemisc  attributed-by=caller-vote  size=558 */

undefined4 * __thiscall FUN_00401140(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0x86c) = 0;
  *(undefined4 *)((int)this + 0x870) = 0;
  *(undefined4 *)((int)this + 0x874) = 0;
  *(undefined1 *)((int)this + 0x878) = 0;
  *(undefined4 *)((int)this + 0x880) = 0;
  *(undefined4 *)((int)this + 0x884) = 0;
  *(undefined4 *)((int)this + 0x888) = 0;
  *(undefined4 *)((int)this + 0x88c) = 0;
  return this;
}


/* FUN_00407020 @ 00407020  kind=gamemisc  attributed-by=caller-vote  size=634 */

undefined4 * __fastcall FUN_00407020(undefined4 *param_1)

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
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 3;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_00406970(param_1 + 0x1a);
  *(undefined2 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x47] = 0xfffff448;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x57] = 0x43fa0000;
  param_1[0x5a] = 0x42c80000;
  param_1[0x5b] = 0x3f800000;
  param_1[0x5c] = 0x3f800000;
  param_1[0x5d] = 0x3f800000;
  param_1[0x5e] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[0x60] = 1;
  param_1[0x67] = 0xffffffff;
  param_1[0x6a] = 0;
  param_1[0x68] = 0xffffffff;
  param_1[0x69] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0x75] = 0;
  param_1[0x73] = 0xffffffff;
  param_1[0x74] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined2 *)(param_1 + 0x79) = 0;
  *(undefined1 *)((int)param_1 + 0x1e6) = 0;
  *(undefined2 *)(param_1 + 0x7a) = 1;
  param_1[0xbb] = 0;
  memset(param_1 + 0x7b,0,0x100);
  FUN_00406ad0((undefined2 *)(param_1 + 0xbc));
  param_1[0x455] = 0;
  *(undefined8 *)(param_1 + 0x456) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  memset(param_1 + 0x44a,0,0x2c);
  return param_1;
}


/* FUN_004076a0 @ 004076a0  kind=gamemisc  attributed-by=caller-vote  size=132 */

void __fastcall FUN_004076a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int local_8;
  
  local_8 = param_1;
  if (0xf < *(uint *)(param_1 + 0x3c)) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xf;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_00409e60((void *)(param_1 + 0x1c),&local_8,(int *)**(int **)(param_1 + 0x1c),
               *(int **)(param_1 + 0x1c));
  operator_delete(*(void **)(param_1 + 0x1c));
  piVar1 = *(int **)(param_1 + 0x14);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(param_1 + 0x14) + 4) = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (piVar2 != *(int **)(param_1 + 0x14)) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x14));
  }
  operator_delete(*(void **)(param_1 + 0x14));
  return;
}


/* FUN_00407ad0 @ 00407ad0  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_00407ad0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x34);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407ade. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_00407b60 @ 00407b60  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_00407b60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x134);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = puVar1;
      param_2 = puVar1;
    }
    *puVar1 = param_1;
    if (puVar1 + 1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_00407c20 @ 00407c20  kind=gamemisc  attributed-by=caller-vote  size=90 */

void FUN_00407c20(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_00407c20((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (0xf < (uint)param_1[10]) {
      operator_delete((void *)param_1[5]);
    }
    param_1[10] = 0xf;
    param_1[9] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}


/* FUN_00409e60 @ 00409e60  kind=gamemisc  attributed-by=caller-vote  size=189 */

undefined4 * __thiscall FUN_00409e60(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_8;
  
  piVar2 = *(int **)this;
  local_8 = this;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_00407c20((int *)piVar2[1]);
    *(int *)(*(int *)this + 4) = *(int *)this;
    *(undefined4 *)*(undefined4 *)this = *(undefined4 *)this;
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = **(undefined4 **)this;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_00409f20(this,&local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_00409f20 @ 00409f20  kind=gamemisc  attributed-by=caller-vote  size=678 */

void __thiscall FUN_00409f20(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar2 = param_2;
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_00407a50((int *)&param_2);
  piVar5 = (int *)*piVar2;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar2[2] + 0xd) == '\0') && (piVar7 = (int *)param_2[2], param_2 != piVar2)) {
      piVar5[1] = (int)param_2;
      *param_2 = *piVar2;
      piVar5 = param_2;
      if (param_2 != (int *)piVar2[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0xd) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = piVar2[2];
        *(int **)(piVar2[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)this + 4) == piVar2) {
        *(int **)(*(int *)this + 4) = param_2;
      }
      else {
        piVar6 = (int *)piVar2[1];
        if ((int *)*piVar6 == piVar2) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = piVar2[1];
      iVar1 = param_2[3];
      *(char *)(param_2 + 3) = (char)piVar2[3];
      *(char *)(piVar2 + 3) = (char)iVar1;
      goto LAB_0040a04c;
    }
  }
  else {
    piVar7 = (int *)piVar2[2];
  }
  piVar5 = (int *)piVar2[1];
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)this + 4) == piVar2) {
    *(int **)(*(int *)this + 4) = piVar7;
  }
  else if ((int *)*piVar5 == piVar2) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)this;
  if ((int *)*piVar6 == piVar2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      piVar3 = FUN_0042d440(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)this;
  if (*(int **)(iVar1 + 8) == piVar2) {
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      iVar4 = FUN_0042d420((int)piVar7);
      *(int *)(iVar1 + 8) = iVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_0040a04c:
  if ((char)piVar2[3] == '\x01') {
    if (piVar7 != *(int **)(*(int *)this + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[3] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar6 + 3) = 0;
            FUN_004ce780(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042d460(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar6[3];
              *(undefined1 *)(piVar6 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004ce780(this,(int)piVar6);
              *(undefined1 *)(piVar7 + 3) = 1;
              goto LAB_0040a17e;
            }
LAB_0040a120:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar6 + 3) = 0;
            FUN_0042d460(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_0040a120;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004ce780(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 3) = (char)piVar6[3];
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042d460(this,piVar6);
            *(undefined1 *)(piVar7 + 3) = 1;
            goto LAB_0040a17e;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)this + 4));
    }
    *(undefined1 *)(piVar7 + 3) = 1;
  }
LAB_0040a17e:
  if (0xf < (uint)piVar2[10]) {
    operator_delete((void *)piVar2[5]);
  }
  piVar2[10] = 0xf;
  piVar2[9] = 0;
  *(undefined1 *)(piVar2 + 5) = 0;
  operator_delete(piVar2);
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = param_2;
  return;
}


/* FUN_0040a430 @ 0040a430  kind=gamemisc  attributed-by=caller-vote  size=189 */

undefined4 * __thiscall FUN_0040a430(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_8;
  
  piVar2 = *(int **)this;
  local_8 = this;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_00402ed0((int *)piVar2[1]);
    *(int *)(*(int *)this + 4) = *(int *)this;
    *(undefined4 *)*(undefined4 *)this = *(undefined4 *)this;
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = **(undefined4 **)this;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_0040a4f0(this,&local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_00413070 @ 00413070  kind=gamemisc  attributed-by=caller-vote  size=191 */

uint __thiscall FUN_00413070(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *_Src;
  size_t sVar6;
  
  puVar1 = param_2;
  *param_2 = 0;
  *param_3 = 0;
  do {
    puVar3 = (undefined *)
             FUN_00468e30(*(int *)((int)this + 4),"SELECT value FROM blobs WHERE key = ?",0xffffffff
                          ,&param_2,(int *)0x0);
    if (puVar3 != (undefined *)0x0) break;
    sVar6 = 0xffffffff;
    puVar4 = FUN_00412c40(param_1);
    FUN_00469510((int *)param_2,1,puVar4,sVar6,puVar3);
    uVar5 = FUN_00469cb0(param_2);
    if (uVar5 == 100) {
      uVar5 = FUN_00469fc0((int *)param_2,0);
      puVar2 = param_3;
      *param_3 = uVar5;
      uVar5 = FUN_0054a6ce(uVar5);
      *puVar1 = uVar5;
      uVar5 = *puVar2;
      _Src = (void *)FUN_00469f40((int *)param_2,0);
      memcpy((void *)*puVar1,_Src,uVar5);
      uVar5 = FUN_0046aa30((int *)param_2);
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
    puVar3 = (undefined *)FUN_0046aa30((int *)param_2);
  } while (puVar3 == (undefined *)0x11);
  return (uint)puVar3 & 0xffffff00;
}


/* FUN_004136d0 @ 004136d0  kind=gamemisc  attributed-by=caller-vote  size=61 */

void * __cdecl FUN_004136d0(undefined1 *param_1,undefined1 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_00413710(param_3,param_1);
    }
    param_1 = param_1 + 0x118;
    param_3 = (void *)((int)param_3 + 0x118);
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004137f0 @ 004137f0  kind=gamemisc  attributed-by=caller-vote  size=75 */

uint __thiscall FUN_004137f0(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x118;
  if (0xea0ea0 - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = param_1;
    }
    return uVar1;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}


/* FUN_00413840 @ 00413840  kind=gamemisc  attributed-by=caller-vote  size=222 */

void __thiscall FUN_00413840(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xea0ea1) {
      pvVar3 = operator_new(param_1 * 0x118);
      if (pvVar3 != (void *)0x0) goto LAB_004138a4;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004138a4:
  local_8 = 0;
  FUN_004136d0(*(undefined1 **)this,*(undefined1 **)((int)this + 4),pvVar3);
  pvVar1 = *(void **)this;
  iVar2 = *(int *)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  *(void **)((int)this + 8) = (void *)(param_1 * 0x118 + (int)pvVar3);
  *(void **)((int)this + 4) = (void *)(((iVar2 - (int)pvVar1) / 0x118) * 0x118 + (int)pvVar3);
  *(void **)this = pvVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_00413940 @ 00413940  kind=gamemisc  attributed-by=caller-vote  size=111 */

int __thiscall FUN_00413940(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8) - *(int *)((int)this + 4);
  iVar2 = iVar3 * -0x15f15f15;
  if ((uint)(iVar3 / 0x118) < param_1) {
    iVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x118;
    if (0xea0ea0U - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar1 = FUN_004137f0(this,iVar2 + param_1);
    iVar2 = FUN_00413840(this,uVar1);
  }
  return iVar2;
}


/* FUN_0041a060 @ 0041a060  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_0041a060(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041a06e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_0042d1a0 @ 0042d1a0  kind=gamemisc  attributed-by=caller-vote  size=164 */

void * __thiscall FUN_0042d1a0(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 local_c;
  void *local_8;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  local_8 = this;
  while (cVar1 == '\0') {
    FUN_0042d1a0(local_8,(int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_0042d520(param_1 + 0xc);
    operator_delete((void *)param_1[0xc]);
    FUN_0041a180(param_1 + 10,&local_c,*(int **)param_1[10],(int *)param_1[10]);
    operator_delete((void *)param_1[10]);
    if (7 < (uint)param_1[9]) {
      operator_delete((void *)param_1[4]);
    }
    param_1[9] = 7;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return local_8;
}


/* FUN_0042d250 @ 0042d250  kind=gamemisc  attributed-by=caller-vote  size=169 */

uint __thiscall FUN_0042d250(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d1b8;
  uVar4 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  cVar1 = *(char *)((int)param_2 + 0xd);
  ppvVar3 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar3, cVar1 == '\0') {
    FUN_0042d250(param_1,(int *)param_2[2]);
    piVar2 = (int *)*param_2;
    local_8 = 0;
    cube::QuestText::~QuestText((QuestText *)(param_2 + 10));
    local_8 = 0xffffffff;
    if (7 < (uint)param_2[9]) {
      operator_delete((void *)param_2[4]);
    }
    param_2[9] = 7;
    param_2[8] = 0;
    *(undefined2 *)(param_2 + 4) = 0;
    operator_delete(param_2);
    ppvVar3 = ExceptionList;
    param_2 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  ExceptionList = local_10;
  return uVar4;
}


/* FUN_0042d520 @ 0042d520  kind=gamemisc  attributed-by=caller-vote  size=87 */

void __fastcall FUN_0042d520(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (piVar2 != (int *)*param_1) {
    do {
      piVar1 = (int *)*piVar2;
      if (7 < (uint)piVar2[7]) {
        operator_delete((void *)piVar2[2]);
      }
      piVar2[7] = 7;
      piVar2[6] = 0;
      *(undefined2 *)(piVar2 + 2) = 0;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  return;
}


/* FUN_0042d8f0 @ 0042d8f0  kind=gamemisc  attributed-by=caller-vote  size=189 */

undefined4 * __thiscall FUN_0042d8f0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_8;
  
  piVar2 = *(int **)this;
  local_8 = this;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_0042d1a0(this,(int *)piVar2[1]);
    *(int *)(*(int *)this + 4) = *(int *)this;
    *(undefined4 *)*(undefined4 *)this = *(undefined4 *)this;
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = **(undefined4 **)this;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_0042d9b0(&local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_0042d9b0 @ 0042d9b0  kind=gamemisc  attributed-by=caller-vote  size=708 */

void FUN_0042d9b0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *local_c;
  int *local_8;
  
  piVar1 = param_2;
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_00407a50((int *)&param_2);
  piVar4 = (int *)*piVar1;
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    piVar6 = piVar4;
    if (*(char *)(piVar1[2] + 0xd) == '\0') {
      local_c = param_2;
      piVar6 = (int *)param_2[2];
      if (param_2 != piVar1) {
        piVar4[1] = (int)param_2;
        *param_2 = *piVar1;
        piVar4 = param_2;
        if (param_2 != (int *)piVar1[2]) {
          piVar4 = (int *)param_2[1];
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            piVar6[1] = (int)piVar4;
          }
          *piVar4 = (int)piVar6;
          param_2[2] = piVar1[2];
          *(int **)(piVar1[2] + 4) = param_2;
        }
        if (*(int **)(*local_8 + 4) == piVar1) {
          *(int **)(*local_8 + 4) = param_2;
        }
        else {
          piVar2 = (int *)piVar1[1];
          if ((int *)*piVar2 == piVar1) {
            *piVar2 = (int)param_2;
          }
          else {
            piVar2[2] = (int)param_2;
          }
        }
        param_2[1] = piVar1[1];
        iVar3 = param_2[3];
        *(char *)(param_2 + 3) = (char)piVar1[3];
        *(char *)(piVar1 + 3) = (char)iVar3;
        goto LAB_0042dadc;
      }
    }
  }
  else {
    piVar6 = (int *)piVar1[2];
  }
  piVar4 = (int *)piVar1[1];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar6[1] = (int)piVar4;
  }
  if (*(int **)(*local_8 + 4) == piVar1) {
    *(int **)(*local_8 + 4) = piVar6;
  }
  else if ((int *)*piVar4 == piVar1) {
    *piVar4 = (int)piVar6;
  }
  else {
    piVar4[2] = (int)piVar6;
  }
  local_c = (int *)*local_8;
  if ((int *)*local_c == piVar1) {
    piVar2 = piVar4;
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar2 = FUN_0042d440(piVar6);
    }
    *local_c = (int)piVar2;
  }
  local_c = (int *)*local_8;
  if ((int *)local_c[2] == piVar1) {
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      iVar3 = FUN_0042d420((int)piVar6);
      local_c[2] = iVar3;
    }
    else {
      local_c[2] = (int)piVar4;
    }
  }
LAB_0042dadc:
  if ((char)piVar1[3] == '\x01') {
    piVar2 = local_8;
    if (piVar6 != *(int **)(*local_8 + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[3] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[3] == '\0') {
            *(undefined1 *)(piVar4 + 3) = 1;
            *(undefined1 *)(piVar5 + 3) = 0;
            FUN_004ce780(piVar2,(int)piVar5);
            piVar4 = (int *)piVar5[2];
            piVar2 = local_8;
          }
          if (*(char *)((int)piVar4 + 0xd) == '\0') {
            if ((*(char *)(*piVar4 + 0xc) != '\x01') || (*(char *)(piVar4[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar4[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar4 + 0xc) = 1;
                *(undefined1 *)(piVar4 + 3) = 0;
                FUN_0042d460(piVar2,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 3) = (char)piVar5[3];
              *(undefined1 *)(piVar5 + 3) = 1;
              *(undefined1 *)(piVar4[2] + 0xc) = 1;
              FUN_004ce780(local_8,(int)piVar5);
              break;
            }
LAB_0042dba7:
            *(undefined1 *)(piVar4 + 3) = 0;
          }
        }
        else {
          if ((char)piVar4[3] == '\0') {
            *(undefined1 *)(piVar4 + 3) = 1;
            *(undefined1 *)(piVar5 + 3) = 0;
            FUN_0042d460(piVar2,piVar5);
            piVar4 = (int *)*piVar5;
            piVar2 = local_8;
          }
          if (*(char *)((int)piVar4 + 0xd) == '\0') {
            if ((*(char *)(piVar4[2] + 0xc) == '\x01') && (*(char *)(*piVar4 + 0xc) == '\x01'))
            goto LAB_0042dba7;
            if (*(char *)(*piVar4 + 0xc) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0xc) = 1;
              *(undefined1 *)(piVar4 + 3) = 0;
              FUN_004ce780(piVar2,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 3) = (char)piVar5[3];
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(*piVar4 + 0xc) = 1;
            FUN_0042d460(local_8,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*piVar2 + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
  FUN_0042d520(piVar1 + 0xc);
  operator_delete((void *)piVar1[0xc]);
  FUN_0041a180(piVar1 + 10,&local_c,*(int **)piVar1[10],(int *)piVar1[10]);
  operator_delete((void *)piVar1[10]);
  if (7 < (uint)piVar1[9]) {
    operator_delete((void *)piVar1[4]);
  }
  piVar1[9] = 7;
  piVar1[8] = 0;
  *(undefined2 *)(piVar1 + 4) = 0;
  operator_delete(piVar1);
  if (local_8[1] != 0) {
    local_8[1] = local_8[1] + -1;
  }
  *param_1 = param_2;
  return;
}


/* FUN_0042dc80 @ 0042dc80  kind=gamemisc  attributed-by=caller-vote  size=189 */

undefined4 * __thiscall FUN_0042dc80(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_8;
  
  piVar2 = *(int **)this;
  local_8 = this;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_0042d250(this,(int *)piVar2[1]);
    *(int *)(*(int *)this + 4) = *(int *)this;
    *(undefined4 *)*(undefined4 *)this = *(undefined4 *)this;
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = **(undefined4 **)this;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_0042dd40(this,&local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_0042dd40 @ 0042dd40  kind=gamemisc  attributed-by=caller-vote  size=702 */

void __thiscall FUN_0042dd40(void *this,undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d1e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_00407a50((int *)&param_2);
  piVar5 = (int *)*piVar1;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    piVar6 = piVar5;
    if ((*(char *)(piVar1[2] + 0xd) == '\0') && (piVar6 = (int *)param_2[2], param_2 != piVar1)) {
      piVar5[1] = (int)param_2;
      *param_2 = *piVar1;
      piVar5 = param_2;
      if (param_2 != (int *)piVar1[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          piVar6[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar6;
        param_2[2] = piVar1[2];
        *(int **)(piVar1[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)this + 4) == piVar1) {
        *(int **)(*(int *)this + 4) = param_2;
      }
      else {
        piVar3 = (int *)piVar1[1];
        if ((int *)*piVar3 == piVar1) {
          *piVar3 = (int)param_2;
        }
        else {
          piVar3[2] = (int)param_2;
        }
      }
      param_2[1] = piVar1[1];
      iVar4 = param_2[3];
      *(char *)(param_2 + 3) = (char)piVar1[3];
      *(char *)(piVar1 + 3) = (char)iVar4;
      goto LAB_0042de7d;
    }
  }
  else {
    piVar6 = (int *)piVar1[2];
  }
  piVar5 = (int *)piVar1[1];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar6[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)this + 4) == piVar1) {
    *(int **)(*(int *)this + 4) = piVar6;
  }
  else if ((int *)*piVar5 == piVar1) {
    *piVar5 = (int)piVar6;
  }
  else {
    piVar5[2] = (int)piVar6;
  }
  piVar3 = *(int **)this;
  if ((int *)*piVar3 == piVar1) {
    piVar2 = piVar5;
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar2 = FUN_0042d440(piVar6);
      piVar3 = *(int **)this;
    }
    *piVar3 = (int)piVar2;
  }
  if (*(int **)(*(int *)this + 8) == piVar1) {
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      iVar4 = FUN_0042d420((int)piVar6);
      *(int *)(*(int *)this + 8) = iVar4;
    }
    else {
      *(int **)(*(int *)this + 8) = piVar5;
    }
  }
LAB_0042de7d:
  if ((char)piVar1[3] == '\x01') {
    if (piVar6 != *(int **)(*(int *)this + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[3] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_004ce780(this,(int)piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042d460(this,piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar3[3];
              *(undefined1 *)(piVar3 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004ce780(this,(int)piVar3);
              break;
            }
LAB_0042df41:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_0042d460(this,piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_0042df41;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004ce780(this,(int)piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 3) = (char)piVar3[3];
            *(undefined1 *)(piVar3 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042d460(this,piVar3);
            break;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*(int *)this + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
  local_8 = 0;
  cube::QuestText::~QuestText((QuestText *)(piVar1 + 10));
  if (7 < (uint)piVar1[9]) {
    operator_delete((void *)piVar1[4]);
  }
  piVar1[9] = 7;
  piVar1[8] = 0;
  *(undefined2 *)(piVar1 + 4) = 0;
  operator_delete(piVar1);
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = param_2;
  ExceptionList = local_10;
  return;
}


/* FUN_0042f1c0 @ 0042f1c0  kind=gamemisc  attributed-by=caller-vote  size=117 */

undefined4 __thiscall FUN_0042f1c0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  
  cVar1 = *(char *)((int)param_2 + 0xd);
  uVar4 = param_1;
  while (cVar1 == '\0') {
    FUN_0042f1c0(param_1,(int *)param_2[2]);
    piVar2 = (int *)param_2[5];
    piVar3 = (int *)*param_2;
    piVar5 = (int *)*piVar2;
    *piVar2 = (int)piVar2;
    *(int *)(param_2[5] + 4) = param_2[5];
    param_2[6] = 0;
    if (piVar5 != (int *)param_2[5]) {
      do {
        piVar2 = (int *)*piVar5;
        operator_delete(piVar5);
        piVar5 = piVar2;
      } while (piVar2 != (int *)param_2[5]);
    }
    operator_delete((void *)param_2[5]);
    operator_delete(param_2);
    uVar4 = extraout_ECX;
    param_2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0xd);
  }
  return uVar4;
}


/* FUN_0042f4e0 @ 0042f4e0  kind=gamemisc  attributed-by=caller-vote  size=189 */

undefined4 * __thiscall FUN_0042f4e0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_8;
  
  piVar2 = *(int **)this;
  local_8 = this;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_0042f1c0(this,(int *)piVar2[1]);
    *(int *)(*(int *)this + 4) = *(int *)this;
    *(undefined4 *)*(undefined4 *)this = *(undefined4 *)this;
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = **(undefined4 **)this;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_0042f5a0(this,&local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_0042f5a0 @ 0042f5a0  kind=gamemisc  attributed-by=caller-vote  size=674 */

void __thiscall FUN_0042f5a0(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar2 = param_2;
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_00407a50((int *)&param_2);
  piVar5 = (int *)*piVar2;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    piVar6 = piVar5;
    if ((*(char *)(piVar2[2] + 0xd) == '\0') && (piVar6 = (int *)param_2[2], param_2 != piVar2)) {
      piVar5[1] = (int)param_2;
      *param_2 = *piVar2;
      piVar5 = param_2;
      if (param_2 != (int *)piVar2[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          piVar6[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar6;
        param_2[2] = piVar2[2];
        *(int **)(piVar2[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)this + 4) == piVar2) {
        *(int **)(*(int *)this + 4) = param_2;
      }
      else {
        piVar7 = (int *)piVar2[1];
        if ((int *)*piVar7 == piVar2) {
          *piVar7 = (int)param_2;
        }
        else {
          piVar7[2] = (int)param_2;
        }
      }
      param_2[1] = piVar2[1];
      iVar1 = param_2[3];
      *(char *)(param_2 + 3) = (char)piVar2[3];
      *(char *)(piVar2 + 3) = (char)iVar1;
      goto LAB_0042f6cc;
    }
  }
  else {
    piVar6 = (int *)piVar2[2];
  }
  piVar5 = (int *)piVar2[1];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar6[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)this + 4) == piVar2) {
    *(int **)(*(int *)this + 4) = piVar6;
  }
  else if ((int *)*piVar5 == piVar2) {
    *piVar5 = (int)piVar6;
  }
  else {
    piVar5[2] = (int)piVar6;
  }
  piVar7 = *(int **)this;
  if ((int *)*piVar7 == piVar2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar3 = FUN_0042d440(piVar6);
    }
    *piVar7 = (int)piVar3;
  }
  iVar1 = *(int *)this;
  if (*(int **)(iVar1 + 8) == piVar2) {
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      iVar4 = FUN_0042d420((int)piVar6);
      *(int *)(iVar1 + 8) = iVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_0042f6cc:
  if ((char)piVar2[3] == '\x01') {
    if (piVar6 != *(int **)(*(int *)this + 4)) {
      do {
        piVar7 = piVar5;
        if ((char)piVar6[3] != '\x01') break;
        piVar5 = (int *)*piVar7;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar7[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar7 + 3) = 0;
            FUN_004ce780(this,(int)piVar7);
            piVar5 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042d460(this,piVar5);
                piVar5 = (int *)piVar7[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar7[3];
              *(undefined1 *)(piVar7 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004ce780(this,(int)piVar7);
              break;
            }
LAB_0042f797:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar7 + 3) = 0;
            FUN_0042d460(this,piVar7);
            piVar5 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_0042f797;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004ce780(this,(int)piVar5);
              piVar5 = (int *)*piVar7;
            }
            *(char *)(piVar5 + 3) = (char)piVar7[3];
            *(undefined1 *)(piVar7 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042d460(this,piVar7);
            break;
          }
        }
        piVar5 = (int *)piVar7[1];
        piVar6 = piVar7;
      } while (piVar7 != *(int **)(*(int *)this + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
  piVar5 = (int *)piVar2[5];
  piVar6 = (int *)*piVar5;
  *piVar5 = (int)piVar5;
  *(int *)(piVar2[5] + 4) = piVar2[5];
  piVar2[6] = 0;
  if (piVar6 != (int *)piVar2[5]) {
    do {
      piVar5 = (int *)*piVar6;
      operator_delete(piVar6);
      piVar6 = piVar5;
    } while (piVar5 != (int *)piVar2[5]);
  }
  operator_delete((void *)piVar2[5]);
  operator_delete(piVar2);
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = param_2;
  return;
}


/* FUN_00469f40 @ 00469f40  kind=gamemisc  attributed-by=caller-vote  size=127 */

int __cdecl FUN_00469f40(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00475040(param_1,param_2);
  if ((*(byte *)(piVar1 + 7) & 0x12) == 0) {
    iVar2 = FUN_004ae680(piVar1,1);
    FUN_00474fe0(param_1);
    return iVar2;
  }
  FUN_004b6fa0(piVar1);
  *(ushort *)(piVar1 + 7) = *(ushort *)(piVar1 + 7) & 0xfffd | 0x10;
  if (piVar1[6] != 0) {
    iVar2 = piVar1[1];
    FUN_00474fe0(param_1);
    return iVar2;
  }
  FUN_00474fe0(param_1);
  return 0;
}


/* FUN_00469fc0 @ 00469fc0  kind=gamemisc  attributed-by=caller-vote  size=95 */

int __cdecl FUN_00469fc0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00475040(param_1,param_2);
  if ((*(byte *)(piVar1 + 7) & 0x10) == 0) {
    iVar2 = FUN_004ae680(piVar1,1);
    if (iVar2 == 0) {
      FUN_00474fe0(param_1);
      return 0;
    }
  }
  iVar2 = piVar1[6];
  if ((*(ushort *)(piVar1 + 7) & 0x4000) != 0) {
    iVar2 = iVar2 + piVar1[4];
  }
  FUN_00474fe0(param_1);
  return iVar2;
}


/* FUN_004f59f0 @ 004f59f0  kind=gamemisc  attributed-by=caller-vote  size=202 */

undefined1 * __cdecl FUN_004f59f0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 != param_2) {
    puVar5 = param_1 + 1;
    do {
      *param_3 = *(undefined1 *)(puVar5 + -1);
      param_3[1] = *(undefined1 *)((int)puVar5 + -3);
      *(undefined4 *)(param_3 + 4) = *puVar5;
      *(undefined4 *)(param_3 + 8) = puVar5[1];
      param_3[0xc] = *(undefined1 *)(puVar5 + 2);
      param_3[0xd] = *(undefined1 *)((int)puVar5 + 9);
      param_3[0xe] = *(undefined1 *)((int)puVar5 + 10);
      *(undefined2 *)(param_3 + 0x10) = *(undefined2 *)(puVar5 + 3);
      puVar3 = (undefined1 *)((int)puVar5 + 0x13);
      puVar2 = param_3 + 0x15;
      iVar4 = 0x20;
      do {
        puVar2[-1] = puVar3[-3];
        *puVar2 = puVar2[(int)puVar5 + (-4 - (int)param_3)];
        puVar2[1] = puVar3[-1];
        puVar2[2] = *puVar3;
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar3 + 1);
        puVar3 = puVar3 + 8;
        puVar2 = puVar2 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(undefined4 *)(param_3 + 0x114) = puVar5[0x44];
      puVar1 = puVar5 + 0x45;
      param_3 = param_3 + 0x118;
      puVar5 = puVar5 + 0x46;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0052ed30 @ 0052ed30  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_0052ed30(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x14);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0052ed3e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


