// WorldMap (world) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "WorldMap.h"

/* cube::WorldMap::WorldMap @ 005fae40  kind=game  attributed-by=rtti  size=2435 */

void __thiscall
cube::WorldMap::WorldMap(WorldMap *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  Sprite **ppSVar2;
  Sprite **ppSVar3;
  Sprite **ppSVar4;
  WorldMap *pWVar5;
  undefined2 uVar6;
  uint uVar7;
  Sprite *pSVar8;
  undefined4 *puVar9;
  Sprite *pSVar10;
  Sprite *pSVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined2 *puVar15;
  Sprite *local_58;
  Sprite *local_54;
  Sprite *local_50;
  undefined2 local_4c;
  Sprite *local_48;
  WorldMap *local_44;
  Sprite *local_40;
  Sprite *local_3c [2];
  undefined1 local_31;
  Sprite *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4999;
  local_10 = ExceptionList;
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->WorldMap_data).offset_0x8c = 0xffffffff;
  (this->WorldMap_data).offset_0x90 = 0xffffffff;
  (this->WorldMap_data).offset_0x94 = 0xffffffff;
  (this->WorldMap_data).offset_0x98 = 0xffffffff;
  (this->WorldMap_data).offset_0xa4 = param_3;
  local_3c[1] = (Sprite *)param_1;
  (this->WorldMap_data).offset_0x9c = 0;
  (this->WorldMap_data).offset_0xa0 = param_1;
  (this->WorldMap_data).offset_0xa8 = param_2;
  *(undefined4 *)&this[0xba2f].WorldMap_data.field_0x64 = 0;
  *(undefined4 *)&this[0xba2f].WorldMap_data.field_0x68 = 0;
  local_44 = this;
  local_14 = uVar7;
  Database::Database((Database *)&this[0xba2f].WorldMap_data.offset_0x9c);
  this[0xba2f].WorldMap_data.offset_0xa4 = 1;
  local_30 = (Sprite *)&this[0xba2f].WorldMap_data.offset_0xa8;
  *(undefined4 *)local_30 = 0;
  this[0xba30].vftablePtr = (WorldMap_vftable *)0x0;
  *(undefined4 *)&this[0xba30].WorldMap_data = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_48 = operator_new(0x60);
  local_8._0_1_ = 2;
  if (local_48 == (Sprite *)0x0) {
    pSVar8 = (Sprite *)0x0;
  }
  else {
    pSVar8 = Sprite::Sprite(local_48,param_1);
  }
  pWVar5 = local_44;
  local_8._0_1_ = 1;
  *(Sprite **)&local_44[0xba2f].WorldMap_data.field_0x5c = pSVar8;
  FUN_004e75c0(4,4,4);
  iVar14 = 0;
  do {
    iVar12 = 0;
    do {
      if ((((iVar14 < 1) || (iVar12 < 1)) || (2 < iVar14)) || (2 < iVar12)) {
        iVar1 = *(int *)&pWVar5[0xba2f].WorldMap_data.field_0x5c;
        local_48 = (Sprite *)CONCAT22(local_48._2_2_,0xa0a);
        pSVar8 = local_48;
        local_31 = 10;
        if (((iVar14 < 0) || (iVar12 < 0)) ||
           ((*(int *)(iVar1 + 0x44) <= iVar14 ||
            ((*(int *)(iVar1 + 0x48) <= iVar12 || (*(int *)(iVar1 + 0x4c) < 1)))))) {
          puVar15 = (undefined2 *)&DAT_0076b340;
        }
        else {
          puVar15 = (undefined2 *)
                    ((*(int *)(iVar1 + 0x44) * iVar12 + iVar14) * 3 + *(int *)(iVar1 + 0x30));
        }
        local_48._0_2_ = 0xa0a;
        uVar6 = local_48._0_2_;
        local_48 = pSVar8;
      }
      else {
        iVar1 = *(int *)&pWVar5[0xba2f].WorldMap_data.field_0x5c;
        local_4c = 0xffff;
        local_31 = 0xff;
        if ((((iVar14 < 0) || (iVar12 < 0)) || (*(int *)(iVar1 + 0x44) <= iVar14)) ||
           ((*(int *)(iVar1 + 0x48) <= iVar12 || (*(int *)(iVar1 + 0x4c) < 1)))) {
          puVar15 = (undefined2 *)&DAT_0076b340;
          uVar6 = 0xffff;
        }
        else {
          puVar15 = (undefined2 *)
                    ((*(int *)(iVar1 + 0x44) * iVar12 + iVar14) * 3 + *(int *)(iVar1 + 0x30));
          uVar6 = 0xffff;
        }
      }
      *puVar15 = uVar6;
      iVar12 = iVar12 + 1;
      *(undefined1 *)(puVar15 + 1) = local_31;
    } while (iVar12 < 4);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 4);
  FUN_004e7870(uVar7);
  pSVar8 = local_30;
  puVar9 = (undefined4 *)&pWVar5[0x5d18].WorldMap_data.field_0x2c;
  iVar14 = 0x400;
  do {
    iVar12 = 0x400;
    do {
      puVar9[-0x100000] = 0;
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  local_30 = operator_new(0x60);
  pSVar11 = local_3c[1];
  local_8._0_1_ = 3;
  if (local_30 == (Sprite *)0x0) {
    pSVar10 = (Sprite *)0x0;
  }
  else {
    pSVar10 = Sprite::Sprite(local_30,local_3c[1]);
  }
  local_8._0_1_ = 1;
  *(Sprite **)&local_44[0xba2f].WorldMap_data.field_0x60 = pSVar10;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("skull.cub",9);
  local_8._0_1_ = 4;
  FUN_004e7290(local_2c,0,1);
  local_8._0_1_ = 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_30 = operator_new(0x60);
  local_8._0_1_ = 5;
  if (local_30 == (Sprite *)0x0) {
    pSVar11 = (Sprite *)0x0;
  }
  else {
    pSVar11 = Sprite::Sprite(local_30,pSVar11);
  }
  ppSVar2 = *(Sprite ***)((int)pSVar8 + 4);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_54 = pSVar11;
  if (&local_54 < ppSVar2) {
    ppSVar3 = *(Sprite ***)pSVar8;
    if (&local_54 < ppSVar3) goto LAB_005fb18a;
    ppSVar4 = *(Sprite ***)((int)pSVar8 + 8);
    if ((ppSVar2 == ppSVar4) && ((int)ppSVar4 - (int)ppSVar2 >> 2 == 0)) {
      iVar14 = (int)((int)ppSVar2 - *(uint *)pSVar8) >> 2;
      if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_30 = (Sprite *)(iVar14 + 1);
      uVar7 = (int)((int)ppSVar4 - *(uint *)pSVar8) >> 2;
      if (0x3fffffff - (uVar7 >> 1) < uVar7) {
        pSVar11 = (Sprite *)0x0;
      }
      else {
        pSVar11 = (Sprite *)(uVar7 + (uVar7 >> 1));
      }
      if (pSVar11 < local_30) {
        pSVar11 = local_30;
      }
      FUN_0063da20(pSVar11);
    }
    if (*(undefined4 **)((int)pSVar8 + 4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)pSVar8 + 4) =
           *(undefined4 *)(*(uint *)pSVar8 + ((int)&local_54 - (int)ppSVar3 >> 2) * 4);
    }
  }
  else {
LAB_005fb18a:
    ppSVar3 = *(Sprite ***)((int)pSVar8 + 8);
    if ((ppSVar2 == ppSVar3) && ((int)ppSVar3 - (int)ppSVar2 >> 2 == 0)) {
      iVar14 = (int)((int)ppSVar2 - *(uint *)pSVar8) >> 2;
      if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_30 = (Sprite *)(iVar14 + 1);
      uVar7 = (int)((int)ppSVar3 - *(uint *)pSVar8) >> 2;
      if (0x3fffffff - (uVar7 >> 1) < uVar7) {
        pSVar10 = (Sprite *)0x0;
      }
      else {
        pSVar10 = (Sprite *)(uVar7 + (uVar7 >> 1));
      }
      if (pSVar10 < local_30) {
        pSVar10 = local_30;
      }
      FUN_0063da20(pSVar10);
    }
    if (*(undefined4 **)((int)pSVar8 + 4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)pSVar8 + 4) = pSVar11;
    }
  }
  *(uint *)((int)pSVar8 + 4) = *(uint *)((int)pSVar8 + 4) + 4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("map-tile-plains.cub",0x13);
  local_8._0_1_ = 6;
  FUN_004e7290(local_2c,0,1);
  local_8._0_1_ = 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_30 = operator_new(0x60);
  local_8._0_1_ = 7;
  if (local_30 == (Sprite *)0x0) {
    pSVar11 = (Sprite *)0x0;
  }
  else {
    pSVar11 = Sprite::Sprite(local_30,local_3c[1]);
  }
  ppSVar2 = *(Sprite ***)((int)pSVar8 + 4);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_50 = pSVar11;
  if (&local_50 < ppSVar2) {
    ppSVar3 = *(Sprite ***)pSVar8;
    if (&local_50 < ppSVar3) goto LAB_005fb2eb;
    ppSVar4 = *(Sprite ***)((int)pSVar8 + 8);
    if ((ppSVar2 == ppSVar4) && ((int)ppSVar4 - (int)ppSVar2 >> 2 == 0)) {
      iVar14 = (int)((int)ppSVar2 - *(uint *)pSVar8) >> 2;
      if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_30 = (Sprite *)(iVar14 + 1);
      uVar7 = (int)((int)ppSVar4 - *(uint *)pSVar8) >> 2;
      if (0x3fffffff - (uVar7 >> 1) < uVar7) {
        pSVar11 = (Sprite *)0x0;
      }
      else {
        pSVar11 = (Sprite *)(uVar7 + (uVar7 >> 1));
      }
      if (pSVar11 < local_30) {
        pSVar11 = local_30;
      }
      FUN_0063da20(pSVar11);
    }
    if (*(undefined4 **)((int)pSVar8 + 4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)pSVar8 + 4) =
           *(undefined4 *)(*(uint *)pSVar8 + ((int)&local_50 - (int)ppSVar3 >> 2) * 4);
    }
  }
  else {
LAB_005fb2eb:
    ppSVar3 = *(Sprite ***)((int)pSVar8 + 8);
    if ((ppSVar2 == ppSVar3) && ((int)ppSVar3 - (int)ppSVar2 >> 2 == 0)) {
      iVar14 = (int)((int)ppSVar2 - *(uint *)pSVar8) >> 2;
      if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_30 = (Sprite *)(iVar14 + 1);
      uVar7 = (int)((int)ppSVar3 - *(uint *)pSVar8) >> 2;
      if (0x3fffffff - (uVar7 >> 1) < uVar7) {
        pSVar10 = (Sprite *)0x0;
      }
      else {
        pSVar10 = (Sprite *)(uVar7 + (uVar7 >> 1));
      }
      if (pSVar10 < local_30) {
        pSVar10 = local_30;
      }
      FUN_0063da20(pSVar10);
    }
    if (*(undefined4 **)((int)pSVar8 + 4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)pSVar8 + 4) = pSVar11;
    }
  }
  *(uint *)((int)pSVar8 + 4) = *(uint *)((int)pSVar8 + 4) + 4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("map-tile-village.cub",0x14);
  local_8._0_1_ = 8;
  FUN_004e7290(local_2c,0,1);
  local_8._0_1_ = 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_30 = operator_new(0x60);
  local_8._0_1_ = 9;
  if (local_30 == (Sprite *)0x0) {
    pSVar11 = (Sprite *)0x0;
  }
  else {
    pSVar11 = Sprite::Sprite(local_30,local_3c[1]);
  }
  ppSVar2 = *(Sprite ***)((int)pSVar8 + 4);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_3c[0] = pSVar11;
  if (local_3c < ppSVar2) {
    ppSVar3 = *(Sprite ***)pSVar8;
    if (local_3c < ppSVar3) goto LAB_005fb448;
    ppSVar4 = *(Sprite ***)((int)pSVar8 + 8);
    if ((ppSVar2 == ppSVar4) && ((int)ppSVar4 - (int)ppSVar2 >> 2 == 0)) {
      iVar14 = (int)((int)ppSVar2 - *(uint *)pSVar8) >> 2;
      if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_30 = (Sprite *)(iVar14 + 1);
      uVar7 = (int)((int)ppSVar4 - *(uint *)pSVar8) >> 2;
      if (0x3fffffff - (uVar7 >> 1) < uVar7) {
        pSVar11 = (Sprite *)0x0;
      }
      else {
        pSVar11 = (Sprite *)(uVar7 + (uVar7 >> 1));
      }
      if (pSVar11 < local_30) {
        pSVar11 = local_30;
      }
      FUN_0063da20(pSVar11);
    }
    if (*(undefined4 **)((int)pSVar8 + 4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)pSVar8 + 4) =
           *(undefined4 *)(*(uint *)pSVar8 + ((int)local_3c - (int)ppSVar3 >> 2) * 4);
    }
  }
  else {
LAB_005fb448:
    ppSVar3 = *(Sprite ***)((int)pSVar8 + 8);
    if ((ppSVar2 == ppSVar3) && ((int)ppSVar3 - (int)ppSVar2 >> 2 == 0)) {
      iVar14 = (int)((int)ppSVar2 - *(uint *)pSVar8) >> 2;
      if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_30 = (Sprite *)(iVar14 + 1);
      uVar7 = (int)((int)ppSVar3 - *(uint *)pSVar8) >> 2;
      if (0x3fffffff - (uVar7 >> 1) < uVar7) {
        pSVar10 = (Sprite *)0x0;
      }
      else {
        pSVar10 = (Sprite *)(uVar7 + (uVar7 >> 1));
      }
      if (pSVar10 < local_30) {
        pSVar10 = local_30;
      }
      FUN_0063da20(pSVar10);
    }
    if (*(undefined4 **)((int)pSVar8 + 4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)pSVar8 + 4) = pSVar11;
    }
  }
  *(uint *)((int)pSVar8 + 4) = *(uint *)((int)pSVar8 + 4) + 4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("map-tile-forest.cub",0x13);
  local_8._0_1_ = 10;
  FUN_004e7290(local_2c,0,1);
  local_8._0_1_ = 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_30 = operator_new(0x60);
  local_8._0_1_ = 0xb;
  if (local_30 == (Sprite *)0x0) {
    pSVar11 = (Sprite *)0x0;
  }
  else {
    pSVar11 = Sprite::Sprite(local_30,local_3c[1]);
  }
  ppSVar2 = *(Sprite ***)((int)pSVar8 + 4);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_58 = pSVar11;
  if (&local_58 < ppSVar2) {
    ppSVar3 = *(Sprite ***)pSVar8;
    if (&local_58 < ppSVar3) goto LAB_005fb5a5;
    ppSVar4 = *(Sprite ***)((int)pSVar8 + 8);
    if ((ppSVar2 == ppSVar4) && ((int)ppSVar4 - (int)ppSVar2 >> 2 == 0)) {
      iVar14 = (int)((int)ppSVar2 - *(uint *)pSVar8) >> 2;
      if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_30 = (Sprite *)(iVar14 + 1);
      uVar7 = (int)((int)ppSVar4 - *(uint *)pSVar8) >> 2;
      if (0x3fffffff - (uVar7 >> 1) < uVar7) {
        pSVar11 = (Sprite *)0x0;
      }
      else {
        pSVar11 = (Sprite *)(uVar7 + (uVar7 >> 1));
      }
      if (pSVar11 < local_30) {
        pSVar11 = local_30;
      }
      FUN_0063da20(pSVar11);
    }
    if (*(undefined4 **)((int)pSVar8 + 4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)pSVar8 + 4) =
           *(undefined4 *)(*(uint *)pSVar8 + ((int)&local_58 - (int)ppSVar3 >> 2) * 4);
    }
  }
  else {
LAB_005fb5a5:
    ppSVar3 = *(Sprite ***)((int)pSVar8 + 8);
    if ((ppSVar2 == ppSVar3) && ((int)ppSVar3 - (int)ppSVar2 >> 2 == 0)) {
      iVar14 = (int)((int)ppSVar2 - *(uint *)pSVar8) >> 2;
      if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_30 = (Sprite *)(iVar14 + 1);
      uVar7 = (int)((int)ppSVar3 - *(uint *)pSVar8) >> 2;
      if (0x3fffffff - (uVar7 >> 1) < uVar7) {
        pSVar10 = (Sprite *)0x0;
      }
      else {
        pSVar10 = (Sprite *)(uVar7 + (uVar7 >> 1));
      }
      if (pSVar10 < local_30) {
        pSVar10 = local_30;
      }
      FUN_0063da20(pSVar10);
    }
    if (*(undefined4 **)((int)pSVar8 + 4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)pSVar8 + 4) = pSVar11;
    }
  }
  *(uint *)((int)pSVar8 + 4) = *(uint *)((int)pSVar8 + 4) + 4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("map-tile-mountains.cub",0x16);
  local_8._0_1_ = 0xc;
  FUN_004e7290(local_2c,0,1);
  local_8._0_1_ = 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_30 = operator_new(0x60);
  local_8._0_1_ = 0xd;
  if (local_30 == (Sprite *)0x0) {
    pSVar11 = (Sprite *)0x0;
  }
  else {
    pSVar11 = Sprite::Sprite(local_30,local_3c[1]);
  }
  ppSVar2 = *(Sprite ***)((int)pSVar8 + 4);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_40 = pSVar11;
  if (&local_40 < ppSVar2) {
    ppSVar3 = *(Sprite ***)pSVar8;
    if (ppSVar3 <= &local_40) {
      ppSVar4 = *(Sprite ***)((int)pSVar8 + 8);
      if ((ppSVar2 == ppSVar4) && ((int)ppSVar4 - (int)ppSVar2 >> 2 == 0)) {
        iVar14 = (int)((int)ppSVar2 - *(uint *)pSVar8) >> 2;
        if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar13 = iVar14 + 1;
        uVar7 = (int)((int)ppSVar4 - *(uint *)pSVar8) >> 2;
        if (0x3fffffff - (uVar7 >> 1) < uVar7) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar7 + (uVar7 >> 1);
        }
        if (uVar7 < uVar13) {
          uVar7 = uVar13;
        }
        FUN_0063da20(uVar7);
      }
      if (*(undefined4 **)((int)pSVar8 + 4) != (undefined4 *)0x0) {
        **(undefined4 **)((int)pSVar8 + 4) =
             *(undefined4 *)(*(uint *)pSVar8 + ((int)&local_40 - (int)ppSVar3 >> 2) * 4);
      }
      goto LAB_005fb753;
    }
  }
  ppSVar3 = *(Sprite ***)((int)pSVar8 + 8);
  if ((ppSVar2 == ppSVar3) && ((int)ppSVar3 - (int)ppSVar2 >> 2 == 0)) {
    iVar14 = (int)((int)ppSVar2 - *(uint *)pSVar8) >> 2;
    if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar13 = iVar14 + 1;
    uVar7 = (int)((int)ppSVar3 - *(uint *)pSVar8) >> 2;
    if (0x3fffffff - (uVar7 >> 1) < uVar7) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar7 + (uVar7 >> 1);
    }
    if (uVar7 < uVar13) {
      uVar7 = uVar13;
    }
    FUN_0063da20(uVar7);
  }
  if (*(undefined4 **)((int)pSVar8 + 4) != (undefined4 *)0x0) {
    **(undefined4 **)((int)pSVar8 + 4) = pSVar11;
  }
LAB_005fb753:
  *(uint *)((int)pSVar8 + 4) = *(uint *)((int)pSVar8 + 4) + 4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("map-tile-hills.cub",0x12);
  local_8 = CONCAT31(local_8._1_3_,0xe);
  FUN_004e7290(local_2c,0,1);
  pWVar5 = local_44;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&local_44[0xba2f].WorldMap_data.field_0x84,0x80000400);
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&pWVar5[0xba2f].WorldMap_data.field_0x6c,0x80000400);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::WorldMap::~WorldMap @ 005fb890  kind=game  attributed-by=rtti  size=174 */

void __thiscall cube::WorldMap::~WorldMap(WorldMap *this)

{
  void *pvVar1;
  uint uVar2;
  WorldMap_vftable *pWVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f49dc;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  pWVar3 = (WorldMap_vftable *)this[0xba2f].WorldMap_data.offset_0xa8;
  local_8 = 1;
  if (pWVar3 != this[0xba30].vftablePtr) {
    do {
      if (pWVar3->deleting_destructor != (deleting_destructor *)0x0) {
        (*(code *)**(undefined4 **)pWVar3->deleting_destructor)(1,uVar2);
      }
      pWVar3 = pWVar3 + 1;
    } while (pWVar3 != this[0xba30].vftablePtr);
  }
  FUN_00601f80();
  DeleteCriticalSection((LPCRITICAL_SECTION)&this[0xba2f].WorldMap_data.field_0x84);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this[0xba2f].WorldMap_data.field_0x6c);
  pvVar1 = (void *)this[0xba2f].WorldMap_data.offset_0xa8;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  local_8 = 0xffffffff;
  Database::Database((Database *)&this[0xba2f].WorldMap_data.offset_0x9c);
  ExceptionList = local_10;
  return;
}


/* cube::WorldMap::deleting_destructor @ 005fbad0  kind=game  attributed-by=rtti  size=30 */

WorldMap * __thiscall cube::WorldMap::deleting_destructor(WorldMap *this,byte param_1)

{
  ~WorldMap(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


