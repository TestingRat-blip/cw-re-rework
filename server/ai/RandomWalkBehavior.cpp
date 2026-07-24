// RandomWalkBehavior (ai) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "RandomWalkBehavior.h"

/* cube::RandomWalkBehavior::RandomWalkBehavior @ 0041cb90  kind=game  attributed-by=rtti  size=16 */

RandomWalkBehavior * __thiscall
cube::RandomWalkBehavior::RandomWalkBehavior(RandomWalkBehavior *this)

{
  this->vftablePtr = &vftable;
  (this->RandomWalkBehavior_data).offset_0x0 = 0;
  return this;
}


/* cube::RandomWalkBehavior::vfunction1 @ 0041cbb0  kind=game  attributed-by=rtti  size=704 */

void __thiscall
cube::RandomWalkBehavior::vfunction1
          (RandomWalkBehavior *this,int param_1,undefined4 param_2,int param_3)

{
  RandomWalkBehavior_data *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  longlong lVar10;
  undefined8 uVar11;
  float local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  RandomWalkBehavior *local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_c;
  
  local_c = DAT_00583cc8 ^ (uint)&local_5c;
  *(ushort *)(param_1 + 0x124) = *(ushort *)(param_1 + 0x124) & 0xffbf;
  pRVar1 = &this->RandomWalkBehavior_data;
  pRVar1->offset_0x0 = pRVar1->offset_0x0 - param_3;
  iVar2 = (this->RandomWalkBehavior_data).offset_0x0;
  if ((int)pRVar1->offset_0x0 < 0) {
    iVar2 = 0;
  }
  local_58 = param_1;
  (this->RandomWalkBehavior_data).offset_0x0 = iVar2;
  local_4c = this;
  if (iVar2 == 0) {
    local_50 = *(uint *)(param_1 + 0x10);
    local_44 = *(int *)(param_1 + 0x14);
    local_5c = *(float *)(param_1 + 0x1c);
    local_28 = local_50 - *(uint *)(param_1 + 0x1c0);
    local_24 = (local_44 - *(int *)(param_1 + 0x1c4)) -
               (uint)(local_50 < *(uint *)(param_1 + 0x1c0));
    local_54 = *(uint *)(param_1 + 0x18);
    uVar5 = local_54 - *(uint *)(param_1 + 0x1c8);
    iVar2 = ((int)local_5c - *(int *)(param_1 + 0x1cc)) -
            (uint)(local_54 < *(uint *)(param_1 + 0x1c8));
    local_20 = uVar5;
    local_1c = iVar2;
    lVar10 = __allmul(local_28,local_24,local_28,local_24);
    uVar11 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x10000,0);
    iVar3 = (int)((ulonglong)uVar11 >> 0x20);
    local_48 = (uint)uVar11;
    lVar10 = __allmul(uVar5,iVar2,uVar5,iVar2);
    uVar11 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x10000,0);
    iVar6 = local_58;
    iVar4 = (int)((ulonglong)uVar11 >> 0x20);
    uVar5 = (uint)CARRY4(local_48,(uint)uVar11);
    iVar2 = iVar3 + iVar4;
    iVar7 = iVar2 + uVar5;
    if ((iVar7 < 0) ||
       ((iVar7 == 0 || SCARRY4(iVar3,iVar4) != SCARRY4(iVar2,uVar5) &&
        (local_48 + (uint)uVar11 < 0x640001)))) {
      iVar2 = rand();
      local_5c = ((float)iVar2 * 2.0) / 32767.0 - 1.0;
      iVar2 = rand();
      *(float *)(local_58 + 0x40) = local_5c * 10.0;
      *(undefined4 *)(local_58 + 0x48) = 0;
      *(float *)(local_58 + 0x44) = (((float)iVar2 * 2.0) / 32767.0 - 1.0) * 10.0;
      iVar6 = local_58;
    }
    else {
      local_40 = *(uint *)(local_58 + 0x1c0) - local_50;
      iStack_3c = (*(int *)(local_58 + 0x1c4) - local_44) -
                  (uint)(*(uint *)(local_58 + 0x1c0) < local_50);
      local_38 = *(uint *)(local_58 + 0x1c8) - local_54;
      iStack_34 = (*(int *)(local_58 + 0x1cc) - (int)local_5c) -
                  (uint)(*(uint *)(local_58 + 0x1c8) < local_54);
      local_30 = *(uint *)(local_58 + 0x1d0) - *(uint *)(local_58 + 0x20);
      iStack_2c = (*(int *)(local_58 + 0x1d4) - *(int *)(local_58 + 0x24)) -
                  (uint)(*(uint *)(local_58 + 0x1d0) < *(uint *)(local_58 + 0x20));
      *(float *)(local_58 + 0x40) = (float)CONCAT44(iStack_3c,local_40) * 1.5258789e-05;
      local_5c = (float)CONCAT44(iStack_2c,local_30);
      *(float *)(local_58 + 0x44) = (float)CONCAT44(iStack_34,local_38) * 1.5258789e-05;
      *(undefined4 *)(local_58 + 0x48) = 0;
      dVar8 = (double)(*(float *)(local_58 + 0x40) * *(float *)(local_58 + 0x40) +
                       *(float *)(local_58 + 0x44) * *(float *)(local_58 + 0x44) +
                      *(float *)(local_58 + 0x48) * *(float *)(local_58 + 0x48));
      libm_sse2_sqrt_precise();
      fVar9 = 1.0 / (float)dVar8;
      *(float *)(iVar6 + 0x40) = fVar9 * *(float *)(iVar6 + 0x40) * 10.0;
      *(float *)(iVar6 + 0x44) = *(float *)(iVar6 + 0x44) * fVar9 * 10.0;
      *(float *)(iVar6 + 0x48) = *(float *)(iVar6 + 0x48) * fVar9 * 10.0;
    }
    iVar2 = rand();
    (local_4c->RandomWalkBehavior_data).offset_0x0 = iVar2 % 5000 + 3000;
    *(undefined1 *)(iVar6 + 0x68) = 0;
  }
  __security_check_cookie(local_c ^ (uint)&local_5c);
  return;
}


/* cube::RandomWalkBehavior::vfunction2 @ 0041ce70  kind=game  attributed-by=rtti  size=31 */

undefined4 * __thiscall cube::RandomWalkBehavior::vfunction2(RandomWalkBehavior *this)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &vftable;
    puVar1[1] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


