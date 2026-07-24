// WorldInfo (world) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "WorldInfo.h"

/* cube::WorldInfo::WorldInfo @ 00466a70  kind=game  attributed-by=rtti  size=41 */

WorldInfo * __thiscall cube::WorldInfo::WorldInfo(WorldInfo *this)

{
  this->vftablePtr = &vftable;
  (this->WorldInfo_data).offset_0x0 = 0;
  (this->WorldInfo_data).offset_0x18 = 0xf;
  (this->WorldInfo_data).offset_0x14 = (void *)0x0;
  *(undefined1 *)&(this->WorldInfo_data).offset_0x4 = 0;
  (this->WorldInfo_data).offset_0x20 = 0;
  return this;
}


/* cube::WorldInfo::WorldInfo_Constructor_or_Destructor @ 0046a8a0  kind=game  attributed-by=rtti  size=3652 */

void __fastcall cube::WorldInfo::WorldInfo_Constructor_or_Destructor(cube__WorldInfo_data *param_1)

{
  code cVar1;
  WorldInfo_vftable *pWVar2;
  deleting_destructor *pdVar3;
  undefined4 **ppuVar4;
  undefined4 **ppuVar5;
  undefined4 **ppuVar6;
  cube__WorldInfo_data *pcVar7;
  uint uVar8;
  deleting_destructor *pdVar9;
  int iVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uVar14;
  WorldInfo_vftable *pWVar15;
  char cVar16;
  WorldInfo_vftable *pWVar17;
  int iVar18;
  uint uVar19;
  deleting_destructor *pdVar20;
  code *pcVar21;
  deleting_destructor *pdVar22;
  int iVar23;
  deleting_destructor *pdVar24;
  cube__WorldInfo_data *pcVar25;
  code *pcVar26;
  bool bVar27;
  undefined8 uVar28;
  int local_f4;
  float local_f0;
  int local_ec;
  DWORD local_e8;
  int local_e4;
  void *local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined4 *local_d0;
  int local_cc;
  deleting_destructor *local_c8;
  undefined4 local_c4;
  deleting_destructor *local_c0;
  deleting_destructor *pdStack_bc;
  deleting_destructor *local_b8;
  deleting_destructor *local_b4;
  char local_ad;
  deleting_destructor *local_ac;
  deleting_destructor *local_a8;
  cube__WorldInfo_data *local_a4;
  deleting_destructor *local_a0;
  char local_99;
  undefined1 local_98 [4];
  void *local_94;
  uint local_80;
  undefined1 local_7c [4];
  void *local_78;
  uint local_64;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  deleting_destructor *local_48;
  deleting_destructor *pdStack_44;
  deleting_destructor *local_40;
  deleting_destructor *pdStack_3c;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e54e1;
  local_10 = ExceptionList;
  uVar8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a4 = param_1;
  local_14 = uVar8;
  local_e8 = timeGetTime();
  if (*(char *)&param_1->field_0x0[0x20016c].deleting_destructor == '\0') {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1->field_0x0 + 0x200174));
  pWVar2 = param_1->field_0x0;
  if (pWVar2[0x200294].deleting_destructor == pWVar2[0x200112].deleting_destructor) {
    pdVar20 = pWVar2[0xe2].deleting_destructor;
    pWVar17 = pWVar2 + 0xde;
    pWVar15 = pWVar2 + 0x200295;
    if ((deleting_destructor *)0xf < pWVar2[0xe3].deleting_destructor) {
      pWVar17 = (WorldInfo_vftable *)pWVar17->deleting_destructor;
    }
    pdVar24 = pWVar2[0x200299].deleting_destructor;
    if ((deleting_destructor *)0xf < pWVar2[0x20029a].deleting_destructor) {
      pWVar15 = (WorldInfo_vftable *)pWVar15->deleting_destructor;
    }
    pdVar9 = pdVar20;
    if (pdVar24 < pdVar20) {
      pdVar9 = pdVar24;
    }
    iVar10 = FUN_0040c590(pWVar15,pWVar17,pdVar9,uVar8);
    bVar27 = false;
    if (iVar10 == 0) {
      if (pdVar24 < pdVar20) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (uint)(pdVar24 != pdVar20);
      }
      bVar27 = uVar8 == 0;
    }
    if (!bVar27) goto LAB_0046a96f;
    cVar16 = '\0';
  }
  else {
LAB_0046a96f:
    cVar16 = '\x01';
  }
  local_1c = *(undefined8 *)(pWVar2 + 0xab);
  local_c0 = pWVar2[0xad].deleting_destructor;
  pdStack_bc = pWVar2[0xae].deleting_destructor;
  local_99 = cVar16;
  FUN_00459250(pWVar2 + 0xb1);
  pcVar25 = local_a4;
  local_8 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_a4->field_0x0 + 0x200174));
  pcVar7 = local_a4;
  if (cVar16 == '\0') {
    local_ad = '\0';
    local_b8 = *(deleting_destructor **)local_c8;
    local_e4 = 0x90000;
    if (local_b8 != local_c8) {
      do {
        local_30 = *(int *)(local_b8 + 8);
        iStack_2c = *(int *)(local_b8 + 0xc);
        local_ac = (deleting_destructor *)(local_30 - 3);
        local_b4 = (deleting_destructor *)(local_30 + 3);
        pdVar20 = (deleting_destructor *)(iStack_2c + -3);
        local_cc = iStack_2c + 3;
        if ((int)local_ac < 0) {
          local_ac = (deleting_destructor *)0x0;
        }
        if (0xffff < (int)local_b4) {
          local_b4 = (deleting_destructor *)0xffff;
        }
        if ((int)pdVar20 < 0) {
          pdVar20 = (deleting_destructor *)0x0;
        }
        if (0xffff < local_cc) {
          local_cc = 0xffff;
        }
        if ((int)local_ac <= (int)local_b4) {
          local_a8 = (deleting_destructor *)((int)local_ac * 0x100 + 0x80);
          do {
            if ((int)pdVar20 <= local_cc) {
              local_a0 = (deleting_destructor *)((int)pdVar20 * 0x100 + 0x80);
              pdVar24 = pdVar20;
              do {
                iVar10 = ((int)local_c0 - (int)local_a8) * ((int)local_c0 - (int)local_a8) +
                         ((int)pdStack_bc - (int)local_a0) * ((int)pdStack_bc - (int)local_a0);
                if (iVar10 < local_e4) {
                  if ((((-1 < (int)local_ac) && (-1 < (int)pdVar24)) && ((int)local_a8 < 0x1000080))
                     && ((int)pdVar24 < 0x10000)) {
                    iVar23 = (int)(local_ac + ((int)local_ac >> 0x1f & 0x3f)) >> 6;
                    iVar18 = (int)(pdVar24 + ((int)pdVar24 >> 0x1f & 0x3f)) >> 6;
                    if (((-1 < iVar23) && (-1 < iVar18)) &&
                       ((iVar23 < 0x400 &&
                        ((iVar18 < 0x400 &&
                         (pdVar9 = local_a4->field_0x0[iVar23 * 0x400 + iVar18 + 0xe8].
                                   deleting_destructor, pdVar9 != (deleting_destructor *)0x0)))))) {
                      uVar8 = (uint)local_ac & 0x8000003f;
                      if ((int)uVar8 < 0) {
                        uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
                      }
                      uVar19 = (uint)pdVar24 & 0x8000003f;
                      if ((int)uVar19 < 0) {
                        uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
                      }
                      if (*(int *)(pdVar9 + (uVar8 * 0x40 + uVar19) * 4 + 0x10018) != 0)
                      goto LAB_0046ac49;
                    }
                  }
                  local_ad = '\x01';
                  local_e4 = iVar10;
                  local_48 = local_ac;
                  pdStack_44 = pdVar24;
                  local_40 = local_ac;
                  pdStack_3c = pdVar24;
                }
LAB_0046ac49:
                pdVar24 = pdVar24 + 1;
                local_a0 = local_a0 + 0x100;
                local_38 = CONCAT44(pdStack_bc,local_c0);
              } while ((int)pdVar24 <= local_cc);
            }
            local_ac = local_ac + 1;
            local_a8 = local_a8 + 0x100;
          } while ((int)local_ac <= (int)local_b4);
        }
        pdVar9 = pdStack_44;
        pdVar24 = local_48;
        local_b8 = *(deleting_destructor **)local_b8;
      } while (local_b8 != local_c8);
      pcVar25 = pcVar7;
      pdStack_bc = pdVar20;
      if (local_ad != '\0') {
        FUN_005e4850(local_48,pdStack_44);
        FUN_0059c480();
        iVar10 = FUN_00602440(pdVar24,pdVar9);
        if (iVar10 != 0) {
          *(undefined1 *)(iVar10 + 0x28) = 1;
        }
        FUN_00601ea0();
        EnterCriticalSection((LPCRITICAL_SECTION)(pcVar7->field_0x0 + 0x200174));
        LeaveCriticalSection((LPCRITICAL_SECTION)(pcVar7->field_0x0 + 0x200174));
      }
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(pcVar25->field_0x0 + 0x200180));
    pdVar20 = pcVar25->field_0x0[0xb7].deleting_destructor;
    iVar10 = (int)local_1c;
    if ((int)local_1c < (int)(pdVar20 + (int)local_1c)) {
      do {
        iVar23 = local_1c._4_4_;
        if (local_1c._4_4_ < (int)(pdVar20 + local_1c._4_4_)) {
          do {
            if ((((-1 < iVar10) && (-1 < iVar23)) && (iVar10 < 0x80000)) && (iVar23 < 0x80000)) {
              FUN_00486ba0();
            }
            iVar23 = iVar23 + 1;
          } while (iVar23 < (int)(local_a4->field_0x0[0xb7].deleting_destructor + local_1c._4_4_));
        }
        iVar10 = iVar10 + 1;
        pdVar20 = local_a4->field_0x0[0xb7].deleting_destructor;
        pcVar25 = local_a4;
      } while (iVar10 < (int)(pdVar20 + (int)local_1c));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(pcVar25->field_0x0 + 0x200180));
  }
  DVar11 = timeGetTime();
  if ((local_99 == '\0') && ((int)(DVar11 - local_e8) < 0x3e9)) goto LAB_0046b6a3;
  local_a0 = (deleting_destructor *)0x0;
  local_ac = (deleting_destructor *)0xe8;
  pdVar20 = local_c8;
  cVar16 = local_99;
  local_e8 = DVar11;
  do {
    local_a8 = (deleting_destructor *)0x0;
    pdVar24 = local_a0;
    pdVar9 = local_ac;
    do {
      pdVar22 = local_a8;
      if (((-1 < (int)pdVar24) && (-1 < (int)local_a8)) &&
         (((int)pdVar9 < 0x1000e8 &&
          (((int)local_a8 < 0x400 &&
           (pdVar3 = pcVar25->field_0x0[(int)(pdVar9 + (int)local_a8)].deleting_destructor,
           pdVar24 = local_a0, pdVar9 = local_ac, pdVar3 != (deleting_destructor *)0x0)))))) {
        pcVar21 = pdVar3 + 0x10018;
        local_b4 = (deleting_destructor *)0x40;
        do {
          local_b8 = (deleting_destructor *)0x40;
          do {
            pcVar25 = local_a4;
            iVar10 = *(int *)pcVar21;
            if (iVar10 != 0) {
              if (cVar16 == '\0') {
                for (pdVar24 = *(deleting_destructor **)pdVar20; pdVar24 != pdVar20;
                    pdVar24 = *(deleting_destructor **)pdVar24) {
                  iVar18 = *(int *)(iVar10 + 0x60) - *(int *)(pdVar24 + 8);
                  iVar23 = *(int *)(iVar10 + 100) - *(int *)(pdVar24 + 0xc);
                  cVar16 = local_99;
                  if (iVar18 * iVar18 + iVar23 * iVar23 < 0x10) goto LAB_0046ae42;
                }
              }
              FUN_005a4890(*(undefined4 *)(iVar10 + 0x60),*(undefined4 *)(iVar10 + 100));
              pdVar20 = local_c8;
              cVar16 = local_99;
            }
LAB_0046ae42:
            pdVar22 = local_a8;
            pcVar21 = pcVar21 + 4;
            local_b8 = local_b8 + -1;
          } while (local_b8 != (deleting_destructor *)0x0);
          local_b4 = local_b4 + -1;
        } while (local_b4 != (deleting_destructor *)0x0);
        if (cVar16 == '\0') {
          for (pdVar24 = *(deleting_destructor **)pdVar20; pdVar24 != pdVar20;
              pdVar24 = *(deleting_destructor **)pdVar24) {
            uVar8 = (int)local_a0 -
                    ((int)((*(int *)(pdVar24 + 8) >> 0x1f & 0x3fU) + *(int *)(pdVar24 + 8)) >> 6);
            uVar19 = (int)uVar8 >> 0x1f;
            if (((int)((uVar8 ^ uVar19) - uVar19) < 3) &&
               (uVar8 = (int)local_a8 -
                        ((int)((*(int *)(pdVar24 + 0xc) >> 0x1f & 0x3fU) + *(int *)(pdVar24 + 0xc))
                        >> 6), uVar19 = (int)uVar8 >> 0x1f, (int)((uVar8 ^ uVar19) - uVar19) < 3))
            goto LAB_0046aed2;
          }
        }
        FUN_005a4800(local_a0,local_a8);
        pdVar20 = local_c8;
        if (local_99 == '\0') {
LAB_0046aed2:
          for (pdVar3 = *(deleting_destructor **)pdVar20; pdVar3 != pdVar20;
              pdVar3 = *(deleting_destructor **)pdVar3) {
            uVar8 = (int)local_a0 -
                    ((int)((*(int *)(pdVar3 + 8) >> 0x1f & 0x3fU) + *(int *)(pdVar3 + 8)) >> 6);
            uVar19 = (int)uVar8 >> 0x1f;
            if (((int)((uVar8 ^ uVar19) - uVar19) < 5) &&
               (uVar8 = (int)pdVar22 -
                        ((int)((*(int *)(pdVar3 + 0xc) >> 0x1f & 0x3fU) + *(int *)(pdVar3 + 0xc)) >>
                        6), uVar19 = (int)uVar8 >> 0x1f, pdVar24 = local_a0, pdVar9 = local_ac,
               cVar16 = local_99, (int)((uVar8 ^ uVar19) - uVar19) < 5)) goto LAB_0046af42;
          }
        }
        FUN_005a4780(local_a0,pdVar22);
        pdVar24 = local_a0;
        pdVar9 = local_ac;
        pdVar20 = local_c8;
        cVar16 = local_99;
      }
LAB_0046af42:
      local_a8 = pdVar22 + 1;
    } while ((int)local_a8 < 0x400);
    local_ac = pdVar9 + 0x400;
    local_a0 = pdVar24 + 1;
  } while ((int)local_ac < 0x1000e8);
  if (cVar16 == '\0') goto LAB_0046b6a3;
  FUN_00601cb0();
  FUN_0059c480();
  pWVar2 = pcVar25->field_0x0;
  FUN_005a52e0(pWVar2 + 0xb9,pWVar2[0x200294].deleting_destructor,pWVar2 + 0x200295);
  FUN_005fbc90(pcVar25->field_0x0 + 0x200351);
  if (pcVar25->field_0x0[0x200299].deleting_destructor != (deleting_destructor *)0x0) {
    pcVar25->field_0x0[0x200284].deleting_destructor = (deleting_destructor *)0xffffffff;
    pWVar2 = pcVar25->field_0x0;
    local_ac = (deleting_destructor *)0x0;
    if (0 < (int)((int)pWVar2[0x200278].deleting_destructor -
                  (int)pWVar2[0x200277].deleting_destructor & 0xfffffffcU)) {
      local_b4 = pWVar2[0x200299].deleting_destructor;
      local_b8 = pWVar2[0x200277].deleting_destructor;
      do {
        pWVar17 = pWVar2 + 0x200295;
        pdStack_bc = *(deleting_destructor **)local_b8;
        pcVar21 = pdStack_bc + 8;
        if ((deleting_destructor *)0xf < pWVar2[0x20029a].deleting_destructor) {
          pWVar17 = (WorldInfo_vftable *)pWVar17->deleting_destructor;
        }
        pdVar20 = *(deleting_destructor **)(pdStack_bc + 0x18);
        if (0xf < *(uint *)(pdStack_bc + 0x1c)) {
          pcVar21 = *(code **)pcVar21;
        }
        pdVar24 = local_b4;
        if (pdVar20 < local_b4) {
          pdVar24 = pdVar20;
        }
        if (pdVar24 == (deleting_destructor *)0x0) {
LAB_0046b0a8:
          if (pdVar20 < local_b4) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(pdVar20 != pWVar2[0x200299].deleting_destructor);
          }
          bVar27 = uVar8 == 0;
        }
        else {
          while (pdVar9 = pdVar24 + -4, (deleting_destructor *)0x3 < pdVar24) {
            if (*(deleting_destructor **)pcVar21 != pWVar17->deleting_destructor) goto LAB_0046b068;
            pcVar21 = pcVar21 + 4;
            pWVar17 = pWVar17 + 1;
            pdVar24 = pdVar9;
          }
          if (pdVar9 == (deleting_destructor *)0xfffffffc) {
LAB_0046b09c:
            uVar8 = 0;
          }
          else {
LAB_0046b068:
            bVar27 = (byte)*pcVar21 < (byte)*(code *)&pWVar17->deleting_destructor;
            if ((*pcVar21 == *(code *)&pWVar17->deleting_destructor) &&
               ((pdVar9 == (deleting_destructor *)0xfffffffd ||
                ((cVar1 = *(code *)((int)&pWVar17->deleting_destructor + 1),
                 bVar27 = (byte)pcVar21[1] < (byte)cVar1, pcVar21[1] == cVar1 &&
                 ((pdVar9 == (deleting_destructor *)0xfffffffe ||
                  ((cVar1 = *(code *)((int)&pWVar17->deleting_destructor + 2),
                   bVar27 = (byte)pcVar21[2] < (byte)cVar1, pcVar21[2] == cVar1 &&
                   ((pdVar9 == (deleting_destructor *)0xffffffff ||
                    (cVar1 = *(code *)((int)&pWVar17->deleting_destructor + 3),
                    bVar27 = (byte)pcVar21[3] < (byte)cVar1, pcVar21[3] == cVar1))))))))))))
            goto LAB_0046b09c;
            uVar8 = -(uint)bVar27 | 1;
          }
          bVar27 = false;
          if (uVar8 == 0) goto LAB_0046b0a8;
        }
        pcVar25 = local_a4;
        if ((bVar27) &&
           (*(deleting_destructor **)(pdStack_bc + 0x20) == pWVar2[0x200294].deleting_destructor)) {
          pWVar2[0x200284].deleting_destructor = local_ac;
          break;
        }
        local_ac = local_ac + 1;
        local_b8 = local_b8 + 4;
      } while ((int)local_ac <
               (int)pWVar2[0x200278].deleting_destructor - (int)pWVar2[0x200277].deleting_destructor
               >> 2);
    }
    pWVar2 = pcVar25->field_0x0;
    if ((int)pWVar2[0x200284].deleting_destructor < 0) {
      local_e0 = (void *)0x0;
      local_dc = 0;
      local_d8 = 0;
      local_d4 = 0;
      pdVar20 = pWVar2[0x200278].deleting_destructor;
      pdVar24 = pWVar2[0x200277].deleting_destructor;
      local_8._0_1_ = 1;
      FUN_005870c0(4);
      *(int *)(local_d4 + (int)local_e0) = ((int)pdVar20 - (int)pdVar24 >> 2) + 1;
      local_d4 = local_d4 + 4;
      local_4c = 0xf;
      local_50 = 0;
      local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
      FUN_0040c280(&DAT_00700e68,3);
      pcVar25 = local_a4;
      local_8._0_1_ = 2;
      FUN_004499c0(local_60,&local_e0);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_60[0]);
      }
      puVar12 = operator_new(0x28);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = &vftable;
        puVar12[1] = 0;
        puVar12[7] = 0xf;
        puVar12[6] = 0;
        *(undefined1 *)(puVar12 + 2) = 0;
        puVar12[9] = 0;
      }
      puVar12[8] = pcVar25->field_0x0[0x200294].deleting_destructor;
      local_d0 = puVar12;
      if ((WorldInfo_vftable *)(puVar12 + 2) != pcVar25->field_0x0 + 0x200295) {
        FUN_0040c0a0(pcVar25->field_0x0 + 0x200295,0,0xffffffff);
      }
      pWVar2 = pcVar25->field_0x0;
      pWVar17 = pWVar2 + 0x200277;
      ppuVar4 = (undefined4 **)pWVar2[0x200278].deleting_destructor;
      if (&local_d0 < ppuVar4) {
        ppuVar5 = (undefined4 **)pWVar17->deleting_destructor;
        if (&local_d0 < ppuVar5) goto LAB_0046b2eb;
        ppuVar6 = (undefined4 **)pWVar2[0x200279].deleting_destructor;
        if ((ppuVar4 == ppuVar6) && ((int)ppuVar6 - (int)ppuVar4 >> 2 == 0)) {
          iVar10 = (int)ppuVar4 - (int)pWVar17->deleting_destructor >> 2;
          if (iVar10 == 0x3fffffff) goto LAB_0046b731;
          pdStack_bc = (deleting_destructor *)(iVar10 + 1);
          uVar8 = (int)ppuVar6 - (int)pWVar17->deleting_destructor >> 2;
          if (0x3fffffff - (uVar8 >> 1) < uVar8) {
            pdVar20 = (deleting_destructor *)0x0;
          }
          else {
            pdVar20 = (deleting_destructor *)(uVar8 + (uVar8 >> 1));
          }
          if (pdVar20 < pdStack_bc) {
            pdVar20 = pdStack_bc;
          }
          FUN_0063da20(pdVar20);
        }
        if (pWVar2[0x200278].deleting_destructor != (deleting_destructor *)0x0) {
          *(undefined4 *)pWVar2[0x200278].deleting_destructor =
               *(undefined4 *)
                (pWVar17->deleting_destructor + ((int)&local_d0 - (int)ppuVar5 >> 2) * 4);
        }
      }
      else {
LAB_0046b2eb:
        ppuVar5 = (undefined4 **)pWVar2[0x200279].deleting_destructor;
        if ((ppuVar4 == ppuVar5) && ((int)ppuVar5 - (int)ppuVar4 >> 2 == 0)) {
          iVar10 = (int)ppuVar4 - (int)pWVar17->deleting_destructor >> 2;
          if (iVar10 == 0x3fffffff) {
LAB_0046b731:
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("vector<T> too long");
          }
          pdStack_bc = (deleting_destructor *)(iVar10 + 1);
          uVar8 = (int)ppuVar5 - (int)pWVar17->deleting_destructor >> 2;
          if (0x3fffffff - (uVar8 >> 1) < uVar8) {
            pdVar20 = (deleting_destructor *)0x0;
          }
          else {
            pdVar20 = (deleting_destructor *)(uVar8 + (uVar8 >> 1));
          }
          if (pdVar20 < pdStack_bc) {
            pdVar20 = pdStack_bc;
          }
          FUN_0063da20(pdVar20);
        }
        if (pWVar2[0x200278].deleting_destructor != (deleting_destructor *)0x0) {
          *(undefined4 **)pWVar2[0x200278].deleting_destructor = puVar12;
        }
      }
      pcVar25 = local_a4;
      pWVar2[0x200278].deleting_destructor = pWVar2[0x200278].deleting_destructor + 4;
      pWVar2 = local_a4->field_0x0;
      pWVar2[0x200284].deleting_destructor =
           (deleting_destructor *)
           (((int)pWVar2[0x200278].deleting_destructor - (int)pWVar2[0x200277].deleting_destructor
            >> 2) + -1);
      FUN_004878a0(local_a4->field_0x0,local_a4->field_0x0[0x200284].deleting_destructor,puVar12,0);
      FUN_004a23d0();
      local_8 = local_8 & 0xffffff00;
      if (local_e0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_e0);
      }
    }
  }
  pdVar20 = (deleting_destructor *)
            FUN_00457e20(local_98,pcVar25->field_0x0 + 0x200294,pcVar25->field_0x0 + 0x200295);
  local_8._0_1_ = 3;
  iVar10 = *(int *)(pcVar25->field_0x0[0x2001b4].deleting_destructor + 0x1d28);
  iVar23 = *(int *)(iVar10 + 0x1c);
  local_cc = iVar23;
  pdStack_bc = pdVar20;
  iVar18 = FUN_0044b880(pdVar20);
  pcVar25 = local_a4;
  iVar10 = *(int *)(iVar10 + 0x1c);
  if (iVar18 == iVar10) {
LAB_0046b520:
    local_f4 = iVar10;
    piVar13 = &local_f4;
  }
  else {
    if (*(int *)pdVar20 < *(int *)(iVar18 + 0x10)) goto LAB_0046b520;
    if (*(int *)pdVar20 <= *(int *)(iVar18 + 0x10)) {
      local_a0 = *(deleting_destructor **)(iVar18 + 0x24);
      pcVar21 = (code *)(iVar18 + 0x14);
      pcVar26 = pdStack_bc + 4;
      if (0xf < *(uint *)(iVar18 + 0x28)) {
        pcVar21 = *(code **)pcVar21;
      }
      local_ac = *(deleting_destructor **)(pdStack_bc + 0x14);
      if (0xf < *(uint *)(pdStack_bc + 0x18)) {
        pcVar26 = *(code **)pcVar26;
      }
      pdVar20 = local_a0;
      if (local_ac < local_a0) {
        pdVar20 = local_ac;
      }
      if (pdVar20 == (deleting_destructor *)0x0) {
LAB_0046b4ed:
        if (local_ac < local_a0) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uint)(local_ac != local_a0);
        }
      }
      else {
        while (local_a8 = pdVar20 + -4, (deleting_destructor *)0x3 < pdVar20) {
          if (*(int *)pcVar26 != *(int *)pcVar21) goto LAB_0046b4a7;
          pcVar26 = pcVar26 + 4;
          pcVar21 = pcVar21 + 4;
          pdVar20 = local_a8;
        }
        if (local_a8 == (deleting_destructor *)0xfffffffc) {
LAB_0046b4e7:
          uVar8 = 0;
        }
        else {
LAB_0046b4a7:
          bVar27 = (byte)*pcVar26 < (byte)*pcVar21;
          if ((*pcVar26 == *pcVar21) &&
             ((local_a8 == (deleting_destructor *)0xfffffffd ||
              ((bVar27 = (byte)pcVar26[1] < (byte)pcVar21[1], pcVar26[1] == pcVar21[1] &&
               ((local_a8 == (deleting_destructor *)0xfffffffe ||
                ((bVar27 = (byte)pcVar26[2] < (byte)pcVar21[2], pcVar26[2] == pcVar21[2] &&
                 ((local_a8 == (deleting_destructor *)0xffffffff ||
                  (bVar27 = (byte)pcVar26[3] < (byte)pcVar21[3], pcVar26[3] == pcVar21[3])))))))))))
             ) goto LAB_0046b4e7;
          uVar8 = -(uint)bVar27 | 1;
        }
        if (uVar8 == 0) goto LAB_0046b4ed;
      }
      iVar23 = local_cc;
      if ((int)uVar8 < 0) goto LAB_0046b520;
    }
    local_ec = iVar18;
    piVar13 = &local_ec;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_94);
  }
  if (*piVar13 == iVar23) {
    iVar10 = 0;
    pWVar2 = local_a4->field_0x0;
    pdVar20 = pWVar2[0x2001b4].deleting_destructor;
    do {
      local_f0 = (float)pWVar2[iVar10 + 0x2000f5].deleting_destructor * 65536.0;
      uVar28 = FUN_0068d946();
      *(int *)(pdVar20 + iVar10 * 8 + 0x10) = (int)uVar28;
      *(int *)(pdVar20 + iVar10 * 8 + 0x14) = (int)((ulonglong)uVar28 >> 0x20);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
  }
  else {
    uVar14 = FUN_00457e20(local_7c,local_a4->field_0x0 + 0x200294,local_a4->field_0x0 + 0x200295);
    local_8._0_1_ = 4;
    puVar12 = (undefined4 *)FUN_0044b460(uVar14);
    pdVar20 = pcVar25->field_0x0[0x2001b4].deleting_destructor;
    local_8 = (uint)local_8._1_3_ << 8;
    *(undefined4 *)(pdVar20 + 0x10) = *puVar12;
    *(undefined4 *)(pdVar20 + 0x14) = puVar12[1];
    *(undefined4 *)(pdVar20 + 0x18) = puVar12[2];
    *(undefined4 *)(pdVar20 + 0x1c) = puVar12[3];
    *(undefined4 *)(pdVar20 + 0x20) = puVar12[4];
    *(undefined4 *)(pdVar20 + 0x24) = puVar12[5];
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_78);
    }
  }
  local_28 = 0;
  uStack_24 = 0;
  pdVar20 = local_a4->field_0x0[0x2001b4].deleting_destructor;
  *(undefined4 *)(pdVar20 + 0x1350) = *(undefined4 *)(pdVar20 + 0x10);
  *(undefined4 *)(pdVar20 + 0x1354) = *(undefined4 *)(pdVar20 + 0x14);
  *(undefined4 *)(pdVar20 + 0x1358) = *(undefined4 *)(pdVar20 + 0x18);
  *(undefined4 *)(pdVar20 + 0x135c) = *(undefined4 *)(pdVar20 + 0x1c);
  *(undefined4 *)(pdVar20 + 0x1360) = *(undefined4 *)(pdVar20 + 0x20);
  *(undefined4 *)(pdVar20 + 0x1364) = *(undefined4 *)(pdVar20 + 0x24);
  local_20 = 0;
  pdVar20 = local_a4->field_0x0[0x2001b4].deleting_destructor;
  *(undefined8 *)(pdVar20 + 0x34) = 0;
  *(undefined4 *)(pdVar20 + 0x3c) = 0;
  FUN_00601ea0();
  FUN_00601e90();
LAB_0046b6a3:
  Sleep(0x14);
  local_8 = 0xffffffff;
  pdVar20 = *(deleting_destructor **)local_c8;
  *(deleting_destructor **)local_c8 = local_c8;
  *(deleting_destructor **)(local_c8 + 4) = local_c8;
  local_c4 = 0;
  if (pdVar20 == local_c8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_c8);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pdVar20);
}


/* cube::WorldInfo::deleting_destructor @ 0046d3b0  kind=game  attributed-by=rtti  size=131 */

WorldInfo * __thiscall cube::WorldInfo::deleting_destructor(WorldInfo *this,byte param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e564b;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* inlined destructor: cube::WorldInfo::~WorldInfo */
  this->vftablePtr = &vftable;
  puVar1 = (undefined4 *)(this->WorldInfo_data).offset_0x0;
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,uVar2);
  }
  if (0xf < (this->WorldInfo_data).offset_0x18) {
                    /* WARNING: Subroutine does not return */
    operator_delete((this->WorldInfo_data).offset_0x4);
  }
  (this->WorldInfo_data).offset_0x18 = 0xf;
  (this->WorldInfo_data).offset_0x14 = (void *)0x0;
  *(undefined1 *)&(this->WorldInfo_data).offset_0x4 = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  ExceptionList = local_10;
  return this;
}


