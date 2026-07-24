// Helpers (ai) -- server. 69 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers.h"

/* FUN_00401cd0 @ 00401cd0  kind=gamemisc  attributed-by=caller-vote  size=112 */

void __fastcall FUN_00401cd0(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  return;
}


/* FUN_00402550 @ 00402550  kind=gamemisc  attributed-by=caller-vote  size=96 */

float * __thiscall FUN_00402550(void *this,longlong *param_1)

{
  *(float *)this = (float)*param_1 * 1.5258789e-05;
  *(float *)((int)this + 4) = (float)param_1[1] * 1.5258789e-05;
  *(float *)((int)this + 8) = (float)param_1[2] * 1.5258789e-05;
  return this;
}


/* FUN_004025b0 @ 004025b0  kind=gamemisc  attributed-by=caller-vote  size=52 */

undefined4 * __thiscall FUN_004025b0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_004f7be0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    puVar1[6] = param_1[2];
  }
  return puVar1;
}


/* FUN_004025f0 @ 004025f0  kind=gamemisc  attributed-by=caller-vote  size=565 */

undefined4 * __thiscall
FUN_004025f0(void *this,undefined4 *param_1,int *param_2,uint *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uStack_3c;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  void *local_20;
  int *local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054b940;
  local_10 = ExceptionList;
  uStack_3c = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_3c;
    FUN_004f3e70(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_3c;
    if (((int)param_3[1] <= param_2[5]) &&
       ((puVar3 = &uStack_3c, (int)param_3[1] < param_2[5] ||
        (local_14 = (undefined1 *)&uStack_3c, puVar3 = &uStack_3c, *param_3 < (uint)param_2[4])))) {
LAB_0040267d:
      local_14 = (undefined1 *)puVar3;
      FUN_004f3e70(local_20,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar5 = (undefined4 *)piVar1[2];
    local_14 = (undefined1 *)&uStack_3c;
    if (((int)puVar5[5] <= (int)param_3[1]) &&
       (((int)puVar5[5] < (int)param_3[1] ||
        (local_14 = (undefined1 *)&uStack_3c, (uint)puVar5[4] < *param_3)))) {
      local_14 = (undefined1 *)&uStack_3c;
      FUN_004f3e70(this,param_1,'\0',puVar5,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    local_28 = param_3[1];
    local_24 = *param_3;
    uVar4 = param_2[4];
    puVar3 = &uStack_3c;
    if (((int)local_28 <= param_2[5]) &&
       (((int)local_28 < param_2[5] || (puVar3 = &uStack_3c, local_24 < uVar4)))) {
      local_1c[0] = param_2;
      FUN_004dad80((int *)local_1c);
      piVar2 = local_1c[0];
      uVar4 = FUN_00402d80((uint *)(local_1c[0] + 4),param_3);
      if ((char)uVar4 != '\0') {
        puVar3 = (uint *)local_14;
        if (*(char *)(piVar2[2] + 0xd) != '\0') {
          FUN_004f3e70(local_20,param_1,'\0',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_0040267d;
      }
      uVar4 = param_2[4];
      puVar3 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar3;
    if ((param_2[5] <= (int)local_28) && ((param_2[5] < (int)local_28 || (uVar4 < local_24)))) {
      local_1c[0] = param_2;
      FUN_00407a50((int *)local_1c);
      piVar2 = local_1c[0];
      if ((local_1c[0] == piVar1) ||
         (uVar4 = FUN_00402d80(param_3,(uint *)(local_1c[0] + 4)), (char)uVar4 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_004f3e70(local_20,param_1,'\x01',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004f3e70(local_20,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_00402840(local_20,&local_2c,'\0',param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00402840 @ 00402840  kind=gamemisc  attributed-by=caller-vote  size=316 */

void __thiscall FUN_00402840(void *this,undefined4 *param_1,char param_2,uint *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054b960;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_18 = true;
  piVar5 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    uVar2 = param_3[1];
    piVar3 = (int *)piVar1[1];
    do {
      piVar5 = piVar3;
      if (param_2 == '\0') {
        if ((piVar5[5] < (int)uVar2) || ((piVar5[5] <= (int)uVar2 && ((uint)piVar5[4] <= *param_3)))
           ) {
          local_18 = false;
          goto LAB_004028dc;
        }
        piVar3 = (int *)*piVar5;
        local_18 = true;
      }
      else {
        if (((int)uVar2 < piVar5[5]) || (((int)uVar2 <= piVar5[5] && (*param_3 <= (uint)piVar5[4])))
           ) {
          local_18 = false;
        }
        else {
          local_18 = true;
        }
        local_18 = !local_18;
        if (local_18) {
          piVar3 = (int *)*piVar5;
        }
        else {
LAB_004028dc:
          piVar3 = (int *)piVar5[2];
        }
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar5;
  if (local_18) {
    if (piVar5 == (int *)*piVar1) {
      local_18 = true;
      goto LAB_00402901;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar1 = _param_2;
  if (((int)param_3[1] < _param_2[5]) ||
     (((int)param_3[1] <= _param_2[5] && (*param_3 <= (uint)_param_2[4])))) {
    operator_delete(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_00402901:
  puVar4 = (undefined4 *)FUN_004f3e70(this,(undefined4 *)&param_2,local_18,piVar5,param_3,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004029b0 @ 004029b0  kind=gamemisc  attributed-by=caller-vote  size=34 */

undefined1 * __fastcall FUN_004029b0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}


/* FUN_00402b10 @ 00402b10  kind=gamemisc  attributed-by=caller-vote  size=159 */

uint * __thiscall FUN_00402b10(void *this,uint *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  void *local_8;
  
  piVar3 = *(int **)this;
  piVar4 = piVar3;
  if (*(char *)(piVar3[1] + 0xd) == '\0') {
    piVar1 = (int *)piVar3[1];
    do {
      if (((int)param_1[1] < piVar1[5]) ||
         (((int)param_1[1] <= piVar1[5] && (*param_1 <= (uint)piVar1[4])))) {
        piVar2 = (int *)*piVar1;
        piVar4 = piVar1;
      }
      else {
        piVar2 = (int *)piVar1[2];
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  }
  if (piVar4 != piVar3) {
    if ((piVar4[5] < (int)param_1[1]) ||
       ((piVar4[5] <= (int)param_1[1] && ((uint)piVar4[4] <= *param_1)))) {
      return (uint *)(piVar4 + 6);
    }
  }
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = 0;
  local_8 = this;
  piVar3 = FUN_004025b0(this,&local_18);
  FUN_004025f0(this,&param_1,piVar4,(uint *)(piVar3 + 4),piVar3);
  return param_1 + 6;
}


/* FUN_00402bd0 @ 00402bd0  kind=gamemisc  attributed-by=caller-vote  size=63 */

undefined4 * __thiscall FUN_00402bd0(void *this,undefined4 *param_1,uint param_2,int param_3)

{
  *param_1 = *(undefined4 *)this;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  param_1[4] = *(undefined4 *)((int)this + 0x10);
  param_1[5] = *(undefined4 *)((int)this + 0x14);
  FUN_00402db0(param_1,param_2,param_3);
  return param_1;
}


/* FUN_00402c50 @ 00402c50  kind=gamemisc  attributed-by=caller-vote  size=85 */

uint * __thiscall FUN_00402c50(void *this,uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = *(uint *)this;
  param_1[1] = *(uint *)((int)this + 4);
  param_1[2] = *(uint *)((int)this + 8);
  param_1[3] = *(uint *)((int)this + 0xc);
  param_1[4] = *(uint *)((int)this + 0x10);
  param_1[5] = *(uint *)((int)this + 0x14);
  uVar3 = *param_2;
  uVar2 = *param_1;
  *param_1 = *param_1 - uVar3;
  param_1[1] = (param_1[1] - param_2[1]) - (uint)(uVar2 < uVar3);
  uVar3 = param_2[2];
  puVar1 = param_1 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar3;
  param_1[3] = (param_1[3] - param_2[3]) - (uint)(uVar2 < uVar3);
  uVar3 = param_2[4];
  puVar1 = param_1 + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar3;
  param_1[5] = (param_1[5] - param_2[5]) - (uint)(uVar2 < uVar3);
  return param_1;
}


/* FUN_00402d80 @ 00402d80  kind=gamemisc  attributed-by=caller-vote  size=37 */

uint FUN_00402d80(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  if (((int)uVar1 <= (int)param_2[1]) &&
     (((int)uVar1 < (int)param_2[1] || (uVar1 = *param_1, uVar1 < *param_2)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_00402ed0 @ 00402ed0  kind=gamemisc  attributed-by=caller-vote  size=92 */

void FUN_00402ed0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_00402ed0((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if ((void *)param_1[4] != (void *)0x0) {
      operator_delete((void *)param_1[4]);
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
    }
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}


/* FUN_004056c0 @ 004056c0  kind=gamemisc  attributed-by=caller-vote  size=129 */

uint * __thiscall FUN_004056c0(void *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = __allmul(*param_2,param_2[1],*(uint *)this,*(int *)((int)this + 4));
  uVar6 = __alldiv((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),0x10000,0);
  uVar1 = param_2[3];
  uVar2 = param_2[2];
  iVar3 = *(int *)((int)this + 0xc);
  *(undefined8 *)param_1 = uVar6;
  lVar5 = __allmul(*(uint *)((int)this + 8),iVar3,uVar2,uVar1);
  uVar6 = __alldiv((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),0x10000,0);
  uVar2 = param_2[5];
  uVar1 = *param_1;
  *param_1 = *param_1 + (uint)uVar6;
  uVar4 = param_2[4];
  iVar3 = *(int *)((int)this + 0x14);
  param_1[1] = param_1[1] + (int)((ulonglong)uVar6 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar6);
  lVar5 = __allmul(*(uint *)((int)this + 0x10),iVar3,uVar4,uVar2);
  uVar6 = __alldiv((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),0x10000,0);
  uVar1 = *param_1;
  *param_1 = *param_1 + (uint)uVar6;
  param_1[1] = param_1[1] + (int)((ulonglong)uVar6 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar6);
  return param_1;
}


/* FUN_00407cc0 @ 00407cc0  kind=gamemisc  attributed-by=caller-vote  size=54 */

undefined4 __cdecl FUN_00407cc0(undefined4 param_1)

{
  switch(param_1) {
  case 0x15:
  case 0x22:
  case 0x30:
  case 0x36:
  case 0x58:
    return 6;
  default:
    return 0xffffffff;
  case 0x31:
  case 0x60:
  case 0x61:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
    return 8;
  case 0x32:
  case 0x4f:
  case 0x56:
  case 0x67:
    return 7;
  }
}


/* FUN_00407db0 @ 00407db0  kind=gamemisc  attributed-by=caller-vote  size=898 */

int __thiscall FUN_00407db0(void *this,uint param_1)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  if ((int)param_1 < 0) {
    param_1 = (uint)*(byte *)((int)this + 0x68);
  }
  switch(param_1) {
  case 0:
  case 8:
  case 0xb:
  case 0x1c:
  case 0x32:
  case 0x37:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x60:
  case 0x62:
  case 0x68:
    return 0;
  case 1:
  case 9:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  case 2:
  case 3:
  case 4:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 5:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 6:
  case 7:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 50.0;
    break;
  case 10:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0xc:
  case 0x10:
  case 0x43:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0xd:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0xe:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0xf:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0x16:
    fVar1 = FUN_00412150((int)this);
    goto LAB_00408115;
  case 0x17:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 50.0;
    break;
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x24:
  case 0x3b:
  case 0x3f:
  case 0x40:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 50.0;
    break;
  case 0x1a:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  default:
    fVar1 = FUN_00412150((int)this);
LAB_00408115:
    fVar3 = (float)fVar1;
    fVar2 = 400.0;
    break;
  case 0x1e:
  case 0x20:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 800.0;
    break;
  case 0x1f:
  case 0x21:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 1600.0;
    break;
  case 0x22:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 1600.0;
    break;
  case 0x25:
  case 0x2b:
  case 0x59:
    if (*(char *)((int)this + 0xaa9) == '\f') {
      fVar1 = FUN_00412150((int)this);
      fVar3 = (float)fVar1;
      fVar2 = 600.0;
    }
    else {
      fVar1 = FUN_00412150((int)this);
      fVar3 = (float)fVar1;
      fVar2 = 1200.0;
    }
    break;
  case 0x26:
  case 0x2c:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0x2d:
  case 0x2e:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 1200.0;
    break;
  case 0x30:
  case 0x65:
    return 100;
  case 0x36:
    return 400;
  case 0x39:
  case 0x3a:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 800.0;
    break;
  case 0x41:
  case 0x42:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  case 0x47:
  case 0x48:
    return 200;
  case 0x57:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 5000.0;
    break;
  case 0x5b:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 1000.0;
    break;
  case 0x5d:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 800.0;
    break;
  case 0x5e:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 0x5f:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 1000.0;
    break;
  case 0x69:
    return 5000;
  }
  return (int)(fVar2 / (fVar3 * *(float *)((int)this + 0x17c)));
}


/* FUN_004084b0 @ 004084b0  kind=gamemisc  attributed-by=caller-vote  size=2086 */

int __fastcall FUN_004084b0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  
  switch(*(undefined1 *)(param_1 + 0x68)) {
  case 0:
  case 8:
  case 0xb:
  case 0x1c:
  case 0x32:
  case 0x37:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x60:
  case 0x62:
  case 0x68:
    iVar1 = 0;
    goto LAB_00408820;
  case 1:
  case 9:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 2:
  case 3:
  case 4:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 5:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 6:
  case 7:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 50.0;
    break;
  case 10:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0xc:
  case 0x10:
  case 0x43:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0xd:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0xe:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0xf:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0x16:
    fVar3 = FUN_00412150(param_1);
    goto LAB_00408808;
  case 0x17:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 50.0;
    break;
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x24:
  case 0x3b:
  case 0x3f:
  case 0x40:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 50.0;
    break;
  case 0x1a:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  default:
    fVar3 = FUN_00412150(param_1);
LAB_00408808:
    fVar5 = (float)fVar3;
    fVar4 = 400.0;
    break;
  case 0x1e:
  case 0x20:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 800.0;
    break;
  case 0x1f:
  case 0x21:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 1600.0;
    break;
  case 0x22:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 1600.0;
    break;
  case 0x25:
  case 0x2b:
  case 0x59:
    if (*(char *)(param_1 + 0xaa9) == '\f') {
      fVar3 = FUN_00412150(param_1);
      fVar5 = (float)fVar3;
      fVar4 = 600.0;
    }
    else {
      fVar3 = FUN_00412150(param_1);
      fVar5 = (float)fVar3;
      fVar4 = 1200.0;
    }
    break;
  case 0x26:
  case 0x2c:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    break;
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0x2d:
  case 0x2e:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 1200.0;
    break;
  case 0x30:
  case 0x65:
    iVar1 = 100;
    goto LAB_00408820;
  case 0x36:
    iVar1 = 400;
    goto LAB_00408820;
  case 0x39:
  case 0x3a:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 800.0;
    break;
  case 0x41:
  case 0x42:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 0x47:
  case 0x48:
    iVar1 = 200;
    goto LAB_00408820;
  case 0x57:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 5000.0;
    break;
  case 0x5b:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 1000.0;
    break;
  case 0x5d:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 800.0;
    break;
  case 0x5e:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    break;
  case 0x5f:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 1000.0;
    break;
  case 0x69:
    iVar1 = 5000;
    goto LAB_00408820;
  }
  iVar1 = (int)(fVar4 / (fVar5 * *(float *)(param_1 + 0x17c)));
LAB_00408820:
  switch(*(undefined1 *)(param_1 + 0x68)) {
  case 0:
  case 0x31:
    iVar2 = 0;
    break;
  case 1:
  case 2:
  case 9:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    goto LAB_00408b04;
  case 3:
  case 4:
  case 0x3e:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    goto LAB_00408b04;
  case 5:
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x41:
  case 0x42:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 400.0;
    goto LAB_00408b04;
  case 6:
  case 7:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 150.0;
    goto LAB_00408b04;
  default:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    goto LAB_00408afc;
  case 10:
    iVar2 = 200;
    break;
  case 0xb:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    goto LAB_00408afc;
  case 0xd:
  case 0xe:
  case 0xf:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    goto LAB_00408b04;
  case 0x12:
  case 0x13:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 150.0;
    goto LAB_00408b04;
  case 0x14:
  case 0x15:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 400.0;
    goto LAB_00408b04;
  case 0x16:
    fVar3 = FUN_00412150(param_1);
    iVar2 = (int)(50.0 / ((float)fVar3 * *(float *)(param_1 + 0x17c)));
    break;
  case 0x17:
    fVar3 = FUN_00412150(param_1);
    iVar2 = (int)(50.0 / ((float)fVar3 * *(float *)(param_1 + 0x17c)));
    break;
  case 0x1a:
    fVar3 = FUN_00412150(param_1);
    iVar2 = (int)(1200.0 / ((float)fVar3 * *(float *)(param_1 + 0x17c)));
    break;
  case 0x1e:
  case 0x20:
  case 0x49:
  case 0x5d:
    iVar2 = 600;
    break;
  case 0x1f:
  case 0x21:
    iVar2 = 0x4b0;
    break;
  case 0x22:
    fVar3 = FUN_00412150(param_1);
    iVar2 = (int)(1200.0 / ((float)fVar3 * *(float *)(param_1 + 0x17c)));
    break;
  case 0x25:
  case 0x2b:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    goto LAB_00408b04;
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2c:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    goto LAB_00408afc;
  case 0x2d:
  case 0x2e:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    goto LAB_00408b04;
  case 0x32:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x60:
    iVar2 = 500;
    break;
  case 0x36:
    iVar2 = 100;
    break;
  case 0x37:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    goto LAB_00408b04;
  case 0x43:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    goto LAB_00408b04;
  case 0x44:
  case 0x45:
    iVar2 = 1000;
    break;
  case 0x47:
    iVar2 = 3000;
    break;
  case 0x48:
  case 0x56:
    iVar2 = 5000;
    break;
  case 0x4b:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    goto LAB_00408afc;
  case 0x5b:
    iVar2 = 6000;
    break;
  case 0x5e:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    goto LAB_00408b04;
  case 0x5f:
    iVar2 = 2000;
    break;
  case 0x68:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
LAB_00408afc:
    fVar4 = 300.0;
LAB_00408b04:
    iVar2 = (int)(fVar4 / (fVar5 * *(float *)(param_1 + 0x17c)));
  }
  switch(*(undefined1 *)(param_1 + 0x68)) {
  case 0:
  case 0x32:
  case 0x60:
    return iVar2 + 100 + iVar1;
  default:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    break;
  case 3:
  case 4:
  case 5:
  case 0x3e:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 7:
  case 0xe:
  case 0x12:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 10:
    return iVar2 + 600 + iVar1;
  case 0xb:
  case 0x3c:
  case 0x3d:
  case 0x68:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0xf:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 400.0;
    break;
  case 0x16:
  case 0x1a:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x5e:
  case 0x5f:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0x17:
    fVar3 = FUN_00412150(param_1);
    return (int)(10.0 / ((float)fVar3 * *(float *)(param_1 + 0x17c))) + iVar2 + iVar1;
  case 0x30:
    return iVar2 + iVar1;
  case 0x36:
    return iVar2 + 400 + iVar1;
  case 0x39:
  case 0x3a:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 0x41:
  case 0x42:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0x43:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0x44:
  case 0x45:
  case 0x5d:
    fVar3 = FUN_00412150(param_1);
    fVar5 = (float)fVar3;
    fVar4 = 800.0;
    break;
  case 0x47:
  case 0x48:
    return iVar2 + 200 + iVar1;
  }
  return (int)(fVar4 / (fVar5 * *(float *)(param_1 + 0x17c))) + iVar2 + iVar1;
}


/* FUN_004096b0 @ 004096b0  kind=gamemisc  attributed-by=caller-vote  size=141 */

bool __thiscall FUN_004096b0(void *this,int param_1)

{
  int iVar1;
  float10 fVar2;
  void *local_8;
  
  iVar1 = param_1;
  if ((*(int *)((int)this + 300) < 1) || (param_1 == 0x65)) {
    local_8 = this;
    fVar2 = FUN_0040fb20((int)this,param_1,-1);
    local_8 = (void *)(float)fVar2;
    if ((float)local_8 < *(float *)((int)this + 0x170) ||
        (float)local_8 == *(float *)((int)this + 0x170)) {
      FUN_0040a7a0((void *)((int)this + 0x139c),(int *)&local_8,&param_1);
      if ((local_8 == *(void **)((int)this + 0x139c)) || (*(int *)((int)local_8 + 0x14) == 0)) {
        if (iVar1 != 0x1c) {
          return true;
        }
        return 0.0 < *(float *)((int)this + 0x170);
      }
    }
  }
  return false;
}


/* FUN_00409de0 @ 00409de0  kind=gamemisc  attributed-by=caller-vote  size=126 */

float10 __thiscall FUN_00409de0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00407cc0(param_2);
  if (iVar1 < 0) {
    return (float10)1;
  }
  if (param_3 < 0) {
    param_3 = *(int *)(param_1 + 0x1138 + iVar1 * 4);
  }
  if ((param_3 == 0) && (*(char *)(param_1 + 0x60) != '\0')) {
    param_3 = *(int *)(param_1 + 400) / 2 + *(byte *)(param_1 + 0x1a8) + 1;
  }
  return (float10)(1.0 - 1.0 / ((float)param_3 * 0.1 + 1.0));
}


/* FUN_0040a7a0 @ 0040a7a0  kind=gamemisc  attributed-by=caller-vote  size=76 */

void __thiscall FUN_0040a7a0(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = *(int **)this;
  piVar5 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar3 = (int *)piVar1[1];
    do {
      if (piVar3[4] < *param_2) {
        piVar4 = (int *)piVar3[2];
      }
      else {
        piVar4 = (int *)*piVar3;
        piVar5 = piVar3;
      }
      piVar3 = piVar4;
    } while (*(char *)((int)piVar4 + 0xd) == '\0');
  }
  if ((piVar5 == piVar1) || (iVar2 = *param_2, param_2 = piVar5, iVar2 < piVar5[4])) {
    param_2 = piVar1;
  }
  *param_1 = (int)param_2;
  return;
}


/* FUN_0040f2b0 @ 0040f2b0  kind=gamemisc  attributed-by=caller-vote  size=61 */

undefined1 __fastcall FUN_0040f2b0(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0xaa8) == '\x03') &&
     ((((((cVar1 = *(char *)(param_1 + 0xaa9), cVar1 == '\x0f' || (cVar1 == '\x10')) ||
         (cVar1 == '\x11')) || ((cVar1 == '\x05' || (cVar1 == '\n')))) ||
       ((cVar1 == '\v' || ((cVar1 == '\x12' || (cVar1 == '\b')))))) ||
      ((cVar1 == '\x06' || (cVar1 == '\a')))))) {
    return 1;
  }
  return 0;
}


/* FUN_0040f2f0 @ 0040f2f0  kind=gamemisc  attributed-by=caller-vote  size=377 */

int __thiscall FUN_0040f2f0(void *this,uint param_1)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  if ((int)param_1 < 0) {
    param_1 = (uint)*(byte *)((int)this + 0x68);
  }
  switch(param_1) {
  case 0:
  case 0x32:
  case 0x60:
    return 100;
  default:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 3:
  case 4:
  case 5:
  case 0x3e:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  case 7:
  case 0xe:
  case 0x12:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 10:
    return 600;
  case 0xb:
  case 0x3c:
  case 0x3d:
  case 0x68:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0xf:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 400.0;
    break;
  case 0x16:
  case 0x1a:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x5e:
  case 0x5f:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0x17:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 10.0;
    break;
  case 0x30:
    return 0;
  case 0x36:
    return 400;
  case 0x39:
  case 0x3a:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  case 0x41:
  case 0x42:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0x43:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0x44:
  case 0x45:
  case 0x5d:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 800.0;
    break;
  case 0x47:
  case 0x48:
    return 200;
  }
  return (int)(fVar2 / (fVar3 * *(float *)((int)this + 0x17c)));
}


/* FUN_0040f5a0 @ 0040f5a0  kind=gamemisc  attributed-by=caller-vote  size=99 */

uint __fastcall FUN_0040f5a0(int param_1)

{
  char cVar1;
  uint in_EAX;
  
  if ((((*(char *)(param_1 + 0x140) != '\x03') &&
       (in_EAX = *(uint *)(param_1 + 100), in_EAX != 0x75)) && (in_EAX != 0x56)) &&
     (((*(char *)(param_1 + 0xaa8) != '\x03' ||
       (((cVar1 = *(char *)(param_1 + 0xaa9), cVar1 != '\n' && (cVar1 != '\v')) && (cVar1 != '\f')))
       ) && (in_EAX != 0x68)))) {
    if (*(char *)(param_1 + 0xaa8) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xaa9);
      in_EAX = CONCAT31((int3)(in_EAX >> 8),cVar1);
      if (((cVar1 == '\x06') || (cVar1 == '\a')) ||
         ((cVar1 == '\b' || ((cVar1 == '\n' || (cVar1 == '\v')))))) goto LAB_0040f5ff;
    }
    return in_EAX & 0xffffff00;
  }
LAB_0040f5ff:
  return CONCAT31((int3)(in_EAX >> 8),1);
}


/* FUN_0040f650 @ 0040f650  kind=gamemisc  attributed-by=caller-vote  size=59 */

int __fastcall FUN_0040f650(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 100);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((((((iVar1 != 0x6c) && (iVar1 != 0x6d)) && (iVar1 != 0x72)) &&
       ((iVar1 != 0x74 && (iVar1 != 0x73)))) &&
      ((iVar1 != 0x76 && ((iVar1 != 0x6b && (iVar1 != 0x75)))))) &&
     ((iVar1 != 0x65 && (iVar1 != 0x77)))) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


/* FUN_0040f690 @ 0040f690  kind=gamemisc  attributed-by=caller-vote  size=55 */

uint __fastcall FUN_0040f690(int param_1)

{
  char cVar1;
  uint in_EAX;
  
  if (((*(char *)(param_1 + 0x140) != '\x03') && (in_EAX = *(uint *)(param_1 + 100), in_EAX != 0x75)
      ) && (in_EAX != 0x56)) {
    if (*(char *)(param_1 + 0xaa8) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xaa9);
      in_EAX = CONCAT31((int3)(in_EAX >> 8),cVar1);
      if (((cVar1 == '\n') || (cVar1 == '\v')) || (cVar1 == '\f')) goto LAB_0040f6c4;
    }
    return in_EAX & 0xffffff00;
  }
LAB_0040f6c4:
  return CONCAT31((int3)(in_EAX >> 8),1);
}


/* FUN_0040f710 @ 0040f710  kind=gamemisc  attributed-by=caller-vote  size=218 */

uint __fastcall FUN_0040f710(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x7e);
  if (((*(ushort *)(param_1 + 0x7e) & 0x1a00) == 0) &&
     ((((((((uVar1 = *(uint *)(param_1 + 100), uVar1 == 0x5c || (uVar1 == 0x4a)) || (uVar1 == 0x22))
          || (((uVar1 == 0x19 || (uVar1 == 0x37)) ||
              ((uVar1 == 0x35 || ((uVar1 == 0x57 || (uVar1 == 0x44)))))))) || (uVar1 == 0x43)) ||
        ((((((uVar1 == 0x5d || (uVar1 == 0x6a)) || (uVar1 == 0x6b)) ||
           ((uVar1 == 0x23 || (uVar1 == 0x3a)))) || (uVar1 == 0x39)) ||
         (((uVar1 == 0x93 || (uVar1 == 0x91)) ||
          (((uVar1 == 0x92 || (((uVar1 == 0x16 || (uVar1 == 0x17)) || (uVar1 == 0x62)))) ||
           (((uVar1 == 0x38 || (uVar1 == 0x1e)) || (uVar1 == 0x1f)))))))))) ||
       (((uVar1 == 0x20 || (uVar1 == 0x13)) ||
        ((uVar1 == 0x1a || (((uVar1 == 0x1b || (uVar1 == 0x21)) || (uVar1 == 100)))))))) ||
      ((uVar1 == 0x14 || (uVar1 == 0x59)))))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_0040fb20 @ 0040fb20  kind=gamemisc  attributed-by=caller-vote  size=155 */

float10 __thiscall FUN_0040fb20(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  float10 fVar3;
  
  switch(param_2) {
  case 3:
  case 4:
    return (float10)0.1;
  default:
switchD_0040fb39_caseD_5:
    return (float10)0;
  case 0x1f:
  case 0x21:
  case 0x25:
  case 0x2b:
  case 0x2d:
  case 0x2e:
  case 0x5f:
    break;
  case 0x22:
    fVar3 = FUN_00409de0(param_1,0x22,param_3);
    return (float10)((1.0 - (float)fVar3 * 0.75) * 0.125);
  }
  piVar1 = *(int **)(param_1 + 0x1178);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    while ((char)piVar2[2] != '\t') {
      piVar2 = (int *)*piVar2;
      if (piVar2 == piVar1) {
        return (float10)0.3;
      }
    }
    if (piVar2 != (int *)0xfffffff8) goto switchD_0040fb39_caseD_5;
  }
  return (float10)0.3;
}


/* FUN_0040fc30 @ 0040fc30  kind=gamemisc  attributed-by=caller-vote  size=177 */

undefined8 __fastcall FUN_0040fc30(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  int iStack_8;
  
  piVar2 = *(int **)(param_1 + 0x13a4);
  piVar5 = (int *)*piVar2;
  fVar7 = 0.0;
  if (piVar5 != piVar2) {
    iStack_8 = 0;
    iVar6 = 0;
    do {
      if ((piVar5[4] != 0 || piVar5[5] != 0) && (fVar7 <= (float)piVar5[6])) {
        iVar6 = piVar5[4];
        iStack_8 = piVar5[5];
        fVar7 = (float)piVar5[6];
      }
      if (*(char *)((int)piVar5 + 0xd) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0xd);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0xd);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0xd);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar5 != piVar2);
    return CONCAT44(iStack_8,iVar6);
  }
  return 0;
}


/* FUN_0040fcf0 @ 0040fcf0  kind=gamemisc  attributed-by=caller-vote  size=121 */

int __fastcall FUN_0040fcf0(int param_1)

{
  if (*(char *)(param_1 + 0xaa8) == '\x03') {
    switch(*(undefined1 *)(param_1 + 0xaa9)) {
    case 6:
      return (int)(*(float *)(param_1 + 0x17c) * 60.0);
    case 8:
      return (int)(*(float *)(param_1 + 0x17c) * 80.0);
    case 0xb:
    case 0xc:
    case 0xf:
    case 0x10:
    case 0x11:
switchD_0040fd08_caseD_b:
      return (int)(*(float *)(param_1 + 0x17c) * 20.0);
    }
  }
  else if ((*(byte *)(param_1 + 0x7e) & 0x10) != 0) goto switchD_0040fd08_caseD_b;
  return (int)(*(float *)(param_1 + 0x17c) * 50.0);
}


/* FUN_0040fda0 @ 0040fda0  kind=gamemisc  attributed-by=caller-vote  size=559 */

float10 __fastcall FUN_0040fda0(int param_1)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  float local_c;
  float local_8;
  
  dVar2 = 2.0;
  libm_sse2_pow_precise();
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  local_8 = (float)dVar3 * (float)dVar2 * *(float *)(param_1 + 0x178);
  if (*(char *)(param_1 + 0x60) == '\0') {
    dVar3 = 2.0;
    libm_sse2_pow_precise();
    local_8 = (float)dVar3 * (float)dVar2 * *(float *)(param_1 + 0x178);
  }
  switch(*(char *)(param_1 + 0x140)) {
  case '\x01':
    local_8 = local_8 * 1.3;
    break;
  case '\x02':
    local_8 = local_8 * 1.1;
    break;
  case '\x04':
    local_8 = local_8 * 1.2;
  }
  if ((*(char *)(param_1 + 0x140) == '\x01') && (*(char *)(param_1 + 0x141) == '\x01')) {
    local_8 = local_8 * 1.25;
  }
  if (*(char *)(param_1 + 0x990) == '\x03') {
    fVar1 = FUN_00413ce0((char *)(param_1 + 0x990));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0xaa8) == '\x03') {
    fVar1 = FUN_00413ce0((char *)(param_1 + 0xaa8));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x530) == '\x04') {
    fVar1 = FUN_00413ce0((char *)(param_1 + 0x530));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x648) == '\x06') {
    fVar1 = FUN_00413ce0((char *)(param_1 + 0x648));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x760) == '\x05') {
    fVar1 = FUN_00413ce0((char *)(param_1 + 0x760));
    local_8 = (float)fVar1 + local_8;
  }
  local_c = local_8;
  if (*(char *)(param_1 + 0x878) == '\a') {
    fVar1 = FUN_00413ce0((char *)(param_1 + 0x878));
    local_c = (float)fVar1 + local_8;
  }
  return (float10)local_c;
}


/* FUN_00410010 @ 00410010  kind=gamemisc  attributed-by=caller-vote  size=637 */

char __fastcall FUN_00410010(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  
  if ((((*(char *)(param_1 + 0x140) == '\x03') || (iVar4 = *(int *)(param_1 + 100), iVar4 == 0x75))
      || (iVar4 == 0x56)) ||
     ((cVar3 = *(char *)(param_1 + 0xaa8), cVar3 == '\x03' &&
      (((cVar1 = *(char *)(param_1 + 0xaa9), cVar1 == '\n' || (cVar1 == '\v')) || (cVar1 == '\f'))))
     )) {
    if (*(char *)(param_1 + 0xaa9) == '\v') {
      cVar3 = '&';
      if (*(char *)(param_1 + 0x141) == '\x01') {
        cVar3 = ',';
      }
      return cVar3;
    }
    if (*(char *)(param_1 + 0xaa9) == '\n') {
      return (*(char *)(param_1 + 0x141) == '\x01') * '\x02' + '\x1e';
    }
    if (*(char *)(param_1 + 0x141) != '\x01') {
      if (*(char *)(param_1 + 0x68) == '(') {
        iVar4 = FUN_004084b0(param_1);
        if (*(int *)(param_1 + 0x6c) < iVar4 + 200) {
          return '\'';
        }
      }
      return '(';
    }
    if (*(char *)(param_1 + 0x68) == '*') {
      iVar4 = FUN_004084b0(param_1);
      if (*(int *)(param_1 + 0x6c) < iVar4 + 200) {
        return ')';
      }
    }
    return '*';
  }
  if ((iVar4 == 0x68) ||
     ((cVar3 == '\x03' &&
      ((*(char *)(param_1 + 0xaa9) == '\x06' || (*(char *)(param_1 + 0xaa9) == '\a')))))) {
    return '\x16';
  }
  cVar1 = *(char *)(param_1 + 0x990);
  if ((cVar1 == '\x03') &&
     ((*(char *)(param_1 + 0x991) == '\x06' || (*(char *)(param_1 + 0x991) == '\a')))) {
    return '\x16';
  }
  cVar2 = *(char *)(param_1 + 0xaa9);
  if (cVar2 == '\x03') {
    if (*(char *)(param_1 + 0x68) == '\x13') {
      iVar4 = FUN_004084b0(param_1);
      if (*(int *)(param_1 + 0x6c) < iVar4 + 200) {
        return '\x12';
      }
    }
    return '\x13';
  }
  if ((cVar2 != '\x04') && (cVar3 != '\0')) {
    if (cVar2 == '\x05') {
      if (*(char *)(param_1 + 0x68) == '\x0e') {
        iVar4 = FUN_004084b0(param_1);
        if (*(int *)(param_1 + 0x6c) < iVar4 + 200) {
          return '\r';
        }
      }
      return '\x0e';
    }
    if ((cVar3 == '\x03') && (cVar2 == '\b')) {
      return '\x1a';
    }
    cVar3 = FUN_0040f2b0(param_1);
    if (cVar3 != '\0') {
      if (*(char *)(param_1 + 0x68) == '9') {
        iVar4 = FUN_004084b0(param_1);
        if (*(int *)(param_1 + 0x6c) < iVar4 + 200) {
          return 'C';
        }
      }
      if (*(char *)(param_1 + 0x68) == 'C') {
        iVar4 = FUN_004084b0(param_1);
        if (*(int *)(param_1 + 0x6c) < iVar4 + 200) {
          return ':';
        }
      }
      return '9';
    }
    if ((cVar1 == '\x03') && (*(char *)(param_1 + 0x991) == '\r')) {
      if (*(char *)(param_1 + 0x68) == '\n') {
        iVar4 = FUN_004084b0(param_1);
        if (*(int *)(param_1 + 0x6c) < iVar4 + 200) {
          return '\t';
        }
      }
      return '\n';
    }
    if ((*(byte *)(param_1 + 0x7e) & 0x10) != 0) {
      return 'K';
    }
    if (*(char *)(param_1 + 0x68) == '\x01') {
      iVar4 = FUN_004084b0(param_1);
      if (*(int *)(param_1 + 0x6c) < iVar4 + 200) {
        return '\x02';
      }
    }
    return '\x01';
  }
  if (*(char *)(param_1 + 0x68) == '\x06') {
    iVar4 = FUN_004084b0(param_1);
    if (*(int *)(param_1 + 0x6c) < iVar4 + 200) {
      return '\a';
    }
  }
  return '\x06';
}


/* FUN_00410290 @ 00410290  kind=gamemisc  attributed-by=caller-vote  size=268 */

int __fastcall FUN_00410290(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 0xaa8) == '\x03') && (*(char *)(param_1 + 0xaa9) == '\x06')) {
    return 0x17;
  }
  if (((*(char *)(param_1 + 0x140) != '\x03') && (*(int *)(param_1 + 100) != 0x75)) &&
     (*(int *)(param_1 + 100) != 0x56)) {
    if (*(char *)(param_1 + 0xaa8) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xaa9);
      if (((cVar1 == '\n') || (cVar1 == '\v')) || (cVar1 == '\f')) goto LAB_00410355;
      if (cVar1 == '\x05') {
        return 5;
      }
      cVar1 = *(char *)(param_1 + 0xaa9);
      if ((((cVar1 == '\x0f') || (cVar1 == '\x10')) ||
          (((cVar1 == '\x11' ||
            ((((cVar1 == '\x05' || (cVar1 == '\n')) || (cVar1 == '\v')) ||
             ((cVar1 == '\x12' || (cVar1 == '\b')))))) || (cVar1 == '\x06')))) || (cVar1 == '\a')) {
        uVar2 = *(uint *)(param_1 + 0x70) & 0x80000001;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
        }
        return 0x42 - (uint)(uVar2 != 0);
      }
    }
    uVar2 = *(uint *)(param_1 + 0x70) & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    return (uVar2 != 0) + 3;
  }
LAB_00410355:
  if (*(char *)(param_1 + 0xaa9) == '\v') {
    return (*(char *)(param_1 + 0x141) != '\x01') + 0x2d;
  }
  if (*(char *)(param_1 + 0xaa9) == '\n') {
    return (uint)(*(char *)(param_1 + 0x141) == '\x01') * 2 + 0x1f;
  }
  iVar3 = 0x25;
  if (*(char *)(param_1 + 0x141) == '\x01') {
    iVar3 = 0x2b;
  }
  return iVar3;
}


/* FUN_00410400 @ 00410400  kind=gamemisc  attributed-by=caller-vote  size=479 */

undefined4 __fastcall FUN_00410400(int param_1)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  float10 fVar4;
  float fVar5;
  float fVar6;
  
  if ((*(int *)(param_1 + 0x128) != 0) || (*(char *)(param_1 + 0x68) == '0')) {
    return in_EAX & 0xffffff00;
  }
  iVar2 = FUN_004084b0(param_1);
  iVar3 = iVar2;
  if (((*(int *)(param_1 + 0x70) == 0) || (cVar1 = *(char *)(param_1 + 0x68), cVar1 == '\x1e')) ||
     (cVar1 == ' ')) goto LAB_004105ba;
  switch(cVar1) {
  case '\0':
  case '2':
  case '`':
    iVar3 = 100;
    goto LAB_004105b8;
  default:
    fVar4 = FUN_00412150(param_1);
    fVar6 = (float)fVar4;
    fVar5 = 500.0;
    break;
  case '\x03':
  case '\x04':
  case '\x05':
  case '>':
    fVar4 = FUN_00412150(param_1);
    fVar6 = (float)fVar4;
    fVar5 = 300.0;
    break;
  case '\a':
  case '\x0e':
  case '\x12':
    fVar4 = FUN_00412150(param_1);
    fVar6 = (float)fVar4;
    fVar5 = 200.0;
    break;
  case '\n':
    iVar3 = 600;
    goto LAB_004105b8;
  case '\v':
  case '<':
  case '=':
  case 'h':
    fVar4 = FUN_00412150(param_1);
    fVar6 = (float)fVar4;
    fVar5 = 100.0;
    break;
  case '\x0f':
    fVar4 = FUN_00412150(param_1);
    fVar6 = (float)fVar4;
    fVar5 = 400.0;
    break;
  case '\x16':
  case '\x1a':
  case '\x1e':
  case '\x1f':
  case ' ':
  case '!':
  case '\"':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case '+':
  case ',':
  case '-':
  case '.':
  case '^':
  case '_':
    fVar4 = FUN_00412150(param_1);
    fVar6 = (float)fVar4;
    fVar5 = 100.0;
    break;
  case '\x17':
    fVar4 = FUN_00412150(param_1);
    fVar6 = (float)fVar4;
    fVar5 = 10.0;
    break;
  case '0':
    iVar3 = 0;
    goto LAB_004105b8;
  case '6':
    iVar3 = 400;
    goto LAB_004105b8;
  case '9':
  case ':':
    fVar4 = FUN_00412150(param_1);
    fVar6 = (float)fVar4;
    fVar5 = 300.0;
    break;
  case 'A':
  case 'B':
    fVar4 = FUN_00412150(param_1);
    fVar6 = (float)fVar4;
    fVar5 = 200.0;
    break;
  case 'C':
    fVar4 = FUN_00412150(param_1);
    fVar6 = (float)fVar4;
    fVar5 = 100.0;
    break;
  case 'D':
  case 'E':
  case ']':
    fVar4 = FUN_00412150(param_1);
    fVar6 = (float)fVar4;
    fVar5 = 800.0;
    break;
  case 'G':
  case 'H':
    iVar3 = 200;
    goto LAB_004105b8;
  }
  iVar3 = (int)(fVar5 / (fVar6 * *(float *)(param_1 + 0x17c)));
LAB_004105b8:
  iVar2 = iVar2 - iVar3;
LAB_004105ba:
  if (iVar2 <= *(int *)(param_1 + 0x6c)) {
    cVar1 = FUN_00410010(param_1);
    iVar3 = CONCAT31(extraout_var,cVar1);
    *(char *)(param_1 + 0x68) = cVar1;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


/* FUN_00410690 @ 00410690  kind=gamemisc  attributed-by=caller-vote  size=1740 */

undefined4 __fastcall FUN_00410690(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_EAX;
  int *piVar6;
  int *piVar7;
  char cVar8;
  bool bVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  
  iVar3 = FUN_004084b0(param_1);
  if (*(int *)(param_1 + 0x70) == 0) goto LAB_00410820;
  switch(*(undefined1 *)(param_1 + 0x68)) {
  case 0:
  case 0x32:
  case 0x60:
    iVar4 = 100;
    goto LAB_0041081e;
  default:
    fVar10 = FUN_00412150(param_1);
    fVar12 = (float)fVar10;
    fVar11 = 500.0;
    break;
  case 3:
  case 4:
  case 5:
  case 0x3e:
    fVar10 = FUN_00412150(param_1);
    fVar12 = (float)fVar10;
    fVar11 = 300.0;
    break;
  case 7:
  case 0xe:
  case 0x12:
    fVar10 = FUN_00412150(param_1);
    fVar12 = (float)fVar10;
    fVar11 = 200.0;
    break;
  case 10:
    iVar4 = 600;
    goto LAB_0041081e;
  case 0xb:
  case 0x3c:
  case 0x3d:
  case 0x68:
    fVar10 = FUN_00412150(param_1);
    fVar12 = (float)fVar10;
    fVar11 = 100.0;
    break;
  case 0xf:
    fVar10 = FUN_00412150(param_1);
    fVar12 = (float)fVar10;
    fVar11 = 400.0;
    break;
  case 0x16:
  case 0x1a:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x5e:
  case 0x5f:
    fVar10 = FUN_00412150(param_1);
    fVar12 = (float)fVar10;
    fVar11 = 100.0;
    break;
  case 0x17:
    fVar10 = FUN_00412150(param_1);
    fVar12 = (float)fVar10;
    fVar11 = 10.0;
    break;
  case 0x30:
    iVar4 = 0;
    goto LAB_0041081e;
  case 0x36:
    iVar4 = 400;
    goto LAB_0041081e;
  case 0x39:
  case 0x3a:
    fVar10 = FUN_00412150(param_1);
    fVar12 = (float)fVar10;
    fVar11 = 300.0;
    break;
  case 0x41:
  case 0x42:
    fVar10 = FUN_00412150(param_1);
    fVar12 = (float)fVar10;
    fVar11 = 200.0;
    break;
  case 0x43:
    fVar10 = FUN_00412150(param_1);
    fVar12 = (float)fVar10;
    fVar11 = 100.0;
    break;
  case 0x44:
  case 0x45:
  case 0x5d:
    fVar10 = FUN_00412150(param_1);
    fVar12 = (float)fVar10;
    fVar11 = 800.0;
    break;
  case 0x47:
  case 0x48:
    iVar4 = 200;
    goto LAB_0041081e;
  }
  iVar4 = (int)(fVar11 / (fVar12 * *(float *)(param_1 + 0x17c)));
LAB_0041081e:
  iVar3 = iVar3 - iVar4;
LAB_00410820:
  uVar5 = FUN_00410290(param_1);
  if (((*(char *)(param_1 + 0x140) == '\x04') && (*(char *)(param_1 + 0x141) == '\x01')) &&
     ((uVar5 == 0x11 || ((uVar5 == 5 || (uVar5 == 0x14)))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((*(int *)(param_1 + 0x6c) < iVar3) ||
     (((*(int *)(param_1 + 0x128) != 0 && (!bVar2)) ||
      (fVar10 = FUN_0040fb20(param_1,uVar5,-1), uVar5 = extraout_EAX,
      *(float *)(param_1 + 0x170) <= (float)fVar10 && (float)fVar10 != *(float *)(param_1 + 0x170)))
     )) {
    return uVar5 & 0xffffff00;
  }
  piVar6 = (int *)FUN_00410290(param_1);
  cVar8 = (char)piVar6;
  *(char *)(param_1 + 0x68) = cVar8;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (((cVar8 == '%') || (cVar8 == '.')) ||
     ((cVar8 == '_' || ((cVar8 == '\x1f' || (piVar7 = piVar6, cVar8 == '!')))))) {
    piVar1 = *(int **)(param_1 + 0x1178);
    piVar7 = (int *)*piVar1;
    if (piVar7 != piVar1) {
LAB_004108c7:
      if ((char)piVar7[2] != '\t') goto code_r0x004108cd;
      bVar9 = piVar7 != (int *)0xfffffff8;
      piVar7 = (int *)0x0;
      if (bVar9) {
        switch((uint)piVar6 & 0xff) {
        case 0:
        case 8:
        case 0xb:
        case 0x1c:
        case 0x32:
        case 0x37:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x60:
        case 0x62:
        case 0x68:
          piVar7 = (int *)0x0;
          goto LAB_00410d39;
        case 1:
        case 9:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 300.0;
          break;
        case 2:
        case 3:
        case 4:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 100.0;
          break;
        case 5:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 100.0;
          break;
        case 6:
        case 7:
          fVar10 = FUN_00412150(param_1);
          piVar7 = (int *)(int)(50.0 / ((float)fVar10 * *(float *)(param_1 + 0x17c)));
          goto LAB_00410d39;
        case 10:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 100.0;
          break;
        case 0xc:
        case 0x10:
        case 0x43:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 200.0;
          break;
        case 0xd:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 200.0;
          break;
        case 0xe:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 100.0;
          break;
        case 0xf:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 200.0;
          break;
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 100.0;
          break;
        case 0x16:
          fVar10 = FUN_00412150(param_1);
          goto LAB_00410d21;
        case 0x17:
          fVar10 = FUN_00412150(param_1);
          piVar7 = (int *)(int)(50.0 / ((float)fVar10 * *(float *)(param_1 + 0x17c)));
          goto LAB_00410d39;
        case 0x18:
        case 0x19:
        case 0x1b:
        case 0x24:
        case 0x3b:
        case 0x3f:
        case 0x40:
          fVar10 = FUN_00412150(param_1);
          piVar7 = (int *)(int)(50.0 / ((float)fVar10 * *(float *)(param_1 + 0x17c)));
          goto LAB_00410d39;
        case 0x1a:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 300.0;
          break;
        default:
          fVar10 = FUN_00412150(param_1);
LAB_00410d21:
          fVar12 = (float)fVar10;
          fVar11 = 400.0;
          break;
        case 0x1e:
        case 0x20:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 800.0;
          break;
        case 0x1f:
        case 0x21:
          fVar10 = FUN_00412150(param_1);
          piVar7 = (int *)(int)(1600.0 / ((float)fVar10 * *(float *)(param_1 + 0x17c)));
          goto LAB_00410d39;
        case 0x22:
          fVar10 = FUN_00412150(param_1);
          piVar7 = (int *)(int)(1600.0 / ((float)fVar10 * *(float *)(param_1 + 0x17c)));
          goto LAB_00410d39;
        case 0x25:
        case 0x2b:
        case 0x59:
          if (*(char *)(param_1 + 0xaa9) == '\f') {
            fVar10 = FUN_00412150(param_1);
            piVar7 = (int *)(int)(600.0 / ((float)fVar10 * *(float *)(param_1 + 0x17c)));
          }
          else {
            fVar10 = FUN_00412150(param_1);
            piVar7 = (int *)(int)(1200.0 / ((float)fVar10 * *(float *)(param_1 + 0x17c)));
          }
          goto LAB_00410d39;
        case 0x26:
        case 0x2c:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 500.0;
          break;
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 200.0;
          break;
        case 0x2d:
        case 0x2e:
          fVar10 = FUN_00412150(param_1);
          piVar7 = (int *)(int)(1200.0 / ((float)fVar10 * *(float *)(param_1 + 0x17c)));
          goto LAB_00410d39;
        case 0x30:
        case 0x65:
          piVar7 = (int *)0x64;
          goto LAB_00410d39;
        case 0x36:
          piVar7 = (int *)0x190;
          goto LAB_00410d39;
        case 0x39:
        case 0x3a:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 800.0;
          break;
        case 0x41:
        case 0x42:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 300.0;
          break;
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 300.0;
          break;
        case 0x47:
        case 0x48:
          piVar7 = (int *)0xc8;
          goto LAB_00410d39;
        case 0x57:
          fVar10 = FUN_00412150(param_1);
          piVar7 = (int *)(int)(5000.0 / ((float)fVar10 * *(float *)(param_1 + 0x17c)));
          goto LAB_00410d39;
        case 0x5b:
          fVar10 = FUN_00412150(param_1);
          piVar7 = (int *)(int)(1000.0 / ((float)fVar10 * *(float *)(param_1 + 0x17c)));
          goto LAB_00410d39;
        case 0x5d:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 800.0;
          break;
        case 0x5e:
          fVar10 = FUN_00412150(param_1);
          fVar12 = (float)fVar10;
          fVar11 = 500.0;
          break;
        case 0x5f:
          fVar10 = FUN_00412150(param_1);
          piVar7 = (int *)(int)(1000.0 / ((float)fVar10 * *(float *)(param_1 + 0x17c)));
          goto LAB_00410d39;
        case 0x69:
          piVar7 = (int *)0x1388;
          goto LAB_00410d39;
        }
        piVar7 = (int *)(int)(fVar11 / (fVar12 * *(float *)(param_1 + 0x17c)));
LAB_00410d39:
        *(int **)(param_1 + 0x6c) = piVar7;
      }
    }
  }
LAB_00410d3c:
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return CONCAT31((int3)((uint)piVar7 >> 8),1);
code_r0x004108cd:
  piVar7 = (int *)*piVar7;
  if (piVar7 == piVar1) goto LAB_00410d3c;
  goto LAB_004108c7;
}


/* FUN_00410f00 @ 00410f00  kind=gamemisc  attributed-by=caller-vote  size=134 */

float10 FUN_00410f00(void)

{
  double dVar1;
  float fStack00000004;
  
  dVar1 = 2.0;
  libm_sse2_pow_precise();
  fStack00000004 = (float)dVar1;
  dVar1 = 2.0;
  libm_sse2_pow_precise();
  return (float10)(fStack00000004 * (float)dVar1);
}


/* FUN_00410f90 @ 00410f90  kind=gamemisc  attributed-by=caller-vote  size=173 */

float10 FUN_00410f90(void)

{
  double dVar1;
  float fStack00000004;
  
  dVar1 = 2.0;
  libm_sse2_pow_precise();
  fStack00000004 = (float)dVar1;
  dVar1 = 2.0;
  libm_sse2_pow_precise();
  fStack00000004 = fStack00000004 * (float)dVar1;
  dVar1 = 2.0;
  libm_sse2_pow_precise();
  return (float10)(fStack00000004 / (float)dVar1);
}


/* FUN_00411740 @ 00411740  kind=gamemisc  attributed-by=caller-vote  size=186 */

void __thiscall FUN_00411740(void *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  
  cVar1 = *param_1;
  if (((((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x03')) ||
      ((cVar1 == '\x06' || (cVar1 == '\a')))) ||
     ((cVar1 == '\t' || ((cVar1 == '\n' || (cVar1 == '\v')))))) {
    for (puVar2 = (undefined4 *)**(undefined4 **)((int)this + 0x1178);
        puVar2 != *(undefined4 **)((int)this + 0x1178); puVar2 = (undefined4 *)*puVar2) {
      if (*(char *)(puVar2 + 2) == cVar1) {
        *(undefined8 *)(puVar2 + 2) = *(undefined8 *)param_1;
        *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(param_1 + 0x10);
        return;
      }
    }
  }
  puVar2 = *(undefined4 **)((int)this + 0x1178);
  iVar3 = FUN_004203c0(puVar2,(undefined4 *)puVar2[1],(undefined8 *)param_1);
  if (*(int *)((int)this + 0x117c) != 0x7fffffe) {
    *(int *)((int)this + 0x117c) = *(int *)((int)this + 0x117c) + 1;
    puVar2[1] = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00411800 @ 00411800  kind=gamemisc  attributed-by=caller-vote  size=704 */

void __thiscall FUN_00411800(void *this,uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c [6];
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if ((*(byte *)((int)this + 0x7e) & 4) != 0) {
    FUN_00401cd0(&local_6c);
    fVar4 = *(float *)((int)this + 0x30) * 0.017453292;
    dVar6 = (double)fVar4;
    libm_sse2_cos_precise();
    fVar5 = (float)dVar6;
    dVar6 = (double)fVar4;
    libm_sse2_sin_precise();
    fVar7 = (float)dVar6;
    fVar9 = *(float *)((int)this + 0x84) * 0.5;
    fVar8 = *(float *)((int)this + 0x88) * 0.35;
    iVar3 = 0;
    fVar4 = 1.0 / (fVar9 * (local_50 * fVar5 - local_60 * fVar7) +
                   (local_50 * fVar7 + local_60 * fVar5) * 0.0 + local_40 * fVar8 + local_30);
    local_14 = fVar4 * (fVar9 * (local_5c * fVar5 - local_6c * fVar7) +
                        (local_5c * fVar7 + local_6c * fVar5) * 0.0 + local_4c * fVar8 + local_3c);
    local_10 = fVar4 * (fVar9 * (local_58 * fVar5 - local_68 * fVar7) +
                        (local_58 * fVar7 + local_68 * fVar5) * 0.0 + local_48 * fVar8 + local_38);
    local_c = fVar4 * (fVar9 * (local_54 * fVar5 - local_64 * fVar7) +
                       (local_54 * fVar7 + local_64 * fVar5) * 0.0 + local_44 * fVar8 + local_34);
    do {
      uVar10 = FUN_0054a946();
      local_2c[iVar3 * 2] = (uint)uVar10;
      local_2c[iVar3 * 2 + 1] = (uint)(uVar10 >> 0x20);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    *param_1 = *(uint *)((int)this + 0x10);
    param_1[1] = *(uint *)((int)this + 0x14);
    param_1[2] = *(uint *)((int)this + 0x18);
    param_1[3] = *(uint *)((int)this + 0x1c);
    param_1[4] = *(uint *)((int)this + 0x20);
    param_1[5] = *(uint *)((int)this + 0x24);
    uVar2 = *param_1;
    *param_1 = *param_1 + local_2c[0];
    param_1[1] = param_1[1] + local_2c[1] + (uint)CARRY4(uVar2,local_2c[0]);
    puVar1 = param_1 + 2;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + local_2c[2];
    param_1[3] = param_1[3] + local_2c[3] + (uint)CARRY4(uVar2,local_2c[2]);
    puVar1 = param_1 + 4;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + local_2c[4];
    param_1[5] = param_1[5] + local_2c[5] + (uint)CARRY4(uVar2,local_2c[4]);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *param_1 = *(uint *)((int)this + 0x10);
  param_1[1] = *(uint *)((int)this + 0x14);
  param_1[2] = *(uint *)((int)this + 0x18);
  param_1[3] = *(uint *)((int)this + 0x1c);
  param_1[4] = *(uint *)((int)this + 0x20);
  param_1[5] = *(uint *)((int)this + 0x24);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00411d60 @ 00411d60  kind=gamemisc  attributed-by=caller-vote  size=662 */

int __thiscall FUN_00411d60(void *this,uint param_1)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  if ((int)param_1 < 0) {
    param_1 = (uint)*(byte *)((int)this + 0x68);
  }
  switch(param_1) {
  case 0:
  case 0x31:
    return 0;
  case 1:
  case 2:
  case 9:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 3:
  case 4:
  case 0x3e:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 5:
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x41:
  case 0x42:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 400.0;
    break;
  case 6:
  case 7:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 150.0;
    break;
  default:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    goto LAB_00411fd9;
  case 10:
    return 200;
  case 0xb:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    goto LAB_00411fd9;
  case 0xd:
  case 0xe:
  case 0xf:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0x12:
  case 0x13:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 150.0;
    break;
  case 0x14:
  case 0x15:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 400.0;
    break;
  case 0x16:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 50.0;
    break;
  case 0x17:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 50.0;
    break;
  case 0x1a:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 1200.0;
    break;
  case 0x1e:
  case 0x20:
  case 0x49:
  case 0x5d:
    return 600;
  case 0x1f:
  case 0x21:
    return 0x4b0;
  case 0x22:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 1200.0;
    break;
  case 0x25:
  case 0x2b:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2c:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    goto LAB_00411fd9;
  case 0x2d:
  case 0x2e:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 0x32:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x60:
    return 500;
  case 0x36:
    return 100;
  case 0x37:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 0x43:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0x44:
  case 0x45:
    return 1000;
  case 0x47:
    return 3000;
  case 0x48:
  case 0x56:
    return 5000;
  case 0x4b:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    goto LAB_00411fd9;
  case 0x5b:
    return 6000;
  case 0x5e:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 0x5f:
    return 2000;
  case 0x68:
    fVar1 = FUN_00412150((int)this);
    fVar3 = (float)fVar1;
LAB_00411fd9:
    fVar2 = 300.0;
  }
  return (int)(fVar2 / (fVar3 * *(float *)((int)this + 0x17c)));
}


/* FUN_00412150 @ 00412150  kind=gamemisc  attributed-by=caller-vote  size=427 */

float10 __fastcall FUN_00412150(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float fVar6;
  float local_8;
  
  local_8 = 1.0;
  if (*(char *)(param_1 + 0x60) != '\0') {
    local_8 = (float)*(byte *)(param_1 + 0x1a8) * 0.0625 + 0.75;
  }
  cVar1 = *(char *)(param_1 + 0x140);
  if ((cVar1 == '\x01') && (*(char *)(param_1 + 0x141) == '\0')) {
    iVar3 = FUN_0040fcf0(param_1);
    if ((float)*(int *)(param_1 + 0x70) / (float)iVar3 <= 1.0) {
      iVar3 = FUN_0040fcf0(param_1);
      fVar6 = (float)*(int *)(param_1 + 0x70) / (float)iVar3;
    }
    else {
      fVar6 = 1.0;
    }
    local_8 = fVar6 * 0.5 + local_8;
  }
  if ((cVar1 == '\x03') && (*(char *)(param_1 + 0x141) == '\x01')) {
    iVar3 = FUN_0040fcf0(param_1);
    if ((float)*(int *)(param_1 + 0x70) / (float)iVar3 <= 1.0) {
      iVar3 = FUN_0040fcf0(param_1);
      fVar6 = (float)*(int *)(param_1 + 0x70) / (float)iVar3;
    }
    else {
      fVar6 = 1.0;
    }
    local_8 = fVar6 + local_8;
  }
  fVar5 = FUN_00412300(param_1);
  piVar2 = *(int **)(param_1 + 0x1178);
  local_8 = (float)fVar5 + local_8;
  piVar4 = (int *)*piVar2;
  if (piVar4 != piVar2) {
    while ((char)piVar4[2] != '\f') {
      piVar4 = (int *)*piVar4;
      if (piVar4 == piVar2) {
        return (float10)local_8;
      }
    }
    if (piVar4 != (int *)0xfffffff8) {
      iVar3 = *(int *)(param_1 + 0x1158);
      if ((iVar3 == 0) && (*(char *)(param_1 + 0x60) != '\0')) {
        iVar3 = *(int *)(param_1 + 400) / 2 + *(byte *)(param_1 + 0x1a8) + 1;
      }
      local_8 = ((1.0 - 1.0 / ((float)iVar3 * 0.1 + 1.0)) + 1.0) * local_8;
    }
  }
  return (float10)local_8;
}


/* FUN_00412300 @ 00412300  kind=gamemisc  attributed-by=caller-vote  size=586 */

float10 __fastcall FUN_00412300(int param_1)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  dVar2 = 2.0;
  libm_sse2_pow_precise();
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  dVar4 = 2.0;
  libm_sse2_pow_precise();
  local_8 = (((float)dVar2 * (float)dVar3) / (float)dVar4) * 0.1;
  if (*(char *)(param_1 + 0x990) == '\x03') {
    fVar1 = FUN_00414350((char *)(param_1 + 0x990));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0xaa8) == '\x03') {
    fVar1 = FUN_00414350((char *)(param_1 + 0xaa8));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x530) == '\x04') {
    fVar1 = FUN_00414350((char *)(param_1 + 0x530));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x648) == '\x06') {
    fVar1 = FUN_00414350((char *)(param_1 + 0x648));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x760) == '\x05') {
    fVar1 = FUN_00414350((char *)(param_1 + 0x760));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x878) == '\a') {
    fVar1 = FUN_00414350((char *)(param_1 + 0x878));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x418) == '\b') {
    fVar1 = FUN_00414350((char *)(param_1 + 0x418));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0xbc0) == '\t') {
    fVar1 = FUN_00414350((char *)(param_1 + 0xbc0));
    local_8 = (float)fVar1 + local_8;
  }
  local_c = local_8;
  if (*(char *)(param_1 + 0xcd8) == '\t') {
    fVar1 = FUN_00414350((char *)(param_1 + 0xcd8));
    local_c = (float)fVar1 + local_8;
  }
  return (float10)local_c;
}


/* FUN_00413ce0 @ 00413ce0  kind=gamemisc  attributed-by=caller-vote  size=260 */

float10 __fastcall FUN_00413ce0(char *param_1)

{
  char cVar1;
  float10 fVar2;
  float local_c;
  float local_8;
  
  cVar1 = *param_1;
  if ((((cVar1 != '\x03') && (cVar1 != '\x04')) && (cVar1 != '\a')) &&
     ((cVar1 != '\x05' && (cVar1 != '\x06')))) {
    return (float10)0;
  }
  local_c = 0.5;
  if (cVar1 == '\x04') {
    local_c = 1.0;
  }
  cVar1 = param_1[0xd];
  local_8 = (1.0 - ((float)(int)((ulonglong)(uint)(*(int *)(param_1 + 4) << 3) % 0x15) + 0.0) / 20.0
            ) + 1.0;
  if (cVar1 == '\x01') {
    local_8 = local_8 + 1.0;
  }
  else if (cVar1 == '\x1a') {
    local_8 = local_8 + 0.5;
  }
  else if (cVar1 == '\x1b') {
    local_8 = local_8 + 0.75;
  }
  fVar2 = FUN_00410f00();
  return (float10)((float)fVar2 * 5.0 * local_c * local_8);
}


/* FUN_00414350 @ 00414350  kind=gamemisc  attributed-by=caller-vote  size=275 */

float10 __fastcall FUN_00414350(char *param_1)

{
  char cVar1;
  char cVar2;
  float10 fVar3;
  float local_c;
  float local_8;
  
  cVar1 = *param_1;
  if ((((cVar1 == '\b') || (cVar1 == '\t')) || (cVar1 == '\x03')) ||
     (((cVar1 == '\x04' || (cVar1 == '\a')) || ((cVar1 == '\x05' || (cVar1 == '\x06')))))) {
    local_8 = 0.1;
    if (((cVar1 == '\x03') &&
        ((((cVar2 = param_1[1], cVar2 == '\x0f' || (cVar2 == '\x10')) ||
          ((cVar2 == '\x11' ||
           ((((cVar2 == '\x05' || (cVar2 == '\n')) || (cVar2 == '\v')) ||
            ((cVar2 == '\x12' || (cVar2 == '\b')))))))) || ((cVar2 == '\x06' || (cVar2 == '\a'))))))
       || (cVar1 == '\x04')) {
      local_8 = 0.2;
    }
    local_c = ((float)(int)((ulonglong)*(uint *)(param_1 + 4) % 0x15) + 0.0) / 20.0;
    if (param_1[0xd] == '\f') {
      local_c = local_c + 1.0;
    }
    fVar3 = FUN_00410f90();
    local_c = (float)fVar3 * local_8 * local_c;
    if (0.001 <= local_c) {
      return (float10)local_c;
    }
  }
  return (float10)0;
}


/* FUN_0041b900 @ 0041b900  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_0041b900(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00407b60(param_1,param_2);
  if ((void *)(iVar1 + 8) != (void *)0x0) {
    FUN_0041b970((void *)(iVar1 + 8),param_3);
  }
  return iVar1;
}


/* FUN_0041b970 @ 0041b970  kind=gamemisc  attributed-by=caller-vote  size=98 */

void * __thiscall FUN_0041b970(void *this,undefined1 *param_1)

{
  FUN_00413710(this,param_1);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined1 *)((int)this + 0x128) = param_1[0x128];
  *(undefined2 *)((int)this + 0x12a) = *(undefined2 *)(param_1 + 0x12a);
  return this;
}


/* FUN_0041b9e0 @ 0041b9e0  kind=gamemisc  attributed-by=caller-vote  size=123 */

undefined2 * __fastcall FUN_0041b9e0(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  memset(param_1 + 10,0,0x100);
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  param_1[0x95] = 1;
  *(undefined4 *)(param_1 + 0x92) = 0;
  return param_1;
}


/* FUN_00420080 @ 00420080  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00420080(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00407ba0(param_1,param_2);
  if ((undefined8 *)(iVar1 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)(iVar1 + 8) = *param_3;
    *(undefined8 *)(iVar1 + 0x10) = param_3[1];
    *(undefined8 *)(iVar1 + 0x18) = param_3[2];
    *(undefined8 *)(iVar1 + 0x20) = param_3[3];
    *(undefined8 *)(iVar1 + 0x28) = param_3[4];
  }
  return;
}


/* FUN_004203c0 @ 004203c0  kind=gamemisc  attributed-by=caller-vote  size=56 */

void FUN_004203c0(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004f7b60(param_1,param_2);
  if ((undefined8 *)(iVar1 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)(iVar1 + 8) = *param_3;
    *(undefined8 *)(iVar1 + 0x10) = param_3[1];
    *(undefined8 *)(iVar1 + 0x18) = param_3[2];
  }
  return;
}


/* FUN_004c5c10 @ 004c5c10  kind=gamemisc  attributed-by=caller-vote  size=71 */

void __cdecl FUN_004c5c10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
    }
    param_3 = param_3 + 6;
  }
  return;
}


/* FUN_004c5c60 @ 004c5c60  kind=gamemisc  attributed-by=caller-vote  size=157 */

undefined4 * __thiscall FUN_004c5c60(void *this,int *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005542f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_004c5d90(this,(param_1[1] - *param_1) / 0x18);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    uVar1 = FUN_004c5c10((undefined4 *)*param_1,(undefined4 *)param_1[1],*(undefined4 **)this);
    *(undefined4 *)((int)this + 4) = uVar1;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_004c5d90 @ 004c5d90  kind=gamemisc  attributed-by=caller-vote  size=102 */

undefined4 __thiscall FUN_004c5d90(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0xaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)this = pvVar1;
    *(void **)((int)this + 4) = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x18);
    *(void **)((int)this + 8) = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_004c7180 @ 004c7180  kind=gamemisc  attributed-by=caller-vote  size=511 */

void __thiscall
FUN_004c7180(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if (0xcccccca < *(uint *)((int)this + 4)) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_004d9b50(this,param_4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = piVar3;
    **(undefined4 **)this = piVar3;
    iVar4 = *(int *)this;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == (undefined4 *)**(int **)this) {
        **(int **)this = (int)piVar3;
      }
      goto LAB_004c71de;
    }
    param_3[2] = piVar3;
    iVar4 = *(int *)this;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_004c71de;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_004c71de:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = piVar3;
      return;
    }
    piVar7 = (int *)piVar5[1];
    piVar6 = *(int **)piVar7[1];
    if (piVar7 == piVar6) {
      piVar6 = (int *)((undefined4 *)piVar7[1])[2];
      if ((char)piVar6[3] != '\0') {
        if (piVar5 == (int *)piVar7[2]) {
          piVar5 = (int *)piVar7[2];
          piVar7[2] = *piVar5;
          if (*(char *)(*piVar5 + 0xd) == '\0') {
            *(int **)(*piVar5 + 4) = piVar7;
          }
          piVar5[1] = piVar7[1];
          if (piVar7 == *(int **)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar5;
          }
          else {
            piVar6 = (int *)piVar7[1];
            if (piVar7 == (int *)*piVar6) {
              *piVar6 = (int)piVar5;
            }
            else {
              piVar6[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar7;
          piVar7[1] = (int)piVar5;
          piVar5 = piVar7;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar7 = *(int **)(piVar5[1] + 4);
        piVar6 = (int *)*piVar7;
        *piVar7 = piVar6[2];
        if (*(char *)(piVar6[2] + 0xd) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar7;
        }
        piVar6[1] = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar6;
          piVar6[2] = (int)piVar7;
        }
        else {
          piVar2 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
        }
        goto LAB_004c735a;
      }
LAB_004c72b1:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_004c72b1;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int *)(*(int *)this + 4) = iVar4;
        }
        else {
          piVar5 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar5[2]) {
            piVar5[2] = iVar4;
          }
          else {
            *piVar5 = iVar4;
          }
        }
        *(int **)(iVar4 + 8) = piVar7;
        piVar7[1] = iVar4;
        piVar5 = piVar7;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar7 = *(int **)(piVar5[1] + 4);
      piVar6 = (int *)piVar7[2];
      piVar7[2] = *piVar6;
      if (*(char *)(*piVar6 + 0xd) == '\0') {
        *(int **)(*piVar6 + 4) = piVar7;
      }
      piVar6[1] = piVar7[1];
      if (piVar7 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar7;
LAB_004c735a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_004ce9f0 @ 004ce9f0  kind=gamemisc  attributed-by=caller-vote  size=139 */

void FUN_004ce9f0(void *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  FUN_00411740(param_1,param_2);
  local_1c = *(undefined8 *)param_2;
  local_2c = *(undefined4 *)((int)param_1 + 8);
  local_28 = *(undefined4 *)((int)param_1 + 0xc);
  local_14 = *(undefined8 *)(param_2 + 8);
  local_c = *(undefined8 *)(param_2 + 0x10);
  puVar1 = *(undefined4 **)(param_3 + 0x58);
  local_24 = local_2c;
  local_20 = local_28;
  iVar2 = FUN_00420080(puVar1,(undefined4 *)puVar1[1],(undefined8 *)&local_2c);
  if (*(int *)(param_3 + 0x5c) == 0x5555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004cfcc0 @ 004cfcc0  kind=gamemisc  attributed-by=caller-vote  size=141 */

int FUN_004cfcc0(int param_1,int param_2)

{
  char cVar1;
  undefined4 in_EAX;
  uint3 uVar4;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *(char *)(param_1 + 0x60);
  uVar4 = (uint3)((uint)in_EAX >> 8);
  uVar3 = CONCAT31(uVar4,cVar1);
  if ((((cVar1 == '\x05') && (*(char *)(param_2 + 0x60) == '\0')) || (cVar1 == '\x06')) ||
     (*(char *)(param_2 + 0x60) == '\x06')) {
    return (uint)uVar4 << 8;
  }
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x60) != '\x01') goto LAB_004cfd44;
    uVar2 = FUN_0040f710(param_1);
    uVar3 = FUN_0040f710(param_2);
    if ((char)uVar3 != (char)uVar2) goto LAB_004cfd44;
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(char *)(param_1 + 0x60) != '\x01') goto LAB_004cfd44;
    uVar2 = FUN_0040f710(param_1);
    uVar3 = FUN_0040f710(param_2);
    if ((char)uVar2 != (char)uVar3) goto LAB_004cfd44;
  }
  if (((*(byte *)(param_1 + 0x124) & 0x20) == 0) && ((*(byte *)(param_2 + 0x124) & 0x20) == 0)) {
    return uVar3 & 0xffffff00;
  }
LAB_004cfd44:
  return CONCAT31((int3)(uVar3 >> 8),1);
}


/* FUN_004d4c20 @ 004d4c20  kind=gamemisc  attributed-by=caller-vote  size=345 */

int __thiscall FUN_004d4c20(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  void *this_00;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_14;
  int local_10;
  
  iVar1 = FUN_00406290(this,(int)(param_1 + (param_1 >> 0x1f & 0xffU)) >> 8,
                       (int)(param_2 + (param_2 >> 0x1f & 0xffU)) >> 8);
  if ((iVar1 == 0) || (piVar9 = *(int **)(iVar1 + 0x88), piVar9 == *(int **)(iVar1 + 0x8c))) {
    return 0;
  }
  do {
    iVar10 = 0;
    local_10 = 0;
    while( true ) {
      this_00 = (void *)*piVar9;
      uVar3 = *(uint *)((int)this_00 + 4) & 0x80000001;
      bVar12 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar12 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar12) {
        iVar5 = *(int *)((int)this_00 + 100);
      }
      else {
        iVar5 = *(int *)((int)this_00 + 0x68);
      }
      if (iVar5 <= iVar10) break;
      iVar7 = 0;
      iVar5 = 0;
      while( true ) {
        uVar3 = *(uint *)((int)this_00 + 4) & 0x80000001;
        bVar12 = uVar3 == 0;
        if ((int)uVar3 < 0) {
          bVar12 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar12) {
          iVar11 = *(int *)((int)this_00 + 0x68);
        }
        else {
          iVar11 = *(int *)((int)this_00 + 100);
        }
        if (iVar11 <= iVar7) break;
        iVar11 = 0;
        if (0 < *(int *)((int)this_00 + 0x6c)) {
          local_14 = 0;
          do {
            pcVar2 = FUN_004d1950(this_00,iVar10,iVar7,iVar11);
            if (*pcVar2 == '\x01') {
              iVar6 = *piVar9;
              iVar8 = *(int *)(iVar6 + 0xc) + local_10;
              iVar4 = *(int *)(iVar6 + 0x10) + iVar5;
              iVar6 = *(int *)(iVar6 + 0x14) + local_14;
              if ((((iVar8 <= param_1) && (iVar4 <= param_2)) && (iVar6 <= param_3)) &&
                 (((param_1 <= iVar8 + 0xd && (param_2 <= iVar4 + 0xd)) && (param_3 <= iVar6 + 6))))
              {
                return *piVar9;
              }
            }
            this_00 = (void *)*piVar9;
            local_14 = local_14 + 7;
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)((int)this_00 + 0x6c));
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0xd;
      }
      iVar10 = iVar10 + 1;
      local_10 = local_10 + 0xd;
    }
    piVar9 = piVar9 + 1;
    if (piVar9 == *(int **)(iVar1 + 0x8c)) {
      return 0;
    }
  } while( true );
}


/* FUN_004d4d80 @ 004d4d80  kind=gamemisc  attributed-by=caller-vote  size=472 */

void FUN_004d4d80(uint *param_1,uint *param_2,char param_3,float param_4)

{
  float10 fVar1;
  double dVar2;
  float fVar3;
  float local_44;
  void *local_40;
  uint *local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  uint local_c;
  
  local_c = DAT_00583cc8 ^ (uint)&local_44;
  local_3c = param_1;
  local_28 = *param_2 - *param_1;
  iStack_24 = (param_2[1] - param_1[1]) - (uint)(*param_2 < *param_1);
  local_20 = param_2[2] - param_1[2];
  iStack_1c = (param_2[3] - param_1[3]) - (uint)(param_2[2] < param_1[2]);
  local_18 = param_2[4] - param_1[4];
  iStack_14 = (param_2[5] - param_1[5]) - (uint)(param_2[4] < param_1[4]);
  local_34 = (float)CONCAT44(iStack_24,local_28) * 1.5258789e-05;
  local_30 = (float)CONCAT44(iStack_1c,local_20) * 1.5258789e-05;
  local_44 = (float)CONCAT44(iStack_14,local_18) * 1.5258789e-05;
  fVar3 = local_30 * local_30 + local_34 * local_34 + local_44 * local_44;
  if (fVar3 < 0.0001) {
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
  if (param_4 * param_4 < fVar3) {
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
  dVar2 = (double)fVar3;
  libm_sse2_sqrt_precise();
  local_38 = (float)dVar2;
  local_34 = local_34 / local_38;
  local_30 = local_30 / local_38;
  local_2c = local_44 / local_38;
  fVar1 = (float10)FUN_004d6730(local_40,local_3c,&local_34,local_38,'\0',param_3);
  local_40 = (void *)(float)fVar1;
  __security_check_cookie(local_c ^ (uint)&local_44);
  return;
}


/* FUN_004d4f90 @ 004d4f90  kind=gamemisc  attributed-by=caller-vote  size=1952 */

/* WARNING: Removing unreachable block (ram,0x004d5645) */
/* WARNING: Removing unreachable block (ram,0x004d558a) */
/* WARNING: Removing unreachable block (ram,0x004d56ea) */

void __thiscall FUN_004d4f90(void *this,uint *param_1,float *param_2,char param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  void *this_00;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  uint local_2c [6];
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = CONCAT44(param_2[1] * 0.5,*param_2 * 0.5);
  local_c = param_2[2] * 0.5;
  iVar15 = 0;
  do {
    uVar21 = FUN_0054a946();
    local_2c[iVar15 * 2] = (uint)uVar21;
    local_2c[iVar15 * 2 + 1] = (uint)(uVar21 >> 0x20);
    iVar15 = iVar15 + 1;
  } while (iVar15 < 3);
  bVar19 = param_1[2] < local_2c[2];
  uVar14 = param_1[2] - local_2c[2];
  iVar15 = param_1[3] - local_2c[3];
  bVar20 = param_1[4] < local_2c[4];
  uVar13 = param_1[4] - local_2c[4];
  uVar10 = param_1[5];
  iVar7 = uVar10 - local_2c[5];
  uVar22 = __alldiv(*param_1 - local_2c[0],
                    (param_1[1] - local_2c[1]) - (uint)(*param_1 < local_2c[0]),0x10000,0);
  uVar23 = __alldiv(uVar14,iVar15 - (uint)bVar19,0x10000,0);
  uVar24 = __alldiv(uVar13,iVar7 - (uint)bVar20,0x10000,0);
  iVar15 = 0;
  local_14 = CONCAT44(param_2[1] * 0.5,*param_2 * 0.5);
  local_c = param_2[2] * 0.5;
  do {
    uVar21 = FUN_0054a946();
    local_2c[iVar15 * 2] = (uint)uVar21;
    local_2c[iVar15 * 2 + 1] = (uint)(uVar21 >> 0x20);
    iVar15 = iVar15 + 1;
  } while (iVar15 < 3);
  uVar13 = param_1[2];
  uVar14 = param_1[3];
  uVar16 = param_1[4];
  uVar25 = __alldiv(*param_1 + local_2c[0],
                    param_1[1] + local_2c[1] + (uint)CARRY4(*param_1,local_2c[0]),0x10000,0);
  uVar26 = __alldiv(uVar13 + local_2c[2],uVar14 + local_2c[3] + (uint)CARRY4(uVar13,local_2c[2]),
                    0x10000,0);
  uVar27 = __alldiv(uVar16 + local_2c[4],uVar10 + local_2c[5] + (uint)CARRY4(uVar16,local_2c[4]),
                    0x10000,0);
  for (uVar10 = (uint)uVar22; uVar13 = (uint)uVar23, (int)uVar10 <= (int)uVar25; uVar10 = uVar10 + 1
      ) {
    for (; iVar15 = (int)uVar24, (int)uVar13 <= (int)uVar26; uVar13 = uVar13 + 1) {
      for (; iVar15 <= (int)uVar27; iVar15 = iVar15 + 1) {
        if ((((((int)uVar10 <= (int)(uint)uVar22) || ((int)uVar25 <= (int)uVar10)) ||
             ((int)uVar13 <= (int)(uint)uVar23)) ||
            (((int)uVar26 <= (int)uVar13 || (iVar15 <= (int)uVar24)))) || ((int)uVar27 <= iVar15)) {
          if ((((int)uVar10 < 0) || ((int)uVar13 < 0)) ||
             ((0xffffff < (int)uVar10 || (0xffffff < (int)uVar13)))) {
LAB_004d52f7:
            puVar9 = &DAT_00584248;
          }
          else {
            iVar7 = ((int)uVar13 >> 0x1f & 0xffU) + uVar13;
            uVar16 = iVar7 >> 8;
            iVar8 = ((int)uVar10 >> 0x1f & 0xffU) + uVar10;
            uVar14 = iVar8 >> 8;
            if (((((int)uVar14 < 0) || ((int)uVar16 < 0)) || (0xffff < (int)uVar14)) ||
               (0xffff < (int)uVar16)) goto LAB_004d52f7;
            iVar7 = (int)(uVar16 + (iVar7 >> 0x1f & 0x3fU)) >> 6;
            iVar8 = (int)(uVar14 + (iVar8 >> 0x1f & 0x3fU)) >> 6;
            if (((iVar8 < 0) || (iVar7 < 0)) ||
               ((0x3ff < iVar8 ||
                ((0x3ff < iVar7 ||
                 (iVar7 = *(int *)((int)this + (iVar8 * 0x400 + iVar7) * 4 + 0xbc), iVar7 == 0))))))
            goto LAB_004d52f7;
            uVar14 = uVar14 & 0x8000003f;
            if ((int)uVar14 < 0) {
              uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
            }
            uVar16 = uVar16 & 0x8000003f;
            if ((int)uVar16 < 0) {
              uVar16 = (uVar16 - 1 | 0xffffffc0) + 1;
            }
            iVar7 = *(int *)(iVar7 + 0x10018 + (uVar14 * 0x40 + uVar16) * 4);
            if (iVar7 == 0) goto LAB_004d52f7;
            uVar14 = uVar13 & 0x800000ff;
            if ((int)uVar14 < 0) {
              uVar14 = (uVar14 - 1 | 0xffffff00) + 1;
            }
            uVar16 = uVar10 & 0x800000ff;
            if ((int)uVar16 < 0) {
              uVar16 = (uVar16 - 1 | 0xffffff00) + 1;
            }
            this_00 = (void *)((uVar14 * 0x100 + uVar16) * 0x20 + *(int *)(iVar7 + 0xa8));
            if ((this_00 == (void *)0x0) || (iVar7 = *(int *)((int)this_00 + 0x10), iVar15 < iVar7))
            goto LAB_004d52f7;
            if (iVar15 < *(int *)((int)this_00 + 0x1c) + iVar7) {
              puVar9 = FUN_00405f20(this_00,iVar15 - iVar7);
              if ((((puVar9[3] & 0x1f) == 0) && (iVar15 < 1)) && ((puVar9[3] & 0x40) == 0)) {
                puVar9 = &DAT_00584240;
              }
            }
            else {
              puVar9 = &DAT_00584240;
              if (0 < iVar15) {
                puVar9 = &DAT_00584244;
              }
            }
          }
          if (((puVar9[3] & 0x1f) != 0) && ((puVar9[3] & 0x1f) != 2)) goto LAB_004d54bb;
        }
      }
    }
  }
  if (param_3 != '\0') {
    uVar22 = __alldiv(*param_1,param_1[1],0x10000,0);
    iVar15 = (int)(((int)uVar22 >> 0x1f & 7U) + (int)uVar22) >> 3;
    uVar22 = __alldiv(param_1[2],param_1[3],0x10000,0);
    uVar10 = iVar15 - 1;
    iVar15 = iVar15 + 1;
    iVar7 = (int)((int)uVar22 + ((int)uVar22 >> 0x1f & 7U)) >> 3;
    if ((int)uVar10 <= iVar15) {
      uVar13 = iVar7 - 1;
      uVar14 = uVar13;
      do {
        for (; (int)uVar14 <= iVar7 + 1; uVar14 = uVar14 + 1) {
          if (((-1 < (int)uVar10) && (-1 < (int)uVar14)) &&
             (((int)uVar10 < 0x200000 &&
              (((int)uVar14 < 0x200000 &&
               (iVar8 = FUN_00406290(this,(int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5,
                                     (int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5), iVar8 != 0
               )))))) {
            uVar16 = uVar14 & 0x8000001f;
            if ((int)uVar16 < 0) {
              uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
            }
            uVar11 = uVar10 & 0x8000001f;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
            }
            piVar2 = (int *)(*(int *)(iVar8 + 0xac) + (uVar16 * 0x20 + uVar11) * 8);
            if (piVar2 != (int *)0x0) {
              puVar3 = (undefined4 *)*piVar2;
              for (puVar4 = (undefined4 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined4 *)*puVar4)
              {
                piVar2 = (int *)puVar4[2];
                iVar8 = *piVar2;
                if ((((iVar8 != 7) && (iVar8 != 6)) && (iVar8 != 9)) &&
                   ((((iVar8 != 1 && (iVar8 != 8)) &&
                     ((iVar8 != 2 && ((iVar8 != 3 && (iVar8 != 5)))))) ||
                    ((char)piVar2[0xc] != '\0')))) {
                  local_c = (float)piVar2[0xb];
                  local_14 = *(undefined8 *)(piVar2 + 9);
                  uVar21 = FUN_0054a946();
                  uVar28 = FUN_0054a946();
                  iVar18 = (int)(uVar28 >> 0x20);
                  uVar11 = (uint)uVar28;
                  uVar16 = piVar2[2];
                  iVar17 = (piVar2[3] - (int)(uVar21 >> 0x20)) - (uint)(uVar16 < (uint)uVar21);
                  iVar12 = iVar18 + param_1[1] + (uint)CARRY4(uVar11,*param_1);
                  iVar8 = puVar4[2];
                  if ((iVar17 <= iVar12) &&
                     (((iVar17 < iVar12 || (uVar16 - (uint)uVar21 <= uVar11 + *param_1)) &&
                      (CONCAT44((param_1[1] - iVar18) - (uint)(*param_1 < uVar11),*param_1 - uVar11)
                       < (longlong)(uVar21 + *(longlong *)(piVar2 + 2)))))) {
                    uVar21 = FUN_0054a946();
                    uVar28 = FUN_0054a946();
                    iVar12 = (int)(uVar28 >> 0x20);
                    uVar11 = (uint)uVar28;
                    puVar1 = (uint *)(iVar8 + 0x10);
                    uVar16 = *puVar1;
                    iVar18 = (*(int *)(iVar8 + 0x14) - (int)(uVar21 >> 0x20)) -
                             (uint)(uVar16 < (uint)uVar21);
                    iVar8 = iVar12 + param_1[3] + (uint)CARRY4(uVar11,param_1[2]);
                    if ((iVar18 <= iVar8) &&
                       (((iVar18 < iVar8 || (uVar16 - (uint)uVar21 <= uVar11 + param_1[2])) &&
                        (CONCAT44((param_1[3] - iVar12) - (uint)(param_1[2] < uVar11),
                                  param_1[2] - uVar11) < (longlong)(uVar21 + *(longlong *)puVar1))))
                       ) {
                      uVar16 = param_1[4];
                      puVar1 = (uint *)(puVar4[2] + 0x18);
                      uVar11 = *puVar1;
                      iVar8 = *(int *)(puVar4[2] + 0x1c);
                      lVar6 = *(longlong *)puVar1;
                      uVar21 = FUN_0054a946();
                      uVar5 = param_1[5];
                      iVar12 = (int)(uVar21 >> 0x20) + uVar5 + (uint)CARRY4((uint)uVar21,uVar16);
                      if ((iVar8 <= iVar12) &&
                         ((iVar8 < iVar12 || (uVar11 <= (uint)uVar21 + uVar16)))) {
                        uVar21 = FUN_0054a946();
                        uVar28 = FUN_0054a946();
                        if (CONCAT44((uVar5 - (int)(uVar21 >> 0x20)) - (uint)(uVar16 < (uint)uVar21)
                                     ,uVar16 - (uint)uVar21) < (longlong)(uVar28 + lVar6)) {
LAB_004d54bb:
                          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
        uVar14 = uVar13;
      } while ((int)uVar10 <= iVar15);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d5f40 @ 004d5f40  kind=gamemisc  attributed-by=caller-vote  size=617 */

void FUN_004d5f40(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  int *piVar10;
  uint *puVar11;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  local_4c = *(undefined4 *)(param_1 + 8);
  puVar11 = (uint *)(param_1 + 8);
  local_48 = *(undefined4 *)(param_1 + 0xc);
  local_54 = *(undefined4 *)(param_2 + 8);
  local_50 = *(undefined4 *)(param_2 + 0xc);
  puVar6 = FUN_00402b10((void *)(param_2 + 0x13a4),puVar11);
  local_44 = *puVar6;
  local_38 = (undefined4 *)(param_3 + 0x50);
  puVar2 = (undefined4 *)*local_38;
  iVar7 = FUN_004203c0(puVar2,(undefined4 *)puVar2[1],(undefined8 *)&local_54);
  if (local_38[1] != 0x7fffffe) {
    local_38[1] = local_38[1] + 1;
    puVar2[1] = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
    piVar10 = (int *)**(int **)(local_34 + 4);
    iVar7 = local_34;
    if (piVar10 != *(int **)(local_34 + 4)) {
      do {
        iVar3 = piVar10[6];
        if ((((iVar3 != 0) && (iVar3 != local_3c)) && (iVar3 != param_2)) &&
           (uVar8 = FUN_004cfcc0(iVar3,local_3c), iVar7 = local_34, (char)uVar8 != '\0')) {
          iVar3 = piVar10[6];
          local_20._0_4_ = (uint)*(undefined8 *)(iVar3 + 0x10);
          local_20._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar3 + 0x10) >> 0x20);
          local_20 = CONCAT44((local_20._4_4_ - *(int *)(param_2 + 0x14)) -
                              (uint)((uint)local_20 < *(uint *)(param_2 + 0x10)),
                              (uint)local_20 - *(uint *)(param_2 + 0x10));
          local_18._0_4_ = (uint)*(undefined8 *)(iVar3 + 0x18);
          local_18._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar3 + 0x18) >> 0x20);
          local_18 = CONCAT44((local_18._4_4_ - *(int *)(param_2 + 0x1c)) -
                              (uint)((uint)local_18 < *(uint *)(param_2 + 0x18)),
                              (uint)local_18 - *(uint *)(param_2 + 0x18));
          local_10._0_4_ = (uint)*(undefined8 *)(iVar3 + 0x20);
          local_10._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar3 + 0x20) >> 0x20);
          local_10 = CONCAT44((local_10._4_4_ - *(int *)(param_2 + 0x24)) -
                              (uint)((uint)local_10 < *(uint *)(param_2 + 0x20)),
                              (uint)local_10 - *(uint *)(param_2 + 0x20));
          local_2c = (float)local_20 * 1.5258789e-05;
          local_30 = (float)local_10;
          local_28 = (float)local_18 * 1.5258789e-05;
          local_24 = local_30 * 1.5258789e-05;
          if ((local_28 * local_28 + local_2c * local_2c + local_24 * local_24 < 64.0) &&
             (pfVar9 = (float *)FUN_00402b10((void *)(iVar3 + 0x13a4),puVar11), iVar7 = local_34,
             *pfVar9 == 0.0)) {
            puVar6 = FUN_00402b10((void *)(piVar10[6] + 0x13a4),puVar11);
            *puVar6 = 0x3f000000;
            local_64 = *puVar11;
            iVar7 = piVar10[6];
            local_60 = *(undefined4 *)(param_1 + 0xc);
            local_6c = *(undefined4 *)(iVar7 + 8);
            local_68 = *(undefined4 *)(iVar7 + 0xc);
            puVar6 = FUN_00402b10((void *)(iVar7 + 0x13a4),puVar11);
            local_5c = *puVar6;
            FUN_004d6580(local_38,(undefined8 *)&local_6c);
            iVar7 = local_34;
          }
        }
        if (*(char *)((int)piVar10 + 0xd) == '\0') {
          piVar4 = (int *)piVar10[2];
          if (*(char *)((int)piVar4 + 0xd) == '\0') {
            cVar1 = *(char *)(*piVar4 + 0xd);
            piVar10 = piVar4;
            piVar4 = (int *)*piVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar4 + 0xd);
              piVar10 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar1 = *(char *)(piVar10[1] + 0xd);
            piVar5 = (int *)piVar10[1];
            piVar4 = piVar10;
            while ((piVar10 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar10[2]))) {
              cVar1 = *(char *)(piVar10[1] + 0xd);
              piVar5 = (int *)piVar10[1];
              piVar4 = piVar10;
            }
          }
        }
      } while (piVar10 != *(int **)(iVar7 + 4));
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004d6580 @ 004d6580  kind=gamemisc  attributed-by=caller-vote  size=67 */

void __thiscall FUN_004d6580(void *this,undefined8 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_004203c0(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004d6730 @ 004d6730  kind=gamemisc  attributed-by=caller-vote  size=4391 */

/* WARNING: Removing unreachable block (ram,0x004d72e4) */
/* WARNING: Removing unreachable block (ram,0x004d7570) */
/* WARNING: Removing unreachable block (ram,0x004d77b4) */

void __thiscall
FUN_004d6730(void *this,uint *param_1,float *param_2,float param_3,char param_4,char param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  void *this_00;
  uint uVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  float *pfVar17;
  uint uVar18;
  bool bVar19;
  float fVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  uint local_19c;
  float local_194;
  int local_190;
  float local_184;
  float local_17c;
  float local_178;
  uint local_168 [31];
  int iStack_ec;
  int local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  uint local_b4;
  uint local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  uint local_7c;
  uint local_78;
  undefined8 local_74;
  float local_6c;
  undefined8 local_68;
  float local_60;
  undefined8 local_5c;
  float local_54;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  float local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  uint local_14 [4];
  
  local_14[3] = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar11 = param_1[1];
  local_178 = 0.0;
  uVar21 = __alldiv(*param_1,uVar11,0x10000,0);
  local_14[0] = (uint)uVar21;
  uVar21 = __alldiv(param_1[2],param_1[3],0x10000,0);
  local_14[1] = (uint)uVar21;
  uVar21 = __alldiv(param_1[4],param_1[5],0x10000,0);
  local_14[2] = (int)uVar21;
  if (((int)uVar11 < 1) && ((int)uVar11 < 0)) {
    local_14[0] = local_14[0] - 1;
  }
  if (((int)param_1[3] < 1) && ((int)param_1[3] < 0)) {
    local_14[1] = local_14[1] - 1;
  }
  if (((int)param_1[5] < 1) && ((int)param_1[5] < 0)) {
    local_14[2] = (int)uVar21 + -1;
  }
  local_19c = 0;
  if (0.0 < param_3) {
    do {
      uVar2 = local_14[2];
      uVar11 = local_14[1];
      if (((((int)local_14[0] < 0) || ((int)local_14[1] < 0)) || (0xffffff < (int)local_14[0])) ||
         ((0xffffff < (int)local_14[1] ||
          (iVar6 = FUN_00406290(this,(int)(local_14[0] + ((int)local_14[0] >> 0x1f & 0xffU)) >> 8,
                                (int)(local_14[1] + ((int)local_14[1] >> 0x1f & 0xffU)) >> 8),
          iVar6 == 0)))) {
LAB_004d68cf:
        puVar7 = &DAT_00584248;
      }
      else {
        uVar11 = uVar11 & 0x800000ff;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xffffff00) + 1;
        }
        uVar9 = local_14[0] & 0x800000ff;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xffffff00) + 1;
        }
        this_00 = (void *)((uVar11 * 0x100 + uVar9) * 0x20 + *(int *)(iVar6 + 0xa8));
        if ((this_00 == (void *)0x0) || (iVar6 = *(int *)((int)this_00 + 0x10), (int)uVar2 < iVar6))
        goto LAB_004d68cf;
        if ((int)uVar2 < *(int *)((int)this_00 + 0x1c) + iVar6) {
          puVar7 = FUN_00405f20(this_00,uVar2 - iVar6);
          if ((((puVar7[3] & 0x1f) == 0) && ((int)uVar2 < 1)) && ((puVar7[3] & 0x40) == 0)) {
            puVar7 = &DAT_00584240;
          }
        }
        else {
          puVar7 = &DAT_00584240;
          if (0 < (int)uVar2) {
            puVar7 = &DAT_00584244;
          }
        }
      }
      if (((puVar7[3] & 0x1f) == 0) || ((puVar7[3] & 0x1f) == 2)) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if ((cVar5 != param_4) || (500 < (int)local_19c)) break;
      local_5c._0_4_ = (float)*(undefined8 *)param_2;
      local_19c = local_19c + 1;
      local_5c._4_4_ = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
      iVar6 = 0;
      local_5c = CONCAT44(local_5c._4_4_ * local_178,(float)local_5c * local_178);
      local_54 = param_2[2] * local_178;
      do {
        uVar22 = FUN_0054a946();
        local_168[iVar6 * 2 + 0x18] = (uint)uVar22;
        local_168[iVar6 * 2 + 0x19] = (uint)(uVar22 >> 0x20);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
      fVar20 = 10.0;
      local_38._0_4_ = (uint)*(undefined8 *)param_1;
      local_38._4_4_ = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
      local_38 = CONCAT44(local_38._4_4_ + local_168[0x19] +
                          (uint)CARRY4((uint)local_38,local_168[0x18]),
                          (uint)local_38 + local_168[0x18]);
      local_30._0_4_ = (uint)*(undefined8 *)(param_1 + 2);
      local_30._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
      local_30 = CONCAT44(local_30._4_4_ + local_168[0x1b] +
                          (uint)CARRY4((uint)local_30,local_168[0x1a]),
                          (uint)local_30 + local_168[0x1a]);
      local_28._0_4_ = (uint)*(undefined8 *)(param_1 + 4);
      local_28._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
      local_28 = CONCAT44(local_28._4_4_ + local_168[0x1d] +
                          (uint)CARRY4((uint)local_28,local_168[0x1c]),
                          (uint)local_28 + local_168[0x1c]);
      fVar8 = 0.0;
      fVar13 = 0.0;
      local_184 = 10.0;
      local_194 = 0.0;
      pfVar17 = param_2;
      do {
        fVar1 = *pfVar17;
        if (1e-06 <= fVar1 * fVar1) {
          if (fVar1 <= 0.0) {
            uVar22 = FUN_0054a946();
          }
          else {
            uVar22 = FUN_0054a946();
          }
          local_17c = (float)(longlong)uVar22;
          local_17c = local_17c * 1.5258789e-05;
          fVar8 = local_194;
          fVar20 = local_184;
          if (local_17c < local_184) {
            fVar8 = fVar13;
            fVar20 = local_17c;
            local_184 = local_17c;
            local_194 = fVar13;
          }
        }
        fVar13 = (float)((int)fVar13 + 1);
        pfVar17 = pfVar17 + 1;
      } while ((int)fVar13 < 3);
      if (param_2[(int)fVar8] <= 0.0) {
        local_14[(int)fVar8] = local_14[(int)fVar8] - 1;
      }
      else {
        local_14[(int)fVar8] = local_14[(int)fVar8] + 1;
      }
      local_178 = local_178 + fVar20;
    } while (local_178 < param_3);
  }
  if (param_3 < local_178) {
    local_178 = param_3;
  }
  if (param_5 != '\0') {
    uVar11 = param_1[1];
    uVar2 = *param_1;
    uVar21 = __alldiv(uVar2,uVar11,0x10000,0);
    uVar9 = param_1[2];
    uVar3 = param_1[3];
    uVar23 = __alldiv(uVar9,uVar3,0x10000,0);
    uVar14 = (int)(((int)uVar21 >> 0x1f & 0xffU) + (int)uVar21) >> 8;
    uVar12 = (int)(((int)uVar23 >> 0x1f & 0xffU) + (int)uVar23) >> 8;
    uVar15 = (int)(((int)local_14[0] >> 0x1f & 0xffU) + local_14[0]) >> 8;
    uVar18 = (int)(((int)local_14[1] >> 0x1f & 0xffU) + local_14[1]) >> 8;
    local_184 = (float)uVar14;
    if ((int)uVar15 < (int)uVar14) {
      local_184 = (float)uVar15;
      uVar15 = uVar14;
    }
    uVar14 = uVar12;
    if ((int)uVar18 < (int)uVar12) {
      uVar14 = uVar18;
      uVar18 = uVar12;
    }
    local_19c = uVar14;
    local_b4 = (uint)local_184;
    local_b0 = uVar14;
    local_7c = uVar15;
    local_78 = uVar18;
    if ((int)local_184 <= (int)uVar15) {
      do {
        if ((int)uVar14 <= (int)uVar18) {
          do {
            if ((((-1 < (int)local_184) && (-1 < (int)uVar14)) && ((int)local_184 < 0x10000)) &&
               ((int)uVar14 < 0x10000)) {
              iVar6 = (int)((int)local_184 + ((int)local_184 >> 0x1f & 0x3fU)) >> 6;
              iVar10 = (int)(((int)uVar14 >> 0x1f & 0x3fU) + uVar14) >> 6;
              if (((-1 < iVar6) && (-1 < iVar10)) &&
                 ((iVar6 < 0x400 &&
                  ((iVar10 < 0x400 &&
                   (iVar6 = *(int *)((int)this + (iVar6 * 0x400 + iVar10) * 4 + 0xbc), iVar6 != 0)))
                  ))) {
                uVar15 = (uint)local_184 & 0x8000003f;
                if ((int)uVar15 < 0) {
                  uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
                }
                uVar12 = uVar14 & 0x8000003f;
                if ((int)uVar12 < 0) {
                  uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
                }
                iVar6 = *(int *)(iVar6 + 0x10018 + (uVar15 * 0x40 + uVar12) * 4);
                if (iVar6 != 0) {
                  piVar4 = *(int **)(iVar6 + 0x10);
                  fVar8 = local_178;
                  for (piVar16 = *(int **)(iVar6 + 0xc); local_178 = fVar8, piVar16 != piVar4;
                      piVar16 = piVar16 + 0x62) {
                    iVar6 = *piVar16;
                    if (((((iVar6 == 4) || (iVar6 == 3)) || (iVar6 == 5)) || (iVar6 == 8)) &&
                       ((char)piVar16[0xc] != '\0')) {
                      iVar6 = piVar16[9];
                      local_20 = *(undefined8 *)(piVar16 + 9);
                      local_18 = piVar16[0xb];
                      uVar18 = piVar16[8] & 0x80000001;
                      bVar19 = uVar18 == 0;
                      if ((int)uVar18 < 0) {
                        bVar19 = (uVar18 - 1 | 0xfffffffe) == 0xffffffff;
                      }
                      if (!bVar19) {
                        local_20 = CONCAT44(iVar6,piVar16[10]);
                        local_168[0x1e] = piVar16[10];
                        iStack_ec = iVar6;
                        local_e8 = local_18;
                      }
                      fVar20 = *param_2;
                      if (fVar20 != 0.0) {
                        uVar22 = FUN_0054a946();
                        uVar18 = piVar16[2];
                        iVar6 = piVar16[3];
                        uVar15 = uVar18 - (uint)uVar22;
                        fVar13 = ((float)CONCAT44((((iVar6 - (int)(uVar22 >> 0x20)) -
                                                   (uint)(uVar18 < (uint)uVar22)) - uVar11) -
                                                  (uint)(uVar15 < uVar2),uVar15 - uVar2) *
                                 1.5258789e-05) / fVar20;
                        if ((0.0 <= fVar13) && (fVar13 < fVar8)) {
                          iVar10 = 0;
                          local_44._0_4_ = (float)*(undefined8 *)param_2;
                          local_44._4_4_ = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
                          local_44 = CONCAT44(local_44._4_4_ * fVar13,(float)local_44 * fVar13);
                          local_3c = param_2[2] * fVar13;
                          do {
                            uVar24 = FUN_0054a946();
                            local_168[iVar10 * 2 + 6] = (uint)uVar24;
                            local_168[iVar10 * 2 + 7] = (uint)(uVar24 >> 0x20);
                            iVar10 = iVar10 + 1;
                          } while (iVar10 < 3);
                          local_ac = *(undefined8 *)param_1;
                          local_a4._0_4_ = (uint)*(undefined8 *)(param_1 + 2);
                          uVar15 = (uint)local_a4 + local_168[8];
                          local_a4._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
                          local_9c._0_4_ = (uint)*(undefined8 *)(param_1 + 4);
                          local_9c._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
                          local_a4 = CONCAT44(local_a4._4_4_ + local_168[9] +
                                              (uint)CARRY4((uint)local_a4,local_168[8]),uVar15);
                          local_9c = CONCAT44(local_9c._4_4_ + local_168[0xb] +
                                              (uint)CARRY4((uint)local_9c,local_168[10]),
                                              (uint)local_9c + local_168[10]);
                          uVar24 = FUN_0054a946();
                          fVar1 = (float)piVar16[4];
                          local_190 = (int)(uVar24 >> 0x20);
                          iVar10 = (piVar16[5] - local_190) - (uint)((uint)fVar1 < (uint)local_194);
                          if ((iVar10 <= local_a4._4_4_) &&
                             ((iVar10 < local_a4._4_4_ ||
                              ((uint)((int)fVar1 - (int)local_194) <= uVar15)))) {
                            if ((piVar16[7] <= local_9c._4_4_) &&
                               ((piVar16[7] < local_9c._4_4_ || ((uint)piVar16[6] <= (uint)local_9c)
                                ))) {
                              local_194 = (float)uVar24;
                              iVar10 = piVar16[5] + local_190 +
                                       (uint)CARRY4((uint)fVar1,(uint)local_194);
                              if ((local_a4._4_4_ <= iVar10) &&
                                 ((local_a4._4_4_ < iVar10 ||
                                  ((uint)local_a4 < (uint)((int)fVar1 + (int)local_194))))) {
                                uVar24 = FUN_0054a946();
                                iVar10 = (int)(uVar24 >> 0x20) + piVar16[7] +
                                         (uint)CARRY4((uint)uVar24,piVar16[6]);
                                if ((local_9c._4_4_ <= iVar10) &&
                                   ((local_178 = fVar13, local_9c._4_4_ < iVar10 ||
                                    ((uint)local_9c < (uint)uVar24 + piVar16[6]))))
                                goto LAB_004d70ee;
                              }
                            }
                          }
                          local_178 = fVar8;
                        }
LAB_004d70ee:
                        fVar20 = ((float)(longlong)
                                         (uVar22 + CONCAT44((iVar6 - uVar11) -
                                                            (uint)(uVar18 < uVar2),uVar18 - uVar2))
                                 * 1.5258789e-05) / fVar20;
                        if ((0.0 <= fVar20) && (fVar20 < local_178)) {
                          iVar6 = 0;
                          local_74._0_4_ = (float)*(undefined8 *)param_2;
                          local_74._4_4_ = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
                          local_74 = CONCAT44(local_74._4_4_ * fVar20,(float)local_74 * fVar20);
                          local_6c = param_2[2] * fVar20;
                          do {
                            uVar22 = FUN_0054a946();
                            local_168[iVar6 * 2 + 0xc] = (uint)uVar22;
                            local_168[iVar6 * 2 + 0xd] = (uint)(uVar22 >> 0x20);
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < 3);
                          local_e4 = *(undefined8 *)param_1;
                          local_dc._0_4_ = (uint)*(undefined8 *)(param_1 + 2);
                          uVar12 = (uint)local_dc + local_168[0xe];
                          local_dc._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
                          local_d4._0_4_ = (uint)*(undefined8 *)(param_1 + 4);
                          uVar15 = (uint)local_d4 + local_168[0x10];
                          local_d4._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
                          local_dc = CONCAT44(local_dc._4_4_ + local_168[0xf] +
                                              (uint)CARRY4((uint)local_dc,local_168[0xe]),uVar12);
                          local_d4 = CONCAT44(local_d4._4_4_ + local_168[0x11] +
                                              (uint)CARRY4((uint)local_d4,local_168[0x10]),uVar15);
                          uVar22 = FUN_0054a946();
                          uVar18 = piVar16[4];
                          iVar6 = (piVar16[5] - (int)(uVar22 >> 0x20)) -
                                  (uint)(uVar18 < (uint)uVar22);
                          if ((iVar6 <= local_dc._4_4_) &&
                             ((iVar6 < local_dc._4_4_ || (uVar18 - (uint)uVar22 <= uVar12)))) {
                            if ((piVar16[7] <= local_d4._4_4_) &&
                               (((piVar16[7] < local_d4._4_4_ || ((uint)piVar16[6] <= uVar15)) &&
                                (CONCAT44(local_dc._4_4_,uVar12) <
                                 (longlong)(uVar22 + *(longlong *)(piVar16 + 4)))))) {
                              uVar22 = FUN_0054a946();
                              iVar6 = (int)(uVar22 >> 0x20) + piVar16[7] +
                                      (uint)CARRY4((uint)uVar22,piVar16[6]);
                              if ((local_d4._4_4_ <= iVar6) &&
                                 ((local_d4._4_4_ < iVar6 || (uVar15 < (uint)uVar22 + piVar16[6]))))
                              {
                                local_178 = fVar20;
                              }
                            }
                          }
                        }
                      }
                      local_194 = param_2[1];
                      if (local_194 != 0.0) {
                        uVar22 = FUN_0054a946();
                        uVar18 = piVar16[4];
                        iVar6 = piVar16[5];
                        uVar15 = uVar18 - (uint)uVar22;
                        fVar20 = ((float)CONCAT44((((iVar6 - (int)(uVar22 >> 0x20)) -
                                                   (uint)(uVar18 < (uint)uVar22)) - uVar3) -
                                                  (uint)(uVar15 < uVar9),uVar15 - uVar9) *
                                 1.5258789e-05) / local_194;
                        fVar8 = local_178;
                        if ((0.0 <= fVar20) && (fVar20 < local_178)) {
                          iVar10 = 0;
                          local_50._0_4_ = (float)*(undefined8 *)param_2;
                          local_50._4_4_ = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
                          local_50 = CONCAT44(local_50._4_4_ * fVar20,(float)local_50 * fVar20);
                          local_48 = param_2[2] * fVar20;
                          do {
                            uVar24 = FUN_0054a946();
                            local_168[iVar10 * 2 + 0x12] = (uint)uVar24;
                            local_168[iVar10 * 2 + 0x13] = (uint)(uVar24 >> 0x20);
                            iVar10 = iVar10 + 1;
                          } while (iVar10 < 3);
                          local_8c = *(undefined8 *)(param_1 + 2);
                          local_94._0_4_ = (uint)*(undefined8 *)param_1;
                          uVar12 = (uint)local_94 + local_168[0x12];
                          local_94._4_4_ = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
                          local_84._0_4_ = (uint)*(undefined8 *)(param_1 + 4);
                          local_84._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
                          local_94 = CONCAT44(local_94._4_4_ + local_168[0x13] +
                                              (uint)CARRY4((uint)local_94,local_168[0x12]),uVar12);
                          local_84 = CONCAT44(local_84._4_4_ + local_168[0x17] +
                                              (uint)CARRY4((uint)local_84,local_168[0x16]),
                                              (uint)local_84 + local_168[0x16]);
                          uVar24 = FUN_0054a946();
                          uVar15 = piVar16[2];
                          iVar10 = (piVar16[3] - (int)(uVar24 >> 0x20)) -
                                   (uint)(uVar15 < (uint)uVar24);
                          if ((iVar10 <= local_94._4_4_) &&
                             ((iVar10 < local_94._4_4_ || (uVar15 - (uint)uVar24 <= uVar12)))) {
                            if ((piVar16[7] <= local_84._4_4_) &&
                               (((piVar16[7] < local_84._4_4_ ||
                                 ((uint)piVar16[6] <= (uint)local_84)) &&
                                (local_94 < (longlong)(uVar24 + *(longlong *)(piVar16 + 2)))))) {
                              uVar24 = FUN_0054a946();
                              iVar10 = (int)(uVar24 >> 0x20) + piVar16[7] +
                                       (uint)CARRY4((uint)uVar24,piVar16[6]);
                              if ((local_84._4_4_ <= iVar10) &&
                                 ((fVar8 = fVar20, local_84._4_4_ < iVar10 ||
                                  ((uint)local_84 < (uint)uVar24 + piVar16[6])))) goto LAB_004d75c0;
                            }
                          }
                          fVar8 = local_178;
                        }
LAB_004d75c0:
                        local_178 = fVar8;
                        fVar8 = ((float)(longlong)
                                        (uVar22 + CONCAT44((iVar6 - uVar3) - (uint)(uVar18 < uVar9),
                                                           uVar18 - uVar9)) * 1.5258789e-05) /
                                local_194;
                        if ((0.0 <= fVar8) && (fVar8 < local_178)) {
                          iVar6 = 0;
                          local_68._0_4_ = (float)*(undefined8 *)param_2;
                          local_68._4_4_ = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
                          local_68 = CONCAT44(local_68._4_4_ * fVar8,(float)local_68 * fVar8);
                          local_60 = param_2[2] * fVar8;
                          do {
                            uVar22 = FUN_0054a946();
                            local_168[iVar6 * 2] = (uint)uVar22;
                            local_168[iVar6 * 2 + 1] = (uint)(uVar22 >> 0x20);
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < 3);
                          local_c4 = *(undefined8 *)(param_1 + 2);
                          local_cc._0_4_ = (uint)*(undefined8 *)param_1;
                          uVar12 = (uint)local_cc + local_168[0];
                          local_cc._4_4_ = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
                          local_bc._0_4_ = (uint)*(undefined8 *)(param_1 + 4);
                          uVar15 = (uint)local_bc + local_168[4];
                          local_bc._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
                          local_cc = CONCAT44(local_cc._4_4_ + local_168[1] +
                                              (uint)CARRY4((uint)local_cc,local_168[0]),uVar12);
                          local_bc = CONCAT44(local_bc._4_4_ + local_168[5] +
                                              (uint)CARRY4((uint)local_bc,local_168[4]),uVar15);
                          uVar22 = FUN_0054a946();
                          uVar18 = piVar16[2];
                          iVar6 = (piVar16[3] - (int)(uVar22 >> 0x20)) -
                                  (uint)(uVar18 < (uint)uVar22);
                          if ((iVar6 <= local_cc._4_4_) &&
                             ((iVar6 < local_cc._4_4_ || (uVar18 - (uint)uVar22 <= uVar12)))) {
                            if ((piVar16[7] <= local_bc._4_4_) &&
                               (((piVar16[7] < local_bc._4_4_ || ((uint)piVar16[6] <= uVar15)) &&
                                (CONCAT44(local_cc._4_4_,uVar12) <
                                 (longlong)(uVar22 + *(longlong *)(piVar16 + 2)))))) {
                              uVar22 = FUN_0054a946();
                              iVar6 = (int)(uVar22 >> 0x20) + piVar16[7] +
                                      (uint)CARRY4((uint)uVar22,piVar16[6]);
                              if ((local_bc._4_4_ <= iVar6) &&
                                 ((local_bc._4_4_ < iVar6 || (uVar15 < (uint)uVar22 + piVar16[6]))))
                              {
                                local_178 = fVar8;
                              }
                            }
                          }
                        }
                      }
                    }
                    uVar14 = local_19c;
                    uVar18 = local_78;
                    fVar8 = local_178;
                  }
                }
              }
            }
            uVar14 = uVar14 + 1;
            local_19c = uVar14;
          } while ((int)uVar14 <= (int)uVar18);
          local_19c = local_b0;
          uVar14 = local_b0;
          uVar15 = local_7c;
        }
        local_184 = (float)((int)local_184 + 1);
      } while ((int)local_184 <= (int)uVar15);
    }
  }
  __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d9b50 @ 004d9b50  kind=gamemisc  attributed-by=caller-vote  size=32 */

void __thiscall FUN_004d9b50(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_004dae90(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
  }
  return;
}


/* FUN_004da680 @ 004da680  kind=gamemisc  attributed-by=caller-vote  size=254 */

undefined4 * __thiscall
FUN_004da680(void *this,undefined4 *param_1,char param_2,uint *param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint **ppuVar4;
  undefined4 *puVar5;
  uint *puVar6;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_3;
  puStack_c = &LAB_00554d40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)this;
  local_8 = 0;
  local_18 = true;
  puVar6 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar3 = (uint *)puVar1[1];
    do {
      puVar6 = puVar3;
      if (param_2 == '\0') {
        local_18 = *param_3 < puVar6[4];
      }
      else {
        local_18 = *param_3 <= puVar6[4];
      }
      if (local_18 == false) {
        puVar3 = (uint *)puVar6[2];
      }
      else {
        puVar3 = (uint *)*puVar6;
      }
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  _param_2 = puVar6;
  if (local_18 != false) {
    if (puVar6 == (uint *)*puVar1) {
      ppuVar4 = (uint **)&param_2;
      local_18 = true;
      goto LAB_004da719;
    }
    FUN_004dad80((int *)&param_2);
  }
  if (*puVar2 <= _param_2[4]) {
    *param_1 = _param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return param_1;
  }
  ppuVar4 = &param_3;
LAB_004da719:
  puVar5 = (undefined4 *)FUN_004c7180(this,ppuVar4,local_18,puVar6,puVar2);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004da790 @ 004da790  kind=gamemisc  attributed-by=caller-vote  size=400 */

void __thiscall
FUN_004da790(void *this,undefined4 *param_1,char param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  char local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00554d60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar9 = *(int **)this;
  local_8 = 0;
  local_1c = '\x01';
  piVar8 = piVar9;
  if (*(char *)(piVar9[1] + 0xd) == '\0') {
    piVar1 = (int *)param_3[1];
    piVar5 = (int *)piVar9[1];
    do {
      piVar8 = piVar5;
      piVar5 = (int *)piVar8[5];
      if (param_2 == '\0') {
        piVar7 = (int *)piVar8[4];
        for (piVar6 = (int *)*param_3; piVar6 != piVar1; piVar6 = piVar6 + 1) {
          if (piVar7 == piVar5) {
            if (piVar6 != piVar1) goto LAB_004da868;
            break;
          }
          if (*piVar6 < *piVar7) goto LAB_004da864;
          if (*piVar7 < *piVar6) goto LAB_004da868;
          piVar7 = piVar7 + 1;
        }
        if (piVar7 == piVar5) {
LAB_004da868:
          local_1c = '\0';
        }
        else {
LAB_004da864:
          local_1c = '\x01';
        }
      }
      else {
        piVar6 = (int *)*param_3;
        for (piVar7 = (int *)piVar8[4]; piVar7 != piVar5; piVar7 = piVar7 + 1) {
          if (piVar6 == piVar1) {
            if (piVar7 != piVar5) goto LAB_004da830;
            break;
          }
          if (*piVar7 < *piVar6) goto LAB_004da827;
          if (*piVar6 < *piVar7) goto LAB_004da830;
          piVar6 = piVar6 + 1;
        }
        if (piVar6 == piVar1) {
LAB_004da830:
          local_1c = '\x01';
        }
        else {
LAB_004da827:
          local_1c = '\0';
        }
      }
      if (local_1c == '\0') {
        piVar5 = (int *)piVar8[2];
      }
      else {
        piVar5 = (int *)*piVar8;
      }
    } while (*(char *)((int)piVar5 + 0xd) == '\0');
  }
  _param_2 = piVar8;
  if (local_1c != '\0') {
    if (piVar8 == (int *)*piVar9) {
      ppiVar2 = (int **)&param_2;
      local_1c = '\x01';
      piVar9 = param_3;
      goto LAB_004da8ac;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar9 = param_3;
  piVar1 = _param_2;
  uVar4 = FUN_004da930((int *)_param_2[4],(int *)_param_2[5],(int *)*param_3,(int *)param_3[1]);
  if ((char)uVar4 == '\0') {
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  ppiVar2 = &param_3;
LAB_004da8ac:
  puVar3 = (undefined4 *)FUN_004da010(this,ppiVar2,local_1c,piVar8,piVar9);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004da930 @ 004da930  kind=gamemisc  attributed-by=caller-vote  size=89 */

undefined4 __cdecl FUN_004da930(int *param_1,int *param_2,int *param_3,int *param_4)

{
  uint3 uVar1;
  
  do {
    if (param_1 == param_2) {
LAB_004da974:
      if (param_3 == param_4) {
        return 0;
      }
      return 1;
    }
    if (param_3 == param_4) {
      if (param_1 != param_2) {
        return 0;
      }
      goto LAB_004da974;
    }
    uVar1 = (uint3)((uint)param_3 >> 8);
    if (*param_1 < *param_3) {
      return CONCAT31(uVar1,1);
    }
    if (*param_3 < *param_1) {
      return (uint)uVar1 << 8;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  } while( true );
}


/* FUN_004daca0 @ 004daca0  kind=gamemisc  attributed-by=caller-vote  size=215 */

void __thiscall FUN_004daca0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_3c;
  void *local_38 [9];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554da8;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = FUN_004daf50(this,param_1);
  if (piVar1 != *(int **)this) {
    uVar2 = FUN_004da930((int *)*param_1,(int *)param_1[1],(int *)piVar1[4],(int *)piVar1[5]);
    if ((char)uVar2 == '\0') goto LAB_004dad56;
  }
  FUN_004daa80(local_38,param_1);
  local_8 = 0;
  piVar3 = FUN_004d9bb0(this,local_38);
  FUN_004da210(this,&local_3c,piVar1,piVar3 + 4,piVar3);
  if (local_38[0] != (void *)0x0) {
    operator_delete(local_38[0]);
  }
LAB_004dad56:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004dae90 @ 004dae90  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * __fastcall FUN_004dae90(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
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


/* FUN_004daf50 @ 004daf50  kind=gamemisc  attributed-by=caller-vote  size=126 */

undefined4 * __thiscall FUN_004daf50(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)this;
  if (*(char *)((int)local_8[1] + 0xd) == '\0') {
    puVar3 = (undefined4 *)local_8[1];
    do {
      piVar2 = (int *)*param_1;
      for (piVar1 = (int *)puVar3[4]; piVar1 != (int *)puVar3[5]; piVar1 = piVar1 + 1) {
        if (piVar2 == (int *)param_1[1]) {
          if (piVar1 != (int *)puVar3[5]) goto LAB_004dafa8;
          break;
        }
        if (*piVar1 < *piVar2) goto LAB_004dafc6;
        if (*piVar2 < *piVar1) goto LAB_004dafa8;
        piVar2 = piVar2 + 1;
      }
      if (piVar2 == (int *)param_1[1]) {
LAB_004dafa8:
        puVar4 = (undefined4 *)*puVar3;
        local_8 = puVar3;
      }
      else {
LAB_004dafc6:
        puVar4 = (undefined4 *)puVar3[2];
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return local_8;
}


/* FUN_004dd1a0 @ 004dd1a0  kind=gamemisc  attributed-by=caller-vote  size=307 */

void __thiscall
FUN_004dd1a0(void *this,undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *this_00;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c [2];
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554e48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = 0;
  local_14 = this;
  FUN_0045f080(&local_28,3);
  *local_28 = (int)param_1;
  local_28[1] = param_2;
  local_28[2] = param_3;
  this_00 = (int *)((int)this + 0x140c);
  local_8 = 0;
  puVar2 = (undefined4 *)FUN_004daca0(this_00,(int *)&local_28);
  *puVar2 = *param_4;
  puVar2[1] = param_4[1];
  puVar2[2] = param_4[2];
  puVar2[3] = param_4[3];
  puVar2[4] = param_4[4];
  puVar2[5] = param_4[5];
  FUN_004da790((void *)((int)this + 0x1414),local_1c,'\0',(int *)&local_28,(uint)DAT_0058426a);
  piVar1 = local_28;
  puVar2 = (undefined4 *)*this_00;
  if ((*(undefined4 **)((int)this + 0x1408) != puVar2) &&
     ((int)(*(undefined4 **)((int)this + 0x1408))[8] <= (int)param_4[1])) goto LAB_004dd2b2;
  param_1 = FUN_004daf50(this_00,&local_28);
  if (param_1 == puVar2) {
LAB_004dd2a1:
    param_1 = puVar2;
  }
  else {
    uVar3 = FUN_004da930(piVar1,local_24,(int *)param_1[4],(int *)param_1[5]);
    if ((char)uVar3 != '\0') goto LAB_004dd2a1;
  }
  *(undefined4 **)((int)local_14 + 0x1408) = param_1;
LAB_004dd2b2:
  if (piVar1 != (int *)0x0) {
    operator_delete(piVar1);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_004f7c20 @ 004f7c20  kind=gamemisc  attributed-by=caller-vote  size=55 */

void FUN_004f7c20(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_004f7c20((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}


/* FUN_0052ef00 @ 0052ef00  kind=gamemisc  attributed-by=caller-vote  size=2032 */

/* WARNING: Removing unreachable block (ram,0x0052fae6) */
/* WARNING: Removing unreachable block (ram,0x0052f93e) */
/* WARNING: Removing unreachable block (ram,0x0052f887) */
/* WARNING: Removing unreachable block (ram,0x0052fa3b) */
/* WARNING: Removing unreachable block (ram,0x0052fb34) */

void __thiscall FUN_0052ef00(void *this,int param_1,uint *param_2,uint *param_3,float param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 **ppuVar11;
  undefined4 uVar12;
  uint uVar13;
  void *this_00;
  float fVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  double dVar22;
  float fVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  undefined1 auStack_2d0 [7];
  char local_2c9;
  float local_2c8;
  float local_2c4;
  uint local_2c0;
  uint local_2bc;
  float local_2b8;
  int *local_2b4;
  uint local_2b0;
  uint local_2ac;
  int *local_2a8;
  int local_2a4;
  float local_2a0;
  int iStack_29c;
  char local_291;
  uint local_290;
  uint local_28c;
  float local_288;
  uint local_284;
  float local_280;
  int local_27c;
  int *local_278;
  void *local_274;
  int *local_270;
  float local_26c;
  undefined4 *local_268;
  float *local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  uint local_234;
  float local_230;
  int local_22c;
  undefined4 *local_228;
  undefined4 local_224;
  float local_220;
  float local_21c;
  undefined8 local_218;
  int local_210;
  int iStack_20c;
  uint local_208 [2];
  int *local_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  float local_1ec [3];
  uint local_1e0;
  int iStack_1dc;
  uint local_1d8;
  int iStack_1d4;
  longlong local_1d0;
  undefined8 local_1c4;
  float local_1bc;
  uint local_1b8;
  int iStack_1b4;
  uint local_1b0;
  int iStack_1ac;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  uint local_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  undefined8 local_178;
  uint local_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  longlong local_160;
  int local_154;
  int local_150;
  int local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  uint local_130;
  int *local_12c;
  int local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  int local_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e4 [9];
  uint local_c0 [7];
  float local_a4 [3];
  uint local_98 [18];
  longlong local_50;
  longlong local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  uint local_c;
  
  local_c = DAT_00583cc8 ^ (uint)auStack_2d0;
  local_2a4 = param_1;
  local_28c = *param_2;
  local_2b4 = (int *)param_2[2];
  local_2ac = param_2[1];
  local_2b0 = param_2[3];
  uVar13 = *param_3;
  local_284 = param_3[1];
  local_40 = local_28c - uVar13;
  iStack_3c = (local_2ac - local_284) - (uint)(local_28c < uVar13);
  local_2a8 = (int *)param_3[2];
  local_2c8 = (float)param_3[3];
  local_38 = (int)local_2b4 - (int)local_2a8;
  iStack_34 = (local_2b0 - (int)local_2c8) - (uint)(local_2b4 < local_2a8);
  local_118 = (float)CONCAT44(iStack_3c,local_40) * 1.5258789e-05;
  local_258 = param_4 * param_4;
  local_114 = (float)CONCAT44(iStack_34,local_38) * 1.5258789e-05;
  local_274 = this;
  if (local_114 * local_114 + local_118 * local_118 < local_258) {
    local_2a0 = (float)(param_2[4] - param_3[4]);
    iStack_29c = (param_2[5] - param_3[5]) - (uint)(param_2[4] < param_3[4]);
    local_2c4 = (float)CONCAT44(iStack_29c,local_2a0);
    if (ABS(local_2c4 * 1.5258789e-05) < *(float *)(param_1 + 0x88) + param_4) {
LAB_0052f06b:
      __security_check_cookie(local_c ^ (uint)auStack_2d0);
      return;
    }
  }
  local_28 = uVar13 - local_28c;
  local_1f8._0_4_ = param_2[4];
  local_1f8._4_4_ = param_2[5];
  iStack_24 = (local_284 - local_2ac) - (uint)(uVar13 < local_28c);
  local_20 = (int)local_2a8 - (int)local_2b4;
  iStack_1c = ((int)local_2c8 - local_2b0) - (uint)(local_2a8 < local_2b4);
  local_124 = (float)CONCAT44(iStack_24,local_28) * 1.5258789e-05;
  local_120 = (float)CONCAT44(iStack_1c,local_20) * 1.5258789e-05;
  local_21c = 0.0;
  fVar23 = local_120 * local_120 + local_124 * local_124 + 0.0;
  local_2c8 = local_120;
  local_2c4 = local_124;
  local_208[0] = local_28c;
  local_208[1] = local_2ac;
  local_200 = local_2b4;
  uStack_1fc = local_2b0;
  if (2500.0 < fVar23) {
    dVar22 = (double)fVar23;
    libm_sse2_sqrt_precise();
    local_124 = (1.0 / (float)dVar22) * local_2c4 * 50.0;
    local_120 = (1.0 / (float)dVar22) * local_2c8 * 50.0;
  }
  dVar22 = (double)(local_120 * local_120 + local_124 * local_124 + 0.5625);
  libm_sse2_sqrt_precise();
  uVar26 = CONCAT44(local_2c8,local_278);
  uVar24 = CONCAT44(local_2a8,local_290);
  local_2c4 = 0.0;
  local_2a0 = (float)(int)((float)dVar22 + 1.0);
  lVar4 = local_1f8;
  if (0 < (int)local_2a0) {
    do {
      iVar18 = local_2a4;
      local_2a8 = (int *)(uVar24 >> 0x20);
      local_290 = (uint)uVar24;
      local_1a0 = CONCAT44((local_208[1] - param_3[1]) - (uint)(local_208[0] < *param_3),
                           local_208[0] - *param_3);
      local_198 = CONCAT44((uStack_1fc - param_3[3]) - (uint)(local_200 < (int *)param_3[2]),
                           (int)local_200 - (int)param_3[2]);
      puVar1 = param_3 + 4;
      local_50 = local_1a0;
      local_190 = local_1f8 - *(longlong *)puVar1;
      local_48 = local_198;
      local_f8 = (float)local_1a0 * 1.5258789e-05;
      local_f4 = (float)local_198 * 1.5258789e-05;
      if (local_f4 * local_f4 + local_f8 * local_f8 <= local_258) {
        local_218 = local_1f8 - *(longlong *)puVar1;
        local_2c8 = (float)(local_1f8 - *(longlong *)puVar1);
        if (ABS(local_2c8 * 1.5258789e-05) < *(float *)(local_2a4 + 0x88) + param_4)
        goto LAB_0052f06b;
      }
      local_148._0_4_ = (uint)*(undefined8 *)param_3;
      local_148._4_4_ = (int)((ulonglong)*(undefined8 *)param_3 >> 0x20);
      local_148 = CONCAT44((local_148._4_4_ - local_208[1]) - (uint)((uint)local_148 < local_208[0])
                           ,(uint)local_148 - local_208[0]);
      local_140._0_4_ = (int *)*(undefined8 *)(param_3 + 2);
      local_140._4_4_ = (int)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
      local_140 = CONCAT44((local_140._4_4_ - uStack_1fc) - (uint)((int *)local_140 < local_200),
                           (int)(int *)local_140 - (int)local_200);
      local_138 = *(undefined8 *)(param_3 + 4);
      local_1ec[0] = (float)local_148 * 1.5258789e-05;
      local_2c8 = (float)local_140 * 1.5258789e-05;
      local_1ec[1] = local_2c8;
      fVar23 = local_2c8 * local_2c8 + local_1ec[0] * local_1ec[0] + local_21c;
      if (0.0 < fVar23) {
        dVar22 = (double)fVar23;
        libm_sse2_sqrt_precise();
        uVar24 = CONCAT44(local_2a8,local_290);
        local_1ec[0] = (1.0 / (float)dVar22) * local_1ec[0];
        local_1ec[1] = (1.0 / (float)dVar22) * local_2c8;
      }
      uVar26 = CONCAT44(local_2c8,local_278);
      local_1ec[2] = -0.71;
      local_2b0 = 0;
      local_264 = (float *)(iVar18 + 0x80);
      do {
        uVar19 = local_2b0;
        local_2c8 = (float)(uVar26 >> 0x20);
        local_278 = (int *)uVar26;
        local_2a8 = (int *)(uVar24 >> 0x20);
        local_290 = (uint)uVar24;
        local_240 = local_1ec[local_2b0] * 65536.0;
        uVar24 = FUN_0054a946();
        local_22c = (int)(uVar24 >> 0x20);
        local_234 = (uint)uVar24;
        puVar1 = local_208 + uVar19 * 2;
        uVar13 = *puVar1;
        *puVar1 = *puVar1 + local_234;
        local_208[uVar19 * 2 + 1] =
             local_208[uVar19 * 2 + 1] + local_22c + (uint)CARRY4(uVar13,local_234);
        local_291 = '\x01';
        cVar5 = FUN_004d4f90(local_274,local_208,(float *)(iVar18 + 0x80),'\0');
        uVar26 = CONCAT44(local_2c8,local_278);
        uVar24 = CONCAT44(local_2a8,local_290);
        local_2c9 = cVar5;
        if ((cVar5 == '\0') || (cVar6 = local_291, uVar19 == 2)) {
          uVar28 = __alldiv(local_208[0],local_208[1],0x10000,0);
          iVar18 = (int)(((int)uVar28 >> 0x1f & 7U) + (int)uVar28) >> 3;
          uVar28 = __alldiv((uint)local_200,uStack_1fc,0x10000,0);
          uVar26 = CONCAT44(local_2c8,local_278);
          uVar24 = CONCAT44(local_2a8,local_290);
          uVar13 = iVar18 - 1;
          local_288 = (float)(iVar18 + 1);
          iVar18 = (int)((int)uVar28 + ((int)uVar28 >> 0x1f & 7U)) >> 3;
          if ((int)local_288 < (int)uVar13) {
            cVar5 = local_2c9;
            local_2bc = uVar13;
            if (local_2c9 != '\0') {
LAB_0052fba4:
              iVar18 = local_2a4;
              cVar6 = '\0';
              goto LAB_0052fbaa;
            }
          }
          else {
            local_280 = (float)(iVar18 - 1);
            uVar17 = iVar18 + 1;
            fVar23 = local_280;
            local_2c0 = uVar17;
            do {
              cVar6 = local_2c9;
              local_2bc = uVar13;
              if ((int)uVar17 < (int)fVar23) {
                fVar14 = fVar23;
                uVar19 = local_2b0;
                cVar5 = local_2c9;
                local_2b8 = fVar23;
                if (local_2c9 != '\0') goto LAB_0052fba4;
              }
              else {
                do {
                  local_278 = (int *)uVar26;
                  local_2b8 = fVar23;
                  if ((((-1 < (int)uVar13) && (-1 < (int)fVar23)) && ((int)uVar13 < 0x200000)) &&
                     ((int)fVar23 < 0x200000)) {
                    iVar18 = ((int)fVar23 >> 0x1f & 0x1fU) + (int)fVar23;
                    uVar16 = iVar18 >> 5;
                    iVar7 = ((int)uVar13 >> 0x1f & 0x1fU) + uVar13;
                    uVar19 = iVar7 >> 5;
                    uVar13 = local_2bc;
                    uVar17 = local_2c0;
                    cVar6 = local_2c9;
                    if (((-1 < (int)uVar19) && (-1 < (int)uVar16)) &&
                       (((int)uVar19 < 0x10000 && ((int)uVar16 < 0x10000)))) {
                      iVar7 = (int)(uVar19 + (iVar7 >> 0x1f & 0x3fU)) >> 6;
                      iVar18 = (int)((iVar18 >> 0x1f & 0x3fU) + uVar16) >> 6;
                      if (((-1 < iVar7) && (-1 < iVar18)) &&
                         ((iVar7 < 0x400 &&
                          ((iVar18 < 0x400 &&
                           (iVar18 = *(int *)((int)local_274 + (iVar7 * 0x400 + iVar18) * 4 + 0xbc),
                           iVar18 != 0)))))) {
                        uVar19 = uVar19 & 0x8000003f;
                        if ((int)uVar19 < 0) {
                          uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
                        }
                        uVar16 = uVar16 & 0x8000003f;
                        if ((int)uVar16 < 0) {
                          uVar16 = (uVar16 - 1 | 0xffffffc0) + 1;
                        }
                        iVar18 = *(int *)(iVar18 + 0x10018 + (uVar19 * 0x40 + uVar16) * 4);
                        if (iVar18 != 0) {
                          uVar19 = (uint)fVar23 & 0x8000001f;
                          if ((int)uVar19 < 0) {
                            uVar19 = (uVar19 - 1 | 0xffffffe0) + 1;
                          }
                          uVar16 = local_2bc & 0x8000001f;
                          if ((int)uVar16 < 0) {
                            uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
                          }
                          piVar15 = (int *)(*(int *)(iVar18 + 0xac) + (uVar19 * 0x20 + uVar16) * 8);
                          if (piVar15 != (int *)0x0) {
                            local_270 = (int *)*piVar15;
                            piVar15 = (int *)*local_270;
                            if (piVar15 != local_270) {
                              do {
                                local_2a8 = (int *)(uVar24 >> 0x20);
                                local_290 = (uint)uVar24;
                                local_2b4 = (int *)piVar15[2];
                                iVar18 = *local_2b4;
                                uVar26 = CONCAT44(iVar18,local_278);
                                if (((iVar18 != 7) &&
                                    (uVar26 = CONCAT44(iVar18,local_278), iVar18 != 6)) &&
                                   (uVar26 = CONCAT44(iVar18,local_278), iVar18 != 9)) {
                                  puVar3 = *(undefined4 **)(local_2a4 + 0x1468);
                                  puVar20 = puVar3;
                                  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
                                    puVar9 = (undefined4 *)puVar3[1];
                                    do {
                                      if ((uint)puVar9[4] < (uint)piVar15[2]) {
                                        puVar10 = (undefined4 *)puVar9[2];
                                      }
                                      else {
                                        puVar10 = (undefined4 *)*puVar9;
                                        puVar20 = puVar9;
                                      }
                                      puVar9 = puVar10;
                                    } while (*(char *)((int)puVar10 + 0xd) == '\0');
                                  }
                                  if ((puVar20 == puVar3) || ((uint)piVar15[2] < (uint)puVar20[4]))
                                  {
                                    local_268 = puVar3;
                                    ppuVar11 = &local_268;
                                  }
                                  else {
                                    local_228 = puVar20;
                                    ppuVar11 = &local_228;
                                  }
                                  uVar26 = CONCAT44(iVar18,local_278);
                                  if ((*ppuVar11 == puVar3) &&
                                     ((((iVar18 != 1 && (iVar18 != 8)) &&
                                       ((iVar18 != 2 && ((iVar18 != 3 && (iVar18 != 5)))))) ||
                                      (uVar26 = CONCAT44(iVar18,local_278),
                                      (char)local_2b4[0xc] != '\0')))) {
                                    local_1c4 = *(undefined8 *)(local_2b4 + 9);
                                    local_1bc = (float)local_2b4[0xb];
                                    uVar13 = local_2b4[8] & 0x80000001;
                                    bVar21 = uVar13 == 0;
                                    if ((int)uVar13 < 0) {
                                      bVar21 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
                                    }
                                    if (!bVar21) {
                                      local_1c4._4_4_ = (float)((ulonglong)local_1c4 >> 0x20);
                                      local_1c4 = CONCAT44((float)local_1c4,local_1c4._4_4_);
                                    }
                                    local_210 = local_208[local_2b0 * 2] -
                                                local_2b4[local_2b0 * 2 + 2];
                                    iStack_20c = (local_208[local_2b0 * 2 + 1] -
                                                 local_2b4[local_2b0 * 2 + 3]) -
                                                 (uint)(local_208[local_2b0 * 2] <
                                                       (uint)local_2b4[local_2b0 * 2 + 2]);
                                    local_2c8 = (float)CONCAT44(iStack_20c,local_210);
                                    local_25c = local_2c8 * local_1ec[local_2b0];
                                    uVar27 = FUN_0054a946();
                                    local_2c8 = (float)uVar27;
                                    local_224 = 0;
                                    uVar25 = FUN_0054a946();
                                    uVar24 = CONCAT44(local_2a8,local_290);
                                    uVar26 = CONCAT44(local_2c8,local_278);
                                    if (CONCAT44((int)(uVar27 >> 0x20),local_2c8) < (longlong)uVar25
                                       ) {
                                      local_260 = (float)local_1c4 * 0.5 * 65536.0;
                                      uVar24 = FUN_0054a946();
                                      local_28c = (uint)(uVar24 >> 0x20);
                                      local_278 = (int *)uVar24;
                                      local_2c8 = (float)local_2b4[2];
                                      uVar13 = local_2b4[3];
                                      local_238 = *local_264 * 0.5 * 65536.0;
                                      local_2ac = uVar13;
                                      uVar24 = FUN_0054a946();
                                      local_2a8 = (int *)(uVar24 >> 0x20);
                                      local_290 = (uint)uVar24;
                                      local_27c = (int)local_2c8 - (int)local_278;
                                      lVar4 = uVar24 + CONCAT44(local_208[1],local_208[0]);
                                      uVar12 = (undefined4)lVar4;
                                      uVar26 = CONCAT44(uVar12,local_278);
                                      if (CONCAT44((uVar13 - local_28c) -
                                                   (uint)((uint)local_2c8 < local_278),local_27c) <=
                                          lVar4) {
                                        local_2ac = uVar13 + local_28c +
                                                    (uint)CARRY4((uint)local_2c8,(uint)local_278);
                                        iVar18 = (local_208[1] - (int)local_2a8) -
                                                 (uint)(local_208[0] < local_290);
                                        uVar26 = CONCAT44(uVar12,local_278);
                                        if ((iVar18 <= (int)local_2ac) &&
                                           ((iVar18 < (int)local_2ac ||
                                            (uVar26 = CONCAT44(uVar12,local_278),
                                            local_208[0] - local_290 <
                                            (uint)((int)local_2c8 + (int)local_278))))) {
                                          local_250 = local_1c4._4_4_ * 0.5 * 65536.0;
                                          local_2c8 = (float)uVar12;
                                          uVar24 = FUN_0054a946();
                                          local_28c = (uint)(uVar24 >> 0x20);
                                          local_2a8 = (int *)uVar24;
                                          local_290 = local_2b4[4];
                                          uVar13 = local_2b4[5];
                                          local_230 = *(float *)(local_2a4 + 0x84) * 0.5 * 65536.0;
                                          local_2ac = uVar13;
                                          uVar26 = FUN_0054a946();
                                          local_2c8 = (float)(uVar26 >> 0x20);
                                          local_278 = (int *)uVar26;
                                          local_27c = local_290 - (int)local_2a8;
                                          lVar4 = uVar26 + CONCAT44(uStack_1fc,local_200);
                                          uVar12 = (undefined4)lVar4;
                                          uVar24 = CONCAT44(local_2a8,uVar12);
                                          if (CONCAT44((uVar13 - local_28c) -
                                                       (uint)(local_290 < local_2a8),local_27c) <=
                                              lVar4) {
                                            local_2ac = uVar13 + local_28c +
                                                        (uint)CARRY4(local_290,(uint)local_2a8);
                                            iVar18 = (uStack_1fc - (int)local_2c8) -
                                                     (uint)(local_200 < local_278);
                                            uVar24 = CONCAT44(local_2a8,uVar12);
                                            if ((iVar18 <= (int)local_2ac) &&
                                               ((iVar18 < (int)local_2ac ||
                                                (uVar24 = CONCAT44(local_2a8,uVar12),
                                                (uint)((int)local_200 - (int)local_278) <
                                                local_290 + (int)local_2a8)))) {
                                              local_248 = *(float *)(local_2a4 + 0x88) * 0.5 *
                                                          65536.0;
                                              local_290 = uVar12;
                                              uVar27 = FUN_0054a946();
                                              local_2c8 = (float)(uVar27 >> 0x20);
                                              local_2a8 = (int *)uVar27;
                                              uVar26 = CONCAT44(local_2c8,local_278);
                                              local_290 = (uint)*(longlong *)(local_2b4 + 6);
                                              local_27c = local_2b4[7];
                                              uVar24 = CONCAT44(local_2a8,local_290);
                                              if (*(longlong *)(local_2b4 + 6) <=
                                                  (longlong)(uVar27 + local_1f8)) {
                                                local_220 = local_1bc * 65536.0;
                                                uVar27 = FUN_0054a946();
                                                uVar26 = CONCAT44(local_2c8,local_278);
                                                uVar24 = CONCAT44(local_2a8,local_290);
                                                if (local_1f8 - CONCAT44(local_2c8,local_2a8) <
                                                    (longlong)
                                                    (uVar27 + CONCAT44(local_27c,local_290))) {
                                                  uVar19 = local_2b0;
                                                  cVar5 = '\x01';
                                                  uVar24 = CONCAT44(local_2a8,local_290);
                                                  uVar26 = CONCAT44(local_2c8,local_278);
                                                  goto LAB_0052fba4;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                local_278 = (int *)uVar26;
                                piVar15 = (int *)*piVar15;
                                uVar13 = local_2bc;
                                uVar17 = local_2c0;
                                cVar6 = local_2c9;
                              } while (piVar15 != local_270);
                            }
                          }
                        }
                      }
                    }
                  }
                  uVar19 = local_2b0;
                  cVar5 = local_2c9;
                  if (cVar6 != '\0') goto LAB_0052fba4;
                  fVar23 = (float)((int)local_2b8 + 1);
                  fVar14 = local_280;
                  local_2b8 = fVar23;
                } while ((int)fVar23 <= (int)uVar17);
              }
              uVar13 = uVar13 + 1;
              fVar23 = fVar14;
              uVar19 = local_2b0;
              local_2bc = uVar13;
            } while ((int)uVar13 <= (int)local_288);
          }
        }
        else {
LAB_0052fbaa:
          if (cVar5 != '\0') {
            if (((uVar19 == 2) || (cVar6 == '\0')) || ((*(ushort *)(iVar18 + 0x7e) & 0x100) != 0)) {
LAB_00530301:
              puVar1 = local_208 + uVar19 * 2;
              uVar13 = *puVar1;
              *puVar1 = *puVar1 - local_234;
              local_208[uVar19 * 2 + 1] =
                   (local_208[uVar19 * 2 + 1] - local_22c) - (uint)(uVar13 < local_234);
            }
            else {
              local_288 = *(float *)(iVar18 + 0x80);
              local_280 = *(float *)(iVar18 + 0x84);
              local_270 = *(int **)(iVar18 + 0x88);
              local_284 = local_284 & 0xffffff00;
              local_e4[0] = local_288 * 0.5;
              iVar18 = 0;
              local_e4[1] = local_280 * 0.5;
              local_e4[2] = (float)local_270 * 0.5;
              do {
                local_2c8 = (float)(uVar26 >> 0x20);
                local_278 = (int *)uVar26;
                local_2a8 = (int *)(uVar24 >> 0x20);
                local_290 = (uint)uVar24;
                local_26c = local_e4[iVar18] * 65536.0;
                uVar27 = FUN_0054a946();
                uVar26 = CONCAT44(local_2c8,local_278);
                uVar24 = CONCAT44(local_2a8,local_290);
                local_98[iVar18 * 2] = (uint)uVar27;
                local_98[iVar18 * 2 + 1] = (uint)(uVar27 >> 0x20);
                iVar18 = iVar18 + 1;
              } while (iVar18 < 3);
              local_e4[3] = 0.0;
              local_e4[4] = 0.0;
              local_e4[5] = 1.01;
              iVar18 = 0;
              do {
                local_254 = local_e4[iVar18 + 3] * 65536.0;
                uVar24 = FUN_0054a946();
                local_c0[iVar18 * 2] = (uint)uVar24;
                local_c0[iVar18 * 2 + 1] = (uint)(uVar24 >> 0x20);
                iVar18 = iVar18 + 1;
              } while (iVar18 < 3);
              uVar13 = local_208[0] + local_c0[0];
              iVar18 = local_208[1] + local_c0[1] + (uint)CARRY4(local_208[0],local_c0[0]);
              _local_1e0 = CONCAT44(iVar18,uVar13);
              uVar19 = (int)local_200 + local_c0[2];
              iVar7 = uStack_1fc + local_c0[3] + (uint)CARRY4((uint)local_200,local_c0[2]);
              _local_1d8 = CONCAT44(iVar7,uVar19);
              local_1d0 = local_1f8 + CONCAT44(local_c0[5],local_c0[4]);
              _local_170 = CONCAT44((iVar18 - local_98[1]) - (uint)(uVar13 < local_98[0]),
                                    uVar13 - local_98[0]);
              _local_168 = CONCAT44((iVar7 - local_98[3]) - (uint)(uVar19 < local_98[2]),
                                    uVar19 - local_98[2]);
              local_160 = (local_1f8 + CONCAT44(local_c0[5],local_c0[4])) -
                          CONCAT44(local_98[5],local_98[4]);
              FUN_00405450((int *)&local_130,&local_170);
              iVar18 = 0;
              local_a4[0] = local_288 * 0.5;
              local_a4[1] = local_280 * 0.5;
              local_a4[2] = (float)local_270 * 0.5;
              do {
                local_24c = local_a4[iVar18] * 65536.0;
                uVar24 = FUN_0054a946();
                local_98[iVar18 * 2 + 6] = (uint)uVar24;
                local_98[iVar18 * 2 + 7] = (uint)(uVar24 >> 0x20);
                iVar18 = iVar18 + 1;
              } while (iVar18 < 3);
              local_e4[6] = 0.0;
              local_e4[7] = 0.0;
              local_e4[8] = 1.01;
              iVar18 = 0;
              do {
                local_244 = local_e4[iVar18 + 6] * 65536.0;
                uVar24 = FUN_0054a946();
                local_98[iVar18 * 2 + 0xc] = (uint)uVar24;
                local_98[iVar18 * 2 + 0xd] = (uint)(uVar24 >> 0x20);
                iVar18 = iVar18 + 1;
              } while (iVar18 < 3);
              uVar13 = local_208[0] + local_98[0xc];
              iVar18 = local_208[1] + local_98[0xd] + (uint)CARRY4(local_208[0],local_98[0xc]);
              _local_1b8 = CONCAT44(iVar18,uVar13);
              uVar19 = (int)local_200 + local_98[0xe];
              iVar7 = uStack_1fc + local_98[0xf] + (uint)CARRY4((uint)local_200,local_98[0xe]);
              _local_1b0 = CONCAT44(iVar7,uVar19);
              local_1a8 = local_1f8 + CONCAT44(local_98[0x11],local_98[0x10]);
              _local_188 = CONCAT44(iVar18 + local_98[7] + (uint)CARRY4(uVar13,local_98[6]),
                                    uVar13 + local_98[6]);
              _local_180 = CONCAT44(iVar7 + local_98[9] + (uint)CARRY4(uVar19,local_98[8]),
                                    uVar19 + local_98[8]);
              local_178 = local_1f8 + CONCAT44(local_98[0x11],local_98[0x10]) +
                          CONCAT44(local_98[0xb],local_98[10]);
              FUN_00405450(&local_154,&local_188);
              local_2c0 = local_130;
              uVar13 = local_130;
              piVar15 = local_12c;
              if ((int)local_130 <= local_154) {
                do {
                  local_2b4 = piVar15;
                  piVar15 = local_2b4;
                  iVar18 = local_128;
                  local_2c0 = uVar13;
                  if ((int)local_2b4 <= local_150) {
                    do {
                      if (iVar18 <= local_14c) {
                        do {
                          if ((((int)uVar13 < 0) || ((int)local_2b4 < 0)) ||
                             ((0xffffff < (int)uVar13 || (0xffffff < (int)local_2b4)))) {
LAB_005301cb:
                            puVar8 = &DAT_005842dc;
                          }
                          else {
                            iVar7 = ((int)local_2b4 >> 0x1f & 0xffU) + (int)local_2b4;
                            uVar19 = iVar7 >> 8;
                            iVar2 = ((int)uVar13 >> 0x1f & 0xffU) + uVar13;
                            uVar13 = iVar2 >> 8;
                            if (((((int)uVar13 < 0) || ((int)uVar19 < 0)) || (0xffff < (int)uVar13))
                               || (0xffff < (int)uVar19)) goto LAB_005301cb;
                            local_288 = (float)((int)(uVar19 + (iVar7 >> 0x1f & 0x3fU)) >> 6);
                            iVar7 = (int)(uVar13 + (iVar2 >> 0x1f & 0x3fU)) >> 6;
                            if ((((iVar7 < 0) || ((int)local_288 < 0)) || (0x3ff < iVar7)) ||
                               ((0x3ff < (int)local_288 ||
                                (iVar7 = *(int *)((int)local_274 +
                                                 (iVar7 * 0x400 + (int)local_288) * 4 + 0xbc),
                                iVar7 == 0)))) goto LAB_005301cb;
                            uVar13 = uVar13 & 0x8000003f;
                            if ((int)uVar13 < 0) {
                              uVar13 = (uVar13 - 1 | 0xffffffc0) + 1;
                            }
                            uVar19 = uVar19 & 0x8000003f;
                            if ((int)uVar19 < 0) {
                              uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
                            }
                            iVar7 = *(int *)(iVar7 + 0x10018 + (uVar13 * 0x40 + uVar19) * 4);
                            if (iVar7 == 0) goto LAB_005301cb;
                            uVar13 = (uint)local_2b4 & 0x800000ff;
                            if ((int)uVar13 < 0) {
                              uVar13 = (uVar13 - 1 | 0xffffff00) + 1;
                            }
                            uVar19 = local_2c0 & 0x800000ff;
                            if ((int)uVar19 < 0) {
                              uVar19 = (uVar19 - 1 | 0xffffff00) + 1;
                            }
                            this_00 = (void *)((uVar13 * 0x100 + uVar19) * 0x20 +
                                              *(int *)(iVar7 + 0xa8));
                            if ((this_00 == (void *)0x0) ||
                               (iVar7 = *(int *)((int)this_00 + 0x10), iVar18 < iVar7))
                            goto LAB_005301cb;
                            if (iVar18 < *(int *)((int)this_00 + 0x1c) + iVar7) {
                              puVar8 = FUN_00405f20(this_00,iVar18 - iVar7);
                              if ((((puVar8[3] & 0x1f) == 0) && (iVar18 < 1)) &&
                                 ((puVar8[3] & 0x40) == 0)) {
                                puVar8 = &DAT_005842d4;
                              }
                            }
                            else {
                              puVar8 = &DAT_005842d4;
                              if (0 < iVar18) {
                                puVar8 = &DAT_005842d8;
                              }
                            }
                          }
                          uVar26 = CONCAT44(local_2c8,local_278);
                          uVar24 = CONCAT44(local_2a8,local_290);
                          if (((puVar8[3] & 0x1f) != 0) &&
                             (local_284 = local_284 & 0xff, (puVar8[3] & 0x1f) != 2)) {
                            local_284 = 1;
                          }
                          iVar18 = iVar18 + 1;
                          uVar13 = local_2c0;
                        } while (iVar18 <= local_14c);
                        iVar18 = local_128;
                        uVar19 = local_2b0;
                        if ((char)local_284 != '\0') goto LAB_00530301;
                      }
                      local_2b4 = (int *)((int)local_2b4 + 1);
                      piVar15 = local_12c;
                    } while ((int)local_2b4 <= local_150);
                  }
                  local_2c0 = uVar13 + 1;
                  uVar13 = local_2c0;
                } while ((int)local_2c0 <= local_154);
              }
              local_23c = *(float *)(local_2a4 + 0x88) * 0.5 * 65536.0;
              uVar24 = FUN_0054a946();
              local_280 = (float)(uVar24 >> 0x20);
              local_288 = (float)uVar24;
              lVar4 = local_1f8 - uVar24;
              if ((lVar4 < 0x100000000) && (lVar4 < 0)) {
                lVar4 = lVar4 + -0x10000;
              }
              uVar28 = __alldiv((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),0x10000,0);
              uVar13 = (uint)uVar28;
              uVar24 = FUN_0054a946();
              uVar19 = uVar13 * 0x10000 - (uint)uVar24;
              local_1f8._0_4_ = uVar19 + (int)local_288;
              local_1f8._4_4_ =
                   (((((int)uVar13 >> 0x1f) << 0x10 | uVar13 >> 0x10) - (int)(uVar24 >> 0x20)) -
                   (uint)(uVar13 * 0x10000 < (uint)uVar24)) + (int)local_280 +
                   (uint)CARRY4(uVar19,(uint)local_288);
              uVar27 = FUN_0054a946();
              uVar26 = CONCAT44(local_2c8,local_278);
              uVar24 = CONCAT44(local_2a8,local_290);
              local_1f8 = uVar27 + CONCAT44(local_1f8._4_4_,(uint)local_1f8);
              uVar19 = local_2b0;
            }
          }
        }
        local_278 = (int *)uVar26;
        local_2b0 = uVar19 + 1;
        iVar18 = local_2a4;
      } while ((int)local_2b0 < 3);
      local_2c4 = (float)((int)local_2c4 + 1);
      lVar4 = local_1f8;
    } while ((int)local_2c4 < (int)local_2a0);
  }
  local_2c8 = (float)(uVar26 >> 0x20);
  local_278 = (int *)uVar26;
  local_1f8._4_4_ = (uint)((ulonglong)lVar4 >> 0x20);
  local_1f8._0_4_ = (uint)lVar4;
  local_2a8 = (int *)(uVar24 >> 0x20);
  local_290 = (uint)uVar24;
  local_110 = local_208[0] - *param_2;
  iStack_10c = (local_208[1] - param_2[1]) - (uint)(local_208[0] < *param_2);
  local_108 = (int)local_200 - param_2[2];
  iStack_104 = (uStack_1fc - param_2[3]) - (uint)(local_200 < (int *)param_2[2]);
  local_100 = (uint)local_1f8 - param_2[4];
  iStack_fc = (local_1f8._4_4_ - param_2[5]) - (uint)((uint)local_1f8 < param_2[4]);
  local_f0 = (float)CONCAT44(iStack_10c,local_110) * 1.5258789e-05;
  local_2a0 = (float)CONCAT44(iStack_fc,local_100);
  local_ec = (float)CONCAT44(iStack_104,local_108) * 1.5258789e-05;
  local_1f8 = lVar4;
  __security_check_cookie(local_c ^ (uint)auStack_2d0);
  return;
}


/* __allmul @ 0054aae0  kind=gamemisc  attributed-by=caller-vote  size=52 */

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


