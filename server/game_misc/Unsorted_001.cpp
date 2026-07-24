// Unsorted_001 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_001.h"

/* FUN_0041af30 @ 0041af30  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * __fastcall FUN_0041af30(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x28);
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


/* FUN_0041af70 @ 0041af70  kind=gamemisc  attributed-by=none  size=141 */

void __thiscall FUN_0041af70(void *this,uint param_1)

{
  int *this_00;
  uint uVar1;
  int *piVar2;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 4);
    FUN_0041ab00((void *)((int)this + 8),(int *)**(int **)(param_1 + 4),*(int **)(param_1 + 4));
    this_00 = (int *)(param_1 + 0xc);
    if (this_00 != piVar2) {
      FUN_0041a120(*(int **)(*this_00 + 4));
      param_1 = param_1 & 0xffffff00;
      *(int *)(*this_00 + 4) = *this_00;
      *(int *)*this_00 = *this_00;
      *(int *)(*this_00 + 8) = *this_00;
      *(undefined4 *)(uVar1 + 0x10) = 0;
      FUN_0041a670(this_00,piVar2,param_1);
    }
    piVar2 = (int *)**(int **)(uVar1 + 0x38);
    if (piVar2 != *(int **)(uVar1 + 0x38)) {
      do {
        FUN_0041af70(this,piVar2[2]);
        FUN_0041ab00(this_00,(int *)**(int **)(piVar2[2] + 0xc),*(int **)(piVar2[2] + 0xc));
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(uVar1 + 0x38));
    }
  }
  return;
}


/* FUN_0041b000 @ 0041b000  kind=gamemisc  attributed-by=none  size=75 */

short __cdecl FUN_0041b000(short param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((ushort)param_1 >> 8);
  if ((((((param_1 != 0x2e) && (param_1 != 0x3a)) && (param_1 != 0x2d)) &&
       ((param_1 != 0x2c && (param_1 != 0x3b)))) &&
      ((param_1 != 0x21 && ((param_1 != 0x3f && (param_1 != 0x2f)))))) &&
     ((param_1 != 0x28 && (param_1 != 0x29)))) {
    return (ushort)bVar1 << 8;
  }
  return CONCAT11(bVar1,1);
}


/* FUN_0041b050 @ 0041b050  kind=gamemisc  attributed-by=none  size=2218 */

void __thiscall FUN_0041b050(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void **this_00;
  short sVar2;
  int *piVar3;
  int *piVar4;
  undefined2 uVar5;
  QuestTextNode *pQVar6;
  int *piVar7;
  int iVar8;
  undefined4 **ppuVar9;
  void *pvVar10;
  short *****pppppsVar11;
  undefined4 **ppuVar12;
  deleting_destructor *pdVar13;
  uint extraout_ECX;
  uint uVar14;
  short *psVar15;
  undefined4 **extraout_EDX;
  uint uVar16;
  int in_stack_00000014;
  uint in_stack_00000018;
  undefined4 local_68 [2];
  undefined4 local_60 [2];
  void *local_58;
  QuestTextNode *local_54;
  int local_50;
  undefined4 local_4c;
  QuestTextNode_vftable *local_48;
  int *local_44;
  uint local_40;
  QuestTextNode *local_3c;
  QuestTextNode *local_38;
  int local_34;
  QuestTextNode *local_30;
  short ****local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054bdf5;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)((int)this + 4);
  local_8 = 0;
  local_58 = this;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))(1,local_14);
    *puVar1 = 0;
  }
  local_54 = operator_new(0x44);
  local_8._0_1_ = 1;
  if (local_54 == (QuestTextNode *)0x0) {
    pQVar6 = (QuestTextNode *)0x0;
  }
  else {
    pQVar6 = cube::QuestTextNode::QuestTextNode(local_54);
  }
  *puVar1 = pQVar6;
  local_8._0_1_ = 0;
  FUN_0041a120(*(int **)(*(int *)((int)this + 8) + 4));
  *(int *)(*(int *)((int)this + 8) + 4) = *(int *)((int)this + 8);
  *(undefined4 *)*(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 8);
  *(int *)(*(int *)((int)this + 8) + 8) = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  local_40 = 0;
  piVar7 = (int *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  local_8._0_1_ = 2;
  local_44 = piVar7;
  iVar8 = FUN_0052dfb0(piVar7,(undefined4 *)piVar7[1],puVar1);
  piVar7[1] = iVar8;
  **(int **)(iVar8 + 4) = iVar8;
  uVar16 = 1;
  local_40 = 1;
  local_54 = (QuestTextNode *)in_stack_00000014;
  local_50 = -1;
  local_34 = 0;
  uVar14 = in_stack_00000018;
  ppuVar12 = (undefined4 **)param_1;
  if (-1 < in_stack_00000014) {
    do {
      iVar8 = local_34;
      ppuVar9 = &param_1;
      if (7 < uVar14) {
        ppuVar9 = ppuVar12;
      }
      if (*(short *)((int)ppuVar9 + local_34 * 2) == 0x20) {
LAB_0041b1f8:
        ppuVar9 = &param_1;
        if (7 < uVar14) {
          ppuVar9 = ppuVar12;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x7b) {
          local_30 = operator_new(0x44);
          local_8._0_1_ = 3;
          if (local_30 == (QuestTextNode *)0x0) {
            pQVar6 = (QuestTextNode *)0x0;
          }
          else {
            pQVar6 = cube::QuestTextNode::QuestTextNode(local_30);
          }
          (pQVar6->QuestTextNode_data).offset_0x3c = 2;
          local_38 = (QuestTextNode *)(*(int *)(piVar7[1] + 8) + 0x38);
          local_48 = local_38->vftablePtr;
          local_8._0_1_ = 2;
          local_3c = pQVar6;
          local_30 = (QuestTextNode *)
                     FUN_0052dfb0(local_48,(undefined4 *)local_48[1].deleting_destructor,&local_3c);
          pvVar10 = (local_38->QuestTextNode_data).offset_0x0;
          if (pvVar10 == (void *)0x15555554) goto LAB_0041b8eb;
          (local_38->QuestTextNode_data).offset_0x0 = (void *)((int)pvVar10 + 1);
          local_48[1].deleting_destructor = (deleting_destructor *)local_30;
          *(QuestTextNode **)(local_30->QuestTextNode_data).offset_0x0 = local_30;
          (pQVar6->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar7[1] + 8);
          iVar8 = FUN_0052dfb0(piVar7,(undefined4 *)piVar7[1],&local_3c);
          if (uVar16 == 0x15555554) goto LAB_0041b8eb;
          piVar7[1] = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          local_40 = uVar16 + 1;
          local_30 = operator_new(0x44);
          local_8._0_1_ = 4;
          if (local_30 == (QuestTextNode *)0x0) {
            local_3c = (QuestTextNode *)0x0;
          }
          else {
            local_3c = cube::QuestTextNode::QuestTextNode(local_30);
          }
          iVar8 = *(int *)(piVar7[1] + 8);
          local_30 = *(QuestTextNode **)(iVar8 + 0x38);
          local_8._0_1_ = 2;
          local_38 = local_3c;
          pvVar10 = (void *)FUN_0052dfb0(&local_30->vftablePtr,
                                         (local_30->QuestTextNode_data).offset_0x0,&local_38);
          if (*(int *)(iVar8 + 0x3c) == 0x15555554) goto LAB_0041b8eb;
          *(int *)(iVar8 + 0x3c) = *(int *)(iVar8 + 0x3c) + 1;
          (local_30->QuestTextNode_data).offset_0x0 = pvVar10;
          **(int **)((int)pvVar10 + 4) = (int)pvVar10;
          (local_3c->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar7[1] + 8);
          iVar8 = FUN_0052dfb0(piVar7,(undefined4 *)piVar7[1],&local_38);
          if (uVar16 + 1 == 0x15555554) goto LAB_0041b8eb;
          piVar7[1] = iVar8;
          uVar16 = uVar16 + 2;
          **(int **)(iVar8 + 4) = iVar8;
          local_40 = uVar16;
          uVar14 = in_stack_00000018;
          ppuVar12 = (undefined4 **)param_1;
          iVar8 = local_34;
        }
        ppuVar9 = &param_1;
        if (7 < uVar14) {
          ppuVar9 = ppuVar12;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x5b) {
          local_30 = operator_new(0x44);
          local_8._0_1_ = 5;
          if (local_30 == (QuestTextNode *)0x0) {
            pQVar6 = (QuestTextNode *)0x0;
          }
          else {
            pQVar6 = cube::QuestTextNode::QuestTextNode(local_30);
          }
          (pQVar6->QuestTextNode_data).offset_0x3c = 3;
          local_30 = (QuestTextNode *)(*(int *)(piVar7[1] + 8) + 0x38);
          local_48 = local_30->vftablePtr;
          local_8._0_1_ = 2;
          local_38 = pQVar6;
          local_3c = (QuestTextNode *)
                     FUN_0052dfb0(local_48,(undefined4 *)local_48[1].deleting_destructor,&local_38);
          pvVar10 = (local_30->QuestTextNode_data).offset_0x0;
          if (pvVar10 == (void *)0x15555554) goto LAB_0041b8eb;
          (local_30->QuestTextNode_data).offset_0x0 = (void *)((int)pvVar10 + 1);
          local_48[1].deleting_destructor = (deleting_destructor *)local_3c;
          *(QuestTextNode **)(local_3c->QuestTextNode_data).offset_0x0 = local_3c;
          (pQVar6->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar7[1] + 8);
          iVar8 = FUN_0052dfb0(piVar7,(undefined4 *)piVar7[1],&local_38);
          if (uVar16 == 0x15555554) goto LAB_0041b8eb;
          piVar7[1] = iVar8;
          uVar16 = uVar16 + 1;
          **(int **)(iVar8 + 4) = iVar8;
          local_40 = uVar16;
          uVar14 = in_stack_00000018;
          ppuVar12 = (undefined4 **)param_1;
        }
        if ((int)(local_50 + 1U) < local_34) {
LAB_0041b489:
          FUN_00419f90(&param_1,(undefined2 *)local_2c,local_50 + 1U,(local_34 - local_50) - 1);
          pppppsVar11 = local_2c;
          if (7 < local_18) {
            pppppsVar11 = (short *****)local_2c[0];
          }
          local_8._0_1_ = 6;
          if (*(short *)pppppsVar11 == 0x23) {
            FUN_0041a9b0((void *)(*(int *)(piVar7[1] + 8) + 4),local_68,(undefined4 *)0x0,
                         (ushort *)local_2c,(uint)DAT_00583d7a);
          }
          else {
            pppppsVar11 = local_2c;
            if (7 < local_18) {
              pppppsVar11 = (short *****)local_2c[0];
            }
            if (*(short *)pppppsVar11 == 0x24) {
              FUN_0041a9b0((void *)(*(int *)(piVar7[1] + 8) + 0x14),local_60,(undefined4 *)0x0,
                           (ushort *)local_2c,(uint)DAT_00583d7a);
            }
            else {
              local_30 = operator_new(0x44);
              local_8._0_1_ = 7;
              if (local_30 == (QuestTextNode *)0x0) {
                pQVar6 = (QuestTextNode *)0x0;
              }
              else {
                pQVar6 = cube::QuestTextNode::QuestTextNode(local_30);
              }
              this_00 = &(pQVar6->QuestTextNode_data).offset_0x18;
              local_8._0_1_ = 6;
              local_30 = pQVar6;
              if (this_00 != local_2c) {
                FUN_004172f0(this_00,(int *)local_2c,0,0xffffffff);
              }
              local_48 = (QuestTextNode_vftable *)(*(int *)(piVar7[1] + 8) + 0x38);
              local_38 = (QuestTextNode *)local_48->deleting_destructor;
              local_30 = (QuestTextNode *)
                         FUN_0052dfb0((undefined4 *)local_38,
                                      (local_38->QuestTextNode_data).offset_0x0,&local_30);
              if (local_48[1].deleting_destructor == (deleting_destructor *)0x15555554)
              goto LAB_0041b8eb;
              local_48[1].deleting_destructor = local_48[1].deleting_destructor + 1;
              (local_38->QuestTextNode_data).offset_0x0 = local_30;
              *(QuestTextNode **)(local_30->QuestTextNode_data).offset_0x0 = local_30;
              (pQVar6->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar7[1] + 8);
              ppuVar12 = &param_1;
              if (7 < in_stack_00000018) {
                ppuVar12 = (undefined4 **)param_1;
              }
              sVar2 = *(short *)((int)ppuVar12 + local_34 * 2);
              if (((((sVar2 == 0x2e) || (sVar2 == 0x3a)) || (sVar2 == 0x2d)) ||
                  (((sVar2 == 0x2c || (sVar2 == 0x3b)) ||
                   ((sVar2 == 0x21 || ((sVar2 == 0x3f || (sVar2 == 0x2f)))))))) ||
                 ((sVar2 == 0x28 || (sVar2 == 0x29)))) {
                ppuVar12 = &param_1;
                if (7 < in_stack_00000018) {
                  ppuVar12 = (undefined4 **)param_1;
                }
                local_4c._0_2_ = *(short *)((int)ppuVar12 + local_34 * 2);
                local_4c._2_2_ = 0;
                local_30 = operator_new(0x44);
                local_8._0_1_ = 8;
                if (local_30 == (QuestTextNode *)0x0) {
                  pQVar6 = (QuestTextNode *)0x0;
                }
                else {
                  pQVar6 = cube::QuestTextNode::QuestTextNode(local_30);
                }
                local_8._0_1_ = 6;
                local_30 = pQVar6;
                if ((short)local_4c == 0) {
                  uVar14 = 0;
                }
                else {
                  psVar15 = (short *)&local_4c;
                  do {
                    sVar2 = *psVar15;
                    psVar15 = psVar15 + 1;
                  } while (sVar2 != 0);
                  uVar14 = (int)psVar15 - ((int)&local_4c + 2) >> 1;
                }
                FUN_00417410(&(pQVar6->QuestTextNode_data).offset_0x18,&local_4c,uVar14);
                (pQVar6->QuestTextNode_data).offset_0x3c = 1;
                (pQVar6->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar7[1] + 8);
                iVar8 = *(int *)(piVar7[1] + 8);
                local_48 = *(QuestTextNode_vftable **)(iVar8 + 0x38);
                pdVar13 = (deleting_destructor *)
                          FUN_0052dfb0(local_48,(undefined4 *)local_48[1].deleting_destructor,
                                       &local_30);
                if (*(int *)(iVar8 + 0x3c) == 0x15555554) goto LAB_0041b8eb;
                *(int *)(iVar8 + 0x3c) = *(int *)(iVar8 + 0x3c) + 1;
                local_48[1].deleting_destructor = pdVar13;
                **(undefined4 **)(pdVar13 + 4) = pdVar13;
              }
            }
          }
          local_8._0_1_ = 2;
          ppuVar12 = (undefined4 **)param_1;
          if (7 < local_18) {
            operator_delete(local_2c[0]);
            ppuVar12 = (undefined4 **)param_1;
          }
        }
        else {
          ppuVar9 = &param_1;
          if (7 < uVar14) {
            ppuVar9 = ppuVar12;
          }
          sVar2 = *(short *)((int)ppuVar9 + local_34 * 2);
          if (((((((sVar2 == 0x2e) || (sVar2 == 0x3a)) || (sVar2 == 0x2d)) ||
                ((sVar2 == 0x2c || (sVar2 == 0x3b)))) ||
               ((sVar2 == 0x21 || ((sVar2 == 0x3f || (sVar2 == 0x2f)))))) || (sVar2 == 0x28)) ||
             (sVar2 == 0x29)) goto LAB_0041b489;
        }
        ppuVar9 = &param_1;
        if (7 < in_stack_00000018) {
          ppuVar9 = ppuVar12;
        }
        local_50 = local_34;
        if (*(short *)((int)ppuVar9 + local_34 * 2) == 0x7c) {
          if (uVar16 < 2) goto LAB_0041b894;
          piVar3 = (int *)piVar7[1];
          if (piVar3 != piVar7) {
            *(int *)piVar3[1] = *piVar3;
            *(int *)(*piVar3 + 4) = piVar3[1];
            operator_delete(piVar3);
            uVar16 = uVar16 - 1;
            local_40 = uVar16;
          }
          local_30 = operator_new(0x44);
          local_8._0_1_ = 9;
          if (local_30 == (QuestTextNode *)0x0) {
            local_3c = (QuestTextNode *)0x0;
          }
          else {
            local_3c = cube::QuestTextNode::QuestTextNode(local_30);
          }
          iVar8 = *(int *)(piVar7[1] + 8);
          local_30 = *(QuestTextNode **)(iVar8 + 0x38);
          local_8._0_1_ = 2;
          local_38 = local_3c;
          pvVar10 = (void *)FUN_0052dfb0(&local_30->vftablePtr,
                                         (local_30->QuestTextNode_data).offset_0x0,&local_3c);
          if (*(int *)(iVar8 + 0x3c) == 0x15555554) {
LAB_0041b8eb:
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          *(int *)(iVar8 + 0x3c) = *(int *)(iVar8 + 0x3c) + 1;
          (local_30->QuestTextNode_data).offset_0x0 = pvVar10;
          **(undefined4 **)((int)pvVar10 + 4) = pvVar10;
          (local_38->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar7[1] + 8);
          iVar8 = FUN_0052dfb0(piVar7,(undefined4 *)piVar7[1],&local_3c);
          if (uVar16 == 0x15555554) goto LAB_0041b8eb;
          piVar7[1] = iVar8;
          uVar16 = uVar16 + 1;
          **(int **)(iVar8 + 4) = iVar8;
          local_40 = uVar16;
          ppuVar12 = (undefined4 **)param_1;
        }
        ppuVar9 = &param_1;
        if (7 < in_stack_00000018) {
          ppuVar9 = ppuVar12;
        }
        if (*(short *)((int)ppuVar9 + local_34 * 2) == 0x7d) {
          if (uVar16 < 3) goto LAB_0041b894;
          piVar3 = (int *)piVar7[1];
          if (piVar3 != piVar7) {
            *(int *)piVar3[1] = *piVar3;
            *(int *)(*piVar3 + 4) = piVar3[1];
            operator_delete(piVar3);
            uVar16 = uVar16 - 1;
            local_40 = uVar16;
            ppuVar12 = (undefined4 **)param_1;
          }
          piVar3 = (int *)piVar7[1];
          if (piVar3 != piVar7) {
            *(int *)piVar3[1] = *piVar3;
            *(int *)(*piVar3 + 4) = piVar3[1];
            operator_delete(piVar3);
            uVar16 = uVar16 - 1;
            local_40 = uVar16;
            ppuVar12 = (undefined4 **)param_1;
          }
        }
        ppuVar9 = &param_1;
        if (7 < in_stack_00000018) {
          ppuVar9 = ppuVar12;
        }
        uVar14 = in_stack_00000018;
        iVar8 = local_34;
        if (*(short *)((int)ppuVar9 + local_34 * 2) == 0x5d) {
          if (uVar16 < 2) goto LAB_0041b894;
          piVar3 = (int *)piVar7[1];
          if (piVar3 != piVar7) {
            *(int *)piVar3[1] = *piVar3;
            *(int *)(*piVar3 + 4) = piVar3[1];
            operator_delete(piVar3);
            uVar16 = uVar16 - 1;
            local_40 = uVar16;
            uVar14 = in_stack_00000018;
            ppuVar12 = (undefined4 **)param_1;
            iVar8 = local_34;
          }
        }
      }
      else {
        ppuVar9 = &param_1;
        if (7 < uVar14) {
          ppuVar9 = ppuVar12;
        }
        if (*(short *)((int)ppuVar9 + local_34 * 2) == 10) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < uVar14) {
          ppuVar9 = ppuVar12;
        }
        if (*(short *)((int)ppuVar9 + local_34 * 2) == 9) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < uVar14) {
          ppuVar9 = ppuVar12;
        }
        if (*(short *)((int)ppuVar9 + local_34 * 2) == 0) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < uVar14) {
          ppuVar9 = ppuVar12;
        }
        uVar5 = FUN_0041b000(*(short *)((int)ppuVar9 + local_34 * 2));
        uVar14 = extraout_ECX;
        ppuVar12 = extraout_EDX;
        if ((char)uVar5 != '\0') goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < extraout_ECX) {
          ppuVar9 = extraout_EDX;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x7b) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < extraout_ECX) {
          ppuVar9 = extraout_EDX;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x7d) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < extraout_ECX) {
          ppuVar9 = extraout_EDX;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x5b) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < extraout_ECX) {
          ppuVar9 = extraout_EDX;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x5d) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < extraout_ECX) {
          ppuVar9 = extraout_EDX;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x7c) goto LAB_0041b1f8;
      }
      local_34 = iVar8 + 1;
    } while (iVar8 + 1 <= (int)local_54);
  }
  FUN_0041af70(local_58,*(uint *)((int)local_58 + 4));
LAB_0041b894:
  piVar3 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  piVar7[1] = (int)piVar7;
  while (piVar3 != piVar7) {
    piVar4 = (int *)*piVar3;
    operator_delete(piVar3);
    piVar3 = piVar4;
  }
  operator_delete(piVar7);
  if (7 < in_stack_00000018) {
    operator_delete(param_1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0041d240 @ 0041d240  kind=gamemisc  attributed-by=none  size=44 */

void * __cdecl FUN_0041d240(int *param_1,int *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    FUN_0041d950(param_3,param_1);
    param_3 = (void *)((int)param_3 + 0xc);
  }
  return param_3;
}


/* FUN_0041d340 @ 0041d340  kind=gamemisc  attributed-by=none  size=65 */

undefined4 * __cdecl FUN_0041d340(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    *param_3 = *param_1;
    FUN_00402a70(param_3 + 1,(undefined1 *)(param_1 + 1));
    param_1 = param_1 + 0x47;
    param_3 = param_3 + 0x47;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0041d410 @ 0041d410  kind=gamemisc  attributed-by=none  size=69 */

undefined4 * __cdecl FUN_0041d410(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      FUN_00413710(param_3 + 1,(undefined1 *)(param_1 + 1));
    }
    param_1 = param_1 + 0x47;
    param_3 = param_3 + 0x47;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0041d460 @ 0041d460  kind=gamemisc  attributed-by=none  size=122 */

void * __cdecl FUN_0041d460(int *param_1,int *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0054bef1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_0041d720(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0xc);
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_0041d550 @ 0041d550  kind=gamemisc  attributed-by=none  size=114 */

void __cdecl FUN_0041d550(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 8);
    do {
      if (puVar1 != (undefined4 *)0x8) {
        puVar1[-2] = 0;
        *(undefined2 *)(puVar1 + -1) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined2 *)(puVar1 + 2) = 0;
        *(undefined1 *)((int)puVar1 + 10) = 0;
        *(undefined2 *)(puVar1 + 3) = 1;
        puVar1[0x44] = 0;
        memset(puVar1 + 4,0,0x100);
      }
      puVar1 = puVar1 + 0x47;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


/* FUN_0041d950 @ 0041d950  kind=gamemisc  attributed-by=none  size=368 */

int * __thiscall FUN_0041d950(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bf30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    if (*param_1 == param_1[1]) {
      puVar2 = *(undefined4 **)this;
    }
    else {
      uVar3 = (param_1[1] - *param_1) / 0x11c;
      uVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x11c;
      if (uVar1 < uVar3) {
        if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x11c) < uVar3) {
          if (*(void **)this != (void *)0x0) {
            operator_delete(*(void **)this);
          }
          uVar3 = FUN_0041e320(this,(param_1[1] - *param_1) / 0x11c);
          if ((char)uVar3 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          puVar2 = FUN_0041d410((undefined4 *)*param_1,(undefined4 *)param_1[1],*(undefined4 **)this
                               );
        }
        else {
          puVar2 = (undefined4 *)*param_1 + uVar1 * 0x47;
          FUN_0041d340((undefined4 *)*param_1,puVar2,*(undefined4 **)this);
          puVar2 = FUN_0041d410(puVar2,(undefined4 *)param_1[1],*(undefined4 **)((int)this + 4));
        }
      }
      else {
        FUN_0041d340((undefined4 *)*param_1,(undefined4 *)param_1[1],*(undefined4 **)this);
        puVar2 = (undefined4 *)(((param_1[1] - *param_1) / 0x11c) * 0x11c + *(int *)this);
      }
    }
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_0041dc60 @ 0041dc60  kind=gamemisc  attributed-by=none  size=435 */

int * __thiscall FUN_0041dc60(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  void **ppvVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *this_00;
  int *piVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bf70;
  local_10 = ExceptionList;
  if (this != param_1) {
    piVar7 = (int *)*param_1;
    piVar1 = (int *)param_1[1];
    if (piVar7 == piVar1) {
      ExceptionList = &local_10;
      FUN_00406310(*(undefined4 **)this,*(undefined4 **)((int)this + 4));
      pvVar5 = *(void **)this;
    }
    else {
      this_00 = *(undefined4 **)this;
      uVar2 = ((int)piVar1 - (int)piVar7) / 0xc;
      uVar3 = (*(int *)((int)this + 4) - (int)this_00) / 0xc;
      ppvVar4 = &local_10;
      if (uVar3 < uVar2) {
        if ((uint)((*(int *)((int)this + 8) - (int)this_00) / 0xc) < uVar2) {
          ExceptionList = &local_10;
          if (this_00 != (undefined4 *)0x0) {
            FUN_00406310(this_00,*(undefined4 **)((int)this + 4));
            operator_delete(*(void **)this);
          }
          uVar6 = FUN_004ce580(this,(param_1[1] - *param_1) / 0xc);
          if ((char)uVar6 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          pvVar5 = FUN_0041d460((int *)*param_1,(int *)param_1[1],*(void **)this);
        }
        else {
          ExceptionList = &local_10;
          FUN_0041d240(piVar7,piVar7 + uVar3 * 3,this_00);
          pvVar5 = FUN_0041d460(piVar7 + uVar3 * 3,(int *)param_1[1],*(void **)((int)this + 4));
        }
      }
      else {
        for (; ExceptionList = ppvVar4, piVar7 != piVar1; piVar7 = piVar7 + 3) {
          FUN_0041d950(this_00,piVar7);
          this_00 = this_00 + 3;
          ppvVar4 = ExceptionList;
        }
        FUN_00406310(this_00,*(undefined4 **)((int)this + 4));
        pvVar5 = (void *)(*(int *)this + ((param_1[1] - *param_1) / 0xc) * 0xc);
      }
    }
    *(void **)((int)this + 4) = pvVar5;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_0041de30 @ 0041de30  kind=gamemisc  attributed-by=none  size=240 */

void * __thiscall FUN_0041de30(void *this,undefined1 *param_1)

{
  FUN_00402a70(this,param_1);
  FUN_00402a70((void *)((int)this + 0x118),param_1 + 0x118);
  FUN_00402a70((void *)((int)this + 0x230),param_1 + 0x230);
  FUN_00402a70((void *)((int)this + 0x348),param_1 + 0x348);
  FUN_00402a70((void *)((int)this + 0x460),param_1 + 0x460);
  FUN_00402a70((void *)((int)this + 0x578),param_1 + 0x578);
  FUN_00402a70((void *)((int)this + 0x690),param_1 + 0x690);
  FUN_00402a70((void *)((int)this + 0x7a8),param_1 + 0x7a8);
  FUN_00402a70((void *)((int)this + 0x8c0),param_1 + 0x8c0);
  FUN_00402a70((void *)((int)this + 0x9d8),param_1 + 0x9d8);
  FUN_00402a70((void *)((int)this + 0xaf0),param_1 + 0xaf0);
  FUN_00402a70((void *)((int)this + 0xc08),param_1 + 0xc08);
  FUN_00402a70((void *)((int)this + 0xd20),param_1 + 0xd20);
  return this;
}


/* FUN_0041df70 @ 0041df70  kind=gamemisc  attributed-by=none  size=876 */

undefined4 * __thiscall FUN_0041df70(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined1 *)((int)this + 0x50) = *(undefined1 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(param_1 + 0x16);
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  FUN_00407730((void *)((int)this + 0x68),(undefined1 *)(param_1 + 0x1a));
  *(undefined2 *)((int)this + 0x114) = *(undefined2 *)(param_1 + 0x45);
  *(undefined4 *)((int)this + 0x118) = param_1[0x46];
  *(undefined4 *)((int)this + 0x11c) = param_1[0x47];
  *(undefined4 *)((int)this + 0x120) = param_1[0x48];
  *(undefined4 *)((int)this + 0x124) = param_1[0x49];
  *(undefined4 *)((int)this + 0x128) = param_1[0x4a];
  *(undefined4 *)((int)this + 300) = param_1[0x4b];
  *(undefined1 *)((int)this + 0x130) = *(undefined1 *)(param_1 + 0x4c);
  *(undefined1 *)((int)this + 0x131) = *(undefined1 *)((int)param_1 + 0x131);
  *(undefined4 *)((int)this + 0x134) = param_1[0x4d];
  *(undefined4 *)((int)this + 0x138) = param_1[0x4e];
  *(undefined4 *)((int)this + 0x13c) = param_1[0x4f];
  *(undefined4 *)((int)this + 0x140) = param_1[0x50];
  *(undefined4 *)((int)this + 0x144) = param_1[0x51];
  *(undefined4 *)((int)this + 0x148) = param_1[0x52];
  *(undefined4 *)((int)this + 0x14c) = param_1[0x53];
  *(undefined4 *)((int)this + 0x150) = param_1[0x54];
  *(undefined4 *)((int)this + 0x154) = param_1[0x55];
  *(undefined4 *)((int)this + 0x158) = param_1[0x56];
  *(undefined4 *)((int)this + 0x15c) = param_1[0x57];
  *(undefined4 *)((int)this + 0x160) = param_1[0x58];
  *(undefined4 *)((int)this + 0x164) = param_1[0x59];
  *(undefined8 *)((int)this + 0x168) = *(undefined8 *)(param_1 + 0x5a);
  *(undefined8 *)((int)this + 0x170) = *(undefined8 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x178) = param_1[0x5e];
  *(undefined1 *)((int)this + 0x17c) = *(undefined1 *)(param_1 + 0x5f);
  *(undefined1 *)((int)this + 0x17d) = *(undefined1 *)((int)param_1 + 0x17d);
  *(undefined4 *)((int)this + 0x180) = param_1[0x60];
  *(undefined4 *)((int)this + 0x184) = param_1[0x61];
  *(undefined4 *)((int)this + 0x188) = param_1[0x62];
  *(undefined4 *)((int)this + 0x18c) = param_1[99];
  *(undefined4 *)((int)this + 400) = param_1[100];
  *(undefined4 *)((int)this + 0x194) = param_1[0x65];
  *(undefined1 *)((int)this + 0x198) = *(undefined1 *)(param_1 + 0x66);
  *(undefined4 *)((int)this + 0x19c) = param_1[0x67];
  *(undefined4 *)((int)this + 0x1a0) = param_1[0x68];
  *(undefined4 *)((int)this + 0x1a4) = param_1[0x69];
  *(undefined4 *)((int)this + 0x1a8) = param_1[0x6a];
  *(undefined4 *)((int)this + 0x1b0) = param_1[0x6c];
  *(undefined4 *)((int)this + 0x1b4) = param_1[0x6d];
  *(undefined4 *)((int)this + 0x1b8) = param_1[0x6e];
  *(undefined4 *)((int)this + 0x1bc) = param_1[0x6f];
  *(undefined4 *)((int)this + 0x1c0) = param_1[0x70];
  *(undefined4 *)((int)this + 0x1c4) = param_1[0x71];
  *(undefined1 *)((int)this + 0x1c8) = *(undefined1 *)(param_1 + 0x72);
  *(undefined4 *)((int)this + 0x1cc) = param_1[0x73];
  *(undefined4 *)((int)this + 0x1d0) = param_1[0x74];
  *(undefined4 *)((int)this + 0x1d4) = param_1[0x75];
  FUN_00402a70((void *)((int)this + 0x1d8),(undefined1 *)(param_1 + 0x76));
  FUN_0041de30((void *)((int)this + 0x2f0),(undefined1 *)(param_1 + 0xbc));
  puVar1 = (undefined4 *)((int)this + 0x1128);
  iVar3 = 0xb;
  do {
    *puVar1 = *(undefined4 *)(((int)param_1 - (int)this) + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x1154) = param_1[0x455];
  puVar2 = (undefined1 *)((int)this + 0x1158);
  iVar3 = 0x10;
  do {
    *puVar2 = puVar2[(int)param_1 - (int)this];
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return this;
}


/* FUN_0041e400 @ 0041e400  kind=gamemisc  attributed-by=none  size=75 */

uint __thiscall FUN_0041e400(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x11c;
  if (0xe6c2b4 - (uVar1 >> 1) < uVar1) {
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


/* FUN_0041e8f0 @ 0041e8f0  kind=gamemisc  attributed-by=none  size=111 */

int __thiscall FUN_0041e8f0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8) - *(int *)((int)this + 4);
  iVar2 = iVar3 * -0x193d4bb7;
  if ((uint)(iVar3 / 0x11c) < param_1) {
    iVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x11c;
    if (0xe6c2b4U - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar1 = FUN_0041e400(this,iVar2 + param_1);
    iVar2 = FUN_0041e540(this,uVar1);
  }
  return iVar2;
}


/* FUN_0041eab0 @ 0041eab0  kind=gamemisc  attributed-by=none  size=112 */

uint __cdecl FUN_0041eab0(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  while (uVar1 = param_3 - 4, 3 < param_3) {
    if (*(int *)param_1 != *(int *)param_2) goto LAB_0041eae6;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
    param_3 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_0041eae6:
    bVar2 = *param_1 < *param_2;
    if ((*param_1 != *param_2) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar2 = param_1[1] < param_2[1], param_1[1] != param_2[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar2 = param_1[2] < param_2[2], param_1[2] != param_2[2] ||
           ((uVar1 != 0xffffffff && (bVar2 = param_1[3] < param_2[3], param_1[3] != param_2[3]))))))
         )))))) {
      return -(uint)bVar2 | 1;
    }
  }
  return 0;
}


/* FUN_0041f640 @ 0041f640  kind=gamemisc  attributed-by=none  size=285 */

undefined4 * __thiscall FUN_0041f640(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c050;
  local_10 = ExceptionList;
  puVar3 = *(undefined4 **)this;
  iVar4 = *(int *)((int)this + 4) - (int)puVar3;
  puVar2 = (undefined4 *)(iVar4 * -0x193d4bb7);
  uVar1 = iVar4 / 0x11c;
  if (param_1 < uVar1) {
    puVar5 = puVar3 + param_1 * 0x47;
    if (puVar5 == puVar3) {
      *(undefined4 **)((int)this + 4) = puVar3;
    }
    else {
      puVar2 = *(undefined4 **)((int)this + 4);
      if (puVar5 != puVar2) {
        ExceptionList = &local_10;
        puVar3 = FUN_0041d340(puVar2,puVar2,puVar5);
        *(undefined4 **)((int)this + 4) = puVar3;
        ExceptionList = local_10;
        return puVar3;
      }
    }
  }
  else if (uVar1 < param_1) {
    ExceptionList = &local_10;
    FUN_0041e8f0(this,param_1 - uVar1);
    local_8 = 0;
    FUN_0041d550(*(int *)((int)this + 4),param_1 - (*(int *)((int)this + 4) - *(int *)this) / 0x11c)
    ;
    puVar3 = (undefined4 *)((*(int *)((int)this + 4) - *(int *)this) / 0x11c);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + (param_1 - (int)puVar3) * 0x11c;
    ExceptionList = local_10;
    return puVar3;
  }
  return puVar2;
}


/* FUN_00420200 @ 00420200  kind=gamemisc  attributed-by=none  size=153 */

int FUN_00420200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c0d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00426830(param_1,param_2);
  local_8 = 1;
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x24) = 7;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined2 *)(iVar1 + 0x10) = 0;
    FUN_004172f0((undefined2 *)(iVar1 + 0x10),param_3 + 2,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_00420540 @ 00420540  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_00420540(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c140;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_00420040(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_00420540(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_00420540(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_00420600 @ 00420600  kind=gamemisc  attributed-by=none  size=518 */

void __thiscall
FUN_00420600(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0xea0e8 < *(uint *)((int)this + 4)) {
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
        goto LAB_004207e1;
      }
LAB_00420738:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_00420738;
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
LAB_004207e1:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_00420810 @ 00420810  kind=gamemisc  attributed-by=none  size=565 */

undefined4 * __thiscall
FUN_00420810(void *this,undefined4 *param_1,int *param_2,uint *param_3,int *param_4)

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
  
  puStack_c = &LAB_0054c160;
  local_10 = ExceptionList;
  uStack_3c = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_3c;
    FUN_00420600(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_3c;
    if (((int)param_3[1] <= param_2[5]) &&
       ((puVar3 = &uStack_3c, (int)param_3[1] < param_2[5] ||
        (local_14 = (undefined1 *)&uStack_3c, puVar3 = &uStack_3c, *param_3 < (uint)param_2[4])))) {
LAB_0042089d:
      local_14 = (undefined1 *)puVar3;
      FUN_00420600(local_20,param_1,'\x01',param_2,param_3,param_4);
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
      FUN_00420600(this,param_1,'\0',puVar5,param_3,param_4);
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
          FUN_00420600(local_20,param_1,'\0',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_0042089d;
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
          FUN_00420600(local_20,param_1,'\x01',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_00420600(local_20,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_00420a60(local_20,&local_2c,'\0',param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00420a60 @ 00420a60  kind=gamemisc  attributed-by=none  size=316 */

void __thiscall FUN_00420a60(void *this,undefined4 *param_1,char param_2,uint *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  bool local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c180;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
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
          goto LAB_00420afc;
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
LAB_00420afc:
          piVar3 = (int *)piVar5[2];
        }
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar5;
  if (local_18) {
    if (piVar5 == (int *)*piVar1) {
      local_18 = true;
      goto LAB_00420b21;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar1 = _param_2;
  if (((int)param_3[1] < _param_2[5]) ||
     (((int)param_3[1] <= _param_2[5] && (*param_3 <= (uint)_param_2[4])))) {
    operator_delete(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *unaff_FS_OFFSET = local_10;
    return;
  }
LAB_00420b21:
  puVar4 = (undefined4 *)FUN_00420600(this,(undefined4 *)&param_2,local_18,piVar5,param_3,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  *unaff_FS_OFFSET = local_10;
  return;
}


/* FUN_004213d0 @ 004213d0  kind=gamemisc  attributed-by=none  size=157 */

void __thiscall FUN_004213d0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c2e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00420470(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0x3333332) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004214a0 @ 004214a0  kind=gamemisc  attributed-by=none  size=157 */

void __thiscall FUN_004214a0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c300;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004f3ba0(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0x7fffffe) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00421980 @ 00421980  kind=gamemisc  attributed-by=none  size=55 */

void * __cdecl FUN_00421980(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_00423350(param_3,param_1);
    }
    param_1 = param_1 + 0x1e;
    param_3 = (void *)((int)param_3 + 0x78);
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004219c0 @ 004219c0  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_004219c0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x28);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x28);
      param_1[3] = param_1[3] + 0x28;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00421a30 @ 00421a30  kind=gamemisc  attributed-by=none  size=105 */

void __cdecl FUN_00421a30(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar3 = *(int **)*param_2;
  if (piVar3 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x10);
      iVar1 = param_1[3];
      iVar2 = *param_1;
      *(undefined8 *)(iVar1 + iVar2) = *(undefined8 *)(piVar3 + 2);
      ((undefined8 *)(iVar1 + iVar2))[1] = *(undefined8 *)(piVar3 + 4);
      param_1[3] = param_1[3] + 0x10;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*param_2);
  }
  return;
}


/* FUN_00421aa0 @ 00421aa0  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_00421aa0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x70);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x70);
      param_1[3] = param_1[3] + 0x70;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00421b10 @ 00421b10  kind=gamemisc  attributed-by=none  size=111 */

void __cdecl FUN_00421b10(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar3 = *(int **)*param_2;
  if (piVar3 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x14);
      puVar2 = (undefined8 *)(param_1[3] + *param_1);
      *puVar2 = *(undefined8 *)(piVar3 + 2);
      puVar2[1] = *(undefined8 *)(piVar3 + 4);
      *(int *)(puVar2 + 2) = piVar3[6];
      param_1[3] = param_1[3] + 0x14;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*param_2);
  }
  return;
}


/* FUN_00421b80 @ 00421b80  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_00421b80(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x48);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x48);
      param_1[3] = param_1[3] + 0x48;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00421bf0 @ 00421bf0  kind=gamemisc  attributed-by=none  size=109 */

void __cdecl FUN_00421bf0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x120);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x120);
      param_1[3] = param_1[3] + 0x120;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00421c60 @ 00421c60  kind=gamemisc  attributed-by=none  size=115 */

void __cdecl FUN_00421c60(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar3 = *(int **)*param_2;
  if (piVar3 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x18);
      puVar2 = (undefined8 *)(param_1[3] + *param_1);
      *puVar2 = *(undefined8 *)(piVar3 + 2);
      puVar2[1] = *(undefined8 *)(piVar3 + 4);
      puVar2[2] = *(undefined8 *)(piVar3 + 6);
      param_1[3] = param_1[3] + 0x18;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*param_2);
  }
  return;
}


/* FUN_00421ce0 @ 00421ce0  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_00421ce0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x38);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x38);
      param_1[3] = param_1[3] + 0x38;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00421d50 @ 00421d50  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_00421d50(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x58);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x58);
      param_1[3] = param_1[3] + 0x58;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00421dc0 @ 00421dc0  kind=gamemisc  attributed-by=none  size=109 */

void __cdecl FUN_00421dc0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x148);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x148);
      param_1[3] = param_1[3] + 0x148;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00422b10 @ 00422b10  kind=gamemisc  attributed-by=none  size=240 */

void * __thiscall FUN_00422b10(void *this,undefined1 *param_1)

{
  FUN_00413710(this,param_1);
  FUN_00413710((void *)((int)this + 0x118),param_1 + 0x118);
  FUN_00413710((void *)((int)this + 0x230),param_1 + 0x230);
  FUN_00413710((void *)((int)this + 0x348),param_1 + 0x348);
  FUN_00413710((void *)((int)this + 0x460),param_1 + 0x460);
  FUN_00413710((void *)((int)this + 0x578),param_1 + 0x578);
  FUN_00413710((void *)((int)this + 0x690),param_1 + 0x690);
  FUN_00413710((void *)((int)this + 0x7a8),param_1 + 0x7a8);
  FUN_00413710((void *)((int)this + 0x8c0),param_1 + 0x8c0);
  FUN_00413710((void *)((int)this + 0x9d8),param_1 + 0x9d8);
  FUN_00413710((void *)((int)this + 0xaf0),param_1 + 0xaf0);
  FUN_00413710((void *)((int)this + 0xc08),param_1 + 0xc08);
  FUN_00413710((void *)((int)this + 0xd20),param_1 + 0xd20);
  return this;
}


/* FUN_00422c00 @ 00422c00  kind=gamemisc  attributed-by=none  size=132 */

undefined4 * __thiscall FUN_00422c00(void *this,int param_1)

{
  undefined4 *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005562d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (undefined4 *)((int)this + 8);
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 100);
  puVar1 = *(undefined1 **)(param_1 + 0x34);
  puVar2 = *(undefined1 **)(param_1 + 0x30);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar3 = FUN_004269f0((undefined4 *)0x0,(undefined4 *)0x0);
  *this_00 = uVar3;
  local_8 = 0;
  FUN_004204d0(this_00,puVar2,puVar1);
  ExceptionList = local_10;
  return this;
}


/* FUN_00422f90 @ 00422f90  kind=gamemisc  attributed-by=none  size=950 */

undefined4 * __thiscall FUN_00422f90(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined1 *)((int)this + 0x50) = *(undefined1 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(param_1 + 0x16);
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  FUN_00407730((void *)((int)this + 0x68),(undefined1 *)(param_1 + 0x1a));
  *(undefined2 *)((int)this + 0x114) = *(undefined2 *)(param_1 + 0x45);
  *(undefined4 *)((int)this + 0x118) = param_1[0x46];
  *(undefined4 *)((int)this + 0x11c) = param_1[0x47];
  *(undefined4 *)((int)this + 0x120) = param_1[0x48];
  *(undefined4 *)((int)this + 0x124) = param_1[0x49];
  *(undefined4 *)((int)this + 0x128) = param_1[0x4a];
  *(undefined4 *)((int)this + 300) = param_1[0x4b];
  *(undefined1 *)((int)this + 0x130) = *(undefined1 *)(param_1 + 0x4c);
  *(undefined1 *)((int)this + 0x131) = *(undefined1 *)((int)param_1 + 0x131);
  *(undefined4 *)((int)this + 0x134) = param_1[0x4d];
  *(undefined4 *)((int)this + 0x138) = param_1[0x4e];
  *(undefined4 *)((int)this + 0x13c) = param_1[0x4f];
  *(undefined4 *)((int)this + 0x140) = param_1[0x50];
  *(undefined4 *)((int)this + 0x144) = param_1[0x51];
  *(undefined4 *)((int)this + 0x148) = param_1[0x52];
  *(undefined4 *)((int)this + 0x14c) = param_1[0x53];
  *(undefined4 *)((int)this + 0x150) = param_1[0x54];
  *(undefined4 *)((int)this + 0x154) = param_1[0x55];
  *(undefined4 *)((int)this + 0x158) = param_1[0x56];
  *(undefined4 *)((int)this + 0x15c) = param_1[0x57];
  *(undefined4 *)((int)this + 0x160) = param_1[0x58];
  *(undefined4 *)((int)this + 0x164) = param_1[0x59];
  *(undefined8 *)((int)this + 0x168) = *(undefined8 *)(param_1 + 0x5a);
  *(undefined8 *)((int)this + 0x170) = *(undefined8 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x178) = param_1[0x5e];
  *(undefined1 *)((int)this + 0x17c) = *(undefined1 *)(param_1 + 0x5f);
  *(undefined1 *)((int)this + 0x17d) = *(undefined1 *)((int)param_1 + 0x17d);
  *(undefined4 *)((int)this + 0x180) = param_1[0x60];
  *(undefined4 *)((int)this + 0x184) = param_1[0x61];
  *(undefined4 *)((int)this + 0x188) = param_1[0x62];
  *(undefined4 *)((int)this + 0x18c) = param_1[99];
  *(undefined4 *)((int)this + 400) = param_1[100];
  *(undefined4 *)((int)this + 0x194) = param_1[0x65];
  *(undefined1 *)((int)this + 0x198) = *(undefined1 *)(param_1 + 0x66);
  *(undefined4 *)((int)this + 0x19c) = param_1[0x67];
  *(undefined4 *)((int)this + 0x1a0) = param_1[0x68];
  *(undefined4 *)((int)this + 0x1a4) = param_1[0x69];
  *(undefined4 *)((int)this + 0x1a8) = param_1[0x6a];
  *(undefined4 *)((int)this + 0x1b0) = param_1[0x6c];
  *(undefined4 *)((int)this + 0x1b4) = param_1[0x6d];
  *(undefined4 *)((int)this + 0x1b8) = param_1[0x6e];
  *(undefined4 *)((int)this + 0x1bc) = param_1[0x6f];
  *(undefined4 *)((int)this + 0x1c0) = param_1[0x70];
  *(undefined4 *)((int)this + 0x1c4) = param_1[0x71];
  *(undefined1 *)((int)this + 0x1c8) = *(undefined1 *)(param_1 + 0x72);
  *(undefined4 *)((int)this + 0x1cc) = param_1[0x73];
  *(undefined4 *)((int)this + 0x1d0) = param_1[0x74];
  *(undefined4 *)((int)this + 0x1d4) = param_1[0x75];
  FUN_00413710((void *)((int)this + 0x1d8),(undefined1 *)(param_1 + 0x76));
  FUN_00422b10((void *)((int)this + 0x2f0),(undefined1 *)(param_1 + 0xbc));
  *(undefined8 *)((int)this + 0x1128) = *(undefined8 *)(param_1 + 0x44a);
  *(undefined8 *)((int)this + 0x1130) = *(undefined8 *)(param_1 + 0x44c);
  *(undefined8 *)((int)this + 0x1138) = *(undefined8 *)(param_1 + 0x44e);
  *(undefined8 *)((int)this + 0x1140) = *(undefined8 *)(param_1 + 0x450);
  *(undefined8 *)((int)this + 0x1148) = *(undefined8 *)(param_1 + 0x452);
  *(undefined4 *)((int)this + 0x1150) = param_1[0x454];
  *(undefined4 *)((int)this + 0x1154) = param_1[0x455];
  *(undefined8 *)((int)this + 0x1158) = *(undefined8 *)(param_1 + 0x456);
  *(undefined8 *)((int)this + 0x1160) = *(undefined8 *)(param_1 + 0x458);
  return this;
}


/* FUN_00423350 @ 00423350  kind=gamemisc  attributed-by=none  size=174 */

undefined4 * __thiscall FUN_00423350(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 2);
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  *(undefined1 *)((int)this + 0x70) = *(undefined1 *)(param_1 + 0x1c);
  return this;
}


/* FUN_00423400 @ 00423400  kind=gamemisc  attributed-by=none  size=267 */

void * __thiscall FUN_00423400(void *this,undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c7c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004221a0(this,param_1);
  local_8 = 0;
  FUN_00422600((void *)((int)this + 8),param_1 + 2);
  local_8._0_1_ = 1;
  FUN_00422560((void *)((int)this + 0x10),param_1 + 4);
  local_8._0_1_ = 2;
  FUN_00422100((void *)((int)this + 0x18),param_1 + 6);
  local_8._0_1_ = 3;
  FUN_00422060((void *)((int)this + 0x20),param_1 + 8);
  local_8._0_1_ = 4;
  FUN_00422240((void *)((int)this + 0x28),param_1 + 10);
  local_8._0_1_ = 5;
  FUN_004224c0((void *)((int)this + 0x30),param_1 + 0xc);
  local_8._0_1_ = 6;
  FUN_00421fc0((void *)((int)this + 0x38),param_1 + 0xe);
  local_8._0_1_ = 7;
  FUN_004222e0((void *)((int)this + 0x40),param_1 + 0x10);
  local_8._0_1_ = 8;
  FUN_00422380((void *)((int)this + 0x48),param_1 + 0x12);
  local_8._0_1_ = 9;
  FUN_00422380((void *)((int)this + 0x50),param_1 + 0x14);
  local_8._0_1_ = 10;
  FUN_00421e80((void *)((int)this + 0x58),param_1 + 0x16);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_00422420((void *)((int)this + 0x60),param_1 + 0x18);
  ExceptionList = local_10;
  return this;
}


/* FUN_004239f0 @ 004239f0  kind=gamemisc  attributed-by=none  size=670 */

void __fastcall FUN_004239f0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_1[0x18];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[0x18] + 4) = param_1[0x18];
  param_1[0x19] = 0;
  if (piVar2 != (int *)param_1[0x18]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[0x18]);
  }
  operator_delete((void *)param_1[0x18]);
  piVar1 = (int *)param_1[0x16];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[0x16] + 4) = param_1[0x16];
  param_1[0x17] = 0;
  if (piVar2 != (int *)param_1[0x16]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[0x16]);
  }
  operator_delete((void *)param_1[0x16]);
  piVar1 = (int *)param_1[0x14];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[0x14] + 4) = param_1[0x14];
  param_1[0x15] = 0;
  if (piVar2 != (int *)param_1[0x14]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[0x14]);
  }
  operator_delete((void *)param_1[0x14]);
  piVar1 = (int *)param_1[0x12];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[0x12] + 4) = param_1[0x12];
  param_1[0x13] = 0;
  if (piVar2 != (int *)param_1[0x12]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[0x12]);
  }
  operator_delete((void *)param_1[0x12]);
  piVar1 = (int *)param_1[0x10];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[0x10] + 4) = param_1[0x10];
  param_1[0x11] = 0;
  if (piVar2 != (int *)param_1[0x10]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[0x10]);
  }
  operator_delete((void *)param_1[0x10]);
  FUN_00428080(param_1 + 0xe);
  operator_delete((void *)param_1[0xe]);
  piVar1 = (int *)param_1[0xc];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[0xc] + 4) = param_1[0xc];
  param_1[0xd] = 0;
  if (piVar2 != (int *)param_1[0xc]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[0xc]);
  }
  operator_delete((void *)param_1[0xc]);
  FUN_00428080(param_1 + 10);
  operator_delete((void *)param_1[10]);
  piVar1 = (int *)param_1[8];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[8] + 4) = param_1[8];
  param_1[9] = 0;
  if (piVar2 != (int *)param_1[8]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[8]);
  }
  operator_delete((void *)param_1[8]);
  piVar1 = (int *)param_1[6];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[6] + 4) = param_1[6];
  param_1[7] = 0;
  if (piVar2 != (int *)param_1[6]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[6]);
  }
  operator_delete((void *)param_1[6]);
  piVar1 = (int *)param_1[4];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[4] + 4) = param_1[4];
  param_1[5] = 0;
  if (piVar2 != (int *)param_1[4]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[4]);
  }
  operator_delete((void *)param_1[4]);
  piVar1 = (int *)param_1[2];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[2] + 4) = param_1[2];
  param_1[3] = 0;
  if (piVar2 != (int *)param_1[2]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[2]);
  }
  operator_delete((void *)param_1[2]);
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (piVar2 != (int *)*param_1) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  operator_delete((void *)*param_1);
  return;
}


/* FUN_00423c90 @ 00423c90  kind=gamemisc  attributed-by=none  size=78 */

undefined4 * __thiscall FUN_00423c90(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined1 *)((int)this + 0x14) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)((int)this + 0x15) = *(undefined1 *)((int)param_1 + 0x15);
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return this;
}


/* FUN_00423ce0 @ 00423ce0  kind=gamemisc  attributed-by=none  size=235 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00423ce0(void *this,uint *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  void *local_22e4;
  uint local_22e0;
  uint local_22dc;
  undefined1 local_22d8 [4456];
  undefined4 local_1170 [1114];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar4 = *(int **)this;
  piVar5 = piVar4;
  if (*(char *)(piVar4[1] + 0xd) == '\0') {
    piVar1 = (int *)piVar4[1];
    do {
      if (((int)param_1[1] < piVar1[5]) ||
         (((int)param_1[1] <= piVar1[5] && (*param_1 <= (uint)piVar1[4])))) {
        piVar2 = (int *)*piVar1;
        piVar5 = piVar1;
      }
      else {
        piVar2 = (int *)piVar1[2];
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  }
  local_22e4 = this;
  if (piVar5 != piVar4) {
    if ((piVar5[5] < (int)param_1[1]) ||
       ((piVar5[5] <= (int)param_1[1] && ((uint)piVar5[4] <= *param_1)))) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  puVar3 = FUN_00407020(local_1170);
  local_22e0 = *param_1;
  local_22dc = param_1[1];
  FUN_00422f90(local_22d8,puVar3);
  piVar4 = FUN_00420040(local_22e4,&local_22e0);
  FUN_00420810(local_22e4,&local_22e4,piVar5,(uint *)(piVar4 + 4),piVar4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00423dd0 @ 00423dd0  kind=gamemisc  attributed-by=none  size=794 */

void __fastcall FUN_00423dd0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int *piVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  char *pcVar12;
  code *pcVar13;
  int *piVar14;
  char cVar15;
  int iVar16;
  undefined4 local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  int local_188;
  int local_184 [2];
  int local_17c [2];
  int local_174 [2];
  int local_16c [2];
  int local_164 [2];
  int *local_15c;
  undefined4 local_158;
  int local_154 [2];
  undefined1 local_14c [8];
  int local_144 [2];
  int local_13c [2];
  int local_134 [2];
  int local_12c [2];
  int local_124 [2];
  undefined4 local_11c;
  uint local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  uint local_fc;
  int local_f8;
  DWORD local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  int *local_e0;
  int local_dc;
  int *local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  char *local_cc;
  char *local_c8;
  undefined4 local_c4;
  int local_c0;
  byte local_b9;
  int local_b8;
  undefined4 *local_b4;
  undefined4 *local_b0;
  undefined4 *local_ac;
  undefined4 *local_a8;
  void *local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  int *local_94;
  undefined4 local_90;
  char local_89;
  int *local_88;
  undefined4 local_84;
  undefined4 *local_80;
  int local_7c;
  int iStack_78;
  int local_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int local_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c895;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_88 = (int *)0x0;
  local_84 = 0;
  local_e0 = param_1;
  local_88 = (int *)FUN_004267b0();
  local_8 = 0;
  local_d8 = (int *)0x0;
  local_d4 = 0;
  local_d8 = (int *)FUN_004267b0();
  local_8 = CONCAT31(local_8._1_3_,1);
  local_89 = '\0';
  timeBeginPeriod(1);
  pcVar13 = timeGetTime_exref;
  local_f4 = timeGetTime();
  if (*(char *)param_1[6] != '\0') {
    while (DVar9 = local_f4, *(int *)(*(int *)param_1[1] + param_1[2] * 4) != 0) {
      FUN_004f8520((int *)&local_d8);
      local_b0 = (undefined4 *)0x0;
      local_ac = (undefined4 *)0x0;
      local_a8 = (undefined4 *)0x0;
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_004d3df0(*param_1);
      local_b9 = 0;
      iVar4 = (*pcVar13)();
      local_b4 = (undefined4 *)(uint)local_b9;
      if (500 < (int)(iVar4 - DVar9)) {
        local_b4 = (undefined4 *)0x1;
      }
      iVar4 = *param_1;
      piVar8 = (int *)**(int **)(iVar4 + 4);
      if (piVar8 != *(int **)(iVar4 + 4)) {
        do {
          if ((piVar8[6] != 0) && ((piVar8[4] != param_1[4] || (piVar8[5] != param_1[5])))) {
            if (*(char *)(piVar8[6] + 0x60) != '\0') {
              FUN_00530600((int *)(iVar4 + 4),&local_108,(uint *)(param_1 + 4));
              if (local_108 == *(int *)(iVar4 + 4)) {
                local_b8 = 0;
              }
              else {
                local_b8 = *(int *)(local_108 + 0x18);
              }
              iVar4 = piVar8[6];
              local_e4 = *(uint *)(iVar4 + 0x20);
              local_7c = *(uint *)(iVar4 + 0x10) - *(uint *)(local_b8 + 0x10);
              iStack_78 = (*(int *)(iVar4 + 0x14) - *(int *)(local_b8 + 0x14)) -
                          (uint)(*(uint *)(iVar4 + 0x10) < *(uint *)(local_b8 + 0x10));
              local_74 = *(uint *)(iVar4 + 0x18) - *(uint *)(local_b8 + 0x18);
              iStack_70 = (*(int *)(iVar4 + 0x1c) - *(int *)(local_b8 + 0x1c)) -
                          (uint)(*(uint *)(iVar4 + 0x18) < *(uint *)(local_b8 + 0x18));
              local_6c = local_e4 - *(uint *)(local_b8 + 0x20);
              iStack_68 = (*(int *)(iVar4 + 0x24) - *(int *)(local_b8 + 0x24)) -
                          (uint)(local_e4 < *(uint *)(local_b8 + 0x20));
              local_40 = (float)CONCAT44(iStack_78,local_7c) * 1.5258789e-05;
              local_80 = (undefined4 *)(float)CONCAT44(iStack_68,local_6c);
              local_3c = (float)CONCAT44(iStack_70,local_74) * 1.5258789e-05;
              local_38 = (float)local_80 * 1.5258789e-05;
              if (40000.0 < local_3c * local_3c + local_40 * local_40 + local_38 * local_38)
              goto LAB_00424084;
            }
            piVar5 = (int *)FUN_00530600(&local_88,&local_1a8,(uint *)(piVar8[6] + 8));
            if ((int *)*piVar5 == local_88) {
              if ((char)local_b4 == '\0') goto LAB_00424084;
              local_b4 = (undefined4 *)((uint)local_b4 & 0xffffff00);
            }
            puVar6 = (undefined4 *)(piVar8[6] + 0x10);
            pvVar7 = (void *)FUN_00423ce0(&local_d8,(uint *)(piVar8[6] + 8));
            FUN_0041df70(pvVar7,puVar6);
          }
LAB_00424084:
          if (*(char *)((int)piVar8 + 0xd) == '\0') {
            piVar5 = (int *)piVar8[2];
            if (*(char *)((int)piVar5 + 0xd) == '\0') {
              cVar15 = *(char *)(*piVar5 + 0xd);
              piVar8 = piVar5;
              piVar5 = (int *)*piVar5;
              while (cVar15 == '\0') {
                cVar15 = *(char *)(*piVar5 + 0xd);
                piVar8 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar15 = *(char *)(piVar8[1] + 0xd);
              piVar14 = (int *)piVar8[1];
              piVar5 = piVar8;
              while ((piVar8 = piVar14, cVar15 == '\0' && (piVar5 == (int *)piVar8[2]))) {
                cVar15 = *(char *)(piVar8[1] + 0xd);
                piVar14 = (int *)piVar8[1];
                piVar5 = piVar8;
              }
            }
          }
          iVar4 = *local_e0;
          param_1 = local_e0;
        } while (piVar8 != *(int **)(iVar4 + 4));
      }
      iVar4 = *param_1;
      piVar8 = (int *)**(int **)(iVar4 + 0xc);
      if (piVar8 != *(int **)(iVar4 + 0xc)) {
        do {
          local_b4 = (undefined4 *)piVar8[6];
          if (local_b4 != (undefined4 *)0x0) {
            FUN_00530600((int *)(iVar4 + 4),&local_f8,(uint *)(param_1 + 4));
            if (local_f8 == *(int *)(iVar4 + 4)) {
              local_b8 = 0;
            }
            else {
              local_b8 = *(int *)(local_f8 + 0x18);
            }
            iVar4 = piVar8[6];
            local_e4 = *(uint *)(iVar4 + 0x24);
            local_64 = *(uint *)(iVar4 + 0x10) - *(uint *)(local_b8 + 0x10);
            iStack_60 = (*(int *)(iVar4 + 0x14) - *(int *)(local_b8 + 0x14)) -
                        (uint)(*(uint *)(iVar4 + 0x10) < *(uint *)(local_b8 + 0x10));
            local_5c = *(uint *)(iVar4 + 0x18) - *(uint *)(local_b8 + 0x18);
            iStack_58 = (*(int *)(iVar4 + 0x1c) - *(int *)(local_b8 + 0x1c)) -
                        (uint)(*(uint *)(iVar4 + 0x18) < *(uint *)(local_b8 + 0x18));
            local_54 = *(uint *)(iVar4 + 0x20) - *(uint *)(local_b8 + 0x20);
            iStack_50 = (local_e4 - *(int *)(local_b8 + 0x24)) -
                        (uint)(*(uint *)(iVar4 + 0x20) < *(uint *)(local_b8 + 0x20));
            local_4c = (float)CONCAT44(iStack_60,local_64) * 1.5258789e-05;
            local_80 = (undefined4 *)(float)CONCAT44(iStack_50,local_54);
            local_48 = (float)CONCAT44(iStack_58,local_5c) * 1.5258789e-05;
            local_44 = (float)local_80 * 1.5258789e-05;
            param_1 = local_e0;
            if (local_48 * local_48 + local_4c * local_4c + local_44 * local_44 <= 262144.0) {
              if ((local_b4 < local_ac) && (local_b0 <= local_b4)) {
                local_b4 = (undefined4 *)(((int)local_b4 - (int)local_b0) / 0x78);
                local_80 = local_a8;
                if ((local_ac == local_a8) &&
                   (iVar4 = (int)local_a8 - (int)local_ac >> 0x1f,
                   ((int)local_a8 - (int)local_ac) / 0x78 + iVar4 == iVar4)) {
                  iVar4 = ((int)local_ac - (int)local_b0) / 0x78;
                  if (iVar4 == 0x2222222) {
LAB_00425173:
                    local_80 = local_a8;
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("vector<T> too long");
                  }
                  uVar1 = iVar4 + 1;
                  uVar11 = ((int)local_a8 - (int)local_b0) / 0x78;
                  if (0x2222222 - (uVar11 >> 1) < uVar11) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = uVar11 + (uVar11 >> 1);
                  }
                  if (uVar11 < uVar1) {
                    uVar11 = uVar1;
                  }
                  FUN_00426db0(&local_b0,uVar11);
                }
                puVar6 = local_b0 + (int)local_b4 * 0x1e;
              }
              else {
                local_80 = local_a8;
                puVar6 = local_b4;
                if ((local_ac == local_a8) &&
                   (iVar4 = (int)local_a8 - (int)local_ac >> 0x1f,
                   ((int)local_a8 - (int)local_ac) / 0x78 + iVar4 == iVar4)) {
                  iVar4 = ((int)local_ac - (int)local_b0) / 0x78;
                  if (iVar4 == 0x2222222) goto LAB_00425173;
                  uVar1 = iVar4 + 1;
                  uVar11 = ((int)local_a8 - (int)local_b0) / 0x78;
                  if (0x2222222 - (uVar11 >> 1) < uVar11) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = uVar11 + (uVar11 >> 1);
                  }
                  if (uVar11 < uVar1) {
                    uVar11 = uVar1;
                  }
                  FUN_00426db0(&local_b0,uVar11);
                  puVar6 = local_b4;
                }
              }
              if (local_ac != (undefined4 *)0x0) {
                FUN_00423350(local_ac,puVar6);
              }
              local_ac = local_ac + 0x1e;
              param_1 = local_e0;
            }
          }
          if (*(char *)((int)piVar8 + 0xd) == '\0') {
            piVar5 = (int *)piVar8[2];
            if (*(char *)((int)piVar5 + 0xd) == '\0') {
              cVar15 = *(char *)(*piVar5 + 0xd);
              piVar8 = piVar5;
              piVar5 = (int *)*piVar5;
              while (cVar15 == '\0') {
                cVar15 = *(char *)(*piVar5 + 0xd);
                piVar8 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar15 = *(char *)(piVar8[1] + 0xd);
              piVar14 = (int *)piVar8[1];
              piVar5 = piVar8;
              while ((piVar8 = piVar14, cVar15 == '\0' && (piVar5 == (int *)piVar8[2]))) {
                cVar15 = *(char *)(piVar8[1] + 0xd);
                piVar14 = (int *)piVar8[1];
                piVar5 = piVar8;
              }
            }
          }
          iVar4 = *param_1;
        } while (piVar8 != *(int **)(iVar4 + 0xc));
      }
      local_94 = (int *)0x0;
      local_90 = 0;
      local_94 = (int *)FUN_004267b0();
      local_8 = CONCAT31(local_8._1_3_,3);
      piVar8 = (int *)*local_88;
      if (piVar8 != local_88) {
        do {
          iVar4 = *(int *)(*param_1 + 4);
          piVar5 = (int *)FUN_00530600((void *)(*param_1 + 4),&local_1a0,(uint *)(piVar8 + 4));
          if (*piVar5 != iVar4) {
            piVar5 = piVar8 + 6;
            pvVar7 = (void *)FUN_00423ce0(&local_94,(uint *)(piVar8 + 4));
            FUN_0041df70(pvVar7,piVar5);
          }
          if (*(char *)((int)piVar8 + 0xd) == '\0') {
            piVar5 = (int *)piVar8[2];
            if (*(char *)((int)piVar5 + 0xd) == '\0') {
              cVar15 = *(char *)(*piVar5 + 0xd);
              piVar8 = piVar5;
              piVar5 = (int *)*piVar5;
              while (cVar15 == '\0') {
                cVar15 = *(char *)(*piVar5 + 0xd);
                piVar8 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar15 = *(char *)(piVar8[1] + 0xd);
              piVar14 = (int *)piVar8[1];
              piVar5 = piVar8;
              while ((piVar8 = piVar14, cVar15 == '\0' && (piVar5 == (int *)piVar8[2]))) {
                cVar15 = *(char *)(piVar8[1] + 0xd);
                piVar14 = (int *)piVar8[1];
                piVar5 = piVar8;
              }
            }
          }
        } while (piVar8 != local_88);
      }
      FUN_004d5c60(*param_1);
      cVar15 = *(char *)(local_88[1] + 0xd);
      piVar8 = (int *)local_88[1];
      piVar5 = local_88;
      while (local_88 = piVar5, cVar15 == '\0') {
        FUN_004f7c20((int *)piVar8[2]);
        piVar5 = (int *)*piVar8;
        operator_delete(piVar8);
        cVar15 = *(char *)((int)piVar5 + 0xd);
        piVar8 = piVar5;
        piVar5 = local_88;
      }
      piVar5[1] = (int)piVar5;
      local_fc = local_fc & 0xffffff00;
      *piVar5 = (int)piVar5;
      piVar5[2] = (int)piVar5;
      local_84 = 0;
      puVar6 = FUN_00420540(&local_88,(undefined4 *)local_94[1],piVar5,local_fc);
      piVar5[1] = (int)puVar6;
      local_84 = local_90;
      piVar8 = (int *)local_88[1];
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        cVar15 = *(char *)(*piVar8 + 0xd);
        piVar5 = (int *)*piVar8;
        while (cVar15 == '\0') {
          cVar15 = *(char *)(*piVar5 + 0xd);
          piVar8 = piVar5;
          piVar5 = (int *)*piVar5;
        }
        *local_88 = (int)piVar8;
        iVar4 = *(int *)(local_88[1] + 8);
        cVar15 = *(char *)(iVar4 + 0xd);
        iVar16 = local_88[1];
        while (cVar15 == '\0') {
          cVar15 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
          iVar16 = iVar4;
          iVar4 = *(int *)(iVar4 + 8);
        }
        local_88[2] = iVar16;
      }
      else {
        *local_88 = (int)local_88;
        local_88[2] = (int)local_88;
      }
      piVar8 = (int *)*local_d8;
      if (piVar8 != local_d8) {
        do {
          local_104 = 0;
          send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),(char *)&local_104,4,0
              );
          local_cc = (char *)0x0;
          local_c8 = (char *)0x0;
          local_c4 = 0;
          local_c0 = 0;
          local_8 = CONCAT31(local_8._1_3_,4);
          puVar10 = (uint *)(piVar8 + 4);
          FUN_00413180(&local_cc,8);
          uVar1 = piVar8[5];
          *(uint *)(local_cc + local_c0) = *puVar10;
          *(uint *)((int)(local_cc + local_c0) + 4) = uVar1;
          local_c0 = local_c0 + 8;
          puVar6 = (undefined4 *)FUN_00530600(&local_88,&local_188,puVar10);
          if ((int *)*puVar6 == local_88) {
            piVar5 = piVar8 + 6;
            cVar15 = '\x01';
            piVar14 = piVar5;
          }
          else {
            cVar15 = '\0';
            piVar14 = piVar8 + 6;
            piVar5 = (int *)FUN_00423ce0(&local_88,puVar10);
          }
          FUN_00416210((int *)&local_cc,(int)piVar5,piVar14,cVar15);
          FUN_00412c70((int *)&local_cc);
          local_f0 = (int)local_c8 - (int)local_cc;
          iVar4 = send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),
                       (char *)&local_f0,4,0);
          if (iVar4 == -1) {
            local_8 = CONCAT31(local_8._1_3_,3);
LAB_0042479f:
            local_89 = '\x01';
            if (local_cc != (char *)0x0) {
              operator_delete(local_cc);
              local_c4 = 0;
              local_c8 = (char *)0x0;
              local_cc = (char *)0x0;
            }
            break;
          }
          pcVar12 = local_cc;
          if (local_cc == local_c8) {
            pcVar12 = (char *)0x0;
          }
          iVar4 = send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),pcVar12,
                       local_f0,0);
          local_8 = CONCAT31(local_8._1_3_,3);
          if (iVar4 == -1) goto LAB_0042479f;
          if (local_cc != (char *)0x0) {
            operator_delete(local_cc);
            local_cc = (char *)0x0;
            local_c8 = (char *)0x0;
            local_c4 = 0;
          }
          if (*(char *)((int)piVar8 + 0xd) == '\0') {
            piVar5 = (int *)piVar8[2];
            if (*(char *)((int)piVar5 + 0xd) == '\0') {
              cVar15 = *(char *)(*piVar5 + 0xd);
              piVar8 = piVar5;
              piVar5 = (int *)*piVar5;
              while (cVar15 == '\0') {
                cVar15 = *(char *)(*piVar5 + 0xd);
                piVar8 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar15 = *(char *)(piVar8[1] + 0xd);
              piVar14 = (int *)piVar8[1];
              piVar5 = piVar8;
              while ((piVar8 = piVar14, cVar15 == '\0' && (piVar5 == (int *)piVar8[2]))) {
                cVar15 = *(char *)(piVar8[1] + 0xd);
                piVar14 = (int *)piVar8[1];
                piVar5 = piVar8;
              }
            }
          }
        } while (piVar8 != local_d8);
      }
      local_d0 = 2;
      send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),(char *)&local_d0,4,0);
      cVar15 = *(char *)(local_88[1] + 0xd);
      piVar8 = (int *)local_88[1];
      piVar5 = local_88;
      while (local_88 = piVar5, cVar15 == '\0') {
        FUN_004f7c20((int *)piVar8[2]);
        piVar5 = (int *)*piVar8;
        operator_delete(piVar8);
        cVar15 = *(char *)((int)piVar5 + 0xd);
        piVar8 = piVar5;
        piVar5 = local_88;
      }
      piVar5[1] = (int)piVar5;
      local_118 = local_118 & 0xffffff00;
      *piVar5 = (int)piVar5;
      piVar5[2] = (int)piVar5;
      local_84 = 0;
      puVar6 = FUN_00420540(&local_88,(undefined4 *)local_d8[1],piVar5,local_118);
      piVar5[1] = (int)puVar6;
      local_84 = local_d4;
      piVar8 = (int *)local_88[1];
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        cVar15 = *(char *)(*piVar8 + 0xd);
        piVar5 = (int *)*piVar8;
        while (cVar15 == '\0') {
          cVar15 = *(char *)(*piVar5 + 0xd);
          piVar8 = piVar5;
          piVar5 = (int *)*piVar5;
        }
        *local_88 = (int)piVar8;
        iVar4 = *(int *)(local_88[1] + 8);
        cVar15 = *(char *)(iVar4 + 0xd);
        iVar16 = local_88[1];
        while (cVar15 == '\0') {
          cVar15 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
          iVar16 = iVar4;
          iVar4 = *(int *)(iVar4 + 8);
        }
        local_88[2] = iVar16;
      }
      else {
        *local_88 = (int)local_88;
        local_88[2] = (int)local_88;
      }
      FUN_004d3df0(*param_1);
      local_100 = *(undefined4 *)(*param_1 + 0x80015c);
      local_110 = *(undefined4 *)(*param_1 + 0x800160);
      FUN_00423400(local_184,(undefined4 *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x18));
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x98));
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x30);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x30) + 4) = *(int *)(iVar4 + 0x30);
      *(undefined4 *)(iVar4 + 0x34) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x30)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x30));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x18);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x18) + 4) = *(int *)(iVar4 + 0x18);
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x18)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x18));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x28);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x28) + 4) = *(int *)(iVar4 + 0x28);
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x28)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x28));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x20);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x20) + 4) = *(int *)(iVar4 + 0x20);
      *(undefined4 *)(iVar4 + 0x24) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x20)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x20));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x38);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x38) + 4) = *(int *)(iVar4 + 0x38);
      *(undefined4 *)(iVar4 + 0x3c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x38)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x38));
      }
      FUN_00428080((int *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x40));
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x48);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x48) + 4) = *(int *)(iVar4 + 0x48);
      *(undefined4 *)(iVar4 + 0x4c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x48)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x48));
      }
      FUN_00428080((int *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x50));
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x58);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x58) + 4) = *(int *)(iVar4 + 0x58);
      *(undefined4 *)(iVar4 + 0x5c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x58)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x58));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x60);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x60) + 4) = *(int *)(iVar4 + 0x60);
      *(undefined4 *)(iVar4 + 100) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x60)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x60));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x68);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x68) + 4) = *(int *)(iVar4 + 0x68);
      *(undefined4 *)(iVar4 + 0x6c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x68)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x68));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x70);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x70) + 4) = *(int *)(iVar4 + 0x70);
      *(undefined4 *)(iVar4 + 0x74) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x70)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x70));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x78);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x78) + 4) = *(int *)(iVar4 + 0x78);
      *(undefined4 *)(iVar4 + 0x7c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x78)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x78));
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      local_8._0_1_ = 6;
      if (*(int *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x94) != 0) {
        iVar4 = **(int **)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x90);
        local_34 = *(undefined4 *)(iVar4 + 8);
        local_30 = *(undefined4 *)(iVar4 + 0xc);
        if (local_2c != (void **)(iVar4 + 0x10)) {
          FUN_004172f0(local_2c,(int *)(iVar4 + 0x10),0,0xffffffff);
        }
        iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
        piVar8 = *(int **)(iVar4 + 0x90);
        piVar5 = (int *)*piVar8;
        if (piVar5 != piVar8) {
          *(int *)piVar5[1] = *piVar5;
          *(int *)(*piVar5 + 4) = piVar5[1];
          if (7 < (uint)piVar5[9]) {
            operator_delete((void *)piVar5[4]);
          }
          piVar5[9] = 7;
          piVar5[8] = 0;
          *(undefined2 *)(piVar5 + 4) = 0;
          operator_delete(piVar5);
          piVar8 = (int *)(iVar4 + 0x94);
          *piVar8 = *piVar8 + -1;
        }
      }
      FUN_004d5c60(*param_1);
      local_d0 = 5;
      iVar4 = send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),(char *)&local_d0,
                   4,0);
      if (iVar4 == -1) {
        if (7 < local_18) {
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        FUN_004239f0(local_184);
        piVar8 = (int *)*local_94;
        puVar6 = &local_198;
LAB_00425387:
        local_8._0_1_ = 2;
        FUN_004fc060(&local_94,puVar6,piVar8,local_94);
        operator_delete(local_94);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_b0 != (undefined4 *)0x0) {
          std::_Container_base0::_Orphan_all((_Container_base0 *)&local_b0);
          operator_delete(local_b0);
        }
        break;
      }
      iVar4 = send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),(char *)&local_110
                   ,4,0);
      if (iVar4 == -1) {
        if (7 < local_18) {
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        FUN_004239f0(local_184);
        piVar8 = (int *)*local_94;
        puVar6 = &local_190;
        goto LAB_00425387;
      }
      iVar4 = send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),(char *)&local_100
                   ,4,0);
      if (iVar4 == -1) {
        if (7 < local_18) {
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        FUN_004239f0(local_184);
        piVar8 = (int *)*local_94;
        puVar6 = &local_18c;
        goto LAB_00425387;
      }
      local_d0 = 4;
      iVar4 = send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),(char *)&local_d0,
                   4,0);
      if (iVar4 == -1) {
        if (7 < local_18) {
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        FUN_004239f0(local_184);
        piVar8 = (int *)*local_94;
        puVar6 = &local_19c;
        goto LAB_00425387;
      }
      local_a4 = (void *)0x0;
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      local_8 = CONCAT31(local_8._1_3_,7);
      FUN_00421b10((int *)&local_a4,local_16c);
      FUN_00421b80((int *)&local_a4,local_184);
      FUN_00421b80((int *)&local_a4,local_174);
      FUN_00421c60((int *)&local_a4,local_17c);
      FUN_00421aa0((int *)&local_a4,local_164);
      FUN_00421d50((int *)&local_a4,local_154);
      uVar2 = local_158;
      FUN_00413180(&local_a4,(local_a0 - (int)local_a4) + 4);
      *(undefined4 *)((int)local_a4 + local_98) = uVar2;
      local_98 = local_98 + 4;
      piVar8 = (int *)*local_15c;
      if (piVar8 != local_15c) {
        do {
          FUN_00413180(&local_a4,(local_a0 - (int)local_a4) + 8);
          iVar4 = piVar8[3];
          *(int *)((int)local_a4 + local_98) = piVar8[2];
          ((int *)((int)local_a4 + local_98))[1] = iVar4;
          local_98 = local_98 + 8;
          FUN_00421dc0((int *)&local_a4,piVar8 + 4);
          piVar8 = (int *)*piVar8;
        } while (piVar8 != local_15c);
      }
      if (local_89 != '\0') {
        local_8 = CONCAT31(local_8._1_3_,6);
        if (local_a4 != (void *)0x0) {
          std::_Container_base0::_Orphan_all((_Container_base0 *)&local_a4);
          operator_delete(local_a4);
          local_a4 = (void *)0x0;
          local_a0 = 0;
          local_9c = 0;
        }
        if (7 < local_18) {
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        FUN_004239f0(local_184);
        local_8._0_1_ = 2;
        puVar6 = (undefined4 *)FUN_00428070(&local_94,&local_194);
        FUN_004fc060(&local_94,&local_1a4,(int *)*puVar6,local_94);
        FUN_00423700(&local_94);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0042f440(&local_b0);
        break;
      }
      local_10c = FUN_00428780((int)local_14c);
      FUN_004168f0(&local_a4,&local_10c,4);
      FUN_00428070(local_14c,&local_dc);
      piVar8 = (int *)FUN_00530550(local_14c,&local_114);
      bVar3 = FUN_0042c6f0(&local_dc,piVar8);
      if (bVar3) {
        do {
          pvVar7 = (void *)FUN_0052eb90(&local_dc);
          FUN_004168f0(&local_a4,pvVar7,8);
          FUN_00421a30((int *)&local_a4,(int *)((int)pvVar7 + 8));
          FUN_0052ebf0(&local_dc,&local_1ac);
          piVar8 = (int *)FUN_00530550(local_14c,&local_114);
          bVar3 = FUN_0042c6f0(&local_dc,piVar8);
        } while (bVar3);
      }
      FUN_00421bf0((int *)&local_a4,local_144);
      FUN_00421c60((int *)&local_a4,local_13c);
      FUN_00421c60((int *)&local_a4,local_134);
      FUN_004219c0((int *)&local_a4,local_12c);
      FUN_00421ce0((int *)&local_a4,local_124);
      FUN_00412c70((int *)&local_a4);
      local_e8 = FUN_00413200((int *)&local_a4);
      piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
      iVar4 = send(*(SOCKET *)(*piVar8 + 8),(char *)&local_e8,4,0);
      if (iVar4 == -1) {
LAB_0042517e:
        FUN_0042f440(&local_a4);
        FUN_004cd890((int)&local_34);
        FUN_004239f0(local_184);
        FUN_004f7710(&local_94);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0042f440(&local_b0);
        break;
      }
      piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
      iVar16 = 0;
      iVar4 = local_e8;
      pcVar12 = (char *)FUN_00428160((int *)&local_a4);
      iVar4 = send(*(SOCKET *)(*piVar8 + 8),pcVar12,iVar4,iVar16);
      if (iVar4 == -1) goto LAB_0042517e;
      bVar3 = FUN_00419f80((int)local_2c);
      if (!bVar3) {
        local_11c = 10;
        piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
        iVar4 = send(*(SOCKET *)(*piVar8 + 8),(char *)&local_11c,4,0);
        if (iVar4 != -1) {
          piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
          iVar4 = send(*(SOCKET *)(*piVar8 + 8),(char *)&local_34,8,0);
          if (iVar4 != -1) {
            local_ec = FUN_004061d0((int)local_2c);
            piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
            iVar4 = send(*(SOCKET *)(*piVar8 + 8),(char *)&local_ec,4,0);
            if (iVar4 != -1) {
              piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
              iVar16 = 0;
              iVar4 = local_ec * 2;
              pcVar12 = (char *)FUN_00416c00(local_2c,0);
              iVar4 = send(*(SOCKET *)(*piVar8 + 8),pcVar12,iVar4,iVar16);
              if (iVar4 != -1) goto LAB_004250f5;
            }
          }
        }
        goto LAB_0042517e;
      }
LAB_004250f5:
      DVar9 = timeGetTime();
      if ((int)(DVar9 - DAT_00583dcc) < 0x14) {
        Sleep((DAT_00583dcc - DVar9) + 0x14);
      }
      DAT_00583dcc = DVar9;
      FUN_0042f440(&local_a4);
      FUN_004cd890((int)&local_34);
      FUN_004239f0(local_184);
      FUN_004f7710(&local_94);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0042f440(&local_b0);
      pcVar13 = timeGetTime_exref;
      if (*(char *)param_1[6] == '\0') break;
    }
  }
  timeEndPeriod(1);
  WaitForSingleObject((HANDLE)param_1[8],0xffffffff);
  FUN_004d3df0(*param_1);
  iVar4 = param_1[2];
  pvVar7 = (void *)param_1[1];
  piVar8 = (int *)FUN_00402bb0(pvVar7,iVar4);
  if (*piVar8 != 0) {
    piVar8 = (int *)FUN_00402bb0(pvVar7,iVar4);
    closesocket(*(SOCKET *)(*piVar8 + 8));
    puVar10 = FUN_00402b10((void *)(*param_1 + 4),(uint *)(param_1 + 4));
    if ((undefined4 *)*puVar10 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*puVar10)(1);
    }
    FUN_00530560((void *)(*param_1 + 4),(uint *)(param_1 + 4));
    piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
    if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar8)(1);
    }
    puVar6 = (undefined4 *)FUN_00402bb0((void *)param_1[1],param_1[2]);
    *puVar6 = 0;
  }
  FUN_004d5c60(*param_1);
  FUN_004f7710(&local_d8);
  FUN_004f7710(&local_88);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004254a0 @ 004254a0  kind=gamemisc  attributed-by=none  size=2935 */

void __thiscall FUN_004254a0(void *this)

{
  char cVar1;
  Connection_vftable *pCVar2;
  Connection **ppCVar3;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var4;
  Connection *pCVar5;
  void **ppvVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  int iVar8;
  int iVar9;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar10;
  uint *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  Connection *pCVar14;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *unaff_EBX;
  Connection *pCVar15;
  Connection *unaff_EDI;
  HANDLE hThread;
  Connection *pCVar16;
  int *piVar17;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var18;
  float10 fVar19;
  ulonglong uVar20;
  char *pcVar21;
  Connection *in_stack_fffffde8;
  code *pcVar22;
  Connection *local_20c;
  int local_200;
  int local_1fc;
  undefined4 local_1f8;
  Connection_vftable *local_1f4;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *local_1f0;
  undefined1 *puStack_1ec;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *local_1e8;
  undefined1 *puStack_1e4;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *local_1e0;
  undefined4 uStack_1dc;
  undefined1 *local_1d8;
  undefined1 *puStack_1d4;
  undefined1 *local_1d0;
  Connection *pCStack_1cc;
  Connection *local_1c8;
  int iStack_1c4;
  int local_1c0;
  Connection *local_1bc;
  Connection *local_1b8;
  Connection *local_1b4;
  undefined8 local_1b0;
  int *local_1a8;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *local_1a4;
  HANDLE local_1a0;
  Connection *local_19c;
  Connection *local_198;
  int local_194;
  Connection *local_190;
  undefined2 local_18c [2];
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 local_17e;
  undefined2 local_17c;
  undefined1 local_178 [256];
  undefined4 local_78;
  undefined4 local_74 [4];
  int *local_64;
  int local_5c [4];
  int *local_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c90a;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  hThread = (HANDLE)0x0;
  cVar1 = *(char *)(*(int *)this + 0x4c);
  local_1a0 = (HANDLE)0x0;
  local_1b8 = (Connection *)0x0;
  ppvVar6 = &local_10;
  local_10 = ExceptionList;
joined_r0x004254ec:
  ExceptionList = ppvVar6;
  local_1a8 = this;
  if (cVar1 == '\0') {
    WaitForSingleObject(local_1b8,0xffffffff);
    WaitForSingleObject(hThread,0xffffffff);
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  Sleep(200);
  pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                        "Waiting for connection.");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,
             (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
              *)unaff_EDI);
  unaff_EDI = (Connection *)accept(*(SOCKET *)(*(int *)this + 0x24),(sockaddr *)0x0,(int *)0x0);
  piVar17 = local_1a8;
  local_1b4 = unaff_EDI;
  if (unaff_EDI == (Connection *)0xffffffff) {
    unaff_EDI = (Connection *)endl_exref;
    pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                          "Connection failed.");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,unaff_EBX);
  }
  else {
    FUN_004d3df0(*(int *)(*local_1a8 + 4));
    local_198 = (Connection *)0x0;
    local_1a4 = *(_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                  **)(*piVar17 + 4);
    pCVar16 = (Connection *)0x1;
    do {
      p_Var18 = local_1a4;
      pCVar14 = (Connection *)((int)pCVar16 >> 0x1f);
      local_20c = pCVar16;
      local_19c = pCVar16;
      local_190 = pCVar14;
      FUN_00530600(local_1a4 + 4,&local_200,(uint *)&local_20c);
      p_Var4 = local_1a4;
      if ((local_200 != *(int *)(p_Var18 + 4)) && (*(int *)(local_200 + 0x18) != 0)) {
        in_stack_fffffde8 = local_190;
        FUN_00530600(local_1a4 + 4,&local_1fc,(uint *)&stack0xfffffde4);
        if (local_1fc == *(int *)(p_Var4 + 4)) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(local_1fc + 0x18);
        }
        if (*(char *)(iVar8 + 0x60) == '\0') {
          local_198 = (Connection *)0x1;
          break;
        }
      }
      pCVar16 = (Connection *)((int)&pCVar16->vftablePtr + 1);
    } while ((int)pCVar16 < 0xb);
    FUN_004d5c60((int)local_1a4);
    local_194 = 0;
    iVar8 = 4;
    piVar17 = &local_194;
    do {
      iVar9 = recv((SOCKET)unaff_EDI,(char *)piVar17,iVar8,0);
      if (iVar9 < 1) {
        if (iVar9 == -1) {
          closesocket((SOCKET)unaff_EDI);
          hThread = local_1a0;
          goto LAB_00425fd3;
        }
        break;
      }
      iVar8 = iVar8 - iVar9;
      piVar17 = (int *)((int)piVar17 + iVar9);
    } while (0 < iVar8);
    if (local_194 == 0x11) {
      local_1c0 = 0;
      iVar8 = 4;
      piVar17 = &local_1c0;
      do {
        iVar9 = recv((SOCKET)unaff_EDI,(char *)piVar17,iVar8,0);
        if (iVar9 < 1) {
          if (iVar9 == -1) {
            closesocket((SOCKET)unaff_EDI);
            hThread = local_1a0;
            goto LAB_00425fd3;
          }
          break;
        }
        iVar8 = iVar8 - iVar9;
        piVar17 = (int *)((int)piVar17 + iVar9);
      } while (0 < iVar8);
      iVar8 = local_1c0;
      pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                            "Client version: ");
      pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,iVar8);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                ((basic_ostream<char,std::char_traits<char>_> *)pbVar10,unaff_EBX);
      if ((int)local_198 < 4) {
        if (local_1c0 == 3) {
          local_194 = 0x10;
          send((SOCKET)unaff_EDI,(char *)&local_194,(int)unaff_EDI,0);
          pCVar16 = (Connection *)cout_exref;
          pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                                (char *)0x4257e9);
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,
                     (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                      *)in_stack_fffffde8);
          iVar8 = 1;
          local_1a4 = *(_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                        **)(*local_1a8 + 4);
          local_1b0 = 0;
          local_190 = (Connection *)(*(int *)(*local_1a8 + 4) + 4);
          pCVar2 = local_190->vftablePtr;
LAB_00425823:
          unaff_EBX = (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                       *)0x425845;
          FUN_00530600(local_190,(int *)&local_1f4,(uint *)&stack0xfffffdec);
          if ((local_1f4 != pCVar2) &&
             (local_1f4[6].deleting_destructor != (deleting_destructor *)0x0))
          goto code_r0x00425855;
          local_1b0 = (longlong)iVar8;
          if (iVar8 == 0) goto LAB_00425876;
          FUN_004d3df0((int)local_1a4);
          local_190 = operator_new(0x1e60);
          local_8 = 0;
          if (local_190 == (Connection *)0x0) {
            local_198 = (Connection *)0x0;
          }
          else {
            local_198 = (Connection *)
                        cube::Creature::Creature((Creature *)local_190,(undefined4 *)&local_1b0);
          }
          pCVar16 = local_198;
          local_8 = 0xffffffff;
          puVar11 = FUN_00402b10((void *)(*(int *)(*local_1a8 + 4) + 4),(uint *)&local_1b0);
          *puVar11 = (uint)pCVar16;
          FUN_004110d0((int)pCVar16);
          puVar13 = (undefined4 *)&(pCVar16->Connection_data).field_0xc;
          iVar8 = 0;
          local_19c = (Connection *)puVar13;
          do {
            uVar20 = FUN_0054a946();
            pCVar5 = local_198;
            pCVar15 = local_1b4;
            puVar13[iVar8 * 2] = (int)uVar20;
            *(int *)(&(pCVar16->Connection_data).field_0x10 + iVar8 * 8) = (int)(uVar20 >> 0x20);
            iVar8 = iVar8 + 1;
          } while (iVar8 < 3);
          local_2c = 0x3f4ccccd;
          uStack_28 = 0x3f4ccccd;
          local_24 = 0x3fe66666;
          local_44 = 0;
          local_20 = 0x3f99999a3f99999a;
          local_18 = 0x402ccccc;
          uStack_40 = 0;
          local_3c = 0;
          (local_198->Connection_data).offset_0x7c = (void *)0x3f99999a;
          (local_198->Connection_data).offset_0x80 = 0x3f99999a;
          (local_198->Connection_data).offset_0x84 = (void *)0x402ccccc;
          *(undefined8 *)&(local_198->Connection_data).field_0x24 = 0;
          *(undefined4 *)&(local_198->Connection_data).field_0x2c = 0;
          local_38 = 0;
          uStack_34 = 0;
          *(undefined8 *)&(local_198->Connection_data).field_0x30 = 0;
          local_30 = 0;
          *(undefined4 *)&(local_198->Connection_data).field_0x38 = 0;
          *(undefined4 *)&(local_198->Connection_data).field_0x58 = 0;
          *(undefined4 *)&local_198[2].Connection_data.field_0x54 = 1;
          fVar19 = FUN_0040fda0((int)local_198);
          (pCVar5->Connection_data).field_0x5c = 0;
          *(float *)&pCVar5[2].Connection_data.field_0x30 = (float)fVar19;
          *(undefined4 *)&(pCVar5->Connection_data).field_0x60 = 0x2c;
          pCVar5[2].Connection_data.offset_0x84 = *(void **)&(pCVar5->Connection_data).field_0xc;
          pCVar5[2].Connection_data.offset_0x88 =
               *(undefined4 *)&(pCVar5->Connection_data).field_0x10;
          pCVar5[2].Connection_data.offset_0x8c = (void *)(pCVar5->Connection_data).offset_0x14;
          pCVar5[2].Connection_data.offset_0x90 =
               *(undefined4 *)&(pCVar5->Connection_data).field_0x18;
          *(undefined4 *)&pCVar5[2].Connection_data.field_0x94 =
               *(undefined4 *)&(pCVar5->Connection_data).field_0x1c;
          pCVar5[3].vftablePtr = *(Connection_vftable **)&(pCVar5->Connection_data).field_0x20;
          pCVar5[0x11].Connection_data.field_0x55 = 1;
          *(undefined2 *)&pCVar5[0x11].Connection_data.field_0x48 = 0x203;
          pCVar5[0xf].Connection_data.field_0x75 = 1;
          *(undefined2 *)&pCVar5[0xf].Connection_data.field_0x68 = 0x203;
          pCVar5[2].Connection_data.field_0x4 = 1;
          FUN_0040a840((uint *)&(pCVar5->Connection_data).field_0x60,
                       (int)&(pCVar5->Connection_data).field_0x74,(undefined4 *)0x0);
          FUN_004d5c60((int)local_1a4);
          local_188 = 0;
          local_184 = 0;
          local_180 = 0;
          local_17e = 0;
          local_78 = 0;
          memset(local_178,0,0x100);
          local_18c[0] = 1;
          local_17f = 0;
          local_17c = 1;
          iVar8 = 0x32;
          do {
            FUN_00427000(&pCVar5[0x1d].Connection_data.field_0x2c,(char *)local_18c,-1);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          local_17c = 1;
          local_18c[0] = 0x603;
          local_17f = 2;
          FUN_00427000(&pCVar5[0x1d].Connection_data.field_0x2c,(char *)local_18c,-1);
          piVar17 = local_1a8;
          FUN_004d3df0(*(int *)(*local_1a8 + 4));
          iVar8 = *piVar17;
          p_Var18 = (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                     *)0x0;
          if (0 < (int)(*(int *)(iVar8 + 0x2c) - *(int *)(iVar8 + 0x28) & 0xfffffffcU)) {
            piVar12 = *(int **)(iVar8 + 0x28);
            do {
              if (*piVar12 == 0) {
                local_190 = operator_new(0xb0);
                local_8 = 1;
                if (local_190 == (Connection *)0x0) {
                  pCVar16 = (Connection *)0x0;
                }
                else {
                  pCVar16 = cube::Connection::Connection(local_190);
                }
                local_8 = 0xffffffff;
                *(Connection **)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) = pCVar16;
                break;
              }
              p_Var18 = p_Var18 + 1;
              piVar12 = piVar12 + 1;
            } while ((int)p_Var18 < *(int *)(iVar8 + 0x2c) - *(int *)(iVar8 + 0x28) >> 2);
          }
          if (p_Var18 ==
              (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
               *)(*(int *)(*piVar17 + 0x2c) - *(int *)(*piVar17 + 0x28) >> 2)) {
            local_190 = operator_new(0xb0);
            local_8 = 2;
            if (local_190 == (Connection *)0x0) {
              local_1bc = (Connection *)0x0;
            }
            else {
              local_1bc = cube::Connection::Connection(local_190);
            }
            pCVar16 = local_1b4;
            iVar8 = *piVar17;
            ppCVar3 = *(Connection ***)(iVar8 + 0x2c);
            local_8 = 0xffffffff;
            local_198 = local_1bc;
            if ((&local_1bc < ppCVar3) &&
               (pCVar15 = local_1b4, *(Connection ***)(iVar8 + 0x28) <= &local_1bc)) {
              local_190 = (Connection *)
                          ((int)&local_1bc - (int)*(Connection ***)(iVar8 + 0x28) >> 2);
              if (ppCVar3 == *(Connection ***)(iVar8 + 0x30)) {
                FUN_00426eb0((void *)(iVar8 + 0x28),1);
              }
              puVar13 = *(undefined4 **)(iVar8 + 0x2c);
              pCVar15 = pCVar16;
              if (puVar13 != (undefined4 *)0x0) {
                pCVar16 = *(Connection **)(*(int *)(iVar8 + 0x28) + (int)local_190 * 4);
LAB_00425c84:
                *puVar13 = pCVar16;
              }
            }
            else {
              if (ppCVar3 == *(Connection ***)(iVar8 + 0x30)) {
                FUN_00426eb0((void *)(iVar8 + 0x28),1);
              }
              puVar13 = *(undefined4 **)(iVar8 + 0x2c);
              pCVar16 = local_198;
              if (puVar13 != (undefined4 *)0x0) goto LAB_00425c84;
            }
            *(int *)(iVar8 + 0x2c) = *(int *)(iVar8 + 0x2c) + 4;
            piVar17 = local_1a8;
          }
          *(Connection **)(*(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) + 8) = pCVar15;
          iVar8 = *(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4);
          *(_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
            **)(iVar8 + 0x10) =
               (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                *)local_1b0;
          *(undefined1 **)(iVar8 + 0x14) = local_1b0._4_4_;
          FUN_004d5c60(*(int *)(*piVar17 + 4));
          pcVar21 = (char *)0x425cdb;
          unaff_EDI = (Connection *)cout_exref;
          unaff_EBX = p_Var18;
          pcVar22 = endl_exref;
          pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,"Player ")
          ;
          pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                              ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,(int)pcVar22);
          pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)pbVar10,pcVar21);
          local_20c = (Connection *)0x425cf7;
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,
                     (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                      *)pCVar14);
          local_20c = (Connection *)0x4;
          local_194 = 0;
          send(*(SOCKET *)(*(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) + 8),
               (char *)&local_194,4,0);
          local_20c = (Connection *)0x8;
          send(*(SOCKET *)(*(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) + 8),
               (char *)&local_1b0,8,0);
          local_20c = (Connection *)0x1168;
          send(*(SOCKET *)(*(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) + 8),
               (char *)local_19c,0x1168,0);
          local_194 = 0xf;
          local_1f8 = *(undefined4 *)(*piVar17 + 8);
          local_20c = (Connection *)0x4;
          send(*(SOCKET *)(*(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) + 8),
               (char *)&local_194,4,0);
          local_20c = (Connection *)0x4;
          in_stack_fffffde8 = (Connection *)0x425d9d;
          send(*(SOCKET *)(*(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) + 8),
               (char *)&local_1f8,4,0);
          p_Var4 = local_1a4;
          pCVar16 = (Connection *)*piVar17;
          puStack_1ec = &(pCVar16->Connection_data).field_0x24;
          local_1d8 = &(pCVar16->Connection_data).field_0x30;
          puStack_1d4 = &(pCVar16->Connection_data).field_0x38;
          local_1d0 = &(pCVar16->Connection_data).field_0x40;
          pCStack_1cc = (Connection *)&(pCVar16->Connection_data).field_0x48;
          local_1e0 = (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                       *)local_1b0;
          uStack_1dc = local_1b0._4_4_;
          local_1f0 = local_1a4;
          local_8 = 3;
          local_20c = (Connection *)0x425e2e;
          local_1e8 = p_Var18;
          local_1c8 = pCVar16;
          local_1b4 = pCVar16;
          local_19c = pCStack_1cc;
          local_190 = (Connection *)puStack_1ec;
          piVar17 = operator_new(0x40);
          if (piVar17 == (int *)0x0) {
LAB_00426017:
                    /* WARNING: Subroutine does not return */
            std::_Xbad_alloc();
          }
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                        */
          *piVar17 = (int)&std::
                           _Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                           ::vftable;
          *(ulonglong *)(piVar17 + 2) = CONCAT44(puStack_1ec,local_1f0);
          *(ulonglong *)(piVar17 + 4) = CONCAT44(puStack_1e4,local_1e8);
          *(ulonglong *)(piVar17 + 6) = CONCAT44(uStack_1dc,local_1e0);
          *(ulonglong *)(piVar17 + 8) = CONCAT44(puStack_1d4,local_1d8);
          *(ulonglong *)(piVar17 + 10) = CONCAT44(pCStack_1cc,local_1d0);
          *(ulonglong *)(piVar17 + 0xc) = CONCAT44(iStack_1c4,local_1c8);
          local_8 = 4;
          local_20c = (Connection *)0x425ea0;
          local_64 = piVar17;
          local_1b8 = (Connection *)FUN_00413640(local_74);
          local_8 = 0xffffffff;
          if (local_64 != (int *)0x0) {
            local_20c = (Connection *)0x425ec8;
            (**(code **)(*local_64 + 0x10))();
            local_64 = (int *)0x0;
          }
          SetThreadPriority(local_1b8,-1);
          puStack_1e4 = &(pCVar16->Connection_data).field_0x24;
          local_1d8 = (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                       *)local_1b0;
          puStack_1d4 = local_1b0._4_4_;
          local_1d0 = &(pCVar16->Connection_data).field_0x48;
          local_1e8 = p_Var4;
          local_1c8 = local_1b8;
          local_8 = 5;
          local_1e0 = p_Var18;
          pCStack_1cc = pCVar16;
          piVar17 = operator_new(0x38);
          if (piVar17 == (int *)0x0) goto LAB_00426017;
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                        */
          *piVar17 = (int)&std::
                           _Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                           ::vftable;
          *(ulonglong *)(piVar17 + 2) = CONCAT44(puStack_1e4,local_1e8);
          *(ulonglong *)(piVar17 + 4) = CONCAT44(uStack_1dc,local_1e0);
          *(ulonglong *)(piVar17 + 6) = CONCAT44(puStack_1d4,local_1d8);
          *(ulonglong *)(piVar17 + 8) = CONCAT44(pCStack_1cc,local_1d0);
          piVar17[10] = (int)local_1c8;
          piVar17[0xb] = iStack_1c4;
          local_8 = 6;
          local_4c = piVar17;
          hThread = (HANDLE)FUN_00413640(local_5c);
          local_8 = 0xffffffff;
          local_1a0 = hThread;
          if (local_4c != (int *)0x0) {
            (**(code **)(*local_4c + 0x10))(local_4c != local_5c);
            local_4c = (int *)0x0;
          }
          SetThreadPriority(hThread,-1);
          goto LAB_00425fd3;
        }
        local_19c = (Connection *)0x3;
        send((SOCKET)unaff_EDI,(char *)&local_19c,(int)unaff_EDI,0);
        Sleep(500);
        closesocket((SOCKET)unaff_EDI);
      }
      else {
        local_190 = (Connection *)0x12;
        send((SOCKET)unaff_EDI,(char *)&local_190,(int)unaff_EDI,0);
        Sleep(500);
        closesocket((SOCKET)unaff_EDI);
      }
      unaff_EDI = (Connection *)cout_exref;
      unaff_EBX = endl_exref;
      pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                            (char *)0x4257a6);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,
                 (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                  *)in_stack_fffffde8);
      hThread = local_1a0;
    }
    else {
      closesocket((SOCKET)unaff_EDI);
      hThread = local_1a0;
    }
  }
  goto LAB_00425fd3;
code_r0x00425855:
  iVar8 = iVar8 + 1;
  if (10 < iVar8) goto LAB_00425876;
  goto LAB_00425823;
LAB_00425876:
  in_stack_fffffde8 = unaff_EDI;
  closesocket((SOCKET)unaff_EDI);
  hThread = local_1a0;
  unaff_EDI = pCVar16;
LAB_00425fd3:
  cVar1 = *(char *)(*local_1a8 + 0x4c);
  ppvVar6 = ExceptionList;
  this = local_1a8;
  goto joined_r0x004254ec;
}


/* FUN_00426020 @ 00426020  kind=gamemisc  attributed-by=none  size=1774 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00426020(int *param_1)

{
  char cVar1;
  void **ppvVar2;
  int iVar3;
  uint uVar4;
  void *this;
  char ****ppppcVar5;
  char cVar6;
  char *pcVar7;
  SOCKET *buf;
  uint *buf_00;
  int iVar8;
  undefined8 *puVar9;
  char local_13fc [40];
  undefined8 local_13d4;
  undefined4 local_13cc;
  uint local_13c8;
  char *local_13c4;
  char *local_13c0;
  undefined4 local_13bc;
  undefined4 local_13b8;
  SOCKET local_13b4;
  SOCKET local_13b0;
  char local_13a9;
  undefined8 local_13a8 [557];
  char local_240 [300];
  char local_114 [112];
  char local_a4 [72];
  int local_5c;
  int local_58;
  undefined2 local_54 [8];
  undefined4 local_44;
  undefined4 local_40;
  char local_3c [8];
  char local_34 [8];
  char ***local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_0054c95b;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  cVar6 = '\0';
  local_13a9 = '\0';
  cVar1 = *(char *)param_1[9];
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar2, cVar1 != '\0') {
    if ((*(int *)(*(int *)param_1[1] + param_1[2] * 4) == 0) || (cVar6 != '\0')) break;
    local_13cc = 0;
    iVar8 = 4;
    local_13b4 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
    pcVar7 = (char *)&local_13cc;
    do {
      iVar3 = recv(local_13b4,pcVar7,iVar8,0);
      if (iVar3 < 1) {
        if (iVar3 == -1) goto LAB_004266ef;
        break;
      }
      iVar8 = iVar8 - iVar3;
      pcVar7 = pcVar7 + iVar3;
    } while (0 < iVar8);
    switch(local_13cc) {
    case 0:
      local_13c4 = (char *)0x0;
      local_13c0 = (char *)0x0;
      local_13bc = 0;
      local_13b8 = 0;
      local_13b4 = 0;
      local_8 = 0;
      iVar8 = 4;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      buf = &local_13b4;
      do {
        iVar3 = recv(local_13b0,(char *)buf,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            local_8 = iVar3;
            FUN_0042f440(&local_13c4);
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        buf = (SOCKET *)((int)buf + iVar3);
      } while (0 < iVar8);
      if (local_13b4 != 0) {
        FUN_00413180(&local_13c4,local_13b4);
        pcVar7 = local_13c4;
        if (local_13c4 == local_13c0) {
          pcVar7 = (char *)0x0;
        }
        iVar8 = FUN_004286b0(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),pcVar7,
                             local_13b4,0);
        if (iVar8 != -1) {
          FUN_00412d90((int *)&local_13c4);
          local_13d4 = 0;
          FUN_00415c90(&local_13c4,&local_13d4,8);
          FUN_004d3df0(*param_1);
          uVar4 = FUN_00405420((void *)*param_1,(uint *)(param_1 + 4));
          FUN_00422f90(local_13a8,(undefined4 *)(uVar4 + 0x10));
          FUN_004d5c60(*param_1);
          FUN_00415dd0((int *)&local_13c4,local_13a8);
          FUN_004d3df0(*param_1);
          puVar9 = local_13a8;
          uVar4 = FUN_00405420((void *)*param_1,(uint *)(param_1 + 4));
          FUN_0041df70((void *)(uVar4 + 0x10),(undefined4 *)puVar9);
          FUN_004d5c60(*param_1);
          local_8 = -1;
          FUN_0042f440(&local_13c4);
          break;
        }
      }
      cVar6 = '\x01';
      local_13a9 = '\x01';
      local_8 = -1;
      FUN_0042f440(&local_13c4);
      goto LAB_004266e3;
    case 6:
      FUN_0041b9e0((undefined2 *)local_240);
      iVar8 = 300;
      pcVar7 = local_240;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,pcVar7,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        pcVar7 = pcVar7 + iVar3;
      } while (0 < iVar8);
      FUN_004d3df0(*param_1);
      pcVar7 = local_240;
      uVar4 = FUN_00405420((void *)*param_1,(uint *)(param_1 + 4));
      FUN_0041caf0((void *)(uVar4 + 0x130c),pcVar7);
      FUN_004d5c60(*param_1);
      break;
    case 7:
      FUN_00422a90((int)local_a4);
      iVar8 = 0x48;
      pcVar7 = local_a4;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,pcVar7,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        pcVar7 = pcVar7 + iVar3;
      } while (0 < iVar8);
      FUN_004d3df0(*param_1);
      FUN_00428400((void *)param_1[6],(undefined4 *)local_a4);
      FUN_004d5c60(*param_1);
      break;
    case 8:
      FUN_004063d0((int)local_13fc);
      iVar8 = 0x28;
      pcVar7 = local_13fc;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,pcVar7,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        pcVar7 = pcVar7 + iVar3;
      } while (0 < iVar8);
      FUN_004d3df0(*param_1);
      FUN_00411040((void *)param_1[7],(undefined8 *)local_13fc);
      FUN_004d5c60(*param_1);
      break;
    case 9:
      FUN_00422890((undefined4 *)local_114);
      iVar8 = 0x70;
      pcVar7 = local_114;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,pcVar7,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        pcVar7 = pcVar7 + iVar3;
      } while (0 < iVar8);
      FUN_004d3df0(*param_1);
      FUN_00428360((void *)param_1[8],(undefined4 *)local_114);
      FUN_004d5c60(*param_1);
      break;
    case 10:
      iVar8 = 4;
      buf_00 = &local_13c8;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,(char *)buf_00,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        buf_00 = (uint *)((int)buf_00 + iVar3);
      } while (0 < iVar8);
      if (0 < (int)local_13c8) {
        FUN_00421e50(local_2c,local_13c8,0);
        ppppcVar5 = local_2c;
        if (7 < local_18) {
          ppppcVar5 = (char ****)local_2c[0];
        }
        local_8 = 1;
        iVar8 = FUN_004286b0(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),
                             (char *)ppppcVar5,local_13c8 * 2,0);
        if (iVar8 == -1) {
          cVar6 = '\x01';
          local_13a9 = '\x01';
          local_8 = iVar8;
          FUN_004cd8c0(local_2c);
          goto LAB_004266e3;
        }
        FUN_004d3df0(*param_1);
        iVar8 = 0;
        if (0 < (int)(((int *)param_1[1])[1] - *(int *)param_1[1] & 0xfffffffcU)) {
          do {
            local_40 = 7;
            local_44 = 0;
            local_54[0] = 0;
            local_8._0_1_ = 2;
            FUN_004172f0(local_54,(int *)local_2c,0,0xffffffff);
            local_5c = param_1[4];
            local_58 = param_1[5];
            FUN_004283b0((void *)(*(int *)(*(int *)param_1[1] + iVar8 * 4) + 0x90),&local_5c);
            local_8 = CONCAT31(local_8._1_3_,1);
            FUN_004cd890((int)&local_5c);
            iVar8 = iVar8 + 1;
          } while (iVar8 < ((int *)param_1[1])[1] - *(int *)param_1[1] >> 2);
        }
        FUN_004d5c60(*param_1);
        local_8 = -1;
        FUN_004cd8c0(local_2c);
      }
      break;
    case 0xb:
      iVar8 = 8;
      pcVar7 = local_3c;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,pcVar7,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        pcVar7 = pcVar7 + iVar3;
      } while (0 < iVar8);
      EnterCriticalSection
                ((LPCRITICAL_SECTION)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x98));
      pcVar7 = local_3c;
      this = (void *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x80);
      goto LAB_004266c1;
    case 0xc:
      iVar8 = 8;
      pcVar7 = local_34;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,pcVar7,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        pcVar7 = pcVar7 + iVar3;
      } while (0 < iVar8);
      EnterCriticalSection
                ((LPCRITICAL_SECTION)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x98));
      pcVar7 = local_34;
      this = (void *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x88);
LAB_004266c1:
      FUN_004285e0(this,(undefined4 *)pcVar7);
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x98));
    }
    cVar6 = local_13a9;
LAB_004266e3:
    ppvVar2 = ExceptionList;
    cVar1 = *(char *)param_1[9];
  }
LAB_004266ef:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004267b0 @ 004267b0  kind=gamemisc  attributed-by=none  size=50 */

void FUN_004267b0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1180);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004267c1. Too many branches */
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


/* FUN_00426a70 @ 00426a70  kind=gamemisc  attributed-by=none  size=58 */

undefined4 * __fastcall FUN_00426a70(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1180);
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


/* FUN_00428160 @ 00428160  kind=gamemisc  attributed-by=none  size=11 */

int __fastcall FUN_00428160(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_00428290 @ 00428290  kind=gamemisc  attributed-by=none  size=50 */

undefined1 __fastcall FUN_00428290(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((((((cVar1 != '\f') && (cVar1 != '\r')) && (cVar1 != '\x15')) &&
       ((cVar1 != '\v' || (param_1[1] == '\x0e')))) &&
      ((cVar1 != '\0' && ((cVar1 != '\x19' && (cVar1 != '\x14')))))) &&
     ((cVar1 != '\x18' && (cVar1 != '\x17')))) {
    return 1;
  }
  return 0;
}


/* FUN_004282d0 @ 004282d0  kind=gamemisc  attributed-by=none  size=32 */

undefined1 __fastcall FUN_004282d0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((((cVar1 != '\x01') && (cVar1 != '\n')) && (cVar1 != '\f')) &&
     (((cVar1 != '\r' && (cVar1 != '\v')) && (cVar1 != '\x15')))) {
    return 0;
  }
  return 1;
}


/* FUN_004282f0 @ 004282f0  kind=gamemisc  attributed-by=none  size=64 */

undefined4 FUN_004282f0(undefined1 *param_1)

{
  switch(*param_1) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x17:
  case 0x18:
    return 0;
  default:
    return 1;
  case 0xb:
    return 2;
  case 0x13:
  case 0x14:
    return 3;
  }
}


/* FUN_00428630 @ 00428630  kind=gamemisc  attributed-by=none  size=118 */

void __thiscall FUN_00428630(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041e8f0(this,1);
    }
    param_1 = (undefined4 *)((((int)param_1 - (int)puVar2) / 0x11c) * 0x11c + *(int *)this);
  }
  else if (puVar1 == *(undefined4 **)((int)this + 8)) {
    FUN_0041e8f0(this,1);
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    FUN_00413710(puVar1 + 1,(undefined1 *)(param_1 + 1));
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  return;
}


/* FUN_004286b0 @ 004286b0  kind=gamemisc  attributed-by=none  size=55 */

int __cdecl FUN_004286b0(SOCKET param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  int len;
  
  len = param_3;
  while ((iVar1 = param_3, 0 < len && (iVar1 = recv(param_1,param_2,len,param_4), 0 < iVar1))) {
    len = len - iVar1;
    param_2 = param_2 + iVar1;
  }
  return iVar1;
}


/* FUN_00429060 @ 00429060  kind=gamemisc  attributed-by=none  size=101 */

void FUN_00429060(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  
  piVar2 = *(int **)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  cVar1 = *(char *)(unaff_EBP + -0x11);
  iVar3 = *(int *)(*unaff_ESI + 4);
  *(undefined4 *)(iVar3 + 0x20 + (int)unaff_ESI) = 0;
  *(undefined4 *)(iVar3 + 0x24 + (int)unaff_ESI) = 0;
  if (cVar1 == '\0') {
    unaff_EBX = unaff_EBX | 2;
  }
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(*unaff_ESI + 4) + (int)unaff_ESI),unaff_EBX,false);
  iVar3 = *piVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar2 = *(int **)(*(int *)(iVar3 + 4) + 0x38 + (int)piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* FUN_004290d0 @ 004290d0  kind=gamemisc  attributed-by=none  size=176 */

undefined4 * __thiscall FUN_004290d0(void *this,int *param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054caa9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_0042cf80(this);
  this_00 = puVar1 + 4;
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (this_00 != (undefined4 *)0x0) {
    puVar1[9] = 7;
    puVar1[8] = 0;
    *(undefined2 *)this_00 = 0;
    FUN_004172f0(this_00,param_1,0,0xffffffff);
    puVar1[0xf] = 7;
    puVar1[0xe] = 0;
    *(undefined2 *)(puVar1 + 10) = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004172f0(puVar1 + 10,param_1 + 6,0,0xffffffff);
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_004291a0 @ 004291a0  kind=gamemisc  attributed-by=none  size=135 */

int FUN_004291a0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined2 *this;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cae1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_004f7b60(param_1,param_2);
  this = (undefined2 *)(iVar1 + 8);
  local_8 = 1;
  if (this != (undefined2 *)0x0) {
    *(undefined4 *)(iVar1 + 0x1c) = 7;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *this = 0;
    FUN_004172f0(this,param_3,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_00429280 @ 00429280  kind=gamemisc  attributed-by=none  size=157 */

undefined4 * __thiscall FUN_00429280(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cb21;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_0042cf40(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_00416a90(puVar1 + 4,param_1);
    local_8._0_1_ = 2;
    FUN_0042b040(puVar1 + 10,param_1 + 6);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_0042b180(puVar1 + 0xc,param_1 + 8);
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_00429380 @ 00429380  kind=gamemisc  attributed-by=none  size=149 */

undefined4 * __thiscall FUN_00429380(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cb59;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_0042cf40(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_00416a90(puVar1 + 4,param_1);
                    /* inlined constructor: cube::QuestText::QuestText */
    puVar1[10] = &cube::QuestText::vftable;
    puVar1[0xb] = param_1[7];
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_0042b0e0(puVar1 + 0xc,param_1 + 8);
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_00429430 @ 00429430  kind=gamemisc  attributed-by=none  size=116 */

void __thiscall FUN_00429430(void *this,int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)this;
  puVar7 = FUN_004294b0(this,*(undefined4 **)(*param_1 + 4),iVar2,param_2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  piVar3 = *(int **)this;
  *(int *)((int)this + 4) = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)this + 8) = *(int *)this;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)this + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)this + 8) = iVar2;
  return;
}


/* FUN_004294b0 @ 004294b0  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_004294b0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cb80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_004290d0(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_004294b0(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_004294b0(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_004297a0 @ 004297a0  kind=gamemisc  attributed-by=none  size=527 */

void __thiscall
FUN_004297a0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x4924922 < *(uint *)((int)this + 4)) {
    FUN_0042c2e0(param_5 + 4);
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
      if ((char)piVar5[3] == '\0') goto LAB_004298e1;
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
LAB_0042998a:
      piVar6[1] = (int)piVar5;
    }
    else {
      if ((char)piVar5[3] != '\0') {
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
        goto LAB_0042998a;
      }
LAB_004298e1:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004299b0 @ 004299b0  kind=gamemisc  attributed-by=none  size=515 */

void __thiscall
FUN_004299b0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x3fffffd < *(uint *)((int)this + 4)) {
    FUN_0042d060(param_5);
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
        goto LAB_00429b8e;
      }
LAB_00429ae5:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_00429ae5;
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
LAB_00429b8e:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_00429bc0 @ 00429bc0  kind=gamemisc  attributed-by=none  size=626 */

void __thiscall
FUN_00429bc0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054cba8;
  local_10 = ExceptionList;
  if (0x4924922 < *(uint *)((int)this + 4)) {
    local_8 = 0;
    ExceptionList = &local_10;
    cube::QuestText::~QuestText((QuestText *)(param_5 + 10));
    local_8 = 0xffffffff;
    if (7 < (uint)param_5[9]) {
      operator_delete((void *)param_5[4]);
    }
    param_5[9] = 7;
    param_5[8] = 0;
    *(undefined2 *)(param_5 + 4) = 0;
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
      if ((char)piVar5[3] == '\0') goto LAB_00429d57;
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
LAB_00429e00:
      piVar6[1] = (int)piVar5;
    }
    else {
      if ((char)piVar5[3] != '\0') {
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
        goto LAB_00429e00;
      }
LAB_00429d57:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_0042a260 @ 0042a260  kind=gamemisc  attributed-by=none  size=468 */

undefined4 * __thiscall
FUN_0042a260(void *this,undefined4 *param_1,ushort *param_2,ushort *param_3,int *param_4)

{
  ushort *puVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uStack_2c;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  puStack_c = &LAB_0054cc10;
  local_10 = ExceptionList;
  uStack_2c = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    puVar4 = *(ushort **)this;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    puVar5 = *(ushort **)this;
    puVar4 = param_2;
    if (param_2 != *(ushort **)puVar5) {
      if (param_2 == puVar5) {
        puVar4 = param_3;
        if (7 < *(uint *)(param_3 + 10)) {
          puVar4 = *(ushort **)param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        uVar3 = FUN_00419ef0((void *)(*(int *)(puVar5 + 4) + 0x10),0,
                             *(uint *)(*(int *)(puVar5 + 4) + 0x20),puVar4,*(uint *)(param_3 + 8));
        if (-1 < (int)uVar3) goto LAB_0042a401;
        puVar4 = *(ushort **)(*(int *)this + 8);
        cVar7 = '\0';
        goto LAB_0042a2a9;
      }
      puVar5 = param_2 + 8;
      if (7 < *(uint *)(param_2 + 0x12)) {
        puVar5 = *(ushort **)puVar5;
      }
      uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
      if ((int)uVar3 < 0) {
        param_3 = param_2;
        FUN_004dad80((int *)&param_3);
        puVar5 = param_3;
        bVar2 = FUN_0041ae40(param_3 + 8,puVar1);
        if (!bVar2) goto LAB_0042a3a6;
        if (*(char *)(*(int *)(puVar5 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a2a9;
        }
      }
      else {
LAB_0042a3a6:
        bVar2 = FUN_0041ae40(param_2 + 8,puVar1);
        if (!bVar2) {
LAB_0042a401:
          local_8 = 0xffffffff;
          puVar6 = (undefined4 *)FUN_0042a970(this,&local_1c,(undefined4 *)0x0,puVar1,param_4);
          *param_1 = *puVar6;
          ExceptionList = local_10;
          return param_1;
        }
        param_3 = param_2;
        FUN_00407a50((int *)&param_3);
        puVar4 = param_3;
        if ((param_3 != (ushort *)*local_18) &&
           (bVar2 = FUN_0041ae40(puVar1,param_3 + 8), this = local_18, !bVar2)) goto LAB_0042a401;
        this = local_18;
        puVar5 = param_2;
        if (*(char *)(*(int *)(param_2 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a2a9;
        }
      }
      cVar7 = '\0';
      puVar4 = puVar5;
      goto LAB_0042a2a9;
    }
    puVar5 = param_2 + 8;
    if (7 < *(uint *)(param_2 + 0x12)) {
      puVar5 = *(ushort **)puVar5;
    }
    local_14 = (undefined1 *)&uStack_2c;
    uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042a401;
  }
  cVar7 = '\x01';
LAB_0042a2a9:
  FUN_004297a0(this,param_1,cVar7,(undefined4 *)puVar4,puVar1,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0042a450 @ 0042a450  kind=gamemisc  attributed-by=none  size=468 */

undefined4 * __thiscall
FUN_0042a450(void *this,undefined4 *param_1,ushort *param_2,ushort *param_3,int *param_4)

{
  ushort *puVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uStack_2c;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  puStack_c = &LAB_0054cc30;
  local_10 = ExceptionList;
  uStack_2c = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    puVar4 = *(ushort **)this;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    puVar5 = *(ushort **)this;
    puVar4 = param_2;
    if (param_2 != *(ushort **)puVar5) {
      if (param_2 == puVar5) {
        puVar4 = param_3;
        if (7 < *(uint *)(param_3 + 10)) {
          puVar4 = *(ushort **)param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        uVar3 = FUN_00419ef0((void *)(*(int *)(puVar5 + 4) + 0x10),0,
                             *(uint *)(*(int *)(puVar5 + 4) + 0x20),puVar4,*(uint *)(param_3 + 8));
        if (-1 < (int)uVar3) goto LAB_0042a5f1;
        puVar4 = *(ushort **)(*(int *)this + 8);
        cVar7 = '\0';
        goto LAB_0042a499;
      }
      puVar5 = param_2 + 8;
      if (7 < *(uint *)(param_2 + 0x12)) {
        puVar5 = *(ushort **)puVar5;
      }
      uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
      if ((int)uVar3 < 0) {
        param_3 = param_2;
        FUN_004dad80((int *)&param_3);
        puVar5 = param_3;
        bVar2 = FUN_0041ae40(param_3 + 8,puVar1);
        if (!bVar2) goto LAB_0042a596;
        if (*(char *)(*(int *)(puVar5 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a499;
        }
      }
      else {
LAB_0042a596:
        bVar2 = FUN_0041ae40(param_2 + 8,puVar1);
        if (!bVar2) {
LAB_0042a5f1:
          local_8 = 0xffffffff;
          puVar6 = (undefined4 *)FUN_0042aae0(this,&local_1c,(undefined4 *)0x0,puVar1,param_4);
          *param_1 = *puVar6;
          ExceptionList = local_10;
          return param_1;
        }
        param_3 = param_2;
        FUN_00407a50((int *)&param_3);
        puVar4 = param_3;
        if ((param_3 != (ushort *)*local_18) &&
           (bVar2 = FUN_0041ae40(puVar1,param_3 + 8), this = local_18, !bVar2)) goto LAB_0042a5f1;
        this = local_18;
        puVar5 = param_2;
        if (*(char *)(*(int *)(param_2 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a499;
        }
      }
      cVar7 = '\0';
      puVar4 = puVar5;
      goto LAB_0042a499;
    }
    puVar5 = param_2 + 8;
    if (7 < *(uint *)(param_2 + 0x12)) {
      puVar5 = *(ushort **)puVar5;
    }
    local_14 = (undefined1 *)&uStack_2c;
    uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042a5f1;
  }
  cVar7 = '\x01';
LAB_0042a499:
  FUN_004299b0(this,param_1,cVar7,(undefined4 *)puVar4,puVar1,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0042a640 @ 0042a640  kind=gamemisc  attributed-by=none  size=468 */

undefined4 * __thiscall
FUN_0042a640(void *this,undefined4 *param_1,ushort *param_2,ushort *param_3,int *param_4)

{
  ushort *puVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uStack_2c;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  puStack_c = &LAB_0054cc50;
  local_10 = ExceptionList;
  uStack_2c = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    puVar4 = *(ushort **)this;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    puVar5 = *(ushort **)this;
    puVar4 = param_2;
    if (param_2 != *(ushort **)puVar5) {
      if (param_2 == puVar5) {
        puVar4 = param_3;
        if (7 < *(uint *)(param_3 + 10)) {
          puVar4 = *(ushort **)param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        uVar3 = FUN_00419ef0((void *)(*(int *)(puVar5 + 4) + 0x10),0,
                             *(uint *)(*(int *)(puVar5 + 4) + 0x20),puVar4,*(uint *)(param_3 + 8));
        if (-1 < (int)uVar3) goto LAB_0042a7e1;
        puVar4 = *(ushort **)(*(int *)this + 8);
        cVar7 = '\0';
        goto LAB_0042a689;
      }
      puVar5 = param_2 + 8;
      if (7 < *(uint *)(param_2 + 0x12)) {
        puVar5 = *(ushort **)puVar5;
      }
      uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
      if ((int)uVar3 < 0) {
        param_3 = param_2;
        FUN_004dad80((int *)&param_3);
        puVar5 = param_3;
        bVar2 = FUN_0041ae40(param_3 + 8,puVar1);
        if (!bVar2) goto LAB_0042a786;
        if (*(char *)(*(int *)(puVar5 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a689;
        }
      }
      else {
LAB_0042a786:
        bVar2 = FUN_0041ae40(param_2 + 8,puVar1);
        if (!bVar2) {
LAB_0042a7e1:
          local_8 = 0xffffffff;
          puVar6 = (undefined4 *)FUN_0042ac40(this,&local_1c,(undefined4 *)0x0,puVar1,param_4);
          *param_1 = *puVar6;
          ExceptionList = local_10;
          return param_1;
        }
        param_3 = param_2;
        FUN_00407a50((int *)&param_3);
        puVar4 = param_3;
        if ((param_3 != (ushort *)*local_18) &&
           (bVar2 = FUN_0041ae40(puVar1,param_3 + 8), this = local_18, !bVar2)) goto LAB_0042a7e1;
        this = local_18;
        puVar5 = param_2;
        if (*(char *)(*(int *)(param_2 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a689;
        }
      }
      cVar7 = '\0';
      puVar4 = puVar5;
      goto LAB_0042a689;
    }
    puVar5 = param_2 + 8;
    if (7 < *(uint *)(param_2 + 0x12)) {
      puVar5 = *(ushort **)puVar5;
    }
    local_14 = (undefined1 *)&uStack_2c;
    uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042a7e1;
  }
  cVar7 = '\x01';
LAB_0042a689:
  FUN_00429bc0(this,param_1,cVar7,(undefined4 *)puVar4,puVar1,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0042a970 @ 0042a970  kind=gamemisc  attributed-by=none  size=336 */

void __thiscall
FUN_0042a970(void *this,undefined4 *param_1,undefined4 *param_2,ushort *param_3,int *param_4)

{
  ushort *this_00;
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_3;
  puStack_c = &LAB_0054cc90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = true;
  puVar3 = *(undefined4 **)this;
  puVar5 = (undefined4 *)(*(undefined4 **)this)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      puVar4 = (ushort *)(puVar5 + 4);
      if (7 < (uint)puVar5[9]) {
        puVar4 = *(ushort **)puVar4;
      }
      uVar2 = FUN_00419ef0(this_00,0,*(uint *)(this_00 + 8),puVar4,puVar5[8]);
      local_18 = (int)uVar2 < 0;
    }
    else {
      puVar4 = this_00;
      if (7 < *(uint *)(this_00 + 10)) {
        puVar4 = *(ushort **)this_00;
      }
      uVar2 = FUN_00419ef0(puVar5 + 4,0,puVar5[8],puVar4,*(uint *)(this_00 + 8));
      local_18 = -1 < (int)uVar2;
    }
    puVar3 = puVar5;
    if (local_18 == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar3;
  if (local_18 != false) {
    if (puVar3 == (undefined4 *)**(int **)this) {
      local_18 = true;
      goto LAB_0042aa2e;
    }
    FUN_004dad80((int *)&param_2);
  }
  puVar5 = param_2;
  puVar4 = this_00;
  if (7 < *(uint *)(this_00 + 10)) {
    puVar4 = *(ushort **)this_00;
  }
  uVar2 = FUN_00419ef0(param_2 + 4,0,param_2[8],puVar4,*(uint *)(this_00 + 8));
  piVar1 = param_4;
  if (-1 < (int)uVar2) {
    FUN_0042c2e0(param_4 + 4);
    operator_delete(piVar1);
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_0042aa2e:
  puVar3 = (undefined4 *)FUN_004297a0(this,&param_2,local_18,puVar3,this_00,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0042aae0 @ 0042aae0  kind=gamemisc  attributed-by=none  size=324 */

void __thiscall
FUN_0042aae0(void *this,undefined4 *param_1,undefined4 *param_2,ushort *param_3,int *param_4)

{
  ushort *this_00;
  uint uVar1;
  ushort **ppuVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  bool local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_3;
  puStack_c = &LAB_0054ccb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = true;
  puVar3 = *(undefined4 **)this;
  puVar5 = (undefined4 *)(*(undefined4 **)this)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      puVar4 = (ushort *)(puVar5 + 4);
      if (7 < (uint)puVar5[9]) {
        puVar4 = *(ushort **)puVar4;
      }
      uVar1 = FUN_00419ef0(this_00,0,*(uint *)(this_00 + 8),puVar4,puVar5[8]);
      local_1c = (int)uVar1 < 0;
    }
    else {
      puVar4 = this_00;
      if (7 < *(uint *)(this_00 + 10)) {
        puVar4 = *(ushort **)this_00;
      }
      uVar1 = FUN_00419ef0(puVar5 + 4,0,puVar5[8],puVar4,*(uint *)(this_00 + 8));
      local_1c = -1 < (int)uVar1;
    }
    puVar3 = puVar5;
    if (local_1c == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar3;
  if (local_1c != false) {
    if (puVar3 == (undefined4 *)**(int **)this) {
      ppuVar2 = (ushort **)&param_2;
      local_1c = true;
      goto LAB_0042aba1;
    }
    FUN_004dad80((int *)&param_2);
  }
  puVar5 = param_2;
  puVar4 = this_00;
  if (7 < *(uint *)(this_00 + 10)) {
    puVar4 = *(ushort **)this_00;
  }
  uVar1 = FUN_00419ef0(param_2 + 4,0,param_2[8],puVar4,*(uint *)(this_00 + 8));
  if (-1 < (int)uVar1) {
    FUN_0042d060(param_4);
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  ppuVar2 = &param_3;
LAB_0042aba1:
  puVar3 = (undefined4 *)FUN_004299b0(this,ppuVar2,local_1c,puVar3,this_00,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0042ac40 @ 0042ac40  kind=gamemisc  attributed-by=none  size=324 */

void __thiscall
FUN_0042ac40(void *this,undefined4 *param_1,undefined4 *param_2,ushort *param_3,int *param_4)

{
  ushort *this_00;
  uint uVar1;
  ushort **ppuVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  bool local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_3;
  puStack_c = &LAB_0054ccd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = true;
  puVar3 = *(undefined4 **)this;
  puVar5 = (undefined4 *)(*(undefined4 **)this)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      puVar4 = (ushort *)(puVar5 + 4);
      if (7 < (uint)puVar5[9]) {
        puVar4 = *(ushort **)puVar4;
      }
      uVar1 = FUN_00419ef0(this_00,0,*(uint *)(this_00 + 8),puVar4,puVar5[8]);
      local_1c = (int)uVar1 < 0;
    }
    else {
      puVar4 = this_00;
      if (7 < *(uint *)(this_00 + 10)) {
        puVar4 = *(ushort **)this_00;
      }
      uVar1 = FUN_00419ef0(puVar5 + 4,0,puVar5[8],puVar4,*(uint *)(this_00 + 8));
      local_1c = -1 < (int)uVar1;
    }
    puVar3 = puVar5;
    if (local_1c == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar3;
  if (local_1c != false) {
    if (puVar3 == (undefined4 *)**(int **)this) {
      ppuVar2 = (ushort **)&param_2;
      local_1c = true;
      goto LAB_0042ad01;
    }
    FUN_004dad80((int *)&param_2);
  }
  puVar5 = param_2;
  puVar4 = this_00;
  if (7 < *(uint *)(this_00 + 10)) {
    puVar4 = *(ushort **)this_00;
  }
  uVar1 = FUN_00419ef0(param_2 + 4,0,param_2[8],puVar4,*(uint *)(this_00 + 8));
  if (-1 < (int)uVar1) {
    FUN_0042d0c0(param_4);
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  ppuVar2 = &param_3;
LAB_0042ad01:
  puVar3 = (undefined4 *)FUN_00429bc0(this,ppuVar2,local_1c,puVar3,this_00,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0042ada0 @ 0042ada0  kind=gamemisc  attributed-by=none  size=157 */

void __thiscall FUN_0042ada0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054ccf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004291a0(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0x7fffffe) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_0042ae70 @ 0042ae70  kind=gamemisc  attributed-by=none  size=207 */

void __thiscall FUN_0042ae70(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uStack_28;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054cd10;
  local_10 = ExceptionList;
  uStack_28 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_28;
  ExceptionList = &local_10;
  piVar3 = *(int **)this;
  local_8 = 0;
  local_18 = this;
  for (; piVar3 = (int *)*piVar3, param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    if (piVar3 == *(int **)this) goto LAB_0042aed5;
    if (piVar3 + 2 != param_1 + 2) {
      FUN_004172f0(piVar3 + 2,param_1 + 2,0,0xffffffff);
    }
  }
LAB_0042af2e:
  FUN_0042e000(this,(int *)&local_18,piVar3,*(int **)this);
  ExceptionList = local_10;
  return;
LAB_0042aed5:
  for (; param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    puVar1 = *(undefined4 **)this;
    iVar2 = FUN_004291a0(puVar1,(undefined4 *)puVar1[1],param_1 + 2);
    if (*(int *)((int)this + 4) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    puVar1[1] = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  goto LAB_0042af2e;
}


/* FUN_0042c820 @ 0042c820  kind=gamemisc  attributed-by=none  size=369 */

void __thiscall FUN_0042c820(void *this,ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_54;
  undefined4 local_50;
  void *local_4c;
  undefined4 local_48;
  undefined1 *local_40;
  undefined2 local_3c [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d0c8;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (ushort *)FUN_0042d3d0(this,param_1);
  if (puVar1 != *(ushort **)this) {
    puVar2 = puVar1 + 8;
    if (7 < *(uint *)(puVar1 + 0x12)) {
      puVar2 = *(ushort **)puVar2;
    }
    uVar3 = FUN_00419ef0(param_1,0,*(uint *)(param_1 + 8),puVar2,*(uint *)(puVar1 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042c970;
  }
  local_54 = (int *)0x0;
  local_50 = 0;
  local_54 = (int *)FUN_0041a030();
  local_8 = 0;
  local_4c = (void *)0x0;
  local_48 = 0;
  local_4c = (void *)FUN_004f7b60((undefined4 *)0x0,(undefined4 *)0x0);
  local_8 = 1;
  local_28 = 7;
  local_2c = 0;
  local_3c[0] = 0;
  FUN_004172f0(local_3c,(int *)param_1,0,0xffffffff);
  local_40 = local_24;
  local_8._0_1_ = 2;
  FUN_0042b040(local_24,(int *)&local_54);
  local_8._0_1_ = 3;
  FUN_0042b180(local_1c,&local_4c);
  local_8 = CONCAT31(local_8._1_3_,4);
  piVar4 = FUN_00429280(this,(undefined4 *)local_3c);
  FUN_0042a260(this,&local_40,puVar1,(ushort *)(piVar4 + 4),piVar4);
  FUN_0042c2e0((undefined4 *)local_3c);
  local_8 = 0xffffffff;
  FUN_0042d520((int *)&local_4c);
  operator_delete(local_4c);
  FUN_0041a180(&local_54,&local_40,(int *)*local_54,local_54);
  operator_delete(local_54);
LAB_0042c970:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0042c9a0 @ 0042c9a0  kind=gamemisc  attributed-by=none  size=299 */

void __thiscall FUN_0042c9a0(void *this,ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
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
  puStack_c = &LAB_0054d100;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (ushort *)FUN_0042d3d0(this,param_1);
  if (puVar1 != *(ushort **)this) {
    puVar2 = puVar1 + 8;
    if (7 < *(uint *)(puVar1 + 0x12)) {
      puVar2 = *(ushort **)puVar2;
    }
    uVar3 = FUN_00419ef0(param_1,0,*(uint *)(param_1 + 8),puVar2,*(uint *)(puVar1 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042caaa;
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8 = 0;
  FUN_00416a90(local_44,(undefined4 *)param_1);
  FUN_00416a90(local_2c,local_5c);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar4 = FUN_00429340(this,local_44);
  FUN_0042a450(this,&local_60,puVar1,(ushort *)(piVar4 + 4),piVar4);
  if (7 < local_18) {
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  if (7 < local_30) {
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  if (7 < local_48) {
    operator_delete(local_5c[0]);
  }
LAB_0042caaa:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0042cad0 @ 0042cad0  kind=gamemisc  attributed-by=none  size=316 */

void __thiscall FUN_0042cad0(void *this,ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
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
  puStack_c = &LAB_0054d100;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (ushort *)FUN_0042d3d0(this,param_1);
  if (puVar1 != *(ushort **)this) {
    puVar2 = puVar1 + 8;
    if (7 < *(uint *)(puVar1 + 0x12)) {
      puVar2 = *(ushort **)puVar2;
    }
    uVar3 = FUN_00419ef0(param_1,0,*(uint *)(param_1 + 8),puVar2,*(uint *)(puVar1 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042cbeb;
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  FUN_004172f0(local_44,(int *)param_1,0,0xffffffff);
  FUN_00416a90(local_2c,local_5c);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar4 = FUN_00429340(this,local_44);
  FUN_0042a450(this,&local_60,puVar1,(ushort *)(piVar4 + 4),piVar4);
  if (7 < local_18) {
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  if (7 < local_30) {
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  if (7 < local_48) {
    operator_delete(local_5c[0]);
  }
LAB_0042cbeb:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0042ced0 @ 0042ced0  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0042ced0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042cede. Too many branches */
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


/* FUN_0042cf40 @ 0042cf40  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * __fastcall FUN_0042cf40(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x38);
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


/* FUN_0042cf80 @ 0042cf80  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * __fastcall FUN_0042cf80(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x40);
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


/* FUN_0042d300 @ 0042d300  kind=gamemisc  attributed-by=none  size=197 */

void __thiscall FUN_0042d300(void *this,void *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint _Size;
  void *_Dst;
  void *pvVar2;
  
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = param_3;
  if ((param_2 != 0) && (((byte)param_3 & 6) != 6)) {
    if (param_2 < 0x80000000) {
      _Size = param_2 * 2;
      _Dst = operator_new(_Size);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_1,_Size);
        *(void **)((int)this + 0x38) = (void *)(_Size + (int)_Dst);
        if ((*(byte *)((int)this + 0x3c) & 4) == 0) {
          **(undefined4 **)((int)this + 0xc) = _Dst;
          **(undefined4 **)((int)this + 0x1c) = _Dst;
          **(int **)((int)this + 0x2c) = (int)_Size >> 1;
        }
        uVar1 = *(uint *)((int)this + 0x3c);
        if ((uVar1 & 2) == 0) {
          **(undefined4 **)((int)this + 0x10) = _Dst;
          pvVar2 = _Dst;
          if ((uVar1 & 0x10) != 0) {
            pvVar2 = (void *)(_Size + (int)_Dst);
          }
          **(undefined4 **)((int)this + 0x20) = pvVar2;
          **(int **)((int)this + 0x30) = (int)((_Size - (int)pvVar2) + (int)_Dst) >> 1;
          if (**(int **)((int)this + 0x1c) == 0) {
            **(undefined4 **)((int)this + 0xc) = _Dst;
            **(undefined4 **)((int)this + 0x1c) = 0;
            **(int **)((int)this + 0x2c) = (int)_Dst >> 1;
          }
        }
        *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 1;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  return;
}


/* FUN_0042d580 @ 0042d580  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * __thiscall FUN_0042d580(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0042d140((int *)piVar2[1]);
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
    FUN_0042d640(this,&local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_0042d640 @ 0042d640  kind=gamemisc  attributed-by=none  size=680 */

void __thiscall FUN_0042d640(void *this,undefined4 *param_1,int *param_2)

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
      goto LAB_0042d76c;
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
LAB_0042d76c:
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
              goto LAB_0042d89e;
            }
LAB_0042d840:
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
            goto LAB_0042d840;
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
            goto LAB_0042d89e;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)this + 4));
    }
    *(undefined1 *)(piVar7 + 3) = 1;
  }
LAB_0042d89e:
  if (7 < (uint)piVar2[10]) {
    operator_delete((void *)piVar2[5]);
  }
  piVar2[10] = 7;
  piVar2[9] = 0;
  *(undefined2 *)(piVar2 + 5) = 0;
  operator_delete(piVar2);
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = param_2;
  return;
}


/* FUN_0045f160 @ 0045f160  kind=gamemisc  attributed-by=none  size=97 */

float10 __cdecl FUN_0045f160(int param_1)

{
  ushort uVar1;
  double local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 8) != 0) {
    return (float10)*(double *)(param_1 + 8);
  }
  if ((uVar1 & 4) != 0) {
    return (float10)*(longlong *)(param_1 + 0x10);
  }
  local_c = 0.0;
  if ((uVar1 & 0x12) != 0) {
    local_c = 0.0;
    FUN_0048cc90(*(byte **)(param_1 + 4),&local_c,*(uint *)(param_1 + 0x18),
                 *(char *)(param_1 + 0x1f));
  }
  return (float10)local_c;
}


/* FUN_0045f1d0 @ 0045f1d0  kind=gamemisc  attributed-by=none  size=122 */

undefined4 __cdecl FUN_0045f1d0(int param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  uint local_14 [4];
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 4) != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = FUN_00477080(*(double *)(param_1 + 8));
    return (int)uVar2;
  }
  if ((uVar1 & 0x12) != 0) {
    local_14[0] = 0;
    local_14[1] = 0;
    FUN_0048d300(*(byte **)(param_1 + 4),local_14,*(int *)(param_1 + 0x18),*(char *)(param_1 + 0x1f)
                );
    return local_14[0];
  }
  return 0;
}


/* FUN_0045fad0 @ 0045fad0  kind=gamemisc  attributed-by=none  size=91 */

void __cdecl FUN_0045fad0(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    piVar1[1] = *(int *)(*piVar1 + 0xa4);
    *(int **)(*piVar1 + 0xa4) = piVar1;
  }
  if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
    FUN_004a6e20(*(undefined4 **)(param_1 + 0x18));
  }
  *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
  *(undefined1 *)(param_1 + 0x26) = 5;
  *(undefined4 *)(param_1 + 0x38) = 7;
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x38) = 1;
  return;
}


/* FUN_0045ff40 @ 0045ff40  kind=gamemisc  attributed-by=none  size=96 */

void __cdecl FUN_0045ff40(int param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720((int *)(param_1 + 8));
  }
  FUN_00494b00(*(int *)(param_1 + 8),*(undefined4 **)(param_1 + 0x2c));
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x1044010;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


/* FUN_00461320 @ 00461320  kind=gamemisc  attributed-by=none  size=212 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cdecl FUN_00461320(uint param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_004bc920();
  if (iVar2 != 0) {
    return 0xffffffffffffffff;
  }
  if (DAT_00583f40 != 0) {
    (*DAT_00582b18)(DAT_00583f40);
  }
  uVar1 = _DAT_00583f48;
  if (DAT_00583f40 != 0) {
    (*DAT_00582b20)(DAT_00583f40);
  }
  if (0 < param_2) {
LAB_00461387:
    FUN_004a0990(FUN_0046b250,0,param_1,param_2);
    return uVar1;
  }
  if (-1 < param_2) {
    if ((-1 < param_2) && ((0 < param_2 || (param_1 != 0)))) goto LAB_00461387;
    if (DAT_00583f40 != 0) {
      (*DAT_00582b18)(DAT_00583f40);
    }
    DAT_00583f50 = 0;
    DAT_00583f54 = 0;
    _DAT_00583f48 = 0;
    DAT_00583f64 = 0;
    if (DAT_00583f40 != 0) {
      (*DAT_00582b20)(DAT_00583f40);
    }
  }
  return uVar1;
}


/* FUN_00461bb0 @ 00461bb0  kind=gamemisc  attributed-by=none  size=283 */

void __cdecl FUN_00461bb0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong local_9c [6];
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0047eaa0(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00475680((uint *)local_9c);
    FUN_004752f0(local_9c);
    FUN_00466a80(100,local_6c,(byte *)"%04d-%02d-%02d %02d:%02d:%02d");
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
    else {
      iVar1 = FUN_004b7260((int *)(param_1 + 8),iVar2 + 1,0);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00461d80 @ 00461d80  kind=gamemisc  attributed-by=none  size=251 */

void __cdecl FUN_00461d80(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong local_9c [6];
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0047eaa0(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_004752f0(local_9c);
    FUN_00466a80(100,local_6c,(byte *)"%02d:%02d:%02d");
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
    else {
      iVar1 = FUN_004b7260((int *)(param_1 + 8),iVar2 + 1,0);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00462070 @ 00462070  kind=gamemisc  attributed-by=none  size=216 */

undefined4 __cdecl FUN_00462070(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)((int)param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (DAT_00582ac8 == 0) {
      (*DAT_00582aec)(puVar2);
      puVar2 = puVar1;
    }
    else {
      if (DAT_00583f40 != 0) {
        (*DAT_00582b18)(DAT_00583f40);
      }
      iVar3 = (*DAT_00582af0._4_4_)(puVar2);
      DAT_00583e18 = DAT_00583e18 - iVar3;
      if (DAT_00583e40 < DAT_00583e18) {
        DAT_00583e40 = DAT_00583e18;
      }
      DAT_00583e3c = DAT_00583e3c + -1;
      if (DAT_00583e64 < DAT_00583e3c) {
        DAT_00583e64 = DAT_00583e3c;
      }
      (*DAT_00582aec)(puVar2);
      puVar2 = puVar1;
      if (DAT_00583f40 != 0) {
        (*DAT_00582b20)(DAT_00583f40);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined **)param_1 = &DAT_00569a48;
  return 0;
}


/* FUN_00462150 @ 00462150  kind=gamemisc  attributed-by=none  size=254 */

void __cdecl FUN_00462150(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong local_9c [6];
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0047eaa0(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00475680((uint *)local_9c);
    FUN_00466a80(100,local_6c,(byte *)"%04d-%02d-%02d");
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
    else {
      iVar1 = FUN_004b7260((int *)(param_1 + 8),iVar2 + 1,0);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00464130 @ 00464130  kind=gamemisc  attributed-by=none  size=168 */

uint __cdecl FUN_00464130(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  byte *pbVar5;
  size_t sVar6;
  
  sVar6 = 0;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar5 = param_2;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar5;
    }
    sVar6 = (int)pbVar5 - (int)param_2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  psVar3 = FUN_004995c0(param_1,param_2,sVar6,param_3,1,'\0');
  if (psVar3 == (short *)0x0) {
    uVar4 = FUN_00493f20(param_1,param_2,param_3,1,0,0x49f6a0,0,0,(int *)0x0);
  }
  else {
    uVar4 = 0;
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar4 = 7;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar2 & uVar4;
}


/* FUN_00465070 @ 00465070  kind=gamemisc  attributed-by=none  size=110 */

undefined4 __cdecl FUN_00465070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(code *)PTR_CloseHandle_00583590)(*(undefined4 *)(param_1 + 8));
  while (iVar1 == 0) {
    iVar3 = iVar3 + 1;
    if (2 < iVar3) goto LAB_004650b9;
    (*(code *)PTR_Sleep_005837e8)(100);
    iVar1 = (*(code *)PTR_CloseHandle_00583590)(*(undefined4 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (iVar1 != 0) {
    return 0;
  }
LAB_004650b9:
  uVar2 = (*(code *)PTR_GetLastError_005836a4)("winClose",*(undefined4 *)(param_1 + 0x1c),0x7dc3);
  uVar2 = FUN_004c23f0(0x100a,uVar2);
  return uVar2;
}


/* FUN_00465c90 @ 00465c90  kind=gamemisc  attributed-by=none  size=904 */

bool __cdecl FUN_00465c90(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_5;
  
  bVar1 = *param_1;
  local_5 = 0;
  bVar5 = 0;
  if (bVar1 == 0) {
LAB_00465d1d:
    return bVar5 == 1;
  }
LAB_00465ca7:
  iVar3 = (int)(char)bVar1;
  switch(iVar3) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    goto switchD_00465cbd_caseD_9;
  default:
    if (((&DAT_00569720)[bVar1] & 0x46) != 0) {
      iVar2 = 1;
      bVar1 = (&DAT_00569720)[param_1[1]];
      while ((bVar1 & 0x46) != 0) {
        iVar4 = iVar2 + 1;
        iVar2 = iVar2 + 1;
        bVar1 = (&DAT_00569720)[param_1[iVar4]];
      }
      switch(iVar3) {
      case 0x43:
      case 99:
        if (iVar2 == 6) {
          pcVar6 = "create";
          iVar3 = 6;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[(byte)*pcVar6]))
            goto LAB_00465e32;
            pbVar8 = pbVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00465e32:
          if ((iVar3 < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[(byte)*pcVar6])) {
            iVar3 = 4;
            param_1 = param_1 + 5;
            goto LAB_00465d5c;
          }
        }
        break;
      case 0x45:
      case 0x65:
        if (iVar2 == 3) {
          pbVar7 = &DAT_00571364;
          iVar3 = 3;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[*pbVar7]))
            goto LAB_00465f82;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00465f82:
          if ((iVar3 < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[*pbVar7])) {
            iVar3 = 7;
            param_1 = param_1 + 2;
            goto LAB_00465d5c;
          }
        }
        else if (iVar2 == 7) {
          pcVar6 = "explain";
          iVar3 = 7;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[(byte)*pcVar6]))
            goto LAB_00465fe2;
            pbVar8 = pbVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00465fe2:
          if ((iVar3 < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[(byte)*pcVar6])) {
            iVar3 = 3;
            param_1 = param_1 + 6;
            goto LAB_00465d5c;
          }
        }
        break;
      case 0x54:
      case 0x74:
        if (iVar2 != 7) {
          if (iVar2 == 4) {
            pbVar7 = &DAT_00571350;
            iVar3 = 4;
            pbVar8 = param_1;
            do {
              iVar4 = iVar3;
              iVar3 = iVar4 + -1;
              if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[*pbVar7]))
              goto LAB_00465ef2;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
            } while (0 < iVar3);
            iVar3 = iVar4 + -2;
LAB_00465ef2:
            if ((-1 < iVar3) && ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[*pbVar7])) break;
            iVar3 = 5;
            param_1 = param_1 + 3;
          }
          else {
            if ((iVar2 != 9) || (iVar3 = FUN_00468380(param_1,(byte *)"temporary",9), iVar3 != 0))
            break;
            iVar3 = 5;
            param_1 = param_1 + 8;
          }
          goto LAB_00465d5c;
        }
        pcVar6 = "trigger";
        iVar3 = 7;
        pbVar8 = param_1;
        do {
          iVar4 = iVar3;
          iVar3 = iVar4 + -1;
          if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[(byte)*pcVar6]))
          goto LAB_00465e92;
          pbVar8 = pbVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (0 < iVar3);
        iVar3 = iVar4 + -2;
LAB_00465e92:
        if ((iVar3 < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[(byte)*pcVar6])) {
          iVar3 = 6;
          param_1 = param_1 + 6;
          goto LAB_00465d5c;
        }
      }
      iVar3 = 2;
      param_1 = param_1 + iVar2 + -1;
      break;
    }
    goto LAB_00465d5a;
  case 0x22:
  case 0x27:
  case 0x60:
    bVar1 = param_1[1];
    pbVar8 = param_1;
    if (bVar1 == 0) {
      return false;
    }
    while (param_1 = pbVar8 + 1, (char)bVar1 != iVar3) {
      bVar1 = pbVar8[2];
      pbVar8 = param_1;
      if (bVar1 == 0) {
        return false;
      }
    }
    goto LAB_00465d55;
  case 0x2d:
    if (param_1[1] != 0x2d) goto LAB_00465d5a;
    while (bVar5 = local_5, bVar1 != 10) {
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
      if (bVar1 == 0) goto LAB_00465d1d;
    }
    if (*param_1 == 0) goto LAB_00465d1d;
    iVar3 = 1;
    break;
  case 0x2f:
    if (param_1[1] != 0x2a) goto LAB_00465d5a;
    bVar1 = param_1[2];
    pbVar8 = param_1 + 2;
    while( true ) {
      if (bVar1 == 0) {
        return false;
      }
      if ((bVar1 == 0x2a) && (pbVar8[1] == 0x2f)) break;
      bVar1 = pbVar8[1];
      pbVar8 = pbVar8 + 1;
    }
    if (*pbVar8 == 0) {
      return false;
    }
    param_1 = pbVar8 + 1;
    goto switchD_00465cbd_caseD_9;
  case 0x3b:
    iVar3 = 0;
    break;
  case 0x5b:
    bVar1 = param_1[1];
    pbVar8 = param_1;
    if (bVar1 == 0) {
      return false;
    }
    while (param_1 = pbVar8 + 1, bVar1 != 0x5d) {
      bVar1 = pbVar8[2];
      pbVar8 = param_1;
      if (bVar1 == 0) {
        return false;
      }
    }
LAB_00465d55:
    if (*param_1 == 0) {
      return false;
    }
LAB_00465d5a:
    iVar3 = 2;
  }
LAB_00465d5c:
  param_1 = param_1 + 1;
  local_5 = (&UNK_0056a5d8)[(uint)local_5 * 8 + iVar3];
  bVar1 = *param_1;
  if (bVar1 == 0) {
    return local_5 == 1;
  }
  goto LAB_00465ca7;
switchD_00465cbd_caseD_9:
  iVar3 = 1;
  goto LAB_00465d5c;
}


/* FUN_00466390 @ 00466390  kind=gamemisc  attributed-by=none  size=169 */

undefined4 __cdecl FUN_00466390(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((int)uVar1 < 1) {
    lVar6 = CONCAT44(param_3,param_2);
  }
  else {
    uVar4 = (int)uVar1 >> 0x1f;
    uVar5 = __alldiv((uVar1 + param_2) - 1,
                     (uVar4 + param_3 + (uint)CARRY4(uVar1,param_2)) - (uint)(uVar1 + param_2 == 0),
                     uVar1,uVar4);
    lVar6 = __allmul((uint)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar1,uVar4);
  }
  iVar2 = FUN_0048a010(param_1,(int)lVar6,(uint)((ulonglong)lVar6 >> 0x20));
  if (iVar2 != 0) {
    uVar3 = FUN_004c23f0(0x60a,*(undefined4 *)(param_1 + 0x14));
    return uVar3;
  }
  iVar2 = (*(code *)PTR_SetEndOfFile_005837d0)();
  if (iVar2 == 0) {
    uVar3 = (*(code *)PTR_GetLastError_005836a4)();
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    uVar3 = FUN_004c23f0(0x60a,uVar3);
    return uVar3;
  }
  return 0;
}


/* FUN_004665f0 @ 004665f0  kind=gamemisc  attributed-by=none  size=217 */

void __cdecl FUN_004665f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
    iVar4 = 1;
    iVar3 = DAT_00583f40;
    if (1 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + -4 + iVar4 * 4);
        if (iVar2 != 0) {
          if (DAT_00582ac8 == 0) {
            (*DAT_00582aec)(iVar2);
            iVar3 = DAT_00583f40;
          }
          else {
            if (iVar3 != 0) {
              (*DAT_00582b18)(iVar3);
            }
            iVar3 = (*DAT_00582af0._4_4_)(iVar2);
            DAT_00583e18 = DAT_00583e18 - iVar3;
            if (DAT_00583e40 < DAT_00583e18) {
              DAT_00583e40 = DAT_00583e18;
            }
            DAT_00583e3c = DAT_00583e3c + -1;
            if (DAT_00583e64 < DAT_00583e3c) {
              DAT_00583e64 = DAT_00583e3c;
            }
            (*DAT_00582aec)(iVar2);
            iVar3 = DAT_00583f40;
            if (DAT_00583f40 != 0) {
              (*DAT_00582b20)(DAT_00583f40);
              iVar3 = DAT_00583f40;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    FUN_00466dd0(param_1 + -4);
  }
  return;
}


/* FUN_00466f30 @ 00466f30  kind=gamemisc  attributed-by=none  size=101 */

undefined4 __cdecl FUN_00466f30(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  iVar1 = (*(code *)PTR_GetFileSize_00583680)(*(undefined4 *)(param_1 + 8),&local_8);
  *param_2 = iVar1;
  param_2[1] = local_8;
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_GetLastError_005836a4)();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x14) = iVar1;
      uVar2 = FUN_004c23f0(0x70a,iVar1);
      return uVar2;
    }
  }
  return 0;
}


/* FUN_00468750 @ 00468750  kind=gamemisc  attributed-by=none  size=145 */

uint __cdecl FUN_00468750(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 10;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
    iVar1 = FUN_00499540(param_1,param_2);
    if (iVar1 < 0) {
      uVar2 = 1;
      FUN_004961f0(param_1,1,(byte *)"unknown database: %s");
      goto LAB_004687bd;
    }
  }
  uVar2 = FUN_00492280(param_1,iVar1,0,(undefined4 *)0x0,(undefined4 *)0x0);
  FUN_004961f0(param_1,uVar2,(byte *)0x0);
LAB_004687bd:
  uVar2 = FUN_0048ca70(param_1,uVar2);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar2;
}


/* FUN_00469290 @ 00469290  kind=gamemisc  attributed-by=none  size=81 */

int __cdecl FUN_00469290(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_004bfc30(param_1,param_2);
  if (iVar1 == 0) {
    FUN_004b7860((int *)(param_1[0x11] + param_2 * 0x28 + -0x28),param_3,param_4);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_00469710 @ 00469710  kind=gamemisc  attributed-by=none  size=78 */

int __cdecl FUN_00469710(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004bfc30(param_1,param_2);
  if (iVar1 == 0) {
    FUN_004b7be0((int *)(param_1[0x11] + param_2 * 0x28 + -0x28),param_3);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_0046a100 @ 0046a100  kind=gamemisc  attributed-by=none  size=955 */

void __cdecl
FUN_0046a100(undefined4 param_1,char *param_2,undefined8 *param_3,uint param_4,int *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  int local_140;
  int local_11c;
  char local_110 [264];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar2 = param_4 & 2;
  iVar9 = 0;
  *(undefined4 *)(param_3 + 1) = 0xffffffff;
  pcVar8 = param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = FUN_0047db10(0x106,local_110);
    if (iVar3 != 0) goto LAB_0046a4ac;
    pcVar8 = local_110;
  }
  iVar3 = FUN_00476080(pcVar8);
  if (iVar3 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = FUN_004c2230(iVar3);
  if (iVar4 != 0) {
    FUN_00466dd0(iVar3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar5 = 0x80000000;
  if (uVar2 != 0) {
    uVar5 = 0xc0000000;
  }
  if ((param_4 & 0x10) == 0) {
    cVar1 = ((param_4 & 4) != 0) + '\x03';
  }
  else {
    cVar1 = '\x01';
  }
  uVar6 = 0x80;
  if ((param_4 & 8) != 0) {
    uVar6 = 0x4000102;
  }
  iVar4 = FUN_0047f030();
  if (iVar4 == 0) {
    while (((local_11c = (*(code *)PTR_CreateFileA_0058359c)(iVar3,uVar5,3,0,cVar1,uVar6,0),
            iVar4 = local_140, local_11c == -1 &&
            (iVar4 = (*(code *)PTR_GetLastError_005836a4)(), iVar9 < DAT_00582bbc)) &&
           ((iVar4 == 5 || ((iVar4 == 0x21 || (iVar4 == 0x20))))))) {
      iVar9 = iVar9 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar9 * DAT_00582bc0);
    }
  }
  else {
    while (((local_11c = (*(code *)PTR_CreateFileW_005835a8)(iVar3,uVar5,3,0,cVar1,uVar6,0),
            iVar4 = local_140, local_11c == -1 &&
            (iVar4 = (*(code *)PTR_GetLastError_005836a4)(), iVar9 < DAT_00582bbc)) &&
           ((iVar4 == 5 || ((iVar4 == 0x21 || (iVar4 == 0x20))))))) {
      iVar9 = iVar9 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar9 * DAT_00582bc0);
    }
  }
  if (iVar9 != 0) {
    FUN_004683f0(10,"delayed %dms for lock/sharing conflict");
  }
  if (local_11c == -1) {
    *(int *)((int)param_3 + 0x14) = iVar4;
    FUN_004c23f0(0xe,iVar4);
    FUN_00466dd0(iVar3);
    if ((uVar2 != 0) && ((param_4 & 0x10) == 0)) {
      FUN_0046a100(param_1,param_2,param_3,param_4 & 0xfffffff9 | 1,param_5);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_004683f0(0xe,"cannot open file at line %d of [%.10s]");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = (uVar2 != 0) + 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)((int)param_3 + 4) = param_1;
  *(undefined **)param_3 = &DAT_005695c0;
  *(int *)(param_3 + 1) = local_11c;
  *(undefined4 *)((int)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 0;
  *(char **)((int)param_3 + 0x1c) = param_2;
  pbVar7 = FUN_004bccb0(param_2,&DAT_0056df6c);
  if ((pbVar7 == (byte *)0x0) || (uVar2 = FUN_0047da70(pbVar7,1,1), (char)uVar2 != '\0')) {
    *(byte *)(param_3 + 2) = *(byte *)(param_3 + 2) | 0x10;
  }
  FUN_00466dd0(iVar3);
LAB_0046a4ac:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0046a520 @ 0046a520  kind=gamemisc  attributed-by=none  size=473 */

void __cdecl FUN_0046a520(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  iVar1 = FUN_00476080(param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    uVar2 = (*(code *)PTR_GetFileAttributesW_00583668)();
    while (uVar2 != 0xffffffff) {
      iVar3 = local_a0;
      if ((uVar2 & 0x10) != 0) goto LAB_0046a6d1;
      iVar3 = (*(code *)PTR_DeleteFileW_005835e4)(iVar1);
      if (iVar3 != 0) goto LAB_0046a619;
      iVar3 = (*(code *)PTR_GetLastError_005836a4)();
      if ((DAT_00582bbc <= iVar4) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20))))
      goto LAB_0046a6d1;
      iVar4 = iVar4 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar4 * DAT_00582bc0);
      uVar2 = (*(code *)PTR_GetFileAttributesW_00583668)(iVar1);
    }
    iVar3 = (*(code *)PTR_GetLastError_005836a4)();
  }
  else {
    uVar2 = (*(code *)PTR_GetFileAttributesA_0058365c)(iVar1);
    while (uVar2 != 0xffffffff) {
      iVar3 = local_a0;
      if ((uVar2 & 0x10) != 0) goto LAB_0046a6d1;
      iVar3 = (*(code *)PTR_DeleteFileA_005835d8)(iVar1);
      if (iVar3 != 0) goto LAB_0046a619;
      iVar3 = (*(code *)PTR_GetLastError_005836a4)();
      if ((DAT_00582bbc <= iVar4) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20))))
      goto LAB_0046a6d1;
      iVar4 = iVar4 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar4 * DAT_00582bc0);
      uVar2 = (*(code *)PTR_GetFileAttributesA_0058365c)(iVar1);
    }
    iVar3 = (*(code *)PTR_GetLastError_005836a4)();
  }
  if ((iVar3 == 2) || (iVar3 == 3)) {
LAB_0046a619:
    if (iVar4 != 0) {
      FUN_004683f0(10,"delayed %dms for lock/sharing conflict");
    }
  }
  else {
LAB_0046a6d1:
    FUN_004c23f0(0xa0a,iVar3);
  }
  FUN_00466dd0(iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0046b0e0 @ 0046b0e0  kind=gamemisc  attributed-by=none  size=218 */

uint __cdecl
FUN_0046b0e0(int param_1,byte *param_2,int param_3,uint param_4,int param_5,int param_6,int param_7,
            int param_8,undefined *param_9)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if (param_9 != (undefined *)0x0) {
    piVar3 = FUN_00494b90(param_1,0xc);
    if (piVar3 == (int *)0x0) {
      (*(code *)param_9)(param_5);
      uVar2 = 1;
      goto LAB_0046b17a;
    }
    piVar3[0] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[1] = (int)param_9;
    piVar3[2] = param_5;
  }
  uVar2 = FUN_00493f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar3);
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
    (*(code *)param_9)(param_5);
    FUN_00494b00(param_1,piVar3);
  }
LAB_0046b17a:
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar2 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar2;
}


/* FUN_0046b260 @ 0046b260  kind=gamemisc  attributed-by=none  size=73 */

int __cdecl FUN_0046b260(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 7) & 0x12) == 0) {
    iVar1 = FUN_004ae680(param_1,1);
    return iVar1;
  }
  FUN_004b6fa0(param_1);
  *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xfffd | 0x10;
  if (param_1[6] != 0) {
    return param_1[1];
  }
  return 0;
}


/* FUN_0046b2b0 @ 0046b2b0  kind=gamemisc  attributed-by=none  size=51 */

int __cdecl FUN_0046b2b0(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    iVar1 = FUN_004ae680(param_1,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = param_1[6];
  if ((*(ushort *)(param_1 + 7) & 0x4000) != 0) {
    iVar1 = iVar1 + param_1[4];
  }
  return iVar1;
}


/* FUN_0046bab0 @ 0046bab0  kind=gamemisc  attributed-by=none  size=37 */

bool __cdecl FUN_0046bab0(int param_1,int param_2)

{
  for (; (0 < param_2 && (*(char *)(param_1 + -1 + param_2) == ' ')); param_2 = param_2 + -1) {
  }
  return param_2 == 0;
}


/* FUN_0046f880 @ 0046f880  kind=gamemisc  attributed-by=none  size=267 */

void __cdecl FUN_0046f880(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined3 extraout_var;
  int extraout_ECX;
  int *piVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar10 = 1.0;
  dVar9 = *(double *)((int *)*param_1 + 0x6e);
  iVar2 = param_1[2];
  if ((((1.0 < dVar9) && ((*(uint *)(*(int *)*param_1 + 0x18) & 0x80000) != 0)) &&
      (((param_1[0xe] & 0x100f3000U) == 0 || (param_1[0xe] < 0)))) &&
     ((*(byte *)(iVar2 + 0x24) & 7) == 0)) {
    iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0x1c);
    dVar8 = (double)iVar3 + *(double *)(&DAT_0055ac20 + (iVar3 >> 0x1f) * -8);
    fVar6 = FUN_00477290(dVar8);
    dVar7 = (double)fVar6;
    dVar9 = (dVar8 / dVar9 + dVar10) * dVar7 * 2.0;
    if (dVar9 < *(double *)(param_1 + 0x14)) {
      piVar5 = *(int **)(extraout_ECX + 0x20);
      piVar1 = piVar5 + *(int *)(extraout_ECX + 0x18) * 10;
      if (piVar5 < piVar1) {
        while (bVar4 = FUN_004bdb20(piVar5,iVar2,param_1[4],param_1[5]),
              CONCAT31(extraout_var,bVar4) == 0) {
          piVar5 = piVar5 + 10;
          if (piVar1 <= piVar5) {
            return;
          }
        }
        *(double *)(param_1 + 0x14) = dVar9;
        param_1[0xe] = 0x20000000;
        *(double *)(param_1 + 0x10) = dVar7 + dVar10;
        param_1[0x16] = piVar5[6];
        param_1[0x17] = piVar5[7];
      }
    }
  }
  return;
}


/* FUN_0046f990 @ 0046f990  kind=gamemisc  attributed-by=none  size=1866 */

void __cdecl FUN_0046f990(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  ushort *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  uint *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int local_cc;
  undefined4 *local_c8;
  undefined4 *local_c4;
  int local_c0;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  uint local_8c;
  undefined4 local_88;
  double local_84;
  int local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  uint *local_6c;
  int *local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 *local_1c;
  int *local_18;
  char local_13;
  char local_12;
  char local_11;
  int *local_10;
  char local_a;
  char local_9;
  uint local_8;
  
  local_68 = (int *)*param_1;
  local_1c = (undefined4 *)param_1[1];
  iVar7 = param_1[2];
  local_20 = *(int *)(iVar7 + 0x2c);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_88 = 0xffffffff;
  param_1[0x14] = -0x5d7860d2;
  param_1[0x15] = 0x547d42ae;
  local_18 = *(int **)(iVar7 + 0x44);
  local_38 = ((byte)~*(byte *)(iVar7 + 0x20) & 8) << 4 | 3;
  local_8c = local_38;
  local_7c = iVar7;
  local_10 = local_18;
  if (local_18 == (int *)0x0) {
    memset(&local_cc,0,0x30);
    local_c8 = &local_88;
    local_c4 = &local_9c;
    local_c0 = *(int *)(iVar7 + 0x10);
    local_9c = *(undefined4 *)(local_c0 + 0x1c);
    local_98 = 1;
    local_a8 = 1;
    local_a0 = 5;
    if ((*(byte *)(iVar7 + 0x24) & 1) == 0) {
      local_b8 = *(undefined4 *)(*(int *)(iVar7 + 0x10) + 8);
    }
    local_10 = &local_cc;
    local_74 = 0xfff0ffff;
    local_38 = 3;
    local_18 = (int *)0x0;
  }
  else {
    local_74 = 0xffffcfff;
  }
  if ((uint *)param_1[8] == (uint *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = *(uint *)param_1[8];
  }
  if (param_1[0xb] == 0) {
    local_34 = 0;
    local_a = 0 < (int)local_78;
    local_9 = param_1[9] != 0;
  }
  else {
    local_34 = (uint)*(ushort *)(param_1[0xb] * 0x58 + -0x52 + param_1[0xd]);
    local_a = (int)local_34 < (int)local_78;
    local_9 = '\0';
  }
  while (local_10 != (int *)0x0) {
    local_6c = (uint *)local_10[2];
    local_60._0_4_ = 0;
    uVar11 = (uint)local_60;
    uVar13 = 0;
    iVar7 = 1;
    local_30 = 0;
    local_70 = 1;
    local_84 = 1.0;
    local_28 = 0;
    local_13 = '\0';
    local_58 = 0;
    local_48 = 0;
    local_40 = 0;
    local_60 = (ulonglong)(ushort)local_34 << 0x30;
    local_8 = 0;
    local_12 = local_9;
    local_11 = local_a;
    if (0 < local_10[9]) {
      do {
        uVar11 = local_8;
        piVar3 = FUN_00479c50(local_1c,local_20,*(int *)(local_10[1] + uVar13 * 4),param_1[4],
                              param_1[5],(ushort)local_38,(int)local_18);
        if (piVar3 == (int *)0x0) break;
        local_8 = uVar11 | 0x11000;
        uVar2 = local_60._4_4_;
        local_60 = CONCAT44(local_60._4_4_,uVar11) | 0x11000;
        if ((*(ushort *)(piVar3 + 4) & 1) == 0) {
          if ((char)*(ushort *)(piVar3 + 4) < '\0') {
            local_8 = uVar11 | 0x91000;
            local_60 = CONCAT44(uVar2,uVar11) | 0x91000;
          }
        }
        else {
          local_8 = uVar11 | 0x51000;
          local_60 = CONCAT44(uVar2,uVar11) | 0x51000;
          if ((*(ushort *)(*piVar3 + 2) & 0x800) == 0) {
            piVar4 = *(int **)(*piVar3 + 0x10);
            if ((piVar4 != (int *)0x0) && (iVar1 = *piVar4, iVar1 != 0)) {
              iVar7 = iVar7 * iVar1;
              local_70 = iVar7;
            }
          }
          else {
            iVar7 = iVar7 * 0x19;
            local_30 = 1;
            local_70 = iVar7;
          }
        }
        uVar12 = (short)uVar13 + 1;
        uVar13 = (uint)uVar12;
        local_40 = CONCAT44(local_40._4_4_ | piVar3[7],(uint)local_40 | piVar3[6]);
        local_60._0_6_ = CONCAT24(uVar12,(uint)local_60);
        uVar11 = local_8;
      } while ((int)uVar13 < local_10[9]);
    }
    piVar3 = local_18;
    uVar10 = uVar11;
    local_2c = uVar13;
    if ((uVar13 == local_10[9]) && ((char)local_10[0xb] != '\0')) {
      if ((uVar11 & 0xc0000) == 0) {
        uVar2 = local_60._4_4_;
        local_60 = CONCAT44(local_60._4_4_,uVar11) | 0x2000000;
        if ((param_1[0xb] == 0) ||
           (uVar10 = uVar11 | 0x2000000, local_8 = uVar11 | 0x2000000,
           (*(uint *)(param_1[0xb] * 0x58 + -0x58 + param_1[0xd]) & 0x4000000) != 0)) {
          local_60 = CONCAT44(uVar2,uVar11) | 0x6000000;
          uVar10 = uVar11 | 0x6000000;
          local_8 = uVar11 | 0x6000000;
        }
      }
    }
    else if (*(char *)((int)local_10 + 0x2e) == '\0') {
      if (uVar13 == local_10[9]) {
        iVar7 = -1;
      }
      else {
        iVar7 = *(int *)(local_10[1] + uVar13 * 4);
      }
      piVar4 = FUN_00479c50(local_1c,local_20,iVar7,param_1[4],param_1[5],0x3c,(int)local_18);
      if (piVar4 != (int *)0x0) {
        piVar3 = FUN_00479c50(local_1c,local_20,iVar7,param_1[4],param_1[5],0x18,(int)piVar3);
        piVar4 = FUN_00479c50(local_1c,local_20,iVar7,param_1[4],param_1[5],0x24,(int)local_18);
        dVar16 = 1.0;
        local_84 = 1.0;
        if (piVar4 != (int *)0x0) {
          dVar16 = 4.0;
          local_84 = 4.0;
        }
        uVar13 = local_40._4_4_;
        uVar10 = (uint)local_40;
        if (piVar3 != (int *)0x0) {
          uVar10 = (uint)local_40 | piVar3[6];
          local_84 = dVar16 * 4.0;
          uVar11 = uVar11 | 0x100000;
          uVar13 = local_40._4_4_ | piVar3[7];
          local_28 = 1;
          local_40 = CONCAT44(uVar13,uVar10);
        }
        if (piVar4 != (int *)0x0) {
          local_28 = local_28 + 1;
          uVar11 = uVar11 | 0x200000;
          local_40 = CONCAT44(uVar13 | piVar4[7],uVar10 | piVar4[6]);
        }
        uVar10 = uVar11 | 0x22000;
        local_60 = CONCAT44(local_60._4_4_,uVar11) | 0x22000;
        local_8 = uVar10;
      }
    }
    uVar11 = local_2c;
    if ((local_a != '\0') && ((*(byte *)(local_7c + 0x20) & 8) == 0)) {
      local_24 = 2;
      uVar13 = FUN_0047f1a0(param_1,local_10,local_20,&local_24);
      local_60 = CONCAT26((short)uVar13,(undefined6)local_60);
      if (((int)local_34 < (int)(uVar13 & 0xffff)) || (uVar8 = uVar10, (uVar10 & 0x4000000) != 0)) {
        uVar8 = uVar10 | 0x800000;
        local_60 = CONCAT44(local_60._4_4_,uVar10) | 0x800000;
        local_8 = uVar8;
      }
      uVar9 = uVar8;
      if (local_78 == (uVar13 & 0xffff)) {
        uVar9 = uVar8 | 0x22000;
        local_11 = '\0';
        local_60 = CONCAT44(local_60._4_4_,uVar8) | 0x22000;
        local_8 = uVar9;
      }
      uVar10 = uVar9;
      if ((local_24 & 1) != 0) {
        uVar10 = uVar9 | 0x1000000;
        local_60 = CONCAT44(local_60._4_4_,uVar9) | 0x1000000;
        local_8 = uVar10;
      }
    }
    uVar13 = uVar10;
    if (((local_9 != '\0') &&
        (iVar7 = FUN_0047ebd0(local_68,local_1c,local_10,local_20,(int *)param_1[9],uVar11),
        iVar7 != 0)) && ((uVar10 & 0x40000) == 0)) {
      uVar13 = uVar10 | 0x40022000;
      local_12 = '\0';
      local_60 = CONCAT44(local_60._4_4_,uVar10) | 0x40022000;
      local_8 = uVar13;
    }
    cVar6 = local_13;
    if (local_18 != (int *)0x0) {
      iVar7 = local_18[9];
      uVar11 = *(uint *)(local_7c + 0x38);
      local_64 = *(uint *)(local_7c + 0x3c);
      uVar10 = uVar13;
      if (0 < iVar7) {
        puVar14 = (uint *)local_18[1];
        do {
          uVar13 = *puVar14;
          if ((int)uVar13 < 0x3f) {
            uVar10 = 1 << (uVar13 & 0x1f);
            uVar8 = 0;
            if (0x1f < uVar13) {
              uVar8 = uVar10;
            }
            uVar10 = uVar10 ^ uVar8;
            if (0x3f < uVar13) {
              uVar8 = uVar10;
            }
            uVar11 = uVar11 & ~uVar10;
            local_64 = local_64 & ~uVar8;
          }
          puVar14 = puVar14 + 1;
          iVar7 = iVar7 + -1;
          uVar10 = local_8;
          local_24 = uVar11;
        } while (iVar7 != 0);
      }
      if (uVar11 == 0 && local_64 == 0) {
        uVar13 = uVar10 | 0x400000;
        local_60 = CONCAT44(local_60._4_4_,uVar10) | 0x400000;
        local_8 = uVar13;
      }
      else {
        uVar13 = uVar10;
        cVar6 = '\x01';
      }
    }
    uVar11 = local_6c[local_2c];
    dVar16 = (double)(int)(local_70 * uVar11) +
             *(double *)(&DAT_0055ac20 + ((int)(local_70 * uVar11) >> 0x1f) * -8);
    iVar7 = local_70;
    if ((local_30 != 0) &&
       (uVar10 = *local_6c,
       (double)(int)uVar10 + *(double *)(&DAT_0055ac20 + ((int)uVar10 >> 0x1f) * -8) < dVar16 * 2.0)
       ) {
      dVar16 = (double)(uVar10 >> 1) + 0.0;
      iVar7 = (int)(dVar16 / ((double)(int)uVar11 +
                             *(double *)(&DAT_0055ac20 + ((int)uVar11 >> 0x1f) * -8)));
    }
    dVar16 = dVar16 / local_84;
    if (dVar16 < 1.0) {
      dVar16 = 1.0;
    }
    if ((((uVar13 & 0xfe7fffff) == 0x400000) && ((*(byte *)((int)local_1c + 0x16) & 4) == 0)) &&
       ((DAT_00582ad8 != 0 && ((*(byte *)(*local_68 + 0x34) & 0x40) == 0)))) {
      iVar7 = *local_6c * 3 + local_10[9];
      uVar10 = uVar13 | 0x80020000;
      dVar19 = (double)iVar7 + *(double *)(&DAT_0055ac20 + (iVar7 >> 0x1f) * -8);
      local_60 = CONCAT44(local_60._4_4_,uVar13) | 0x80020000;
LAB_0046ff9e:
      uVar12 = local_60._6_2_;
      local_8 = uVar10;
    }
    else {
      uVar11 = *local_6c;
      if ((uVar13 & 0x100f3000) == 0) {
        uVar10 = uVar13 & 0xffbfffff;
        dVar19 = (double)(int)(uVar11 << 2) +
                 *(double *)(&DAT_0055ac20 + ((int)(uVar11 << 2) >> 0x1f) * -8);
        local_60 = CONCAT44(local_60._4_4_,uVar13) & 0xffffffffffbfffff;
        if (local_18 == (int *)0x0) goto LAB_0046ff9e;
        uVar10 = uVar13 & 0xff3fffff;
        local_60 = CONCAT26((ushort)local_34,(int6)CONCAT44(local_60._4_4_,uVar13)) &
                   0xffffffffff3fffff;
        uVar12 = (ushort)local_34;
        local_8 = uVar10;
      }
      else {
        dVar15 = 1.0;
        dVar19 = 10.0;
        if (10.0 < (double)(int)uVar11 + *(double *)(&DAT_0055ac20 + ((int)uVar11 >> 0x1f) * -8)) {
          do {
            dVar19 = dVar19 * 10.0;
            dVar15 = dVar15 + 1.0;
          } while (dVar19 < (double)(int)uVar11 +
                            *(double *)(&DAT_0055ac20 + ((int)uVar11 >> 0x1f) * -8));
        }
        dVar19 = (double)iVar7;
        if ((local_18 != (int *)0x0) && (cVar6 != '\0')) {
          dVar19 = dVar19 + dVar16;
        }
        dVar19 = dVar19 * dVar15 + dVar16;
        uVar10 = uVar13;
        uVar12 = local_60._6_2_;
      }
    }
    if (local_11 != '\0') {
      dVar17 = 1.0;
      dVar15 = 10.0;
      dVar18 = ((double)(int)(local_78 - uVar12) * dVar16) / (double)(int)local_78;
      if (10.0 < dVar18) {
        do {
          dVar15 = dVar15 * 10.0;
          dVar17 = dVar17 + 1.0;
        } while (dVar15 < dVar18);
      }
      dVar19 = (double)(byte)((local_60._6_2_ == 0) + 2) * dVar17 * dVar16 + dVar19;
      uVar12 = local_60._6_2_;
    }
    if (local_12 != '\0') {
      dVar15 = 1.0;
      dVar17 = 10.0;
      if (10.0 < dVar16) {
        do {
          dVar17 = dVar17 * 10.0;
          dVar15 = dVar15 + 1.0;
        } while (dVar17 < dVar16);
      }
      dVar19 = dVar19 + dVar15 * dVar16 * 3.0;
    }
    if ((2.0 < dVar16) && (dVar19 <= *(double *)(param_1 + 0x14))) {
      uVar11 = 0;
      piVar3 = (int *)local_1c[1];
      iVar7 = *piVar3;
      if (0 < iVar7) {
        do {
          piVar3 = piVar3 + 1;
          if (*piVar3 == local_20) {
            uVar13 = 1 << (uVar11 & 0x1f);
            local_30 = 0;
            if (0x1f < uVar11) {
              local_30 = uVar13;
            }
            uVar13 = uVar13 ^ local_30;
            if (0x3f < uVar11) {
              local_30 = uVar13;
            }
            goto LAB_0047017b;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar7);
      }
      local_94 = 0;
      local_94._0_4_ = 0;
      local_30 = 0;
      uVar13 = (uint)local_94;
LAB_0047017b:
      iVar7 = local_1c[6];
      puVar5 = (ushort *)(local_1c[8] + 0x10);
      do {
        if (iVar7 == 0) break;
        if ((((puVar5[1] & 2) == 0) && ((param_1[6] & *(uint *)(puVar5 + 8)) == uVar13)) &&
           ((param_1[7] & *(uint *)(puVar5 + 10)) == local_30)) {
          uVar12 = *puVar5;
          if ((uVar12 & 0x83) == 0) {
            if ((uVar12 & 0x3c) == 0) {
              if (uVar12 != 0x800) {
                dVar16 = dVar16 * 0.5;
              }
            }
            else if (local_28 == 0) {
              dVar16 = dVar16 / 3.0;
            }
            else {
              local_28 = local_28 + -1;
            }
          }
          else if (local_2c == 0) {
            dVar16 = dVar16 / 10.0;
          }
          else {
            local_2c = local_2c - 1;
          }
        }
        iVar7 = iVar7 + -1;
        puVar5 = puVar5 + 0x14;
      } while (2.0 < dVar16);
      uVar10 = local_8;
      uVar12 = local_60._6_2_;
      if (dVar16 < 2.0) {
        dVar16 = 2.0;
      }
    }
    if (((local_18 == (int *)0x0) || (uVar10 != 0)) &&
       ((dVar19 < *(double *)(param_1 + 0x14) ||
        ((dVar19 <= *(double *)(param_1 + 0x14) &&
         ((*(ushort *)((int)param_1 + 0x3e) < uVar12 || (dVar16 < *(double *)(param_1 + 0x10))))))))
       ) {
      *(ulonglong *)(param_1 + 0xe) = local_60;
      *(double *)(param_1 + 0x10) = dVar16;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *(double *)(param_1 + 0x14) = dVar19;
      *(undefined8 *)(param_1 + 0x16) = local_40;
      param_1[0xe] = param_1[0xe] & local_74;
      param_1[0x12] = (int)local_18;
    }
    if (*(int *)(local_7c + 0x44) != 0) break;
    local_18 = (int *)local_10[5];
    local_74 = 0xffffcfff;
    local_38 = local_8c;
    local_10 = local_18;
  }
  uVar11 = local_38;
  if ((param_1[8] == 0) && ((*(uint *)(*local_68 + 0x18) & 0x10000) != 0)) {
    param_1[0xe] = param_1[0xe] | 0x1000000;
  }
  FUN_00470360(param_1);
  FUN_0046f880(param_1);
  param_1[0xe] = param_1[0xe] | uVar11;
  return;
}


/* FUN_00470300 @ 00470300  kind=gamemisc  attributed-by=none  size=91 */

void __cdecl FUN_00470300(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if ((*(byte *)(*(int *)(param_1[2] + 0x10) + 0x2a) & 0x10) != 0) {
    param_1 = (int *)0x0;
    piVar1[10] = (int)&param_1;
    FUN_004706c0(piVar1);
    if (param_1[7] != 0) {
      FUN_00466dd0(param_1[6]);
    }
    FUN_00494b00(*(int *)*piVar1,param_1);
    return;
  }
  FUN_0046f990(param_1);
  return;
}


/* FUN_00470360 @ 00470360  kind=gamemisc  attributed-by=none  size=858 */

void __cdecl FUN_00470360(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int local_208;
  undefined4 *local_204;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  double local_1c8;
  double local_1b8;
  uint local_1b0;
  uint local_1ac;
  double local_1a8;
  double local_1a0;
  undefined4 *local_198;
  int local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  undefined8 local_180;
  uint local_178;
  uint local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_160;
  undefined1 local_15c;
  undefined2 local_15a;
  undefined4 local_158;
  uint local_150;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_198 = (undefined4 *)param_1[1];
  local_194 = *(int *)(param_1[2] + 0x2c);
  piVar6 = (int *)local_198[1];
  uVar3 = 0;
  iVar1 = *piVar6;
  if (0 < iVar1) {
    do {
      piVar6 = piVar6 + 1;
      if (*piVar6 == local_194) {
        local_178 = 1 << (uVar3 & 0x1f);
        local_174 = 0;
        if (0x1f < uVar3) {
          local_174 = local_178;
        }
        local_178 = local_178 ^ local_174;
        if (0x3f < uVar3) {
          local_174 = local_178;
        }
        goto LAB_004703c7;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  local_180 = 0;
  local_180._4_4_ = 0;
  local_180._0_4_ = 0;
  local_178 = (uint)local_180;
  local_174 = local_180._4_4_;
LAB_004703c7:
  local_184 = local_198[8];
  local_190 = local_184 + local_198[6] * 0x28;
  if (((((*(byte *)(param_1[2] + 0x24) & 1) == 0) && (*(int *)(param_1[2] + 0x44) == 0)) &&
      ((*(byte *)((int)local_198 + 0x16) & 0x80) == 0)) && (local_184 < local_190)) {
    do {
      if (((*(short *)(local_184 + 0x10) == 0x100) &&
          ((~local_178 & param_1[4] & *(uint *)(local_184 + 0x20)) == 0 &&
           (~local_174 & param_1[5] & *(uint *)(local_184 + 0x24)) == 0)) &&
         (iVar1 = *(int *)(local_184 + 0xc),
         (*(uint *)(iVar1 + 0x168) & local_178) != 0 || (*(uint *)(iVar1 + 0x16c) & local_174) != 0)
         ) {
        uVar3 = *(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x18) * 0x28;
        piVar6 = param_1;
        piVar8 = &local_208;
        for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar8 = piVar8 + 1;
        }
        local_1e8 = 0;
        local_1e4 = 0;
        local_1e0 = 0;
        uVar7 = *(uint *)(iVar1 + 0x20);
        local_180 = 0;
        local_180._4_4_ = 0;
        dVar10 = 0.0;
        dVar11 = 0.0;
        local_180._0_4_ = 0;
        local_1a8 = 0.0;
        local_1a0 = 0.0;
        uVar4 = (uint)local_180;
        uVar9 = local_180._4_4_;
        local_18c = uVar3;
        if (uVar7 < uVar3) {
          local_188 = 0;
          do {
            if (*(short *)(uVar7 + 0x10) == 0x200) {
              local_204 = *(undefined4 **)(uVar7 + 0xc);
LAB_0047057c:
              FUN_00470300(&local_208);
              dVar10 = local_1b8 + local_1a8;
              uVar4 = local_188 | local_1b0;
              uVar9 = uVar9 | local_1ac;
              dVar11 = local_1c8 + local_1a0;
              uVar3 = local_18c;
              local_1a8 = dVar10;
              local_1a0 = dVar11;
              local_188 = uVar4;
              if (*(double *)(param_1 + 0x14) <= dVar10) break;
            }
            else if (*(int *)(uVar7 + 8) == local_194) {
              local_160 = local_198;
              local_170 = *local_198;
              local_16c = local_198[1];
              local_15a = 0;
              local_15c = 0x45;
              local_158 = 1;
              local_204 = &local_170;
              local_150 = uVar7;
              goto LAB_0047057c;
            }
            uVar7 = uVar7 + 0x28;
          } while (uVar7 < uVar3);
        }
        if (param_1[8] != 0) {
          dVar12 = 1.0;
          dVar13 = 10.0;
          if (10.0 < dVar11) {
            do {
              dVar13 = dVar13 * 10.0;
              dVar12 = dVar12 + 1.0;
            } while (dVar13 < dVar11);
          }
          dVar10 = dVar10 + dVar12 * dVar11;
        }
        if (dVar10 < *(double *)(param_1 + 0x14)) {
          *(double *)(param_1 + 0x14) = dVar10;
          param_1[0x16] = uVar4;
          param_1[0x17] = uVar9;
          *(double *)(param_1 + 0x10) = dVar11;
          if (param_1[0xb] == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined2 *)(param_1[0xb] * 0x58 + -0x52 + param_1[0xd]);
          }
          *(undefined2 *)((int)param_1 + 0x3e) = uVar2;
          param_1[0xe] = 0x10000000;
          param_1[0x12] = local_184;
        }
      }
      local_184 = local_184 + 0x28;
    } while (local_184 < local_190);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004706c0 @ 004706c0  kind=gamemisc  attributed-by=none  size=543 */

void __cdecl FUN_004706c0(int *param_1)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int local_c;
  
  piVar7 = (int *)*param_1;
  iVar1 = param_1[1];
  iVar6 = *(int *)(param_1[2] + 0x10);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0xe] = 0x8000000;
  piVar5 = *(int **)param_1[10];
  if (piVar5 == (int *)0x0) {
    piVar5 = FUN_0046c340(param_1);
    *(int **)param_1[10] = piVar5;
    if (piVar5 == (int *)0x0) {
      return;
    }
  }
  _Dst = (void *)piVar5[4];
  local_c = 0;
  if (0 < *piVar5) {
    iVar8 = piVar5[1] + 5;
    do {
      iVar2 = *(int *)(iVar1 + 0x20);
      *(bool *)iVar8 =
           (*(uint *)(iVar2 + 0x18 + *(int *)(iVar8 + 3) * 0x28) & param_1[4]) == 0 &&
           (*(uint *)(iVar2 + 0x1c + *(int *)(iVar8 + 3) * 0x28) & param_1[5]) == 0;
      local_c = local_c + 1;
      iVar8 = iVar8 + 0xc;
    } while (local_c < *piVar5);
  }
  memset(_Dst,0,*piVar5 << 3);
  if (piVar5[7] != 0) {
    FUN_00466dd0(piVar5[6]);
  }
  iVar8 = piVar5[2];
  piVar5[6] = 0;
  piVar5[5] = 0;
  piVar5[7] = 0;
  piVar5[8] = 0;
  piVar5[10] = -0x5d7860d2;
  piVar5[0xb] = 0x546d42ae;
  if (param_1[8] == 0) {
    piVar5[2] = 0;
  }
  iVar6 = FUN_004bfde0(piVar7,iVar6,piVar5);
  if (iVar6 == 0) {
    iVar6 = 0;
    if (0 < *piVar5) {
      piVar7 = (int *)(piVar5[1] + 8);
      do {
        if (0 < *(int *)((int)_Dst + iVar6 * 8)) {
          iVar2 = *piVar7;
          iVar3 = *(int *)(iVar1 + 0x20);
          param_1[0x16] = param_1[0x16] | *(uint *)(iVar3 + 0x18 + iVar2 * 0x28);
          param_1[0x17] = param_1[0x17] | *(uint *)(iVar3 + 0x1c + iVar2 * 0x28);
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 3;
      } while (iVar6 < *piVar5);
    }
    dVar11 = *(double *)(piVar5 + 10);
    if ((param_1[8] != 0) && (piVar5[8] == 0)) {
      dVar9 = 1.0;
      dVar10 = 10.0;
      if (10.0 < dVar11) {
        do {
          dVar10 = dVar10 * 10.0;
          dVar9 = dVar9 + 1.0;
        } while (dVar10 < dVar11);
      }
      dVar11 = dVar11 + dVar9 * dVar11;
    }
    if (dVar11 <= 5e+98) {
      *(double *)(param_1 + 0x14) = dVar11;
    }
    else {
      param_1[0x14] = -0x5d7860d2;
      param_1[0x15] = 0x546d42ae;
    }
    param_1[0x12] = (int)piVar5;
    if (piVar5[8] == 0) {
      if (param_1[0xb] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined2 *)(param_1[0xb] * 0x58 + -0x52 + param_1[0xd]);
      }
      *(undefined2 *)((int)param_1 + 0x3e) = uVar4;
    }
    else {
      param_1[0xe] = param_1[0xe] | 0x800000;
      *(short *)((int)param_1 + 0x3e) = (short)iVar8;
    }
    *(undefined2 *)(param_1 + 0xf) = 0;
    piVar5[2] = iVar8;
    FUN_00470360(param_1);
  }
  return;
}


/* FUN_00470aa0 @ 00470aa0  kind=gamemisc  attributed-by=none  size=256 */

uint __cdecl FUN_00470aa0(int param_1,undefined4 param_2,int param_3,int param_4,undefined *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(iVar1 + 0xc));
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if (((param_3 < 0) || (param_4 < 0)) || (*(int *)(param_1 + 4) < param_4 + param_3)) {
    uVar4 = 1;
    FUN_004961f0(iVar1,1,(byte *)0x0);
  }
  else if (piVar2 == (int *)0x0) {
    uVar4 = 4;
  }
  else {
    FUN_0048fbc0((undefined4 *)**(undefined4 **)(param_1 + 0x10));
    uVar4 = (*(code *)param_5)(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 8) + param_4,
                               param_3,param_2);
    FUN_004907e0(*(int **)(param_1 + 0x10));
    if (uVar4 == 4) {
      FUN_004b5e70(piVar2);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      *(uint *)(iVar1 + 0x2c) = uVar4;
      piVar2[0x16] = uVar4;
    }
  }
  if ((*(char *)(iVar1 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
    FUN_004961f0(iVar1,7,(byte *)0x0);
    *(undefined1 *)(iVar1 + 0x38) = 0;
    uVar4 = 7;
  }
  uVar3 = *(uint *)(iVar1 + 0x30);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(iVar1 + 0xc));
  }
  return uVar3 & uVar4;
}


/* FUN_00472ef0 @ 00472ef0  kind=gamemisc  attributed-by=none  size=718 */

int __cdecl
FUN_00472ef0(int *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,uint param_5,
            int param_6,undefined4 *param_7)

{
  size_t _Size;
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  char *_Src;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  byte *pbVar18;
  undefined3 extraout_var;
  byte bVar19;
  int iVar20;
  uint uVar21;
  int local_c;
  undefined4 *local_8;
  
  iVar3 = param_2[7];
  iVar4 = param_2[4];
  piVar5 = (int *)param_1[2];
  uVar21 = (uint)*(ushort *)(param_2 + 1);
  iVar12 = param_6 + uVar21;
  local_c = param_1[0x13] + 1;
  param_1[0x13] = iVar12 + param_1[0x13];
  _Src = (char *)FUN_0049db70(piVar5,iVar4);
  if (_Src == (char *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    cVar2 = *_Src;
    pcVar13 = _Src;
    while (cVar2 != '\0') {
      pcVar13 = pcVar13 + 1;
      cVar2 = *pcVar13;
    }
    _Size = ((int)pcVar13 - (int)_Src & 0x3fffffffU) + 1;
    local_8 = FUN_00494b90(*param_1,_Size);
    if ((local_8 != (undefined4 *)0x0) && (memcpy(local_8,_Src,_Size), local_8 != (undefined4 *)0x0)
       ) goto LAB_00472f92;
  }
  *(undefined1 *)(*param_1 + 0x38) = 1;
LAB_00472f92:
  param_6 = 0;
  if (uVar21 == 0) {
    *param_7 = local_8;
    return local_c;
  }
  do {
    piVar14 = FUN_00479c50(param_3,iVar3,*(int *)(*(int *)(iVar4 + 4) + param_6 * 4),param_4,param_5
                           ,(ushort)*param_2,iVar4);
    if (piVar14 == (int *)0x0) {
      *param_7 = local_8;
      return local_c;
    }
    iVar20 = param_6 + local_c;
    iVar15 = FUN_00473660(param_1,piVar14,(int)param_2,iVar20);
    iVar9 = local_c;
    if (iVar15 != iVar20) {
      if (iVar12 == 1) {
        iVar9 = iVar15;
        if ((local_c != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
          iVar15 = 0;
          piVar16 = param_1 + 0x19;
          do {
            if (piVar16[4] == local_c) {
              *(undefined1 *)(piVar16 + 2) = 1;
              goto LAB_00473080;
            }
            iVar15 = iVar15 + 1;
            piVar16 = piVar16 + 6;
          } while (iVar15 < 10);
          param_1[*(byte *)((int)param_1 + 0x13) + 7] = local_c;
          *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        }
      }
      else {
        iVar6 = piVar5[7];
        if ((iVar6 < piVar5[8]) || (iVar17 = FUN_0047de10(piVar5), iVar17 == 0)) {
          piVar5[7] = piVar5[7] + 1;
          iVar17 = piVar5[1];
          *(undefined2 *)(iVar17 + iVar6 * 0x14) = 0xf;
          *(undefined1 *)(iVar17 + 3 + iVar6 * 0x14) = 0;
          *(int *)(iVar17 + 4 + iVar6 * 0x14) = iVar15;
          *(int *)(iVar17 + 8 + iVar6 * 0x14) = iVar20;
          *(undefined4 *)(iVar17 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar17 + 0x10 + iVar6 * 0x14) = 0;
        }
      }
    }
LAB_00473080:
    local_c = iVar9;
    if ((*(byte *)(piVar14 + 4) & 0x81) == 0) {
      uVar8 = param_2[9];
      pbVar7 = *(byte **)(*piVar14 + 0xc);
      for (pbVar18 = pbVar7; (*pbVar18 == 0x9d || (*pbVar18 == 0x9c));
          pbVar18 = *(byte **)(pbVar18 + 8)) {
      }
      bVar19 = *pbVar18;
      if (bVar19 == 0x84) {
        bVar19 = pbVar18[0x23];
      }
      if (((bVar19 != 0x5e) && ((bVar19 < 0x81 || (0x83 < bVar19)))) &&
         ((iVar9 = piVar5[7], iVar9 < piVar5[8] || (iVar15 = FUN_0047de10(piVar5), iVar15 == 0)))) {
        piVar5[7] = piVar5[7] + 1;
        puVar1 = (undefined2 *)(piVar5[1] + iVar9 * 0x14);
        *puVar1 = 0x49;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 2) = param_6 + local_c;
        *(undefined4 *)(puVar1 + 4) = uVar8;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      if (local_8 != (undefined4 *)0x0) {
        cVar2 = *(char *)(param_6 + (int)local_8);
        cVar10 = FUN_00496480((char *)pbVar7);
        if (cVar10 == '\0') {
          if (cVar2 != '\0') goto LAB_0047316b;
LAB_00473171:
          *(undefined1 *)(param_6 + (int)local_8) = 0x62;
        }
        else if (cVar2 == '\0') {
LAB_0047316b:
          if ((char)(cVar10 + cVar2) == 'b') goto LAB_00473171;
        }
        else if ((cVar10 < 'c') && (cVar2 < 'c')) goto LAB_00473171;
        bVar11 = FUN_004993e0((char *)pbVar7,*(char *)(param_6 + (int)local_8));
        if (CONCAT31(extraout_var,bVar11) != 0) {
          *(undefined1 *)(param_6 + (int)local_8) = 0x62;
        }
      }
    }
    param_6 = param_6 + 1;
    if ((int)uVar21 <= param_6) {
      *param_7 = local_8;
      return local_c;
    }
  } while( true );
}


/* FUN_004731c0 @ 004731c0  kind=gamemisc  attributed-by=none  size=109 */

void __cdecl FUN_004731c0(int param_1,int param_2,size_t param_3,int *param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (param_4 != (int *)0x0) {
    for (; (0 < (int)param_3 && ((char)*param_4 == 'b')); param_4 = (int *)((int)param_4 + 1)) {
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
    }
    for (; (1 < (int)param_3 && (*(char *)((int)param_4 + (param_3 - 1)) == 'b'));
        param_3 = param_3 - 1) {
    }
    if (0 < (int)param_3) {
      FUN_004ae830(piVar1,0x1e,param_2,param_3);
      FUN_004aecc0(piVar1,-1,param_4,param_3);
      FUN_00496d90(param_1,param_2,param_3);
    }
  }
  return;
}


/* FUN_00473660 @ 00473660  kind=gamemisc  attributed-by=none  size=302 */

int __cdecl FUN_00473660(int *param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar1 = (char *)*param_2;
  piVar2 = (int *)param_1[2];
  if (*pcVar1 == 'L') {
    param_4 = FUN_00497780(param_1,*(byte **)(pcVar1 + 0xc),param_4);
  }
  else if (*pcVar1 == 'I') {
    FUN_004ae830(piVar2,10,0,param_4);
  }
  else {
    iVar5 = FUN_004997b0(param_1,pcVar1,(int *)0x0);
    uVar3 = *(undefined4 *)(pcVar1 + 0x18);
    FUN_004ae830(piVar2,0x48,uVar3,0);
    if (*(int *)(param_3 + 0x40) == 0) {
      iVar6 = FUN_004b6b80(piVar2);
      *(int *)(param_3 + 0x28) = iVar6;
    }
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
    puVar4 = *(undefined4 **)(param_3 + 0x44);
    iVar6 = *param_1;
    puVar7 = FUN_00494cf0(iVar6,puVar4,*(int *)(param_3 + 0x40) << 3);
    if (puVar7 == (undefined4 *)0x0) {
      FUN_00494b00(iVar6,puVar4);
    }
    *(undefined4 **)(param_3 + 0x44) = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      *(undefined4 *)(param_3 + 0x40) = 0;
    }
    else {
      iVar6 = *(int *)(param_3 + 0x40);
      puVar7[iVar6 * 2 + -2] = uVar3;
      if (iVar5 == 1) {
        iVar5 = FUN_004ae830(piVar2,0x41,uVar3,param_4);
      }
      else {
        iVar5 = FUN_004ae890(piVar2,0x1d,uVar3,0,param_4);
      }
      puVar7[iVar6 * 2 + -1] = iVar5;
      FUN_004ae7d0(piVar2,0x49,param_4);
    }
  }
  FUN_00476c10(param_3,param_2);
  return param_4;
}


/* FUN_004738d0 @ 004738d0  kind=gamemisc  attributed-by=none  size=4528 */

undefined8 __cdecl
FUN_004738d0(undefined4 *param_1,int param_2,ushort param_3,uint param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  undefined1 uVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  byte *pbVar12;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar13;
  uint *puVar14;
  char *pcVar15;
  int iVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *puVar19;
  int *piVar20;
  int iVar21;
  byte *pbVar22;
  uint *puVar23;
  int *piVar24;
  int iVar25;
  uint local_64;
  uint uStack_60;
  byte *local_58;
  uint *local_54;
  int *local_50;
  byte *local_4c;
  uint local_48;
  byte *local_44;
  uint local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  byte *local_30;
  int *local_2c;
  byte *local_28;
  int *local_24;
  int local_20;
  byte *local_1c;
  uint local_18;
  int *local_14;
  undefined4 *local_10;
  uint *local_c;
  uint local_8;
  
  local_10 = (undefined4 *)param_1[8];
  piVar20 = (int *)*param_1;
  puVar23 = param_1 + param_2 * 0x16 + 0xe;
  piVar10 = (int *)piVar20[2];
  local_20 = 0;
  iVar25 = param_1[1] + (uint)(byte)puVar23[0xd] * 0x48;
  local_2c = (int *)(iVar25 + 8);
  local_8 = *(uint *)(iVar25 + 0x34);
  local_18 = *puVar23 >> 0x18 & 1;
  if (((*puVar23 & 0x400000) == 0) || (local_54 = (uint *)0x1, (param_3 & 0x20) != 0)) {
    local_54 = (uint *)0x0;
  }
  local_3c = piVar20;
  local_14 = piVar10;
  local_c = puVar23;
  local_28 = (byte *)FUN_004b6b80(piVar10);
  puVar23[10] = (uint)local_28;
  puVar23[9] = (uint)local_28;
  local_48 = FUN_004b6b80(piVar10);
  puVar23[0xb] = local_48;
  if (((char)puVar23[0xd] != '\0') && ((*(byte *)(local_2c + 8) & 8) != 0)) {
    uVar8 = piVar20[0x13] + 1;
    piVar20[0x13] = uVar8;
    puVar23[6] = uVar8;
    FUN_004ae830(piVar10,7,0,uVar8);
  }
  piVar18 = local_14;
  if ((*(byte *)(local_2c + 9) & 4) == 0) {
    uVar8 = *puVar23;
    if ((uVar8 & 0x8000000) == 0) {
      if ((uVar8 & 0x1000) == 0) {
        if ((uVar8 & 0x2000) == 0) {
          if ((uVar8 & 0x30000) == 0) {
            if ((uVar8 & 0x10000000) != 0) {
              local_18 = piVar20[0x12];
              piVar20[0x13] = piVar20[0x13] + 1;
              piVar20[0x12] = local_18 + 1;
              local_40 = piVar20[0x13];
              local_34 = (int *)0x0;
              local_1c = (byte *)0x0;
              local_4c = (byte *)0x0;
              local_58 = (byte *)FUN_004b6b80(piVar10);
              piVar18 = (int *)puVar23[4];
              local_38 = (int *)piVar18[3];
              local_28 = (byte *)0x0;
              *(undefined1 *)((int)puVar23 + 0x35) = 3;
              puVar23[0xe] = local_40;
              local_30 = (byte *)0x0;
              if ((int)param_1[7] < 2) {
                local_24 = (int *)param_1[1];
                puVar14 = local_54;
              }
              else {
                local_54 = (uint *)((param_1[7] - param_2) + -1);
                local_24 = FUN_00494b90(*piVar20,(int)local_54 * 0x48 + 0x50);
                if (local_24 == (int *)0x0) {
                  return CONCAT44(param_5,param_4);
                }
                sVar7 = (short)local_54 + 1;
                *(short *)((int)local_24 + 2) = sVar7;
                *(short *)local_24 = sVar7;
                piVar10 = local_2c;
                piVar11 = local_24 + 2;
                for (iVar25 = 0x12; iVar25 != 0; iVar25 = iVar25 + -1) {
                  *piVar11 = *piVar10;
                  piVar10 = piVar10 + 1;
                  piVar11 = piVar11 + 1;
                }
                local_50 = (int *)(param_1[1] + 8);
                puVar23 = local_c;
                piVar10 = local_14;
                puVar14 = local_54;
                if (0 < (int)local_54) {
                  puVar14 = local_c + 0x23;
                  piVar11 = local_24 + 0x14;
                  do {
                    uVar8 = *puVar14;
                    puVar14 = puVar14 + 0x16;
                    piVar20 = local_50 + (uint)(byte)uVar8 * 0x12;
                    piVar24 = piVar11;
                    for (iVar25 = 0x12; iVar25 != 0; iVar25 = iVar25 + -1) {
                      *piVar24 = *piVar20;
                      piVar20 = piVar20 + 1;
                      piVar24 = piVar24 + 1;
                    }
                    local_54 = (uint *)((int)local_54 + -1);
                    piVar11 = piVar11 + 0x12;
                    piVar20 = local_3c;
                  } while (local_54 != (uint *)0x0);
                }
              }
              local_54 = puVar14;
              uVar3 = param_3 & 8;
              param_3 = param_3 & 8;
              if (uVar3 == 0) {
                local_1c = (byte *)(piVar20[0x13] + 1);
                local_4c = (byte *)(piVar20[0x13] + 2);
                piVar20[0x13] = (int)local_4c;
                FUN_004ae830(piVar10,10,0,local_1c);
              }
              uVar8 = FUN_004ae830(piVar10,7,0,local_40);
              pbVar22 = (byte *)0x0;
              pbVar12 = local_28;
              if (1 < (int)local_10[6]) {
                local_54 = (uint *)0x0;
                if ((int)local_10[6] < 1) {
                  pbVar22 = (byte *)0x0;
                }
                else {
                  local_50 = (int *)0x0;
                  pbVar22 = (byte *)0x0;
                  do {
                    iVar25 = local_10[8];
                    local_44 = *(byte **)((int)local_50 + iVar25);
                    if ((((local_44[2] & 1) == 0) &&
                        ((*(byte *)((int)local_50 + iVar25 + 0x12) & 0x12) == 0)) &&
                       ((*(ushort *)((int)local_50 + iVar25 + 0x10) & 0xfff) != 0)) {
                      pcVar15 = (char *)FUN_00478bb0(*piVar20,(undefined4 *)local_44,0,(int *)0x0);
                      pbVar22 = (byte *)FUN_004966d0(*piVar20,(char *)pbVar22,pcVar15);
                    }
                    puVar23 = local_c;
                    piVar10 = local_14;
                    local_54 = (uint *)((int)local_54 + 1);
                    local_50 = local_50 + 10;
                  } while ((int)local_54 < (int)local_10[6]);
                  pbVar12 = pbVar22;
                  if (pbVar22 != (byte *)0x0) {
                    local_28 = pbVar22;
                    local_44 = (byte *)FUN_00494b90(*piVar20,0x2c);
                    if (local_44 != (byte *)0x0) {
                      memset(local_44,0,0x2c);
                      *local_44 = 0x45;
                      local_44[0x1e] = 0xff;
                      local_44[0x1f] = 0xff;
                      local_44[0x14] = 1;
                      local_44[0x15] = 0;
                      local_44[0x16] = 0;
                      local_44[0x17] = 0;
                    }
                    FUN_00496a30(*piVar20,(int)local_44,(undefined4 *)0x0,(undefined4 *)local_28);
                    pbVar22 = local_44;
                    pbVar12 = local_44;
                    if ((local_44 != (byte *)0x0) &&
                       (pbVar12 = local_44, *(int *)(*piVar20 + 0x5c) < *(int *)(local_44 + 0x14)))
                    {
                      FUN_004962b0(piVar20,(byte *)"Expression tree is too large (maximum depth %d)"
                                  );
                      pbVar22 = local_44;
                      pbVar12 = local_44;
                    }
                  }
                }
              }
              local_28 = pbVar12;
              local_3c = (int *)0x0;
              if (0 < local_38[6]) {
                do {
                  piVar10 = local_14;
                  iVar25 = local_38[8];
                  if ((*(uint *)(iVar25 + 8 + (int)local_3c * 0x28) == local_8) ||
                     (puVar23 = local_c, *(short *)(iVar25 + 0x10 + (int)local_3c * 0x28) == 0x200))
                  {
                    pbVar12 = *(byte **)(iVar25 + (int)local_3c * 0x28);
                    if (pbVar22 != (byte *)0x0) {
                      *(byte **)(pbVar22 + 8) = pbVar12;
                      pbVar12 = pbVar22;
                    }
                    local_54 = FUN_004bb240(piVar20,(short *)local_24,pbVar12,(undefined2 *)0x0,
                                            (int *)0x0,0xf0,local_18);
                    if (local_54 != (uint *)0x0) {
                      FUN_004778d0(piVar20,(int)local_24,local_54 + 0xe,param_2,
                                   (uint)(byte)puVar23[0xd],0);
                      if (param_3 == 0) {
                        piVar11 = local_3c;
                        if (local_3c == (int *)(local_38[6] + -1)) {
                          piVar11 = (int *)0xffffffff;
                        }
                        iVar25 = FUN_004970c0(piVar20,(int *)local_2c[4],-1,local_8,(int)local_4c,
                                              '\0');
                        FUN_004ae960(piVar10,0x72,local_1c,piVar10[7] + 2,iVar25,piVar11);
                        puVar23 = local_c;
                      }
                      FUN_004ae830(piVar10,2,local_40,local_58);
                      if (*(byte *)((int)local_54 + 0xd) != 0) {
                        local_30 = (byte *)0x1;
                      }
                      if ((((local_54[0xe] & 0xf0000) == 0) || ((local_54[0xe] & 0x20000000) != 0))
                         || ((local_3c != (int *)0x0 && ((int *)local_54[0x12] != local_34)))) {
                        local_34 = (int *)0x0;
                      }
                      else {
                        local_34 = (int *)local_54[0x12];
                      }
                      FUN_004bbe40((int *)local_54);
                    }
                  }
                  local_3c = (int *)((int)local_3c + 1);
                  pbVar22 = local_28;
                } while ((int)local_3c < local_38[6]);
              }
              puVar23[0x10] = (uint)local_34;
              if (local_34 != (int *)0x0) {
                puVar23[8] = local_18;
              }
              if (local_28 != (byte *)0x0) {
                local_28[8] = 0;
                local_28[9] = 0;
                local_28[10] = 0;
                local_28[0xb] = 0;
                FUN_00498790(*piVar20,(undefined4 *)local_28);
              }
              if (uVar8 < (uint)piVar10[7]) {
                *(int *)(piVar10[1] + 4 + uVar8 * 0x14) = piVar10[7];
              }
              FUN_004ae830(piVar10,1,0,puVar23[9]);
              if (piVar10[10] != 0) {
                *(int *)(piVar10[10] - ((int)local_58 * 4 + 4)) = piVar10[7];
              }
              if (1 < (int)param_1[7]) {
                FUN_00494b00(*piVar20,local_24);
              }
              uVar8 = local_8;
              if (local_30 == (byte *)0x0) {
                FUN_00476c10((int)puVar23,piVar18);
                uVar8 = local_8;
              }
              goto LAB_004743ea;
            }
            *(undefined *)((int)puVar23 + 0x35) = (&DAT_00569fa4)[local_18];
            puVar23[0xe] = local_8;
            iVar25 = FUN_004ae830(piVar10,(&DAT_0056a01c)[local_18],local_8,local_28);
            puVar23[0xf] = iVar25 + 1;
          }
          else {
            pbVar22 = (byte *)(uint)(ushort)puVar23[1];
            local_30 = (byte *)puVar23[4];
            local_2c = (int *)puVar23[8];
            local_4c = (byte *)0x0;
            local_28 = (byte *)0x0;
            local_1c = (byte *)0x0;
            local_44 = (byte *)0x0;
            if (pbVar22 == *(byte **)((int)local_30 + 0x24)) {
              local_3c = (int *)0xffffffff;
            }
            else {
              local_3c = *(int **)(*(int *)((int)local_30 + 4) + (int)pbVar22 * 4);
            }
            if ((((param_3 & 1) != 0) && ((uVar8 & 0x800000) != 0)) &&
               ((int)pbVar22 < *(int *)((int)local_30 + 0x24))) {
              local_4c = (byte *)0x1;
              local_44 = (byte *)0x1;
            }
            pbVar12 = local_44;
            if ((uVar8 & 0x100000) != 0) {
              local_1c = (byte *)FUN_00479c50(local_10,local_8,(int)local_3c,param_4,param_5,0x18,
                                              (int)local_30);
              pbVar12 = (byte *)1;
            }
            if ((*puVar23 & 0x200000) != 0) {
              local_28 = (byte *)FUN_00479c50(local_10,local_8,(int)local_3c,param_4,param_5,0x24,
                                              (int)local_30);
              pbVar12 = (byte *)0x1;
            }
            local_24 = (int *)FUN_00472ef0(piVar20,puVar23,local_10,param_4,param_5,(int)pbVar12,
                                           &local_34);
            local_38 = FUN_00494db0(*piVar20,(char *)local_34);
            pbVar12 = local_1c;
            local_3c = (int *)puVar23[10];
            local_58 = *(byte **)((int)local_30 + 0x24);
            if ((((int)pbVar22 < (int)local_58) &&
                (local_18 == (pbVar22[*(int *)((int)local_30 + 0x1c)] == 0))) ||
               ((local_18 != 0 && (local_58 == pbVar22)))) {
              local_1c = local_28;
              local_28 = pbVar12;
            }
            if ((local_28 == (byte *)0x0) || (local_44 = (byte *)0x0, (local_28[0x10] & 0x28) != 0))
            {
              local_44 = (byte *)0x1;
            }
            if ((local_1c == (byte *)0x0) || (local_50 = (int *)0x0, (local_1c[0x10] & 0x28) != 0))
            {
              local_50 = (int *)0x1;
            }
            if ((local_28 != (byte *)0x0) || (local_40 = 0, pbVar22 != (byte *)0x0)) {
              local_40 = 1;
            }
            if (local_28 == (byte *)0x0) {
              local_30 = pbVar22;
              if (local_4c != (byte *)0x0) {
                FUN_004ae830(piVar18,10,0,pbVar22 + (int)local_24);
                local_44 = (byte *)0x0;
                local_40 = 1;
                goto LAB_004741e9;
              }
            }
            else {
              pbVar12 = (byte *)((int)local_24 + (int)pbVar22);
              local_30 = *(byte **)(*(int *)local_28 + 0xc);
              FUN_00496f30(piVar20,local_30,(int)pbVar12);
              FUN_004975c0(piVar18,local_30,pbVar12,local_3c);
              puVar23 = local_c;
              if (local_34 != (int *)0x0) {
                pbVar12 = pbVar22 + (int)local_34;
                iVar25 = FUN_00493750((char *)local_30,*pbVar12);
                if ((char)iVar25 == 'b') {
                  *pbVar12 = 0x62;
                }
                bVar6 = FUN_004993e0((char *)local_30,*pbVar12);
                puVar23 = local_c;
                if (CONCAT31(extraout_var,bVar6) != 0) {
                  *pbVar12 = 0x62;
                }
              }
LAB_004741e9:
              local_30 = pbVar22 + 1;
            }
            FUN_004731c0((int)piVar20,(int)local_24,(size_t)local_30,local_34);
            FUN_004ae960(piVar18,(&UNK_00569bdc)[((int)local_44 + local_40 * 2) * 2 + local_18],
                         local_2c,local_3c,local_24,(int *)local_30);
            local_4c = pbVar22;
            if (local_1c != (byte *)0x0) {
              pbVar12 = (byte *)((int)local_24 + (int)pbVar22);
              local_30 = *(byte **)(*(int *)local_1c + 0xc);
              FUN_00496d90((int)piVar20,(int)pbVar12,1);
              FUN_00496f30(piVar20,local_30,(int)pbVar12);
              FUN_004975c0(piVar18,local_30,pbVar12,local_3c);
              if (local_38 != (int *)0x0) {
                pbVar12 = (byte *)((int)local_38 + (int)pbVar22);
                iVar25 = FUN_00493750((char *)local_30,*pbVar12);
                if ((char)iVar25 == 'b') {
                  *pbVar12 = 0x62;
                }
                bVar6 = FUN_004993e0((char *)local_30,*pbVar12);
                if (CONCAT31(extraout_var_00,bVar6) != 0) {
                  *pbVar12 = 0x62;
                }
              }
              local_4c = pbVar22 + 1;
              FUN_004731c0((int)piVar20,(int)local_24,(size_t)local_4c,local_38);
              puVar23 = local_c;
            }
            FUN_00494b00(*piVar20,local_34);
            FUN_00494b00(*piVar20,local_38);
            puVar23[0xf] = piVar18[7];
            if ((local_1c == (byte *)0x0) && (pbVar22 == (byte *)0x0)) {
              iVar25 = 0;
            }
            else {
              iVar25 = 1;
            }
            if ((&DAT_00569be4)[(local_18 + 1) * iVar25] != -0x6b) {
              FUN_004ae960(piVar18,(&DAT_00569be4)[(local_18 + 1) * iVar25],local_2c,local_3c,
                           local_24,(int *)local_4c);
              FUN_004aee30((int)piVar18,local_50 != (int *)local_18);
            }
            local_50 = (int *)FUN_0049cb40((int)piVar20);
            if ((*puVar23 & 0x300000) != 0) {
              FUN_004ae890(piVar18,0x1d,local_2c,pbVar22,local_50);
              FUN_004ae830(piVar18,0x49,local_50,local_48);
            }
            FUN_004a68f0((int)piVar20,(int)local_50);
            FUN_00476c10((int)puVar23,(int *)local_28);
            FUN_00476c10((int)puVar23,(int *)local_1c);
            if (local_54 == (uint *)0x0) {
              local_20 = FUN_0049cb40((int)piVar20);
              FUN_004ae830(piVar18,99,local_2c,local_20);
              FUN_00496df0(piVar20,local_8,-1,local_20);
              FUN_004ae830(piVar18,0x32,extraout_EDX_00,local_20);
            }
            if ((*puVar23 & 0x2000000) == 0) {
              uVar5 = 0x5f;
              if (local_18 != 0) {
                uVar5 = 0x5c;
              }
              *(undefined1 *)((int)puVar23 + 0x35) = uVar5;
            }
            else {
              *(undefined1 *)((int)puVar23 + 0x35) = 0x95;
            }
            puVar23[0xe] = (uint)local_2c;
            uVar8 = local_8;
            piVar10 = piVar18;
            if (-1 < (int)*puVar23) goto LAB_004743ea;
          }
          *(undefined1 *)((int)puVar23 + 0x36) = 1;
          uVar8 = local_8;
        }
        else {
          local_3c = (int *)0x95;
          local_44 = (byte *)0x0;
          piVar11 = FUN_00479c50(local_10,local_8,-1,param_4,param_5,0x24,0);
          local_24 = FUN_00479c50(local_10,local_8,-1,param_4,param_5,0x18,0);
          piVar18 = piVar11;
          if (local_18 != 0) {
            piVar18 = local_24;
            local_24 = piVar11;
          }
          if (piVar18 == (int *)0x0) {
            uVar5 = 0x48;
            if (local_18 != 0) {
              uVar5 = 0x43;
            }
            FUN_004ae830(piVar10,uVar5,local_8,local_28);
          }
          else {
            pbVar22 = (byte *)*piVar18;
            local_2c = (int *)0x302e2f31;
            iVar25 = FUN_00498470((int)piVar20,*(undefined4 *)(pbVar22 + 0xc),(int *)&local_58);
            piVar10 = local_14;
            FUN_004ae890(local_14,(&stack0xffffff87)[*pbVar22],local_8,local_28,iVar25);
            FUN_00496d90((int)piVar20,iVar25,1);
            FUN_004a68f0((int)piVar20,(int)local_58);
            puVar23 = local_c;
            FUN_00476c10((int)local_c,piVar18);
          }
          if (local_24 != (int *)0x0) {
            pcVar15 = (char *)*local_24;
            piVar20[0x13] = piVar20[0x13] + 1;
            local_44 = (byte *)piVar20[0x13];
            FUN_00496f30(piVar20,*(byte **)(pcVar15 + 0xc),(int)local_44);
            puVar23 = local_c;
            cVar1 = *pcVar15;
            if ((cVar1 == 'O') || (cVar1 == 'M')) {
              local_3c = (int *)((uint)(local_18 == 0) * 2 + 0x4e);
            }
            else {
              local_3c = (int *)((uint)(local_18 != 0) * 2 + 0x4d);
            }
            FUN_00476c10((int)local_c,local_24);
          }
          piVar11 = local_3c;
          uVar8 = piVar10[7];
          local_58 = (byte *)0x5c;
          uVar5 = 0x5f;
          if (local_18 != 0) {
            uVar5 = 0x5c;
          }
          *(undefined1 *)((int)puVar23 + 0x35) = uVar5;
          puVar23[0xe] = local_8;
          puVar23[0xf] = uVar8;
          if ((piVar18 == (int *)0x0) && (local_24 == (int *)0x0)) {
            *(undefined1 *)((int)puVar23 + 0x36) = 1;
          }
          uVar8 = local_8;
          if (local_3c != (int *)0x95) {
            local_20 = FUN_0049cb40((int)piVar20);
            FUN_004ae830(piVar10,0x41,local_8,local_20);
            FUN_00496df0(piVar20,local_8,-1,local_20);
            FUN_004ae890(piVar10,(char)piVar11,local_44,local_28,extraout_EDX);
            uVar8 = local_8;
            if (piVar10[1] != 0) {
              *(undefined1 *)(piVar10[1] + -0x11 + piVar10[7] * 0x14) = 0x6b;
            }
          }
        }
      }
      else {
        if (*(char *)((int)piVar20 + 0x13) == '\0') {
          piVar20[0x13] = piVar20[0x13] + 1;
          iVar25 = piVar20[0x13];
        }
        else {
          bVar4 = *(char *)((int)piVar20 + 0x13) - 1;
          *(byte *)((int)piVar20 + 0x13) = bVar4;
          iVar25 = piVar20[bVar4 + 7];
        }
        local_20 = iVar25;
        piVar10 = FUN_00479c50(local_10,local_8,-1,param_4,param_5,3,0);
        iVar25 = FUN_00473660(piVar20,piVar10,(int)puVar23,iVar25);
        uVar2 = puVar23[10];
        FUN_004ae830(local_14,0x15,iVar25,uVar2);
        uVar8 = local_8;
        FUN_004ae890(local_14,0x36,local_8,uVar2,iVar25);
        FUN_00496df0(piVar20,uVar8,-1,iVar25);
        *(undefined1 *)((int)local_c + 0x35) = 0x95;
        piVar10 = local_14;
      }
    }
    else {
      local_34 = (int *)puVar23[4];
      iVar16 = *local_34;
      pbVar22 = (byte *)local_34[4];
      local_44 = (byte *)local_34[1];
      piVar20[0x17] = piVar20[0x17] + 1;
      local_40 = iVar16 + 2;
      iVar25 = piVar20[0x10];
      if (piVar20[0xf] < (int)local_40) {
        iVar25 = piVar20[0x13] + 1;
        piVar20[0x13] = piVar20[0x13] + local_40;
      }
      else {
        piVar20[0xf] = piVar20[0xf] - local_40;
        piVar20[0x10] = iVar25 + local_40;
      }
      local_18 = 1;
      local_1c = pbVar22;
      if (0 < iVar16) {
        do {
          iVar21 = 0;
          if (0 < iVar16) {
            do {
              if (*(uint *)(pbVar22 + iVar21 * 8) == local_18) {
                local_38 = (int *)(iVar25 + local_18 + 1);
                pbVar22 = *(byte **)(*(int *)(local_10[8] +
                                             *(int *)((int)local_44 + 8 + iVar21 * 0xc) * 0x28) +
                                    0xc);
                if ((pbVar22 == (byte *)0x0) || (*pbVar22 != 0x84)) {
                  local_50 = (int *)FUN_00497780(piVar20,pbVar22,(int)local_38);
                  pbVar22 = local_1c;
                  if (((local_50 == local_38) ||
                      (local_58 = (byte *)piVar20[2], local_58 == (byte *)0x0)) ||
                     ((local_54 = *(uint **)(local_58 + 0x1c),
                      *(int *)(local_58 + 0x20) <= (int)local_54 &&
                      (iVar9 = FUN_0047de10((int *)local_58), pbVar22 = local_1c, iVar9 != 0))))
                  break;
                  *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
                  iVar9 = *(int *)(local_58 + 4);
                  *(int **)(iVar9 + 4 + (int)local_54 * 0x14) = local_50;
                  *(undefined2 *)(iVar9 + (int)local_54 * 0x14) = 0xf;
                }
                else {
                  local_50 = *(int **)(pbVar22 + 0x18);
                  local_58 = (byte *)piVar20[2];
                  local_54 = *(uint **)(local_58 + 0x1c);
                  if ((*(int *)(local_58 + 0x20) <= (int)local_54) &&
                     (iVar9 = FUN_0047de10((int *)local_58), pbVar22 = local_1c, iVar9 != 0)) break;
                  *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
                  iVar9 = *(int *)(local_58 + 4);
                  *(int **)(iVar9 + 4 + (int)local_54 * 0x14) = local_50;
                  *(undefined2 *)(iVar9 + (int)local_54 * 0x14) = 0xe;
                  piVar20 = local_3c;
                }
                *(undefined4 *)(iVar9 + 0x10 + (int)local_54 * 0x14) = 0;
                *(undefined4 *)(iVar9 + 0xc + (int)local_54 * 0x14) = 0;
                *(int **)(iVar9 + 8 + (int)local_54 * 0x14) = local_38;
                *(undefined1 *)(iVar9 + 3 + (int)local_54 * 0x14) = 0;
                pbVar22 = local_1c;
                break;
              }
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar16);
          }
        } while ((iVar21 != iVar16) && (local_18 = local_18 + 1, (int)local_18 <= iVar16));
      }
      piVar10 = local_14;
      local_54 = (uint *)local_34[5];
      local_58 = (byte *)local_14[7];
      if (((int)local_58 < local_14[8]) || (iVar21 = FUN_0047de10(local_14), iVar21 == 0)) {
        piVar10[7] = piVar10[7] + 1;
        iVar21 = piVar10[1];
        *(uint **)(iVar21 + 4 + (int)local_58 * 0x14) = local_54;
        *(undefined2 *)(iVar21 + (int)local_58 * 0x14) = 7;
        *(undefined1 *)(iVar21 + 3 + (int)local_58 * 0x14) = 0;
        *(int *)(iVar21 + 8 + (int)local_58 * 0x14) = iVar25;
        *(undefined4 *)(iVar21 + 0xc + (int)local_58 * 0x14) = 0;
        *(undefined4 *)(iVar21 + 0x10 + (int)local_58 * 0x14) = 0;
      }
      local_58 = (byte *)piVar10[7];
      if (((int)local_58 < piVar10[8]) || (iVar21 = FUN_0047de10(piVar10), iVar21 == 0)) {
        piVar10[7] = piVar10[7] + 1;
        iVar21 = piVar10[1];
        *(undefined2 *)(iVar21 + (int)local_58 * 0x14) = 7;
        iVar21 = iVar21 + (int)local_58 * 0x14;
        *(uint *)(iVar21 + 4) = local_18 - 1;
        *(undefined1 *)(iVar21 + 3) = 0;
        *(int *)(iVar21 + 8) = iVar25 + 1;
        *(undefined4 *)(iVar21 + 0xc) = 0;
        *(undefined4 *)(iVar21 + 0x10) = 0;
      }
      local_54 = (uint *)0xfffffffe;
      if (local_34[7] != 0) {
        local_54 = (uint *)0xfffffff5;
      }
      local_58 = (byte *)piVar10[7];
      local_50 = (int *)local_34[6];
      if (((int)local_58 < piVar10[8]) || (iVar21 = FUN_0047de10(piVar10), iVar21 == 0)) {
        iVar21 = piVar10[1];
        piVar10[7] = piVar10[7] + 1;
        *(uint *)(iVar21 + 4 + (int)local_58 * 0x14) = local_8;
        *(byte **)(iVar21 + 8 + (int)local_58 * 0x14) = local_28;
        *(int *)(iVar21 + 0xc + (int)local_58 * 0x14) = iVar25;
        *(undefined2 *)(iVar21 + (int)local_58 * 0x14) = 0x88;
        *(undefined1 *)(iVar21 + 3 + (int)local_58 * 0x14) = 0;
        *(undefined4 *)(iVar21 + 0x10 + (int)local_58 * 0x14) = 0;
        pbVar22 = local_58;
        piVar20 = local_3c;
      }
      else {
        pbVar22 = (byte *)0x1;
      }
      FUN_004aecc0(piVar10,(int)pbVar22,local_50,(size_t)local_54);
      puVar23 = local_c;
      local_34[7] = 0;
      if (0 < iVar16) {
        local_44 = (byte *)((int)local_44 + 8);
        pbVar22 = local_1c + 4;
        do {
          if (*pbVar22 != 0) {
            FUN_00476c10((int)puVar23,(int *)(local_10[8] + *(int *)local_44 * 0x28));
          }
          local_44 = (byte *)((int)local_44 + 0xc);
          pbVar22 = pbVar22 + 8;
          iVar16 = iVar16 + -1;
          piVar20 = local_3c;
        } while (iVar16 != 0);
      }
      local_c[0xe] = local_8;
      *(undefined1 *)((int)local_c + 0x35) = 0x8a;
      local_c[0xf] = local_14[7];
      piVar10 = piVar20 + 0x1d;
      iVar16 = 10;
      do {
        iVar21 = *piVar10;
        if ((iVar25 <= iVar21) && (iVar21 <= (int)(iVar25 + (local_40 - 1)))) {
          if ((char)piVar10[-2] != '\0') {
            if (*(byte *)((int)piVar20 + 0x13) < 8) {
              piVar20[*(byte *)((int)piVar20 + 0x13) + 7] = iVar21;
              *(char *)((int)piVar20 + 0x13) = *(char *)((int)piVar20 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar10 + -2) = 0;
          }
          *piVar10 = 0;
        }
        piVar10 = piVar10 + 6;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      if (piVar20[0xf] < (int)local_40) {
        piVar20[0xf] = local_40;
        piVar20[0x10] = iVar25;
      }
      piVar20[0x17] = piVar20[0x17] + -1;
      piVar18 = piVar20 + 0x1d;
      iVar25 = 10;
      do {
        if ((*piVar18 != 0) && (piVar20[0x17] < piVar18[-1])) {
          if ((char)piVar18[-2] != '\0') {
            if (*(byte *)((int)piVar20 + 0x13) < 8) {
              piVar20[*(byte *)((int)piVar20 + 0x13) + 7] = *piVar18;
              *(char *)((int)piVar20 + 0x13) = *(char *)((int)piVar20 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar18 + -2) = 0;
          }
          *piVar18 = 0;
        }
        piVar18 = piVar18 + 6;
        iVar25 = iVar25 + -1;
        uVar8 = local_8;
        piVar10 = local_14;
      } while (iVar25 != 0);
    }
  }
  else {
    iVar25 = local_2c[7];
    FUN_004ae830(piVar10,7,local_2c[6] + -1,iVar25);
    uVar8 = FUN_004ae7d0(piVar10,4,iVar25);
    local_c[0xf] = uVar8;
    FUN_004ae830(piVar10,0x1b,iVar25 + 1,local_28);
    *(undefined1 *)((int)local_c + 0x35) = 1;
    uVar8 = local_8;
  }
LAB_004743ea:
  puVar14 = local_c;
  puVar23 = (uint *)local_10[1];
  uVar13 = 0;
  uVar2 = *puVar23;
  if (0 < (int)uVar2) {
    do {
      puVar23 = puVar23 + 1;
      if (*puVar23 == uVar8) {
        local_64 = 1 << (uVar13 & 0x1f);
        uStack_60 = 0;
        if (0x1f < uVar13) {
          uStack_60 = local_64;
        }
        local_64 = local_64 ^ uStack_60;
        if (0x3f < uVar13) {
          uStack_60 = local_64;
        }
        goto LAB_0047441e;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar2);
  }
  uStack_60 = 0;
  local_64 = 0;
LAB_0047441e:
  uVar8 = param_4 & ~local_64;
  local_44 = (byte *)(param_5 & ~uStack_60);
  puVar17 = (undefined4 *)local_10[8];
  for (local_58 = (byte *)local_10[6]; 0 < (int)local_58; local_58 = local_58 + -1) {
    if ((*(byte *)((int)puVar17 + 0x12) & 6) == 0) {
      if ((puVar17[8] & uVar8) == 0 && (puVar17[9] & (uint)local_44) == 0) {
        if ((puVar14[6] == 0) || ((((char *)*puVar17)[2] & 1U) != 0)) {
          FUN_004988a0(piVar20,(char *)*puVar17,local_48,8);
          *(byte *)((int)puVar17 + 0x12) = *(byte *)((int)puVar17 + 0x12) | 4;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 1;
      }
    }
    puVar17 = puVar17 + 10;
    piVar10 = local_14;
  }
  uVar2 = local_c[6];
  if (uVar2 == 0) goto LAB_00474a36;
  local_c[0xc] = piVar10[7];
  iVar25 = piVar10[7];
  iVar16 = piVar10[8];
  if (iVar25 < iVar16) {
LAB_004749b7:
    iVar16 = piVar10[1];
    piVar10[7] = piVar10[7] + 1;
    *(undefined2 *)(iVar16 + iVar25 * 0x14) = 7;
    *(undefined1 *)(iVar16 + 3 + iVar25 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 4 + iVar25 * 0x14) = 1;
    *(uint *)(iVar16 + 8 + iVar25 * 0x14) = uVar2;
    *(undefined4 *)(iVar16 + 0xc + iVar25 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 0x10 + iVar25 * 0x14) = 0;
  }
  else {
    if (iVar16 == 0) {
      iVar16 = 0x33;
    }
    else {
      iVar16 = iVar16 * 2;
    }
    puVar17 = FUN_00494cf0(*piVar10,(undefined4 *)piVar10[1],iVar16 * 0x14);
    if (puVar17 != (undefined4 *)0x0) {
      iVar16 = *piVar10;
      if (((iVar16 == 0) || (puVar17 < *(undefined4 **)(iVar16 + 0x104))) ||
         (*(undefined4 **)(iVar16 + 0x108) <= puVar17)) {
        uVar13 = (*DAT_00582af0._4_4_)();
      }
      else {
        uVar13 = (uint)*(ushort *)(iVar16 + 0xe8);
      }
      piVar10[8] = uVar13 / 0x14;
      piVar10[1] = (int)puVar17;
      goto LAB_004749b7;
    }
  }
  FUN_00496a90((int)piVar20);
  iVar25 = 0;
  puVar17 = (undefined4 *)local_10[8];
  puVar19 = local_10;
  if (0 < (int)local_10[6]) {
    do {
      if (((*(byte *)((int)puVar17 + 0x12) & 6) == 0) &&
         ((puVar17[8] & uVar8) == 0 && (puVar17[9] & (uint)local_44) == 0)) {
        FUN_004988a0(piVar20,(char *)*puVar17,local_48,8);
        *(byte *)((int)puVar17 + 0x12) = *(byte *)((int)puVar17 + 0x12) | 4;
        puVar19 = local_10;
      }
      iVar25 = iVar25 + 1;
      puVar17 = puVar17 + 10;
    } while (iVar25 < (int)puVar19[6]);
  }
LAB_00474a36:
  if ((local_20 != 0) && (*(byte *)((int)piVar20 + 0x13) < 8)) {
    iVar25 = 0;
    piVar10 = piVar20 + 0x19;
    while (piVar10[4] != local_20) {
      iVar25 = iVar25 + 1;
      piVar10 = piVar10 + 6;
      if (9 < iVar25) {
        piVar20[*(byte *)((int)piVar20 + 0x13) + 7] = local_20;
        *(char *)((int)piVar20 + 0x13) = *(char *)((int)piVar20 + 0x13) + '\x01';
        return CONCAT44(local_44,uVar8);
      }
    }
    *(undefined1 *)(piVar10 + 2) = 1;
  }
  return CONCAT44(local_44,uVar8);
}


/* FUN_004752f0 @ 004752f0  kind=gamemisc  attributed-by=none  size=181 */

void __cdecl FUN_004752f0(ulonglong *param_1)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_004753b0(param_1);
    uVar3 = __allrem((uint)*param_1 + 43200000,
                     *(int *)((int)param_1 + 4) + (uint)(0xfd6cd1ff < (uint)*param_1),86400000,0);
    dVar2 = (double)(int)uVar3 / 1000.0;
    *(undefined1 *)((int)param_1 + 0x29) = 1;
    iVar1 = (int)dVar2;
    *(int *)((int)param_1 + 0x14) = iVar1 / 0xe10;
    dVar2 = dVar2 - (double)iVar1;
    param_1[4] = (ulonglong)dVar2;
    *(int *)(param_1 + 3) = (iVar1 % 0xe10) / 0x3c;
    param_1[4] = (ulonglong)((double)((iVar1 % 0xe10) % 0x3c) + dVar2);
  }
  return;
}


/* FUN_004753b0 @ 004753b0  kind=gamemisc  attributed-by=none  size=319 */

void __cdecl FUN_004753b0(ulonglong *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(char *)((int)param_1 + 0x2a) == '\0') {
    uVar3 = FUN_0054a946();
    *param_1 = uVar3;
    *(undefined1 *)((int)param_1 + 0x2a) = 1;
    if (*(char *)((int)param_1 + 0x29) != '\0') {
      uVar1 = ((int)param_1[3] +
              (*(int *)((int)param_1 + 0x14) * 0x10 - *(int *)((int)param_1 + 0x14)) * 4) * 60000;
      uVar4 = FUN_0054a946();
      uVar2 = uVar1 - (uint)uVar4;
      uVar3 = *param_1;
      *(uint *)param_1 = (int)*param_1 + uVar2;
      *(int *)((int)param_1 + 4) =
           *(int *)((int)param_1 + 4) +
           ((((int)uVar1 >> 0x1f) - (int)(uVar4 >> 0x20)) - (uint)(uVar1 < (uint)uVar4)) +
           (uint)CARRY4((uint)uVar3,uVar2);
      if (*(char *)((int)param_1 + 0x2b) != '\0') {
        uVar1 = *(int *)((int)param_1 + 0x1c) * 60000;
        uVar3 = *param_1;
        *(int *)param_1 = (int)*param_1 + *(int *)((int)param_1 + 0x1c) * -60000;
        *(undefined2 *)(param_1 + 5) = 0;
        *(undefined1 *)((int)param_1 + 0x2b) = 0;
        *(int *)((int)param_1 + 4) =
             (*(int *)((int)param_1 + 4) - ((int)uVar1 >> 0x1f)) - (uint)((uint)uVar3 < uVar1);
      }
    }
  }
  return;
}


/* FUN_00475680 @ 00475680  kind=gamemisc  attributed-by=none  size=279 */

void __cdecl FUN_00475680(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  if ((char)param_1[10] == '\0') {
    if (*(char *)((int)param_1 + 0x2a) == '\0') {
      param_1[2] = 2000;
      param_1[3] = 1;
      param_1[4] = 1;
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
    uVar7 = __alldiv(*param_1 + 43200000,param_1[1] + (uint)(0xfd6cd1ff < *param_1),86400000,0);
    iVar3 = (int)(((double)(int)uVar7 - 1867216.25) / 36524.25);
    iVar6 = (int)uVar7 + (iVar3 - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) + 0x5f5;
    iVar5 = (int)(((double)iVar6 - 122.1) / 365.25);
    iVar3 = (iVar5 * 0x8ead) / 100;
    iVar4 = (int)((double)(iVar6 - iVar3) / 30.6001);
    param_1[4] = (iVar6 - (int)((double)iVar4 * 30.6001)) - iVar3;
    uVar1 = iVar4 - 1;
    if (0xd < iVar4) {
      uVar1 = iVar4 - 0xd;
    }
    param_1[3] = uVar1;
    uVar2 = iVar5 - 0x126c;
    if ((int)uVar1 < 3) {
      uVar2 = iVar5 - 0x126b;
    }
    param_1[2] = uVar2;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}


/* FUN_004757f0 @ 004757f0  kind=gamemisc  attributed-by=none  size=2074 */

void __cdecl
FUN_004757f0(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,uint *param_6)

{
  size_t _Size;
  undefined2 *puVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int *piVar5;
  char *pcVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  bool bVar24;
  char *pcVar25;
  uint uStack_38;
  uint local_2c;
  uint local_28;
  uint local_18;
  int local_10;
  uint local_c;
  
  piVar5 = (int *)param_1[2];
  uVar9 = FUN_00492ce0(param_1);
  iVar22 = *(int *)(param_3 + 0x10);
  piVar12 = *(int **)(param_2 + 0x20);
  piVar14 = piVar12 + *(int *)(param_2 + 0x18) * 10;
  uStack_38 = 0;
  local_10 = 0;
  if (piVar12 < piVar14) {
    iVar11 = *(int *)(param_3 + 0x2c);
    local_18 = 0;
    local_c = 0;
    do {
      if (((piVar12[2] == iVar11) && ((short)piVar12[4] == 2)) &&
         (uStack_38 = local_c, (piVar12[6] & param_4) == 0 && (piVar12[7] & param_5) == 0)) {
        uVar10 = piVar12[3];
        cVar3 = *(char *)(*(int *)(iVar22 + 4) + 0x15 + uVar10 * 0x18);
        cVar7 = FUN_00475250(*piVar12);
        if (cVar7 == 'a') {
          bVar24 = cVar3 == 'a';
LAB_004758b7:
          if (!bVar24) goto LAB_00475905;
        }
        else if (cVar7 != 'b') {
          bVar24 = 'b' < cVar3;
          goto LAB_004758b7;
        }
        uVar17 = 0;
        if ((int)uVar10 < 0x40) {
          uVar17 = 1 << (uVar10 & 0x1f);
          uVar20 = 0;
          if (0x1f < uVar10) {
            uVar20 = uVar17;
          }
          uVar17 = uVar17 ^ uVar20;
          if (0x3f < uVar10) {
            uVar20 = uVar17;
          }
        }
        else {
          uVar20 = 0x80000000;
        }
        if ((uVar17 & local_18) == 0 && (uVar20 & local_c) == 0) {
          local_10 = local_10 + 1;
          local_18 = local_18 | uVar17;
          uStack_38 = local_c | uVar20;
          local_c = uStack_38;
        }
      }
LAB_00475905:
      piVar12 = piVar12 + 10;
    } while (piVar12 < piVar14);
  }
  else {
    local_18 = 0;
  }
  *(short *)(param_6 + 1) = (short)local_10;
  uVar10 = ~local_18 & *(uint *)(param_3 + 0x38);
  uVar17 = (~uStack_38 | 0x80000000) & *(uint *)(param_3 + 0x3c);
  sVar4 = *(short *)(iVar22 + 0x26);
  iVar11 = 0x3f;
  if (sVar4 < 0x3f) {
    iVar11 = (int)sVar4;
  }
  uVar20 = 0;
  if (0 < iVar11) {
    do {
      uVar18 = 1 << (uVar20 & 0x1f);
      uVar19 = 0;
      if (0x1f < uVar20) {
        uVar19 = uVar18;
      }
      uVar18 = uVar18 ^ uVar19;
      if (0x3f < uVar20) {
        uVar19 = uVar18;
      }
      if ((uVar18 & uVar10) != 0 || (uVar19 & uVar17) != 0) {
        local_10 = local_10 + 1;
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar11);
  }
  if ((*(uint *)(param_3 + 0x3c) & 0x80000000) != 0) {
    local_10 = local_10 + -0x3f + (int)sVar4;
  }
  *param_6 = *param_6 | 0x410002;
  _Size = local_10 * 9 + 0x30;
  piVar12 = FUN_00494b90(*param_1,_Size);
  if (piVar12 == (int *)0x0) {
    return;
  }
  memset(piVar12,0,_Size);
  param_6[4] = (uint)piVar12;
  piVar23 = piVar12 + 0xc;
  piVar12[8] = (int)piVar23;
  piVar12[1] = (int)(piVar23 + local_10);
  piVar12[7] = (int)(piVar23 + local_10 + local_10);
  *piVar12 = (int)"auto-index";
  piVar12[9] = local_10;
  piVar12[3] = iVar22;
  piVar23 = *(int **)(param_2 + 0x20);
  local_28 = 0;
  uVar20 = local_28;
  if (piVar23 < piVar14) {
    local_2c = 0;
    local_28 = 0;
    uVar20 = 0;
    do {
      if (((piVar23[2] == *(int *)(param_3 + 0x2c)) && ((short)piVar23[4] == 2)) &&
         ((piVar23[6] & param_4) == 0 && (piVar23[7] & param_5) == 0)) {
        uVar18 = piVar23[3];
        cVar3 = *(char *)(*(int *)(*(int *)(param_3 + 0x10) + 4) + 0x15 + uVar18 * 0x18);
        iVar15 = *piVar23;
        cVar7 = FUN_00475250(iVar15);
        if (cVar7 == 'a') {
          bVar24 = cVar3 == 'a';
LAB_00475ace:
          if (!bVar24) goto LAB_00475b74;
        }
        else if (cVar7 != 'b') {
          bVar24 = 'b' < cVar3;
          goto LAB_00475ace;
        }
        uVar19 = 0;
        if ((int)uVar18 < 0x40) {
          uVar19 = 1 << (uVar18 & 0x1f);
          uVar21 = 0;
          if (0x1f < uVar18) {
            uVar21 = uVar19;
          }
          uVar19 = uVar19 ^ uVar21;
          if (0x3f < uVar18) {
            uVar21 = uVar19;
          }
        }
        else {
          uVar21 = 0x80000000;
        }
        if ((uVar19 & local_28) == 0 && (uVar21 & local_2c) == 0) {
          local_2c = local_2c | uVar21;
          local_28 = local_28 | uVar19;
          *(uint *)(piVar12[1] + uVar20 * 4) = uVar18;
          pcVar16 = *(char **)(iVar15 + 0xc);
          pcVar6 = *(char **)(iVar15 + 8);
          pcVar25 = pcVar6;
          if ((((*(ushort *)(pcVar6 + 2) & 0x100) == 0) &&
              ((pcVar25 = pcVar16, pcVar16 == (char *)0x0 ||
               ((*(ushort *)(pcVar16 + 2) & 0x100) == 0)))) &&
             (puVar13 = (undefined4 *)FUN_004984d0(param_1,pcVar6), puVar13 != (undefined4 *)0x0)) {
LAB_00475b67:
            pcVar16 = (char *)*puVar13;
          }
          else {
            puVar13 = (undefined4 *)FUN_004984d0(param_1,pcVar25);
            pcVar16 = "BINARY";
            if (puVar13 != (undefined4 *)0x0) goto LAB_00475b67;
          }
          uVar20 = uVar20 + 1;
          *(char **)(piVar12[8] + -4 + uVar20 * 4) = pcVar16;
        }
      }
LAB_00475b74:
      piVar23 = piVar23 + 10;
    } while (piVar23 < piVar14);
  }
  local_28 = uVar20;
  uVar20 = 0;
  if (0 < iVar11) {
    do {
      uVar18 = 1 << (uVar20 & 0x1f);
      uVar19 = 0;
      if (0x1f < uVar20) {
        uVar19 = uVar18;
      }
      uVar18 = uVar18 ^ uVar19;
      if (0x3f < uVar20) {
        uVar19 = uVar18;
      }
      if ((uVar18 & uVar10) != 0 || (uVar19 & uVar17) != 0) {
        local_28 = local_28 + 1;
        *(uint *)(piVar12[1] + -4 + local_28 * 4) = uVar20;
        *(char **)(piVar12[8] + -4 + local_28 * 4) = "BINARY";
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar11);
  }
  if (((*(uint *)(param_3 + 0x3c) & 0x80000000) != 0) &&
     (iVar11 = 0x3f, 0x3f < *(short *)(iVar22 + 0x26))) {
    iVar15 = local_28 << 2;
    do {
      *(int *)(iVar15 + piVar12[1]) = iVar11;
      iVar11 = iVar11 + 1;
      *(char **)(iVar15 + piVar12[8]) = "BINARY";
      iVar15 = iVar15 + 4;
    } while (iVar11 < *(short *)(iVar22 + 0x26));
  }
  piVar14 = FUN_0049dbf0(param_1,(int)piVar12);
  iVar22 = piVar5[7];
  iVar11 = piVar5[8];
  uVar10 = param_6[8];
  if (iVar22 < iVar11) {
LAB_00475caa:
    piVar5[7] = piVar5[7] + 1;
    puVar1 = (undefined2 *)(piVar5[1] + iVar22 * 0x14);
    *(uint *)(puVar1 + 2) = uVar10;
    *puVar1 = 0x29;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 4) = local_10 + 1;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  else {
    if (iVar11 == 0) {
      iVar11 = 0x33;
    }
    else {
      iVar11 = iVar11 * 2;
    }
    puVar13 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar11 * 0x14);
    if (puVar13 != (undefined4 *)0x0) {
      iVar11 = *piVar5;
      if (((iVar11 == 0) || (puVar13 < *(undefined4 **)(iVar11 + 0x104))) ||
         (*(undefined4 **)(iVar11 + 0x108) <= puVar13)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar13);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar11 + 0xe8);
      }
      piVar5[8] = uVar17 / 0x14;
      piVar5[1] = (int)puVar13;
      goto LAB_00475caa;
    }
    iVar22 = 1;
  }
  iVar11 = piVar5[1];
  iVar15 = *piVar5;
  if ((iVar11 == 0) || (*(char *)(iVar15 + 0x38) != '\0')) {
    FUN_0047bc80(iVar15,0xfffffff0,piVar14);
  }
  else {
    if (iVar22 < 0) {
      iVar22 = piVar5[7] + -1;
    }
    iVar2 = iVar11 + iVar22 * 0x14;
    FUN_0047bc80(iVar15,(int)*(char *)(iVar2 + 1),*(int **)(iVar11 + 0x10 + iVar22 * 0x14));
    *(undefined4 *)(iVar2 + 0x10) = 0;
    if (piVar14 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined1 *)(iVar2 + 1) = 0;
    }
    else {
      *(int **)(iVar2 + 0x10) = piVar14;
      *(undefined1 *)(iVar2 + 1) = 0xfa;
    }
  }
  param_3 = piVar5[7];
  uVar10 = param_6[7];
  iVar22 = piVar5[8];
  if ((int)param_3 < iVar22) {
LAB_00475dbe:
    iVar22 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar22 + param_3 * 0x14) = 0x48;
    *(undefined1 *)(iVar22 + 3 + param_3 * 0x14) = 0;
    *(uint *)(iVar22 + 4 + param_3 * 0x14) = uVar10;
    *(undefined4 *)(iVar22 + 8 + param_3 * 0x14) = 0;
    *(undefined4 *)(iVar22 + 0xc + param_3 * 0x14) = 0;
    *(undefined4 *)(iVar22 + 0x10 + param_3 * 0x14) = 0;
  }
  else {
    if (iVar22 == 0) {
      iVar22 = 0x33;
    }
    else {
      iVar22 = iVar22 * 2;
    }
    puVar13 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar22 * 0x14);
    if (puVar13 != (undefined4 *)0x0) {
      iVar22 = *piVar5;
      if (((iVar22 == 0) || (puVar13 < *(undefined4 **)(iVar22 + 0x104))) ||
         (*(undefined4 **)(iVar22 + 0x108) <= puVar13)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar13);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar22 + 0xe8);
      }
      piVar5[8] = uVar17 / 0x14;
      piVar5[1] = (int)puVar13;
      goto LAB_00475dbe;
    }
    param_3 = 1;
  }
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    iVar22 = param_1[0x13];
  }
  else {
    bVar8 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar8;
    iVar22 = param_1[bVar8 + 7];
  }
  FUN_0049c270(param_1,piVar12,param_6[7],iVar22,1);
  iVar11 = piVar5[7];
  uVar10 = param_6[8];
  iVar15 = piVar5[8];
  if (iVar11 < iVar15) {
LAB_00475ea6:
    iVar15 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar15 + iVar11 * 0x14) = 0x61;
    *(undefined1 *)(iVar15 + 3 + iVar11 * 0x14) = 0;
    *(uint *)(iVar15 + 4 + iVar11 * 0x14) = uVar10;
    *(int *)(iVar15 + 8 + iVar11 * 0x14) = iVar22;
    *(undefined4 *)(iVar15 + 0xc + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar11 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar13 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar15 * 0x14);
    if (puVar13 != (undefined4 *)0x0) {
      iVar15 = *piVar5;
      if (((iVar15 == 0) || (puVar13 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar13)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar13);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar5[8] = uVar17 / 0x14;
      piVar5[1] = (int)puVar13;
      goto LAB_00475ea6;
    }
  }
  if (piVar5[1] != 0) {
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 0x10;
  }
  iVar11 = piVar5[7];
  uVar10 = param_6[7];
  iVar15 = piVar5[8];
  if (iVar15 <= iVar11) {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar13 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar15 * 0x14);
    if (puVar13 == (undefined4 *)0x0) goto LAB_00475f99;
    iVar15 = *piVar5;
    if (((iVar15 == 0) || (puVar13 < *(undefined4 **)(iVar15 + 0x104))) ||
       (*(undefined4 **)(iVar15 + 0x108) <= puVar13)) {
      uVar17 = (*DAT_00582af0._4_4_)(puVar13);
    }
    else {
      uVar17 = (uint)*(ushort *)(iVar15 + 0xe8);
    }
    piVar5[8] = uVar17 / 0x14;
    piVar5[1] = (int)puVar13;
  }
  piVar5[7] = piVar5[7] + 1;
  puVar1 = (undefined2 *)(piVar5[1] + iVar11 * 0x14);
  *(uint *)(puVar1 + 2) = uVar10;
  *puVar1 = 0x5f;
  *(undefined1 *)((int)puVar1 + 3) = 0;
  *(uint *)(puVar1 + 4) = param_3 + 1;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
LAB_00475f99:
  if (piVar5[1] != 0) {
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 3;
  }
  if ((-1 < (int)param_3) && (param_3 < (uint)piVar5[7])) {
    *(int *)(piVar5[1] + 8 + param_3 * 0x14) = piVar5[7];
  }
  if ((iVar22 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar11 = 0;
    piVar14 = param_1 + 0x19;
    do {
      if (piVar14[4] == iVar22) {
        *(undefined1 *)(piVar14 + 2) = 1;
        goto LAB_00475ff2;
      }
      iVar11 = iVar11 + 1;
      piVar14 = piVar14 + 6;
    } while (iVar11 < 10);
    param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar22;
    *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
  }
LAB_00475ff2:
  if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar5[7])) {
    *(int *)(piVar5[1] + 8 + uVar9 * 0x14) = piVar5[7];
  }
  return;
}


/* FUN_00476020 @ 00476020  kind=gamemisc  attributed-by=none  size=95 */

int __cdecl FUN_00476020(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
  iVar2 = (int)uVar1 >> 0x1f;
  if ((iVar2 <= param_3) && ((iVar2 < param_3 || (uVar1 < param_2)))) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
    return 0;
  }
  iVar2 = FUN_004a0350(param_2);
  if (iVar2 == 0) {
    FUN_0045fad0(param_1);
  }
  return iVar2;
}


/* FUN_00476080 @ 00476080  kind=gamemisc  attributed-by=none  size=169 */

void __cdecl FUN_00476080(undefined4 param_1)

{
  void *pvVar1;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    FUN_004bebc0(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pvVar1 = FUN_004bebc0(param_1);
  if (pvVar1 == (void *)0x0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_004bdb80(pvVar1);
  FUN_00466dd0((int)pvVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004762d0 @ 004762d0  kind=gamemisc  attributed-by=none  size=413 */

undefined4 __cdecl
FUN_004762d0(int param_1,byte *param_2,byte param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  uint extraout_ECX;
  int extraout_EDX;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_c;
  
  pbVar2 = param_2;
  uVar6 = 0;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar5 = param_2;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar5;
    }
    uVar6 = (int)pbVar5 - (int)param_2 & 0x3fffffff;
  }
  param_2 = (byte *)(uint)param_3;
  if ((param_2 == (byte *)0x4) || (param_2 == (byte *)0x8)) {
    param_2 = (byte *)0x2;
  }
  else if ((param_2 == (byte *)0x0) || ((byte *)0x3 < param_2)) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  if (pbVar2 == (byte *)0x0) {
    piVar3 = *(int **)(param_1 + 8);
  }
  else {
    piVar3 = FUN_004799f0(param_1,pbVar2,0);
  }
  if (((piVar3 != (int *)0x0) && (piVar3 = piVar3 + (int)param_2 * 5, piVar3 != (int *)0x14)) &&
     (piVar3[-2] != 0)) {
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_004961f0(param_1,5,
                   (byte *)"unable to delete/modify collation sequence due to active statements");
      return 5;
    }
    FUN_00496370(param_1);
    if ((*(byte *)(extraout_EDX + 4) & 0xfffffff7) == extraout_ECX) {
      iVar4 = FUN_0049d6a0((uint *)(param_1 + 0x19c),pbVar2,uVar6);
      puVar7 = (undefined4 *)(iVar4 + 0x10);
      local_c = 3;
      do {
        if (*(char *)(puVar7 + -3) == (char)piVar3[-4]) {
          if ((code *)*puVar7 != (code *)0x0) {
            (*(code *)*puVar7)(puVar7[-2]);
          }
          puVar7[-1] = 0;
        }
        puVar7 = puVar7 + 5;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  if (pbVar2 == (byte *)0x0) {
    piVar3 = *(int **)(param_1 + 8);
  }
  else {
    piVar3 = FUN_004799f0(param_1,pbVar2,1);
  }
  if ((piVar3 != (int *)0x0) && (piVar3 = piVar3 + (int)param_2 * 5, piVar3 != (int *)0x14)) {
    piVar3[-2] = param_5;
    piVar3[-3] = param_4;
    piVar3[-1] = param_6;
    *(byte *)(piVar3 + -4) = param_3 & 8 | (byte)param_2;
    FUN_004961f0(param_1,0,(byte *)0x0);
    return 0;
  }
  return 7;
}


/* FUN_00476470 @ 00476470  kind=gamemisc  attributed-by=none  size=331 */

uint __cdecl
FUN_00476470(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  uVar5 = 0;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar4 = param_2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    uVar5 = (int)pbVar4 - (int)param_2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0x130) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004bd210(param_2,uVar5);
    uVar2 = uVar2 % *(uint *)(param_1 + 0x124);
  }
  puVar3 = FUN_00479af0(param_1 + 0x124,param_2,uVar5,uVar2);
  if ((puVar3 == (undefined4 *)0x0) || (puVar3[2] == 0)) {
    puVar3 = FUN_00494b90(param_1,uVar5 + 0x11);
    if (puVar3 != (undefined4 *)0x0) {
      pbVar4 = (byte *)(puVar3 + 4);
      memcpy(pbVar4,param_2,uVar5 + 1);
      *puVar3 = param_3;
      puVar3[2] = param_4;
      puVar3[1] = pbVar4;
      puVar3[3] = param_5;
      puVar3 = (undefined4 *)FUN_0049d6f0((uint *)(param_1 + 0x124),pbVar4,uVar5,(uint)puVar3);
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 0x38) = 1;
        FUN_00494b00(param_1,puVar3);
      }
    }
    uVar5 = 0;
  }
  else {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    uVar5 = 0x15;
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar5 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar5 = 7;
  }
  uVar5 = *(uint *)(param_1 + 0x30) & uVar5;
  if ((uVar5 != 0) && (param_5 != (undefined *)0x0)) {
    (*(code *)param_5)(param_4);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar5;
}


/* FUN_00476c10 @ 00476c10  kind=gamemisc  attributed-by=none  size=72 */

void __cdecl FUN_00476c10(int param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    do {
      if ((*(byte *)((int)param_2 + 0x12) & 4) != 0) {
        return;
      }
      if ((*(int *)(param_1 + 0x18) != 0) && ((*(byte *)(*param_2 + 2) & 1) == 0)) {
        return;
      }
      iVar2 = param_2[1];
      *(byte *)((int)param_2 + 0x12) = *(byte *)((int)param_2 + 0x12) | 4;
      if (iVar2 < 0) {
        return;
      }
      iVar3 = *(int *)(param_2[5] + 0x20);
      pcVar1 = (char *)(iVar3 + 0x13 + iVar2 * 0x28);
      *pcVar1 = *pcVar1 + -1;
      param_2 = (int *)(iVar3 + iVar2 * 0x28);
    } while (*pcVar1 == '\0');
  }
  return;
}


/* FUN_00477290 @ 00477290  kind=gamemisc  attributed-by=none  size=74 */

float10 __cdecl FUN_00477290(double param_1)

{
  double dVar1;
  double dVar2;
  undefined8 local_c;
  
  dVar1 = 1.0;
  local_c = 1.0;
  dVar2 = 10.0;
  if (10.0 < param_1) {
    do {
      dVar2 = dVar2 * 10.0;
      dVar1 = dVar1 + 1.0;
      local_c = dVar1;
    } while (dVar2 < param_1);
  }
  return (float10)local_c;
}


/* FUN_004776e0 @ 004776e0  kind=gamemisc  attributed-by=none  size=487 */

int __cdecl FUN_004776e0(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_28 [6];
  undefined1 local_10;
  undefined2 local_f;
  int local_c;
  int local_8;
  
  pcVar6 = param_2;
  local_8 = *(int *)(param_3 + 4);
  local_c = *(int *)(param_2 + 0x10);
  uVar3 = (uint)*(ushort *)(param_2 + 4);
  iVar2 = *(int *)(local_c + 4);
  if ((uVar3 == 0) && ((*(uint *)param_2 & 0x300000) == 0)) {
    return 0;
  }
  local_28[0] = param_1;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 1000000000;
  local_f = 1;
  local_10 = 0;
  FUN_004aa7b0(local_28," (",2);
  iVar4 = 0;
  if (uVar3 != 0) {
    do {
      pcVar1 = *(char **)(local_8 + *(int *)(iVar2 + iVar4 * 4) * 0x18);
      if (iVar4 != 0) {
        FUN_004aa7b0(local_28," AND ",5);
      }
      FUN_004aa7b0(local_28,pcVar1,0xffffffff);
      FUN_004aa7b0(local_28,"=",1);
      FUN_004aa7b0(local_28,"?",1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar3);
  }
  iVar5 = iVar4;
  if ((*(uint *)param_2 & 0x200000) != 0) {
    if (iVar4 == *(int *)(local_c + 0x24)) {
      param_2 = "rowid";
    }
    else {
      param_2 = *(char **)(local_8 + *(int *)(iVar2 + iVar4 * 4) * 0x18);
    }
    if (iVar4 != 0) {
      FUN_004aa7b0(local_28," AND ",5);
    }
    FUN_004aa7b0(local_28,param_2,0xffffffff);
    FUN_004aa7b0(local_28,">",1);
    FUN_004aa7b0(local_28,"?",1);
    iVar5 = iVar4 + 1;
  }
  if ((*(uint *)pcVar6 & 0x100000) != 0) {
    if (iVar4 == *(int *)(local_c + 0x24)) {
      pcVar6 = "rowid";
    }
    else {
      pcVar6 = *(char **)(local_8 + *(int *)(iVar2 + iVar4 * 4) * 0x18);
    }
    if (iVar5 != 0) {
      FUN_004aa7b0(local_28," AND ",5);
    }
    FUN_004aa7b0(local_28,pcVar6,0xffffffff);
    FUN_004aa7b0(local_28,"<",1);
    FUN_004aa7b0(local_28,"?",1);
  }
  FUN_004aa7b0(local_28,")",1);
  iVar2 = FUN_004aa8f0(local_28);
  return iVar2;
}


/* FUN_004778d0 @ 004778d0  kind=gamemisc  attributed-by=none  size=581 */

void __cdecl
FUN_004778d0(int *param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            ushort param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  
  if ((char)param_1[0x75] != '\x02') {
    return;
  }
  uVar5 = (uint)(byte)param_3[0xd];
  uVar1 = *param_3;
  piVar2 = (int *)param_1[2];
  iVar3 = param_1[0x79];
  iVar4 = *param_1;
  if ((uVar1 & 0x10000000) != 0) {
    return;
  }
  if ((param_6 & 0x40) != 0) {
    return;
  }
  puVar6 = (undefined4 *)FUN_004a02d0(iVar4,&DAT_0056de50);
  if (*(int *)(param_2 + 0x1c + uVar5 * 0x48) == 0) {
    pcVar9 = "%s TABLE %s";
  }
  else {
    pcVar9 = "%s SUBQUERY %d";
  }
  puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)pcVar9);
  if (*(int *)(param_2 + 0x14 + uVar5 * 0x48) != 0) {
    puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)"%s AS %s");
  }
  if ((uVar1 & 0xf0000) == 0) {
    if ((uVar1 & 0x3000) == 0) {
      if ((uVar1 & 0x8000000) != 0) {
        puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)"%s VIRTUAL TABLE INDEX %d:%s");
      }
    }
    else {
      puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)"%s USING INTEGER PRIMARY KEY");
      if ((uVar1 & 0x1000) == 0) {
        if ((uVar1 & 0x300000) == 0x300000) {
          pcVar9 = "%s (rowid>? AND rowid<?)";
        }
        else if ((uVar1 & 0x200000) == 0) {
          if ((uVar1 & 0x100000) == 0) goto LAB_00477a6e;
          pcVar9 = "%s (rowid<?)";
        }
        else {
          pcVar9 = "%s (rowid>?)";
        }
      }
      else {
        pcVar9 = "%s (rowid=?)";
      }
      puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)pcVar9);
    }
  }
  else {
    puVar7 = (undefined4 *)
             FUN_004776e0(iVar4,(char *)param_3,*(int *)(param_2 + 0x18 + uVar5 * 0x48));
    puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)"%s USING %s%sINDEX%s%s%s");
    FUN_00494b00(iVar4,puVar7);
  }
LAB_00477a6e:
  if ((param_6 & 3) == 0) {
    FUN_0054a946();
  }
  piVar8 = (int *)FUN_004a0240(iVar4,puVar6,(byte *)"%s (~%lld rows)");
  FUN_004ae8f0(piVar2,0x96,iVar3,param_4,param_5,piVar8,0xffffffff);
  return;
}


/* FUN_0047afc0 @ 0047afc0  kind=gamemisc  attributed-by=none  size=1397 */

void __cdecl
FUN_0047afc0(int *param_1,short *param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int param_8)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  size_t _Size;
  int *local_48;
  short *psStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  uint local_24;
  char *local_20;
  size_t local_1c;
  int *local_18;
  uint local_14;
  int local_10;
  int local_c;
  byte *local_8;
  
  iVar4 = *param_1;
  piVar3 = (int *)param_1[2];
  local_8 = (byte *)0x0;
  local_14 = 0;
  local_18 = piVar3;
  local_c = iVar4;
  if (piVar3 == (int *)0x0) {
    piVar3 = FUN_004af150(iVar4);
    param_1[2] = (int)piVar3;
    local_18 = piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_004ae760(piVar3,0x94);
    }
  }
  if (param_8 < 0) {
    local_14 = piVar3[7];
    bVar1 = *(byte *)(param_5 + 6);
    if (((int)local_14 < piVar3[8]) || (iVar4 = FUN_0047de10(piVar3), iVar4 == 0)) {
      piVar3[7] = piVar3[7] + 1;
      iVar4 = piVar3[1];
      *(undefined2 *)(iVar4 + local_14 * 0x14) = 0x76;
      *(undefined1 *)(iVar4 + 3 + local_14 * 0x14) = 0;
      *(uint *)(iVar4 + 4 + local_14 * 0x14) = (uint)bVar1;
      *(undefined4 *)(iVar4 + 8 + local_14 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0xc + local_14 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x10 + local_14 * 0x14) = 0;
      iVar4 = local_c;
    }
    else {
      local_14 = 1;
      iVar4 = local_c;
    }
  }
  local_10 = 0;
  if (param_5[5] < 1) {
    pbVar8 = (byte *)0x0;
  }
  else {
    do {
      puVar5 = FUN_00494b90(iVar4,0x2d);
      if (puVar5 != (undefined4 *)0x0) {
        memset(puVar5,0,0x2d);
        *(undefined2 *)((int)puVar5 + 0x1e) = 0xffff;
        *(undefined1 *)puVar5 = 0x84;
        puVar5[1] = puVar5 + 0xb;
        *(undefined1 *)(puVar5 + 0xb) = 0;
        puVar5[5] = 1;
        if (puVar5 != (undefined4 *)0x0) {
          if (param_4 == 0) {
            puVar5[6] = param_7;
            *(undefined1 *)((int)puVar5 + 1) = 100;
          }
          else {
            iVar10 = *(int *)(*(int *)(param_4 + 4) + local_10 * 4);
            iVar9 = *(int *)(param_3 + 4) + iVar10 * 0x18;
            if (*(short *)(param_3 + 0x24) == iVar10) {
              iVar10 = -1;
            }
            puVar5[6] = param_7 + 1 + iVar10;
            *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)(iVar9 + 0x15);
            local_28 = *(char **)(iVar9 + 0x10);
            if (local_28 == (char *)0x0) {
              local_28 = (char *)**(undefined4 **)(iVar4 + 8);
            }
            local_24 = 0;
            if (local_28 != (char *)0x0) {
              cVar2 = *local_28;
              pcVar6 = local_28;
              while (cVar2 != '\0') {
                pcVar6 = pcVar6 + 1;
                cVar2 = *pcVar6;
              }
              local_24 = (int)pcVar6 - (int)local_28 & 0x3fffffff;
            }
            if ((local_24 != 0) &&
               (puVar7 = FUN_00496510(*param_1,0x5c,&local_28,1), puVar7 != (undefined4 *)0x0)) {
              *(ushort *)((int)puVar7 + 2) = *(ushort *)((int)puVar7 + 2) | 0x100;
              puVar7[2] = puVar5;
              puVar5 = puVar7;
            }
          }
        }
      }
      if (param_6 == 0) {
        iVar4 = param_5[9];
      }
      else {
        iVar4 = *(int *)(param_6 + local_10 * 4);
      }
      local_20 = *(char **)(*(int *)(*param_5 + 4) + iVar4 * 0x18);
      if (local_20 == (char *)0x0) {
        _Size = 0;
      }
      else {
        cVar2 = *local_20;
        pcVar6 = local_20;
        while (cVar2 != '\0') {
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar6;
        }
        _Size = (int)pcVar6 - (int)local_20 & 0x3fffffff;
      }
      local_1c = _Size + 0x2d;
      puVar7 = FUN_00494b90(local_c,local_1c);
      if (puVar7 != (undefined4 *)0x0) {
        memset(puVar7,0,local_1c);
        *(undefined2 *)((int)puVar7 + 0x1e) = 0xffff;
        *(undefined1 *)puVar7 = 0x1a;
        if (_Size == 0xffffffff) {
          *(ushort *)((int)puVar7 + 2) = *(ushort *)((int)puVar7 + 2) | 0x400;
          puVar7[1] = 0;
        }
        else {
          puVar7[1] = puVar7 + 0xb;
          if (_Size != 0) {
            memcpy(puVar7 + 0xb,local_20,_Size);
          }
          *(undefined1 *)(_Size + puVar7[1]) = 0;
        }
        puVar7[5] = 1;
      }
      pcVar6 = (char *)FUN_00494b90(*param_1,0x2c);
      if (pcVar6 != (char *)0x0) {
        memset(pcVar6,0,0x2c);
        *pcVar6 = 'L';
        pcVar6[0x1e] = -1;
        pcVar6[0x1f] = -1;
        pcVar6[0x14] = '\x01';
        pcVar6[0x15] = '\0';
        pcVar6[0x16] = '\0';
        pcVar6[0x17] = '\0';
      }
      local_20 = (char *)*param_1;
      if (pcVar6 == (char *)0x0) {
        FUN_00498790((int)local_20,puVar5);
        FUN_00498790((int)local_20,puVar7);
      }
      else {
        if (puVar7 != (undefined4 *)0x0) {
          *(undefined4 **)(pcVar6 + 0xc) = puVar7;
          *(ushort *)(pcVar6 + 2) = *(ushort *)(pcVar6 + 2) | *(ushort *)((int)puVar7 + 2) & 0x100;
        }
        if (puVar5 != (undefined4 *)0x0) {
          *(undefined4 **)(pcVar6 + 8) = puVar5;
          *(ushort *)(pcVar6 + 2) = *(ushort *)(pcVar6 + 2) | *(ushort *)((int)puVar5 + 2) & 0x100;
        }
        FUN_004790b0((int)pcVar6);
        if (*(int *)(*param_1 + 0x5c) < *(int *)(pcVar6 + 0x14)) {
          FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
        }
      }
      iVar4 = local_c;
      pbVar8 = (byte *)FUN_004966d0(local_c,(char *)local_8,pcVar6);
      local_10 = local_10 + 1;
      local_8 = pbVar8;
    } while (local_10 < param_5[5]);
  }
  if ((param_3 == *param_5) && (0 < param_8)) {
    puVar5 = FUN_00494b90(iVar4,0x2d);
    if (puVar5 != (undefined4 *)0x0) {
      memset(puVar5,0,0x2d);
      *(undefined2 *)((int)puVar5 + 0x1e) = 0xffff;
      *(undefined1 *)puVar5 = 0x84;
      puVar5[1] = puVar5 + 0xb;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar5[5] = 1;
    }
    puVar7 = FUN_00494b90(iVar4,0x2d);
    if (puVar7 != (undefined4 *)0x0) {
      memset(puVar7,0,0x2d);
      *(undefined1 *)puVar7 = 0x98;
      *(undefined2 *)((int)puVar7 + 0x1e) = 0xffff;
      puVar7[1] = puVar7 + 0xb;
      *(undefined1 *)(puVar7 + 0xb) = 0;
      puVar7[5] = 1;
    }
    if ((puVar5 != (undefined4 *)0x0) && (puVar7 != (undefined4 *)0x0)) {
      puVar5[6] = param_7;
      *(undefined1 *)((int)puVar5 + 1) = 100;
      puVar7[6] = *(undefined4 *)(param_2 + 0x1a);
      *(undefined2 *)(puVar7 + 7) = 0xffff;
    }
    pcVar6 = (char *)FUN_00494b90(*param_1,0x2c);
    if (pcVar6 != (char *)0x0) {
      memset(pcVar6,0,0x2c);
      *pcVar6 = 'K';
      pcVar6[0x1e] = -1;
      pcVar6[0x1f] = -1;
      pcVar6[0x14] = '\x01';
      pcVar6[0x15] = '\0';
      pcVar6[0x16] = '\0';
      pcVar6[0x17] = '\0';
    }
    iVar4 = *param_1;
    if (pcVar6 == (char *)0x0) {
      FUN_00498790(iVar4,puVar5);
      FUN_00498790(iVar4,puVar7);
    }
    else {
      if (puVar7 != (undefined4 *)0x0) {
        *(undefined4 **)(pcVar6 + 0xc) = puVar7;
        *(ushort *)(pcVar6 + 2) = *(ushort *)(pcVar6 + 2) | *(ushort *)((int)puVar7 + 2) & 0x100;
      }
      if (puVar5 != (undefined4 *)0x0) {
        *(undefined4 **)(pcVar6 + 8) = puVar5;
        *(ushort *)(pcVar6 + 2) = *(ushort *)(pcVar6 + 2) | *(ushort *)((int)puVar5 + 2) & 0x100;
      }
      FUN_004790b0((int)pcVar6);
      if (*(int *)(*param_1 + 0x5c) < *(int *)(pcVar6 + 0x14)) {
        FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
      }
    }
    pbVar8 = (byte *)FUN_004966d0(local_c,(char *)local_8,pcVar6);
    local_8 = pbVar8;
  }
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  _local_48 = CONCAT44(param_2,param_1);
  FUN_004a69e0((int *)&local_48,(int)pbVar8);
  piVar3 = FUN_004bb240(param_1,param_2,pbVar8,(undefined2 *)0x0,(int *)0x0,0,0);
  if ((0 < param_8) && ((char)param_5[6] == '\0')) {
    if ((int *)param_1[0x6c] != (int *)0x0) {
      param_1 = (int *)param_1[0x6c];
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
  bVar1 = *(byte *)(param_5 + 6);
  iVar4 = local_18[7];
  if ((iVar4 < local_18[8]) || (iVar9 = FUN_0047de10(local_18), iVar9 == 0)) {
    local_18[7] = local_18[7] + 1;
    iVar9 = local_18[1];
    *(undefined2 *)(iVar9 + iVar4 * 0x14) = 0x75;
    *(undefined1 *)(iVar9 + 3 + iVar4 * 0x14) = 0;
    *(uint *)(iVar9 + 4 + iVar4 * 0x14) = (uint)bVar1;
    *(int *)(iVar9 + 8 + iVar4 * 0x14) = param_8;
    *(undefined4 *)(iVar9 + 0xc + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar9 + 0x10 + iVar4 * 0x14) = 0;
  }
  if (piVar3 != (int *)0x0) {
    FUN_004bbe40(piVar3);
  }
  FUN_00498790(local_c,(undefined4 *)local_8);
  if (((local_14 != 0) && (-1 < (int)local_14)) && (local_14 < (uint)local_18[7])) {
    *(int *)(local_18[1] + 8 + local_14 * 0x14) = local_18[7];
  }
  return;
}


/* FUN_0047c700 @ 0047c700  kind=gamemisc  attributed-by=none  size=823 */

int __cdecl
FUN_0047c700(int *param_1,int *param_2,int param_3,undefined1 *param_4,undefined4 param_5,
            int param_6,int *param_7,size_t param_8,undefined4 param_9)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_EDX;
  
  piVar1 = (int *)param_1[2];
  iVar2 = piVar1[7];
  iVar4 = FUN_004b6b80(piVar1);
  if (param_6 != 0) {
    uVar5 = FUN_004ae7d0(piVar1,0x1c,param_6);
    iVar6 = FUN_004ae8f0(piVar1,0x18,*(undefined4 *)(param_3 + 8),param_6 + 1,
                         *(undefined4 *)(param_3 + 0xc),param_7,param_8);
    iVar8 = piVar1[7];
    if ((iVar8 < piVar1[8]) || (iVar7 = FUN_0047de10(piVar1), iVar7 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar7 = piVar1[1];
      *(undefined2 *)(iVar7 + iVar8 * 0x14) = 0x19;
      iVar7 = iVar7 + iVar8 * 0x14;
      *(undefined1 *)(iVar7 + 3) = 0;
      *(int *)(iVar7 + 4) = iVar6 + 2;
      *(int *)(iVar7 + 8) = iVar4;
      *(int *)(iVar7 + 0xc) = iVar6 + 2;
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
    if ((-1 < (int)uVar5) && (uVar5 < (uint)piVar1[7])) {
      *(int *)(piVar1[1] + 8 + uVar5 * 0x14) = piVar1[7];
    }
    iVar8 = *(int *)(param_3 + 0xc);
    uVar3 = *(undefined4 *)(param_3 + 8);
    iVar6 = piVar1[7];
    if ((iVar6 < piVar1[8]) || (iVar7 = FUN_0047de10(piVar1), iVar7 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar7 = piVar1[1];
      *(undefined4 *)(iVar7 + 4 + iVar6 * 0x14) = uVar3;
      *(int *)(iVar7 + 8 + iVar6 * 0x14) = param_6 + 1;
      *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0xe;
      *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
      *(int *)(iVar7 + 0xc + iVar6 * 0x14) = iVar8 + -1;
      *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
    }
    iVar8 = piVar1[7];
    if ((iVar8 < piVar1[8]) || (iVar6 = FUN_0047de10(piVar1), iVar6 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar6 = piVar1[1];
      *(undefined2 *)(iVar6 + iVar8 * 0x14) = 7;
      *(undefined1 *)(iVar6 + 3 + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + iVar8 * 0x14) = 1;
      *(int *)(iVar6 + 8 + iVar8 * 0x14) = param_6;
      *(undefined4 *)(iVar6 + 0xc + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x10 + iVar8 * 0x14) = 0;
    }
  }
  if (*(char *)(*param_1 + 0x38) == '\0') {
    FUN_00473870(piVar1,(int)param_2,iVar4);
    switch(*param_4) {
    case 6:
      FUN_00497600((int)param_1,*(int *)(param_3 + 8),*(int *)(param_4 + 4),1);
      break;
    case 7:
      iVar8 = FUN_00493750((char *)**(undefined4 **)(*param_2 + 8),param_4[1]);
      param_4[1] = (char)iVar8;
      iVar8 = FUN_0049cb40((int)param_1);
      FUN_004ae8f0(piVar1,0x1f,*(undefined4 *)(param_3 + 8),1,iVar8,(int *)(param_4 + 1),1);
      FUN_00496d90((int)param_1,*(int *)(param_3 + 8),1);
      FUN_004ae830(piVar1,0x61,*(undefined4 *)(param_4 + 4),iVar8);
      FUN_004a68f0((int)param_1,iVar8);
      break;
    case 8:
    case 9:
      iVar8 = FUN_0049cb40((int)param_1);
      iVar6 = FUN_0049cb40(extraout_EDX);
      FUN_004ae890(piVar1,0x1f,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),iVar8);
      FUN_004ae830(piVar1,0x38,*(undefined4 *)(param_4 + 4),iVar6);
      FUN_004ae890(piVar1,0x39,*(undefined4 *)(param_4 + 4),iVar8,iVar6);
      if (piVar1[1] != 0) {
        *(undefined1 *)(piVar1[1] + -0x11 + piVar1[7] * 0x14) = 8;
      }
      FUN_004a68f0((int)param_1,iVar6);
      FUN_004a68f0((int)param_1,iVar8);
      break;
    case 10:
      if (*(int *)(param_4 + 8) == 0) {
        iVar8 = FUN_0049cb00((int)param_1,*(int *)(param_3 + 0xc));
        *(int *)(param_4 + 8) = iVar8;
        *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_3 + 0xc);
      }
      FUN_00497600((int)param_1,*(int *)(param_3 + 8),*(int *)(param_4 + 8),*(int *)(param_4 + 0xc))
      ;
      FUN_004ae7d0(piVar1,4,*(undefined4 *)(param_4 + 4));
      break;
    default:
      FUN_004ae830(piVar1,0x10,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
      FUN_00496d90((int)param_1,*(int *)(param_3 + 8),*(int *)(param_3 + 0xc));
    }
    if (param_2[2] != 0) {
      FUN_004ae890(piVar1,0x7a,param_2[2],param_9,0xffffffff);
    }
    if (piVar1[10] != 0) {
      *(int *)(piVar1[10] - (iVar4 * 4 + 4)) = piVar1[7];
    }
    FUN_004ae7d0(piVar1,3,param_5);
    return iVar2;
  }
  return 0;
}


/* FUN_0047d1b0 @ 0047d1b0  kind=gamemisc  attributed-by=none  size=148 */

int __cdecl FUN_0047d1b0(byte *param_1)

{
  byte **ppbVar1;
  byte **ppbVar2;
  byte bVar3;
  byte *pbVar4;
  byte **ppbVar5;
  int iVar6;
  byte *pbVar7;
  int local_c;
  
  local_c = 0;
  ppbVar5 = &param_1;
  while( true ) {
    ppbVar1 = ppbVar5 + 2;
    pbVar7 = ppbVar5[1];
    ppbVar2 = ppbVar5 + 3;
    pbVar4 = ppbVar5[4];
    iVar6 = 0;
    ppbVar5 = ppbVar5 + 5;
    while (pbVar7 != (byte *)0x0) {
      bVar3 = *param_1;
      pbVar7 = pbVar7 + -1;
      if (((&DAT_00569720)[bVar3] & 4) == 0) {
        return local_c;
      }
      param_1 = param_1 + 1;
      iVar6 = (int)(char)bVar3 + (iVar6 * 5 + -0x18) * 2;
    }
    if (iVar6 < (int)*ppbVar1) {
      return local_c;
    }
    if ((int)*ppbVar2 < iVar6) {
      return local_c;
    }
    if ((pbVar4 != (byte *)0x0) && (pbVar4 != (byte *)(int)(char)*param_1)) break;
    param_1 = param_1 + 1;
    local_c = local_c + 1;
    *(int *)*ppbVar5 = iVar6;
    if (pbVar4 == (byte *)0x0) {
      return local_c;
    }
  }
  return local_c;
}


/* FUN_0047d250 @ 0047d250  kind=gamemisc  attributed-by=none  size=374 */

void __cdecl FUN_0047d250(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  void *pvVar4;
  void *local_a4;
  void *local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  pvVar2 = (void *)0x0;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    local_a0 = (void *)0x0;
    iVar1 = (*(code *)PTR_FormatMessageW_00583620)(0x1300,0,param_1,0,&local_a0);
    bVar3 = true;
    if (iVar1 == 0) goto LAB_0047d37d;
    if (DAT_00583e74 != (code *)0x0) {
      (*DAT_00583e74)();
    }
    pvVar2 = FUN_004bdc10(local_a0);
    pvVar4 = local_a0;
    if (DAT_00583e78 != (code *)0x0) {
      (*DAT_00583e78)();
      pvVar4 = local_a0;
    }
  }
  else {
    local_a4 = (void *)0x0;
    iVar1 = (*(code *)PTR_FormatMessageA_00583614)(0x1300,0,param_1,0,&local_a4,0,0);
    bVar3 = true;
    if (iVar1 == 0) goto LAB_0047d37d;
    if (DAT_00583e74 != (code *)0x0) {
      (*DAT_00583e74)();
    }
    local_a0 = FUN_00480740(local_a4);
    if (local_a0 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = FUN_004bdc10(local_a0);
      FUN_00466dd0((int)local_a0);
    }
    pvVar4 = local_a4;
    if (DAT_00583e78 != (code *)0x0) {
      (*DAT_00583e78)();
      pvVar4 = local_a4;
    }
  }
  (*(code *)PTR_LocalFree_0058377c)(pvVar4);
  bVar3 = iVar1 == 0;
LAB_0047d37d:
  if (bVar3) {
    FUN_00466a80(param_2,param_3,(byte *)"OsError 0x%x (%u)");
  }
  else {
    FUN_00466a80(param_2,param_3,&DAT_0056de50);
    FUN_00466dd0((int)pvVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0047d5d0 @ 0047d5d0  kind=gamemisc  attributed-by=none  size=286 */

void __cdecl FUN_0047d5d0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_a4;
  int local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_a0 = param_1;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    uVar7 = 0x1fe;
    iVar2 = DAT_00582bb8 + 2;
    uVar6 = 1;
  }
  else {
    iVar2 = 4;
    puVar5 = &local_a4;
    if (DAT_00582acc == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*DAT_00582b10)(5);
      if (iVar4 != 0) {
        (*DAT_00582b18)(iVar4);
      }
    }
    do {
      uVar1 = FUN_00487580();
      *(undefined1 *)puVar5 = uVar1;
      puVar5 = (uint *)((int)puVar5 + 1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar4 != 0) {
      (*DAT_00582b20)(iVar4);
    }
    uVar7 = 1;
    sVar3 = (short)((ulonglong)(local_a4 & 0x7fffffff) % 0x1fd);
    iVar2 = DAT_00582bb8 + 2 + (int)sVar3;
    *(short *)(local_a0 + 0xe) = sVar3;
    uVar6 = 3;
    param_1 = local_a0;
  }
  iVar2 = FUN_004c2320((undefined4 *)(param_1 + 8),uVar6,iVar2,0,uVar7,0);
  if (iVar2 == 0) {
    uVar6 = (*(code *)PTR_GetLastError_005836a4)();
    *(undefined4 *)(param_1 + 0x14) = uVar6;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0047db10 @ 0047db10  kind=gamemisc  attributed-by=none  size=754 */

void __cdecl FUN_0047db10(int param_1,char *param_2)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  void *pvVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int local_31c;
  undefined1 local_318 [260];
  undefined1 local_214 [112];
  undefined4 local_1a4 [4];
  int local_194;
  char acStack_111 [265];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  memset(acStack_111 + 1,0,0x106);
  if (DAT_00583e10 == 0) {
    if (DAT_00583f38 == 0) {
      local_1a4[0] = 0x94;
      (*(code *)PTR_GetVersionExA_00583704)(local_1a4);
      DAT_00583f38 = (local_194 == 2) + 1;
    }
    if (DAT_00583f38 == 2) {
      (*(code *)PTR_GetTempPathW_005836ec)(0xe6,local_318);
      pvVar4 = FUN_004bdc10(local_318);
    }
    else {
      (*(code *)PTR_GetTempPathA_005836e0)(0xe6,local_214);
      pvVar5 = FUN_00480740(local_214);
      if (pvVar5 == (void *)0x0) goto LAB_0047dbcb;
      pvVar4 = FUN_004bdc10(pvVar5);
      FUN_00466dd0((int)pvVar5);
    }
    if (pvVar4 == (void *)0x0) {
LAB_0047dbcb:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00466a80(0xe6,acStack_111 + 1,&DAT_0056de50);
    FUN_00466dd0((int)pvVar4);
  }
  else {
    FUN_00466a80(0xe6,acStack_111 + 1,&DAT_0056de50);
  }
  pcVar7 = acStack_111 + 1;
  while (acStack_111[1] != '\0') {
    pcVar7 = pcVar7 + 1;
    acStack_111[1] = *pcVar7;
  }
  uVar8 = (int)pcVar7 - (int)(acStack_111 + 1) & 0x3fffffff;
  pcVar7 = "etilqs_";
  do {
    pcVar6 = pcVar7;
    pcVar7 = pcVar6 + 1;
  } while (*pcVar7 != '\0');
  uVar1 = uVar8;
  if (param_1 <= (int)(((uint)(pcVar6 + -0x56df4f) & 0x3fffffff) + 0x12 + uVar8)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  for (; (uVar1 != 0 && (acStack_111[uVar1] == '\\')); uVar1 = uVar1 - 1) {
  }
  if (uVar1 < 0x106) {
    acStack_111[uVar1 + 1] = '\0';
    pcVar7 = "%s\\etilqs_";
    if (uVar8 == 0) {
      pcVar7 = &DAT_0056df50;
    }
    FUN_00466a80(param_1 + -0x12,param_2,(byte *)pcVar7);
    uVar8 = 0;
    if (param_2 != (char *)0x0) {
      cVar3 = *param_2;
      pcVar7 = param_2;
      while (cVar3 != '\0') {
        pcVar7 = pcVar7 + 1;
        cVar3 = *pcVar7;
      }
      uVar8 = (int)pcVar7 - (int)param_2 & 0x3fffffff;
    }
    pcVar7 = param_2 + uVar8;
    iVar9 = 0xf;
    if (DAT_00582acc == 0) {
      local_31c = 0;
    }
    else {
      local_31c = (*DAT_00582b10)(5);
      if (local_31c != 0) {
        (*DAT_00582b18)(local_31c);
      }
    }
    do {
      cVar3 = FUN_00487580();
      *pcVar7 = cVar3;
      pcVar7 = pcVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    if (local_31c != 0) {
      (*DAT_00582b20)(local_31c);
    }
    iVar9 = 3;
    do {
      uVar1 = uVar8 + 5;
      param_2[uVar8] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8] % 0x3e];
      param_2[uVar8 + 1] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8 + 1] % 0x3e];
      param_2[uVar8 + 2] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8 + 2] % 0x3e];
      param_2[uVar8 + 3] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8 + 3] % 0x3e];
      param_2[uVar8 + 4] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8 + 4] % 0x3e];
      iVar9 = iVar9 + -1;
      uVar8 = uVar1;
    } while (iVar9 != 0);
    (param_2 + uVar1)[0] = '\0';
    (param_2 + uVar1)[1] = '\0';
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  ___report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* FUN_0047e970 @ 0047e970  kind=gamemisc  attributed-by=none  size=129 */

undefined4 __cdecl FUN_0047e970(char *param_1)

{
  char cVar1;
  code *local_18;
  code *local_14;
  int local_8;
  
  local_8 = 3;
  local_18 = FUN_00478e60;
  local_14 = FUN_0048b2c0;
  FUN_004bb020(&local_18,(int)param_1);
  if (local_8 == 0) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 2) & 0x200) != 0) {
    cVar1 = *param_1;
    while (cVar1 == -99) {
      param_1 = *(char **)(param_1 + 8);
      cVar1 = *param_1;
    }
    switch(*param_1) {
    case '^':
    case 'b':
    case -0x7f:
    case -0x7e:
    case -0x7d:
    case -0x7b:
      return 0;
    case -100:
      if (**(char **)(param_1 + 8) == -0x7e) {
        return 0;
      }
      if (**(char **)(param_1 + 8) == -0x7f) {
        return 0;
      }
    }
  }
  return 1;
}


/* FUN_0047eaa0 @ 0047eaa0  kind=gamemisc  attributed-by=none  size=289 */

undefined4 __cdecl FUN_0047eaa0(int param_1,int param_2,undefined4 *param_3,ulonglong *param_4)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  double local_c;
  
  memset(param_4,0,0x30);
  if (param_2 == 0) {
    uVar3 = FUN_0048b480(param_1,param_4);
    return uVar3;
  }
  piVar2 = (int *)*param_3;
  if ((*(char *)((int)piVar2 + 0x1e) == '\x02') || (*(char *)((int)piVar2 + 0x1e) == '\x01')) {
    uVar1 = *(ushort *)(piVar2 + 7);
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 4) == 0) {
        local_c = 0.0;
        if ((uVar1 & 0x12) != 0) {
          local_c = 0.0;
          FUN_0048cc90((byte *)piVar2[1],&local_c,piVar2[6],*(char *)((int)piVar2 + 0x1f));
        }
      }
      else {
        local_c = (double)*(longlong *)(piVar2 + 4);
      }
    }
    else {
      local_c = *(double *)(piVar2 + 2);
    }
    local_c = local_c * 86400000.0 + 0.5;
    uVar7 = FUN_0054a946();
    *param_4 = uVar7;
    *(undefined1 *)((int)param_4 + 0x2a) = 1;
  }
  else {
    pbVar4 = (byte *)FUN_004ae680(piVar2,1);
    if ((pbVar4 == (byte *)0x0) || (iVar5 = FUN_00485890(param_1,pbVar4,param_4), iVar5 != 0)) {
      return 1;
    }
  }
  iVar5 = 1;
  if (1 < param_2) {
    do {
      pbVar4 = (byte *)FUN_004ae680((int *)param_3[iVar5],1);
      if ((pbVar4 == (byte *)0x0) || (iVar6 = FUN_00485a80(param_1,pbVar4,param_4), iVar6 != 0)) {
        return 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  return 0;
}


/* FUN_0047ebd0 @ 0047ebd0  kind=gamemisc  attributed-by=none  size=369 */

undefined4 __cdecl
FUN_0047ebd0(int *param_1,undefined4 *param_2,int *param_3,int param_4,int *param_5,int param_6)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_18;
  uint uStack_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  if ((*param_3 == 0) || (0x3f < *param_5)) {
    return 0;
  }
  local_18 = 0;
  uStack_14 = 0;
  local_c = 0;
  if (0 < *param_5) {
    local_10 = 0;
    local_8 = 0;
    do {
      for (pcVar1 = *(char **)(local_10 + param_5[2]);
          (pcVar1 != (char *)0x0 && ((*pcVar1 == '\\' || (*pcVar1 == '\x18'))));
          pcVar1 = *(char **)(pcVar1 + 8)) {
      }
      if (*pcVar1 != -0x68) {
        return 0;
      }
      piVar2 = FUN_00479c50(param_2,*(int *)(pcVar1 + 0x18),(int)*(short *)(pcVar1 + 0x1c),
                            0xffffffff,0xffffffff,2,0);
      if (piVar2 == (int *)0x0) {
LAB_0047ec80:
        if (*(int *)(pcVar1 + 0x18) != param_4) {
          return 0;
        }
        uVar3 = 1 << (local_c & 0x1f);
        uVar4 = 0;
        if (0x1f < local_c) {
          uVar4 = uVar3;
        }
        uVar3 = uVar3 ^ uVar4;
        if (0x3f < local_c) {
          uVar4 = uVar3;
        }
        local_18 = local_18 | uVar3;
        local_8 = local_8 | uVar4;
      }
      else {
        uVar3 = FUN_0048e620(param_1,*(char **)(*piVar2 + 8),*(char **)(*piVar2 + 0xc));
        uVar4 = FUN_004984d0(param_1,pcVar1);
        if (uVar3 != uVar4) goto LAB_0047ec80;
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x14;
      uStack_14 = local_8;
    } while ((int)local_c < *param_5);
  }
  if (local_18 != 0 || uStack_14 != 0) {
    while ((param_6 < param_3[9] &&
           (uVar3 = FUN_00479b90(param_1,param_5,param_4,(int)param_3,param_6), -1 < (int)uVar3))) {
      uVar4 = 1 << (uVar3 & 0x1f);
      uVar5 = 0;
      if (0x1f < uVar3) {
        uVar5 = uVar4;
      }
      uVar4 = uVar4 ^ uVar5;
      if (0x3f < uVar3) {
        uVar5 = uVar4;
      }
      local_18 = local_18 & ~uVar4;
      uStack_14 = uStack_14 & ~uVar5;
      param_6 = param_6 + 1;
      if (local_18 == 0 && uStack_14 == 0) {
        return 1;
      }
    }
    if (local_18 != 0 || uStack_14 != 0) {
      return 0;
    }
  }
  return 1;
}


/* FUN_0047f090 @ 0047f090  kind=gamemisc  attributed-by=none  size=167 */

int __cdecl FUN_0047f090(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  puVar4 = (uint *)(*(int *)(param_1 + 0x34) + -0x58 + iVar1 * 0x58);
  while( true ) {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    if (puVar4[7] == param_2) break;
    puVar4 = puVar4 + -0x16;
  }
  if ((*puVar4 & 0x4000000) != 0) {
    return 1;
  }
  uVar2 = puVar4[4];
  if (uVar2 == 0) {
    if (param_3 != -1) {
      return 0;
    }
  }
  else if (-1 < param_3) {
    iVar1 = *(int *)(uVar2 + 0x24);
    iVar6 = 0;
    if (iVar1 < 1) {
      return 0;
    }
    piVar5 = *(int **)(uVar2 + 4);
    while (param_3 != *piVar5) {
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
      if (iVar1 <= iVar6) {
        return 0;
      }
    }
    if (iVar1 <= iVar6) {
      return 0;
    }
    bVar3 = *(byte *)(iVar6 + *(int *)(uVar2 + 0x1c));
    goto LAB_0047f11e;
  }
  bVar3 = 0;
LAB_0047f11e:
  if ((*puVar4 & 0x1000000) != 0) {
    bVar3 = 1 - bVar3;
  }
  return bVar3 + 2;
}


/* FUN_0047f1a0 @ 0047f1a0  kind=gamemisc  attributed-by=none  size=848 */

uint __cdecl FUN_0047f1a0(undefined4 *param_1,int *param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  ulonglong uVar20;
  uint local_40;
  uint uStack_3c;
  uint local_28;
  uint local_20;
  uint local_14;
  undefined4 *local_c;
  
  iVar15 = param_2[3];
  piVar2 = (int *)*param_1;
  local_20 = 2;
  iVar3 = *piVar2;
  bVar6 = false;
  if (param_1[0xb] == 0) {
    uVar11 = 0;
  }
  else {
    iVar13 = param_1[0xb] * 0x58;
    uVar11 = (uint)*(ushort *)(iVar13 + -0x52 + param_1[0xd]);
    if (((*(uint *)(iVar13 + -0x58 + param_1[0xd]) & 0x800000) == 0) ||
       ((*(byte *)(iVar3 + 0x34) & 0x80) != 0)) {
      return uVar11;
    }
  }
  piVar4 = (int *)param_1[8];
  if (*(char *)((int)param_2 + 0x2e) != '\0') {
    return uVar11;
  }
  iVar13 = *piVar4;
  bVar19 = (char)param_2[0xb] != '\0';
  iVar16 = 0;
  local_c = (undefined4 *)(piVar4[2] + uVar11 * 0x14);
  uVar12 = uVar11;
  local_14 = uVar11;
  uVar7 = local_20;
joined_r0x0047f249:
  local_20 = uVar7;
  if ((iVar13 <= (int)uVar12) || (param_2[9] < iVar16)) goto LAB_0047f426;
  for (pcVar5 = (char *)*local_c;
      (pcVar5 != (char *)0x0 && ((*pcVar5 == '\\' || (*pcVar5 == '\x18'))));
      pcVar5 = *(char **)(pcVar5 + 8)) {
  }
  if ((*pcVar5 != -0x68) || (*(int *)(pcVar5 + 0x18) != param_3)) goto LAB_0047f426;
  if ((*param_2 == 0) || (param_2[9] <= iVar16)) {
    iVar17 = -1;
    local_28 = 0;
    pbVar14 = (byte *)0x0;
  }
  else {
    iVar17 = *(int *)(param_2[1] + iVar16 * 4);
    if (iVar17 == *(short *)(param_2[3] + 0x24)) {
      iVar17 = -1;
    }
    local_28 = (uint)*(byte *)(param_2[7] + iVar16);
    pbVar14 = *(byte **)(param_2[8] + iVar16 * 4);
  }
  if (*(short *)(pcVar5 + 0x1c) == iVar17) {
    if (pbVar14 == (byte *)0x0) {
      bVar18 = true;
    }
    else {
      puVar8 = (undefined4 *)FUN_004984d0(piVar2,(char *)*local_c);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = *(undefined4 **)(iVar3 + 8);
      }
      iVar9 = FUN_004bcc60((byte *)*puVar8,pbVar14);
      bVar18 = iVar9 == 0;
    }
  }
  else {
    bVar18 = false;
  }
  bVar1 = *(byte *)(local_c + 3);
  piVar10 = FUN_00479c50((undefined4 *)param_1[1],param_3,iVar17,param_1[4],param_1[5],0x83,
                         (int)param_2);
  if (piVar10 == (int *)0x0) {
LAB_0047f3ac:
    iVar9 = 0;
LAB_0047f3b1:
    if (!bVar18) goto LAB_0047f3b5;
    if (((iVar9 != 1) && (local_20 = local_28 ^ bVar1, uVar7 != 2)) &&
       (local_20 = uVar7, (local_28 ^ bVar1) != uVar7)) goto LAB_0047f426;
    uVar12 = uVar12 + 1;
    local_c = local_c + 5;
    local_14 = uVar12;
    if (iVar17 < 0) {
      bVar6 = true;
LAB_0047f426:
      if (local_c == (undefined4 *)(piVar4[2] + uVar11 * 0x14)) {
        return uVar11;
      }
      *param_4 = local_20 & 1;
      if ((bVar6) || ((bVar19 && (param_2[9] <= iVar16)))) {
        piVar2 = *(int **)(param_1[1] + 4);
        uVar11 = 0;
        piVar10 = piVar2;
        if (0 < *piVar2) {
          do {
            if (piVar10[1] == param_3) {
              local_40 = 1 << (uVar11 & 0x1f);
              uStack_3c = 0;
              if (0x1f < uVar11) {
                uStack_3c = local_40;
              }
              local_40 = local_40 ^ uStack_3c;
              if (0x3f < uVar11) {
                uStack_3c = local_40;
              }
              goto LAB_0047f490;
            }
            uVar11 = uVar11 + 1;
            piVar10 = piVar10 + 1;
          } while ((int)uVar11 < *piVar2);
        }
        local_40 = 0;
        uStack_3c = 0;
LAB_0047f490:
        uVar12 = local_14;
        if ((int)local_14 < iVar13) {
          iVar15 = local_14 * 0x14;
          do {
            uVar20 = FUN_004791b0(piVar2,*(char **)(iVar15 + piVar4[2]));
            if (((uint)uVar20 & ~local_40) != 0 || ((uint)(uVar20 >> 0x20) & ~uStack_3c) != 0) {
              return local_14;
            }
            uVar12 = local_14 + 1;
            iVar15 = iVar15 + 0x14;
            local_14 = uVar12;
          } while ((int)uVar12 < iVar13);
        }
      }
      return uVar12;
    }
    if ((*(char *)(*(int *)(iVar15 + 4) + 0x14 + iVar17 * 0x18) == '\0') && (iVar9 != 1)) {
      bVar19 = false;
    }
  }
  else {
    if ((short)piVar10[4] == 1) goto LAB_0047f426;
    if ((short)piVar10[4] == 0x80) {
      bVar19 = false;
      iVar9 = 1;
      goto LAB_0047f3b1;
    }
    if (piVar10[6] == 0 && piVar10[7] == 0) {
      iVar9 = 1;
      goto LAB_0047f3b1;
    }
    pcVar5 = *(char **)(*piVar10 + 0xc);
    if (*pcVar5 != -0x68) goto LAB_0047f3ac;
    iVar9 = FUN_0047f090((int)param_1,*(uint *)(pcVar5 + 0x18),(int)*(short *)(pcVar5 + 0x1c));
    if (bVar18) {
      if ((iVar9 < 2) || (iVar9 == *(byte *)(local_c + 3) + 2)) goto LAB_0047f3b1;
      goto LAB_0047f426;
    }
LAB_0047f3b5:
    if (iVar9 == 0) goto LAB_0047f426;
  }
  iVar16 = iVar16 + 1;
  uVar7 = local_20;
  goto joined_r0x0047f249;
}


/* FUN_0047f780 @ 0047f780  kind=gamemisc  attributed-by=none  size=543 */

void __cdecl FUN_0047f780(ulonglong *param_1,int param_2,undefined4 *param_3)

{
  errno_t eVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  double local_40;
  ulonglong local_38;
  undefined4 *local_30;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_2c.tm_sec = 0;
  local_2c.tm_min = 0;
  local_2c.tm_hour = 0;
  local_2c.tm_mday = 0;
  local_2c.tm_mon = 0;
  local_2c.tm_year = 0;
  local_2c.tm_wday = 0;
  local_2c.tm_yday = 0;
  local_60 = *param_1;
  local_58 = param_1[1];
  local_50 = param_1[2];
  local_48 = param_1[3];
  local_40 = (double)param_1[4];
  local_38 = param_1[5];
  local_30 = param_3;
  local_2c.tm_isdst = 0;
  FUN_00475680((uint *)&local_60);
  FUN_004752f0(&local_60);
  if ((int)local_58 - 0x7b3U < 0x43) {
    local_40 = (double)(int)(local_40 + 0.5);
  }
  else {
    local_58 = 0x1000007d0;
    local_50 = 1;
    local_48 = 0;
    local_40 = 0.0;
  }
  local_48 = local_48 & 0xffffffff;
  local_38._0_3_ = (uint3)(ushort)local_38;
  FUN_004753b0(&local_60);
  uVar4 = __alldiv((uint)local_60,local_60._4_4_,1000,0);
  local_68 = (uint)uVar4 + 0xe75c96c0;
  local_64 = ((int)((ulonglong)uVar4 >> 0x20) + -0x31) - (uint)((uint)uVar4 < 0x18a36940);
  if (DAT_00582bb4 == 0) {
    eVar1 = _localtime64_s(&local_2c,(__time64_t *)&local_68);
    if (eVar1 == 0) {
      local_58 = CONCAT44(local_2c.tm_mon + 1,local_2c.tm_year + 0x76c);
      local_50 = CONCAT44(local_2c.tm_hour,local_2c.tm_mday);
      local_40 = (double)local_2c.tm_sec;
      local_48 = CONCAT44(local_48._4_4_,local_2c.tm_min);
      local_38 = CONCAT44(local_38._4_4_,0x101);
      FUN_004753b0(&local_60);
      *local_30 = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = 1000000000;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x50);
  }
  iVar3 = 0;
  if (-1 < iVar2) {
    do {
      if ("local time unavailable"[iVar3] == '\0') break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar2);
  }
  if (iVar3 <= iVar2) {
    iVar2 = FUN_004b7260((int *)(param_2 + 8),iVar3 + 1U,0);
    if (iVar2 == 0) {
      memcpy(*(void **)(param_2 + 0xc),"local time unavailable",iVar3 + 1U);
      *(int *)(param_2 + 0x20) = iVar3;
      *(undefined4 *)(param_2 + 0x24) = 0x1030202;
    }
  }
  *local_30 = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00480740 @ 00480740  kind=gamemisc  attributed-by=none  size=129 */

void * __cdecl FUN_00480740(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_AreFileApisANSI_0058356c)();
  iVar2 = (*(code *)PTR_MultiByteToWideChar_005837ac)(iVar1 == 0,0,param_1,0xffffffff,0,0);
  if (iVar2 * 2 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(iVar2 << 2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,iVar2 << 2);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_MultiByteToWideChar_005837ac)
                        (iVar1 == 0,0,param_1,0xffffffff,_Dst,iVar2 * 2);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004834d0 @ 004834d0  kind=gamemisc  attributed-by=none  size=1140 */

uint __cdecl FUN_004834d0(int *param_1,undefined4 *param_2,uint param_3,byte *param_4)

{
  uint uVar1;
  int *_Dst;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  void *pvVar6;
  uint uVar7;
  int local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_c = 0;
  *param_2 = 0;
  uVar1 = FUN_004bc920();
  if (uVar1 != 0) {
    return uVar1;
  }
  if ((1 << ((byte)param_3 & 7) & 0x46U) == 0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  if (DAT_00582acc == 0) {
    iVar2 = 0;
  }
  else if ((param_3 & 0x8000) == 0) {
    iVar2 = DAT_00582ad0;
    if ((param_3 & 0x10000) != 0) {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  if ((param_3 & 0x40000) == 0) {
    if (DAT_00582b8c != 0) {
      param_3 = param_3 | 0x20000;
    }
  }
  else {
    param_3 = param_3 & 0xfffdffff;
  }
  uVar1 = param_3 & 0xfff600e7;
  param_3 = uVar1;
  _Dst = (int *)FUN_004a0350(0x1f8);
  pbVar5 = local_8;
  if ((_Dst != (int *)0x0) && (memset(_Dst,0,0x1f8), pbVar5 = local_8, _Dst != (int *)0x0)) {
    if (iVar2 != 0) {
      if (DAT_00582acc == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*DAT_00582b10)(1);
      }
      _Dst[3] = iVar2;
      if (iVar2 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (int *)0x0;
        pbVar5 = local_8;
        goto LAB_004835dd;
      }
    }
    if (_Dst[3] != 0) {
      (*DAT_00582b18)(_Dst[3]);
    }
    _Dst[0xc] = 0xff;
    _Dst[5] = 2;
    _Dst[0x11] = -0xfc486fa;
    _Dst[4] = (int)(_Dst + 0x6e);
    _Dst[0x14] = 1000000000;
    _Dst[0x15] = 1000000000;
    _Dst[0x16] = 2000;
    _Dst[0x17] = 1000;
    _Dst[0x18] = 500;
    _Dst[0x19] = 25000;
    _Dst[0x1a] = 0x7f;
    _Dst[0x1b] = 10;
    _Dst[0x1c] = 50000;
    _Dst[0x1d] = 999;
    _Dst[6] = _Dst[6] | 0x480008;
    _Dst[0x1e] = 1000;
    *(undefined1 *)((int)_Dst + 0x36) = 1;
    *(undefined1 *)((int)_Dst + 0x3a) = 0xff;
    _Dst[0x10] = 0;
    _Dst[0x69] = 0;
    _Dst[0x68] = 0;
    _Dst[0x67] = 0;
    _Dst[0x6a] = 0;
    _Dst[0x4b] = 0;
    _Dst[0x4a] = 0;
    _Dst[0x49] = 0;
    _Dst[0x4c] = 0;
    FUN_004762d0((int)_Dst,(byte *)"BINARY",1,0,0x4708e0,0);
    FUN_004762d0((int)_Dst,(byte *)"BINARY",3,0,0x4708e0,0);
    FUN_004762d0((int)_Dst,(byte *)"BINARY",2,0,0x4708e0,0);
    FUN_004762d0((int)_Dst,(byte *)"RTRIM",1,1,0x4708e0,0);
    pbVar5 = local_8;
    if ((char)_Dst[0xe] == '\0') {
      piVar3 = FUN_00499500((int)_Dst,1,(byte *)"BINARY",0);
      _Dst[2] = (int)piVar3;
      FUN_004762d0((int)_Dst,(byte *)"NOCASE",1,0,0x483460,0);
      _Dst[10] = uVar1;
      iVar4 = FUN_004a2e90(param_4,param_1,&param_3,_Dst,&local_8,&local_c);
      pbVar5 = local_8;
      iVar2 = local_c;
      if (iVar4 == 0) {
        iVar2 = FUN_00490e00((undefined *)*_Dst,local_8,(int)_Dst,(undefined4 *)(_Dst[4] + 4),0,
                             param_3 | 0x100);
        if (iVar2 == 0) {
          pvVar6 = FUN_004a7a80((int)_Dst,*(undefined4 **)(_Dst[4] + 4));
          *(void **)(_Dst[4] + 0xc) = pvVar6;
          pvVar6 = FUN_004a7a80((int)_Dst,(undefined4 *)0x0);
          *(void **)(_Dst[4] + 0x1c) = pvVar6;
          *(undefined **)_Dst[4] = &DAT_0057151c;
          *(undefined1 *)(_Dst[4] + 9) = 3;
          *(undefined1 **)(_Dst[4] + 0x10) = &DAT_00571350;
          *(undefined1 *)(_Dst[4] + 0x19) = 1;
          _Dst[0x11] = -0x5fd65969;
          if ((char)_Dst[0xe] == '\0') {
            FUN_004961f0((int)_Dst,0,(byte *)0x0);
            uVar1 = FUN_00464130((int)_Dst,(byte *)"MATCH",2);
            if (uVar1 == 7) {
              *(undefined1 *)(_Dst + 0xe) = 1;
            }
            uVar1 = FUN_00468670((int)_Dst);
            if (uVar1 == 0) {
              FUN_0048d6f0((int)_Dst);
              uVar7 = FUN_00468670((int)_Dst);
              uVar1 = 0;
              if (uVar7 != 0) goto LAB_004835dd;
            }
            FUN_004961f0((int)_Dst,uVar1,(byte *)0x0);
            FUN_0048b660((int)_Dst,(undefined4 *)0x0,DAT_00582ae0,DAT_00582ae4);
            if (_Dst[3] != 0) {
              (*DAT_00582b18)(_Dst[3]);
            }
            _Dst[0x30] = (int)FUN_004ba730;
            _Dst[0x31] = 1000;
            if (_Dst[3] != 0) {
              (*DAT_00582b20)(_Dst[3]);
            }
          }
        }
        else {
          if (iVar2 == 0xc0a) {
            iVar2 = 7;
          }
          FUN_004961f0((int)_Dst,iVar2,(byte *)0x0);
        }
      }
      else {
        if (iVar4 == 7) {
          *(undefined1 *)(_Dst + 0xe) = 1;
        }
        pbVar5 = &DAT_0056de50;
        if (local_c == 0) {
          pbVar5 = (byte *)0x0;
        }
        FUN_004961f0((int)_Dst,iVar4,pbVar5);
        FUN_00466dd0(iVar2);
        pbVar5 = local_8;
      }
    }
  }
LAB_004835dd:
  FUN_00466dd0((int)pbVar5);
  if ((_Dst != (int *)0x0) && (_Dst[3] != 0)) {
    (*DAT_00582b20)(_Dst[3]);
  }
  uVar1 = FUN_00468670((int)_Dst);
  if (uVar1 != 7) {
    if (uVar1 != 0) {
      _Dst[0x11] = 0x4b771290;
    }
    *param_2 = _Dst;
    return uVar1 & 0xff;
  }
  FUN_00492580(_Dst,0);
  *param_2 = 0;
  return 7;
}


/* FUN_00485890 @ 00485890  kind=gamemisc  attributed-by=none  size=192 */

undefined4 __cdecl FUN_00485890(int param_1,byte *param_2,ulonglong *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  double local_c;
  
  iVar2 = FUN_00486460(param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_00485950(param_2,(int)param_3), iVar2 != 0)) {
    iVar2 = FUN_004bcc60(param_2,&DAT_0056dc7c);
    if (iVar2 == 0) {
      uVar3 = FUN_0048b480(param_1,param_3);
      return uVar3;
    }
    uVar5 = 0;
    if (param_2 != (byte *)0x0) {
      bVar1 = *param_2;
      pbVar4 = param_2;
      while (bVar1 != 0) {
        pbVar4 = pbVar4 + 1;
        bVar1 = *pbVar4;
      }
      uVar5 = (int)pbVar4 - (int)param_2 & 0x3fffffff;
    }
    iVar2 = FUN_0048cc90(param_2,&local_c,uVar5,'\x01');
    if (iVar2 == 0) {
      return 1;
    }
    local_c = local_c * 86400000.0 + 0.5;
    uVar6 = FUN_0054a946();
    *param_3 = uVar6;
    *(undefined1 *)((int)param_3 + 0x2a) = 1;
  }
  return 0;
}


/* FUN_00485950 @ 00485950  kind=gamemisc  attributed-by=none  size=303 */

undefined4 __cdecl FUN_00485950(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  byte *pbVar5;
  double dVar6;
  double dVar7;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  dVar6 = 0.0;
  iVar4 = FUN_0047d1b0(param_1);
  if (iVar4 != 2) {
    return 1;
  }
  pbVar5 = param_1 + 5;
  if (*pbVar5 == 0x3a) {
    iVar4 = FUN_0047d1b0(param_1 + 6);
    if (iVar4 != 1) {
      return 1;
    }
    pbVar5 = param_1 + 8;
    if ((*pbVar5 == 0x2e) && (((&DAT_00569720)[param_1[9]] & 4) != 0)) {
      dVar7 = 1.0;
      bVar1 = param_1[9];
      bVar2 = (&DAT_00569720)[bVar1];
      pbVar5 = param_1 + 9;
      while ((bVar2 & 4) != 0) {
        iVar4 = (int)(char)bVar1;
        bVar1 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
        dVar7 = dVar7 * 10.0;
        dVar6 = (dVar6 * 10.0 + (double)iVar4) - 48.0;
        bVar2 = (&DAT_00569720)[bVar1];
      }
      dVar6 = dVar6 / dVar7;
    }
  }
  else {
    local_8 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = local_c;
  *(undefined2 *)(param_2 + 0x29) = 1;
  *(undefined4 *)(param_2 + 0x18) = local_10;
  *(double *)(param_2 + 0x20) = (double)local_8 + dVar6;
  bVar3 = FUN_00486380(pbVar5,param_2);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    *(bool *)(param_2 + 0x2b) = *(int *)(param_2 + 0x1c) != 0;
    return 0;
  }
  return 1;
}


/* FUN_00485a80 @ 00485a80  kind=gamemisc  attributed-by=none  size=1322 */

/* WARNING: Removing unreachable block (ram,0x00485d42) */

void __cdecl FUN_00485a80(int param_1,byte *param_2,ulonglong *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint local_6c;
  int local_68;
  undefined4 local_3c;
  int iStack_38;
  double local_34;
  int local_2c;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar8 = 0;
  iStack_38 = param_1;
  local_2c = 1;
  iVar3 = -(int)param_2;
  do {
    if (*param_2 == 0) break;
    iVar8 = iVar8 + 1;
    param_2[(int)(local_28 + iVar3)] = (&DAT_00569620)[*param_2];
    param_2 = param_2 + 1;
  } while (iVar8 < 0x1d);
  local_28[iVar8] = 0;
  switch(local_28[0]) {
  case 0x2b:
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    uVar9 = 1;
    while (((local_28[1] != 0 && (local_28[1] != 0x3a)) && (((&DAT_00569720)[local_28[1]] & 1) == 0)
           )) {
      local_28[1] = local_28[uVar9 + 1];
      uVar9 = uVar9 + 1;
    }
    iVar3 = FUN_0048cc90(local_28,(double *)&local_3c,uVar9,'\x01');
    if (iVar3 != 0) {
      pbVar4 = local_28 + uVar9;
      if (local_28[uVar9] == 0x3a) {
        pbVar4 = local_28 + 1;
        if (((&DAT_00569720)[local_28[0]] & 4) != 0) {
          pbVar4 = local_28;
        }
        memset(&local_6c,0,0x30);
        iVar3 = FUN_00485950(pbVar4,(int)&local_6c);
        if (iVar3 == 0) {
          FUN_004753b0((ulonglong *)&local_6c);
          uVar9 = local_68 + -1 + (uint)(43199999 < local_6c);
          uVar13 = __alldiv(local_6c + 0xfd6cd200,uVar9,0xfad9a400,0xffffffff);
          lVar14 = __allmul((uint)uVar13,(int)((ulonglong)uVar13 >> 0x20),86400000,0);
          lVar14 = lVar14 + CONCAT44(uVar9,local_6c + 0xfd6cd200);
          if (local_28[0] == 0x2d) {
            lVar14 = CONCAT44(-((int)((ulonglong)lVar14 >> 0x20) + (uint)((int)lVar14 != 0)),
                              -(int)lVar14);
          }
          FUN_004753b0(param_3);
          uVar2 = *param_3;
          *(uint *)param_3 = (int)*param_3 + (uint)lVar14;
          *(undefined2 *)(param_3 + 5) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          *(int *)((int)param_3 + 4) =
               *(int *)((int)param_3 + 4) + (int)((ulonglong)lVar14 >> 0x20) +
               (uint)CARRY4((uint)uVar2,(uint)lVar14);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      else {
        bVar1 = (&DAT_00569720)[*pbVar4];
        while ((bVar1 & 1) != 0) {
          pbVar6 = pbVar4 + 1;
          pbVar4 = pbVar4 + 1;
          bVar1 = (&DAT_00569720)[*pbVar6];
        }
        bVar1 = *pbVar4;
        pbVar6 = pbVar4;
        while (bVar1 != 0) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        uVar9 = (int)pbVar6 - (int)pbVar4 & 0x3fffffff;
        if (uVar9 - 3 < 8) {
          if (pbVar4[uVar9 - 1] == 0x73) {
            pbVar4[uVar9 - 1] = 0;
            uVar9 = uVar9 - 1;
          }
          FUN_004753b0(param_3);
          dVar11 = (double)CONCAT44(iStack_38,local_3c);
          local_2c = 0;
          if (0.0 <= dVar11) {
            local_34 = 0.5;
          }
          else {
            local_34 = -0.5;
          }
          if (uVar9 == 3) {
            pbVar6 = &DAT_0056dcdc;
            do {
              bVar1 = *pbVar4;
              bVar10 = bVar1 < *pbVar6;
              if (bVar1 != *pbVar6) {
LAB_00486050:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_00486055;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar10 = bVar1 < pbVar6[1];
              if (bVar1 != pbVar6[1]) goto LAB_00486050;
              pbVar4 = pbVar4 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_00486055:
            if (uVar9 != 0) goto LAB_0048607e;
            local_34 = dVar11 * 86400000.0 + local_34;
          }
          else if (uVar9 == 4) {
            pbVar7 = &DAT_0056dce0;
            pbVar6 = pbVar4;
            do {
              bVar1 = *pbVar6;
              bVar10 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_004860d0:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_004860d5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar10 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_004860d0;
              pbVar6 = pbVar6 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_004860d5:
            if (uVar9 == 0) {
              local_34 = dVar11 * 3600000.0 + local_34;
            }
            else {
              pbVar6 = &DAT_0056dcd4;
              do {
                bVar1 = *pbVar4;
                bVar10 = bVar1 < *pbVar6;
                if (bVar1 != *pbVar6) {
LAB_00486114:
                  uVar9 = -(uint)bVar10 | 1;
                  goto LAB_00486119;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar10 = bVar1 < pbVar6[1];
                if (bVar1 != pbVar6[1]) goto LAB_00486114;
                pbVar4 = pbVar4 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar1 != 0);
              uVar9 = 0;
LAB_00486119:
              if (uVar9 != 0) goto LAB_0048607e;
              FUN_00475680((uint *)param_3);
              FUN_004752f0(param_3);
              *(int *)(param_3 + 1) = (int)param_3[1] + (int)dVar11;
              *(undefined1 *)((int)param_3 + 0x2a) = 0;
              FUN_004753b0(param_3);
              dVar11 = (double)(int)dVar11;
              if (dVar11 == (double)CONCAT44(iStack_38,local_3c)) goto LAB_0048607e;
              local_34 = ((double)CONCAT44(iStack_38,local_3c) - dVar11) * 365.0 * 86400000.0 +
                         local_34;
            }
          }
          else if (uVar9 == 6) {
            pcVar5 = "minute";
            pbVar6 = pbVar4;
            do {
              bVar1 = *pbVar6;
              bVar10 = bVar1 < (byte)*pcVar5;
              if (bVar1 != *pcVar5) {
LAB_004861b2:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_004861b7;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar10 = bVar1 < (byte)pcVar5[1];
              if (bVar1 != pcVar5[1]) goto LAB_004861b2;
              pbVar6 = pbVar6 + 2;
              pcVar5 = pcVar5 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_004861b7:
            if (uVar9 == 0) {
              local_34 = dVar11 * 60000.0 + local_34;
            }
            else {
              pcVar5 = "second";
              do {
                bVar1 = *pbVar4;
                bVar10 = bVar1 < (byte)*pcVar5;
                if (bVar1 != *pcVar5) {
LAB_00486200:
                  uVar9 = -(uint)bVar10 | 1;
                  goto LAB_00486205;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar10 = bVar1 < (byte)pcVar5[1];
                if (bVar1 != pcVar5[1]) goto LAB_00486200;
                pbVar4 = pbVar4 + 2;
                pcVar5 = pcVar5 + 2;
              } while (bVar1 != 0);
              uVar9 = 0;
LAB_00486205:
              if (uVar9 != 0) goto LAB_0048607e;
              local_34 = dVar11 * 1000.0 + local_34;
            }
          }
          else {
            if (uVar9 != 5) goto LAB_0048607e;
            pcVar5 = "month";
            do {
              bVar1 = *pbVar4;
              bVar10 = bVar1 < (byte)*pcVar5;
              if (bVar1 != *pcVar5) {
LAB_00486254:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_00486259;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar10 = bVar1 < (byte)pcVar5[1];
              if (bVar1 != pcVar5[1]) goto LAB_00486254;
              pbVar4 = pbVar4 + 2;
              pcVar5 = pcVar5 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_00486259:
            if (uVar9 != 0) goto LAB_0048607e;
            FUN_00475680((uint *)param_3);
            FUN_004752f0(param_3);
            dVar11 = (double)CONCAT44(iStack_38,local_3c);
            *(int *)((int)param_3 + 0xc) = *(int *)((int)param_3 + 0xc) + (int)dVar11;
            iVar8 = *(int *)((int)param_3 + 0xc);
            iVar3 = iVar8 + -1;
            if (iVar8 < 1) {
              iVar3 = iVar8 + -0xc;
            }
            *(int *)(param_3 + 1) = (int)param_3[1] + iVar3 / 0xc;
            *(int *)((int)param_3 + 0xc) = iVar8 + (iVar3 / 0xc) * -0xc;
            *(undefined1 *)((int)param_3 + 0x2a) = 0;
            FUN_004753b0(param_3);
            dVar11 = (double)(int)dVar11;
            if (dVar11 == (double)CONCAT44(iStack_38,local_3c)) goto LAB_0048607e;
            local_34 = ((double)CONCAT44(iStack_38,local_3c) - dVar11) * 30.0 * 86400000.0 +
                       local_34;
          }
          uVar15 = FUN_0054a946();
          uVar2 = *param_3;
          *(uint *)param_3 = (int)*param_3 + (uint)uVar15;
          *(int *)((int)param_3 + 4) =
               *(int *)((int)param_3 + 4) + (int)(uVar15 >> 0x20) +
               (uint)CARRY4((uint)uVar2,(uint)uVar15);
LAB_0048607e:
          *(undefined2 *)(param_3 + 5) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
    break;
  case 0x6c:
    pcVar5 = "localtime";
    pbVar4 = local_28;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00485b14:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00485b19;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_00485b14;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00485b19:
    if (uVar9 == 0) {
      FUN_004753b0(param_3);
      uVar13 = FUN_0047f780(param_3,param_1,&local_2c);
      uVar2 = *param_3;
      *(uint *)param_3 = (int)*param_3 + (uint)uVar13;
      *(undefined2 *)(param_3 + 5) = 0;
      *(int *)((int)param_3 + 4) =
           *(int *)((int)param_3 + 4) + (int)((ulonglong)uVar13 >> 0x20) +
           (uint)CARRY4((uint)uVar2,(uint)uVar13);
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    break;
  case 0x73:
    iVar3 = strncmp((char *)local_28,"start of ",9);
    if (iVar3 == 0) {
      FUN_00475680((uint *)param_3);
      *(undefined2 *)((int)param_3 + 0x29) = 1;
      *(undefined4 *)(param_3 + 3) = 0;
      *(undefined4 *)((int)param_3 + 0x14) = 0;
      param_3[4] = 0;
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      pcVar5 = "month";
      pbVar4 = local_28 + 9;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_00485df0:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00485df5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_00485df0;
        pbVar4 = pbVar4 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00485df5:
      if (uVar9 == 0) {
LAB_00485e3a:
        *(undefined4 *)(param_3 + 2) = 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pbVar6 = &DAT_0056dcd4;
      pbVar4 = local_28 + 9;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00485e21:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00485e26;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00485e21;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00485e26:
      if (uVar9 == 0) {
        FUN_00475680((uint *)param_3);
        *(undefined4 *)((int)param_3 + 0xc) = 1;
        goto LAB_00485e3a;
      }
      pbVar6 = &DAT_0056dcdc;
      pbVar4 = local_28 + 9;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00485e80:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00485e85;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00485e80;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00485e85:
      if (uVar9 == 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    break;
  case 0x75:
    pcVar5 = "unixepoch";
    pbVar4 = local_28;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00485b80:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00485b85;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_00485b80;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00485b85:
    if ((uVar9 == 0) && (*(char *)((int)param_3 + 0x2a) != '\0')) {
      lVar14 = __alldiv((uint)*param_3 + 0xa8c0,
                        *(int *)((int)param_3 + 4) + (uint)(0xffff573f < (uint)*param_3),0x15180,0);
      *param_3 = lVar14 + 0xbfc83e532200;
      *(undefined2 *)(param_3 + 5) = 0;
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pbVar6 = &DAT_0056dcb0;
    pbVar4 = local_28;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00485c00:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00485c05;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00485c00;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00485c05:
    if (uVar9 == 0) {
      FUN_004753b0(param_3);
      lVar14 = FUN_0047f780(param_3,param_1,&local_2c);
      if (local_2c == 0) {
        uVar2 = *param_3;
        *(uint *)param_3 = (int)*param_3 - (uint)lVar14;
        *(undefined2 *)(param_3 + 5) = 0;
        *(undefined1 *)((int)param_3 + 0x2b) = 0;
        *(int *)((int)param_3 + 4) =
             (*(int *)((int)param_3 + 4) - (int)((ulonglong)lVar14 >> 0x20)) -
             (uint)((uint)uVar2 < (uint)lVar14);
        lVar12 = FUN_0047f780(param_3,iStack_38,&local_2c);
        uVar9 = (uint)(lVar14 - lVar12);
        uVar2 = *param_3;
        *(uint *)param_3 = (int)*param_3 + uVar9;
        *(int *)((int)param_3 + 4) =
             *(int *)((int)param_3 + 4) + (int)((ulonglong)(lVar14 - lVar12) >> 0x20) +
             (uint)CARRY4((uint)uVar2,uVar9);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_00486300;
    }
    break;
  case 0x77:
    iVar3 = strncmp((char *)local_28,"weekday ",8);
    if (iVar3 == 0) {
      pbVar4 = local_28 + 8;
      while (local_28[8] != 0) {
        pbVar4 = pbVar4 + 1;
        local_28[8] = *pbVar4;
      }
      iVar3 = FUN_0048cc90(local_28 + 8,(double *)&local_3c,
                           (int)pbVar4 - (int)(local_28 + 8) & 0x3fffffff,'\x01');
      if (iVar3 != 0) {
        dVar11 = (double)CONCAT44(iStack_38,local_3c);
        uVar9 = (uint)dVar11;
        if ((((double)(int)uVar9 == dVar11) && (-1 < (int)uVar9)) && (dVar11 < 7.0)) {
          FUN_00475680((uint *)param_3);
          FUN_004752f0(param_3);
          *(undefined2 *)((int)param_3 + 0x2a) = 0;
          FUN_004753b0(param_3);
          uVar13 = __alldiv((uint)*param_3 + 0x7b98a00,
                            *(int *)((int)param_3 + 4) + (uint)(0xf84675ff < (uint)*param_3),
                            86400000,0);
          lVar14 = __allrem((uint)uVar13,(uint)((ulonglong)uVar13 >> 0x20),7,0);
          if ((int)uVar9 < lVar14) {
            lVar14 = lVar14 + -7;
          }
          lVar14 = __allmul(uVar9 - (uint)lVar14,
                            (((int)uVar9 >> 0x1f) - (int)((ulonglong)lVar14 >> 0x20)) -
                            (uint)(uVar9 < (uint)lVar14),86400000,0);
          uVar2 = *param_3;
          *(uint *)param_3 = (int)*param_3 + (uint)lVar14;
          *(undefined2 *)(param_3 + 5) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          *(uint *)((int)param_3 + 4) =
               (int)((ulonglong)lVar14 >> 0x20) + *(int *)((int)param_3 + 4) +
               (uint)CARRY4((uint)uVar2,(uint)lVar14);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
  }
LAB_00486300:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00486380 @ 00486380  kind=gamemisc  attributed-by=none  size=206 */

bool __cdecl FUN_00486380(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  bVar2 = (&DAT_00569720)[*param_1];
  pbVar4 = param_1;
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = (&DAT_00569720)[*pbVar1];
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  bVar2 = *pbVar4;
  if (bVar2 == 0x2d) {
    iVar5 = -1;
  }
  else {
    if (bVar2 != 0x2b) {
      if ((bVar2 != 0x5a) && (bVar2 != 0x7a)) {
        return bVar2 != 0;
      }
      pbVar4 = pbVar4 + 1;
      goto LAB_0048642f;
    }
    iVar5 = 1;
  }
  iVar3 = FUN_0047d1b0(pbVar4 + 1);
  if (iVar3 != 2) {
    return true;
  }
  pbVar4 = pbVar4 + 6;
  *(int *)(param_2 + 0x1c) = (param_2 + (int)param_1 * 0x3c) * iVar5;
LAB_0048642f:
  bVar2 = (&DAT_00569720)[*pbVar4];
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = (&DAT_00569720)[*pbVar1];
  }
  return *pbVar4 != 0;
}


/* FUN_00486460 @ 00486460  kind=gamemisc  attributed-by=none  size=213 */

undefined4 __cdecl FUN_00486460(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar1 = *param_1;
  pbVar3 = param_1;
  if (bVar1 == 0x2d) {
    pbVar3 = param_1 + 1;
  }
  iVar2 = FUN_0047d1b0(pbVar3);
  if (iVar2 == 3) {
    for (pbVar3 = pbVar3 + 10; (((&DAT_00569720)[*pbVar3] & 1) != 0 || (*pbVar3 == 0x54));
        pbVar3 = pbVar3 + 1) {
    }
    iVar2 = FUN_00485950(pbVar3,(int)param_2);
    if (iVar2 != 0) {
      if (*pbVar3 != 0) {
        return 1;
      }
      *(undefined1 *)((int)param_2 + 0x29) = 0;
    }
    *(undefined1 *)((int)param_2 + 0x2a) = 0;
    *(undefined1 *)(param_2 + 5) = 1;
    if (bVar1 == 0x2d) {
      param_1 = (byte *)-(int)param_1;
    }
    *(byte **)(param_2 + 1) = param_1;
    *(undefined4 *)((int)param_2 + 0xc) = local_8;
    *(undefined4 *)(param_2 + 2) = local_c;
    if (*(char *)((int)param_2 + 0x2b) != '\0') {
      FUN_004753b0(param_2);
    }
    return 0;
  }
  return 1;
}


/* FUN_00486540 @ 00486540  kind=gamemisc  attributed-by=none  size=856 */

bool __cdecl FUN_00486540(char *param_1,byte *param_2,ushort *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  bool bVar13;
  
  uVar5 = param_3[1];
  bVar2 = *(byte *)((int)param_3 + 1);
  uVar6 = *param_3;
  uVar8 = (uint)*param_3;
  cVar3 = *(char *)((int)param_3 + 3);
  bVar12 = false;
  bVar4 = false;
  uVar7 = FUN_004ad280((int *)&param_1);
  if (uVar7 != 0) {
    do {
      if ((uVar7 == (byte)uVar6) && (!bVar12)) goto LAB_00486710;
      if ((uVar7 != uVar8 >> 8) || (bVar12)) {
        if (uVar7 == (byte)uVar5) {
          uVar7 = 0;
          uVar8 = FUN_004ad280((int *)&param_2);
          if (uVar8 == 0) {
            return false;
          }
          uVar9 = FUN_004ad280((int *)&param_1);
          bVar12 = uVar9 == 0x5e;
          if (bVar12) {
            uVar9 = FUN_004ad280((int *)&param_1);
          }
          bVar13 = uVar9 == 0x5d;
          if (bVar13) {
            uVar9 = FUN_004ad280((int *)&param_1);
          }
          bVar13 = bVar13 && uVar8 == 0x5d;
          if (uVar9 == 0) {
            return false;
          }
          while (uVar9 != 0x5d) {
            if ((((uVar9 == 0x2d) && (*param_1 != ']')) && (*param_1 != '\0')) && (uVar7 != 0)) {
              uVar9 = FUN_004ad280((int *)&param_1);
              if ((uVar7 <= uVar8) && (uVar8 <= uVar9)) {
                bVar13 = true;
              }
              uVar7 = 0;
            }
            else {
              uVar7 = uVar9;
              if (uVar8 == uVar9) {
                bVar13 = true;
              }
            }
            uVar9 = FUN_004ad280((int *)&param_1);
            if (uVar9 == 0) {
              return false;
            }
          }
          if (bVar12 == bVar13) {
            return false;
          }
          uVar8 = (uint)bVar2 << 8;
          bVar12 = bVar4;
        }
        else if ((param_4 != uVar7) || (bVar12)) {
          uVar9 = FUN_004ad280((int *)&param_2);
          if (cVar3 != '\0') {
            if ((uVar7 & 0xffffff80) == 0) {
              uVar7 = (uint)(byte)(&DAT_00569620)[uVar7];
            }
            if ((uVar9 & 0xffffff80) == 0) {
              uVar9 = (uint)(byte)(&DAT_00569620)[uVar9];
            }
          }
          if (uVar7 != uVar9) {
            return false;
          }
          bVar12 = false;
          bVar4 = bVar12;
        }
        else {
          bVar12 = true;
          bVar4 = bVar12;
        }
      }
      else {
        uVar7 = FUN_004ad280((int *)&param_2);
        if (uVar7 == 0) {
          return false;
        }
      }
      uVar7 = FUN_004ad280((int *)&param_1);
    } while (uVar7 != 0);
  }
  return *param_2 == 0;
LAB_00486710:
  while ((uVar9 = FUN_004ad280((int *)&param_1), uVar7 = param_4, uVar9 == (byte)uVar6 ||
         (uVar9 == uVar8 >> 8))) {
    if ((uVar9 == uVar8 >> 8) && (uVar7 = FUN_004ad280((int *)&param_2), uVar7 == 0)) {
      return false;
    }
  }
  if (uVar9 == 0) {
    return true;
  }
  if (uVar9 == param_4) {
    uVar9 = FUN_004ad280((int *)&param_1);
    if (uVar9 == 0) {
      return false;
    }
  }
  else if (uVar9 == (byte)uVar5) {
    pbVar10 = param_2;
    if (*param_2 != 0) {
      pcVar11 = param_1 + -1;
      do {
        bVar12 = FUN_00486540(pcVar11,pbVar10,param_3,uVar7);
        if (CONCAT31(extraout_var,bVar12) != 0) break;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (0xbf < bVar2) {
          bVar2 = *pbVar10;
          while ((bVar2 & 0xc0) == 0x80) {
            pbVar1 = pbVar10 + 1;
            pbVar10 = pbVar10 + 1;
            bVar2 = *pbVar1;
          }
        }
      } while (*pbVar10 != 0);
    }
    return *pbVar10 != 0;
  }
  uVar8 = FUN_004ad280((int *)&param_2);
  pcVar11 = param_1;
  if (uVar8 == 0) {
    return false;
  }
  do {
    if (cVar3 == '\0') {
      while (uVar8 != uVar9) {
        uVar8 = FUN_004ad280((int *)&param_2);
        if (uVar8 == 0) {
          return false;
        }
      }
    }
    else {
      if ((uVar8 & 0xffffff80) == 0) {
        uVar8 = (uint)(byte)(&DAT_00569620)[uVar8];
      }
      if ((uVar9 & 0xffffff80) == 0) {
        uVar9 = (uint)(byte)(&DAT_00569620)[uVar9];
      }
      if (uVar8 == 0) {
        return false;
      }
      while (uVar8 != uVar9) {
        uVar8 = FUN_004ad280((int *)&param_2);
        if ((uVar8 & 0xffffff80) == 0) {
          uVar8 = (uint)(byte)(&DAT_00569620)[uVar8];
        }
        if (uVar8 == 0) {
          return false;
        }
      }
    }
    bVar12 = FUN_00486540(pcVar11,param_2,param_3,uVar7);
    if (CONCAT31(extraout_var_00,bVar12) != 0) {
      return true;
    }
    uVar8 = FUN_004ad280((int *)&param_2);
  } while (uVar8 != 0);
  return false;
}


/* FUN_004869b0 @ 004869b0  kind=gamemisc  attributed-by=none  size=109 */

undefined4 * __cdecl FUN_004869b0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b20)(*(int *)*param_1);
  }
  puVar1 = FUN_004868a0(param_1[1] + param_1[2] + 0x1c);
  puVar2 = (undefined4 *)(param_1[1] + (int)puVar1);
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b18)(*(int *)*param_1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar2 = puVar1;
    puVar2[1] = puVar2 + 7;
    if (param_1[3] != 0) {
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 1;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


/* FUN_00486a20 @ 00486a20  kind=gamemisc  attributed-by=none  size=195 */

void __cdecl FUN_00486a20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0x10)) {
    do {
      puVar2 = *(undefined4 **)(param_1 + 0x18);
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      iVar3 = *(int *)puVar2[4];
      if ((puVar2[5] != 0) || (puVar2 == *(undefined4 **)(iVar3 + 0x18))) {
        if (puVar2[6] != 0) {
          *(undefined4 *)(puVar2[6] + 0x14) = puVar2[5];
        }
        if (puVar2[5] != 0) {
          *(undefined4 *)(puVar2[5] + 0x18) = puVar2[6];
        }
        if (*(undefined4 **)(iVar3 + 0x14) == puVar2) {
          *(undefined4 *)(iVar3 + 0x14) = puVar2[5];
        }
        if (*(undefined4 **)(iVar3 + 0x18) == puVar2) {
          *(undefined4 *)(iVar3 + 0x18) = puVar2[6];
        }
        puVar2[5] = 0;
        puVar2[6] = 0;
        *(int *)(puVar2[4] + 0x20) = *(int *)(puVar2[4] + 0x20) + -1;
      }
      iVar3 = puVar2[4];
      piVar1 = (int *)(*(int *)(iVar3 + 0x2c) + ((uint)puVar2[2] % *(uint *)(iVar3 + 0x28)) * 4);
      puVar4 = (undefined4 *)*piVar1;
      while (puVar4 != puVar2) {
        piVar1 = puVar4 + 3;
        puVar4 = (undefined4 *)*piVar1;
      }
      *piVar1 = *(int *)(*piVar1 + 0xc);
      *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + -1;
      piVar1 = (int *)puVar2[4];
      FUN_00486af0((undefined4 *)*puVar2);
      if (piVar1[3] != 0) {
        piVar1 = (int *)(*piVar1 + 0x10);
        *piVar1 = *piVar1 + -1;
      }
    } while (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0x10));
  }
  return;
}


/* FUN_00486bf0 @ 00486bf0  kind=gamemisc  attributed-by=none  size=38 */

void __cdecl FUN_00486bf0(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = (int *)param_1[4];
    FUN_00486af0((undefined4 *)*param_1);
    if (piVar1[3] != 0) {
      piVar1 = (int *)(*piVar1 + 0x10);
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}


