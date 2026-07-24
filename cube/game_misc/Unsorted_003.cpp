// Unsorted_003 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_003.h"

/* FUN_00682a80 @ 00682a80  kind=gamemisc  attributed-by=none  size=1487 */

void FUN_00682a80(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte *****pppppbVar9;
  char *pcVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  byte ****local_44 [4];
  uint local_34;
  uint local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8d4b;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a4 = param_1;
  local_14 = uVar4;
  FUN_00688180();
  local_9c = 0;
  cVar3 = FUN_00688490();
  do {
    if (cVar3 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar8 = local_1c;
    pppppbVar9 = local_2c;
    if (0xf < local_18) {
      pppppbVar9 = (byte *****)local_2c[0];
    }
    uVar5 = 0x17;
    if (local_1c < 0x17) {
      uVar5 = local_1c;
    }
    local_8 = 0;
    if (uVar5 == 0) {
LAB_00682b70:
      if (local_1c < 0x17) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(local_1c != 0x17);
      }
      bVar12 = uVar5 == 0;
    }
    else {
      pcVar10 = "Attribute.sequence.name";
      while (uVar1 = uVar5 - 4, 3 < uVar5) {
        if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00682b36;
        pppppbVar9 = pppppbVar9 + 1;
        pcVar10 = pcVar10 + 4;
        uVar5 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00682b6a:
        uVar5 = 0;
      }
      else {
LAB_00682b36:
        bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
        if ((*(byte *)pppppbVar9 == *pcVar10) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
             *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
               *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_00682b6a;
        uVar5 = -(uint)bVar12 | 1;
      }
      bVar12 = false;
      if (uVar5 == 0) goto LAB_00682b70;
    }
    if (bVar12) {
      FUN_00688180();
      uVar6 = FUN_00688510(local_8c);
      local_8._0_1_ = 1;
      uVar6 = FUN_006089c0(local_74,uVar6);
      local_8._0_1_ = 2;
      local_9c = FUN_006619a0(uVar6);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
      FUN_00688490();
    }
    else {
      pppppbVar9 = local_2c;
      if (0xf < local_18) {
        pppppbVar9 = (byte *****)local_2c[0];
      }
      uVar5 = 0x18;
      if (local_1c < 0x18) {
        uVar5 = local_1c;
      }
      if (uVar5 == 0) {
LAB_00682ca0:
        if (local_1c < 0x18) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(local_1c != 0x18);
        }
        bVar12 = uVar5 == 0;
      }
      else {
        pcVar10 = "Attribute.sequence.wname";
        while (uVar1 = uVar5 - 4, 3 < uVar5) {
          if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00682c66;
          pppppbVar9 = pppppbVar9 + 1;
          pcVar10 = pcVar10 + 4;
          uVar5 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00682c9a:
          uVar5 = 0;
        }
        else {
LAB_00682c66:
          bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
          if ((*(byte *)pppppbVar9 == *pcVar10) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
               *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
                 *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                  *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_00682c9a;
          uVar5 = -(uint)bVar12 | 1;
        }
        bVar12 = false;
        if (uVar5 == 0) goto LAB_00682ca0;
      }
      if (bVar12) {
        FUN_00688180();
        uVar6 = FUN_00688610(local_5c);
        local_8._0_1_ = 3;
        local_9c = FUN_006619a0(uVar6);
        local_8 = (uint)local_8._1_3_ << 8;
        if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_5c[0]);
        }
        local_48 = 7;
        local_4c = 0;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
        FUN_00688490();
      }
      else {
        pppppbVar9 = local_2c;
        if (0xf < local_18) {
          pppppbVar9 = (byte *****)local_2c[0];
        }
        uVar5 = 0x16;
        if (local_1c < 0x16) {
          uVar5 = local_1c;
        }
        iVar7 = FUN_0040c590(pppppbVar9,"Attribute.sequence.key",uVar5);
        iVar2 = local_94;
        bVar12 = false;
        if (iVar7 == 0) {
          if (uVar8 < 0x16) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(uVar8 != 0x16);
          }
          bVar12 = uVar8 == 0;
        }
        if (bVar12) {
          FUN_00688180();
          uVar6 = 0;
          uVar11 = 0;
          local_90 = 0;
          local_98 = 0;
          local_a0 = 0;
          cVar3 = FUN_00688490();
          while (cVar3 == '\0') {
            FUN_00688220(local_44,1);
            uVar8 = local_34;
            pppppbVar9 = local_44;
            if (0xf < local_30) {
              pppppbVar9 = (byte *****)local_44[0];
            }
            uVar5 = 0x1c;
            if (local_34 < 0x1c) {
              uVar5 = local_34;
            }
            local_8 = CONCAT31(local_8._1_3_,4);
            if (uVar5 == 0) {
LAB_00682e27:
              if (local_34 < 0x1c) {
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = (uint)(local_34 != 0x1c);
              }
              bVar12 = uVar5 == 0;
            }
            else {
              pcVar10 = "Attribute.sequence.key.frame";
              while (uVar1 = uVar5 - 4, 3 < uVar5) {
                if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00682ded;
                pppppbVar9 = pppppbVar9 + 1;
                pcVar10 = pcVar10 + 4;
                uVar5 = uVar1;
              }
              if (uVar1 == 0xfffffffc) {
LAB_00682e21:
                uVar5 = 0;
              }
              else {
LAB_00682ded:
                bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
                if ((*(byte *)pppppbVar9 == *pcVar10) &&
                   ((uVar1 == 0xfffffffd ||
                    ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
                     *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
                     ((uVar1 == 0xfffffffe ||
                      ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
                       *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
                       ((uVar1 == 0xffffffff ||
                        (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                        *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_00682e21;
                uVar5 = -(uint)bVar12 | 1;
              }
              bVar12 = false;
              if (uVar5 == 0) goto LAB_00682e27;
            }
            if (bVar12) {
              FUN_00688180();
              std::basic_istream<char,std::char_traits<char>_>::read
                        (*(basic_istream<char,std::char_traits<char>_> **)(iVar2 + 8),
                         (char *)&local_a8,(ulonglong)uVar4 << 0x20);
              uVar11 = local_a8;
              local_98 = local_a8;
              FUN_00688490();
              uVar6 = local_90;
            }
            else {
              pppppbVar9 = local_44;
              if (0xf < local_30) {
                pppppbVar9 = (byte *****)local_44[0];
              }
              uVar5 = 0x1b;
              if (local_34 < 0x1b) {
                uVar5 = local_34;
              }
              if (uVar5 == 0) {
LAB_00682ee8:
                if (local_34 < 0x1b) {
                  uVar5 = 0xffffffff;
                }
                else {
                  uVar5 = (uint)(local_34 != 0x1b);
                }
                bVar12 = uVar5 == 0;
              }
              else {
                pcVar10 = "Attribute.sequence.key.time";
                while (uVar1 = uVar5 - 4, 3 < uVar5) {
                  if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00682eae;
                  pppppbVar9 = pppppbVar9 + 1;
                  pcVar10 = pcVar10 + 4;
                  uVar5 = uVar1;
                }
                if (uVar1 == 0xfffffffc) {
LAB_00682ee2:
                  uVar5 = 0;
                }
                else {
LAB_00682eae:
                  bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
                  if ((*(byte *)pppppbVar9 == *pcVar10) &&
                     ((uVar1 == 0xfffffffd ||
                      ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
                       *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
                       ((uVar1 == 0xfffffffe ||
                        ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
                         *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
                         ((uVar1 == 0xffffffff ||
                          (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                          *(byte *)((int)pppppbVar9 + 3) == pcVar10[3]))))))))))))
                  goto LAB_00682ee2;
                  uVar5 = -(uint)bVar12 | 1;
                }
                bVar12 = false;
                if (uVar5 == 0) goto LAB_00682ee8;
              }
              if (bVar12) {
                FUN_00688180();
                std::basic_istream<char,std::char_traits<char>_>::read
                          (*(basic_istream<char,std::char_traits<char>_> **)(iVar2 + 8),
                           (char *)&local_b0,(ulonglong)uVar4 << 0x20);
                uVar6 = local_b0;
                local_90 = local_b0;
                FUN_00688490();
                uVar11 = local_98;
              }
              else {
                pppppbVar9 = local_44;
                if (0xf < local_30) {
                  pppppbVar9 = (byte *****)local_44[0];
                }
                uVar5 = 0x21;
                if (local_34 < 0x21) {
                  uVar5 = local_34;
                }
                iVar7 = FUN_0040c590(pppppbVar9,"Attribute.sequence.key.smoothness",uVar5);
                bVar12 = false;
                if (iVar7 == 0) {
                  if (uVar8 < 0x21) {
                    uVar8 = 0xffffffff;
                  }
                  else {
                    uVar8 = (uint)(uVar8 != 0x21);
                  }
                  bVar12 = uVar8 == 0;
                }
                if (bVar12) {
                  FUN_00688180();
                  std::basic_istream<char,std::char_traits<char>_>::read
                            (*(basic_istream<char,std::char_traits<char>_> **)(iVar2 + 8),
                             (char *)&local_ac,(ulonglong)uVar4 << 0x20);
                  local_a0 = local_ac;
                  FUN_00688490();
                  uVar6 = local_90;
                  uVar11 = local_98;
                }
                else {
                  FUN_006886f0();
                  uVar6 = local_90;
                  uVar11 = local_98;
                }
              }
            }
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_44[0]);
            }
            cVar3 = FUN_00688490();
          }
          FUN_006779e0(uVar11,uVar6,local_a0);
        }
        else {
          FUN_006886f0();
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar3 = FUN_00688490();
  } while( true );
}


/* FUN_00683070 @ 00683070  kind=gamemisc  attributed-by=none  size=494 */

void FUN_00683070(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  byte *****pppppbVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 local_4c;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8d90;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_38 = 7;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_30 = FUN_0064f080(0,0,&local_4c);
  local_8 = 0xffffffff;
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    pppppbVar5 = local_2c;
    if (0xf < local_18) {
      pppppbVar5 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (local_1c < 0xb) {
      uVar4 = local_1c;
    }
    local_8 = 1;
    if (uVar4 == 0) {
LAB_006831b0:
      if (local_1c < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0xb);
      }
      bVar7 = uVar4 == 0;
    }
    else {
      pcVar6 = "Button.type";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar5 != *(byte *****)pcVar6) goto LAB_00683176;
        pppppbVar5 = pppppbVar5 + 1;
        pcVar6 = pcVar6 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_006831aa:
        uVar4 = 0;
      }
      else {
LAB_00683176:
        bVar7 = *(byte *)pppppbVar5 < (byte)*pcVar6;
        if ((*(byte *)pppppbVar5 == *pcVar6) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar7 = *(byte *)((int)pppppbVar5 + 1) < (byte)pcVar6[1],
             *(byte *)((int)pppppbVar5 + 1) == pcVar6[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar7 = *(byte *)((int)pppppbVar5 + 2) < (byte)pcVar6[2],
               *(byte *)((int)pppppbVar5 + 2) == pcVar6[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar7 = *(byte *)((int)pppppbVar5 + 3) < (byte)pcVar6[3],
                *(byte *)((int)pppppbVar5 + 3) == pcVar6[3])))))))))))) goto LAB_006831aa;
        uVar4 = -(uint)bVar7 | 1;
      }
      bVar7 = false;
      if (uVar4 == 0) goto LAB_006831b0;
    }
    if (bVar7) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_34,
                 (ulonglong)uVar3 << 0x20);
      *(undefined4 *)(local_30 + 0x22c) = local_34;
      FUN_00688490();
    }
    else {
      cVar2 = FUN_00687560(local_30,local_2c);
      if (cVar2 == '\0') {
        FUN_006886f0();
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00683270 @ 00683270  kind=gamemisc  attributed-by=none  size=1227 */

void FUN_00683270(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte ****ppppbVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 local_78;
  undefined4 local_68;
  uint local_64;
  int local_60;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8de8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00688180(local_14);
  local_64 = 7;
  local_68 = 0;
  local_78 = (void *)((uint)local_78._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_60 = FUN_0064f180(&local_78);
  local_8 = 0xffffffff;
  if (7 < local_64) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_78);
  }
  local_64 = 7;
  local_68 = 0;
  local_78 = (void *)((uint)local_78 & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar6 = local_18;
    uVar7 = local_1c;
    ppppbVar8 = local_2c;
    if (0xf < local_18) {
      ppppbVar8 = (byte ****)local_2c[0];
    }
    uVar3 = 0xc;
    if (local_1c < 0xc) {
      uVar3 = local_1c;
    }
    local_8 = 1;
    if (uVar3 == 0) {
LAB_006833a1:
      if (local_1c < 0xc) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (uint)(local_1c != 0xc);
      }
      bVar10 = uVar3 == 0;
    }
    else {
      pcVar9 = "Display.name";
      while (uVar1 = uVar3 - 4, 3 < uVar3) {
        if (*ppppbVar8 != *(byte ****)pcVar9) goto LAB_00683367;
        ppppbVar8 = ppppbVar8 + 1;
        pcVar9 = pcVar9 + 4;
        uVar3 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_0068339b:
        uVar3 = 0;
      }
      else {
LAB_00683367:
        bVar10 = *(byte *)ppppbVar8 < (byte)*pcVar9;
        if ((*(byte *)ppppbVar8 == *pcVar9) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar10 = *(byte *)((int)ppppbVar8 + 1) < (byte)pcVar9[1],
             *(byte *)((int)ppppbVar8 + 1) == pcVar9[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar10 = *(byte *)((int)ppppbVar8 + 2) < (byte)pcVar9[2],
               *(byte *)((int)ppppbVar8 + 2) == pcVar9[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar10 = *(byte *)((int)ppppbVar8 + 3) < (byte)pcVar9[3],
                *(byte *)((int)ppppbVar8 + 3) == pcVar9[3])))))))))))) goto LAB_0068339b;
        uVar3 = -(uint)bVar10 | 1;
      }
      bVar10 = false;
      if (uVar3 == 0) goto LAB_006833a1;
    }
    if (bVar10) {
      FUN_00688180();
      uVar4 = FUN_00688510(local_5c);
      local_8._0_1_ = 2;
      iVar5 = FUN_006089c0(local_44,uVar4);
      local_8 = CONCAT31(local_8._1_3_,3);
      if (local_60 + 0xc != iVar5) {
        FUN_0040f680(iVar5,0,0xffffffff);
      }
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      bVar10 = local_48 < 0x10;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
LAB_006834e1:
      local_8 = CONCAT31(local_8._1_3_,1);
      if (!bVar10) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      FUN_00688490();
    }
    else {
      ppppbVar8 = local_2c;
      if (0xf < local_18) {
        ppppbVar8 = (byte ****)local_2c[0];
      }
      uVar3 = 0xd;
      if (local_1c < 0xd) {
        uVar3 = local_1c;
      }
      if (uVar3 == 0) {
LAB_00683498:
        if (local_1c < 0xd) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)(local_1c != 0xd);
        }
        bVar10 = uVar3 == 0;
      }
      else {
        pcVar9 = "Display.wname";
        while (uVar1 = uVar3 - 4, 3 < uVar3) {
          if (*ppppbVar8 != *(byte ****)pcVar9) goto LAB_0068345e;
          ppppbVar8 = ppppbVar8 + 1;
          pcVar9 = pcVar9 + 4;
          uVar3 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00683492:
          uVar3 = 0;
        }
        else {
LAB_0068345e:
          bVar10 = *(byte *)ppppbVar8 < (byte)*pcVar9;
          if ((*(byte *)ppppbVar8 == *pcVar9) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar10 = *(byte *)((int)ppppbVar8 + 1) < (byte)pcVar9[1],
               *(byte *)((int)ppppbVar8 + 1) == pcVar9[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar10 = *(byte *)((int)ppppbVar8 + 2) < (byte)pcVar9[2],
                 *(byte *)((int)ppppbVar8 + 2) == pcVar9[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar10 = *(byte *)((int)ppppbVar8 + 3) < (byte)pcVar9[3],
                  *(byte *)((int)ppppbVar8 + 3) == pcVar9[3])))))))))))) goto LAB_00683492;
          uVar3 = -(uint)bVar10 | 1;
        }
        bVar10 = false;
        if (uVar3 == 0) goto LAB_00683498;
      }
      if (bVar10) {
        FUN_00688180();
        iVar5 = FUN_00688610(local_5c);
        local_8 = CONCAT31(local_8._1_3_,4);
        if (local_60 + 0xc != iVar5) {
          FUN_0040f680(iVar5,0,0xffffffff);
        }
        bVar10 = local_48 < 8;
        goto LAB_006834e1;
      }
      ppppbVar8 = local_2c;
      if (0xf < local_18) {
        ppppbVar8 = (byte ****)local_2c[0];
      }
      uVar3 = 0x12;
      if (local_1c < 0x12) {
        uVar3 = local_1c;
      }
      iVar5 = FUN_0040c590(ppppbVar8,"Display.visibility",uVar3);
      bVar10 = false;
      if (iVar5 == 0) {
        if (uVar7 < 0x12) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)(uVar7 != 0x12);
        }
        bVar10 = uVar3 == 0;
      }
      if (bVar10) {
        FUN_006806b0(local_60 + 0x48);
      }
      else {
        ppppbVar8 = local_2c;
        if (0xf < uVar6) {
          ppppbVar8 = (byte ****)local_2c[0];
        }
        uVar3 = 0x10;
        if (uVar7 < 0x10) {
          uVar3 = uVar7;
        }
        iVar5 = FUN_0040c590(ppppbVar8,"Display.clipping",uVar3);
        bVar10 = false;
        if (iVar5 == 0) {
          if (uVar7 < 0x10) {
            uVar3 = 0xffffffff;
          }
          else {
            uVar3 = (uint)(uVar7 != 0x10);
          }
          bVar10 = uVar3 == 0;
        }
        if (bVar10) {
          FUN_006806b0(local_60 + 0xa0);
        }
        else {
          ppppbVar8 = local_2c;
          if (0xf < uVar6) {
            ppppbVar8 = (byte ****)local_2c[0];
          }
          uVar3 = 0x13;
          if (uVar7 < 0x13) {
            uVar3 = uVar7;
          }
          iVar5 = FUN_0040c590(ppppbVar8,"Display.strokeColor",uVar3);
          bVar10 = false;
          if (iVar5 == 0) {
            if (uVar7 < 0x13) {
              uVar3 = 0xffffffff;
            }
            else {
              uVar3 = (uint)(uVar7 != 0x13);
            }
            bVar10 = uVar3 == 0;
          }
          if (bVar10) {
            FUN_00680fd0(local_60 + 0x150);
          }
          else {
            ppppbVar8 = local_2c;
            if (0xf < uVar6) {
              ppppbVar8 = (byte ****)local_2c[0];
            }
            uVar3 = 0x11;
            if (uVar7 < 0x11) {
              uVar3 = uVar7;
            }
            iVar5 = FUN_0040c590(ppppbVar8,"Display.fillColor",uVar3);
            bVar10 = false;
            if (iVar5 == 0) {
              if (uVar7 < 0x11) {
                uVar3 = 0xffffffff;
              }
              else {
                uVar3 = (uint)(uVar7 != 0x11);
              }
              bVar10 = uVar3 == 0;
            }
            if (bVar10) {
              FUN_00680fd0(local_60 + 0xf8);
            }
            else {
              ppppbVar8 = local_2c;
              if (0xf < uVar6) {
                ppppbVar8 = (byte ****)local_2c[0];
              }
              uVar6 = 0x12;
              if (uVar7 < 0x12) {
                uVar6 = uVar7;
              }
              iVar5 = FUN_0040c590(ppppbVar8,"Display.blurRadius",uVar6);
              bVar10 = false;
              if (iVar5 == 0) {
                if (uVar7 < 0x12) {
                  uVar7 = 0xffffffff;
                }
                else {
                  uVar7 = (uint)(uVar7 != 0x12);
                }
                bVar10 = uVar7 == 0;
              }
              if (bVar10) {
                FUN_006806b0(local_60 + 0x1a8);
              }
              else {
                cVar2 = FUN_00451470(local_2c,"Display.flags");
                if (cVar2 == '\0') {
                  FUN_006886f0();
                }
                else {
                  FUN_00688180();
                  uVar4 = FUN_00681220();
                  *(undefined4 *)(local_60 + 0x200) = uVar4;
                  FUN_00688490();
                }
              }
            }
          }
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00683870 @ 00683870  kind=gamemisc  attributed-by=none  size=1339 */

void FUN_00683870(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int in_ECX;
  byte ****ppppbVar12;
  char *pcVar13;
  bool bVar14;
  undefined4 local_a0;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_78;
  uint local_74;
  int *local_70;
  undefined8 local_6c;
  undefined8 local_64;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8e5e;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_8c = 7;
  local_90 = 0;
  local_a0 = (void *)((uint)local_a0._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_74 = 7;
  local_78 = 0;
  local_88 = (void *)((uint)local_88._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar4 = (int *)FUN_0064f280(&local_88,&local_a0);
  local_70 = piVar4;
  if (7 < local_74) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_88);
  }
  local_74 = 7;
  local_78 = 0;
  local_88 = (void *)((uint)local_88 & 0xffff0000);
  local_8 = 0xffffffff;
  if (7 < local_8c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a0);
  }
  local_8c = 7;
  local_90 = 0;
  local_a0 = (void *)((uint)local_a0 & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 4))(1);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar10 = local_18;
    uVar11 = local_1c;
    ppppbVar12 = local_2c;
    if (0xf < local_18) {
      ppppbVar12 = (byte ****)local_2c[0];
    }
    uVar5 = 0x11;
    if (local_1c < 0x11) {
      uVar5 = local_1c;
    }
    local_8 = 2;
    if (uVar5 == 0) {
LAB_00683a20:
      if (local_1c < 0x11) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(local_1c != 0x11);
      }
      bVar14 = uVar5 == 0;
    }
    else {
      pcVar13 = "GenericShape.name";
      while (uVar1 = uVar5 - 4, 3 < uVar5) {
        if (*ppppbVar12 != *(byte ****)pcVar13) goto LAB_006839e6;
        ppppbVar12 = ppppbVar12 + 1;
        pcVar13 = pcVar13 + 4;
        uVar5 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00683a1a:
        uVar5 = 0;
      }
      else {
LAB_006839e6:
        bVar14 = *(byte *)ppppbVar12 < (byte)*pcVar13;
        if ((*(byte *)ppppbVar12 == *pcVar13) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar14 = *(byte *)((int)ppppbVar12 + 1) < (byte)pcVar13[1],
             *(byte *)((int)ppppbVar12 + 1) == pcVar13[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar14 = *(byte *)((int)ppppbVar12 + 2) < (byte)pcVar13[2],
               *(byte *)((int)ppppbVar12 + 2) == pcVar13[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar14 = *(byte *)((int)ppppbVar12 + 3) < (byte)pcVar13[3],
                *(byte *)((int)ppppbVar12 + 3) == pcVar13[3])))))))))))) goto LAB_00683a1a;
        uVar5 = -(uint)bVar14 | 1;
      }
      bVar14 = false;
      if (uVar5 == 0) goto LAB_00683a20;
    }
    if (bVar14) {
      FUN_00688180();
      uVar6 = FUN_00688510(local_44);
      local_8._0_1_ = 3;
      piVar7 = (int *)FUN_006089c0(local_5c,uVar6);
      piVar4 = local_70;
      local_8 = CONCAT31(local_8._1_3_,4);
      if (local_70 + 3 != piVar7) {
        FUN_0040f680(piVar7,0,0xffffffff);
      }
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
LAB_00683a87:
      bVar14 = local_30 < 0x10;
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
LAB_00683c72:
      local_8 = CONCAT31(local_8._1_3_,2);
      if (!bVar14) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      FUN_00688490();
    }
    else {
      ppppbVar12 = local_2c;
      if (0xf < local_18) {
        ppppbVar12 = (byte ****)local_2c[0];
      }
      uVar5 = 0x12;
      if (local_1c < 0x12) {
        uVar5 = local_1c;
      }
      if (uVar5 == 0) {
LAB_00683b17:
        if (local_1c < 0x12) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(local_1c != 0x12);
        }
        bVar14 = uVar5 == 0;
      }
      else {
        pcVar13 = "GenericShape.wname";
        while (uVar1 = uVar5 - 4, 3 < uVar5) {
          if (*ppppbVar12 != *(byte ****)pcVar13) goto LAB_00683add;
          ppppbVar12 = ppppbVar12 + 1;
          pcVar13 = pcVar13 + 4;
          uVar5 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00683b11:
          uVar5 = 0;
        }
        else {
LAB_00683add:
          bVar14 = *(byte *)ppppbVar12 < (byte)*pcVar13;
          if ((*(byte *)ppppbVar12 == *pcVar13) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar14 = *(byte *)((int)ppppbVar12 + 1) < (byte)pcVar13[1],
               *(byte *)((int)ppppbVar12 + 1) == pcVar13[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar14 = *(byte *)((int)ppppbVar12 + 2) < (byte)pcVar13[2],
                 *(byte *)((int)ppppbVar12 + 2) == pcVar13[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar14 = *(byte *)((int)ppppbVar12 + 3) < (byte)pcVar13[3],
                  *(byte *)((int)ppppbVar12 + 3) == pcVar13[3])))))))))))) goto LAB_00683b11;
          uVar5 = -(uint)bVar14 | 1;
        }
        bVar14 = false;
        if (uVar5 == 0) goto LAB_00683b17;
      }
      if (bVar14) {
        FUN_00688180();
        piVar8 = (int *)FUN_00688610(local_44);
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar7 = local_70 + 3;
LAB_00683c60:
        piVar4 = local_70;
        if (piVar7 != piVar8) {
          FUN_0040f680(piVar8,0,0xffffffff);
        }
        bVar14 = local_30 < 8;
        goto LAB_00683c72;
      }
      ppppbVar12 = local_2c;
      if (0xf < local_18) {
        ppppbVar12 = (byte ****)local_2c[0];
      }
      uVar5 = 0x13;
      if (local_1c < 0x13) {
        uVar5 = local_1c;
      }
      iVar9 = FUN_0040c590(ppppbVar12,"GenericShape.source",uVar5);
      bVar14 = false;
      if (iVar9 == 0) {
        if (uVar11 < 0x13) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar11 != 0x13);
        }
        bVar14 = uVar5 == 0;
      }
      if (bVar14) {
        FUN_00688180();
        uVar6 = FUN_00688510(local_44);
        local_8._0_1_ = 6;
        piVar7 = (int *)FUN_006089c0(local_5c,uVar6);
        piVar4 = local_70;
        local_8 = CONCAT31(local_8._1_3_,7);
        if (local_70 + 0x1b != piVar7) {
          FUN_0040f680(piVar7,0,0xffffffff);
        }
        if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_5c[0]);
        }
        goto LAB_00683a87;
      }
      ppppbVar12 = local_2c;
      if (0xf < uVar10) {
        ppppbVar12 = (byte ****)local_2c[0];
      }
      uVar5 = 0x14;
      if (uVar11 < 0x14) {
        uVar5 = uVar11;
      }
      iVar9 = FUN_0040c590(ppppbVar12,"GenericShape.wsource",uVar5);
      bVar14 = false;
      if (iVar9 == 0) {
        if (uVar11 < 0x14) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar11 != 0x14);
        }
        bVar14 = uVar5 == 0;
      }
      if (bVar14) {
        FUN_00688180();
        piVar8 = (int *)FUN_00688610(local_44);
        local_8 = CONCAT31(local_8._1_3_,8);
        piVar7 = local_70 + 0x1b;
        goto LAB_00683c60;
      }
      ppppbVar12 = local_2c;
      if (0xf < uVar10) {
        ppppbVar12 = (byte ****)local_2c[0];
      }
      uVar5 = 0x15;
      if (uVar11 < 0x15) {
        uVar5 = uVar11;
      }
      iVar9 = FUN_0040c590(ppppbVar12,"GenericShape.position",uVar5);
      bVar14 = false;
      if (iVar9 == 0) {
        if (uVar11 < 0x15) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar11 != 0x15);
        }
        bVar14 = uVar5 == 0;
      }
      if (bVar14) {
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_6c,
                   (ulonglong)uVar3 << 0x20);
        piVar4 = local_70;
        *(undefined8 *)(local_70 + 0x17) = local_6c;
        FUN_00688490();
      }
      else {
        ppppbVar12 = local_2c;
        if (0xf < uVar10) {
          ppppbVar12 = (byte ****)local_2c[0];
        }
        uVar10 = 0x11;
        if (uVar11 < 0x11) {
          uVar10 = uVar11;
        }
        iVar9 = FUN_0040c590(ppppbVar12,"GenericShape.size",uVar10);
        bVar14 = false;
        if (iVar9 == 0) {
          if (uVar11 < 0x11) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = (uint)(uVar11 != 0x11);
          }
          bVar14 = uVar11 == 0;
        }
        if (bVar14) {
          FUN_00688180();
          std::basic_istream<char,std::char_traits<char>_>::read
                    (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_64
                     ,(ulonglong)uVar3 << 0x20);
          piVar4 = local_70;
          *(undefined8 *)(local_70 + 0x19) = local_64;
          FUN_00688490();
        }
        else {
          FUN_006886f0();
          piVar4 = local_70;
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00683f00 @ 00683f00  kind=gamemisc  attributed-by=none  size=2046 */

void FUN_00683f00(char param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 **ppuVar12;
  int in_ECX;
  byte *****pppppbVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  bool bVar17;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 *local_cc;
  undefined4 local_c8;
  undefined4 *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  undefined1 local_a4 [48];
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [5];
  uint local_48;
  undefined4 local_44;
  int local_34;
  uint local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8ed9;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_d4 = in_ECX;
  local_14 = uVar4;
  FUN_00688180();
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  iVar16 = 0;
  local_8 = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_c8 = 0;
  puVar5 = (undefined4 *)FUN_0046d550(0,0);
  local_8._0_1_ = 1;
  local_c0 = 0;
  local_cc = puVar5;
  local_c4 = (undefined4 *)FUN_0046d710(0,0);
  local_8 = CONCAT31(local_8._1_3_,2);
  cVar3 = FUN_00688490();
  local_bc = local_b8;
  do {
    if (cVar3 != '\0') {
      if (param_1 == '\0') {
        iVar16 = FUN_0064f4e0(local_ac,iVar16,local_b0,0,&local_44);
        local_ac = iVar16;
        local_a8 = iVar16;
        FUN_00636ef0(local_b4);
        puVar2 = local_c4;
        *(undefined4 *)(iVar16 + 200) = local_bc;
        for (puVar1 = (undefined4 *)*local_c4; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
          FUN_00636db0(puVar1 + 8,puVar1 + 2);
          puVar5 = local_cc;
          in_ECX = local_d4;
        }
        if ((*(byte *)(in_ECX + 0x60) & 4) != 0) {
          *(uint *)(local_a8 + 200) = *(uint *)(local_a8 + 200) | 8;
        }
      }
      else {
        local_ac = *(int *)(in_ECX + 0x78);
        local_a8 = local_ac;
      }
      ppuVar12 = (undefined4 **)FUN_00681890(&local_ac);
      if (ppuVar12 != &local_cc) {
        FUN_004ab940(*puVar5,puVar5);
      }
      FUN_00681b70();
                    /* WARNING: Subroutine does not return */
      operator_delete(local_c4);
    }
    FUN_00688220(local_2c,1);
    uVar9 = local_18;
    uVar10 = local_1c;
    pppppbVar13 = local_2c;
    if (0xf < local_18) {
      pppppbVar13 = (byte *****)local_2c[0];
    }
    uVar6 = 9;
    if (local_1c < 9) {
      uVar6 = local_1c;
    }
    local_8._0_1_ = 3;
    if (uVar6 == 0) {
LAB_00684050:
      if (local_1c < 9) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(local_1c != 9);
      }
      bVar17 = uVar6 == 0;
    }
    else {
      pcVar15 = "Node.name";
      uVar14 = uVar6 - 4;
      if (3 < uVar6) {
        pcVar15 = "Node.name";
        do {
          if (*pppppbVar13 != *(byte *****)pcVar15) goto LAB_00684016;
          pppppbVar13 = pppppbVar13 + 1;
          pcVar15 = pcVar15 + 4;
          bVar17 = 3 < uVar14;
          uVar14 = uVar14 - 4;
        } while (bVar17);
      }
      if (uVar14 == 0xfffffffc) {
LAB_0068404a:
        uVar6 = 0;
      }
      else {
LAB_00684016:
        bVar17 = *(byte *)pppppbVar13 < (byte)*pcVar15;
        if ((*(byte *)pppppbVar13 == *pcVar15) &&
           ((uVar14 == 0xfffffffd ||
            ((bVar17 = *(byte *)((int)pppppbVar13 + 1) < (byte)pcVar15[1],
             *(byte *)((int)pppppbVar13 + 1) == pcVar15[1] &&
             ((uVar14 == 0xfffffffe ||
              ((bVar17 = *(byte *)((int)pppppbVar13 + 2) < (byte)pcVar15[2],
               *(byte *)((int)pppppbVar13 + 2) == pcVar15[2] &&
               ((uVar14 == 0xffffffff ||
                (bVar17 = *(byte *)((int)pppppbVar13 + 3) < (byte)pcVar15[3],
                *(byte *)((int)pppppbVar13 + 3) == pcVar15[3])))))))))))) goto LAB_0068404a;
        uVar6 = -(uint)bVar17 | 1;
      }
      bVar17 = false;
      if (uVar6 == 0) goto LAB_00684050;
    }
    if (bVar17) {
      FUN_00688180();
      uVar7 = FUN_00688510(local_5c);
      local_8 = CONCAT31(local_8._1_3_,4);
      piVar8 = (int *)FUN_006089c0(local_74,uVar7);
      if (&local_44 != piVar8) {
        if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_44);
        }
        local_30 = 7;
        local_34 = 0;
        local_44 = (void *)((uint)local_44 & 0xffff0000);
        if ((uint)piVar8[5] < 8) {
          if (piVar8[4] + 1 != 0) {
            memmove(&local_44,piVar8,(piVar8[4] + 1) * 2);
          }
        }
        else {
          local_44 = (void *)*piVar8;
          *piVar8 = 0;
        }
        local_34 = piVar8[4];
        local_30 = piVar8[5];
        piVar8[5] = 7;
        piVar8[4] = 0;
        *(undefined2 *)piVar8 = 0;
      }
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      bVar17 = local_48 < 0x10;
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      local_8._0_1_ = 3;
LAB_00684136:
      if (!bVar17) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      FUN_00688490();
      iVar16 = local_a8;
    }
    else {
      pppppbVar13 = local_2c;
      if (0xf < local_18) {
        pppppbVar13 = (byte *****)local_2c[0];
      }
      uVar6 = 10;
      if (local_1c < 10) {
        uVar6 = local_1c;
      }
      if (uVar6 == 0) {
LAB_006841c2:
        if (local_1c < 10) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(local_1c != 10);
        }
        bVar17 = uVar6 == 0;
      }
      else {
        pcVar15 = "Node.wname";
        while (uVar14 = uVar6 - 4, 3 < uVar6) {
          if (*pppppbVar13 != *(byte *****)pcVar15) goto LAB_00684188;
          pppppbVar13 = pppppbVar13 + 1;
          pcVar15 = pcVar15 + 4;
          uVar6 = uVar14;
        }
        if (uVar14 == 0xfffffffc) {
LAB_006841bc:
          uVar6 = 0;
        }
        else {
LAB_00684188:
          bVar17 = *(byte *)pppppbVar13 < (byte)*pcVar15;
          if ((*(byte *)pppppbVar13 == *pcVar15) &&
             ((uVar14 == 0xfffffffd ||
              ((bVar17 = *(byte *)((int)pppppbVar13 + 1) < (byte)pcVar15[1],
               *(byte *)((int)pppppbVar13 + 1) == pcVar15[1] &&
               ((uVar14 == 0xfffffffe ||
                ((bVar17 = *(byte *)((int)pppppbVar13 + 2) < (byte)pcVar15[2],
                 *(byte *)((int)pppppbVar13 + 2) == pcVar15[2] &&
                 ((uVar14 == 0xffffffff ||
                  (bVar17 = *(byte *)((int)pppppbVar13 + 3) < (byte)pcVar15[3],
                  *(byte *)((int)pppppbVar13 + 3) == pcVar15[3])))))))))))) goto LAB_006841bc;
          uVar6 = -(uint)bVar17 | 1;
        }
        bVar17 = false;
        if (uVar6 == 0) goto LAB_006841c2;
      }
      if (bVar17) {
        FUN_00688180();
        piVar8 = (int *)FUN_00688610(local_5c);
        if (&local_44 != piVar8) {
          if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_44);
          }
          local_30 = 7;
          local_34 = 0;
          local_44 = (void *)((uint)local_44 & 0xffff0000);
          if ((uint)piVar8[5] < 8) {
            if (piVar8[4] + 1 != 0) {
              memmove(&local_44,piVar8,(piVar8[4] + 1) * 2);
            }
          }
          else {
            local_44 = (void *)*piVar8;
            *piVar8 = 0;
          }
          local_34 = piVar8[4];
          local_30 = piVar8[5];
          piVar8[5] = 7;
          piVar8[4] = 0;
          *(undefined2 *)piVar8 = 0;
        }
        bVar17 = local_48 < 8;
        goto LAB_00684136;
      }
      pppppbVar13 = local_2c;
      if (0xf < local_18) {
        pppppbVar13 = (byte *****)local_2c[0];
      }
      uVar6 = 10;
      if (local_1c < 10) {
        uVar6 = local_1c;
      }
      iVar16 = FUN_0040c590(pppppbVar13,"Node.shape",uVar6);
      bVar17 = false;
      if (iVar16 == 0) {
        if (uVar10 < 10) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar10 != 10);
        }
        bVar17 = uVar6 == 0;
      }
      if (bVar17) {
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_d8,
                   (ulonglong)uVar4 << 0x20);
        local_a8 = local_d8;
        piVar8 = (int *)FUN_00468910(&local_a8);
        iVar16 = *piVar8;
        local_a8 = iVar16;
        FUN_00688490();
      }
      else {
        pppppbVar13 = local_2c;
        if (0xf < uVar9) {
          pppppbVar13 = (byte *****)local_2c[0];
        }
        uVar6 = 0x13;
        if (uVar10 < 0x13) {
          uVar6 = uVar10;
        }
        iVar16 = FUN_0040c590(pppppbVar13,"Node.transformation",uVar6);
        bVar17 = false;
        if (iVar16 == 0) {
          if (uVar10 < 0x13) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(uVar10 != 0x13);
          }
          bVar17 = uVar6 == 0;
        }
        if (bVar17) {
          FUN_00688180();
          std::basic_istream<char,std::char_traits<char>_>::read
                    (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_e0
                     ,(ulonglong)uVar4 << 0x20);
          local_ac = local_e0;
          piVar8 = (int *)FUN_00468910(&local_ac);
          local_ac = *piVar8;
          FUN_00688490();
          iVar16 = local_a8;
        }
        else {
          pppppbVar13 = local_2c;
          if (0xf < uVar9) {
            pppppbVar13 = (byte *****)local_2c[0];
          }
          uVar6 = 0xc;
          if (uVar10 < 0xc) {
            uVar6 = uVar10;
          }
          iVar16 = FUN_0040c590(pppppbVar13,"Node.display",uVar6);
          bVar17 = false;
          if (iVar16 == 0) {
            if (uVar10 < 0xc) {
              uVar6 = 0xffffffff;
            }
            else {
              uVar6 = (uint)(uVar10 != 0xc);
            }
            bVar17 = uVar6 == 0;
          }
          if (bVar17) {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_dc,(ulonglong)uVar4 << 0x20);
            local_b0 = local_dc;
            puVar5 = (undefined4 *)FUN_00468910(&local_b0);
            local_b0 = *puVar5;
            FUN_00688490();
            iVar16 = local_a8;
          }
          else {
            pppppbVar13 = local_2c;
            if (0xf < uVar9) {
              pppppbVar13 = (byte *****)local_2c[0];
            }
            uVar6 = 0xb;
            if (uVar10 < 0xb) {
              uVar6 = uVar10;
            }
            iVar16 = FUN_0040c590(pppppbVar13,"Node.widget",uVar6);
            bVar17 = false;
            if (iVar16 == 0) {
              if (uVar10 < 0xb) {
                uVar6 = 0xffffffff;
              }
              else {
                uVar6 = (uint)(uVar10 != 0xb);
              }
              bVar17 = uVar6 == 0;
            }
            if (bVar17) {
              FUN_00688180();
              std::basic_istream<char,std::char_traits<char>_>::read
                        (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                         (char *)&local_e4,(ulonglong)uVar4 << 0x20);
              local_b4 = local_e4;
              puVar5 = (undefined4 *)FUN_00468910(&local_b4);
              local_b4 = *puVar5;
              FUN_00688490();
              iVar16 = local_a8;
            }
            else {
              pppppbVar13 = local_2c;
              if (0xf < uVar9) {
                pppppbVar13 = (byte *****)local_2c[0];
              }
              uVar9 = 10;
              if (uVar10 < 10) {
                uVar9 = uVar10;
              }
              iVar16 = FUN_0040c590(pppppbVar13,"Node.child",uVar9);
              bVar17 = false;
              if (iVar16 == 0) {
                if (uVar10 < 10) {
                  uVar10 = 0xffffffff;
                }
                else {
                  uVar10 = (uint)(uVar10 != 10);
                }
                bVar17 = uVar10 == 0;
              }
              if (bVar17) {
                FUN_00688180();
                std::basic_istream<char,std::char_traits<char>_>::read
                          (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                           (char *)&local_d0,(ulonglong)uVar4 << 0x20);
                local_b8 = local_d0;
                FUN_004860b0(&local_b8);
                FUN_00688490();
                iVar16 = local_a8;
              }
              else {
                cVar3 = FUN_00451470(local_2c,"Node.flags");
                if (cVar3 == '\0') {
                  cVar3 = FUN_00451470(local_2c,"Node.variable");
                  if (cVar3 == '\0') {
                    FUN_006886f0();
                    iVar16 = local_a8;
                  }
                  else {
                    FUN_00688180();
                    uVar7 = FUN_00688510(local_74);
                    local_8._0_1_ = 5;
                    uVar11 = FUN_00688510(local_5c);
                    uVar7 = FUN_0064bec0(local_a4,uVar11,uVar7);
                    local_8._0_1_ = 7;
                    FUN_006536d0(uVar7);
                    FUN_0064dd90();
                    FUN_00403eb0();
                    local_8._0_1_ = 3;
                    FUN_00403eb0();
                    FUN_00688490();
                    iVar16 = local_a8;
                  }
                }
                else {
                  FUN_00688180();
                  local_bc = FUN_00681220();
                  FUN_00688490();
                  iVar16 = local_a8;
                }
              }
            }
          }
        }
      }
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar3 = FUN_00688490();
    puVar5 = local_cc;
  } while( true );
}


/* FUN_00684770 @ 00684770  kind=gamemisc  attributed-by=none  size=497 */

void FUN_00684770(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  byte *****pppppbVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 local_4c;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8d90;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_38 = 7;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_30 = FUN_006500d0(0,&local_4c);
  local_8 = 0xffffffff;
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    pppppbVar5 = local_2c;
    if (0xf < local_18) {
      pppppbVar5 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (local_1c < 0xb) {
      uVar4 = local_1c;
    }
    local_8 = 1;
    if (uVar4 == 0) {
LAB_006848b0:
      if (local_1c < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0xb);
      }
      bVar7 = uVar4 == 0;
    }
    else {
      pcVar6 = "Button.type";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar5 != *(byte *****)pcVar6) goto LAB_00684876;
        pppppbVar5 = pppppbVar5 + 1;
        pcVar6 = pcVar6 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_006848aa:
        uVar4 = 0;
      }
      else {
LAB_00684876:
        bVar7 = *(byte *)pppppbVar5 < (byte)*pcVar6;
        if ((*(byte *)pppppbVar5 == *pcVar6) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar7 = *(byte *)((int)pppppbVar5 + 1) < (byte)pcVar6[1],
             *(byte *)((int)pppppbVar5 + 1) == pcVar6[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar7 = *(byte *)((int)pppppbVar5 + 2) < (byte)pcVar6[2],
               *(byte *)((int)pppppbVar5 + 2) == pcVar6[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar7 = *(byte *)((int)pppppbVar5 + 3) < (byte)pcVar6[3],
                *(byte *)((int)pppppbVar5 + 3) == pcVar6[3])))))))))))) goto LAB_006848aa;
        uVar4 = -(uint)bVar7 | 1;
      }
      bVar7 = false;
      if (uVar4 == 0) goto LAB_006848b0;
    }
    if (bVar7) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_34,
                 (ulonglong)uVar3 << 0x20);
      *(undefined4 *)(local_30 + 0x22c) = local_34;
      FUN_00688490();
    }
    else {
      cVar2 = FUN_00687560(local_30,local_2c);
      if (cVar2 == '\0') {
        FUN_006886f0();
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00684970 @ 00684970  kind=gamemisc  attributed-by=none  size=689 */

void FUN_00684970(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  byte *****pppppbVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8f20;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_3c = 7;
  local_40 = 0;
  local_50 = (void *)((uint)local_50._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_30 = FUN_00650160(0,&local_50);
  local_8 = 0xffffffff;
  if (7 < local_3c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_50);
  }
  local_3c = 7;
  local_40 = 0;
  local_50 = (void *)((uint)local_50 & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    pppppbVar5 = local_2c;
    if (0xf < local_18) {
      pppppbVar5 = (byte *****)local_2c[0];
    }
    uVar4 = 0x16;
    if (local_1c < 0x16) {
      uVar4 = local_1c;
    }
    local_8 = 1;
    if (uVar4 == 0) {
LAB_00684ab0:
      if (local_1c < 0x16) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0x16);
      }
      bVar7 = uVar4 == 0;
    }
    else {
      pcVar6 = "ScrollButton.direction";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar5 != *(byte *****)pcVar6) goto LAB_00684a76;
        pppppbVar5 = pppppbVar5 + 1;
        pcVar6 = pcVar6 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00684aaa:
        uVar4 = 0;
      }
      else {
LAB_00684a76:
        bVar7 = *(byte *)pppppbVar5 < (byte)*pcVar6;
        if ((*(byte *)pppppbVar5 == *pcVar6) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar7 = *(byte *)((int)pppppbVar5 + 1) < (byte)pcVar6[1],
             *(byte *)((int)pppppbVar5 + 1) == pcVar6[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar7 = *(byte *)((int)pppppbVar5 + 2) < (byte)pcVar6[2],
               *(byte *)((int)pppppbVar5 + 2) == pcVar6[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar7 = *(byte *)((int)pppppbVar5 + 3) < (byte)pcVar6[3],
                *(byte *)((int)pppppbVar5 + 3) == pcVar6[3])))))))))))) goto LAB_00684aaa;
        uVar4 = -(uint)bVar7 | 1;
      }
      bVar7 = false;
      if (uVar4 == 0) goto LAB_00684ab0;
    }
    if (bVar7) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_38,
                 (ulonglong)uVar3 << 0x20);
      *(undefined4 *)(local_30 + 0x238) = local_38;
      FUN_00688490();
    }
    else {
      pppppbVar5 = local_2c;
      if (0xf < local_18) {
        pppppbVar5 = (byte *****)local_2c[0];
      }
      uVar4 = 0xb;
      if (local_1c < 0xb) {
        uVar4 = local_1c;
      }
      if (uVar4 == 0) {
LAB_00684b70:
        if (local_1c < 0xb) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0xb);
        }
        bVar7 = uVar4 == 0;
      }
      else {
        pcVar6 = "Button.type";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*pppppbVar5 != *(byte *****)pcVar6) goto LAB_00684b36;
          pppppbVar5 = pppppbVar5 + 1;
          pcVar6 = pcVar6 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00684b6a:
          uVar4 = 0;
        }
        else {
LAB_00684b36:
          bVar7 = *(byte *)pppppbVar5 < (byte)*pcVar6;
          if ((*(byte *)pppppbVar5 == *pcVar6) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar7 = *(byte *)((int)pppppbVar5 + 1) < (byte)pcVar6[1],
               *(byte *)((int)pppppbVar5 + 1) == pcVar6[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar7 = *(byte *)((int)pppppbVar5 + 2) < (byte)pcVar6[2],
                 *(byte *)((int)pppppbVar5 + 2) == pcVar6[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar7 = *(byte *)((int)pppppbVar5 + 3) < (byte)pcVar6[3],
                  *(byte *)((int)pppppbVar5 + 3) == pcVar6[3])))))))))))) goto LAB_00684b6a;
          uVar4 = -(uint)bVar7 | 1;
        }
        bVar7 = false;
        if (uVar4 == 0) goto LAB_00684b70;
      }
      if (bVar7) {
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_34,
                   (ulonglong)uVar3 << 0x20);
        *(undefined4 *)(local_30 + 0x22c) = local_34;
        FUN_00688490();
      }
      else {
        cVar2 = FUN_00687560(local_30,local_2c);
        if (cVar2 == '\0') {
          FUN_006886f0();
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00684c30 @ 00684c30  kind=gamemisc  attributed-by=none  size=689 */

void FUN_00684c30(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  byte *****pppppbVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8f20;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_3c = 7;
  local_40 = 0;
  local_50 = (void *)((uint)local_50._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_30 = FUN_006501e0(0,&local_50);
  local_8 = 0xffffffff;
  if (7 < local_3c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_50);
  }
  local_3c = 7;
  local_40 = 0;
  local_50 = (void *)((uint)local_50 & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    pppppbVar5 = local_2c;
    if (0xf < local_18) {
      pppppbVar5 = (byte *****)local_2c[0];
    }
    uVar4 = 0x16;
    if (local_1c < 0x16) {
      uVar4 = local_1c;
    }
    local_8 = 1;
    if (uVar4 == 0) {
LAB_00684d70:
      if (local_1c < 0x16) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0x16);
      }
      bVar7 = uVar4 == 0;
    }
    else {
      pcVar6 = "ScrollSlider.direction";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar5 != *(byte *****)pcVar6) goto LAB_00684d36;
        pppppbVar5 = pppppbVar5 + 1;
        pcVar6 = pcVar6 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00684d6a:
        uVar4 = 0;
      }
      else {
LAB_00684d36:
        bVar7 = *(byte *)pppppbVar5 < (byte)*pcVar6;
        if ((*(byte *)pppppbVar5 == *pcVar6) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar7 = *(byte *)((int)pppppbVar5 + 1) < (byte)pcVar6[1],
             *(byte *)((int)pppppbVar5 + 1) == pcVar6[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar7 = *(byte *)((int)pppppbVar5 + 2) < (byte)pcVar6[2],
               *(byte *)((int)pppppbVar5 + 2) == pcVar6[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar7 = *(byte *)((int)pppppbVar5 + 3) < (byte)pcVar6[3],
                *(byte *)((int)pppppbVar5 + 3) == pcVar6[3])))))))))))) goto LAB_00684d6a;
        uVar4 = -(uint)bVar7 | 1;
      }
      bVar7 = false;
      if (uVar4 == 0) goto LAB_00684d70;
    }
    if (bVar7) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_38,
                 (ulonglong)uVar3 << 0x20);
      *(undefined4 *)(local_30 + 0x238) = local_38;
      FUN_00688490();
    }
    else {
      pppppbVar5 = local_2c;
      if (0xf < local_18) {
        pppppbVar5 = (byte *****)local_2c[0];
      }
      uVar4 = 0xb;
      if (local_1c < 0xb) {
        uVar4 = local_1c;
      }
      if (uVar4 == 0) {
LAB_00684e30:
        if (local_1c < 0xb) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0xb);
        }
        bVar7 = uVar4 == 0;
      }
      else {
        pcVar6 = "Button.type";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*pppppbVar5 != *(byte *****)pcVar6) goto LAB_00684df6;
          pppppbVar5 = pppppbVar5 + 1;
          pcVar6 = pcVar6 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00684e2a:
          uVar4 = 0;
        }
        else {
LAB_00684df6:
          bVar7 = *(byte *)pppppbVar5 < (byte)*pcVar6;
          if ((*(byte *)pppppbVar5 == *pcVar6) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar7 = *(byte *)((int)pppppbVar5 + 1) < (byte)pcVar6[1],
               *(byte *)((int)pppppbVar5 + 1) == pcVar6[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar7 = *(byte *)((int)pppppbVar5 + 2) < (byte)pcVar6[2],
                 *(byte *)((int)pppppbVar5 + 2) == pcVar6[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar7 = *(byte *)((int)pppppbVar5 + 3) < (byte)pcVar6[3],
                  *(byte *)((int)pppppbVar5 + 3) == pcVar6[3])))))))))))) goto LAB_00684e2a;
          uVar4 = -(uint)bVar7 | 1;
        }
        bVar7 = false;
        if (uVar4 == 0) goto LAB_00684e30;
      }
      if (bVar7) {
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_34,
                   (ulonglong)uVar3 << 0x20);
        *(undefined4 *)(local_30 + 0x22c) = local_34;
        FUN_00688490();
      }
      else {
        cVar2 = FUN_00687560(local_30,local_2c);
        if (cVar2 == '\0') {
          FUN_006886f0();
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00684ef0 @ 00684ef0  kind=gamemisc  attributed-by=none  size=3032 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00684ef0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int in_ECX;
  byte *******pppppppbVar13;
  byte *pbVar14;
  bool bVar15;
  float10 fVar16;
  undefined4 local_ac;
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  int *local_78;
  char *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int *local_68;
  byte *local_64;
  int local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  byte *******local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8f8e;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_80 = in_ECX;
  local_14 = uVar4;
  FUN_00688180();
  local_98 = 7;
  local_9c = 0;
  local_ac = (void *)((uint)local_ac._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  piVar5 = (int *)FUN_00650260(&local_ac);
  if (7 < local_98) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_ac);
  }
  local_98 = 7;
  local_9c = 0;
  local_ac = (void *)((uint)local_ac & 0xffff0000);
  local_90 = (undefined4 *)0x0;
  local_8c = (undefined4 *)0x0;
  local_88 = 0;
  iVar12 = piVar5[0x2c9];
  local_78 = (int *)piVar5[0x302];
  local_8 = 1;
  local_60 = iVar12;
  cVar3 = FUN_00688490();
  do {
    if (cVar3 != '\0') {
      piVar5[0x302] = (int)local_78;
      FUN_00642a20(&local_90,0);
      FUN_00642a50(iVar12,1);
      if (((*(byte *)(in_ECX + 0x60) & 0x10) != 0) && (iVar12 = FUN_00664bf0(), iVar12 == 0)) {
        (**(code **)(*piVar5 + 4))(1);
        local_68 = (int *)FUN_00641180();
        (**(code **)(*local_68 + 0x4c))();
        FUN_006507c0(piVar5);
      }
      puVar1 = local_90;
      if (local_90 != (undefined4 *)0x0) {
        while( true ) {
          if (puVar1 == local_8c) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_90);
          }
          if ((void *)*puVar1 != (void *)0x0) break;
          puVar1 = puVar1 + 3;
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar1);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar9 = local_1c;
    pppppppbVar13 = (byte *******)local_2c;
    if (0xf < local_18) {
      pppppppbVar13 = local_2c[0];
    }
    uVar6 = 0x14;
    if (local_1c < 0x14) {
      uVar6 = local_1c;
    }
    local_8._0_1_ = 2;
    if (uVar6 == 0) {
LAB_0068508c:
      if (local_1c < 0x14) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(local_1c != 0x14);
      }
      bVar15 = uVar6 == 0;
    }
    else {
      local_64 = (byte *)0x71fbc4;
      while (uVar2 = uVar6 - 4, 3 < uVar6) {
        if (*pppppppbVar13 != *(byte *******)local_64) goto LAB_0068503d;
        local_64 = local_64 + 4;
        pppppppbVar13 = pppppppbVar13 + 1;
        uVar6 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_00685086:
        uVar6 = 0;
      }
      else {
LAB_0068503d:
        bVar15 = *(byte *)pppppppbVar13 < *local_64;
        if ((*(byte *)pppppppbVar13 == *local_64) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar15 = *(byte *)((int)pppppppbVar13 + 1) < local_64[1],
             *(byte *)((int)pppppppbVar13 + 1) == local_64[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar15 = *(byte *)((int)pppppppbVar13 + 2) < local_64[2],
               *(byte *)((int)pppppppbVar13 + 2) == local_64[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar15 = *(byte *)((int)pppppppbVar13 + 3) < local_64[3],
                *(byte *)((int)pppppppbVar13 + 3) == local_64[3])))))))))))) goto LAB_00685086;
        uVar6 = -(uint)bVar15 | 1;
      }
      bVar15 = false;
      if (uVar6 == 0) goto LAB_0068508c;
    }
    if (bVar15) {
      FUN_00688180();
      uVar7 = FUN_00688510(local_44);
      local_8._0_1_ = 3;
      piVar8 = (int *)FUN_006089c0(local_5c,uVar7);
      local_8 = CONCAT31(local_8._1_3_,4);
      if (piVar5 + 3 != piVar8) {
        FUN_0040f680(piVar8,0,0xffffffff);
      }
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      bVar15 = local_30 < 0x10;
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
LAB_0068510c:
      local_8._0_1_ = 2;
      if (!bVar15) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
LAB_0068511d:
      FUN_00688490();
      iVar12 = local_60;
    }
    else {
      pppppppbVar13 = (byte *******)local_2c;
      if (0xf < local_18) {
        pppppppbVar13 = local_2c[0];
      }
      uVar6 = 0x15;
      if (local_1c < 0x15) {
        uVar6 = local_1c;
      }
      iVar12 = FUN_0040c590(pppppppbVar13,"SmoothMeshShape.wname",uVar6);
      bVar15 = false;
      if (iVar12 == 0) {
        if (uVar9 < 0x15) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar9 != 0x15);
        }
        bVar15 = uVar6 == 0;
      }
      if (bVar15) {
        FUN_00688180();
        piVar8 = (int *)FUN_00688610(local_44);
        local_8 = CONCAT31(local_8._1_3_,5);
        if (piVar5 + 3 != piVar8) {
          FUN_0040f680(piVar8,0,0xffffffff);
        }
        bVar15 = local_30 < 8;
        goto LAB_0068510c;
      }
      pppppppbVar13 = (byte *******)local_2c;
      if (0xf < local_18) {
        pppppppbVar13 = local_2c[0];
      }
      uVar6 = 0x14;
      if (uVar9 < 0x14) {
        uVar6 = uVar9;
      }
      iVar12 = FUN_0040c590(pppppppbVar13,"SmoothMeshShape.face",uVar6);
      bVar15 = false;
      if (iVar12 == 0) {
        if (uVar9 < 0x14) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar9 != 0x14);
        }
        bVar15 = uVar6 == 0;
      }
      if (!bVar15) {
        pppppppbVar13 = (byte *******)local_2c;
        if (0xf < local_18) {
          pppppppbVar13 = local_2c[0];
        }
        uVar6 = 0x1b;
        if (uVar9 < 0x1b) {
          uVar6 = uVar9;
        }
        iVar12 = FUN_0040c590(pppppppbVar13,"SmoothMeshShape.vertexFlags",uVar6);
        bVar15 = false;
        if (iVar12 == 0) {
          if (uVar9 < 0x1b) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(uVar9 != 0x1b);
          }
          bVar15 = uVar6 == 0;
        }
        if (!bVar15) {
          pppppppbVar13 = (byte *******)local_2c;
          if (0xf < local_18) {
            pppppppbVar13 = local_2c[0];
          }
          uVar6 = 0x20;
          if (uVar9 < 0x20) {
            uVar6 = uVar9;
          }
          iVar12 = FUN_0040c590(pppppppbVar13,"SmoothMeshShape.vertexParameters",uVar6);
          bVar15 = false;
          if (iVar12 == 0) {
            if (uVar9 < 0x20) {
              uVar6 = 0xffffffff;
            }
            else {
              uVar6 = (uint)(uVar9 != 0x20);
            }
            bVar15 = uVar6 == 0;
          }
          if (bVar15) {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_84,(ulonglong)uVar4 << 0x20);
            if (local_84 < 1) goto LAB_0068511d;
            FUN_0040d9d0(local_84);
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)piVar5[0xb4],(ulonglong)uVar4 << 0x20);
            FUN_00688490();
            iVar12 = local_60;
          }
          else {
            pppppppbVar13 = (byte *******)local_2c;
            if (0xf < local_18) {
              pppppppbVar13 = local_2c[0];
            }
            uVar6 = 0x1f;
            if (uVar9 < 0x1f) {
              uVar6 = uVar9;
            }
            iVar12 = FUN_0040c590(pppppppbVar13,"SmoothMeshShape.vertexPositions",uVar6);
            bVar15 = false;
            if (iVar12 == 0) {
              if (uVar9 < 0x1f) {
                uVar9 = 0xffffffff;
              }
              else {
                uVar9 = (uint)(uVar9 != 0x1f);
              }
              bVar15 = uVar9 == 0;
            }
            if (bVar15) {
              FUN_006800d0(piVar5 + 0x17);
              iVar12 = local_60;
            }
            else {
              cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.vertexTexCoords");
              if (cVar3 == '\0') {
                cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.vertexColors");
                if (cVar3 == '\0') {
                  cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.strokeColors");
                  if (cVar3 == '\0') {
                    cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.extrusionFrontColors");
                    if (cVar3 == '\0') {
                      cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.extrusionBackColors");
                      if (cVar3 == '\0') {
                        cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.strokeWidths");
                        if (cVar3 == '\0') {
                          cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.texture");
                          if (cVar3 == '\0') {
                            cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.strokeTexture");
                            if (cVar3 == '\0') {
                              cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.textureTranslation");
                              if (cVar3 == '\0') {
                                cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.textureRotation");
                                if (cVar3 == '\0') {
                                  cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.textureDeformation"
                                                      );
                                  if (cVar3 == '\0') {
                                    cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.texturePivot");
                                    if (cVar3 == '\0') {
                                      cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.textureOpacity"
                                                          );
                                      if (cVar3 == '\0') {
                                        cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.textureBrightness");
                                        if (cVar3 == '\0') {
                                          cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.textureContrast");
                                          if (cVar3 == '\0') {
                                            cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.textureSaturation");
                                            if (cVar3 == '\0') {
                                              cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeTextureOpacity");
                                              if (cVar3 == '\0') {
                                                cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeTextureBrightness");
                                                if (cVar3 == '\0') {
                                                  cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeTextureContrast");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeTextureSaturation");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeTextureStretch");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.extrusionMatrix");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.subdivisions");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.smoothWeight");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.flags");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeJointType");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeCapType");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeAlignment");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokePattern");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeDash");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeGap");
                                                  if (cVar3 == '\0') {
                                                    FUN_006886f0();
                                                    iVar12 = local_60;
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    fVar16 = (float10)FUN_00681240();
                                                    local_68 = (int *)(float)fVar16;
                                                    piVar5[0x2fd] = (int)local_68;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    fVar16 = (float10)FUN_00681240();
                                                    local_68 = (int *)(float)fVar16;
                                                    piVar5[0x2fc] = (int)local_68;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    iVar12 = FUN_00681220();
                                                    piVar5[0x2fe] = iVar12;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    iVar12 = FUN_00681220();
                                                    piVar5[0x21a] = iVar12;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    iVar12 = FUN_00681220();
                                                    piVar5[0x219] = iVar12;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    iVar12 = FUN_00681220();
                                                    piVar5[0x218] = iVar12;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    iVar12 = FUN_00681220();
                                                    piVar5[0x217] = iVar12;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    fVar16 = (float10)FUN_00681240();
                                                    local_68 = (int *)(float)fVar16;
                                                    FUN_00688490();
                                                    local_78 = local_68;
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    iVar12 = FUN_00681220();
                                                    local_60 = iVar12;
                                                    FUN_00688490();
                                                  }
                                                  }
                                                  else {
                                                    FUN_006808f0(piVar5 + 0x1d5);
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_006806b0(piVar5 + 0x1bf);
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_006806b0(piVar5 + 0x1a9);
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_006806b0(piVar5 + 0x193);
                                                    iVar12 = local_60;
                                                  }
                                                }
                                                else {
                                                  FUN_006806b0(piVar5 + 0x17d);
                                                  iVar12 = local_60;
                                                }
                                              }
                                              else {
                                                FUN_006806b0(piVar5 + 0x167);
                                                iVar12 = local_60;
                                              }
                                            }
                                            else {
                                              FUN_006806b0(piVar5 + 0x151);
                                              iVar12 = local_60;
                                            }
                                          }
                                          else {
                                            FUN_006806b0(piVar5 + 0x13b);
                                            iVar12 = local_60;
                                          }
                                        }
                                        else {
                                          FUN_006806b0(piVar5 + 0x125);
                                          iVar12 = local_60;
                                        }
                                      }
                                      else {
                                        FUN_006806b0(piVar5 + 0x10f);
                                        iVar12 = local_60;
                                      }
                                    }
                                    else {
                                      FUN_00680b40(piVar5 + 0xcd);
                                      iVar12 = local_60;
                                    }
                                  }
                                  else {
                                    FUN_006808f0(piVar5 + 0xf9);
                                    iVar12 = local_60;
                                  }
                                }
                                else {
                                  FUN_00680d80(piVar5 + 0xe3);
                                  iVar12 = local_60;
                                }
                              }
                              else {
                                FUN_00680b40(piVar5 + 0xb7);
                                iVar12 = local_60;
                              }
                            }
                            else {
                              FUN_006806b0(piVar5 + 0x201);
                              local_64 = (byte *)0x0;
                              iVar10 = (**(code **)(piVar5[0x201] + 4))();
                              iVar12 = local_60;
                              if (0 < iVar10) {
                                local_68 = (int *)(in_ECX + 0x20);
                                pbVar14 = local_64;
                                do {
                                  puVar1 = (undefined4 *)(piVar5[0x214] + (int)pbVar14 * 4);
                                  puVar11 = (undefined4 *)FUN_00468910(puVar1);
                                  *puVar1 = *puVar11;
                                  pbVar14 = local_64 + 1;
                                  local_64 = pbVar14;
                                  iVar10 = (**(code **)(piVar5[0x201] + 4))();
                                  iVar12 = local_60;
                                  in_ECX = local_80;
                                } while ((int)pbVar14 < iVar10);
                              }
                            }
                          }
                          else {
                            FUN_006806b0(piVar5 + 0x1eb);
                            local_64 = (byte *)0x0;
                            iVar10 = (**(code **)(piVar5[0x1eb] + 4))();
                            iVar12 = local_60;
                            if (0 < iVar10) {
                              local_68 = (int *)(in_ECX + 0x20);
                              pbVar14 = local_64;
                              do {
                                puVar1 = (undefined4 *)(piVar5[0x1fe] + (int)pbVar14 * 4);
                                puVar11 = (undefined4 *)FUN_00468910(puVar1);
                                *puVar1 = *puVar11;
                                pbVar14 = local_64 + 1;
                                local_64 = pbVar14;
                                iVar10 = (**(code **)(piVar5[0x1eb] + 4))();
                                iVar12 = local_60;
                                in_ECX = local_80;
                              } while ((int)pbVar14 < iVar10);
                            }
                          }
                        }
                        else {
                          FUN_0067fde0(piVar5 + 0x9b);
                          iVar12 = local_60;
                        }
                      }
                      else {
                        FUN_006803c0(piVar5 + 0x6f);
                        iVar12 = local_60;
                      }
                    }
                    else {
                      FUN_006803c0(piVar5 + 0x85);
                      iVar12 = local_60;
                    }
                  }
                  else {
                    FUN_006803c0(piVar5 + 0x59);
                    iVar12 = local_60;
                  }
                }
                else {
                  FUN_006803c0(piVar5 + 0x43);
                  iVar12 = local_60;
                }
              }
              else {
                FUN_006800d0(piVar5 + 0x2d);
                iVar12 = local_60;
              }
            }
          }
          goto LAB_00685a1e;
        }
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_7c,
                   (ulonglong)uVar4 << 0x20);
        if (0 < local_7c) {
          FUN_0040d9d0(local_7c);
          std::basic_istream<char,std::char_traits<char>_>::read
                    (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                     (char *)piVar5[0xb1],(ulonglong)uVar4 << 0x20);
          FUN_00688490();
          iVar12 = local_60;
          goto LAB_00685a1e;
        }
        goto LAB_0068511d;
      }
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_94,
                 (ulonglong)uVar4 << 0x20);
      local_74 = (char *)0x0;
      local_70 = 0;
      local_6c = 0;
      FUN_0040d9d0(local_94);
      local_8._0_1_ = 6;
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),local_74,
                 (ulonglong)uVar4 << 0x20);
      FUN_00642610(&local_74);
      FUN_00688490();
      iVar12 = local_60;
      if (local_74 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74);
      }
    }
LAB_00685a1e:
    local_8 = CONCAT31(local_8._1_3_,1);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    cVar3 = FUN_00688490();
  } while( true );
}


/* FUN_00685b10 @ 00685b10  kind=gamemisc  attributed-by=none  size=3305 */

void FUN_00685b10(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined4 *_Src;
  uint uVar11;
  int in_ECX;
  byte ****ppppbVar12;
  char *pcVar13;
  undefined4 *_Dst;
  bool bVar14;
  float10 fVar15;
  undefined4 local_cc;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_a4;
  uint local_a0;
  int local_9c;
  float local_98;
  float local_94;
  int *local_90;
  undefined1 local_8c [24];
  undefined2 local_74 [8];
  undefined4 local_64;
  undefined4 local_60;
  void *local_5c [5];
  uint local_48;
  byte ***local_44 [4];
  uint local_34;
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f9021;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_a0 = 7;
  local_a4 = 0;
  local_b4 = (void *)((uint)local_b4._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_b8 = 7;
  local_bc = 0;
  local_cc = (void *)((uint)local_cc._2_2_ << 0x10);
  local_8 = 1;
  piVar4 = (int *)FUN_006502e0(&local_cc,&local_b4);
  local_90 = piVar4;
  if (7 < local_b8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_cc);
  }
  local_b8 = 7;
  local_bc = 0;
  local_cc = (void *)((uint)local_cc & 0xffff0000);
  local_8 = 0xffffffff;
  if (7 < local_a0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_b4);
  }
  local_a0 = 7;
  local_a4 = 0;
  local_b4 = (void *)((uint)local_b4 & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      if ((*(byte *)(in_ECX + 0x60) & 0x20) != 0) {
        piVar4[0x7c] = piVar4[0x7c] | 1;
      }
      (**(code **)(*piVar4 + 4))(1);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar11 = local_18;
    uVar9 = local_1c;
    ppppbVar12 = local_2c;
    if (0xf < local_18) {
      ppppbVar12 = (byte ****)local_2c[0];
    }
    uVar5 = 0xe;
    if (local_1c < 0xe) {
      uVar5 = local_1c;
    }
    local_8 = 2;
    if (uVar5 == 0) {
LAB_00685cc1:
      if (local_1c < 0xe) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(local_1c != 0xe);
      }
      bVar14 = uVar5 == 0;
    }
    else {
      pcVar13 = "TextShape.name";
      while (uVar1 = uVar5 - 4, 3 < uVar5) {
        if (*ppppbVar12 != *(byte ****)pcVar13) goto LAB_00685c87;
        ppppbVar12 = ppppbVar12 + 1;
        pcVar13 = pcVar13 + 4;
        uVar5 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00685cbb:
        uVar5 = 0;
      }
      else {
LAB_00685c87:
        bVar14 = *(byte *)ppppbVar12 < (byte)*pcVar13;
        if ((*(byte *)ppppbVar12 == *pcVar13) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar14 = *(byte *)((int)ppppbVar12 + 1) < (byte)pcVar13[1],
             *(byte *)((int)ppppbVar12 + 1) == pcVar13[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar14 = *(byte *)((int)ppppbVar12 + 2) < (byte)pcVar13[2],
               *(byte *)((int)ppppbVar12 + 2) == pcVar13[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar14 = *(byte *)((int)ppppbVar12 + 3) < (byte)pcVar13[3],
                *(byte *)((int)ppppbVar12 + 3) == pcVar13[3])))))))))))) goto LAB_00685cbb;
        uVar5 = -(uint)bVar14 | 1;
      }
      bVar14 = false;
      if (uVar5 == 0) goto LAB_00685cc1;
    }
    if (bVar14) {
      FUN_00688180();
      uVar6 = FUN_00688510(local_5c);
      local_8._0_1_ = 3;
      piVar7 = (int *)FUN_006089c0(local_44,uVar6);
      piVar4 = local_90;
      local_8 = CONCAT31(local_8._1_3_,4);
      if (local_90 + 3 != piVar7) {
        FUN_0040f680(piVar7,0,0xffffffff);
      }
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      bVar14 = local_48 < 0x10;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (byte ***)((uint)local_44[0] & 0xffff0000);
LAB_00685e0c:
      local_8 = CONCAT31(local_8._1_3_,2);
      if (!bVar14) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      FUN_00688490();
    }
    else {
      ppppbVar12 = local_2c;
      if (0xf < local_18) {
        ppppbVar12 = (byte ****)local_2c[0];
      }
      uVar5 = 0xf;
      if (local_1c < 0xf) {
        uVar5 = local_1c;
      }
      if (uVar5 == 0) {
LAB_00685dc0:
        if (local_1c < 0xf) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(local_1c != 0xf);
        }
        bVar14 = uVar5 == 0;
      }
      else {
        pcVar13 = "TextShape.wname";
        while (uVar1 = uVar5 - 4, 3 < uVar5) {
          if (*ppppbVar12 != *(byte ****)pcVar13) goto LAB_00685d86;
          ppppbVar12 = ppppbVar12 + 1;
          pcVar13 = pcVar13 + 4;
          uVar5 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00685dba:
          uVar5 = 0;
        }
        else {
LAB_00685d86:
          bVar14 = *(byte *)ppppbVar12 < (byte)*pcVar13;
          if ((*(byte *)ppppbVar12 == *pcVar13) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar14 = *(byte *)((int)ppppbVar12 + 1) < (byte)pcVar13[1],
               *(byte *)((int)ppppbVar12 + 1) == pcVar13[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar14 = *(byte *)((int)ppppbVar12 + 2) < (byte)pcVar13[2],
                 *(byte *)((int)ppppbVar12 + 2) == pcVar13[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar14 = *(byte *)((int)ppppbVar12 + 3) < (byte)pcVar13[3],
                  *(byte *)((int)ppppbVar12 + 3) == pcVar13[3])))))))))))) goto LAB_00685dba;
          uVar5 = -(uint)bVar14 | 1;
        }
        bVar14 = false;
        if (uVar5 == 0) goto LAB_00685dc0;
      }
      if (bVar14) {
        FUN_00688180();
        piVar7 = (int *)FUN_00688610(local_5c);
        piVar4 = local_90;
        local_8 = CONCAT31(local_8._1_3_,5);
        if (local_90 + 3 != piVar7) {
          FUN_0040f680(piVar7,0,0xffffffff);
        }
        bVar14 = local_48 < 8;
        goto LAB_00685e0c;
      }
      ppppbVar12 = local_2c;
      if (0xf < local_18) {
        ppppbVar12 = (byte ****)local_2c[0];
      }
      uVar5 = 0x10;
      if (local_1c < 0x10) {
        uVar5 = local_1c;
      }
      iVar8 = FUN_0040c590(ppppbVar12,"TextShape.string",uVar5);
      bVar14 = false;
      if (iVar8 == 0) {
        if (uVar9 < 0x10) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar9 != 0x10);
        }
        bVar14 = uVar5 == 0;
      }
      if (bVar14) {
        FUN_00688180();
        local_98 = 0.0;
        cVar2 = FUN_00688490();
        piVar4 = local_90;
        if (cVar2 == '\0') {
          local_94 = 0.0;
          do {
            FUN_00688220(local_44,1);
            piVar4 = local_90;
            ppppbVar12 = local_44;
            if (0xf < local_30) {
              ppppbVar12 = (byte ****)local_44[0];
            }
            uVar9 = 0xf;
            if (local_34 < 0xf) {
              uVar9 = local_34;
            }
            local_8 = CONCAT31(local_8._1_3_,6);
            if (uVar9 == 0) {
LAB_00685f27:
              if (local_34 < 0xf) {
                uVar9 = 0xffffffff;
              }
              else {
                uVar9 = (uint)(local_34 != 0xf);
              }
              bVar14 = uVar9 == 0;
            }
            else {
              pcVar13 = "Attribute.frame";
              while (uVar11 = uVar9 - 4, 3 < uVar9) {
                if (*ppppbVar12 != *(byte ****)pcVar13) goto LAB_00685eed;
                ppppbVar12 = ppppbVar12 + 1;
                pcVar13 = pcVar13 + 4;
                uVar9 = uVar11;
              }
              if (uVar11 == 0xfffffffc) {
LAB_00685f21:
                uVar9 = 0;
              }
              else {
LAB_00685eed:
                bVar14 = *(byte *)ppppbVar12 < (byte)*pcVar13;
                if ((*(byte *)ppppbVar12 == *pcVar13) &&
                   ((uVar11 == 0xfffffffd ||
                    ((bVar14 = *(byte *)((int)ppppbVar12 + 1) < (byte)pcVar13[1],
                     *(byte *)((int)ppppbVar12 + 1) == pcVar13[1] &&
                     ((uVar11 == 0xfffffffe ||
                      ((bVar14 = *(byte *)((int)ppppbVar12 + 2) < (byte)pcVar13[2],
                       *(byte *)((int)ppppbVar12 + 2) == pcVar13[2] &&
                       ((uVar11 == 0xffffffff ||
                        (bVar14 = *(byte *)((int)ppppbVar12 + 3) < (byte)pcVar13[3],
                        *(byte *)((int)ppppbVar12 + 3) == pcVar13[3])))))))))))) goto LAB_00685f21;
                uVar9 = -(uint)bVar14 | 1;
              }
              bVar14 = false;
              if (uVar9 == 0) goto LAB_00685f27;
            }
            if (bVar14) {
              FUN_00688180();
              piVar4 = local_90;
              fVar10 = (float)(**(code **)(local_90[0x17] + 4))();
              if (local_98 == fVar10) {
                (**(code **)(piVar4[0x17] + 8))();
              }
              _Src = (undefined4 *)FUN_00688610(local_5c);
              _Dst = (undefined4 *)(piVar4[0x2a] + (int)local_94);
              if (_Dst != _Src) {
                if (7 < (uint)_Dst[5]) {
                    /* WARNING: Subroutine does not return */
                  operator_delete((void *)*_Dst);
                }
                _Dst[5] = 7;
                _Dst[4] = 0;
                *(undefined2 *)_Dst = 0;
                if ((uint)_Src[5] < 8) {
                  if (_Src[4] + 1 != 0) {
                    memmove(_Dst,_Src,(_Src[4] + 1) * 2);
                  }
                }
                else {
                  *_Dst = *_Src;
                  *_Src = 0;
                }
                _Dst[4] = _Src[4];
                _Dst[5] = _Src[5];
                _Src[5] = 7;
                _Src[4] = 0;
                *(undefined2 *)_Src = 0;
              }
              if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
                operator_delete(local_5c[0]);
              }
              local_98 = (float)((int)local_98 + 1);
              local_94 = (float)((int)local_94 + 0x18);
              FUN_00688490();
              piVar4 = local_90;
            }
            else {
              ppppbVar12 = local_44;
              if (0xf < local_30) {
                ppppbVar12 = (byte ****)local_44[0];
              }
              uVar9 = 0x12;
              if (local_34 < 0x12) {
                uVar9 = local_34;
              }
              if (uVar9 == 0) {
LAB_00686091:
                if (local_34 < 0x12) {
                  uVar9 = 0xffffffff;
                }
                else {
                  uVar9 = (uint)(local_34 != 0x12);
                }
                bVar14 = uVar9 == 0;
              }
              else {
                pcVar13 = "Attribute.sequence";
                while (uVar11 = uVar9 - 4, 3 < uVar9) {
                  if (*ppppbVar12 != *(byte ****)pcVar13) goto LAB_00686057;
                  ppppbVar12 = ppppbVar12 + 1;
                  pcVar13 = pcVar13 + 4;
                  uVar9 = uVar11;
                }
                if (uVar11 == 0xfffffffc) {
LAB_0068608b:
                  uVar9 = 0;
                }
                else {
LAB_00686057:
                  bVar14 = *(byte *)ppppbVar12 < (byte)*pcVar13;
                  if ((*(byte *)ppppbVar12 == *pcVar13) &&
                     ((uVar11 == 0xfffffffd ||
                      ((bVar14 = *(byte *)((int)ppppbVar12 + 1) < (byte)pcVar13[1],
                       *(byte *)((int)ppppbVar12 + 1) == pcVar13[1] &&
                       ((uVar11 == 0xfffffffe ||
                        ((bVar14 = *(byte *)((int)ppppbVar12 + 2) < (byte)pcVar13[2],
                         *(byte *)((int)ppppbVar12 + 2) == pcVar13[2] &&
                         ((uVar11 == 0xffffffff ||
                          (bVar14 = *(byte *)((int)ppppbVar12 + 3) < (byte)pcVar13[3],
                          *(byte *)((int)ppppbVar12 + 3) == pcVar13[3]))))))))))))
                  goto LAB_0068608b;
                  uVar9 = -(uint)bVar14 | 1;
                }
                bVar14 = false;
                if (uVar9 == 0) goto LAB_00686091;
              }
              if (bVar14) {
                FUN_00682a80(local_90 + 0x17);
              }
              else {
                FUN_006886f0();
                piVar4 = local_90;
              }
            }
            local_8 = CONCAT31(local_8._1_3_,2);
            if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_44[0]);
            }
            cVar2 = FUN_00688490();
          } while (cVar2 == '\0');
        }
      }
      else {
        ppppbVar12 = local_2c;
        if (0xf < uVar11) {
          ppppbVar12 = (byte ****)local_2c[0];
        }
        uVar5 = 0xf;
        if (uVar9 < 0xf) {
          uVar5 = uVar9;
        }
        iVar8 = FUN_0040c590(ppppbVar12,"TextShape.color",uVar5);
        piVar4 = local_90;
        bVar14 = false;
        if (iVar8 == 0) {
          if (uVar9 < 0xf) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (uint)(uVar9 != 0xf);
          }
          bVar14 = uVar5 == 0;
        }
        if (bVar14) {
          FUN_00680fd0(local_90 + 0x2d);
        }
        else {
          ppppbVar12 = local_2c;
          if (0xf < uVar11) {
            ppppbVar12 = (byte ****)local_2c[0];
          }
          uVar5 = 0x15;
          if (uVar9 < 0x15) {
            uVar5 = uVar9;
          }
          iVar8 = FUN_0040c590(ppppbVar12,"TextShape.strokeColor",uVar5);
          piVar4 = local_90;
          bVar14 = false;
          if (iVar8 == 0) {
            if (uVar9 < 0x15) {
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = (uint)(uVar9 != 0x15);
            }
            bVar14 = uVar5 == 0;
          }
          if (bVar14) {
            FUN_00680fd0(local_90 + 0x43);
          }
          else {
            ppppbVar12 = local_2c;
            if (0xf < uVar11) {
              ppppbVar12 = (byte ****)local_2c[0];
            }
            uVar5 = 0x18;
            if (uVar9 < 0x18) {
              uVar5 = uVar9;
            }
            iVar8 = FUN_0040c590(ppppbVar12,"TextShape.extrusionColor",uVar5);
            piVar4 = local_90;
            bVar14 = false;
            if (iVar8 == 0) {
              if (uVar9 < 0x18) {
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = (uint)(uVar9 != 0x18);
              }
              bVar14 = uVar5 == 0;
            }
            if (bVar14) {
              FUN_00680fd0(local_90 + 0x59);
            }
            else {
              ppppbVar12 = local_2c;
              if (0xf < uVar11) {
                ppppbVar12 = (byte ****)local_2c[0];
              }
              uVar11 = 0xf;
              if (uVar9 < 0xf) {
                uVar11 = uVar9;
              }
              iVar8 = FUN_0040c590(ppppbVar12,"TextShape.flags",uVar11);
              bVar14 = false;
              if (iVar8 == 0) {
                if (uVar9 < 0xf) {
                  uVar9 = 0xffffffff;
                }
                else {
                  uVar9 = (uint)(uVar9 != 0xf);
                }
                bVar14 = uVar9 == 0;
              }
              if (bVar14) {
                FUN_00688180();
                std::basic_istream<char,std::char_traits<char>_>::read
                          (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                           (char *)&local_9c,(ulonglong)uVar3 << 0x20);
                piVar4 = local_90;
                local_90[0x7b] = local_9c;
                FUN_00688490();
              }
              else {
                cVar2 = FUN_00451470(local_2c,"TextShape.pixelSize");
                if (cVar2 == '\0') {
                  cVar2 = FUN_00451470(local_2c,"TextShape.strokeRadius");
                  if (cVar2 == '\0') {
                    cVar2 = FUN_00451470(local_2c,"TextShape.spacing");
                    if (cVar2 == '\0') {
                      cVar2 = FUN_00451470(local_2c,"TextShape.lineSpacing");
                      if (cVar2 == '\0') {
                        cVar2 = FUN_00451470(local_2c,"TextShape.wrapWidth");
                        if (cVar2 == '\0') {
                          cVar2 = FUN_00451470(local_2c,"TextShape.fontSize");
                          if (cVar2 == '\0') {
                            cVar2 = FUN_00451470(local_2c,"TextShape.strokeWidth");
                            if (cVar2 == '\0') {
                              cVar2 = FUN_00451470(local_2c,"TextShape.fontName");
                              if (cVar2 == '\0') {
                                cVar2 = FUN_00451470(local_2c,"TextShape.wfontName");
                                if (cVar2 == '\0') {
                                  cVar2 = FUN_00451470(local_2c,"TextShape.font");
                                  if (cVar2 == '\0') {
                                    FUN_006886f0();
                                    piVar4 = local_90;
                                  }
                                  else {
                                    local_60 = 7;
                                    local_64 = 0;
                                    local_74[0] = 0;
                                    local_8 = CONCAT31(local_8._1_3_,8);
                                    local_94 = 0.0;
                                    local_98 = 0.0;
                                    FUN_00688180();
                                    cVar2 = FUN_00688490();
                                    piVar4 = local_90;
                                    while (local_90 = piVar4, cVar2 == '\0') {
                                      FUN_00688220(local_44,1);
                                      local_8._0_1_ = 9;
                                      cVar2 = FUN_00451470(local_44,"TextShape.font.fileName");
                                      if (cVar2 == '\0') {
                                        cVar2 = FUN_00451470(local_44,"TextShape.font.wfileName");
                                        if (cVar2 != '\0') {
                                          FUN_00688180();
                                          uVar6 = FUN_00688610(local_8c);
                                          FUN_00467fa0(uVar6);
                                          FUN_00593e50();
                                          goto LAB_00686731;
                                        }
                                        cVar2 = FUN_00451470(local_44,"TextShape.font.pixelSize");
                                        if (cVar2 != '\0') {
                                          FUN_00688180();
                                          iVar8 = FUN_00681220();
                                          local_94 = (float)iVar8;
                                          goto LAB_00686731;
                                        }
                                        cVar2 = FUN_00451470(local_44,"TextShape.font.glowRadius");
                                        if (cVar2 != '\0') {
                                          FUN_00688180();
                                          iVar8 = FUN_00681220();
                                          local_98 = (float)iVar8 * 0.5;
                                          goto LAB_00686731;
                                        }
                                        cVar2 = FUN_00451470(local_44,"TextShape.font.size");
                                        if (cVar2 == '\0') {
                                          cVar2 = FUN_00451470(local_44,"TextShape.font.strokeWidth"
                                                              );
                                          if (cVar2 == '\0') {
                                            cVar2 = FUN_00451470(local_44,
                                                  "TextShape.font.strokeGlow");
                                            if ((cVar2 == '\0') &&
                                               (cVar2 = FUN_00451470(local_44,
                                                  "TextShape.font.pixelFont"), cVar2 == '\0'))
                                            goto LAB_00686738;
                                            FUN_00688180();
                                            FUN_00681220();
                                          }
                                          else {
                                            FUN_00688180();
                                            fVar15 = (float10)FUN_00681240();
                                            local_98 = (float)fVar15 * 0.5;
                                          }
                                          goto LAB_00686731;
                                        }
                                        FUN_00688180();
                                        fVar15 = (float10)FUN_00681240();
                                        local_94 = (float)fVar15;
                                        FUN_00688490();
                                      }
                                      else {
                                        FUN_00688180();
                                        uVar6 = FUN_00688510(local_8c);
                                        local_8._0_1_ = 10;
                                        uVar6 = FUN_006089c0(local_5c,uVar6);
                                        FUN_00467fa0(uVar6);
                                        FUN_00593e50();
                                        local_8._0_1_ = 9;
                                        FUN_00403eb0();
LAB_00686731:
                                        FUN_00688490();
                                      }
LAB_00686738:
                                      local_8 = CONCAT31(local_8._1_3_,8);
                                      FUN_00403eb0();
                                      cVar2 = FUN_00688490();
                                      piVar4 = local_90;
                                    }
                                    if (piVar4 + 0x73 != (int *)local_74) {
                                      FUN_0040f680(local_74,0,0xffffffff);
                                    }
                                    piVar4[0x6f] = (int)local_94;
                                    piVar4[0x70] = (int)local_98;
                                    FUN_00593e50();
                                  }
                                }
                                else {
                                  FUN_00688180();
                                  uVar6 = FUN_00688610(local_5c);
                                  piVar4 = local_90;
                                  FUN_00467fa0(uVar6);
                                  FUN_00593e50();
                                  FUN_00688490();
                                }
                              }
                              else {
                                FUN_00688180();
                                uVar6 = FUN_00688510(local_44);
                                local_8._0_1_ = 7;
                                uVar6 = FUN_006089c0(local_5c,uVar6);
                                piVar4 = local_90;
                                FUN_00467fa0(uVar6);
                                FUN_00593e50();
                                local_8 = CONCAT31(local_8._1_3_,2);
                                FUN_00403eb0();
                                FUN_00688490();
                              }
                            }
                            else {
                              FUN_00688180();
                              iVar8 = FUN_00681220();
                              piVar4 = local_90;
                              local_90[0x70] = (int)((float)iVar8 * 0.5);
                              FUN_00688490();
                            }
                          }
                          else {
                            FUN_00688180();
                            iVar8 = FUN_00681220();
                            piVar4 = local_90;
                            local_90[0x6f] = (int)(float)iVar8;
                            FUN_00688490();
                          }
                        }
                        else {
                          FUN_00688180();
                          fVar15 = (float10)FUN_00681240();
                          piVar4 = local_90;
                          local_90[0x79] = (int)(float)fVar15;
                          FUN_00688490();
                        }
                      }
                      else {
                        FUN_00688180();
                        fVar15 = (float10)FUN_00681240();
                        piVar4 = local_90;
                        local_90[0x72] = (int)(float)fVar15;
                        FUN_00688490();
                      }
                    }
                    else {
                      FUN_00688180();
                      fVar15 = (float10)FUN_00681240();
                      piVar4 = local_90;
                      local_90[0x71] = (int)(float)fVar15;
                      FUN_00688490();
                    }
                  }
                  else {
                    FUN_00688180();
                    fVar15 = (float10)FUN_00681240();
                    piVar4 = local_90;
                    local_90[0x70] = (int)(float)fVar15;
                    FUN_00688490();
                  }
                }
                else {
                  FUN_00688180();
                  fVar15 = (float10)FUN_00681240();
                  piVar4 = local_90;
                  local_90[0x6f] = (int)(float)fVar15;
                  FUN_00688490();
                }
              }
            }
          }
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00686820 @ 00686820  kind=gamemisc  attributed-by=none  size=1976 */

void FUN_00686820(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int in_ECX;
  byte *****pppppbVar11;
  char *pcVar12;
  bool bVar13;
  char *local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  char *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_34;
  uint local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f907e;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  local_78 = -1;
  local_a0 = 1;
  local_9c = 1;
  local_98 = 1;
  local_94 = 1;
  local_90 = 1;
  local_7c = 0;
  local_80 = 0;
  local_8c = (char *)0x0;
  local_88 = 0;
  local_84 = 0;
  local_8 = 1;
  cVar2 = FUN_00688490();
  if (cVar2 == '\0') {
    do {
      FUN_00688220(local_2c,1);
      uVar7 = local_18;
      uVar8 = local_1c;
      pppppbVar11 = local_2c;
      if (0xf < local_18) {
        pppppbVar11 = (byte *****)local_2c[0];
      }
      uVar4 = 0xc;
      if (local_1c < 0xc) {
        uVar4 = local_1c;
      }
      local_8._0_1_ = 2;
      if (uVar4 == 0) {
LAB_00686957:
        if (local_1c < 0xc) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0xc);
        }
        bVar13 = uVar4 == 0;
      }
      else {
        pcVar12 = "Texture.name";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*pppppbVar11 != *(byte *****)pcVar12) goto LAB_0068691d;
          pppppbVar11 = pppppbVar11 + 1;
          pcVar12 = pcVar12 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00686951:
          uVar4 = 0;
        }
        else {
LAB_0068691d:
          bVar13 = *(byte *)pppppbVar11 < (byte)*pcVar12;
          if ((*(byte *)pppppbVar11 == *pcVar12) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar13 = *(byte *)((int)pppppbVar11 + 1) < (byte)pcVar12[1],
               *(byte *)((int)pppppbVar11 + 1) == pcVar12[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar13 = *(byte *)((int)pppppbVar11 + 2) < (byte)pcVar12[2],
                 *(byte *)((int)pppppbVar11 + 2) == pcVar12[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar13 = *(byte *)((int)pppppbVar11 + 3) < (byte)pcVar12[3],
                  *(byte *)((int)pppppbVar11 + 3) == pcVar12[3])))))))))))) goto LAB_00686951;
          uVar4 = -(uint)bVar13 | 1;
        }
        bVar13 = false;
        if (uVar4 == 0) goto LAB_00686957;
      }
      if (bVar13) {
        FUN_00688180();
        uVar5 = FUN_00688510(local_74);
        local_8 = CONCAT31(local_8._1_3_,3);
        piVar6 = (int *)FUN_006089c0(local_5c,uVar5);
        if (&local_44 != piVar6) {
          if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_44);
          }
          local_30 = 7;
          local_34 = 0;
          local_44 = (void *)((uint)local_44 & 0xffff0000);
          if ((uint)piVar6[5] < 8) {
            if (piVar6[4] + 1 != 0) {
              memmove(&local_44,piVar6,(piVar6[4] + 1) * 2);
            }
          }
          else {
            local_44 = (void *)*piVar6;
            *piVar6 = 0;
          }
          local_34 = piVar6[4];
          local_30 = piVar6[5];
          piVar6[5] = 7;
          piVar6[4] = 0;
          *(undefined2 *)piVar6 = 0;
        }
        if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_5c[0]);
        }
        bVar13 = local_60 < 0x10;
        local_48 = 7;
        local_4c = 0;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
        local_8._0_1_ = 2;
LAB_00686a3d:
        if (!bVar13) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_74[0]);
        }
LAB_00686a4a:
        FUN_00688490();
        uVar5 = local_7c;
        iVar9 = local_78;
      }
      else {
        pppppbVar11 = local_2c;
        if (0xf < local_18) {
          pppppbVar11 = (byte *****)local_2c[0];
        }
        uVar4 = 0xd;
        if (local_1c < 0xd) {
          uVar4 = local_1c;
        }
        if (uVar4 == 0) {
LAB_00686ad0:
          if (local_1c < 0xd) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(local_1c != 0xd);
          }
          bVar13 = uVar4 == 0;
        }
        else {
          pcVar12 = "Texture.wname";
          while (uVar1 = uVar4 - 4, 3 < uVar4) {
            if (*pppppbVar11 != *(byte *****)pcVar12) goto LAB_00686a96;
            pppppbVar11 = pppppbVar11 + 1;
            pcVar12 = pcVar12 + 4;
            uVar4 = uVar1;
          }
          if (uVar1 == 0xfffffffc) {
LAB_00686aca:
            uVar4 = 0;
          }
          else {
LAB_00686a96:
            bVar13 = *(byte *)pppppbVar11 < (byte)*pcVar12;
            if ((*(byte *)pppppbVar11 == *pcVar12) &&
               ((uVar1 == 0xfffffffd ||
                ((bVar13 = *(byte *)((int)pppppbVar11 + 1) < (byte)pcVar12[1],
                 *(byte *)((int)pppppbVar11 + 1) == pcVar12[1] &&
                 ((uVar1 == 0xfffffffe ||
                  ((bVar13 = *(byte *)((int)pppppbVar11 + 2) < (byte)pcVar12[2],
                   *(byte *)((int)pppppbVar11 + 2) == pcVar12[2] &&
                   ((uVar1 == 0xffffffff ||
                    (bVar13 = *(byte *)((int)pppppbVar11 + 3) < (byte)pcVar12[3],
                    *(byte *)((int)pppppbVar11 + 3) == pcVar12[3])))))))))))) goto LAB_00686aca;
            uVar4 = -(uint)bVar13 | 1;
          }
          bVar13 = false;
          if (uVar4 == 0) goto LAB_00686ad0;
        }
        if (bVar13) {
          FUN_00688180();
          piVar6 = (int *)FUN_00688610(local_74);
          if (&local_44 != piVar6) {
            if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_44);
            }
            local_30 = 7;
            local_34 = 0;
            local_44 = (void *)((uint)local_44 & 0xffff0000);
            if ((uint)piVar6[5] < 8) {
              if (piVar6[4] + 1 != 0) {
                memmove(&local_44,piVar6,(piVar6[4] + 1) * 2);
              }
            }
            else {
              local_44 = (void *)*piVar6;
              *piVar6 = 0;
            }
            local_34 = piVar6[4];
            local_30 = piVar6[5];
            piVar6[5] = 7;
            piVar6[4] = 0;
            *(undefined2 *)piVar6 = 0;
          }
          bVar13 = local_60 < 8;
          goto LAB_00686a3d;
        }
        pppppbVar11 = local_2c;
        if (0xf < local_18) {
          pppppbVar11 = (byte *****)local_2c[0];
        }
        uVar4 = 10;
        if (local_1c < 10) {
          uVar4 = local_1c;
        }
        iVar9 = FUN_0040c590(pppppbVar11,"Texture.id",uVar4);
        bVar13 = false;
        if (iVar9 == 0) {
          if (uVar8 < 10) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(uVar8 != 10);
          }
          bVar13 = uVar4 == 0;
        }
        if (!bVar13) {
          pppppbVar11 = local_2c;
          if (0xf < uVar7) {
            pppppbVar11 = (byte *****)local_2c[0];
          }
          uVar4 = 0x1a;
          if (uVar8 < 0x1a) {
            uVar4 = uVar8;
          }
          iVar9 = FUN_0040c590(pppppbVar11,"Texture.format.pixelFormat",uVar4);
          bVar13 = false;
          if (iVar9 == 0) {
            if (uVar8 < 0x1a) {
              uVar4 = 0xffffffff;
            }
            else {
              uVar4 = (uint)(uVar8 != 0x1a);
            }
            bVar13 = uVar4 == 0;
          }
          if (bVar13) {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_b0,(ulonglong)uVar3 << 0x20);
            local_a0 = local_b0;
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          pppppbVar11 = local_2c;
          if (0xf < uVar7) {
            pppppbVar11 = (byte *****)local_2c[0];
          }
          uVar4 = 0x18;
          if (uVar8 < 0x18) {
            uVar4 = uVar8;
          }
          iVar9 = FUN_0040c590(pppppbVar11,"Texture.format.minFilter",uVar4);
          bVar13 = false;
          if (iVar9 == 0) {
            if (uVar8 < 0x18) {
              uVar4 = 0xffffffff;
            }
            else {
              uVar4 = (uint)(uVar8 != 0x18);
            }
            bVar13 = uVar4 == 0;
          }
          if (bVar13) {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_ac,(ulonglong)uVar3 << 0x20);
            local_9c = local_ac;
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          pppppbVar11 = local_2c;
          if (0xf < uVar7) {
            pppppbVar11 = (byte *****)local_2c[0];
          }
          uVar4 = 0x18;
          if (uVar8 < 0x18) {
            uVar4 = uVar8;
          }
          iVar9 = FUN_0040c590(pppppbVar11,"Texture.format.maxFilter",uVar4);
          bVar13 = false;
          if (iVar9 == 0) {
            if (uVar8 < 0x18) {
              uVar4 = 0xffffffff;
            }
            else {
              uVar4 = (uint)(uVar8 != 0x18);
            }
            bVar13 = uVar4 == 0;
          }
          if (bVar13) {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_b4,(ulonglong)uVar3 << 0x20);
            local_98 = local_b4;
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          pppppbVar11 = local_2c;
          if (0xf < uVar7) {
            pppppbVar11 = (byte *****)local_2c[0];
          }
          uVar7 = 0x1d;
          if (uVar8 < 0x1d) {
            uVar7 = uVar8;
          }
          iVar9 = FUN_0040c590(pppppbVar11,"Texture.format.horizontalWrap",uVar7);
          bVar13 = false;
          if (iVar9 == 0) {
            if (uVar8 < 0x1d) {
              uVar8 = 0xffffffff;
            }
            else {
              uVar8 = (uint)(uVar8 != 0x1d);
            }
            bVar13 = uVar8 == 0;
          }
          if (bVar13) {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_a4,(ulonglong)uVar3 << 0x20);
            local_94 = local_a4;
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          cVar2 = FUN_00451470(local_2c,"Texture.format.verticalWrap");
          if (cVar2 != '\0') {
            FUN_00688180();
            local_90 = FUN_00681220();
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          cVar2 = FUN_00451470(local_2c,"Texture.width");
          if (cVar2 != '\0') {
            FUN_00688180();
            uVar5 = FUN_00681220();
            local_7c = uVar5;
            FUN_00688490();
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          cVar2 = FUN_00451470(local_2c,"Texture.height");
          if (cVar2 != '\0') {
            FUN_00688180();
            local_80 = FUN_00681220();
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          cVar2 = FUN_00451470(local_2c,"Texture.pixels");
          if (cVar2 == '\0') {
            cVar2 = FUN_00451470(local_2c,"Texture.compressedPixels");
            if (cVar2 == '\0') {
              FUN_006886f0();
              uVar5 = local_7c;
              iVar9 = local_78;
            }
            else {
              FUN_00688180();
              iVar9 = FUN_00681220();
              if (iVar9 < 1) goto LAB_00686a4a;
              FUN_005842d0(iVar9);
              local_8._0_1_ = 4;
              std::basic_istream<char,std::char_traits<char>_>::read
                        (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),local_c0[0],
                         CONCAT44(uVar3,iVar9 >> 0x1f));
              FUN_00449540(local_c0,&local_8c);
              local_8._0_1_ = 2;
              FUN_005fb860();
              FUN_00688490();
              uVar5 = local_7c;
              iVar9 = local_78;
            }
            goto LAB_00686f4b;
          }
          FUN_00688180();
          iVar9 = FUN_00681220();
          if (0 < iVar9) {
            FUN_005870c0(iVar9);
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),local_8c,
                       CONCAT44(uVar3,iVar9 >> 0x1f));
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          goto LAB_00686a4a;
        }
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_a8,
                   (ulonglong)uVar3 << 0x20);
        iVar9 = local_a8;
        local_78 = local_a8;
        FUN_00688490();
        uVar5 = local_7c;
      }
LAB_00686f4b:
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      cVar2 = FUN_00688490();
    } while (cVar2 == '\0');
    if (iVar9 != -1) {
      iVar9 = (**(code **)(**(int **)(in_ECX + 0x70) + 8))
                        (uVar5,local_80,local_8c,&local_a0,&local_44,0);
      uVar5 = *(undefined4 *)(iVar9 + 0x4c);
      puVar10 = (undefined4 *)FUN_00468910(&local_78);
      *puVar10 = uVar5;
    }
  }
  if (local_8c != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_8c);
  }
  if (local_30 < 8) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_44);
}


/* FUN_00686ff0 @ 00686ff0  kind=gamemisc  attributed-by=none  size=1092 */

void FUN_00686ff0(void)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte ****ppppbVar10;
  char *pcVar11;
  bool bVar12;
  undefined4 local_78;
  undefined4 local_68;
  uint local_64;
  int *local_60;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8de8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00688180(local_14);
  local_64 = 7;
  local_68 = 0;
  local_78 = (void *)((uint)local_78._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  piVar3 = (int *)FUN_00650360(&local_78);
  local_8 = 0xffffffff;
  local_60 = piVar3;
  if (7 < local_64) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_78);
  }
  local_64 = 7;
  local_68 = 0;
  local_78 = (void *)((uint)local_78 & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      (**(code **)(*piVar3 + 4))(1);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar8 = local_18;
    uVar9 = local_1c;
    ppppbVar10 = local_2c;
    if (0xf < local_18) {
      ppppbVar10 = (byte ****)local_2c[0];
    }
    uVar4 = 0x13;
    if (local_1c < 0x13) {
      uVar4 = local_1c;
    }
    local_8 = 1;
    if (uVar4 == 0) {
LAB_00687121:
      if (local_1c < 0x13) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0x13);
      }
      bVar12 = uVar4 == 0;
    }
    else {
      pcVar11 = "Transformation.name";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*ppppbVar10 != *(byte ****)pcVar11) goto LAB_006870e7;
        ppppbVar10 = ppppbVar10 + 1;
        pcVar11 = pcVar11 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_0068711b:
        uVar4 = 0;
      }
      else {
LAB_006870e7:
        bVar12 = *(byte *)ppppbVar10 < (byte)*pcVar11;
        if ((*(byte *)ppppbVar10 == *pcVar11) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar12 = *(byte *)((int)ppppbVar10 + 1) < (byte)pcVar11[1],
             *(byte *)((int)ppppbVar10 + 1) == pcVar11[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar12 = *(byte *)((int)ppppbVar10 + 2) < (byte)pcVar11[2],
               *(byte *)((int)ppppbVar10 + 2) == pcVar11[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar12 = *(byte *)((int)ppppbVar10 + 3) < (byte)pcVar11[3],
                *(byte *)((int)ppppbVar10 + 3) == pcVar11[3])))))))))))) goto LAB_0068711b;
        uVar4 = -(uint)bVar12 | 1;
      }
      bVar12 = false;
      if (uVar4 == 0) goto LAB_00687121;
    }
    if (bVar12) {
      FUN_00688180();
      uVar5 = FUN_00688510(local_5c);
      local_8._0_1_ = 2;
      piVar6 = (int *)FUN_006089c0(local_44,uVar5);
      piVar3 = local_60;
      local_8 = CONCAT31(local_8._1_3_,3);
      if (local_60 + 3 != piVar6) {
        FUN_0040f680(piVar6,0,0xffffffff);
      }
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      bVar12 = local_48 < 0x10;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
LAB_00687261:
      local_8 = CONCAT31(local_8._1_3_,1);
      if (!bVar12) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      FUN_00688490();
    }
    else {
      ppppbVar10 = local_2c;
      if (0xf < local_18) {
        ppppbVar10 = (byte ****)local_2c[0];
      }
      uVar4 = 0x14;
      if (local_1c < 0x14) {
        uVar4 = local_1c;
      }
      if (uVar4 == 0) {
LAB_00687218:
        if (local_1c < 0x14) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0x14);
        }
        bVar12 = uVar4 == 0;
      }
      else {
        pcVar11 = "Transformation.wname";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*ppppbVar10 != *(byte ****)pcVar11) goto LAB_006871de;
          ppppbVar10 = ppppbVar10 + 1;
          pcVar11 = pcVar11 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00687212:
          uVar4 = 0;
        }
        else {
LAB_006871de:
          bVar12 = *(byte *)ppppbVar10 < (byte)*pcVar11;
          if ((*(byte *)ppppbVar10 == *pcVar11) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar12 = *(byte *)((int)ppppbVar10 + 1) < (byte)pcVar11[1],
               *(byte *)((int)ppppbVar10 + 1) == pcVar11[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar12 = *(byte *)((int)ppppbVar10 + 2) < (byte)pcVar11[2],
                 *(byte *)((int)ppppbVar10 + 2) == pcVar11[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar12 = *(byte *)((int)ppppbVar10 + 3) < (byte)pcVar11[3],
                  *(byte *)((int)ppppbVar10 + 3) == pcVar11[3])))))))))))) goto LAB_00687212;
          uVar4 = -(uint)bVar12 | 1;
        }
        bVar12 = false;
        if (uVar4 == 0) goto LAB_00687218;
      }
      if (bVar12) {
        FUN_00688180();
        piVar6 = (int *)FUN_00688610(local_5c);
        piVar3 = local_60;
        local_8 = CONCAT31(local_8._1_3_,4);
        if (local_60 + 3 != piVar6) {
          FUN_0040f680(piVar6,0,0xffffffff);
        }
        bVar12 = local_48 < 8;
        goto LAB_00687261;
      }
      ppppbVar10 = local_2c;
      if (0xf < local_18) {
        ppppbVar10 = (byte ****)local_2c[0];
      }
      uVar4 = 0x1a;
      if (local_1c < 0x1a) {
        uVar4 = local_1c;
      }
      iVar7 = FUN_0040c590(ppppbVar10,"Transformation.translation",uVar4);
      piVar3 = local_60;
      bVar12 = false;
      if (iVar7 == 0) {
        if (uVar9 < 0x1a) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar9 != 0x1a);
        }
        bVar12 = uVar4 == 0;
      }
      if (bVar12) {
        FUN_00680b40(local_60 + 0x12);
      }
      else {
        ppppbVar10 = local_2c;
        if (0xf < uVar8) {
          ppppbVar10 = (byte ****)local_2c[0];
        }
        uVar4 = 0x17;
        if (uVar9 < 0x17) {
          uVar4 = uVar9;
        }
        iVar7 = FUN_0040c590(ppppbVar10,"Transformation.rotation",uVar4);
        piVar3 = local_60;
        bVar12 = false;
        if (iVar7 == 0) {
          if (uVar9 < 0x17) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(uVar9 != 0x17);
          }
          bVar12 = uVar4 == 0;
        }
        if (bVar12) {
          FUN_00680d80(local_60 + 0x3e);
        }
        else {
          ppppbVar10 = local_2c;
          if (0xf < uVar8) {
            ppppbVar10 = (byte ****)local_2c[0];
          }
          uVar4 = 0x14;
          if (uVar9 < 0x14) {
            uVar4 = uVar9;
          }
          iVar7 = FUN_0040c590(ppppbVar10,"Transformation.pivot",uVar4);
          piVar3 = local_60;
          bVar12 = false;
          if (iVar7 == 0) {
            if (uVar9 < 0x14) {
              uVar4 = 0xffffffff;
            }
            else {
              uVar4 = (uint)(uVar9 != 0x14);
            }
            bVar12 = uVar4 == 0;
          }
          if (bVar12) {
            FUN_00680b40(local_60 + 0x54);
          }
          else {
            ppppbVar10 = local_2c;
            if (0xf < uVar8) {
              ppppbVar10 = (byte ****)local_2c[0];
            }
            uVar8 = 0x1a;
            if (uVar9 < 0x1a) {
              uVar8 = uVar9;
            }
            iVar7 = FUN_0040c590(ppppbVar10,"Transformation.deformation",uVar8);
            piVar3 = local_60;
            bVar12 = false;
            if (iVar7 == 0) {
              if (uVar9 < 0x1a) {
                uVar9 = 0xffffffff;
              }
              else {
                uVar9 = (uint)(uVar9 != 0x1a);
              }
              bVar12 = uVar9 == 0;
            }
            if (bVar12) {
              FUN_006808f0(local_60 + 0x28);
            }
            else {
              FUN_006886f0();
              piVar3 = local_60;
            }
          }
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_006880c0 @ 006880c0  kind=gamemisc  attributed-by=none  size=178 */

/* WARNING: Removing unreachable block (ram,0x00688164) */

void FUN_006880c0(char *param_1,uint param_2,uint *param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint local_8;
  
  uVar3 = *param_3;
  FUN_005870c0(param_2);
  if (0 < (int)param_2) {
    local_8 = param_2;
    pcVar5 = param_1;
    do {
      pcVar1 = pcVar5 + (uVar3 % param_2 - (int)param_1);
      uVar6 = (uint)pcVar1 % param_2 & 0x80000007;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
      }
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_8 = local_8 - 1;
      *(char *)((uint)pcVar1 % param_2) = cVar2 - *(char *)(uVar6 + (int)param_3);
    } while (local_8 != 0);
    if (0 < (int)param_2) {
      iVar4 = -(int)param_1;
      do {
        *param_1 = param_1[iVar4];
        param_1 = param_1 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  return;
}


/* FUN_00688220 @ 00688220  kind=gamemisc  attributed-by=none  size=610 */

void FUN_00688220(undefined1 *param_1,char param_2)

{
  uint uVar1;
  void **ppvVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  int local_4c;
  int local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f9230;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_14 = uVar1;
  std::basic_istream<char,std::char_traits<char>_>::read
            (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_48,
             (ulonglong)uVar1 << 0x20);
  if ((*(byte *)(*(int *)(**(int **)(in_ECX + 8) + 4) + 0xc + (int)*(int **)(in_ECX + 8)) & 1) == 0)
  {
    if (local_48 == 0) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_48,
                 (ulonglong)uVar1 << 0x20);
      local_4c = local_48;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_8 = 0;
      if ((param_2 == '\0') || (*(int *)(in_ECX + 0x10) == 0 && *(int *)(in_ECX + 0x14) == 0)) {
        ppvVar2 = (void **)FUN_00688510(local_44);
        if (local_2c != ppvVar2) {
          if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_2c[0]);
          }
          local_18 = 0xf;
          local_1c = 0;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00405060(ppvVar2);
        }
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_44[0]);
        }
      }
      else {
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_48,
                   (ulonglong)uVar1 << 0x20);
        FUN_005870c0(local_48);
        local_8._0_1_ = 1;
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)0x0,
                   CONCAT44(uVar1,local_48 >> 0x1f));
        FUN_006880c0(0,local_48,in_ECX + 0x10);
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        FUN_00583cd0(0,0,local_4c);
        FUN_00404090(local_44);
        FUN_00403eb0();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_005fb860();
      }
      ppvVar2 = (void **)FUN_0064e0f0(&local_4c);
      if (ppvVar2 != local_2c) {
        FUN_0040c0a0(local_2c,0,0xffffffff);
      }
      FUN_00688490();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_4c,
                 (ulonglong)uVar1 << 0x20);
      local_48 = local_4c;
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
    }
    uVar3 = FUN_0064e0f0(&local_48);
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_0040c0a0(uVar3,0,0xffffffff);
    uVar3 = extraout_EDX_00;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_0040c280(&DAT_006fc918,0);
    uVar3 = extraout_EDX;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,uVar3,uVar4);
  return;
}


/* FUN_006886f0 @ 006886f0  kind=gamemisc  attributed-by=none  size=114 */

void FUN_006886f0(void)

{
  undefined8 *puVar1;
  int in_ECX;
  uint unaff_EDI;
  undefined8 local_20;
  uint local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_8,
             (ulonglong)unaff_EDI << 0x20);
  puVar1 = (undefined8 *)
           std::basic_istream<char,std::char_traits<char>_>::tellg
                     (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8));
  local_20._0_4_ = (uint)*puVar1;
  local_20._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
  local_20 = CONCAT44(local_20._4_4_ + ((int)local_8 >> 0x1f) + (uint)CARRY4((uint)local_20,local_8)
                      ,(uint)local_20 + local_8);
  std::basic_istream<char,std::char_traits<char>_>::seekg
            (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),local_20,puVar1[1],
             (int)puVar1[2],(int)((ulonglong)puVar1[2] >> 0x20));
  return;
}


/* FUN_0068a710 @ 0068a710  kind=gamemisc  attributed-by=none  size=198 */

void FUN_0068a710(void)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(in_ECX + 0x2c4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(in_ECX + 0x2c4) = 0;
  }
  iVar1 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x3c) - *(int *)(in_ECX + 0x38) & 0xfffffffcU)) {
    do {
      FUN_006504c0(*(undefined4 *)(*(int *)(in_ECX + 0x38) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x3c) - *(int *)(in_ECX + 0x38) >> 2);
  }
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(in_ECX + 0x38);
  piVar2 = (int *)**(int **)(in_ECX + 0x7c);
  if (piVar2 != *(int **)(in_ECX + 0x7c)) {
    do {
      if ((*(int *)(piVar2[2] + 0x3c) != 0) &&
         (iVar1 = __RTDynamicCast(*(int *)(piVar2[2] + 0x3c),0,
                                  &plasma::RenderSurface::RTTI_Type_Descriptor,
                                  &plasma::D3D9RenderSurface::RTTI_Type_Descriptor,0), iVar1 != 0))
      {
        FUN_0068d300();
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x7c));
  }
  piVar2 = (int *)**(int **)(in_ECX + 0x2b8);
  if (piVar2 != *(int **)(in_ECX + 0x2b8)) {
    do {
      FUN_0068ab30();
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x2b8));
  }
  FUN_006504c0(*(undefined4 *)(in_ECX + 0x44));
  *(undefined4 *)(in_ECX + 0x44) = 0;
  return;
}


/* FUN_0068b6a0 @ 0068b6a0  kind=gamemisc  attributed-by=none  size=336 */

void FUN_0068b6a0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  void *in_ECX;
  void *local_8;
  
  local_8 = in_ECX;
  if ((*(int *)((int)in_ECX + 0x130) != 0) &&
     (puVar1 = (undefined4 *)((int)in_ECX + 0x128), *(int *)((int)in_ECX + 0x128) == 0)) {
    piVar2 = *(int **)(*(int *)((int)in_ECX + 0x124) + 0x2c0);
    (**(code **)(*piVar2 + 0x68))
              (piVar2,(*(int *)((int)in_ECX + 200) - *(int *)((int)in_ECX + 0xc4) >> 3) * 0x30,0x208
               ,0,0,puVar1,0);
    (**(code **)(*(int *)*puVar1 + 0x2c))
              ((int *)*puVar1,0,
               (*(int *)((int)in_ECX + 200) - *(int *)((int)in_ECX + 0xc4) >> 3) * 0x30,&local_8,
               0x2000);
    memcpy(local_8,*(void **)((int)in_ECX + 0x130),
           (*(int *)((int)in_ECX + 200) - *(int *)((int)in_ECX + 0xc4) >> 3) * 0x30);
    (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1);
  }
  if ((*(int *)((int)in_ECX + 0x134) != 0) &&
     (puVar1 = (undefined4 *)((int)in_ECX + 300), *(int *)((int)in_ECX + 300) == 0)) {
    piVar2 = *(int **)(*(int *)((int)in_ECX + 0x124) + 0x2c0);
    (**(code **)(*piVar2 + 0x6c))
              (piVar2,*(int *)((int)in_ECX + 0xf8) - *(int *)((int)in_ECX + 0xf4) & 0xfffffffc,0x208
               ,0x66,0,puVar1,0);
    (**(code **)(*(int *)*puVar1 + 0x2c))
              ((int *)*puVar1,0,
               *(int *)((int)in_ECX + 0xf8) - *(int *)((int)in_ECX + 0xf4) & 0xfffffffc,&local_8,
               0x2000);
    memcpy(local_8,*(void **)((int)in_ECX + 0x134),
           *(int *)((int)in_ECX + 0xf8) - *(int *)((int)in_ECX + 0xf4) & 0xfffffffc);
    (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1);
  }
  return;
}


/* __alldiv @ 0068d9e0  kind=gamemisc  attributed-by=none  size=170 */

/* Library Function - Single Match
    __alldiv
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


/* `eh_vector_constructor_iterator' @ 0068dac4  kind=gamemisc  attributed-by=none  size=76 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Library: Visual Studio 2012 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  int iVar1;
  void *in_stack_ffffffcc;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_0068db1c();
  return;
}


/* ___report_securityfailure @ 0068dcb0  kind=gamemisc  attributed-by=none  size=206 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_securityfailure
   
   Library: Visual Studio 2012 Release */

void ___report_securityfailure(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  uint extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  lVar9 = (ulonglong)extraout_EDX << 0x20;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    lVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_0076e058 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_0076e060 = (undefined4)lVar9;
  _DAT_0076e070 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0076e074 = &param_1;
  _DAT_0076df60 = 0xc0000409;
  _DAT_0076df64 = 1;
  _DAT_0076df70 = 1;
  DAT_0076df74 = param_1;
  _DAT_0076df6c = unaff_retaddr;
  _DAT_0076e03c = in_GS;
  _DAT_0076e040 = in_FS;
  _DAT_0076e044 = in_ES;
  _DAT_0076e048 = in_DS;
  _DAT_0076e04c = unaff_EDI;
  _DAT_0076e050 = unaff_ESI;
  _DAT_0076e054 = unaff_EBX;
  _DAT_0076e05c = uVar3;
  _DAT_0076e064 = unaff_EBP;
  DAT_0076e068 = unaff_retaddr;
  _DAT_0076e06c = in_CS;
  _DAT_0076e078 = in_SS;
  ___raise_securityfailure(&PTR_DAT_00722648);
  return;
}


/* __alldvrm @ 0068dd90  kind=gamemisc  attributed-by=none  size=223 */

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __allrem @ 0068de70  kind=gamemisc  attributed-by=none  size=178 */

/* Library Function - Single Match
    __allrem
   
   Library: Visual Studio */

undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar3 = param_1;
  uVar4 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_0068df1d;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar4 = uVar4 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar8 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar4;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY4(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_0068df1d;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_0068df1d:
  return CONCAT44(iVar6,iVar5);
}


/* __aulldiv @ 0068df50  kind=gamemisc  attributed-by=none  size=104 */

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __aulldvrm @ 0068dfc0  kind=gamemisc  attributed-by=none  size=149 */

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __aullrem @ 0068e060  kind=gamemisc  attributed-by=none  size=117 */

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


/* __FindPESection @ 0068e660  kind=gamemisc  attributed-by=none  size=67 */

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2012 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}


/* __ValidateImageBase @ 0068e770  kind=gamemisc  attributed-by=none  size=49 */

/* Library Function - Single Match
    __ValidateImageBase
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b)
    ;
  }
  return uVar1;
}


/* FUN_0068e970 @ 0068e970  kind=gamemisc  attributed-by=none  size=35 */

uint FUN_0068e970(int param_1)

{
  if (-1 < param_1) {
    return param_1 + 0x8000U & 0xffff0000;
  }
  return -(0x8000U - param_1 & 0xffff0000);
}


/* FUN_0068ecd0 @ 0068ecd0  kind=gamemisc  attributed-by=none  size=137 */

undefined4 FUN_0068ecd0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return 6;
  }
  uVar6 = *param_1;
  uVar5 = param_1[2];
  uVar1 = param_1[1];
  uVar2 = param_1[3];
  iVar3 = FUN_0068ebc0(uVar1,uVar5);
  iVar4 = FUN_0068ebc0(uVar6,uVar2);
  iVar4 = iVar4 - iVar3;
  if (iVar4 == 0) {
    return 6;
  }
  iVar3 = FUN_0068ec40(uVar1,iVar4);
  param_1[1] = -iVar3;
  iVar3 = FUN_0068ec40(uVar5,iVar4);
  param_1[2] = -iVar3;
  uVar5 = FUN_0068ec40(param_1[3],iVar4);
  *param_1 = uVar5;
  uVar6 = FUN_0068ec40(uVar6,iVar4);
  param_1[3] = uVar6;
  return 0;
}


/* FUN_0068eec0 @ 0068eec0  kind=gamemisc  attributed-by=none  size=51 */

void FUN_0068eec0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (0 < (int)param_1) {
    uVar4 = 0;
    iVar5 = 0x18;
    iVar2 = 0;
    do {
      iVar3 = iVar2 * 2;
      uVar4 = uVar4 * 4 | param_1 >> 0x1e;
      uVar1 = iVar2 * 4 + 1;
      param_1 = param_1 * 4;
      if (uVar1 <= uVar4) {
        uVar4 = uVar4 - uVar1;
        iVar3 = iVar3 + 1;
      }
      iVar5 = iVar5 + -1;
      iVar2 = iVar3;
    } while (iVar5 != 0);
  }
  return;
}


/* FUN_0068ef00 @ 0068ef00  kind=gamemisc  attributed-by=none  size=181 */

int FUN_0068ef00(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (param_2 == 0) {
    if (param_1 < 0) {
      return -param_4;
    }
  }
  else if (param_1 == 0) {
    param_4 = param_3;
    if (-1 < param_2) {
      return -param_3;
    }
  }
  else {
    if (param_4 == 0) {
      if (param_3 < 0) {
        param_2 = -param_2;
      }
      return param_2;
    }
    if (param_3 != 0) {
      FUN_0068e9a0(&local_10);
      FUN_0068e9a0(&local_8);
      if (local_c <= local_4) {
        if (local_c < local_4) {
          return -1;
        }
        if (local_10 <= local_8) {
          return -(uint)(local_10 < local_8);
        }
      }
      return 1;
    }
    bVar1 = -1 < param_4;
    param_4 = param_1;
    if (bVar1) {
      return -param_1;
    }
  }
  return param_4;
}


/* FUN_0068efc0 @ 0068efc0  kind=gamemisc  attributed-by=none  size=95 */

bool FUN_0068efc0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1;
  if (param_1 < 0) {
    iVar2 = -param_1;
  }
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = -param_2;
  }
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = -param_3;
  }
  iVar4 = param_4;
  if (param_4 < 0) {
    iVar4 = -param_4;
  }
  param_3 = param_3 + param_1;
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  param_2 = param_2 + param_4;
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  return ((iVar3 + iVar4) - (param_3 + param_2)) + iVar1 + iVar2 < param_3 + param_2 >> 4;
}


/* FUN_0068f040 @ 0068f040  kind=gamemisc  attributed-by=none  size=69 */

void FUN_0068f040(void)

{
  int in_EAX;
  
  *(int *)(in_EAX + 0x3c) = *(int *)(in_EAX + 0x18) + *(short *)(in_EAX + 0x16) * 8;
  *(int *)(in_EAX + 0x40) = (int)*(short *)(in_EAX + 0x16) + *(int *)(in_EAX + 0x1c);
  *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x20) + *(short *)(in_EAX + 0x14) * 2;
  if (*(char *)(in_EAX + 0x10) != '\0') {
    *(int *)(in_EAX + 0x4c) = *(int *)(in_EAX + 0x28) + *(short *)(in_EAX + 0x16) * 8;
    *(int *)(in_EAX + 0x50) = *(int *)(in_EAX + 0x2c) + *(short *)(in_EAX + 0x16) * 8;
  }
  return;
}


/* FUN_0068f0c0 @ 0068f0c0  kind=gamemisc  attributed-by=none  size=79 */

void FUN_0068f0c0(int param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    sVar2 = *(short *)(param_1 + 0x16);
    sVar3 = *(short *)(param_1 + 0x38);
    *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x3a) + sVar2;
    *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + *(short *)(param_1 + 0x38);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x54);
    uVar4 = 0;
    if ((int)sVar3 != 0) {
      do {
        psVar1 = (short *)(*(int *)(param_1 + 0x44) + uVar4 * 2);
        *psVar1 = *psVar1 + sVar2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(int)sVar3);
    }
    FUN_0068f0a0();
    return;
  }
  return;
}


/* FUN_0068f170 @ 0068f170  kind=gamemisc  attributed-by=none  size=32 */

void FUN_0068f170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  return;
}


/* FUN_0068f4a0 @ 0068f4a0  kind=gamemisc  attributed-by=none  size=94 */

void FUN_0068f4a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar1 < 0) {
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
  }
  else if (0 < iVar1) {
    iVar2 = iVar2 - iVar1;
  }
  if (param_2 == 0) {
    param_2 = (iVar2 * 0xc) / 10;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10) / 2;
  *(int *)(param_1 + 0x18) = (param_2 - iVar2) / 2;
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}


/* FUN_0068fb10 @ 0068fb10  kind=gamemisc  attributed-by=none  size=127 */

undefined4 FUN_0068fb10(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == 0) {
    return 6;
  }
  if (param_2 == 0x756e6963) {
    uVar2 = FUN_0068f2f0(param_1);
    return uVar2;
  }
  piVar3 = *(int **)(param_1 + 0x28);
  if (piVar3 == (int *)0x0) {
    return 0x26;
  }
  piVar1 = piVar3 + *(int *)(param_1 + 0x24);
  if (piVar3 < piVar1) {
    iVar4 = 0;
    do {
      if ((*(int *)(*piVar3 + 4) == param_2) && (iVar4 < 0x3d)) {
        *(int *)(param_1 + 0x5c) = *piVar3;
        return 0;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (piVar3 < piVar1);
  }
  return 6;
}


/* FUN_0068fc00 @ 0068fc00  kind=gamemisc  attributed-by=none  size=97 */

undefined4 FUN_0068fc00(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if ((param_1 != 0) &&
     (puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x80) + 0x20), puVar2 != (undefined4 *)0xfffffffe
     )) {
    if (puVar2 == (undefined4 *)0x0) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x60) + 0x20);
      if (pcVar1 != (code *)0x0) {
        puVar2 = (undefined4 *)(*pcVar1)(*(int **)(param_1 + 0x60),"postscript-font-name");
      }
      puVar4 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0xfffffffe;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x80) + 0x20) = puVar4;
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
    }
    if ((code *)*puVar2 != (code *)0x0) {
      uVar3 = (*(code *)*puVar2)(param_1);
      return uVar3;
    }
  }
  return 0;
}


/* FUN_0068fcc0 @ 0068fcc0  kind=gamemisc  attributed-by=none  size=32 */

undefined4 FUN_0068fcc0(int *param_1)

{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) && (*(int *)(iVar1 + 0x60) != 0))
  {
    *(int **)(iVar1 + 0x58) = param_1;
    return 0;
  }
  return 6;
}


/* FUN_0068ff90 @ 0068ff90  kind=gamemisc  attributed-by=none  size=931 */

int FUN_0068ff90(short *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  byte *local_64;
  int *local_60;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  iVar7 = 0;
  if ((param_1 == (short *)0x0) || (param_2 == (undefined4 *)0x0)) {
    return 6;
  }
  uVar1 = param_2[4];
  iVar2 = param_2[5];
  local_58 = 0;
  if (*param_1 < 1) {
    return 0;
  }
  do {
    iVar4 = (int)*(short *)(*(int *)(param_1 + 6) + local_58 * 2);
    if (iVar4 < 0) {
      return 0x14;
    }
    iVar3 = *(int *)(param_1 + 2);
    local_60 = (int *)(iVar3 + iVar4 * 8);
    bVar6 = (byte)uVar1;
    local_44 = (*(int *)(iVar3 + 4 + iVar7 * 8) << (bVar6 & 0x1f)) - iVar2;
    local_48 = (*(int *)(iVar3 + iVar7 * 8) << (bVar6 & 0x1f)) - iVar2;
    local_40 = (*(int *)(*(int *)(param_1 + 2) + iVar4 * 8) << (bVar6 & 0x1f)) - iVar2;
    local_3c = (*(int *)(*(int *)(param_1 + 2) + 4 + iVar4 * 8) << (bVar6 & 0x1f)) - iVar2;
    local_64 = (byte *)(*(int *)(param_1 + 4) + iVar7);
    piVar8 = (int *)(*(int *)(param_1 + 2) + iVar7 * 8);
    if ((*local_64 & 3) == 2) {
      return 0x14;
    }
    local_50 = local_48;
    local_4c = local_44;
    if ((*local_64 & 3) == 0) {
      if ((*(byte *)(*(int *)(param_1 + 4) + iVar4) & 3) == 1) {
        local_60 = local_60 + -2;
        local_4c = local_3c;
        local_50 = local_40;
      }
      else {
        local_50 = (local_48 + local_40) / 2;
        local_4c = (local_3c + local_44) / 2;
      }
      piVar8 = piVar8 + -2;
      local_64 = local_64 + -1;
    }
    iVar7 = (*(code *)*param_2)(&local_50,param_3);
    while( true ) {
      while( true ) {
        while( true ) {
          if (iVar7 != 0) {
            return iVar7;
          }
          if (local_60 <= piVar8) {
            iVar7 = (*(code *)param_2[1])(&local_50,param_3);
            goto LAB_006900ed;
          }
          pbVar5 = local_64 + 1;
          piVar10 = piVar8 + 2;
          if ((local_64[1] & 3) != 0) break;
          local_48 = (*piVar10 << (bVar6 & 0x1f)) - iVar2;
          local_44 = (piVar8[3] << (bVar6 & 0x1f)) - iVar2;
          while( true ) {
            if (local_60 <= piVar10) {
              iVar7 = (*(code *)param_2[2])(&local_48,&local_50,param_3);
              goto LAB_006900ed;
            }
            piVar8 = piVar10 + 3;
            pbVar5 = pbVar5 + 1;
            piVar10 = piVar10 + 2;
            iStack_38 = (*piVar10 << (bVar6 & 0x1f)) - iVar2;
            iStack_34 = (*piVar8 << (bVar6 & 0x1f)) - iVar2;
            if ((*pbVar5 & 3) == 1) break;
            if ((*pbVar5 & 3) != 0) {
              return 0x14;
            }
            iStack_10 = (iStack_38 + local_48) / 2;
            iStack_c = (iStack_34 + local_44) / 2;
            iVar7 = (*(code *)param_2[2])(&local_48,&iStack_10,param_3);
            if (iVar7 != 0) {
              return iVar7;
            }
            local_48 = iStack_38;
            local_44 = iStack_34;
          }
          iVar7 = (*(code *)param_2[2])(&local_48,&iStack_38,param_3);
          piVar8 = piVar10;
          local_64 = pbVar5;
        }
        if ((local_64[1] & 3) != 1) break;
        iStack_18 = (*piVar10 << (bVar6 & 0x1f)) - iVar2;
        iStack_14 = (piVar8[3] << (bVar6 & 0x1f)) - iVar2;
        iVar7 = (*(code *)param_2[1])(&iStack_18,param_3);
        piVar8 = piVar10;
        local_64 = pbVar5;
      }
      if (local_60 < piVar8 + 4) {
        return 0x14;
      }
      if ((local_64[2] & 3) != 2) {
        return 0x14;
      }
      piVar9 = piVar8 + 6;
      iStack_28 = (*piVar10 << (bVar6 & 0x1f)) - iVar2;
      iStack_24 = (piVar8[3] << (bVar6 & 0x1f)) - iVar2;
      iStack_30 = (piVar8[4] << (bVar6 & 0x1f)) - iVar2;
      iStack_2c = (piVar8[5] << (bVar6 & 0x1f)) - iVar2;
      if (local_60 < piVar9) break;
      iStack_20 = (*piVar9 << (bVar6 & 0x1f)) - iVar2;
      iStack_1c = (piVar8[7] << (bVar6 & 0x1f)) - iVar2;
      iVar7 = (*(code *)param_2[3])(&iStack_28,&iStack_30,&iStack_20,param_3);
      piVar8 = piVar9;
      local_64 = local_64 + 3;
    }
    iVar7 = (*(code *)param_2[3])(&iStack_28,&iStack_30,&local_50,param_3);
LAB_006900ed:
    if (iVar7 != 0) {
      return iVar7;
    }
    local_58 = local_58 + 1;
    iVar7 = iVar4 + 1;
    if (*param_1 <= local_58) {
      return 0;
    }
  } while( true );
}


/* FUN_00690430 @ 00690430  kind=gamemisc  attributed-by=none  size=140 */

void FUN_00690430(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    if (*(short *)(param_1 + 2) == 0) {
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      return;
    }
    piVar1 = *(int **)(param_1 + 4);
    iVar6 = *piVar1;
    iVar8 = piVar1[1];
    iVar7 = iVar6;
    iVar3 = iVar8;
    piVar5 = piVar1;
    while (piVar4 = piVar5 + 2, piVar4 < piVar1 + *(short *)(param_1 + 2) * 2) {
      iVar2 = *piVar4;
      if (iVar2 < iVar6) {
        iVar6 = iVar2;
      }
      if (iVar7 < iVar2) {
        iVar7 = iVar2;
      }
      iVar2 = piVar5[3];
      if (iVar2 < iVar8) {
        iVar8 = iVar2;
      }
      piVar5 = piVar4;
      if (iVar3 < iVar2) {
        iVar3 = iVar2;
      }
    }
    param_2[1] = iVar8;
    param_2[2] = iVar7;
    *param_2 = iVar6;
    param_2[3] = iVar3;
  }
  return;
}


/* FUN_006905a0 @ 006905a0  kind=gamemisc  attributed-by=none  size=685 */

void FUN_006905a0(short *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  short *psVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  short *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  short *local_20;
  int local_1c [7];
  
  local_1c[6] = DAT_0076aa78 ^ (uint)&local_40;
  local_3c = (uint *)0x8000;
  local_34 = (uint *)0x8000;
  local_30 = (uint *)0xffff8000;
  local_24 = (uint *)0x0;
  local_28 = (uint *)0x0;
  local_1c[0] = 2;
  local_1c[1] = 2;
  local_1c[2] = 2;
  if ((param_1 == (short *)0x0) || (param_1[1] < 1)) {
    __security_check_cookie(DAT_0076aa78 ^ (uint)&local_40 ^ (uint)&local_40);
    return;
  }
  local_2c = *(uint **)(param_1 + 2);
  local_40 = *(short **)(param_1 + 6);
  local_20 = local_40 + *param_1;
  puVar11 = local_2c;
  if (local_40 < local_20) {
    do {
      puVar12 = local_2c + *local_40 * 2;
      puVar8 = (uint *)0x8000;
      puVar9 = (uint *)0xffff8000;
      local_38 = (uint *)0xffff8000;
      puVar13 = (uint *)0x8000;
      puVar6 = puVar11;
      if (puVar11 + 4 <= puVar12) {
        for (; puVar6 <= puVar12; puVar6 = puVar6 + 2) {
          puVar1 = (uint *)*puVar6;
          if ((int)puVar1 < (int)puVar8) {
            puVar8 = puVar1;
          }
          if ((int)local_38 < (int)puVar1) {
            local_38 = puVar1;
          }
          puVar1 = (uint *)puVar6[1];
          if ((int)puVar1 < (int)puVar13) {
            puVar13 = puVar1;
          }
          if ((int)puVar9 < (int)puVar1) {
            puVar9 = puVar1;
          }
        }
        if ((((int)puVar8 < (int)local_3c) && (puVar8 != local_38)) && (puVar13 != puVar9)) {
          local_3c = puVar8;
          local_34 = puVar13;
          local_30 = puVar9;
          local_28 = puVar12;
          local_24 = puVar11;
        }
      }
      local_40 = local_40 + 1;
      puVar11 = puVar12 + 2;
    } while (local_40 < local_20);
    if (local_3c != (uint *)0x8000) {
      local_1c[3] = (int)local_30 + (int)local_34 * 3 >> 2;
      psVar10 = (short *)0x0;
      local_1c[4] = (int)local_30 + (int)local_34 >> 1;
      local_1c[5] = (int)local_34 + (int)local_30 * 3 >> 2;
      local_40 = (short *)0x0;
LAB_00690700:
      do {
        puVar11 = (uint *)0x8000;
        local_34 = (uint *)0xffff8000;
        local_3c = (uint *)0x0;
        local_30 = (uint *)0x0;
        local_2c = (uint *)0x0;
        local_38 = (uint *)0x0;
        puVar12 = local_28;
        for (puVar8 = local_24; puVar8 <= local_28; puVar8 = puVar8 + 2) {
          uVar2 = *(uint *)((int)(local_1c + 3) + (int)psVar10);
          uVar3 = puVar8[1];
          if ((uVar3 == uVar2) || (uVar4 = puVar12[1], uVar4 == uVar2)) {
            *(int *)((int)(local_1c + 3) + (int)psVar10) =
                 *(int *)((int)(local_1c + 3) + (int)psVar10) + 1;
            goto LAB_00690700;
          }
          if ((((int)uVar2 <= (int)uVar3) || ((int)uVar2 <= (int)uVar4)) &&
             (((int)uVar3 <= (int)uVar2 || ((int)uVar4 <= (int)uVar2)))) {
            uVar5 = *puVar12;
            iVar7 = FUN_0068ea60(*puVar8 - uVar5,uVar2 - uVar4,uVar3 - uVar4);
            puVar9 = (uint *)(iVar7 + uVar5);
            if ((int)puVar9 < (int)puVar11) {
              puVar11 = puVar9;
              local_38 = puVar12;
              local_2c = puVar8;
            }
            psVar10 = local_40;
            if ((int)local_34 < (int)puVar9) {
              local_3c = puVar8;
              local_34 = puVar9;
              local_30 = puVar12;
            }
          }
          puVar12 = puVar8;
        }
        if ((local_38 != (uint *)0x0) && (local_30 != (uint *)0x0)) {
          if (((int)local_38[1] < (int)local_2c[1]) && ((int)local_3c[1] < (int)local_30[1])) {
            *(undefined4 *)((int)local_1c + (int)psVar10) = 0;
          }
          else if (((int)local_2c[1] < (int)local_38[1]) && ((int)local_30[1] < (int)local_3c[1])) {
            *(undefined4 *)((int)local_1c + (int)psVar10) = 1;
          }
          else {
            *(undefined4 *)((int)local_1c + (int)psVar10) = 2;
          }
        }
        psVar10 = psVar10 + 2;
        local_40 = psVar10;
      } while ((int)psVar10 < 0xc);
      if ((((local_1c[0] == 2) || ((local_1c[0] != local_1c[1] && (local_1c[0] != local_1c[2])))) &&
          (local_1c[1] != 2)) && (local_1c[1] == local_1c[2])) {
        __security_check_cookie(local_1c[6] ^ (uint)&local_40);
        return;
      }
    }
  }
  __security_check_cookie(local_1c[6] ^ (uint)&local_40);
  return;
}


/* FUN_00690a20 @ 00690a20  kind=gamemisc  attributed-by=none  size=21 */

undefined1 FUN_00690a20(int param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  uVar2 = 0;
  if (puVar1 < *(undefined1 **)(param_1 + 0x24)) {
    uVar2 = *puVar1;
    *(undefined1 **)(param_1 + 0x20) = puVar1 + 1;
  }
  return uVar2;
}


/* FUN_00690a40 @ 00690a40  kind=gamemisc  attributed-by=none  size=44 */

undefined2 FUN_00690a40(int param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  uVar3 = 0;
  if (puVar4 + 1 < *(undefined1 **)(param_1 + 0x24)) {
    uVar2 = *puVar4;
    puVar1 = puVar4 + 1;
    puVar4 = puVar4 + 2;
    uVar3 = CONCAT11(uVar2,*puVar1);
  }
  *(undefined1 **)(param_1 + 0x20) = puVar4;
  return uVar3;
}


/* FUN_00690a70 @ 00690a70  kind=gamemisc  attributed-by=none  size=44 */

undefined2 FUN_00690a70(int param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = *(undefined2 **)(param_1 + 0x20);
  uVar1 = 0;
  if ((int)puVar2 + 1U < *(uint *)(param_1 + 0x24)) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 **)(param_1 + 0x20) = puVar2;
  return uVar1;
}


/* FUN_00690aa0 @ 00690aa0  kind=gamemisc  attributed-by=none  size=56 */

undefined4 FUN_00690aa0(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  uVar2 = 0;
  puVar3 = puVar1;
  if (puVar1 + 3 < *(undefined1 **)(param_1 + 0x24)) {
    puVar3 = puVar1 + 4;
    uVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]);
  }
  *(undefined1 **)(param_1 + 0x20) = puVar3;
  return uVar2;
}


/* FUN_00690ae0 @ 00690ae0  kind=gamemisc  attributed-by=none  size=57 */

undefined4 FUN_00690ae0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  uVar2 = 0;
  puVar3 = puVar1;
  if ((int)puVar1 + 3U < *(uint *)(param_1 + 0x24)) {
    puVar3 = puVar1 + 1;
    uVar2 = *puVar1;
  }
  *(undefined4 **)(param_1 + 0x20) = puVar3;
  return uVar2;
}


/* FUN_00690bf0 @ 00690bf0  kind=gamemisc  attributed-by=none  size=99 */

undefined2 FUN_00690bf0(int *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  uVar1 = 0;
  *param_2 = 0;
  iVar2 = param_1[2];
  if ((uint)param_1[1] <= iVar2 + 1U) {
LAB_00690c48:
    *puVar3 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar3 = (undefined4 *)(*param_1 + iVar2);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00690c41;
  }
  else {
    iVar2 = (*(code *)param_1[5])(param_1,iVar2,&param_2,2);
    if (iVar2 != 2) goto LAB_00690c48;
    puVar3 = &param_2;
  }
  uVar1 = *(undefined2 *)puVar3;
LAB_00690c41:
  param_1[2] = param_1[2] + 2;
  return uVar1;
}


/* FUN_00690c60 @ 00690c60  kind=gamemisc  attributed-by=none  size=102 */

int FUN_00690c60(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  iVar1 = 0;
  *param_2 = 0;
  iVar2 = param_1[2];
  if ((uint)param_1[1] <= iVar2 + 2U) {
LAB_00690cbb:
    *puVar3 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar3 = (undefined4 *)(*param_1 + iVar2);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00690cb4;
  }
  else {
    iVar2 = (*(code *)param_1[5])(param_1,iVar2,&param_2,3);
    if (iVar2 != 3) goto LAB_00690cbb;
    puVar3 = &param_2;
  }
  iVar1 = (int)CONCAT21(CONCAT11(*(undefined1 *)puVar3,*(undefined1 *)((int)puVar3 + 1)),
                        *(undefined1 *)((int)puVar3 + 2));
LAB_00690cb4:
  param_1[2] = param_1[2] + 3;
  return iVar1;
}


/* FUN_00690d40 @ 00690d40  kind=gamemisc  attributed-by=none  size=111 */

undefined4 FUN_00690d40(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  uVar1 = 0;
  *param_2 = 0;
  iVar2 = param_1[2];
  if ((uint)param_1[1] <= iVar2 + 3U) {
LAB_00690da4:
    *puVar3 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar3 = (undefined4 *)(*param_1 + iVar2);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00690d9d;
  }
  else {
    iVar2 = (*(code *)param_1[5])(param_1,iVar2,&param_2,4);
    if (iVar2 != 4) goto LAB_00690da4;
    puVar3 = &param_2;
  }
  uVar1 = *puVar3;
LAB_00690d9d:
  param_1[2] = param_1[2] + 4;
  return uVar1;
}


/* FUN_00691170 @ 00691170  kind=gamemisc  attributed-by=none  size=110 */

int FUN_00691170(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint local_8;
  uint local_4;
  
  local_8 = *param_1;
  local_4 = param_1[1];
  uVar1 = local_4;
  if ((local_8 != 0) && (uVar1 = local_8, local_4 != 0)) {
    iVar2 = FUN_00690e10(&local_8);
    FUN_00690f80(&local_8);
    iVar3 = FUN_00690db0();
    bVar4 = (byte)iVar2;
    if (iVar2 < 1) {
      return iVar3 << (-bVar4 & 0x1f);
    }
    return (1 << (bVar4 - 1 & 0x1f)) + iVar3 >> (bVar4 & 0x1f);
  }
  return (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
}


/* FUN_006912b0 @ 006912b0  kind=gamemisc  attributed-by=none  size=95 */

void * FUN_006912b0(undefined4 param_1,void *param_2,size_t param_3,int *param_4)

{
  void *_Dst;
  int local_4;
  
  _Dst = (void *)FUN_00691240(param_1,param_3,&local_4);
  if (local_4 != 0) {
    *param_4 = local_4;
    return _Dst;
  }
  if (param_2 != (void *)0x0) {
    memcpy(_Dst,param_2,param_3);
    *param_4 = 0;
    return _Dst;
  }
  *param_4 = 0;
  return _Dst;
}


/* FUN_00691310 @ 00691310  kind=gamemisc  attributed-by=none  size=72 */

void FUN_00691310(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_006912b0(param_1,param_2,pcVar2 + (1 - (int)(param_2 + 1)),param_3);
    return;
  }
  FUN_006912b0(param_1,0,0,param_3);
  return;
}


/* FUN_00691360 @ 00691360  kind=gamemisc  attributed-by=none  size=46 */

bool FUN_00691360(char *param_1,char *param_2,uint param_3)

{
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_3 = param_3 - 1;
    param_1 = param_1 + 1;
  }
  *param_1 = '\0';
  return *param_2 != '\0';
}


/* FUN_006914c0 @ 006914c0  kind=gamemisc  attributed-by=none  size=23 */

uint FUN_006914c0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 - 1 & param_1;
  while (uVar1 = uVar2, uVar1 != 0) {
    param_1 = uVar1;
    uVar2 = uVar1 & uVar1 - 1;
  }
  return param_1;
}


/* FUN_006919d0 @ 006919d0  kind=gamemisc  attributed-by=none  size=180 */

undefined4 FUN_006919d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    return 0x24;
  }
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return 0x23;
  }
  iVar3 = *(int *)(iVar2 + 0x60);
  if (iVar3 == 0) {
    return 0x22;
  }
  uVar4 = *(undefined4 *)(iVar3 + 8);
  piVar1 = (int *)(iVar2 + 0x6c);
  iVar5 = FUN_00691390(piVar1,param_1);
  if (iVar5 != 0) {
    FUN_006913e0(piVar1,iVar5);
    FUN_00691290(uVar4,iVar5);
    if (*(int **)(iVar2 + 0x58) == param_1) {
      *(undefined4 *)(iVar2 + 0x58) = 0;
      if (*piVar1 != 0) {
        *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(*piVar1 + 8);
      }
    }
    FUN_006917d0(uVar4,param_1,iVar3);
    return 0;
  }
  return 0x24;
}


/* FUN_00691a90 @ 00691a90  kind=gamemisc  attributed-by=none  size=108 */

undefined4 FUN_00691a90(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    return 0x23;
  }
  piVar3 = *(int **)(param_1 + 0x28);
  if (piVar3 == (int *)0x0) {
    return 0x26;
  }
  iVar2 = FUN_0068fc70(param_2);
  if (iVar2 != 0xe) {
    piVar1 = piVar3 + *(int *)(param_1 + 0x24);
    for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
      if ((*piVar3 == param_2) &&
         ((int)((int)piVar3 - *(int *)(param_1 + 0x28) & 0xfffffffcU) < 0x3d)) {
        *(int *)(param_1 + 0x5c) = *piVar3;
        return 0;
      }
    }
  }
  return 6;
}


/* FUN_00691dc0 @ 00691dc0  kind=gamemisc  attributed-by=none  size=255 */

/* WARNING: Removing unreachable block (ram,0x00691eb8) */

int FUN_00691dc0(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  iVar2 = FUN_00690cd0();
  if (in_ECX != 0) {
    return in_ECX;
  }
  if (iVar2 != param_1) {
    return 2;
  }
  FUN_00690cd0();
  iVar2 = FUN_00690900();
  if (iVar2 == 0) {
    uVar1 = FUN_00690b80();
    if (uVar1 == 0) {
      return 2;
    }
    iVar2 = 0;
    if (uVar1 != 0) {
      do {
        iVar3 = FUN_00690cd0();
        if (iVar3 == 2) {
          uVar4 = FUN_00690cd0();
          FUN_00690cd0();
          *param_2 = uVar4;
          return 0;
        }
        iVar3 = FUN_00690900();
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)uVar1);
    }
    iVar2 = 2;
  }
  return iVar2;
}


/* FUN_00691ee0 @ 00691ee0  kind=gamemisc  attributed-by=none  size=70 */

void FUN_00691ee0(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    *param_2 = 0;
    return;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00691290(*(undefined4 *)(param_1 + 0x1c),*param_2);
    *param_2 = 0;
    *param_2 = 0;
    return;
  }
  *param_2 = 0;
  return;
}


/* FUN_00692010 @ 00692010  kind=gamemisc  attributed-by=none  size=469 */

int FUN_00692010(int param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  sbyte sVar9;
  byte *pbVar10;
  
  pbVar10 = param_2;
  bVar5 = false;
  if ((param_2 == (byte *)0x0) || (param_1 == 0)) {
    return 6;
  }
  bVar2 = *param_2;
  param_2 = (byte *)0x0;
  puVar7 = *(uint **)(param_1 + 0x20);
  while (bVar2 - 4 < 0x16) {
    switch(bVar2 - 4) {
    case 4:
      param_2 = (byte *)FUN_00691f30(param_1,*(undefined2 *)(pbVar10 + 2));
      if (param_2 == (byte *)0x0) {
        puVar8 = *(uint **)(param_1 + 0x20);
        bVar5 = true;
        goto LAB_006921a0;
      }
      goto LAB_006921b8;
    default:
      goto switchD_00692059_caseD_5;
    case 8:
    case 9:
      uVar6 = (uint)(byte)*puVar7;
      puVar8 = (uint *)((int)puVar7 + 1);
      sVar9 = 0x18;
      break;
    case 0xc:
    case 0xd:
      puVar8 = (uint *)((int)puVar7 + 2);
      uVar6 = (uint)CONCAT11((byte)*puVar7,*(byte *)((int)puVar7 + 1));
      sVar9 = 0x10;
      break;
    case 0xe:
    case 0xf:
      puVar8 = (uint *)((int)puVar7 + 2);
      uVar6 = (uint)(ushort)*puVar7;
      sVar9 = 0x10;
      break;
    case 0x10:
    case 0x11:
      puVar8 = puVar7 + 1;
      uVar6 = CONCAT31(CONCAT21(CONCAT11((byte)*puVar7,*(byte *)((int)puVar7 + 1)),
                                *(byte *)((int)puVar7 + 2)),*(byte *)((int)puVar7 + 3));
      sVar9 = 0;
      break;
    case 0x12:
    case 0x13:
      puVar8 = puVar7 + 1;
      uVar6 = *puVar7;
      sVar9 = 0;
      break;
    case 0x14:
    case 0x15:
      uVar4 = CONCAT11((byte)*puVar7,*(byte *)((int)puVar7 + 1));
      bVar3 = *(byte *)((int)puVar7 + 2);
      goto LAB_00692170;
    case 0x16:
    case 0x17:
                    /* WARNING: This code block may not be properly labeled as switch case */
      uVar4 = *(undefined2 *)((int)puVar7 + 1);
      bVar3 = (byte)*puVar7;
LAB_00692170:
      puVar8 = (uint *)((int)puVar7 + 3);
      uVar6 = (uint)CONCAT21(uVar4,bVar3);
      sVar9 = 8;
      break;
    case 0x18:
    case 0x19:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar8 = (uint *)((uint)pbVar10[1] + (int)puVar7);
      if (puVar8 <= *(uint **)(param_1 + 0x24)) {
        if (bVar2 == 0x18) {
          memcpy((void *)((uint)*(ushort *)(pbVar10 + 2) + param_3),puVar7,(uint)pbVar10[1]);
        }
        goto LAB_006921a0;
      }
      param_2 = (byte *)0x55;
      goto LAB_006921b8;
    }
    if ((bVar2 & 1) != 0) {
      uVar6 = (int)(uVar6 << sVar9) >> sVar9;
    }
    puVar7 = (uint *)((uint)*(ushort *)(pbVar10 + 2) + param_3);
    if (pbVar10[1] == 1) {
      *(char *)puVar7 = (char)uVar6;
    }
    else if (pbVar10[1] == 2) {
      *(short *)puVar7 = (short)uVar6;
    }
    else {
      *puVar7 = uVar6;
    }
LAB_006921a0:
    pbVar1 = pbVar10 + 4;
    pbVar10 = pbVar10 + 4;
    puVar7 = puVar8;
    bVar2 = *pbVar1;
  }
switchD_00692059_caseD_5:
  *(uint **)(param_1 + 0x20) = puVar7;
LAB_006921b8:
  if (bVar5) {
    FUN_00691fe0(param_1);
  }
  return (int)param_2;
}


/* FUN_00693c40 @ 00693c40  kind=gamemisc  attributed-by=none  size=359 */

int FUN_00693c40(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  puVar2 = param_1;
  uVar5 = param_1[1];
  uVar6 = *param_1;
  iVar7 = 0;
  uVar8 = (int)*(short *)((int)param_1 + 0x16) + *(short *)((int)param_1 + 0x3a) + param_2;
  bVar1 = false;
  param_1 = (undefined4 *)0x0;
  if (uVar5 < uVar8) {
    uVar8 = uVar8 + 7 & 0xfffffff8;
    if (0x7fff < uVar8) {
      return 10;
    }
    uVar3 = FUN_00693a60(uVar6,8,uVar5,uVar8,puVar2[6],&param_1);
    puVar2[6] = uVar3;
    if (param_1 != (undefined4 *)0x0) {
      return (int)param_1;
    }
    uVar3 = FUN_00693a60(uVar6,1,uVar5,uVar8,puVar2[7],&param_1);
    puVar2[7] = uVar3;
    if (param_1 != (undefined4 *)0x0) {
      return (int)param_1;
    }
    iVar7 = (int)param_1;
    if (*(char *)(puVar2 + 4) != '\0') {
      iVar4 = FUN_00693a60(uVar6,8,uVar5 * 2,uVar8 * 2,puVar2[10],&param_1);
      iVar7 = (int)param_1;
      puVar2[10] = iVar4;
      if (param_1 != (undefined4 *)0x0) {
        return (int)param_1;
      }
      memmove((void *)(iVar4 + uVar8 * 8),(void *)(uVar5 * 8 + iVar4),uVar5 * 8);
      puVar2[0xb] = puVar2[10] + uVar8 * 8;
    }
    bVar1 = true;
    puVar2[1] = uVar8;
  }
  uVar5 = (int)*(short *)(puVar2 + 5) + *(short *)(puVar2 + 0xe) + param_3;
  if ((uint)puVar2[2] < uVar5) {
    uVar5 = uVar5 + 3 & 0xfffffffc;
    if (0x7fff < uVar5) {
      return 10;
    }
    uVar6 = FUN_00693a60(uVar6,2,puVar2[2],uVar5,puVar2[8],&param_1);
    puVar2[8] = uVar6;
    iVar7 = (int)param_1;
    if (param_1 == (undefined4 *)0x0) {
      puVar2[2] = uVar5;
      FUN_0068f040();
      return 0;
    }
  }
  else if (bVar1) {
    FUN_0068f040();
  }
  return iVar7;
}


/* FUN_00693db0 @ 00693db0  kind=gamemisc  attributed-by=none  size=87 */

int FUN_00693db0(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int extraout_EDX;
  
  puVar2 = param_1;
  puVar1 = param_1 + 3;
  uVar5 = param_1[0x15] + param_1[0xc] + param_2;
  uVar3 = *param_1;
  param_1 = (undefined4 *)0x0;
  iVar4 = 0;
  if (*puVar1 < uVar5) {
    uVar5 = uVar5 + 1 & 0xfffffffe;
    uVar3 = FUN_00693a60(uVar3,0x20,*puVar1,uVar5,puVar2[0xd],&param_1);
    puVar2[0xd] = uVar3;
    iVar4 = (int)param_1;
    if (param_1 == (undefined4 *)0x0) {
      puVar2[3] = uVar5;
      FUN_0068f090();
      iVar4 = extraout_EDX;
    }
  }
  return iVar4;
}


/* FUN_00693e10 @ 00693e10  kind=gamemisc  attributed-by=none  size=180 */

int FUN_00693e10(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  size_t _Size;
  
  sVar1 = *(short *)(param_2 + 0x14);
  sVar2 = *(short *)(param_2 + 0x16);
  _Size = (size_t)sVar2;
  iVar3 = FUN_00693c40(param_1,_Size,(int)sVar1);
  if (iVar3 == 0) {
    memcpy(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),_Size * 8);
    memcpy(*(void **)(param_1 + 0x1c),*(void **)(param_2 + 0x1c),_Size);
    memcpy(*(void **)(param_1 + 0x20),*(void **)(param_2 + 0x20),sVar1 * 2);
    if ((*(char *)(param_1 + 0x10) != '\0') && (*(char *)(param_2 + 0x10) != '\0')) {
      memcpy(*(void **)(param_1 + 0x28),*(void **)(param_2 + 0x28),_Size * 8);
      memcpy(*(void **)(param_1 + 0x2c),*(void **)(param_2 + 0x2c),_Size * 8);
    }
    *(short *)(param_1 + 0x16) = sVar2;
    *(short *)(param_1 + 0x14) = sVar1;
    FUN_0068f040();
  }
  return iVar3;
}


/* FUN_00693ed0 @ 00693ed0  kind=gamemisc  attributed-by=none  size=226 */

int FUN_00693ed0(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  undefined4 local_4;
  
  local_8 = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_3 == (int *)0x0)) || (iVar1 = *param_3, iVar1 == 0))
  {
    return 6;
  }
  local_4 = *(undefined4 *)(iVar1 + 100);
  piVar2 = (int *)FUN_00692230(local_4,*param_1,&local_8);
  if (local_8 != 0) goto LAB_00693f93;
  *piVar2 = *param_3;
  piVar2[1] = param_3[1];
  piVar2[2] = param_3[2];
  piVar2[3] = (int)param_1;
  if ((code *)param_1[1] == (code *)0x0) {
LAB_00693f56:
    iVar3 = FUN_00693a60(local_4,4,*(int *)(iVar1 + 0x24),*(int *)(iVar1 + 0x24) + 1,
                         *(undefined4 *)(iVar1 + 0x28),&local_8);
    *(int *)(iVar1 + 0x28) = iVar3;
    if (local_8 == 0) {
      *(int **)(iVar3 + *(int *)(iVar1 + 0x24) * 4) = piVar2;
      *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
      goto LAB_00693f93;
    }
  }
  else {
    local_8 = (*(code *)param_1[1])(piVar2,param_2);
    if (local_8 == 0) goto LAB_00693f56;
  }
  iVar1 = local_8;
  FUN_00691b00();
  piVar2 = (int *)0x0;
  local_8 = iVar1;
LAB_00693f93:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = piVar2;
  }
  return local_8;
}


/* FUN_00695d90 @ 00695d90  kind=gamemisc  attributed-by=none  size=27 */

void FUN_00695d90(void)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  
  in_EAX[6] = in_ECX;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[5] = 0xffffffff;
  *(undefined1 *)(in_EAX + 7) = 0;
  return;
}


/* FUN_00695f10 @ 00695f10  kind=gamemisc  attributed-by=none  size=78 */

undefined4 * FUN_00695f10(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_EDX;
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x6;
  }
  iVar2 = FUN_00692230(*param_1,0x78,&param_1);
  if (param_1 == (undefined4 *)0x0) {
    *(undefined4 **)(iVar2 + 0x74) = puVar1;
    FUN_00695d90();
    FUN_00695d90();
    iVar2 = extraout_EDX;
  }
  *param_2 = iVar2;
  return param_1;
}


/* FUN_006971d0 @ 006971d0  kind=gamemisc  attributed-by=none  size=147 */

undefined4 * FUN_006971d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *unaff_EBX;
  undefined4 *puVar9;
  bool bVar10;
  
  bVar5 = *unaff_EBX;
  puVar1 = *(undefined4 **)(in_EAX + 0xc);
  uVar3 = 0;
  bVar6 = 0;
  pbVar7 = unaff_EBX;
  if (bVar5 != 0) {
    do {
      iVar4 = (int)(char)bVar5;
      bVar5 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
      uVar3 = iVar4 + uVar3 * 0x1f;
    } while (bVar5 != 0);
    bVar6 = *unaff_EBX;
  }
  uVar3 = uVar3 % *(uint *)(in_EAX + 4);
  puVar2 = (undefined4 *)puVar1[uVar3];
  puVar9 = puVar1 + uVar3;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return puVar9;
    }
    pbVar7 = (byte *)*puVar2;
    pbVar8 = unaff_EBX;
    if (*pbVar7 == bVar6) {
      do {
        bVar5 = *pbVar7;
        bVar10 = bVar5 < *pbVar8;
        if (bVar5 != *pbVar8) {
LAB_00697240:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00697245;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar7[1];
        bVar10 = bVar5 < pbVar8[1];
        if (bVar5 != pbVar8[1]) goto LAB_00697240;
        pbVar7 = pbVar7 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar5 != 0);
      iVar4 = 0;
LAB_00697245:
      if (iVar4 == 0) {
        return puVar9;
      }
      bVar6 = *unaff_EBX;
    }
    puVar9 = puVar9 + -1;
    if (puVar9 < puVar1) {
      puVar9 = puVar1 + (*(uint *)(in_EAX + 4) - 1);
    }
    puVar2 = (undefined4 *)*puVar9;
  } while( true );
}


/* FUN_00697270 @ 00697270  kind=gamemisc  attributed-by=none  size=152 */

int FUN_00697270(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_ESI;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar1 = unaff_ESI[1];
  piVar4 = (int *)unaff_ESI[3];
  iVar2 = iVar1 * 2;
  *unaff_ESI = iVar2 / 3;
  local_c = 0;
  unaff_ESI[1] = iVar2;
  local_4 = piVar4;
  iVar2 = FUN_00693a60(param_1,4,0,iVar2,0,&local_c);
  unaff_ESI[3] = iVar2;
  if (local_c == 0) {
    if (0 < iVar1) {
      do {
        local_8 = iVar1;
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          piVar3 = (int *)FUN_006971d0();
          *piVar3 = iVar1;
        }
        piVar4 = piVar4 + 1;
        iVar1 = local_8 + -1;
      } while (local_8 + -1 != 0);
      local_8 = 0;
      piVar4 = local_4;
    }
    FUN_00691290(param_1,piVar4);
  }
  return local_c;
}


/* FUN_00697350 @ 00697350  kind=gamemisc  attributed-by=none  size=69 */

void FUN_00697350(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 4);
    if (0 < iVar2) {
      do {
        FUN_00691290();
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00691290();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


/* FUN_006973a0 @ 006973a0  kind=gamemisc  attributed-by=none  size=136 */

int FUN_006973a0(undefined4 param_1,undefined4 param_2)

{
  int *in_EAX;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 in_ECX;
  int local_4;
  
  piVar1 = (int *)FUN_006971d0();
  local_4 = 0;
  if (*piVar1 != 0) {
    *(undefined4 *)(*piVar1 + 4) = param_1;
    return 0;
  }
  puVar2 = (undefined4 *)FUN_00692230(param_2,8,&local_4);
  if (local_4 == 0) {
    *piVar1 = (int)puVar2;
    *puVar2 = in_ECX;
    puVar2[1] = param_1;
    if (in_EAX[2] < *in_EAX) {
      in_EAX[2] = in_EAX[2] + 1;
      return 0;
    }
    local_4 = FUN_00697270(param_2);
    if (local_4 == 0) {
      in_EAX[2] = in_EAX[2] + 1;
      return 0;
    }
  }
  return local_4;
}


/* FUN_00697440 @ 00697440  kind=gamemisc  attributed-by=none  size=18 */

void FUN_00697440(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = param_1;
  return;
}


/* FUN_00697490 @ 00697490  kind=gamemisc  attributed-by=none  size=97 */

int FUN_00697490(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  uint uVar4;
  int local_4;
  
  uVar1 = unaff_ESI[1];
  local_4 = 0;
  iVar3 = 0;
  if (uVar1 < param_1) {
    uVar4 = (uVar1 >> 1) + 4 + uVar1;
    if (uVar1 == 0x1fffffff) {
      return 0x40;
    }
    if ((uVar4 < uVar1) || (0x1fffffff < uVar4)) {
      uVar4 = 0x1fffffff;
    }
    uVar2 = FUN_00693a60(unaff_ESI[3],4,uVar1,uVar4,*unaff_ESI,&local_4);
    *unaff_ESI = uVar2;
    iVar3 = local_4;
    if (local_4 == 0) {
      unaff_ESI[1] = uVar4;
    }
  }
  return iVar3;
}


/* FUN_00697500 @ 00697500  kind=gamemisc  attributed-by=none  size=55 */

void FUN_00697500(void)

{
  uint uVar1;
  int *in_EDX;
  int iVar2;
  uint unaff_EDI;
  
  iVar2 = 0;
  if (((in_EDX != (int *)0x0) && (in_EDX[2] != 0)) && (unaff_EDI != 0)) {
    uVar1 = unaff_EDI;
    if ((uint)in_EDX[2] <= unaff_EDI) {
      in_EDX[2] = 0;
      return;
    }
    do {
      *(undefined4 *)(iVar2 + *in_EDX) = *(undefined4 *)(*in_EDX + uVar1 * 4);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 < (uint)in_EDX[2]);
    in_EDX[2] = in_EDX[2] - unaff_EDI;
  }
  return;
}


/* FUN_00697540 @ 00697540  kind=gamemisc  attributed-by=none  size=117 */

undefined * FUN_00697540(int *param_1,undefined1 param_2,int *param_3)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  *param_3 = 0;
  if ((param_1 == (int *)0x0) || (param_1[2] == 0)) {
    return (undefined *)0x0;
  }
  puVar2 = *(undefined **)*param_1;
  iVar4 = 0;
  if (param_1[2] != 0) {
    uVar5 = 0;
    do {
      pcVar3 = *(char **)(*param_1 + uVar5 * 4);
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        puVar2[iVar4] = cVar1;
        iVar4 = iVar4 + 1;
        cVar1 = *pcVar3;
      }
      uVar5 = uVar5 + 1;
      if ((uint)param_1[2] <= uVar5) break;
      puVar2[iVar4] = param_2;
      iVar4 = iVar4 + 1;
    } while (uVar5 < (uint)param_1[2]);
  }
  if (puVar2 != &DAT_007232ac) {
    puVar2[iVar4] = 0;
  }
  *param_3 = iVar4;
  return puVar2;
}


/* FUN_006975c0 @ 006975c0  kind=gamemisc  attributed-by=none  size=517 */

void FUN_006975c0(byte *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  int *in_ECX;
  byte *in_EDX;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int local_30;
  int local_2c;
  byte *local_28;
  byte local_24 [32];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_30;
  local_30 = 0;
  in_ECX[2] = 0;
  if ((param_2 == 0) || (*param_1 == 0)) {
    __security_check_cookie(local_4 ^ (uint)&local_30);
    return;
  }
  if ((in_EDX == (byte *)0x0) || (*in_EDX == 0)) {
    __security_check_cookie(local_4 ^ (uint)&local_30);
    return;
  }
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[4] = 0;
  local_24[5] = 0;
  local_24[6] = 0;
  local_24[7] = 0;
  local_24[8] = 0;
  local_24[9] = 0;
  local_24[10] = 0;
  local_24[0xb] = 0;
  local_24[0xc] = 0;
  local_24[0xd] = 0;
  local_24[0xe] = 0;
  local_24[0xf] = 0;
  local_24[0x10] = 0;
  local_24[0x11] = 0;
  local_24[0x12] = 0;
  local_24[0x13] = 0;
  local_24[0x14] = 0;
  local_24[0x15] = 0;
  local_24[0x16] = 0;
  local_24[0x17] = 0;
  local_24[0x18] = 0;
  local_24[0x19] = 0;
  local_24[0x1a] = 0;
  local_24[0x1b] = 0;
  local_24[0x1c] = 0;
  local_24[0x1d] = 0;
  local_24[0x1e] = 0;
  local_24[0x1f] = 0;
  local_2c = 0;
  do {
    bVar1 = *in_EDX;
    if (bVar1 == 0) break;
    if ((bVar1 == 0x2b) && (in_EDX[1] == 0)) {
      local_2c = 1;
    }
    else {
      local_24[bVar1 >> 3] = local_24[bVar1 >> 3] | '\x01' << (bVar1 & 7);
    }
    in_EDX = in_EDX + 1;
  } while (in_EDX != (byte *)0x0);
  pbVar3 = param_1 + param_2;
  iVar5 = 0;
  local_28 = pbVar3;
  if (param_1 < pbVar3) {
    do {
      if (*param_1 == 0) break;
      bVar1 = *param_1;
      pbVar6 = param_1;
      while ((bVar1 != 0 && (((int)(char)local_24[*pbVar6 >> 3] & 1 << (*pbVar6 & 7)) == 0))) {
        pbVar6 = pbVar6 + 1;
        bVar1 = *pbVar6;
      }
      if ((in_ECX[2] == in_ECX[1]) &&
         (local_30 = FUN_00697490(in_ECX[2] + 1), pbVar3 = local_28, local_30 != 0))
      goto LAB_00697756;
      if (pbVar6 <= param_1) {
        param_1 = &DAT_007232ac;
      }
      *(byte **)(*in_ECX + in_ECX[2] * 4) = param_1;
      in_ECX[2] = in_ECX[2] + 1;
      if (local_2c == 0) {
        if (*pbVar6 != 0) {
          *pbVar6 = 0;
          pbVar7 = pbVar6 + 1;
          goto LAB_00697722;
        }
LAB_00697732:
        iVar5 = 0;
      }
      else {
        pbVar7 = pbVar6;
        if (*pbVar6 == 0) goto LAB_00697732;
        do {
          if (((int)(char)local_24[*pbVar7 >> 3] & 1 << (*pbVar7 & 7)) == 0) break;
          *pbVar7 = 0;
          pbVar7 = pbVar7 + 1;
        } while (*pbVar7 != 0);
LAB_00697722:
        bVar2 = pbVar7 <= pbVar6;
        pbVar6 = pbVar7;
        if ((bVar2) || (*pbVar7 != 0)) goto LAB_00697732;
        iVar5 = 1;
      }
      param_1 = pbVar6;
    } while (pbVar6 < pbVar3);
  }
  if (((uint)(in_ECX[2] + iVar5) < (uint)in_ECX[1]) ||
     (iVar4 = FUN_00697490(in_ECX[2] + iVar5 + 1), iVar4 == 0)) {
    if (iVar5 != 0) {
      *(undefined **)(*in_ECX + in_ECX[2] * 4) = &DAT_007232ac;
      in_ECX[2] = in_ECX[2] + 1;
    }
    *(undefined4 *)(*in_ECX + in_ECX[2] * 4) = 0;
    __security_check_cookie(local_4 ^ (uint)&local_30);
    return;
  }
LAB_00697756:
  __security_check_cookie(local_4 ^ (uint)&local_30);
  return;
}


/* FUN_006977d0 @ 006977d0  kind=gamemisc  attributed-by=none  size=613 */

int FUN_006977d0(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  code *in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  undefined1 *_Dst;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  size_t local_20;
  size_t local_1c;
  code *local_18;
  int local_14;
  size_t local_10;
  int local_c;
  undefined4 local_8;
  char *local_4;
  
  local_8 = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = 0;
  _Dst = (undefined1 *)0x0;
  local_30 = 0;
  if (in_EAX == (code *)0x0) {
    local_30 = 6;
  }
  else {
    local_20 = 0x400;
    _Dst = (undefined1 *)FUN_00693a60(local_8,1,0,0x400,0,&local_30);
    if (local_30 == 0) {
      iVar3 = 0;
      local_24 = 1;
      *_Dst = 0;
      local_28 = 0;
      local_1c = 0;
      local_c = 1;
      local_10 = 0;
      local_18 = in_EAX;
      do {
        local_14 = 0x100;
        local_2c = iVar3;
LAB_00697860:
        sVar5 = local_1c;
        if (local_c != 0) {
          local_10 = FUN_006909c0(param_1,_Dst + local_1c,local_20 - local_1c);
          iVar2 = local_10 + sVar5;
          local_1c = 0;
          local_c = 0;
          local_28 = iVar2;
        }
        if (iVar2 <= iVar3) goto LAB_006978cf;
        local_4 = _Dst + iVar3;
        iVar4 = iVar3;
        if ((char)_Dst[iVar3] != local_14) goto LAB_006978b5;
        iVar3 = iVar3 + 1;
      } while( true );
    }
  }
LAB_00697a1c:
  FUN_00691290(local_8,_Dst);
  return local_30;
LAB_006978b5:
  do {
    if ((_Dst[iVar4] == '\n') || (_Dst[iVar4] == '\r')) {
      if (iVar4 < iVar2) {
        cVar1 = _Dst[iVar4];
        _Dst[iVar4] = 0;
        if (((*local_4 != '#') && (*local_4 != '\x1a')) && (iVar3 < iVar4)) {
          iVar2 = iVar4 - local_2c;
          local_30 = (*local_18)(local_4,iVar2,local_24,&local_18,param_2);
          if (local_30 == -1) {
            local_30 = (*local_18)(local_4,iVar2,local_24,&local_18,param_2);
          }
          if (local_30 != 0) goto LAB_00697a11;
        }
        local_24 = local_24 + 1;
        iVar3 = iVar4 + 1;
        _Dst[iVar4] = cVar1;
        iVar2 = local_28;
        local_2c = iVar3;
        if (cVar1 == '\n') {
          local_14 = 0xd;
        }
        else {
          local_14 = (-(uint)(cVar1 != '\r') & 0xf6) + 10;
        }
        goto LAB_00697860;
      }
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar2);
LAB_006978cf:
  if (local_10 == 0) {
LAB_00697a11:
    *param_3 = local_24;
    goto LAB_00697a1c;
  }
  if (iVar3 == 0) {
    if (0xffff < local_20) {
      local_30 = 6;
      goto LAB_00697a1c;
    }
    sVar5 = local_20 * 2;
    _Dst = (undefined1 *)FUN_00693a60(local_8,1,local_20,sVar5,_Dst,&local_30);
    if (local_30 != 0) goto LAB_00697a1c;
    local_1c = local_20;
    local_c = 1;
    local_20 = sVar5;
  }
  else {
    sVar5 = iVar2 - iVar3;
    local_10 = sVar5;
    memcpy(_Dst,_Dst + iVar3,sVar5);
    local_28 = iVar2 - sVar5;
    local_2c = 0;
    local_c = 1;
    iVar2 = local_28;
    iVar3 = local_2c;
    local_1c = sVar5;
  }
  goto LAB_00697860;
}


/* FUN_00697a40 @ 00697a40  kind=gamemisc  attributed-by=none  size=181 */

int FUN_00697a40(undefined4 *param_1)

{
  byte bVar1;
  int in_EAX;
  byte *in_ECX;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((in_ECX != (byte *)0x0) && (*in_ECX != 0)) {
    if (in_EAX == 8) {
      puVar3 = &DAT_00723330;
    }
    else if (in_EAX == 0x10) {
      puVar3 = &DAT_00723370;
    }
    else {
      in_EAX = 10;
      puVar3 = &DAT_00723350;
    }
    if ((*in_ECX == 0x30) && ((in_ECX[1] == 0x78 || (in_ECX[1] == 0x58)))) {
      in_EAX = 0x10;
      puVar3 = &DAT_00723370;
      in_ECX = in_ECX + 2;
    }
    iVar2 = (int)(char)*in_ECX;
    iVar4 = 0;
    bVar1 = puVar3[iVar2 >> 3] & (byte)(1 << (*in_ECX & 7));
    while (bVar1 != 0) {
      in_ECX = in_ECX + 1;
      iVar4 = iVar4 * in_EAX + (uint)(byte)(&DAT_007232b0)[iVar2];
      iVar2 = (int)(char)*in_ECX;
      bVar1 = puVar3[iVar2 >> 3] & (byte)(1 << (*in_ECX & 7));
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = in_ECX;
    }
    return iVar4;
  }
  return 0;
}


/* FUN_00697b00 @ 00697b00  kind=gamemisc  attributed-by=none  size=216 */

int FUN_00697b00(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *in_EAX;
  int iVar3;
  int in_EDX;
  undefined *puVar4;
  int iVar5;
  
  if ((in_EAX != (byte *)0x0) && (bVar1 = *in_EAX, bVar1 != 0)) {
    if (in_EDX == 8) {
      puVar4 = &DAT_00723330;
    }
    else if (in_EDX == 0x10) {
      puVar4 = &DAT_00723370;
    }
    else {
      in_EDX = 10;
      puVar4 = &DAT_00723350;
    }
    if (bVar1 == 0x2d) {
      in_EAX = in_EAX + 1;
    }
    if ((*in_EAX == 0x30) && ((in_EAX[1] == 0x78 || (in_EAX[1] == 0x58)))) {
      in_EDX = 0x10;
      puVar4 = &DAT_00723370;
      in_EAX = in_EAX + 2;
    }
    iVar3 = (int)(char)*in_EAX;
    iVar5 = 0;
    bVar2 = puVar4[iVar3 >> 3] & (byte)(1 << (*in_EAX & 7));
    while (bVar2 != 0) {
      in_EAX = in_EAX + 1;
      iVar5 = iVar5 * in_EDX + (uint)(byte)(&DAT_007232b0)[iVar3];
      iVar3 = (int)(char)*in_EAX;
      bVar2 = puVar4[iVar3 >> 3] & (byte)(1 << (*in_EAX & 7));
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = in_EAX;
    }
    if (bVar1 == 0x2d) {
      iVar5 = -iVar5;
    }
    return iVar5;
  }
  return 0;
}


/* FUN_00697be0 @ 00697be0  kind=gamemisc  attributed-by=none  size=224 */

int FUN_00697be0(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte *in_EAX;
  int iVar4;
  short sVar5;
  int in_EDX;
  undefined *puVar6;
  
  if ((in_EAX != (byte *)0x0) && (bVar1 = *in_EAX, bVar1 != 0)) {
    if (in_EDX == 8) {
      puVar6 = &DAT_00723330;
    }
    else if (in_EDX == 0x10) {
      puVar6 = &DAT_00723370;
    }
    else {
      in_EDX = 10;
      puVar6 = &DAT_00723350;
    }
    sVar5 = (short)in_EDX;
    if (bVar1 == 0x2d) {
      in_EAX = in_EAX + 1;
    }
    if ((*in_EAX == 0x30) && ((in_EAX[1] == 0x78 || (in_EAX[1] == 0x58)))) {
      sVar5 = 0x10;
      puVar6 = &DAT_00723370;
      in_EAX = in_EAX + 2;
    }
    iVar4 = (int)(char)*in_EAX;
    sVar3 = 0;
    bVar2 = puVar6[iVar4 >> 3] & (byte)(1 << (*in_EAX & 7));
    while (bVar2 != 0) {
      sVar3 = (ushort)(byte)(&DAT_007232b0)[iVar4] + sVar5 * sVar3;
      in_EAX = in_EAX + 1;
      iVar4 = (int)(char)*in_EAX;
      bVar2 = puVar6[iVar4 >> 3] & (byte)(1 << (*in_EAX & 7));
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = in_EAX;
    }
    iVar4 = (int)sVar3;
    if (bVar1 == 0x2d) {
      iVar4 = -iVar4;
    }
    return iVar4;
  }
  return 0;
}


/* FUN_00697ce0 @ 00697ce0  kind=gamemisc  attributed-by=none  size=266 */

/* WARNING: Removing unreachable block (ram,0x00697d71) */

int FUN_00697ce0(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  void *_Dst;
  int iVar5;
  undefined4 *puVar6;
  int unaff_EDI;
  int local_8;
  undefined4 local_4;
  
  uVar2 = *(undefined4 *)(unaff_EDI + 0x4088);
  local_8 = 0;
  local_4 = uVar2;
  iVar3 = FUN_00697430();
  iVar5 = 0;
  if (iVar3 == 0) {
    iVar3 = FUN_00693a60(uVar2,0x10,*(int *)(unaff_EDI + 0x4090),*(int *)(unaff_EDI + 0x4090) + 1,
                         *(undefined4 *)(unaff_EDI + 0x408c),&local_8);
    *(int *)(unaff_EDI + 0x408c) = iVar3;
    iVar5 = local_8;
    if (local_8 == 0) {
      puVar6 = (undefined4 *)(*(int *)(unaff_EDI + 0x4090) * 0x10 + iVar3);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      pcVar4 = param_1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      _Dst = (void *)FUN_00693a60(local_4,1,0,pcVar4 + (1 - (int)(param_1 + 1)),0,&local_8);
      *puVar6 = _Dst;
      iVar5 = local_8;
      if (local_8 == 0) {
        memcpy(_Dst,param_1,(size_t)(pcVar4 + (1 - (int)(param_1 + 1))));
        puVar6[1] = param_2;
        puVar6[2] = 0;
        iVar5 = FUN_006973a0(*(int *)(unaff_EDI + 0x4090) + 0x53,local_4);
        if (iVar5 == 0) {
          *(int *)(unaff_EDI + 0x4090) = *(int *)(unaff_EDI + 0x4090) + 1;
        }
      }
    }
  }
  return iVar5;
}


/* FUN_00697df0 @ 00697df0  kind=gamemisc  attributed-by=none  size=63 */

undefined ** FUN_00697df0(void)

{
  uint uVar1;
  char *in_EAX;
  int iVar2;
  int unaff_ESI;
  
  if ((in_EAX != (char *)0x0) && (*in_EAX != '\0')) {
    iVar2 = FUN_00697430();
    if (iVar2 != 0) {
      uVar1 = *(uint *)(iVar2 + 4);
      if (0x52 < uVar1) {
        return (undefined **)((uVar1 - 0x53) * 0x10 + *(int *)(unaff_ESI + 0x408c));
      }
      return &PTR_s_ADD_STYLE_NAME_00722d78 + uVar1 * 4;
    }
  }
  return (undefined **)0x0;
}


/* FUN_00697ea0 @ 00697ea0  kind=gamemisc  attributed-by=none  size=378 */

void FUN_00697ea0(int param_1)

{
  char cVar1;
  char *_Src;
  char *pcVar2;
  int iVar3;
  undefined4 *in_ECX;
  int local_114 [2];
  int local_10c;
  undefined1 local_104 [256];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)local_114;
  if (((in_ECX == (undefined4 *)0x0) || ((char *)*in_ECX == (char *)0x0)) ||
     (*(char *)*in_ECX == '\0')) {
    __security_check_cookie(local_4 ^ (uint)local_114);
    return;
  }
  FUN_00697440(in_ECX[0x1022]);
  in_ECX[7] = *(undefined4 *)(param_1 + 0xc);
  _Src = (char *)*in_ECX;
  pcVar2 = _Src;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (1 - (int)(_Src + 1));
  if ((char *)0xff < pcVar2) {
    __security_check_cookie(local_4 ^ (uint)local_114);
    return;
  }
  memcpy(local_104,_Src,(size_t)pcVar2);
  iVar3 = FUN_006975c0(local_104,pcVar2);
  if ((iVar3 == 0) && (local_10c == 0xf)) {
    switch(**(undefined1 **)(local_114[0] + 0x2c)) {
    case 0x43:
    case 99:
      in_ECX[7] = 0x20;
      FUN_00697460();
      __security_check_cookie(local_4 ^ (uint)local_114);
      return;
    case 0x4d:
    case 0x6d:
      in_ECX[7] = 0x10;
      FUN_00697460();
      __security_check_cookie(local_4 ^ (uint)local_114);
      return;
    case 0x50:
    case 0x70:
      in_ECX[7] = 8;
    }
  }
  FUN_00697460();
  __security_check_cookie(local_4 ^ (uint)local_114);
  return;
}


/* FUN_00698130 @ 00698130  kind=gamemisc  attributed-by=none  size=961 */

int FUN_00698130(int *param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  int in_EAX;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int local_8;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(in_EAX + 0x4088);
  local_8 = 0;
  iVar5 = FUN_00697430();
  uVar6 = local_4;
  if (iVar5 != 0) {
    iVar13 = *(int *)(iVar5 + 4) * 0x10 + *(int *)(in_EAX + 0x50);
    iVar5 = *(int *)(iVar13 + 4);
    if (iVar5 == 1) {
      FUN_00691290(local_4,*(undefined4 *)(iVar13 + 0xc));
      *(undefined4 *)(iVar13 + 0xc) = 0;
      if (param_2 == (char *)0x0) {
        return local_8;
      }
      if (*param_2 == '\0') {
        return local_8;
      }
      uVar6 = FUN_00691310(uVar6,param_2,&local_8);
      *(undefined4 *)(iVar13 + 0xc) = uVar6;
      return local_8;
    }
    if (iVar5 == 2) {
      uVar6 = FUN_00697b00(0);
      *(undefined4 *)(iVar13 + 0xc) = uVar6;
      return local_8;
    }
    if (iVar5 != 3) {
      return local_8;
    }
    uVar6 = FUN_00697a40(0);
    *(undefined4 *)(iVar13 + 0xc) = uVar6;
    return local_8;
  }
  iVar5 = FUN_00697430();
  if (iVar5 == 0) {
    local_8 = FUN_00697ce0(param_1,1);
    if (local_8 != 0) {
      return local_8;
    }
    iVar5 = FUN_00697430();
  }
  iVar13 = *(int *)(in_EAX + 0x48);
  if (*(int *)(in_EAX + 0x4c) == iVar13) {
    if (iVar13 == 0) {
      uVar6 = 0;
      iVar14 = 1;
      iVar13 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(in_EAX + 0x50);
      iVar14 = iVar13 + 1;
    }
    uVar6 = FUN_00693a60(local_4,0x10,iVar13,iVar14,uVar6,&local_8);
    *(undefined4 *)(in_EAX + 0x50) = uVar6;
    if (local_8 != 0) {
      return local_8;
    }
    puVar7 = (undefined4 *)(*(int *)(in_EAX + 0x48) * 0x10 + *(int *)(in_EAX + 0x50));
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(int *)(in_EAX + 0x48) = *(int *)(in_EAX + 0x48) + 1;
  }
  uVar11 = *(uint *)(iVar5 + 4);
  if (uVar11 < 0x53) {
    ppuVar8 = &PTR_s_ADD_STYLE_NAME_00722d78 + uVar11 * 4;
  }
  else {
    ppuVar8 = (undefined **)((uVar11 - 0x53) * 0x10 + *(int *)(in_EAX + 0x408c));
  }
  puVar7 = (undefined4 *)(*(int *)(in_EAX + 0x4c) * 0x10 + *(int *)(in_EAX + 0x50));
  *puVar7 = *ppuVar8;
  puVar7[1] = ppuVar8[1];
  puVar7[2] = ppuVar8[2];
  puVar2 = ppuVar8[1];
  if (puVar2 == (undefined *)0x1) {
    puVar7[3] = 0;
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      uVar6 = FUN_00691310(local_4,param_2,&local_8);
      puVar7[3] = uVar6;
      if (local_8 != 0) {
        return local_8;
      }
    }
  }
  else if (puVar2 == (undefined *)0x2) {
    uVar6 = FUN_00697b00(0);
    puVar7[3] = uVar6;
  }
  else if (puVar2 == (undefined *)0x3) {
    uVar6 = FUN_00697a40(0);
    puVar7[3] = uVar6;
  }
  if (((((*param_1 != 0x4d4d4f43) || ((char)param_1[1] != 'E')) ||
       (*(char *)((int)param_1 + 5) != 'N')) || (*(char *)((int)param_1 + 6) != 'T')) &&
     (local_8 = FUN_006973a0(*(undefined4 *)(in_EAX + 0x4c),local_4), local_8 != 0)) {
    return local_8;
  }
  *(int *)(in_EAX + 0x4c) = *(int *)(in_EAX + 0x4c) + 1;
  pcVar9 = "DEFAULT_CHAR";
  uVar11 = 0xc;
  while (*(int *)((int)(param_1 + -0x1c8b2c) + (int)pcVar9) == *(int *)pcVar9) {
    uVar11 = uVar11 - 4;
    pcVar9 = (char *)((int)pcVar9 + 4);
    if (uVar11 < 4) {
      *(undefined4 *)(in_EAX + 0x24) = puVar7[3];
      return local_8;
    }
  }
  uVar11 = 0xb;
  piVar3 = (int *)"FONT_ASCENT";
  piVar4 = param_1;
  do {
    piVar12 = piVar4;
    piVar10 = piVar3;
    if (*piVar12 != *piVar10) goto LAB_0069840c;
    uVar11 = uVar11 - 4;
    piVar3 = piVar10 + 1;
    piVar4 = piVar12 + 1;
  } while (3 < uVar11);
  if ((((char)piVar10[1] == (char)piVar12[1]) &&
      (*(char *)((int)piVar10 + 5) == *(char *)((int)piVar12 + 5))) &&
     (*(char *)((int)piVar10 + 6) == *(char *)((int)piVar12 + 6))) {
    *(undefined4 *)(in_EAX + 0x28) = puVar7[3];
    return local_8;
  }
LAB_0069840c:
  pcVar9 = "FONT_DESCENT";
  uVar11 = 0xc;
  while (*(int *)((int)(param_1 + -0x1c8b09) + (int)pcVar9) == *(int *)pcVar9) {
    uVar11 = uVar11 - 4;
    pcVar9 = (char *)((int)pcVar9 + 4);
    if (uVar11 < 4) {
      *(undefined4 *)(in_EAX + 0x2c) = puVar7[3];
      return local_8;
    }
  }
  if (((*param_1 == 0x43415053) && ((char)param_1[1] == 'I')) &&
     ((*(char *)((int)param_1 + 5) == 'N' && (*(char *)((int)param_1 + 6) == 'G')))) {
    if ((char *)puVar7[3] == (char *)0x0) {
      return 3;
    }
    cVar1 = *(char *)puVar7[3];
    if ((cVar1 == 'p') || (cVar1 == 'P')) {
      *(undefined4 *)(in_EAX + 0x1c) = 8;
      return local_8;
    }
    if ((cVar1 == 'm') || (cVar1 == 'M')) {
      *(undefined4 *)(in_EAX + 0x1c) = 0x10;
      return local_8;
    }
    if ((cVar1 == 'c') || (cVar1 == 'C')) {
      *(undefined4 *)(in_EAX + 0x1c) = 0x20;
      return local_8;
    }
  }
  return local_8;
}


/* FUN_00698e00 @ 00698e00  kind=gamemisc  attributed-by=none  size=483 */

void FUN_00698e00(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *unaff_ESI;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = 0;
  if (unaff_ESI != (undefined4 *)0x0) {
    uVar1 = unaff_ESI[0x1022];
    FUN_00691290(uVar1,*unaff_ESI);
    *unaff_ESI = 0;
    if (unaff_ESI[0x20] != 0) {
      FUN_00697350(unaff_ESI[0x20]);
      FUN_00691290(uVar1,unaff_ESI[0x20]);
      unaff_ESI[0x20] = 0;
    }
    FUN_00691290(uVar1,unaff_ESI[0x15]);
    unaff_ESI[0x15] = 0;
    if (unaff_ESI[0x12] != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(unaff_ESI[0x14] + 4 + iVar3) == 1) {
          FUN_00691290(uVar1,*(undefined4 *)(unaff_ESI[0x14] + 0xc + iVar3));
          *(undefined4 *)(iVar3 + 0xc + unaff_ESI[0x14]) = 0;
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x10;
      } while (uVar2 < (uint)unaff_ESI[0x12]);
    }
    uVar2 = 0;
    FUN_00691290(uVar1,unaff_ESI[0x14]);
    puVar4 = (undefined4 *)unaff_ESI[0xe];
    unaff_ESI[0x14] = 0;
    if (unaff_ESI[0xd] != 0) {
      do {
        FUN_00691290(uVar1,*puVar4);
        *puVar4 = 0;
        FUN_00691290(uVar1,puVar4[6]);
        puVar4[6] = 0;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 9;
      } while (uVar2 < (uint)unaff_ESI[0xd]);
    }
    puVar4 = (undefined4 *)unaff_ESI[0x11];
    uVar2 = 0;
    if (unaff_ESI[0x10] != 0) {
      do {
        FUN_00691290(uVar1,*puVar4);
        *puVar4 = 0;
        FUN_00691290(uVar1,puVar4[6]);
        puVar4[6] = 0;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 9;
      } while (uVar2 < (uint)unaff_ESI[0x10]);
    }
    FUN_00691290(uVar1,unaff_ESI[0xe]);
    uVar2 = 0;
    unaff_ESI[0xe] = 0;
    FUN_00691290(uVar1,unaff_ESI[0x11]);
    puVar4 = (undefined4 *)unaff_ESI[0x1a];
    unaff_ESI[0x11] = 0;
    if (unaff_ESI[0x1c] != 0) {
      do {
        FUN_00691290(uVar1,*puVar4);
        *puVar4 = 0;
        FUN_00691290(uVar1,puVar4[6]);
        puVar4[6] = 0;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 9;
      } while (uVar2 < (uint)unaff_ESI[0x1c]);
    }
    FUN_00691290(uVar1,unaff_ESI[0x1a]);
    uVar2 = 0;
    unaff_ESI[0x1a] = 0;
    FUN_00697350(unaff_ESI + 0x1025);
    puVar4 = (undefined4 *)unaff_ESI[0x1023];
    if (unaff_ESI[0x1024] != 0) {
      do {
        FUN_00691290(uVar1,*puVar4);
        *puVar4 = 0;
        if (puVar4[1] == 1) {
          FUN_00691290(uVar1,puVar4[3]);
          puVar4[3] = 0;
        }
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 4;
      } while (uVar2 < (uint)unaff_ESI[0x1024]);
    }
    FUN_00691290(uVar1,unaff_ESI[0x1023]);
    unaff_ESI[0x1023] = 0;
  }
  return;
}


/* FUN_00698ff0 @ 00698ff0  kind=gamemisc  attributed-by=none  size=52 */

int FUN_00698ff0(void)

{
  char *in_EAX;
  int iVar1;
  int unaff_ESI;
  
  if ((((unaff_ESI != 0) && (*(int *)(unaff_ESI + 0x48) != 0)) && (in_EAX != (char *)0x0)) &&
     (*in_EAX != '\0')) {
    iVar1 = FUN_00697430();
    if (iVar1 != 0) {
      return *(int *)(iVar1 + 4) * 0x10 + *(int *)(unaff_ESI + 0x50);
    }
  }
  return 0;
}


/* FUN_00699130 @ 00699130  kind=gamemisc  attributed-by=none  size=486 */

void FUN_00699130(int param_1)

{
  char *pcVar1;
  char cVar2;
  uint _Size;
  int iVar3;
  char *pcVar4;
  undefined1 *_Dst;
  uint uVar5;
  uint uVar6;
  int local_2c;
  char *local_28 [4];
  int local_18;
  uint local_14 [4];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_2c;
  local_18 = param_1;
  local_2c = 0;
  local_28[0] = (char *)0x0;
  local_28[1] = (undefined1 *)0x0;
  local_28[2] = (char *)0x0;
  local_28[3] = (char *)0x0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = FUN_00698ff0();
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) && (*(char **)(iVar3 + 0xc) != (char *)0x0)) &&
     (((cVar2 = **(char **)(iVar3 + 0xc), cVar2 == 'O' || (cVar2 == 'o')) ||
      ((cVar2 == 'I' || (cVar2 == 'i')))))) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    if ((**(char **)(iVar3 + 0xc) == 'O') ||
       (local_28[2] = "Italic", **(char **)(iVar3 + 0xc) == 'o')) {
      local_28[2] = "Oblique";
    }
  }
  iVar3 = FUN_00698ff0();
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) && (*(char **)(iVar3 + 0xc) != (char *)0x0)) &&
     ((cVar2 = **(char **)(iVar3 + 0xc), cVar2 == 'B' || (cVar2 == 'b')))) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
    local_28[1] = "Bold";
  }
  iVar3 = FUN_00698ff0();
  if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) &&
     ((pcVar4 = *(char **)(iVar3 + 0xc), pcVar4 != (char *)0x0 &&
      (((cVar2 = *pcVar4, cVar2 != '\0' && (cVar2 != 'N')) && (cVar2 != 'n')))))) {
    local_28[3] = pcVar4;
  }
  iVar3 = FUN_00698ff0();
  if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) &&
     (((pcVar4 = *(char **)(iVar3 + 0xc), pcVar4 != (char *)0x0 &&
       ((cVar2 = *pcVar4, cVar2 != '\0' && (cVar2 != 'N')))) && (cVar2 != 'n')))) {
    local_28[0] = pcVar4;
  }
  iVar3 = 0;
  uVar6 = 0;
  do {
    pcVar4 = *(char **)((int)local_28 + uVar6);
    *(undefined4 *)((int)local_14 + uVar6) = 0;
    if (pcVar4 != (char *)0x0) {
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      *(int *)((int)local_14 + uVar6) = (int)pcVar4 - (int)pcVar1;
      iVar3 = iVar3 + 1 + ((int)pcVar4 - (int)pcVar1);
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x10);
  if (iVar3 == 0) {
    local_28[0] = "Regular";
    local_14[0] = 7;
    iVar3 = 8;
  }
  _Dst = (undefined1 *)FUN_00692230(*(undefined4 *)(param_1 + 100),iVar3,&local_2c);
  *(undefined1 **)(param_1 + 0x18) = _Dst;
  if (local_2c == 0) {
    uVar6 = 0;
    do {
      pcVar4 = local_28[uVar6];
      _Size = local_14[uVar6];
      if (pcVar4 != (char *)0x0) {
        if (_Dst != *(undefined1 **)(local_18 + 0x18)) {
          *_Dst = 0x20;
          _Dst = _Dst + 1;
        }
        memcpy(_Dst,pcVar4,_Size);
        if (((uVar6 == 0) || (uVar6 == 3)) && (uVar5 = 0, _Size != 0)) {
          do {
            if (_Dst[uVar5] == ' ') {
              _Dst[uVar5] = 0x2d;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < _Size);
        }
        _Dst = _Dst + _Size;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    *_Dst = 0;
  }
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}


/* FUN_00699320 @ 00699320  kind=gamemisc  attributed-by=none  size=155 */

void FUN_00699320(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
    FUN_00698e00();
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  return;
}


/* FUN_00699f90 @ 00699f90  kind=gamemisc  attributed-by=none  size=588 */

int FUN_00699f90(undefined4 param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_EAX;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 local_4 [4];
  
  uVar3 = param_2;
  param_2 = 0;
  puVar4 = (uint *)FUN_00692230(uVar3,0x203c,&param_2);
  if (param_2 != 0) goto LAB_0069a1ba;
  if (in_EAX == (undefined4 *)0x0) {
    in_EAX = &DAT_00722d68;
  }
  puVar4[9] = (uint)in_EAX;
  *(undefined2 *)(puVar4 + 3) = 0x7fff;
  puVar4[0x80e] = uVar3;
  FUN_00697440(uVar3);
  param_2 = FUN_006977d0(param_1,puVar4,local_4);
  if (param_2 == 0) {
    uVar1 = puVar4[8];
    if (uVar1 != 0) {
      if (*(int *)(uVar1 + 0x1c) != 8) {
        *(undefined2 *)(uVar1 + 0x20) = *(undefined2 *)(uVar1 + 4);
      }
      uVar1 = puVar4[8];
      if (puVar4[1] != *(int *)(uVar1 + 0x40) + *(int *)(uVar1 + 0x34)) {
        *(undefined2 *)(uVar1 + 0x4084) = 1;
      }
      if ((*(int *)puVar4[9] != 0) &&
         ((uVar1 = puVar4[8], *(int *)(uVar1 + 0x34) != 0 || (*(int *)(uVar1 + 0x40) != 0)))) {
        if ((int)(short)puVar4[4] - (int)(short)puVar4[3] != (uint)*(ushort *)(uVar1 + 4)) {
          *(short *)(uVar1 + 4) = (short)puVar4[4] - (short)puVar4[3];
          *(undefined2 *)(puVar4[8] + 0x4084) = 1;
        }
        if (*(short *)(puVar4[8] + 8) != (short)puVar4[3]) {
          *(short *)(puVar4[8] + 8) = (short)puVar4[3];
          *(undefined2 *)(puVar4[8] + 0x4084) = 1;
        }
        if (*(short *)(puVar4[8] + 0xc) != *(short *)((int)puVar4 + 0x12)) {
          *(short *)(puVar4[8] + 0xc) = *(short *)((int)puVar4 + 0x12);
          *(undefined2 *)(puVar4[8] + 0x4084) = 1;
        }
        if (*(short *)(puVar4[8] + 0xe) != (short)puVar4[5]) {
          *(short *)(puVar4[8] + 0xe) = (short)puVar4[5];
          *(short *)(puVar4[8] + 10) = -(short)puVar4[5];
          *(undefined2 *)(puVar4[8] + 0x4084) = 1;
        }
        if ((int)(short)puVar4[5] + (int)*(short *)((int)puVar4 + 0x12) !=
            (uint)*(ushort *)(puVar4[8] + 6)) {
          *(short *)(puVar4[8] + 6) = (short)puVar4[5] + *(short *)((int)puVar4 + 0x12);
        }
      }
    }
    if ((*puVar4 & 1) != 0) {
      param_2 = ((*puVar4 & 0x20) != 0) + 0xb9;
      goto LAB_0069a1ba;
    }
    uVar1 = puVar4[8];
    if (uVar1 == 0) {
      param_2 = 3;
    }
    else {
      iVar2 = *(int *)(uVar1 + 0x58);
      if (iVar2 != 0) {
        uVar5 = FUN_00693a60(*(undefined4 *)(uVar1 + 0x4088),1,iVar2,iVar2 + 1,
                             *(undefined4 *)(uVar1 + 0x54),&param_2);
        *(undefined4 *)(puVar4[8] + 0x54) = uVar5;
        if (param_2 != 0) goto LAB_0069a175;
        *(undefined1 *)(*(int *)(puVar4[8] + 0x58) + *(int *)(puVar4[8] + 0x54)) = 0;
      }
    }
    *param_3 = puVar4[8];
  }
  else {
LAB_0069a175:
    FUN_00698e00();
    FUN_00691290(uVar3,puVar4[8]);
    puVar4[8] = 0;
  }
LAB_0069a1ba:
  if (puVar4 != (uint *)0x0) {
    FUN_00697460();
    FUN_00691290(uVar3,puVar4);
  }
  return param_2;
}


/* FUN_0069a7f0 @ 0069a7f0  kind=gamemisc  attributed-by=none  size=109 */

void FUN_0069a7f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_EDX;
  int iVar4;
  
  iVar4 = *in_EDX;
  if (in_EDX[6] < *in_EDX) {
    iVar4 = in_EDX[6];
  }
  piVar1 = (int *)(in_EDX[0x14e] + in_EDX[1] * 4);
  piVar3 = (int *)*piVar1;
  while ((piVar3 != (int *)0x0 && (*piVar3 <= iVar4))) {
    if (*piVar3 == iVar4) {
      return;
    }
    piVar1 = piVar3 + 3;
    piVar3 = (int *)*piVar1;
  }
  iVar2 = in_EDX[0xd];
  if (iVar2 < in_EDX[0xc]) {
    piVar3 = (int *)(iVar2 * 0x10 + in_EDX[0xb]);
    in_EDX[0xd] = iVar2 + 1;
    *piVar3 = iVar4;
    piVar3[2] = 0;
    piVar3[1] = 0;
    piVar3[3] = *piVar1;
    *piVar1 = (int)piVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  longjmp(in_EDX + 0x13c,1);
}


/* FUN_0069a890 @ 0069a890  kind=gamemisc  attributed-by=none  size=99 */

void FUN_0069a890(void)

{
  int in_EAX;
  int in_ECX;
  int *in_EDX;
  uint uVar1;
  int iVar2;
  
  uVar1 = in_EAX - in_EDX[4];
  if (in_EDX[3] < in_ECX) {
    in_ECX = in_EDX[3];
  }
  iVar2 = in_ECX - in_EDX[2];
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  if ((iVar2 != *in_EDX) || (uVar1 != in_EDX[1])) {
    if (in_EDX[10] == 0) {
      FUN_0069a860();
    }
    in_EDX[8] = 0;
    in_EDX[9] = 0;
  }
  *in_EDX = iVar2;
  in_EDX[1] = uVar1;
  if ((uVar1 < (uint)in_EDX[7]) && (iVar2 < in_EDX[6])) {
    in_EDX[10] = 0;
    return;
  }
  in_EDX[10] = 1;
  return;
}


/* FUN_0069a950 @ 0069a950  kind=gamemisc  attributed-by=none  size=355 */

void FUN_0069a950(undefined4 param_1,int param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_ESI;
  int iVar8;
  int local_18;
  int local_14;
  int local_10;
  
  iVar8 = in_EDX >> 8;
  iVar7 = in_EAX - in_EDX;
  iVar4 = in_EDX + iVar8 * -0x100;
  iVar6 = in_EAX >> 8;
  iVar1 = in_EAX + iVar6 * -0x100;
  if (param_2 == param_3) {
    FUN_0069a890();
    return;
  }
  iVar5 = param_3 - param_2;
  if (iVar8 != iVar6) {
    local_10 = 0x100;
    local_14 = 1;
    iVar3 = 0x100 - iVar4;
    if (iVar7 < 0) {
      local_10 = 0;
      local_14 = -1;
      iVar7 = -iVar7;
      iVar3 = iVar4;
    }
    iVar2 = (iVar3 * iVar5) / iVar7;
    local_18 = (iVar3 * iVar5) % iVar7;
    if (local_18 < 0) {
      iVar2 = iVar2 + -1;
      local_18 = local_18 + iVar7;
    }
    iVar8 = iVar8 + local_14;
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + iVar2;
    *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + (local_10 + iVar4) * iVar2;
    FUN_0069a890();
    param_2 = param_2 + iVar2;
    if (iVar8 != iVar6) {
      iVar5 = ((iVar2 - param_2) + param_3) * 0x100;
      iVar4 = iVar5 / iVar7;
      iVar5 = iVar5 % iVar7;
      if (iVar5 < 0) {
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + iVar7;
      }
      local_18 = local_18 - iVar7;
      do {
        local_18 = local_18 + iVar5;
        iVar3 = iVar4;
        if (-1 < local_18) {
          local_18 = local_18 - iVar7;
          iVar3 = iVar4 + 1;
        }
        iVar8 = iVar8 + local_14;
        *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + iVar3;
        param_2 = param_2 + iVar3;
        *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + iVar3 * 0x100;
        FUN_0069a890();
      } while (iVar8 != iVar6);
    }
    *(int *)(unaff_ESI + 0x20) =
         *(int *)(unaff_ESI + 0x20) + ((iVar1 - local_10) + 0x100) * (param_3 - param_2);
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + (param_3 - param_2);
    return;
  }
  *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + (iVar1 + iVar4) * iVar5;
  *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + iVar5;
  return;
}


/* FUN_0069aac0 @ 0069aac0  kind=gamemisc  attributed-by=none  size=639 */

void FUN_0069aac0(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = param_2 >> 8;
  iVar2 = *(int *)(in_EAX + 0x44) - *(int *)(in_EAX + 0x48);
  iVar4 = param_2 + iVar3 * -0x100;
  iVar1 = *(int *)(in_EAX + 0x40);
  iVar5 = param_1 - iVar1;
  iVar7 = *(int *)(in_EAX + 0x48) >> 8;
  iVar6 = param_2 - *(int *)(in_EAX + 0x44);
  local_1c = iVar3;
  local_18 = iVar7;
  if (iVar3 < iVar7) {
    local_1c = iVar7;
    local_18 = iVar3;
  }
  if ((local_18 < *(int *)(in_EAX + 0x14)) && (*(int *)(in_EAX + 0x10) <= local_1c)) {
    if (iVar7 != iVar3) {
      local_1c = 1;
      local_24 = 0x100;
      if (iVar5 == 0) {
        iVar1 = (iVar1 + (iVar1 >> 8) * -0x100) * 2;
        if (iVar6 < 0) {
          local_24 = 0;
          local_1c = -1;
        }
        *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + (local_24 - iVar2);
        *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + (local_24 - iVar2) * iVar1;
        FUN_0069a890();
        while (iVar7 = iVar7 + local_1c, iVar7 != iVar3) {
          *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + (local_24 * 2 + -0x100) * iVar1;
          *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + local_24 * 2 + -0x100;
          FUN_0069a890();
        }
        iVar4 = local_24 + -0x100 + iVar4;
        *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + iVar4 * iVar1;
        *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + iVar4;
        goto LAB_0069ad2b;
      }
      local_1c = 1;
      iVar1 = 0x100 - iVar2;
      if (iVar6 < 0) {
        local_24 = 0;
        local_1c = -1;
        iVar6 = -iVar6;
        iVar1 = iVar2;
      }
      local_20 = (iVar1 * iVar5) % iVar6;
      if (local_20 < 0) {
        local_20 = local_20 + iVar6;
      }
      FUN_0069a950(iVar7,iVar2,local_24);
      iVar7 = iVar7 + local_1c;
      FUN_0069a890();
      if (iVar7 != iVar3) {
        local_14 = (iVar5 * 0x100) % iVar6;
        if (local_14 < 0) {
          local_14 = local_14 + iVar6;
        }
        local_20 = local_20 - iVar6;
        do {
          local_20 = local_20 + local_14;
          if (-1 < local_20) {
            local_20 = local_20 - iVar6;
          }
          FUN_0069a950(iVar7,0x100 - local_24,local_24);
          iVar7 = iVar7 + local_1c;
          FUN_0069a890();
        } while (iVar7 != iVar3);
      }
      iVar2 = 0x100 - local_24;
    }
    FUN_0069a950(iVar7,iVar2,iVar4);
  }
LAB_0069ad2b:
  *(int *)(in_EAX + 0x40) = param_1;
  *(int *)(in_EAX + 0x44) = param_2;
  *(int *)(in_EAX + 0x48) = iVar3 * 0x100;
  return;
}


/* FUN_0069c020 @ 0069c020  kind=gamemisc  attributed-by=none  size=42 */

int * FUN_0069c020(void)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  int in_EDX;
  
  piVar1 = *(int **)(in_ECX + 0x9c);
  piVar2 = piVar1 + (uint)*(ushort *)(in_ECX + 0x98) * 4;
  while( true ) {
    if (piVar2 <= piVar1) {
      return (int *)0x0;
    }
    if ((*piVar1 == in_EDX) && (piVar1[3] != 0)) break;
    piVar1 = piVar1 + 4;
  }
  return piVar1;
}


/* FUN_0069c050 @ 0069c050  kind=gamemisc  attributed-by=none  size=54 */

undefined4
FUN_0069c050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0069c020();
  if (iVar1 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(iVar1 + 0xc);
    }
    uVar2 = FUN_006908c0(param_3,*(undefined4 *)(iVar1 + 8));
    return uVar2;
  }
  return 0x8e;
}


/* FUN_0069c090 @ 0069c090  kind=gamemisc  attributed-by=none  size=407 */

void FUN_0069c090(void)

{
  int iVar1;
  int unaff_EBX;
  ushort uVar2;
  int unaff_ESI;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_28;
  uVar2 = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  local_28 = FUN_006908c0();
  if (local_28 == 0) {
    if (*(short *)(unaff_EBX + 4) != 0) {
      local_28 = 0;
      do {
        local_28 = FUN_00692010();
        if (local_28 != 0) {
          *(ushort *)(unaff_EBX + 4) = uVar2 - 1;
          break;
        }
        if (local_8 + local_c <= *(uint *)(unaff_ESI + 4)) {
          local_24 = local_24 + 1;
          if ((local_14 == 0x68656164) || (local_14 == 0x62686564)) {
            local_20 = 1;
            if (local_8 < 0x36) goto LAB_0069c1e9;
            local_28 = FUN_006908c0();
            if ((local_28 != 0) || (iVar1 = FUN_00690cd0(), local_28 != 0)) goto LAB_0069c216;
            if (iVar1 != 0x5f0f3cf5) goto LAB_0069c1e9;
            local_28 = FUN_006908c0();
            if (local_28 != 0) goto LAB_0069c216;
          }
          else if (local_14 == 0x53494e47) {
            local_18 = 1;
          }
          else if (local_14 == 0x4d455441) {
            local_1c = 1;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(unaff_EBX + 4));
    }
    *(short *)(unaff_EBX + 4) = (short)local_24;
    if ((short)local_24 == 0) {
      __security_check_cookie(local_4 ^ (uint)&local_28);
      return;
    }
    if ((local_20 == 0) && ((local_18 == 0 || (local_1c == 0)))) {
LAB_0069c1e9:
      __security_check_cookie(local_4 ^ (uint)&local_28);
      return;
    }
  }
LAB_0069c216:
  __security_check_cookie(local_4 ^ (uint)&local_28);
  return;
}


/* FUN_0069d190 @ 0069d190  kind=gamemisc  attributed-by=none  size=424 */

undefined4 FUN_0069d190(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  
  uVar8 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  puVar2 = (undefined1 *)(uVar8 + param_1);
  if ((*(undefined1 **)(param_2 + 4) < puVar2) || (uVar8 < 0x206)) {
    FUN_0068f190(param_2,8);
  }
  puVar10 = (undefined1 *)(param_1 + 6);
  uVar8 = 0;
  param_1 = 0x100;
  do {
    puVar11 = puVar10;
    uVar3 = *puVar11;
    bVar4 = puVar11[1];
    if ((1 < *(int *)(param_2 + 8)) && ((bVar4 & 7) != 0)) {
      FUN_0068f190(param_2,8);
    }
    uVar9 = (uint)(ushort)(CONCAT11(uVar3,bVar4) >> 3);
    if (uVar8 < uVar9) {
      uVar8 = uVar9;
    }
    param_1 = param_1 + -1;
    puVar10 = puVar11 + 2;
  } while (param_1 != 0);
  if (*(undefined1 **)(param_2 + 4) < puVar11 + uVar8 * 8 + 10) {
    FUN_0068f190(param_2,8);
  }
  param_1 = uVar8 + 1;
  do {
    uVar3 = puVar10[4];
    uVar9 = (uint)CONCAT11(puVar10[2],puVar10[3]);
    uVar5 = puVar10[5];
    puVar12 = puVar10 + 8;
    uVar6 = puVar10[6];
    uVar7 = puVar10[7];
    if (uVar9 != 0) {
      if ((1 < *(int *)(param_2 + 8)) &&
         ((0xff < CONCAT11(*puVar10,puVar10[1]) || (0x100 < CONCAT11(*puVar10,puVar10[1]) + uVar9)))
         ) {
        FUN_0068f190(param_2,8);
      }
      if (CONCAT11(uVar6,uVar7) != 0) {
        if ((puVar12 + (CONCAT11(uVar6,uVar7) - 2) < puVar11 + uVar8 * 8 + 10) ||
           (puVar2 < puVar12 + (CONCAT11(uVar6,uVar7) - 2) + uVar9 * 2)) {
          FUN_0068f190(param_2,9);
        }
        if (0 < *(int *)(param_2 + 8)) {
          puVar10 = puVar12 + uVar9 * 2;
          while (puVar12 < puVar10) {
            uVar6 = *puVar12;
            puVar13 = puVar12 + 2;
            puVar1 = puVar12 + 1;
            puVar12 = puVar13;
            if ((CONCAT11(uVar6,*puVar1) != 0) &&
               (*(uint *)(param_2 + 0x50) <=
                (uint)(ushort)(CONCAT11(uVar6,*puVar1) + CONCAT11(uVar3,uVar5)))) {
              FUN_0068f190(param_2,0x10);
            }
          }
        }
      }
    }
    param_1 = param_1 + -1;
    puVar10 = puVar12;
  } while (param_1 != 0);
  return 0;
}


/* FUN_0069d340 @ 0069d340  kind=gamemisc  attributed-by=none  size=95 */

int FUN_0069d340(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  
  iVar3 = 0;
  if (in_EAX < 0x10000) {
    uVar5 = in_EAX >> 8;
    iVar1 = unaff_EBX + 0x206;
    if (uVar5 == 0) {
      puVar2 = (undefined1 *)(unaff_EBX + 6 + (in_EAX & 0xff) * 2);
      if (CONCAT11(*puVar2,puVar2[1]) == 0) {
        return iVar1;
      }
    }
    else {
      iVar4 = (CONCAT11(*(undefined1 *)(unaff_EBX + 6 + uVar5 * 2),
                        *(undefined1 *)(unaff_EBX + 7 + uVar5 * 2)) & 0xfffffff8) + iVar1;
      if (iVar4 != iVar1) {
        iVar3 = iVar4;
      }
    }
  }
  return iVar3;
}


/* FUN_0069d600 @ 0069d600  kind=gamemisc  attributed-by=none  size=330 */

undefined4 FUN_0069d600(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint in_EAX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int *unaff_EDI;
  undefined1 *local_14;
  
  iVar1 = unaff_EDI[4];
  uVar2 = unaff_EDI[8];
  if (in_EAX < uVar2) {
    iVar3 = uVar2 * 2;
    local_14 = (undefined1 *)(iVar1 + 0xe + in_EAX * 2);
    pcVar6 = (char *)(iVar1 + 0x10 + (iVar3 + in_EAX) * 2);
    puVar5 = (undefined1 *)(iVar3 + 0x10 + in_EAX * 2 + iVar1);
    iVar7 = uVar2 * -2 + 1;
    puVar4 = (undefined1 *)(iVar1 + uVar2 * 6 + 0x10 + in_EAX * 2);
    do {
      unaff_EDI[0xb] = (uint)CONCAT11(*local_14,puVar5[1 - (iVar3 + 2)]);
      unaff_EDI[10] = (uint)CONCAT11(*puVar5,pcVar6[iVar7]);
      unaff_EDI[0xc] = (uint)(byte)puVar4[iVar7] | (int)(short)((short)*pcVar6 << 8);
      uVar8 = (uint)CONCAT11(*puVar4,puVar4[1]);
      if ((((uVar2 - 1 <= in_EAX) && (unaff_EDI[10] == 0xffff)) && (unaff_EDI[0xb] == 0xffff)) &&
         ((uVar8 != 0 &&
          ((undefined1 *)(*(int *)(*unaff_EDI + 0x1f8) + *(int *)(*unaff_EDI + 500)) <
           puVar4 + uVar8 + 2)))) {
        unaff_EDI[0xc] = 1;
LAB_0069d71a:
        unaff_EDI[9] = in_EAX;
        unaff_EDI[0xd] = 0;
        return 0;
      }
      if (uVar8 != 0xffff) {
        if (uVar8 != 0) {
          unaff_EDI[9] = in_EAX;
          unaff_EDI[0xd] = (int)(puVar4 + uVar8);
          return 0;
        }
        goto LAB_0069d71a;
      }
      local_14 = local_14 + 2;
      in_EAX = in_EAX + 1;
      pcVar6 = pcVar6 + 2;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
    } while (in_EAX < (uint)unaff_EDI[8]);
  }
  return 0xffffffff;
}


/* FUN_0069d750 @ 0069d750  kind=gamemisc  attributed-by=none  size=157 */

void FUN_0069d750(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(uint *)(in_EAX + 0x18) < 0xffff) {
    uVar6 = *(uint *)(in_EAX + 0x18) + 1;
    do {
      uVar4 = *(uint *)(in_EAX + 0x28);
      if (uVar6 < uVar4) {
        uVar6 = uVar4;
      }
      uVar3 = *(uint *)(in_EAX + 0x2c);
      if (uVar6 <= uVar3) {
        if (*(int *)(in_EAX + 0x34) == 0) {
          do {
            uVar4 = *(int *)(in_EAX + 0x30) + uVar6 & 0xffff;
            if (uVar4 != 0) goto LAB_0069d7e5;
            uVar6 = uVar6 + 1;
          } while (uVar6 <= uVar3);
        }
        else {
          iVar5 = *(int *)(in_EAX + 0x34) + -1 + (uVar6 - uVar4) * 2;
          do {
            puVar1 = (undefined1 *)(iVar5 + 1);
            puVar2 = (undefined1 *)(iVar5 + 2);
            iVar5 = iVar5 + 2;
            uVar4 = (uint)CONCAT11(*puVar1,*puVar2);
            if ((uVar4 != 0) && (uVar4 = uVar4 + *(int *)(in_EAX + 0x30) & 0xffff, uVar4 != 0)) {
LAB_0069d7e5:
              *(uint *)(in_EAX + 0x18) = uVar6;
              *(uint *)(in_EAX + 0x1c) = uVar4;
              return;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 <= uVar3);
        }
      }
      iVar5 = FUN_0069d600();
    } while (-1 < iVar5);
  }
  *(undefined4 *)(in_EAX + 0x18) = 0xffffffff;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  return;
}


/* FUN_0069f380 @ 0069f380  kind=gamemisc  attributed-by=none  size=191 */

void FUN_0069f380(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  uint uVar4;
  uint local_4;
  
  if (*(int *)(unaff_EBX + 0x1c) != -1) {
    uVar4 = *(uint *)(unaff_EBX + 0x24);
    local_4 = *(int *)(unaff_EBX + 0x1c) + 1;
    if (uVar4 < *(uint *)(unaff_EBX + 0x28)) {
      puVar1 = (undefined1 *)(*(int *)(unaff_EBX + 0x10) + 0x15 + uVar4 * 0xc);
      do {
        uVar2 = CONCAT31(CONCAT21(CONCAT11(puVar1[-5],puVar1[-4]),puVar1[-3]),puVar1[-2]);
        iVar3 = CONCAT31(CONCAT21(CONCAT11(puVar1[3],puVar1[4]),puVar1[5]),puVar1[6]);
        if (local_4 < uVar2) {
          local_4 = uVar2;
        }
        if ((local_4 <= CONCAT31(CONCAT21(CONCAT11(puVar1[-1],*puVar1),puVar1[1]),puVar1[2])) &&
           (iVar3 != 0)) {
          *(uint *)(unaff_EBX + 0x24) = uVar4;
          *(uint *)(unaff_EBX + 0x1c) = local_4;
          *(int *)(unaff_EBX + 0x20) = iVar3;
          return;
        }
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 0xc;
      } while (uVar4 < *(uint *)(unaff_EBX + 0x28));
    }
  }
  *(undefined1 *)(unaff_EBX + 0x18) = 0;
  return;
}


/* FUN_0069fa90 @ 0069fa90  kind=gamemisc  attributed-by=none  size=108 */

undefined4 FUN_0069fa90(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 *in_EDX;
  uint unaff_EBX;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*in_EDX,in_EDX[1]),in_EDX[2]),in_EDX[3]);
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 + uVar4 >> 1;
      uVar1 = (uint)CONCAT21(CONCAT11(in_EDX[uVar2 * 4 + 4],in_EDX[uVar2 * 4 + 5]),
                             in_EDX[uVar2 * 4 + 6]);
      if (uVar1 <= unaff_EBX) {
        if (unaff_EBX <= (byte)in_EDX[uVar2 * 4 + 7] + uVar1) {
          return 1;
        }
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (uVar4 < uVar2);
  }
  return 0;
}


/* FUN_0069fb00 @ 0069fb00  kind=gamemisc  attributed-by=none  size=127 */

undefined2 FUN_0069fb00(uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,in_EAX[1]),in_EAX[2]),in_EAX[3]);
  if (uVar5 != 0) {
    do {
      uVar4 = uVar5 + uVar6 >> 1;
      iVar2 = uVar4 * 4 + 4;
      puVar1 = in_EAX + uVar4 + 3 + iVar2;
      uVar3 = (uint)CONCAT21(CONCAT11(puVar1[-3],in_EAX[uVar4 + 1 + iVar2]),puVar1[-1]);
      if (uVar3 <= param_1) {
        if (param_1 <= uVar3) {
          return CONCAT11(*puVar1,puVar1[1]);
        }
        uVar6 = uVar4 + 1;
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar6 < uVar4);
  }
  return 0;
}


/* FUN_0069ff10 @ 0069ff10  kind=gamemisc  attributed-by=none  size=55 */

int FUN_0069ff10(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 *in_EDX;
  byte *pbVar4;
  
  iVar2 = 0;
  pbVar4 = in_EDX + 7;
  for (iVar3 = CONCAT31(CONCAT21(CONCAT11(*in_EDX,in_EDX[1]),in_EDX[2]),in_EDX[3]); iVar3 != 0;
      iVar3 = iVar3 + -1) {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 4;
    iVar2 = iVar2 + 1 + (uint)bVar1;
  }
  return iVar2;
}


/* FUN_006a03d0 @ 006a03d0  kind=gamemisc  attributed-by=none  size=584 */

void FUN_006a03d0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  int local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined1 *local_88;
  uint local_84;
  int local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined *local_74;
  int local_70;
  undefined1 *local_6c;
  undefined **local_68;
  undefined **local_64;
  undefined **local_60;
  undefined1 local_5c [12];
  int local_50;
  undefined1 local_4c [64];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&local_78;
  local_88 = *(undefined1 **)(param_1 + 500);
  local_78 = (undefined **)(local_88 + *(int *)(param_1 + 0x1f8));
  local_70 = param_1;
  if (((local_88 == (undefined1 *)0x0) || (local_78 < local_88 + 4)) ||
     (CONCAT11(*local_88,local_88[1]) != 0)) {
    local_60 = (undefined **)local_88;
    __security_check_cookie(DAT_0076aa78);
    return;
  }
  local_68 = (undefined **)(uint)CONCAT11(local_88[2],local_88[3]);
  ppuVar2 = (undefined **)(local_88 + 4);
  ppuVar4 = local_68;
  iVar1 = param_1;
  iVar3 = local_94;
  do {
    local_94 = iVar1;
    local_70 = local_94;
    if ((local_68 == (undefined **)0x0) || (local_78 < ppuVar2 + 2)) {
      local_94 = iVar3;
      local_60 = ppuVar2;
      __security_check_cookie(local_8 ^ (uint)&local_78,ppuVar4);
      return;
    }
    local_8c = CONCAT11(*(undefined1 *)ppuVar2,*(undefined1 *)((int)ppuVar2 + 1));
    local_8a = CONCAT11(*(undefined1 *)((int)ppuVar2 + 2),*(undefined1 *)((int)ppuVar2 + 3));
    local_90 = 0;
    local_60 = ppuVar2 + 2;
    ppuVar2 = (undefined **)
              CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(ppuVar2 + 1),
                                         *(undefined1 *)((int)ppuVar2 + 5)),
                                *(undefined1 *)((int)ppuVar2 + 6)),*(undefined1 *)((int)ppuVar2 + 7)
                      );
    ppuVar4 = local_60;
    if ((ppuVar2 != (undefined **)0x0) &&
       (ppuVar4 = (undefined **)(*(int *)(local_94 + 0x1f8) + -2), ppuVar2 <= ppuVar4)) {
      local_6c = (undefined1 *)((int)ppuVar2 + (int)local_88);
      local_84 = (uint)CONCAT11(*local_6c,local_6c[1]);
      local_64 = &PTR_DAT_007238ec;
      do {
        local_74 = *local_64;
        if (*(uint *)(local_74 + 0x28) == local_84) {
          local_7c = 0;
          FUN_0068f170(local_5c,local_6c,local_78,0);
          local_c = (uint)*(ushort *)(local_70 + 0x108);
          iVar3 = setjmp3(local_4c,0);
          if (iVar3 == 0) {
            local_7c = (**(code **)(local_74 + 0x2c))(local_6c,local_5c);
          }
          ppuVar4 = local_64;
          if ((local_50 == 0) &&
             (iVar3 = FUN_00693ed0(local_74,local_6c,&local_94,&local_80), ppuVar4 = local_64,
             iVar3 == 0)) {
            *(undefined4 *)(local_80 + 0x14) = local_7c;
          }
          break;
        }
        ppuVar4 = local_64 + 1;
        local_64 = ppuVar4;
      } while (*ppuVar4 != (undefined *)0x0);
    }
    local_68 = (undefined **)((int)local_68 + -1);
    ppuVar2 = local_60;
    iVar1 = local_70;
    iVar3 = local_94;
  } while( true );
}


/* FUN_006a0a80 @ 006a0a80  kind=gamemisc  attributed-by=none  size=115 */

int FUN_006a0a80(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x10);
  uVar6 = (uint)(*(ushort *)(param_1 + 8) >> 1);
  iVar3 = FUN_00693a60(param_2,1,0,uVar6 + 1,0,&param_1);
  if (param_1 == 0) {
    uVar5 = 0;
    if (uVar6 != 0) {
      iVar7 = iVar7 + -1;
      do {
        puVar1 = (undefined1 *)(iVar7 + 1);
        puVar2 = (undefined1 *)(iVar7 + 2);
        iVar7 = iVar7 + 2;
        uVar4 = CONCAT11(*puVar1,*puVar2);
        if ((uVar4 < 0x20) || (0x7f < uVar4)) {
          uVar4 = 0x3f;
        }
        *(char *)(uVar5 + iVar3) = (char)uVar4;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    *(undefined1 *)(uVar6 + iVar3) = 0;
    return iVar3;
  }
  return 0;
}


/* FUN_006a0b70 @ 006a0b70  kind=gamemisc  attributed-by=none  size=536 */

int FUN_006a0b70(short param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined2 *puVar7;
  int iVar8;
  bool bVar9;
  int local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_14 = *(undefined4 *)(in_EAX + 100);
  puVar1 = *(undefined2 **)(in_EAX + 0x168);
  local_18 = 0;
  local_8 = -1;
  local_c = -1;
  iVar8 = -1;
  local_4 = -1;
  bVar9 = false;
  puVar7 = puVar1;
  if (*(ushort *)(in_EAX + 0x158) != 0) {
    iVar5 = 0;
    local_10 = (uint)*(ushort *)(in_EAX + 0x158);
    do {
      iVar2 = local_c;
      if ((puVar7[3] == param_1) && (puVar7[4] != 0)) {
        switch(*puVar7) {
        case 0:
        case 2:
          local_4 = iVar5;
          break;
        case 1:
          iVar2 = iVar5;
          if ((puVar7[2] != 0) && (iVar2 = local_c, puVar7[1] == 0)) {
            local_8 = iVar5;
          }
          break;
        case 3:
          if (((iVar8 == -1) || ((puVar7[2] & 0x3ff) == 9)) &&
             (((ushort)puVar7[1] < 2 || (puVar7[1] == 10)))) {
            bVar9 = (puVar7[2] & 0x3ff) == 9;
            iVar8 = iVar5;
          }
        }
      }
      local_c = iVar2;
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 10;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    local_10 = 0;
  }
  iVar5 = local_8;
  if (-1 < local_c) {
    iVar5 = local_c;
  }
  pcVar6 = (code *)0x0;
  if ((iVar8 < 0) || ((-1 < iVar5 && (!bVar9)))) {
    if (iVar5 < 0) {
      if (-1 < local_4) {
        puVar7 = puVar1 + local_4 * 10;
        goto LAB_006a0caa;
      }
    }
    else {
      puVar7 = puVar1 + iVar5 * 10;
      pcVar6 = (code *)&LAB_006a0b00;
    }
  }
  else {
    puVar7 = puVar1 + iVar8 * 10;
    if (((ushort)puVar1[iVar8 * 10 + 1] < 2) || (puVar1[iVar8 * 10 + 1] == 10)) {
LAB_006a0caa:
      pcVar6 = FUN_006a0a80;
    }
  }
  if (puVar7 == (undefined2 *)0x0) {
    *param_2 = 0;
    return 0;
  }
  if (pcVar6 != (code *)0x0) {
    if (*(int *)(puVar7 + 8) == 0) {
      uVar4 = *(undefined4 *)(in_EAX + 0x16c);
      uVar3 = FUN_00693a60(local_14,1,0,puVar7[4],0,&local_18);
      *(undefined4 *)(puVar7 + 8) = uVar3;
      if (((local_18 != 0) ||
          (local_18 = FUN_006908c0(uVar4,*(undefined4 *)(puVar7 + 6)), local_18 != 0)) ||
         (local_18 = FUN_00691ec0(uVar4,*(undefined4 *)(puVar7 + 8),puVar7[4]), local_18 != 0)) {
        FUN_00691290(local_14,*(undefined4 *)(puVar7 + 8));
        *(undefined4 *)(puVar7 + 8) = 0;
        puVar7[4] = 0;
        goto LAB_006a0d43;
      }
    }
    uVar4 = (*pcVar6)(puVar7,local_14);
    *param_2 = uVar4;
    return local_18;
  }
LAB_006a0d43:
  *param_2 = 0;
  return local_18;
}


/* FUN_006a0da0 @ 006a0da0  kind=gamemisc  attributed-by=none  size=38 */

int FUN_006a0da0(void)

{
  int *piVar1;
  int in_EDX;
  int unaff_ESI;
  
  piVar1 = &DAT_00723920;
  while ((*piVar1 != unaff_ESI || ((piVar1[1] != in_EDX && (piVar1[1] != -1))))) {
    piVar1 = piVar1 + 3;
    if (&UNK_007239a3 < piVar1) {
      return 0;
    }
  }
  return piVar1[2];
}


/* FUN_006a1ab0 @ 006a1ab0  kind=gamemisc  attributed-by=none  size=353 */

void FUN_006a1ab0(byte *param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *in_EAX;
  byte *pbVar5;
  int in_ECX;
  int iVar6;
  byte bVar7;
  uint in_EDX;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint local_10;
  byte *local_c;
  int local_4;
  
  iVar1 = in_EAX[2];
  uVar10 = 0;
  iVar6 = in_EAX[3];
  if (iVar1 < 0) {
    iVar6 = iVar6 - (*in_EAX + -1) * iVar1;
  }
  local_c = (byte *)(((int)in_EDX >> 3) + iVar6 + iVar1 * param_4);
  local_10 = 0;
  if (0 < in_ECX) {
    bVar8 = (byte)in_EDX & 7;
    bVar4 = 8 - bVar8;
    local_4 = in_ECX;
    do {
      pbVar5 = local_c;
      iVar6 = param_2;
      if (7 < param_2) {
        iVar3 = param_2 + -8;
        iVar2 = -uVar10;
        do {
          iVar6 = iVar3;
          iVar9 = iVar2 + 8;
          if (uVar10 < 8) {
            bVar7 = *param_1;
            param_1 = param_1 + 1;
            uVar10 = uVar10 + 8;
            local_10 = (uint)(ushort)((ushort)local_10 | (ushort)bVar7 << ((byte)(iVar2 + 8) & 0x1f)
                                     );
            iVar9 = iVar2;
          }
          bVar7 = (byte)(local_10 >> 8);
          if ((in_EDX & 7) == 0) {
            *pbVar5 = *pbVar5 | bVar7;
          }
          else {
            *pbVar5 = *pbVar5 | bVar7 >> bVar8;
            pbVar5[1] = pbVar5[1] | bVar7 << (bVar4 & 0x1f);
          }
          local_10 = local_10 << 8;
          pbVar5 = pbVar5 + 1;
          uVar10 = uVar10 - 8;
          iVar3 = iVar6 + -8;
          iVar2 = iVar9;
        } while (-1 < iVar6 + -8);
      }
      if (0 < iVar6) {
        if ((int)uVar10 < iVar6) {
          bVar7 = *param_1;
          param_1 = param_1 + 1;
          local_10._0_2_ = (ushort)local_10 | (ushort)bVar7 << (8U - (char)uVar10 & 0x1f);
          uVar10 = uVar10 + 8;
        }
        bVar7 = ~(byte)(0xff >> ((byte)iVar6 & 0x1f)) & (byte)((ushort)local_10 >> 8);
        *pbVar5 = *pbVar5 | bVar7 >> bVar8;
        if ((int)(uint)bVar4 < iVar6) {
          pbVar5[1] = pbVar5[1] | bVar7 << (bVar4 & 0x1f);
        }
        local_10 = (uint)(ushort)((ushort)local_10 << ((byte)iVar6 & 0x1f));
        uVar10 = uVar10 - iVar6;
      }
      if (param_3 != '\0') {
        uVar10 = 0;
        local_10 = 0;
      }
      local_c = local_c + iVar1;
      local_4 = local_4 + -1;
    } while (0 < local_4);
  }
  return;
}


/* FUN_006a1c60 @ 006a1c60  kind=gamemisc  attributed-by=none  size=228 */

int FUN_006a1c60(char param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBX;
  uint uVar6;
  int unaff_EDI;
  int local_8;
  int local_4;
  
  uVar4 = *(undefined4 *)(unaff_EBX + 0x1c);
  uVar2 = FUN_00690cd0();
  if (local_8 == 0) {
    *(uint *)(unaff_EDI + 0x18) = uVar2;
    if (param_1 == '\0') {
      local_4 = uVar2 * 2;
    }
    else {
      uVar3 = FUN_00693a60(uVar4,4,0,uVar2,0,&local_8);
      *(undefined4 *)(unaff_EDI + 0x1c) = uVar3;
      if (local_8 != 0) {
        return local_8;
      }
      local_4 = uVar2 * 4;
    }
    uVar4 = FUN_00693a60(uVar4,2,0,uVar2,0,&local_8);
    *(undefined4 *)(unaff_EDI + 0x20) = uVar4;
    if ((local_8 == 0) && (local_8 = FUN_00691f30(), local_8 == 0)) {
      uVar6 = 0;
      if (uVar2 != 0) {
        do {
          uVar1 = FUN_00690a40();
          *(undefined2 *)(*(int *)(unaff_EDI + 0x20) + uVar6 * 2) = uVar1;
          if (param_1 != '\0') {
            uVar5 = FUN_00690a40();
            *(uint *)(*(int *)(unaff_EDI + 0x1c) + uVar6 * 4) =
                 (uVar5 & 0xffff) + *(int *)(unaff_EDI + 8);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      FUN_00691fe0();
    }
  }
  return local_8;
}


/* FUN_006a1d50 @ 006a1d50  kind=gamemisc  attributed-by=none  size=295 */

int FUN_006a1d50(void)

{
  ushort uVar1;
  int in_EAX;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ushort *in_ECX;
  uint uVar5;
  uint uVar6;
  int local_4;
  
  uVar1 = in_ECX[2];
  uVar2 = *(undefined4 *)(in_EAX + 0x1c);
  switch(uVar1) {
  case 1:
  case 3:
    if (*in_ECX <= in_ECX[1]) {
      iVar4 = (uint)in_ECX[1] - (uint)*in_ECX;
      *(int *)(in_ECX + 0xc) = iVar4 + 1;
      uVar5 = iVar4 + 2;
      uVar2 = FUN_00693a60(uVar2,4,0,uVar5,0,&local_4);
      *(undefined4 *)(in_ECX + 0xe) = uVar2;
      if (local_4 != 0) {
        return local_4;
      }
      iVar4 = FUN_00691f30();
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar6 = 0;
      local_4 = 0;
      if (uVar5 != 0) {
        do {
          if (uVar1 == 1) {
            uVar3 = FUN_00690aa0();
          }
          else {
            uVar3 = FUN_00690a40();
            uVar3 = uVar3 & 0xffff;
          }
          *(uint *)(*(int *)(in_ECX + 0xe) + uVar6 * 4) = *(int *)(in_ECX + 4) + uVar3;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
      FUN_00691fe0();
      return local_4;
    }
  default:
    local_4 = 3;
    break;
  case 2:
    iVar4 = FUN_006a1c20();
    return iVar4;
  case 4:
    iVar4 = FUN_006a1c60(1);
    return iVar4;
  case 5:
    local_4 = FUN_006a1c20();
    if (local_4 == 0) {
      iVar4 = FUN_006a1c60(0);
      return iVar4;
    }
  }
  return local_4;
}


/* FUN_006a22d0 @ 006a22d0  kind=gamemisc  attributed-by=none  size=261 */

undefined4 FUN_006a22d0(undefined4 *param_1,int *param_2)

{
  ushort *puVar1;
  int *in_ECX;
  uint uVar2;
  ushort *puVar3;
  uint unaff_EDI;
  
  if ((*(ushort *)(in_ECX + 10) <= unaff_EDI) && (unaff_EDI <= *(ushort *)((int)in_ECX + 0x2a))) {
    puVar1 = (ushort *)in_ECX[1];
    puVar3 = puVar1 + *in_ECX * 0x14;
    if (puVar1 != (ushort *)0x0) {
      for (; puVar1 < puVar3; puVar1 = puVar1 + 0x14) {
        if ((*puVar1 <= unaff_EDI) && (unaff_EDI <= puVar1[1])) {
          uVar2 = (uint)(ushort)((short)unaff_EDI - *puVar1);
          switch(puVar1[2]) {
          case 1:
          case 3:
            *param_2 = *(int *)(*(int *)(puVar1 + 0xe) + uVar2 * 4);
            *param_1 = puVar1;
            return 0;
          case 2:
            *param_2 = uVar2 * *(int *)(puVar1 + 6) + *(int *)(puVar1 + 4);
            *param_1 = puVar1;
            return 0;
          case 4:
          case 5:
            uVar2 = 0;
            if (*(uint *)(puVar1 + 0xc) != 0) {
              puVar3 = *(ushort **)(puVar1 + 0x10);
              do {
                if (*puVar3 == unaff_EDI) {
                  if (puVar1[2] != 4) {
                    *param_2 = *(int *)(puVar1 + 6) * uVar2 + *(int *)(puVar1 + 4);
                    *param_1 = puVar1;
                    return 0;
                  }
                  *param_2 = *(int *)(*(int *)(puVar1 + 0xe) + uVar2 * 4);
                  *param_1 = puVar1;
                  return 0;
                }
                uVar2 = uVar2 + 1;
                puVar3 = puVar3 + 1;
              } while (uVar2 < *(uint *)(puVar1 + 0xc));
            }
          }
          break;
        }
      }
    }
  }
  *param_1 = 0;
  *param_2 = 0;
  return 6;
}


/* FUN_006a23f0 @ 006a23f0  kind=gamemisc  attributed-by=none  size=111 */

undefined4
FUN_006a23f0(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4,int *param_5,
            undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x268);
  if ((iVar1 != 0) && (param_3 < *(uint *)(param_1 + 0x264))) {
    iVar2 = FUN_006a22d0(param_4,param_6);
    if (iVar2 == 0) {
      *param_5 = param_3 * 0x30 + iVar1;
      return 0;
    }
  }
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  return 6;
}


/* FUN_006a2460 @ 006a2460  kind=gamemisc  attributed-by=none  size=172 */

int FUN_006a2460(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  iVar1 = 0;
  switch(*(undefined2 *)(param_2 + 6)) {
  case 1:
  case 2:
  case 8:
    iVar1 = FUN_00692010(param_1,&DAT_00723b4c,&local_8);
    if (iVar1 == 0) {
      *(undefined1 *)param_3 = local_8;
      *(undefined1 *)((int)param_3 + 1) = local_7;
      *(undefined1 *)((int)param_3 + 2) = local_6;
      *(undefined1 *)((int)param_3 + 3) = local_5;
      *(undefined1 *)(param_3 + 1) = local_4;
      *(undefined2 *)((int)param_3 + 5) = 0;
      *(undefined1 *)((int)param_3 + 7) = 0;
      return 0;
    }
    break;
  default:
    if ((*(short *)(param_2 + 4) != 2) && (*(short *)(param_2 + 4) != 5)) {
      return 3;
    }
    *param_3 = *(undefined4 *)(param_2 + 0x10);
    param_3[1] = *(undefined4 *)(param_2 + 0x14);
    break;
  case 6:
  case 7:
  case 9:
    iVar1 = FUN_00692010();
    return iVar1;
  }
  return iVar1;
}


/* FUN_006a2530 @ 006a2530  kind=gamemisc  attributed-by=none  size=437 */

void FUN_006a2530(char *param_1)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  int *unaff_EBX;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  int iVar12;
  int local_c;
  
  iVar7 = *unaff_EBX;
  pcVar9 = (char *)unaff_EBX[3];
  iVar2 = unaff_EBX[2];
  local_c = 0;
  pcVar4 = pcVar9;
  if (iVar7 < 1) {
LAB_006a2585:
    unaff_EBX[1] = 0;
    *unaff_EBX = 0;
    unaff_EBX[2] = 0;
    *(undefined1 *)((int)unaff_EBX + 0x12) = 1;
    return;
  }
  do {
    pcVar10 = pcVar4 + iVar2;
    for (; pcVar4 < pcVar10; pcVar4 = pcVar4 + 1) {
      if (*pcVar4 != '\0') {
        if (iVar7 <= local_c) goto LAB_006a2585;
        if (0 < local_c) {
          iVar7 = iVar7 - local_c;
          memmove(pcVar9,pcVar9 + local_c * iVar2,iVar7 * iVar2);
          cVar3 = (char)local_c;
          *param_1 = *param_1 - cVar3;
          param_1[3] = param_1[3] - cVar3;
          param_1[6] = param_1[6] - cVar3;
          *unaff_EBX = *unaff_EBX - local_c;
        }
        pcVar9 = (char *)((iVar7 + -1) * iVar2 + unaff_EBX[3]);
        local_c = 0;
        if (iVar7 < 1) goto LAB_006a2616;
        pcVar4 = pcVar9 + iVar2;
        pcVar10 = pcVar9;
        goto joined_r0x006a25e9;
      }
    }
    local_c = local_c + 1;
    pcVar4 = pcVar10;
    if (iVar7 <= local_c) {
      unaff_EBX[1] = 0;
      *unaff_EBX = 0;
      unaff_EBX[2] = 0;
      *(undefined1 *)((int)unaff_EBX + 0x12) = 1;
      return;
    }
  } while( true );
joined_r0x006a25e9:
  if (pcVar9 < pcVar4) {
    if (*pcVar9 != '\0') goto LAB_006a2608;
    pcVar9 = pcVar9 + 1;
    goto joined_r0x006a25e9;
  }
  local_c = local_c + 1;
  pcVar9 = pcVar10 + -iVar2;
  pcVar4 = pcVar4 + -iVar2;
  pcVar10 = pcVar9;
  if (iVar7 <= local_c) {
LAB_006a2608:
    if (0 < local_c) {
      *param_1 = *param_1 - (char)local_c;
      iVar7 = iVar7 - local_c;
      *unaff_EBX = *unaff_EBX - local_c;
    }
LAB_006a2616:
    iVar7 = iVar2 * iVar7;
    do {
      pbVar8 = (byte *)unaff_EBX[3];
      for (pbVar5 = pbVar8; pbVar5 < pbVar8 + iVar7; pbVar5 = pbVar5 + iVar2) {
        if ((*pbVar5 & 0x80) != 0) goto LAB_006a269b;
      }
      pbVar5 = pbVar8 + iVar7;
      for (; pbVar8 < pbVar5; pbVar8 = pbVar8 + iVar2) {
        bVar6 = *pbVar8 * '\x02';
        pbVar11 = pbVar8;
        if (8 < unaff_EBX[1]) {
          iVar12 = (unaff_EBX[1] - 9U >> 3) + 1;
          do {
            pbVar1 = pbVar11 + 1;
            *pbVar11 = *pbVar1 >> 7 | bVar6;
            pbVar11 = pbVar11 + 1;
            iVar12 = iVar12 + -1;
            bVar6 = *pbVar1 * '\x02';
          } while (iVar12 != 0);
        }
        *pbVar11 = bVar6;
      }
      unaff_EBX[1] = unaff_EBX[1] + -1;
      param_1[2] = param_1[2] + '\x01';
      param_1[5] = param_1[5] + '\x01';
      param_1[1] = param_1[1] + -1;
    } while (0 < unaff_EBX[1]);
LAB_006a269b:
    iVar12 = unaff_EBX[1];
    do {
      iVar12 = iVar12 + -1;
      pbVar5 = (byte *)((iVar12 >> 3) + unaff_EBX[3]);
      pbVar8 = pbVar5 + iVar7;
      for (; pbVar5 < pbVar8; pbVar5 = pbVar5 + iVar2) {
        if ((*pbVar5 & (byte)(0x80 >> ((byte)iVar12 & 7))) != 0) {
          return;
        }
      }
      unaff_EBX[1] = iVar12;
      param_1[1] = param_1[1] + -1;
      iVar12 = unaff_EBX[1];
    } while (0 < iVar12);
    return;
  }
  goto joined_r0x006a25e9;
}


/* FUN_006a26f0 @ 006a26f0  kind=gamemisc  attributed-by=none  size=282 */

int FUN_006a26f0(int *param_1,int param_2,int param_3,undefined2 param_4,byte *param_5,int param_6)

{
  uint uVar1;
  int unaff_EBX;
  uint uVar2;
  int iVar3;
  
  if ((((param_2 < 0) || (uVar1 = (uint)param_5[1], param_1[1] < (int)(uVar1 + param_2))) ||
      (param_3 < 0)) || (uVar2 = (uint)*param_5, *param_1 < (int)(uVar2 + param_3))) {
    iVar3 = 6;
  }
  else {
    param_2 = 0;
    switch(param_4) {
    case 1:
    case 6:
      if (unaff_EBX == 1) {
        iVar3 = ((int)(uVar1 + 7) >> 3) * uVar2;
        param_2 = 1;
      }
      else if (unaff_EBX == 2) {
        iVar3 = ((int)(uVar1 + 3) >> 2) * uVar2;
        param_2 = 1;
      }
      else if (unaff_EBX == 4) {
        iVar3 = ((int)(uVar1 + 1) >> 1) * uVar2;
        param_2 = 1;
      }
      else {
        iVar3 = uVar1 * uVar2;
        param_2 = 1;
      }
      break;
    case 2:
    case 5:
    case 7:
      iVar3 = (int)(uVar1 * unaff_EBX * uVar2 + 7) >> 3;
      break;
    default:
      return 3;
    }
    iVar3 = FUN_00691f30(param_6,iVar3);
    if (iVar3 == 0) {
      FUN_006a1ab0(*(undefined4 *)(param_6 + 0x20),uVar1 * unaff_EBX,param_2,param_3);
      FUN_00691fe0(param_6);
      return 0;
    }
  }
  return iVar3;
}


/* FUN_006a2820 @ 006a2820  kind=gamemisc  attributed-by=none  size=691 */

int FUN_006a2820(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,int param_8,byte *param_9,int param_10)

{
  uint *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  uint local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  iVar8 = param_8;
  uVar2 = *(undefined4 *)(param_8 + 0x1c);
  puVar1 = (uint *)(param_5 + 0x4c);
  param_8 = FUN_006908c0(param_8,param_3 + param_4);
  pbVar3 = param_9;
  if (param_8 != 0) {
    return param_8;
  }
  iVar7 = FUN_006a2460(iVar8,param_2,param_9);
  if (iVar7 != 0) {
    return iVar7;
  }
  param_8 = 0;
  if (param_10 != 0) goto LAB_006a2904;
  *(uint *)(param_5 + 0x50) = (uint)pbVar3[1];
  *puVar1 = (uint)*pbVar3;
  switch(*(undefined1 *)(param_1 + 0x2e)) {
  case 1:
    *(undefined1 *)(param_5 + 0x5e) = 1;
    *(int *)(param_5 + 0x54) = *(int *)(param_5 + 0x50) + 7 >> 3;
    break;
  case 2:
    *(undefined1 *)(param_5 + 0x5e) = 3;
    iVar9 = *(int *)(param_5 + 0x50) + 3 >> 2;
    goto LAB_006a28dd;
  default:
    goto switchD_006a289f_caseD_3;
  case 4:
    *(undefined1 *)(param_5 + 0x5e) = 4;
    *(int *)(param_5 + 0x54) = *(int *)(param_5 + 0x50) + 1 >> 1;
    break;
  case 8:
    iVar9 = *(int *)(param_5 + 0x50);
    *(undefined1 *)(param_5 + 0x5e) = 2;
LAB_006a28dd:
    *(int *)(param_5 + 0x54) = iVar9;
  }
  iVar9 = *puVar1 * *(int *)(param_5 + 0x54);
  if ((iVar9 != 0) && (param_8 = iVar7, param_8 = FUN_00692520(param_5,iVar9), param_8 == 0)) {
LAB_006a2904:
    switch(*(undefined2 *)(param_2 + 6)) {
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
      iVar8 = FUN_006a26f0(puVar1,param_6,param_7,*(undefined2 *)(param_2 + 6),pbVar3,iVar8);
      return iVar8;
    default:
switchD_006a289f_caseD_3:
      param_8 = 3;
      break;
    case 8:
      param_8 = FUN_00690900(iVar8,1);
      if (param_8 != 0) {
        return 0x53;
      }
    case 9:
      uVar5 = FUN_00690b80(iVar8,&param_8);
      local_18 = (uint)uVar5;
      if ((param_8 == 0) && (iVar7 = FUN_00693a60(uVar2,4,0,local_18,0,&param_8), param_8 == 0)) {
        param_8 = FUN_00691f30(iVar8,local_18 * 4);
        if (param_8 == 0) {
          if (uVar5 != 0) {
            puVar12 = (undefined1 *)(iVar7 + 3);
            uVar10 = local_18;
            do {
              uVar6 = FUN_00690a40(iVar8);
              *(undefined2 *)(puVar12 + -3) = uVar6;
              uVar4 = FUN_00690a20(iVar8);
              puVar12[-1] = uVar4;
              uVar4 = FUN_00690a20(iVar8);
              *puVar12 = uVar4;
              uVar10 = uVar10 + 0xffff;
              puVar12 = puVar12 + 4;
            } while ((short)uVar10 != 0);
          }
          FUN_00691fe0(iVar8);
          if (uVar5 != 0) {
            pcVar11 = (char *)(iVar7 + 2);
            iVar9 = param_8;
            do {
              param_8 = iVar9;
              param_8 = FUN_006a22d0(&local_c,&local_10);
              if ((param_8 != 0) ||
                 (param_8 = FUN_006a2820(param_1,local_c,param_3,local_10,param_5,*pcVar11 + param_6
                                         ,pcVar11[1] + param_7,iVar8,local_8,param_10 + 1),
                 param_8 != 0)) break;
              local_18 = local_18 + 0xffff;
              pcVar11 = pcVar11 + 4;
              iVar9 = 0;
            } while ((short)local_18 != 0);
          }
        }
        FUN_00691290(uVar2,iVar7);
        return param_8;
      }
    }
  }
  return param_8;
}


/* FUN_006a2c30 @ 006a2c30  kind=gamemisc  attributed-by=none  size=533 */

int FUN_006a2c30(int param_1,int param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  uVar11 = *(undefined4 *)(param_2 + 0x1c);
  local_10 = (undefined4 *)0x0;
  local_14 = uVar11;
  uVar3 = FUN_00690b80(param_2,&local_18);
  uVar3 = uVar3 & 0xffff;
  if (local_18 != 0) {
    return local_18;
  }
  if (*(ushort *)(param_1 + 0x108) < uVar3) {
    return 3;
  }
  local_8 = uVar3;
  iVar4 = FUN_00693a60(uVar11,2,0,uVar3,0,&local_18);
  local_c = iVar4;
  if ((local_18 == 0) && (local_18 = FUN_00691f30(param_2,uVar3 * 2), local_18 == 0)) {
    iVar9 = 0;
    if (uVar3 != 0) {
      do {
        uVar2 = FUN_00690a40(param_2);
        *(undefined2 *)(iVar4 + iVar9 * 2) = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar3);
    }
    FUN_00691fe0(param_2);
    uVar8 = 0;
    iVar9 = 0;
    if (uVar3 != 0) {
      do {
        uVar5 = (uint)*(ushort *)(iVar4 + iVar9 * 2);
        if ((0x101 < uVar5) && (uVar5 = uVar5 - 0x101, (int)uVar8 < (int)uVar5)) {
          uVar8 = uVar5 & 0xffff;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar3);
    }
    local_4 = uVar8;
    local_10 = (undefined4 *)FUN_00693a60(local_14,4,0,uVar8,0,&local_18);
    uVar11 = local_14;
    if (local_18 == 0) {
      uVar7 = (ushort)uVar8;
      if (uVar7 != 0) {
        uVar6 = 0;
        do {
          uVar8 = FUN_00690b20(param_2,&local_18);
          uVar8 = uVar8 & 0xff;
          puVar10 = local_10;
          uVar3 = local_4;
          if (local_18 != 0) goto LAB_006a2e00;
          iVar4 = FUN_00693a60(local_14,1,0,uVar8 + 1,0,&local_18);
          piVar1 = local_10 + uVar6;
          *piVar1 = iVar4;
          puVar10 = local_10;
          uVar3 = local_4;
          if ((local_18 != 0) ||
             (local_18 = FUN_00691ec0(param_2,iVar4,uVar8), puVar10 = local_10, uVar3 = local_4,
             local_18 != 0)) goto LAB_006a2e00;
          uVar6 = uVar6 + 1;
          *(undefined1 *)(uVar8 + *piVar1) = 0;
          uVar3 = local_8;
        } while (uVar6 < uVar7);
      }
      *(short *)(param_1 + 0x278) = (short)uVar3;
      *(ushort *)(param_1 + 0x27a) = uVar7;
      *(int *)(param_1 + 0x27c) = local_c;
      *(undefined4 **)(param_1 + 0x280) = local_10;
      return 0;
    }
  }
LAB_006a2e24:
  FUN_00691290(uVar11,local_10);
  FUN_00691290(uVar11,iVar4);
  return local_18;
LAB_006a2e00:
  do {
    FUN_00691290(local_14,*puVar10);
    *puVar10 = 0;
    uVar3 = uVar3 - 1;
    iVar4 = local_c;
    puVar10 = puVar10 + 1;
    uVar11 = local_14;
  } while (uVar3 != 0);
  goto LAB_006a2e24;
}


/* FUN_006a2e50 @ 006a2e50  kind=gamemisc  attributed-by=none  size=194 */

int FUN_006a2e50(int param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  uint uVar6;
  int local_4;
  
  uVar1 = *(undefined4 *)(unaff_EBX + 0x1c);
  uVar2 = FUN_00690b80();
  uVar6 = (uint)uVar2;
  if (local_4 == 0) {
    if ((uVar6 <= *(ushort *)(param_1 + 0x108)) && (uVar6 < 0x103)) {
      iVar3 = FUN_00693a60(uVar1,1,0,uVar6,0,&local_4);
      if (local_4 == 0) {
        local_4 = FUN_00691ec0();
        if (local_4 == 0) {
          iVar4 = 0;
          if (uVar6 != 0) {
            do {
              iVar5 = *(char *)(iVar4 + iVar3) + iVar4;
              if ((iVar5 < 0) || ((int)uVar6 < iVar5)) {
                local_4 = 3;
                goto LAB_006a2ef5;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)uVar6);
          }
          *(int *)(param_1 + 0x27c) = iVar3;
          *(ushort *)(param_1 + 0x278) = uVar2;
          return 0;
        }
      }
LAB_006a2ef5:
      FUN_00691290(uVar1,iVar3);
      return local_4;
    }
    local_4 = 3;
  }
  return local_4;
}


/* FUN_006a2f20 @ 006a2f20  kind=gamemisc  attributed-by=none  size=120 */

int FUN_006a2f20(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  uVar1 = *(undefined4 *)(unaff_ESI + 0x68);
  iVar3 = (**(code **)(unaff_ESI + 0x1fc))();
  if (iVar3 == 0) {
    iVar2 = *(int *)(unaff_ESI + 0x1d4);
    iVar3 = FUN_00690900(uVar1,0x20);
    if (iVar3 == 0) {
      if (iVar2 == 0x20000) {
        iVar3 = FUN_006a2c30();
        *(undefined1 *)(unaff_ESI + 0x274) = 1;
        return iVar3;
      }
      if (iVar2 == 0x28000) {
        iVar3 = FUN_006a2e50();
        *(undefined1 *)(unaff_ESI + 0x274) = 1;
        return iVar3;
      }
      iVar3 = 3;
      *(undefined1 *)(unaff_ESI + 0x274) = 1;
    }
  }
  return iVar3;
}


/* FUN_006a30a0 @ 006a30a0  kind=gamemisc  attributed-by=none  size=289 */

undefined4 FUN_006a30a0(int param_1,uint param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 < *(ushort *)(param_1 + 0x108)) {
    iVar2 = *(int *)(param_1 + 0x218);
    if (iVar2 == 0) {
      return 7;
    }
    uVar3 = (**(code **)(iVar2 + 0x10))(0);
    *param_3 = uVar3;
    iVar4 = *(int *)(param_1 + 0x1d4);
    if (iVar4 == 0x10000) {
      if (param_2 < 0x102) {
        uVar3 = (**(code **)(iVar2 + 0x10))(param_2);
        *param_3 = uVar3;
        return 0;
      }
    }
    else if (iVar4 == 0x20000) {
      if ((*(char *)(param_1 + 0x274) == '\0') && (iVar4 = FUN_006a2f20(), iVar4 != 0)) {
        return 0;
      }
      if (param_2 < *(ushort *)(param_1 + 0x278)) {
        uVar1 = *(ushort *)(*(int *)(param_1 + 0x27c) + param_2 * 2);
        if (0x101 < uVar1) {
          *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x280) + -0x408 + (uint)uVar1 * 4);
          return 0;
        }
        uVar3 = (**(code **)(iVar2 + 0x10))((uint)uVar1);
        *param_3 = uVar3;
        return 0;
      }
    }
    else if (iVar4 == 0x28000) {
      if ((*(char *)(param_1 + 0x274) == '\0') && (iVar4 = FUN_006a2f20(), iVar4 != 0)) {
        return 0;
      }
      if (param_2 < *(ushort *)(param_1 + 0x278)) {
        uVar3 = (**(code **)(iVar2 + 0x10))
                          (param_2 + (int)*(char *)(*(int *)(param_1 + 0x27c) + param_2));
        *param_3 = uVar3;
      }
    }
    return 0;
  }
  return 0x10;
}


/* FUN_006a3210 @ 006a3210  kind=gamemisc  attributed-by=none  size=446 */

undefined4 FUN_006a3210(undefined4 param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_10;
  
  piVar2 = (int *)(in_ECX + 0x318);
  *piVar2 = 0;
  *(undefined4 *)(in_ECX + 0x31c) = 0;
  *(undefined4 *)(in_ECX + 800) = 0;
  *(undefined4 *)(in_ECX + 0x324) = 0;
  *(undefined4 *)(in_ECX + 0x328) = 0;
  *(undefined4 *)(in_ECX + 0x32c) = 0;
  iVar4 = FUN_0069c050();
  if (((iVar4 != 0) || (local_10 < 8)) ||
     (iVar4 = FUN_00693a30(param_1,local_10,piVar2), iVar4 != 0)) {
    return 8;
  }
  puVar3 = (undefined1 *)*piVar2;
  *(undefined1 **)(in_ECX + 0x31c) = puVar3 + local_10;
  uVar9 = (uint)CONCAT11(puVar3[2],puVar3[3]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]);
  if (((CONCAT11(*puVar3,puVar3[1]) == 1) && (7 < uVar6)) &&
     ((uVar9 <= uVar6 - 8 >> 2 && (uVar6 + 1 <= local_10)))) {
    iVar7 = *piVar2 + 8;
    *(uint *)(in_ECX + 800) = *piVar2 + uVar6;
    iVar5 = 0;
    iVar8 = 0;
    iVar4 = iVar7 + uVar9 * 4;
    *(uint *)(in_ECX + 0x328) = uVar9;
    *(uint *)(in_ECX + 0x324) = local_10 - uVar6;
    if (1 < uVar9) {
      local_10 = (uVar9 - 2 >> 1) + 1;
      do {
        puVar3 = (undefined1 *)(iVar7 + 7);
        iVar5 = iVar5 + (uint)CONCAT11(*(undefined1 *)(iVar7 + 2),*(undefined1 *)(iVar7 + 3)) * 10;
        puVar1 = (undefined1 *)(iVar7 + 6);
        iVar7 = iVar7 + 8;
        uVar9 = uVar9 - 2;
        local_10 = local_10 + -1;
        iVar8 = iVar8 + (uint)CONCAT11(*puVar1,*puVar3) * 10;
      } while (local_10 != 0);
    }
    if (uVar9 != 0) {
      iVar4 = iVar4 + (uint)CONCAT11(*(undefined1 *)(iVar7 + 2),*(undefined1 *)(iVar7 + 3)) * 10;
    }
    if ((uint)(iVar8 + iVar5 + iVar4) <= *piVar2 + uVar6) {
      *(undefined1 *)(in_ECX + 0x32c) = 1;
      return 0;
    }
  }
  FUN_00691ee0(param_1,piVar2);
  *piVar2 = 0;
  *(undefined4 *)(in_ECX + 0x31c) = 0;
  *(undefined4 *)(in_ECX + 800) = 0;
  *(undefined4 *)(in_ECX + 0x324) = 0;
  *(undefined4 *)(in_ECX + 0x328) = 0;
  *(undefined4 *)(in_ECX + 0x32c) = 0;
  return 8;
}


/* FUN_006a33d0 @ 006a33d0  kind=gamemisc  attributed-by=none  size=543 */

int FUN_006a33d0(uint param_1,char *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  char *pcVar11;
  int iVar12;
  uint _MaxCount;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  int local_c;
  int local_8;
  
  iVar7 = param_1;
  iVar9 = *(int *)(param_1 + 0x58);
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x32c) != '\0') ||
     (local_c = FUN_006a3210(*(undefined4 *)(param_1 + 0x68)), local_c == 0)) {
    iVar12 = *(int *)(param_1 + 0x318);
    param_1 = *(int *)(param_1 + 0x328);
    local_8 = iVar12 + 8 + param_1 * 4;
    local_c = 6;
    if ((iVar9 != 0) && (param_2 != (char *)0x0)) {
      pcVar11 = param_2;
      do {
        cVar5 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar5 != '\0');
      if ((pcVar11 != param_2 + 1) && (param_1 != 0)) {
        iVar13 = iVar12 + 7;
        iVar12 = iVar12 + 6;
        while( true ) {
          puVar1 = (undefined1 *)(iVar12 + 2);
          puVar2 = (undefined1 *)(iVar13 + 4);
          puVar3 = (undefined1 *)(iVar13 + 2);
          puVar4 = (undefined1 *)(iVar12 + 4);
          iVar12 = iVar12 + 4;
          iVar13 = iVar13 + 4;
          uVar8 = (uint)CONCAT11(*puVar4,*puVar2);
          if (CONCAT11(*puVar1,*puVar3) == *(short *)(iVar9 + 0xe)) break;
          param_1 = param_1 + -1;
          local_8 = local_8 + uVar8 * 10;
          if (param_1 == 0) {
            return 6;
          }
        }
        if (uVar8 != 0) {
          pbVar15 = (byte *)(local_8 + 5);
          param_1 = uVar8;
          do {
            bVar6 = *pbVar15;
            if ((bVar6 & 0x10) == 0) goto switchD_006a355e_default;
            uVar8 = CONCAT31(CONCAT21(CONCAT11(pbVar15[-5],pbVar15[-4]),pbVar15[-3]),pbVar15[-2]);
            uVar14 = CONCAT31(CONCAT21(CONCAT11(pbVar15[1],pbVar15[2]),pbVar15[3]),pbVar15[4]);
            if (((*(uint *)(iVar7 + 0x324) <= uVar8) ||
                (_MaxCount = *(uint *)(iVar7 + 0x324) - uVar8,
                _MaxCount <= (uint)((int)pcVar11 - (int)(param_2 + 1)))) ||
               (iVar9 = strncmp(param_2,(char *)(*(int *)(iVar7 + 800) + uVar8),_MaxCount),
               iVar9 != 0)) goto switchD_006a355e_default;
            switch(bVar6 & 0xf) {
            case 0:
            case 1:
              if ((uVar14 < *(uint *)(iVar7 + 0x324)) &&
                 (pvVar10 = memchr((void *)(*(int *)(iVar7 + 800) + uVar14),0,
                                   *(uint *)(iVar7 + 0x324)), pvVar10 != (void *)0x0)) {
                *param_3 = 1;
                param_3[1] = *(int *)(iVar7 + 800) + uVar14;
                return 0;
              }
            default:
switchD_006a355e_default:
              pbVar15 = pbVar15 + 10;
              param_1 = param_1 - 1;
              if (param_1 == 0) {
                return 6;
              }
              break;
            case 2:
              *param_3 = 2;
              goto LAB_006a35df;
            case 3:
              *param_3 = 3;
LAB_006a35df:
              param_3[1] = uVar14;
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return local_c;
}


/* FUN_006a3910 @ 006a3910  kind=gamemisc  attributed-by=none  size=85 */

void FUN_006a3910(int param_1)

{
  int iVar1;
  int *unaff_EDI;
  
  if (param_1 == 0) {
    *unaff_EDI = 6;
    unaff_EDI[5] = 0x20;
    unaff_EDI[6] = 2;
  }
  else {
    *unaff_EDI = 0xc;
    unaff_EDI[5] = 0x100;
    unaff_EDI[6] = 0x32;
  }
  iVar1 = 1 << ((byte)*unaff_EDI & 0x1f);
  unaff_EDI[4] = *unaff_EDI + -6;
  unaff_EDI[1] = iVar1;
  unaff_EDI[3] = -iVar1;
  unaff_EDI[2] = iVar1 / 2;
  return;
}


/* FUN_006a3970 @ 006a3970  kind=gamemisc  attributed-by=none  size=166 */

undefined4 FUN_006a3970(void)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  char unaff_BL;
  int unaff_ESI;
  
  if (*(int *)(in_EAX + 0x60) == 0) {
    iVar2 = *(int *)(in_EAX + 0x2c);
    *(int *)(in_EAX + 0x5c) = iVar2;
    *(int *)(in_EAX + 0x60) = iVar2;
    *(int *)(in_EAX + 0x2c) = iVar2 + 0x20;
  }
  if (*(uint *)(in_EAX + 0x28) <= *(uint *)(in_EAX + 0x2c)) {
    *(undefined4 *)(in_EAX + 0x30) = 0x62;
    return 1;
  }
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0xc) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0x14) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0x10) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 8) = *(undefined4 *)(in_EAX + 0x2c);
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 4) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0x1c) = 0;
  *(uint *)(*(int *)(in_EAX + 0x5c) + 0xc) = (uint)*(byte *)(in_EAX + 0xb8);
  if (unaff_ESI == 1) {
    puVar1 = (uint *)(*(int *)(in_EAX + 0x5c) + 0xc);
    *puVar1 = *puVar1 | 8;
    if (unaff_BL != '\0') {
      puVar1 = (uint *)(*(int *)(in_EAX + 0x5c) + 0xc);
      *puVar1 = *puVar1 | 0x20;
    }
  }
  else {
    if (unaff_ESI != 2) {
      *(undefined4 *)(in_EAX + 0x30) = 0x14;
      return 1;
    }
    if (unaff_BL != '\0') {
      puVar1 = (uint *)(*(int *)(in_EAX + 0x5c) + 0xc);
      *puVar1 = *puVar1 | 0x10;
    }
  }
  if (*(int *)(in_EAX + 100) == 0) {
    *(undefined4 *)(in_EAX + 100) = *(undefined4 *)(in_EAX + 0x5c);
  }
  *(int *)(in_EAX + 0x68) = unaff_ESI;
  *(undefined2 *)(in_EAX + 0x5a) = 1;
  return 0;
}


/* FUN_006a3a20 @ 006a3a20  kind=gamemisc  attributed-by=none  size=128 */

undefined4 FUN_006a3a20(char param_1)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = *(int *)(in_EAX + 0x2c) - *(int *)(*(int *)(in_EAX + 0x5c) + 8) >> 2;
  if (iVar1 < 0) {
    *(undefined4 *)(in_EAX + 0x30) = 99;
    return 1;
  }
  if (0 < iVar1) {
    *(int *)(*(int *)(in_EAX + 0x5c) + 0x10) = iVar1;
    if (param_1 != '\0') {
      iVar1 = *(int *)(in_EAX + 0x5c);
      if ((*(byte *)(iVar1 + 0xc) & 8) == 0) {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x20;
      }
      else {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x10;
      }
    }
    iVar1 = *(int *)(in_EAX + 0x5c);
    *(int *)(in_EAX + 0x5c) = *(int *)(in_EAX + 0x2c);
    *(int *)(in_EAX + 0x2c) = *(int *)(in_EAX + 0x2c) + 0x20;
    *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0x10) = 0;
    *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 8) = *(undefined4 *)(in_EAX + 0x2c);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(in_EAX + 0x5c);
    *(short *)(in_EAX + 0x58) = *(short *)(in_EAX + 0x58) + 1;
  }
  if (*(uint *)(in_EAX + 0x28) <= *(uint *)(in_EAX + 0x2c)) {
    *(undefined4 *)(in_EAX + 0x30) = 0x62;
    return 1;
  }
  *(undefined1 *)(in_EAX + 0x5b) = 0;
  return 0;
}


/* FUN_006a3aa0 @ 006a3aa0  kind=gamemisc  attributed-by=none  size=99 */

uint FUN_006a3aa0(void)

{
  uint uVar1;
  int iVar2;
  int in_EDX;
  int iVar3;
  int unaff_ESI;
  
  uVar1 = *(uint *)(unaff_ESI + 0x34);
  iVar2 = *(int *)(unaff_ESI + 0x24) + uVar1 * -4;
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) goto LAB_006a3add;
  } while (in_EDX < *(int *)(iVar2 + uVar1 * 4));
  if (-1 < (int)uVar1) {
    iVar3 = in_EDX;
    if (in_EDX <= *(int *)(iVar2 + uVar1 * 4)) goto LAB_006a3b05;
    do {
      uVar1 = uVar1 - 1;
      in_EDX = *(int *)(iVar2 + 4 + uVar1 * 4);
      *(int *)(iVar2 + 4 + uVar1 * 4) = iVar3;
      iVar3 = in_EDX;
    } while (-1 < (int)uVar1);
  }
LAB_006a3add:
  *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x28) + -4;
  if (*(uint *)(unaff_ESI + 0x28) <= *(uint *)(unaff_ESI + 0x2c)) {
    *(undefined4 *)(unaff_ESI + 0x30) = 0x62;
    return CONCAT31((int3)(*(uint *)(unaff_ESI + 0x28) >> 8),1);
  }
  *(int *)(unaff_ESI + 0x34) = *(int *)(unaff_ESI + 0x34) + 1;
  uVar1 = *(int *)(unaff_ESI + 0x34) * 4;
  *(int *)(*(int *)(unaff_ESI + 0x24) + *(int *)(unaff_ESI + 0x34) * -4) = in_EDX;
LAB_006a3b05:
  return uVar1 & 0xffffff00;
}


/* FUN_006a3b10 @ 006a3b10  kind=gamemisc  attributed-by=none  size=171 */

undefined1 FUN_006a3b10(void)

{
  char cVar1;
  int in_EAX;
  ushort uVar2;
  int iVar3;
  
  uVar2 = *(ushort *)(in_EAX + 0x58);
  iVar3 = *(int *)(in_EAX + 0x60);
  if ((uVar2 < 2) || (iVar3 == 0)) {
    *(undefined4 *)(in_EAX + 0x60) = 0;
  }
  else if (uVar2 != 0) {
    while( true ) {
      if (uVar2 < 2) {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      else {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x10) * 4;
      }
      if ((*(byte *)(iVar3 + 0xc) & 8) == 0) {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x10) * 4 + -4;
        *(int *)(iVar3 + 0x14) = (*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10)) + 1;
      }
      cVar1 = FUN_006a3aa0();
      if ((cVar1 != '\0') || (cVar1 = FUN_006a3aa0(), cVar1 != '\0')) break;
      iVar3 = *(int *)(iVar3 + 4);
      uVar2 = uVar2 - 1;
      if (uVar2 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


/* FUN_006a3bc0 @ 006a3bc0  kind=gamemisc  attributed-by=none  size=96 */

void FUN_006a3bc0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[8] = param_1[4];
  iVar2 = param_1[2];
  iVar1 = (*param_1 + iVar2) / 2;
  param_1[2] = iVar1;
  iVar2 = (param_1[4] + iVar2) / 2;
  param_1[4] = (iVar1 + iVar2) / 2;
  param_1[9] = param_1[5];
  param_1[6] = iVar2;
  iVar2 = (param_1[1] + param_1[3]) / 2;
  iVar1 = (param_1[5] + param_1[3]) / 2;
  param_1[3] = iVar2;
  param_1[7] = iVar1;
  param_1[5] = (iVar2 + iVar1) / 2;
  return;
}


/* FUN_006a3c20 @ 006a3c20  kind=gamemisc  attributed-by=none  size=140 */

void FUN_006a3c20(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[0xc] = param_1[6];
  iVar2 = param_1[6] + 1 + param_1[4] >> 1;
  param_1[10] = iVar2;
  iVar1 = *param_1 + 1 + param_1[2] >> 1;
  iVar3 = param_1[4] + 1 + param_1[2] >> 1;
  iVar2 = iVar2 + 1 + iVar3 >> 1;
  param_1[2] = iVar1;
  param_1[8] = iVar2;
  iVar1 = iVar1 + 1 + iVar3 >> 1;
  param_1[6] = iVar2 + 1 + iVar1 >> 1;
  param_1[4] = iVar1;
  param_1[0xd] = param_1[7];
  iVar2 = param_1[7] + 1 + param_1[5] >> 1;
  iVar1 = param_1[1] + 1 + param_1[3] >> 1;
  param_1[0xb] = iVar2;
  iVar3 = param_1[5] + 1 + param_1[3] >> 1;
  param_1[3] = iVar1;
  iVar2 = iVar2 + 1 + iVar3 >> 1;
  iVar1 = iVar1 + 1 + iVar3 >> 1;
  param_1[9] = iVar2;
  param_1[5] = iVar1;
  param_1[7] = iVar2 + 1 + iVar1 >> 1;
  return;
}


/* FUN_006a3cb0 @ 006a3cb0  kind=gamemisc  attributed-by=none  size=375 */

uint FUN_006a3cb0(int param_1,uint param_2,int param_3,int param_4)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  byte bVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *unaff_ESI;
  int iVar8;
  int local_4;
  
  iVar4 = in_ECX - param_1;
  iVar8 = param_2 - in_EAX;
  if (((iVar8 < 1) || ((int)param_2 < param_3)) || (param_4 < (int)in_EAX)) {
    return in_EAX & 0xffffff00;
  }
  if ((int)in_EAX < param_3) {
    iVar1 = FUN_0068ea60(iVar4,param_3 - in_EAX,iVar8);
    param_1 = param_1 + iVar1;
    bVar3 = (byte)*unaff_ESI;
    param_3 = param_3 >> (bVar3 & 0x1f);
    uVar6 = 0;
  }
  else {
    bVar3 = (byte)*unaff_ESI;
    param_3 = (int)in_EAX >> (bVar3 & 0x1f);
    uVar6 = unaff_ESI[1] - 1 & in_EAX;
  }
  if (param_4 < (int)param_2) {
    param_4 = param_4 >> (bVar3 & 0x1f);
    uVar5 = 0;
  }
  else {
    param_4 = (int)param_2 >> (bVar3 & 0x1f);
    uVar5 = unaff_ESI[1] - 1 & param_2;
  }
  if ((int)uVar6 < 1) {
    if (*(char *)((int)unaff_ESI + 0x5b) != '\0') {
      unaff_ESI[0xb] = unaff_ESI[0xb] + -4;
      *(undefined1 *)((int)unaff_ESI + 0x5b) = 0;
    }
  }
  else {
    if (param_3 == param_4) goto LAB_006a3e1d;
    param_1 = param_1 + (int)((unaff_ESI[1] - uVar6) * iVar4) / iVar8;
    param_3 = param_3 + 1;
  }
  *(bool *)((int)unaff_ESI + 0x5b) = uVar5 == 0;
  if (*(char *)((int)unaff_ESI + 0x5a) != '\0') {
    *(int *)(unaff_ESI[0x17] + 0x14) = param_3;
    *(undefined1 *)((int)unaff_ESI + 0x5a) = 0;
  }
  iVar1 = (param_4 - param_3) + 1;
  uVar6 = unaff_ESI[0xb] + iVar1 * 4;
  if ((uint)unaff_ESI[10] <= uVar6) {
    unaff_ESI[0xc] = 0x62;
    return CONCAT31((int3)(uVar6 >> 8),1);
  }
  if (iVar4 < 1) {
    iVar2 = FUN_0068ea60(unaff_ESI[1],-iVar4,iVar8);
    iVar2 = -iVar2;
    iVar4 = -(unaff_ESI[1] * iVar4);
    local_4 = -1;
  }
  else {
    iVar2 = FUN_0068ea60(unaff_ESI[1],iVar4,iVar8);
    iVar4 = unaff_ESI[1] * iVar4;
    local_4 = 1;
  }
  piVar7 = (int *)unaff_ESI[0xb];
  param_2 = -iVar8;
  for (; 0 < iVar1; iVar1 = iVar1 + -1) {
    *piVar7 = param_1;
    param_1 = param_1 + iVar2;
    piVar7 = piVar7 + 1;
    param_2 = param_2 + iVar4 % iVar8;
    if (-1 < (int)param_2) {
      param_2 = param_2 - iVar8;
      param_1 = param_1 + local_4;
    }
  }
  unaff_ESI[0xb] = piVar7;
LAB_006a3e1d:
  return param_2 & 0xffffff00;
}


/* FUN_006a3e80 @ 006a3e80  kind=gamemisc  attributed-by=none  size=356 */

uint FUN_006a3e80(code *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *unaff_EDI;
  uint local_8;
  
  piVar5 = (int *)unaff_EDI[0xb];
  piVar1 = (int *)unaff_EDI[0xe];
  iVar3 = piVar1[in_EAX * 2 + 1];
  if (((int)param_2 <= piVar1[1]) && (iVar3 <= (int)param_3)) {
    uVar4 = -unaff_EDI[1] & piVar1[1];
    if ((int)param_3 < (int)uVar4) {
      uVar4 = param_3;
    }
    local_8 = param_2;
    if (((int)param_2 <= iVar3) &&
       (local_8 = unaff_EDI[1] + -1 + iVar3 & -unaff_EDI[1], param_2 = local_8,
       (ushort)((ushort)iVar3 & *(short *)(unaff_EDI + 1) - 1U) == 0)) {
      if (*(char *)((int)unaff_EDI + 0x5b) != '\0') {
        piVar5 = piVar5 + -1;
        *(undefined1 *)((int)unaff_EDI + 0x5b) = 0;
      }
      *piVar5 = piVar1[in_EAX * 2];
      piVar5 = piVar5 + 1;
      param_2 = local_8 + unaff_EDI[1];
    }
    if (*(char *)((int)unaff_EDI + 0x5a) != '\0') {
      *(int *)(unaff_EDI[0x17] + 0x14) = (int)local_8 >> ((byte)*unaff_EDI & 0x1f);
      *(undefined1 *)((int)unaff_EDI + 0x5a) = 0;
    }
    if ((int)param_2 <= (int)uVar4) {
      piVar6 = piVar1;
      if ((int *)unaff_EDI[10] <= piVar5 + ((int)(uVar4 - param_2) >> ((byte)*unaff_EDI & 0x1f)) + 1
         ) {
        unaff_EDI[0xb] = piVar5;
        unaff_EDI[0xc] = 0x62;
        return CONCAT31((int3)((uint)(in_EAX * 8) >> 8),1);
      }
      do {
        if ((int)uVar4 < (int)param_2) break;
        *(undefined1 *)((int)unaff_EDI + 0x5b) = 0;
        uVar2 = piVar6[1];
        if ((int)param_2 < (int)uVar2) {
          iVar3 = uVar2 - piVar6[in_EAX * 2 + 1];
          if (iVar3 < (int)unaff_EDI[5]) {
            piVar7 = piVar6 + in_EAX * -2;
            *piVar5 = (int)((*piVar6 - piVar6[in_EAX * 2]) * (param_2 - piVar6[in_EAX * 2 + 1])) /
                      iVar3 + piVar6[in_EAX * 2];
            param_2 = param_2 + unaff_EDI[1];
            piVar5 = piVar5 + 1;
          }
          else {
            (*param_1)(piVar6);
            piVar7 = piVar6 + in_EAX * 2;
          }
        }
        else {
          if (uVar2 == param_2) {
            *(undefined1 *)((int)unaff_EDI + 0x5b) = 1;
            *piVar5 = *piVar6;
            piVar5 = piVar5 + 1;
            param_2 = param_2 + unaff_EDI[1];
          }
          piVar7 = piVar6 + in_EAX * -2;
        }
        piVar6 = piVar7;
      } while (piVar1 <= piVar7);
    }
  }
  unaff_EDI[0xe] = unaff_EDI[0xe] + in_EAX * -8;
  unaff_EDI[0xb] = piVar5;
  return in_EAX * 8 & 0xffffff00;
}


/* FUN_006a3ff0 @ 006a3ff0  kind=gamemisc  attributed-by=none  size=102 */

void FUN_006a3ff0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(iVar2 + 4) = -*(int *)(iVar2 + 4);
  *(int *)(iVar2 + 0xc) = -*(int *)(iVar2 + 0xc);
  *(int *)(iVar2 + 0x14) = -*(int *)(iVar2 + 0x14);
  if (2 < in_EAX) {
    *(int *)(iVar2 + 0x1c) = -*(int *)(iVar2 + 0x1c);
  }
  cVar1 = *(char *)(param_1 + 0x5a);
  FUN_006a3e80(param_2,-in_ECX,-in_EDX);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x5a) == '\0')) {
    *(int *)(*(int *)(param_1 + 0x5c) + 0x14) = -*(int *)(*(int *)(param_1 + 0x5c) + 0x14);
  }
  *(int *)(iVar2 + 4) = -*(int *)(iVar2 + 4);
  return;
}


/* FUN_006a4060 @ 006a4060  kind=gamemisc  attributed-by=none  size=306 */

undefined4 FUN_006a4060(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x68);
  if (iVar1 == 0) {
    if ((param_2 <= *(int *)(unaff_EDI + 0x4c)) && (*(int *)(unaff_EDI + 0x4c) <= param_2))
    goto LAB_006a412f;
  }
  else {
    if (iVar1 == 1) {
      uVar2 = *(uint *)(unaff_EDI + 0x4c);
      if ((int)uVar2 <= param_2) goto LAB_006a412f;
      cVar3 = FUN_006a3a20(*(int *)(unaff_EDI + 8) <=
                           (int)(uVar2 - (-*(int *)(unaff_EDI + 4) & uVar2)));
    }
    else {
      if ((iVar1 != 2) || (iVar1 = *(int *)(unaff_EDI + 0x4c), param_2 <= iVar1)) goto LAB_006a412f;
      cVar3 = FUN_006a3a20(*(int *)(unaff_EDI + 8) <=
                           (*(int *)(unaff_EDI + 4) + -1 + iVar1 & -*(int *)(unaff_EDI + 4)) - iVar1
                          );
    }
    if (cVar3 != '\0') {
      return 1;
    }
  }
  cVar3 = FUN_006a3970();
  if (cVar3 != '\0') {
    return 1;
  }
LAB_006a412f:
  if (*(int *)(unaff_EDI + 0x68) == 1) {
    cVar3 = FUN_006a3cb0(*(undefined4 *)(unaff_EDI + 0x48),param_2,*(undefined4 *)(unaff_EDI + 0x50)
                         ,*(undefined4 *)(unaff_EDI + 0x54));
    if (cVar3 != '\0') {
      return 1;
    }
  }
  else if ((*(int *)(unaff_EDI + 0x68) == 2) && (cVar3 = FUN_006a3e30(), cVar3 != '\0')) {
    return 1;
  }
  *(int *)(unaff_EDI + 0x4c) = param_2;
  *(undefined4 *)(unaff_EDI + 0x48) = param_1;
  return 0;
}


/* FUN_006a41a0 @ 006a41a0  kind=gamemisc  attributed-by=none  size=338 */

undefined4 FUN_006a41a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  int in_EAX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  *(int *)(in_EAX + 0x38) = in_EAX + 0xbc;
  *(undefined4 *)(in_EAX + 0xcc) = *(undefined4 *)(in_EAX + 0x48);
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0x14) = *(undefined4 *)(in_EAX + 0x4c);
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 8) = param_1;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0xc) = param_2;
  **(undefined4 **)(in_EAX + 0x38) = param_3;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 4) = param_4;
  do {
    puVar2 = *(undefined4 **)(in_EAX + 0x38);
    uVar3 = puVar2[5];
    uVar4 = puVar2[1];
    uVar5 = *puVar2;
    uVar7 = uVar4;
    uVar9 = uVar3;
    if ((int)uVar3 <= (int)uVar4) {
      uVar7 = uVar3;
      uVar9 = uVar4;
    }
    if (((int)puVar2[3] < (int)uVar7) || ((int)uVar9 < (int)puVar2[3])) {
      FUN_006a3bc0(puVar2);
      *(int *)(in_EAX + 0x38) = *(int *)(in_EAX + 0x38) + 0x10;
    }
    else if (uVar3 == uVar4) {
      *(undefined4 **)(in_EAX + 0x38) = puVar2 + -4;
    }
    else {
      iVar1 = ((int)uVar4 <= (int)uVar3) + 1;
      if (*(int *)(in_EAX + 0x68) != iVar1) {
        iVar8 = *(int *)(in_EAX + 4);
        if (iVar1 == 1) {
          iVar8 = (iVar8 + -1 + uVar3 & -iVar8) - uVar3;
          bVar10 = SBORROW4(iVar8,*(int *)(in_EAX + 8));
          iVar8 = iVar8 - *(int *)(in_EAX + 8);
        }
        else {
          iVar8 = uVar3 - (-iVar8 & uVar3);
          bVar10 = SBORROW4(iVar8,*(int *)(in_EAX + 8));
          iVar8 = iVar8 - *(int *)(in_EAX + 8);
        }
        if ((*(int *)(in_EAX + 0x68) != 0) &&
           (cVar6 = FUN_006a3a20(bVar10 == iVar8 < 0), cVar6 != '\0')) {
          return 1;
        }
        cVar6 = FUN_006a3970();
        if (cVar6 != '\0') {
          return 1;
        }
      }
      if (iVar1 == 1) {
        cVar6 = FUN_006a3e80(FUN_006a3bc0,*(undefined4 *)(in_EAX + 0x50),
                             *(undefined4 *)(in_EAX + 0x54));
      }
      else {
        cVar6 = FUN_006a3ff0();
      }
      if (cVar6 != '\0') {
        return 1;
      }
    }
    if (*(uint *)(in_EAX + 0x38) < in_EAX + 0xbcU) {
      *(uint *)(in_EAX + 0x4c) = uVar4;
      *(undefined4 *)(in_EAX + 0x48) = uVar5;
      return 0;
    }
  } while( true );
}


/* FUN_006a4300 @ 006a4300  kind=gamemisc  attributed-by=none  size=392 */

undefined4
FUN_006a4300(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  *(int *)(in_EAX + 0x38) = in_EAX + 0xbc;
  *(undefined4 *)(in_EAX + 0xd4) = *(undefined4 *)(in_EAX + 0x48);
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0x1c) = *(undefined4 *)(in_EAX + 0x4c);
  *(uint *)(*(int *)(in_EAX + 0x38) + 0x10) = param_1;
  *(uint *)(*(int *)(in_EAX + 0x38) + 0x14) = param_2;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 8) = param_3;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0xc) = param_4;
  **(undefined4 **)(in_EAX + 0x38) = param_5;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 4) = param_6;
  do {
    puVar1 = *(undefined4 **)(in_EAX + 0x38);
    uVar2 = puVar1[7];
    uVar3 = puVar1[1];
    uVar4 = *puVar1;
    iVar5 = puVar1[5];
    iVar8 = puVar1[3];
    param_1 = uVar3;
    param_2 = uVar2;
    if ((int)uVar2 <= (int)uVar3) {
      param_1 = uVar2;
      param_2 = uVar3;
    }
    iVar7 = iVar5;
    if (iVar5 <= iVar8) {
      iVar7 = iVar8;
      iVar8 = iVar5;
    }
    if ((iVar8 < (int)param_1) || ((int)param_2 < iVar7)) {
      FUN_006a3c20(puVar1);
      *(int *)(in_EAX + 0x38) = *(int *)(in_EAX + 0x38) + 0x18;
    }
    else if (uVar2 == uVar3) {
      *(undefined4 **)(in_EAX + 0x38) = puVar1 + -6;
    }
    else {
      iVar5 = ((int)uVar3 < (int)uVar2) + 1;
      if (*(int *)(in_EAX + 0x68) != iVar5) {
        iVar8 = *(int *)(in_EAX + 4);
        if (iVar5 == 1) {
          iVar8 = (iVar8 + -1 + uVar2 & -iVar8) - uVar2;
          bVar9 = SBORROW4(iVar8,*(int *)(in_EAX + 8));
          iVar8 = iVar8 - *(int *)(in_EAX + 8);
        }
        else {
          iVar8 = uVar2 - (-iVar8 & uVar2);
          bVar9 = SBORROW4(iVar8,*(int *)(in_EAX + 8));
          iVar8 = iVar8 - *(int *)(in_EAX + 8);
        }
        if ((*(int *)(in_EAX + 0x68) != 0) &&
           (cVar6 = FUN_006a3a20(bVar9 == iVar8 < 0), cVar6 != '\0')) {
          return 1;
        }
        cVar6 = FUN_006a3970();
        if (cVar6 != '\0') {
          return 1;
        }
      }
      if (iVar5 == 1) {
        cVar6 = FUN_006a3e80(FUN_006a3c20,*(undefined4 *)(in_EAX + 0x50),
                             *(undefined4 *)(in_EAX + 0x54));
      }
      else {
        cVar6 = FUN_006a3ff0();
      }
      if (cVar6 != '\0') {
        return 1;
      }
    }
    if (*(uint *)(in_EAX + 0x38) < in_EAX + 0xbcU) {
      *(uint *)(in_EAX + 0x4c) = uVar3;
      *(undefined4 *)(in_EAX + 0x48) = uVar4;
      return 0;
    }
  } while( true );
}


/* FUN_006a4490 @ 006a4490  kind=gamemisc  attributed-by=none  size=847 */

undefined4 FUN_006a4490(uint param_1,uint param_2,int param_3)

{
  char cVar1;
  int in_EAX;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *local_1c;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar10 = *(int *)(in_EAX + 0x88);
  local_1c = (int *)(iVar10 + (param_2 & 0xffff) * 8);
  uVar3 = param_1 & 0xffff;
  piVar13 = (int *)(iVar10 + uVar3 * 8);
  iVar8 = *(int *)(in_EAX + 8);
  bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
  iVar12 = (*(int *)(iVar10 + uVar3 * 8) << (bVar2 & 0x1f)) - iVar8;
  local_c = (*(int *)(iVar10 + 4 + uVar3 * 8) << (bVar2 & 0x1f)) - iVar8;
  iVar4 = (*local_1c << (bVar2 & 0x1f)) - iVar8;
  iVar8 = (local_1c[1] << (bVar2 & 0x1f)) - iVar8;
  iVar10 = iVar4;
  local_10 = iVar12;
  if (param_3 != 0) {
    iVar10 = iVar8;
    iVar8 = iVar4;
    local_10 = local_c;
    local_c = iVar12;
  }
  pbVar6 = (byte *)(*(int *)(in_EAX + 0x8c) + (param_1 & 0xffff));
  if ((*pbVar6 & 4) != 0) {
    *(byte *)(in_EAX + 0xb8) = *pbVar6 >> 5;
  }
  if ((*pbVar6 & 3) != 2) {
    if ((*pbVar6 & 3) == 0) {
      if ((*(byte *)(*(int *)(in_EAX + 0x8c) + (param_2 & 0xffff)) & 3) == 1) {
        local_1c = local_1c + -2;
        local_10 = iVar10;
        local_c = iVar8;
      }
      else {
        local_10 = (iVar10 + local_10) / 2;
        local_c = (local_c + iVar8) / 2;
      }
      piVar13 = piVar13 + -2;
      pbVar6 = pbVar6 + -1;
    }
    *(int *)(in_EAX + 0x48) = local_10;
    *(int *)(in_EAX + 0x4c) = local_c;
    do {
      if (local_1c <= piVar13) {
        cVar1 = FUN_006a4060(local_10,local_c);
joined_r0x006a47b1:
        if (cVar1 != '\0') {
          return 1;
        }
        return 0;
      }
      pbVar7 = pbVar6 + 1;
      piVar14 = piVar13 + 2;
      if ((pbVar6[1] & 3) == 0) {
        bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
        iVar10 = (*piVar14 << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
        local_8 = (piVar13[3] << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
        local_4 = iVar10;
        if (param_3 == 0) goto LAB_006a46c0;
        while( true ) {
          iVar10 = local_8;
          local_8 = local_4;
LAB_006a46c0:
          local_4 = local_8;
          local_8 = iVar10;
          if (local_1c <= piVar14) {
            cVar1 = FUN_006a41a0(local_8,local_4,local_10,local_c);
            goto joined_r0x006a47b1;
          }
          pbVar6 = pbVar7 + 1;
          piVar13 = piVar14 + 3;
          pbVar7 = pbVar7 + 1;
          piVar14 = piVar14 + 2;
          bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
          iVar4 = (*piVar14 << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
          iVar8 = (*piVar13 << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
          iVar10 = iVar4;
          if (param_3 != 0) {
            iVar10 = iVar8;
            iVar8 = iVar4;
          }
          if ((*pbVar6 & 3) == 1) break;
          if ((*pbVar6 & 3) != 0) goto LAB_006a47bd;
          cVar1 = FUN_006a41a0(local_8,local_4,(iVar10 + local_8) / 2,(local_4 + iVar8) / 2);
          local_8 = iVar10;
          local_4 = iVar8;
          if (cVar1 != '\0') {
            return 1;
          }
        }
        cVar1 = FUN_006a41a0(local_8,local_4,iVar10,iVar8);
        piVar13 = piVar14;
        pbVar6 = pbVar7;
      }
      else if ((pbVar6[1] & 3) == 1) {
        bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
        iVar4 = (*piVar14 << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
        iVar8 = (piVar13[3] << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
        iVar10 = iVar4;
        if (param_3 != 0) {
          iVar10 = iVar8;
          iVar8 = iVar4;
        }
        cVar1 = FUN_006a4060(iVar10,iVar8);
        piVar13 = piVar14;
        pbVar6 = pbVar7;
      }
      else {
        if ((local_1c < piVar13 + 4) || ((pbVar6[2] & 3) != 2)) break;
        iVar10 = *(int *)(in_EAX + 8);
        piVar14 = piVar13 + 6;
        bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
        iVar9 = (piVar13[4] << (bVar2 & 0x1f)) - iVar10;
        param_2 = (piVar13[5] << (bVar2 & 0x1f)) - iVar10;
        iVar5 = (piVar13[2] << (bVar2 & 0x1f)) - iVar10;
        iVar12 = (piVar13[3] << (bVar2 & 0x1f)) - iVar10;
        local_18 = (*piVar14 << (bVar2 & 0x1f)) - iVar10;
        iVar10 = (piVar13[7] << (bVar2 & 0x1f)) - iVar10;
        iVar8 = iVar9;
        iVar4 = iVar5;
        iVar11 = iVar10;
        if (param_3 != 0) {
          iVar8 = param_2;
          iVar4 = iVar12;
          iVar12 = iVar5;
          iVar11 = local_18;
          param_2 = iVar9;
          local_18 = iVar10;
        }
        if (local_1c < piVar14) {
          cVar1 = FUN_006a4300(iVar4,iVar12,iVar8,param_2,local_10,local_c);
          goto joined_r0x006a47b1;
        }
        cVar1 = FUN_006a4300(iVar4,iVar12,iVar8,param_2,local_18,iVar11);
        piVar13 = piVar14;
        pbVar6 = pbVar6 + 3;
      }
      if (cVar1 != '\0') {
        return 1;
      }
    } while( true );
  }
LAB_006a47bd:
  *(undefined4 *)(in_EAX + 0x30) = 0x14;
  return 1;
}


/* FUN_006a47f0 @ 006a47f0  kind=gamemisc  attributed-by=none  size=283 */

bool FUN_006a47f0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  bool bVar7;
  
  *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x24) + -0x20;
  iVar5 = *(int *)(unaff_ESI + 0x2c);
  *(int *)(unaff_ESI + 0x5c) = iVar5;
  *(undefined4 *)(unaff_ESI + 0x60) = 0;
  *(undefined2 *)(unaff_ESI + 0x5a) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(int *)(iVar5 + 8) = iVar5;
  iVar6 = 0;
  iVar5 = 0;
  *(undefined2 *)(unaff_ESI + 0x58) = 0;
  if (0 < *(short *)(unaff_ESI + 0x84)) {
    do {
      *(undefined4 *)(unaff_ESI + 0x68) = 0;
      *(undefined4 *)(unaff_ESI + 100) = 0;
      cVar3 = FUN_006a4490(iVar6,*(undefined2 *)(*(int *)(unaff_ESI + 0x90) + iVar5 * 2),param_1);
      if (cVar3 != '\0') {
        return true;
      }
      iVar4 = *(int *)(unaff_ESI + 4);
      uVar1 = *(uint *)(unaff_ESI + 0x4c);
      iVar6 = *(short *)(*(int *)(unaff_ESI + 0x90) + iVar5 * 2) + 1;
      if (((((uVar1 & iVar4 - 1U) == 0) && (*(int *)(unaff_ESI + 0x50) <= (int)uVar1)) &&
          ((int)uVar1 <= *(int *)(unaff_ESI + 0x54))) &&
         ((*(int *)(unaff_ESI + 100) != 0 &&
          (((*(uint *)(*(int *)(unaff_ESI + 0x5c) + 0xc) ^
            *(uint *)(*(int *)(unaff_ESI + 100) + 0xc)) & 8) == 0)))) {
        *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) + -4;
      }
      iVar2 = *(int *)(unaff_ESI + 0x5c);
      if ((*(byte *)(iVar2 + 0xc) & 8) == 0) {
        iVar4 = ((uVar1 - 1) + iVar4 & -iVar4) - uVar1;
        bVar7 = SBORROW4(iVar4,*(int *)(unaff_ESI + 8));
        iVar4 = iVar4 - *(int *)(unaff_ESI + 8);
      }
      else {
        iVar4 = uVar1 - (-iVar4 & uVar1);
        bVar7 = SBORROW4(iVar4,*(int *)(unaff_ESI + 8));
        iVar4 = iVar4 - *(int *)(unaff_ESI + 8);
      }
      cVar3 = FUN_006a3a20(bVar7 == iVar4 < 0);
      if (cVar3 != '\0') {
        return true;
      }
      if (*(int *)(unaff_ESI + 100) != 0) {
        *(int *)(iVar2 + 0x1c) = *(int *)(unaff_ESI + 100);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(short *)(unaff_ESI + 0x84));
  }
  cVar3 = FUN_006a3b10();
  if (cVar3 != '\0') {
    return true;
  }
  return *(uint *)(unaff_ESI + 0x28) <= *(uint *)(unaff_ESI + 0x2c);
}


/* FUN_006a4920 @ 006a4920  kind=gamemisc  attributed-by=none  size=36 */

void FUN_006a4920(void)

{
  int *piVar1;
  int *in_ECX;
  int *in_EDX;
  
  piVar1 = (int *)*in_ECX;
  while ((piVar1 != (int *)0x0 && (*piVar1 <= *in_EDX))) {
    in_ECX = piVar1 + 1;
    piVar1 = (int *)*in_ECX;
  }
  in_EDX[1] = (int)piVar1;
  *in_ECX = (int)in_EDX;
  return;
}


/* FUN_006a4950 @ 006a4950  kind=gamemisc  attributed-by=none  size=26 */

void FUN_006a4950(void)

{
  int iVar1;
  int *in_ECX;
  int in_EDX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    while (iVar1 != in_EDX) {
      in_ECX = (int *)(iVar1 + 4);
      iVar1 = *in_ECX;
      if (iVar1 == 0) {
        return;
      }
    }
    *in_ECX = *(int *)(iVar1 + 4);
  }
  return;
}


/* FUN_006a4970 @ 006a4970  kind=gamemisc  attributed-by=none  size=115 */

void FUN_006a4970(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *unaff_EDI;
  
  for (puVar1 = (undefined4 *)*unaff_EDI; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[1]) {
    *puVar1 = *(undefined4 *)puVar1[2];
    puVar1[4] = puVar1[4] + -1;
    puVar1[2] = (undefined4 *)puVar1[2] + (uint)((*(byte *)(puVar1 + 3) & 8) != 0) * 2 + -1;
  }
  piVar4 = (int *)*unaff_EDI;
  if (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[1];
    piVar3 = unaff_EDI;
    while (piVar2 != (int *)0x0) {
      piVar5 = piVar4 + 1;
      if (*piVar2 < *piVar4) {
        *piVar3 = (int)piVar2;
        *piVar5 = piVar2[1];
        piVar2[1] = (int)piVar4;
        piVar4 = (int *)*unaff_EDI;
        piVar5 = unaff_EDI;
      }
      else {
        piVar4 = (int *)*piVar5;
        if (piVar4 == (int *)0x0) {
          return;
        }
      }
      piVar3 = piVar5;
      piVar2 = (int *)piVar4[1];
    }
  }
  return;
}


/* FUN_006a4eb0 @ 006a4eb0  kind=gamemisc  attributed-by=none  size=789 */

undefined4 FUN_006a4eb0(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *local_28;
  uint *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint *puStack_14;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  uint uStack_4;
  
  FUN_006a4910();
  FUN_006a4910();
  FUN_006a4910();
  local_18 = (int)param_1[0x14] >> ((byte)*param_1 & 0x1f) & 0xffff;
  local_1c = (int)param_1[0x15] >> ((byte)*param_1 & 0x1f) & 0xffff;
  puVar6 = (undefined4 *)param_1[0x18];
  while (puVar6 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar6[1];
    uVar8 = (*(short *)(puVar6 + 4) + *(short *)(puVar6 + 5)) - 1;
    bVar5 = (short)*(ushort *)(puVar6 + 5) < (short)local_1c;
    if (bVar5) {
      local_1c = (uint)*(ushort *)(puVar6 + 5);
    }
    bVar5 = (short)local_18 < (short)uVar8;
    if (bVar5) {
      local_18 = (uint)uVar8;
    }
    *puVar6 = 0;
    FUN_006a4920();
    puVar6 = puVar3;
  }
  if (param_1[0xd] == 0) {
    param_1[0xc] = 0x14;
    return 1;
  }
  (*(code *)param_1[0x2a])(param_1,&local_1c,&local_18);
  for (iVar10 = local_20; iVar10 != 0; iVar10 = *(int *)(iVar10 + 4)) {
    *(uint *)(iVar10 + 0x18) = (uint)(ushort)(*(short *)(iVar10 + 0x14) - (short)local_1c);
  }
  iVar10 = param_1[0xd];
  uStack_10 = local_1c & 0xffff;
  if ((0 < iVar10) && (*(int *)(param_1[9] + iVar10 * -4) == (int)(short)local_1c)) {
    param_1[0xd] = iVar10 + -1;
  }
  iVar10 = param_1[0xd];
  uVar13 = uStack_10;
  uVar11 = 0;
  while (0 < iVar10) {
    if (local_20 != 0) {
      iVar10 = local_20;
      do {
        piVar1 = (int *)(iVar10 + 0x18);
        *piVar1 = *piVar1 - (int)(short)uVar11;
        iVar10 = *(int *)(iVar10 + 4);
        if (*piVar1 == 0) {
          FUN_006a4950();
          FUN_006a4920();
        }
      } while (iVar10 != 0);
    }
    FUN_006a4970();
    FUN_006a4970();
    uVar8 = *(ushort *)(param_1[9] + param_1[0xd] * -4);
    uStack_4 = (uint)uVar8;
    param_1[0xd] = param_1[0xd] + -1;
    uStack_8 = uStack_4 - uVar13 & 0xffff;
    puVar4 = local_28;
    if ((short)uVar13 < (short)uVar8) {
      while( true ) {
        iStack_c = 0;
        puStack_14 = local_24;
        puVar14 = local_28;
        if (local_28 != (uint *)0x0) {
          do {
            uVar13 = uStack_10;
            uVar11 = *puVar14;
            uVar9 = *puStack_14;
            uVar7 = uVar11;
            if ((int)uVar9 < (int)uVar11) {
              uVar7 = uVar9;
              uVar9 = uVar11;
            }
            iVar10 = param_1[1];
            uVar11 = iVar10 + -1 + uVar9 & -iVar10;
            uVar12 = -iVar10 & uVar7;
            if ((((iVar10 < (int)(uVar9 - uVar7)) || (uVar12 == uVar7)) || (uVar11 == uVar9)) ||
               (((int)uVar12 <= (int)uVar11 && (uVar11 != iVar10 + uVar12)))) {
              (*(code *)param_1[0x2b])(param_1,uStack_10,uVar7,uVar9,puVar14,puStack_14);
            }
            else if (((byte)puVar14[3] & 7) != 2) {
              *puVar14 = uVar7;
              *puStack_14 = uVar9;
              iStack_c = iStack_c + 1;
              puVar14[6] = 1;
            }
            puVar15 = puVar14 + 1;
            puStack_14 = (uint *)puStack_14[1];
            puVar14 = (uint *)*puVar15;
          } while ((uint *)*puVar15 != (uint *)0x0);
          puVar14 = local_28;
          puVar15 = local_24;
          if (0 < (short)iStack_c) {
            do {
              if (puVar14[6] != 0) {
                puVar14[6] = 0;
                (*(code *)param_1[0x2c])(param_1,uVar13,*puVar14,*puVar15,puVar14,puVar15);
              }
              puVar2 = puVar14 + 1;
              puVar14 = (uint *)*puVar2;
              puVar15 = (uint *)puVar15[1];
            } while ((uint *)*puVar2 != (uint *)0x0);
          }
        }
        (*(code *)param_1[0x2d])(param_1);
        uVar13 = uVar13 + 1;
        uStack_10 = uVar13;
        if ((short)uStack_4 <= (short)uVar13) break;
        FUN_006a4970();
        FUN_006a4970();
      }
    }
    while (puVar14 = local_24, puVar4 != (uint *)0x0) {
      puVar14 = puVar4 + 4;
      puVar4 = (uint *)puVar4[1];
      if (*puVar14 == 0) {
        FUN_006a4950();
      }
    }
    while (puVar14 != (uint *)0x0) {
      puVar4 = puVar14 + 4;
      puVar14 = (uint *)puVar14[1];
      if (*puVar4 == 0) {
        FUN_006a4950();
      }
    }
    uVar11 = uStack_8;
    iVar10 = param_1[0xd];
  }
  if ((short)uVar13 <= (short)local_18) {
    do {
      (*(code *)param_1[0x2d])(param_1);
      uVar13 = uVar13 + 1;
    } while ((short)uVar13 <= (short)local_18);
  }
  return 0;
}


/* FUN_006a51d0 @ 006a51d0  kind=gamemisc  attributed-by=none  size=272 */

undefined4 FUN_006a51d0(char param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  int in_EAX;
  
  iVar3 = *(int *)(in_EAX + 0x404);
  do {
    if (iVar3 < 0) {
      return 0;
    }
    *(int *)(in_EAX + 0x54) =
         (int)*(short *)(in_EAX + 0x3c6 + *(int *)(in_EAX + 0x404) * 4) * *(int *)(in_EAX + 4);
    *(int *)(in_EAX + 0x50) =
         (int)*(short *)(in_EAX + 0x3c4 + *(int *)(in_EAX + 0x404) * 4) * *(int *)(in_EAX + 4);
    *(undefined4 *)(in_EAX + 0x2c) = *(undefined4 *)(in_EAX + 0x20);
    *(undefined4 *)(in_EAX + 0x30) = 0;
    cVar5 = FUN_006a47f0((int)param_1);
    if (cVar5 == '\0') {
      if ((*(int *)(in_EAX + 0x60) != 0) && (cVar5 = FUN_006a4eb0(), cVar5 != '\0')) {
        return *(undefined4 *)(in_EAX + 0x30);
      }
      *(int *)(in_EAX + 0x404) = *(int *)(in_EAX + 0x404) + -1;
    }
    else {
      if (*(int *)(in_EAX + 0x30) != 0x62) {
        return 1;
      }
      iVar3 = *(int *)(in_EAX + 0x404);
      *(undefined4 *)(in_EAX + 0x30) = 0;
      sVar1 = *(short *)(in_EAX + 0x3c4 + iVar3 * 4);
      sVar2 = *(short *)(in_EAX + 0x3c6 + iVar3 * 4);
      sVar4 = (short)(((int)sVar2 + (int)sVar1) / 2);
      if ((6 < iVar3) || (sVar4 < sVar1)) {
        *(undefined4 *)(in_EAX + 0x404) = 0;
        *(undefined4 *)(in_EAX + 0x30) = 0x14;
        return 0x14;
      }
      *(short *)(in_EAX + 0x3c8 + iVar3 * 4) = sVar4;
      *(short *)(in_EAX + 0x3ca + *(int *)(in_EAX + 0x404) * 4) = sVar2;
      *(short *)(in_EAX + 0x3c6 + *(int *)(in_EAX + 0x404) * 4) = sVar4 + -1;
      *(int *)(in_EAX + 0x404) = *(int *)(in_EAX + 0x404) + 1;
    }
    iVar3 = *(int *)(in_EAX + 0x404);
  } while( true );
}


/* FUN_006a52f0 @ 006a52f0  kind=gamemisc  attributed-by=none  size=296 */

int FUN_006a52f0(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  
  FUN_006a3910(*(uint *)(in_EAX + 0x94) & 0x100);
  uVar1 = *(uint *)(in_EAX + 0x94);
  *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(in_EAX + 0x10);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x10) == 0) {
      *(undefined1 *)(in_EAX + 0xb8) = 0;
    }
    else {
      *(undefined1 *)(in_EAX + 0xb8) = 4;
    }
    if ((uVar1 & 0x20) == 0) {
      *(char *)(in_EAX + 0xb8) = *(char *)(in_EAX + 0xb8) + '\x01';
    }
  }
  else {
    *(undefined1 *)(in_EAX + 0xb8) = 2;
  }
  *(byte *)(in_EAX + 0xb9) = ~(byte)(uVar1 >> 9) & 1;
  *(undefined2 *)(in_EAX + 0x3c4) = 0;
  *(short *)(in_EAX + 0x3c6) = *(short *)(in_EAX + 0x6c) + -1;
  *(undefined1 **)(in_EAX + 0xa8) = &LAB_006a49f0;
  *(code **)(in_EAX + 0xac) = FUN_006a4a40;
  *(undefined **)(in_EAX + 0xb0) = &DAT_006a4b20;
  *(undefined1 **)(in_EAX + 0xb4) = &LAB_006a4ca0;
  *(undefined4 *)(in_EAX + 0x404) = 0;
  *(undefined2 *)(in_EAX + 0x3c) = *(undefined2 *)(in_EAX + 0x70);
  *(undefined4 *)(in_EAX + 0x40) = *(undefined4 *)(in_EAX + 0x78);
  iVar2 = FUN_006a51d0(0);
  if (iVar2 == 0) {
    if ((*(char *)(in_EAX + 0xb9) != '\0') && (*(char *)(in_EAX + 0xb8) != '\x02')) {
      *(undefined4 *)(in_EAX + 0x404) = 0;
      *(undefined2 *)(in_EAX + 0x3c4) = 0;
      *(code **)(in_EAX + 0xa8) = cube::Controller::vfunction12;
      *(undefined1 **)(in_EAX + 0xac) = &LAB_006a4cc0;
      *(undefined **)(in_EAX + 0xb0) = &DAT_006a4d30;
      *(code **)(in_EAX + 0xb4) = cube::Controller::vfunction12;
      *(short *)(in_EAX + 0x3c6) = *(short *)(in_EAX + 0x70) + -1;
      iVar2 = FUN_006a51d0(1);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}


/* FUN_006a58c0 @ 006a58c0  kind=gamemisc  attributed-by=none  size=63 */

void FUN_006a58c0(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_EDX;
  uint uVar2;
  int unaff_EDI;
  int local_4;
  
  local_4 = 0;
  if (*(uint *)(unaff_EDI + 4) < in_EDX) {
    uVar2 = in_EDX + 7 & 0xfffffff8;
    uVar1 = FUN_00693a60(param_1,0xc,*(uint *)(unaff_EDI + 4),uVar2,*(undefined4 *)(unaff_EDI + 8),
                         &local_4);
    *(undefined4 *)(unaff_EDI + 8) = uVar1;
    if (local_4 == 0) {
      *(uint *)(unaff_EDI + 4) = uVar2;
    }
  }
  return;
}


/* FUN_006a5900 @ 006a5900  kind=gamemisc  attributed-by=none  size=77 */

int FUN_006a5900(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint *in_EAX;
  int iVar2;
  uint uVar3;
  
  uVar3 = *in_EAX + 1;
  if (in_EAX[1] <= uVar3) {
    iVar2 = FUN_006a58c0(param_1);
    if (iVar2 != 0) {
      *param_2 = 0;
      return iVar2;
    }
  }
  puVar1 = (undefined4 *)((in_EAX[2] - 0xc) + uVar3 * 0xc);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *in_EAX = uVar3;
  *param_2 = puVar1;
  return 0;
}


/* FUN_006a5970 @ 006a5970  kind=gamemisc  attributed-by=none  size=82 */

void FUN_006a5970(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int in_EDX;
  uint uVar3;
  int unaff_EDI;
  int local_4;
  
  uVar2 = *(int *)(unaff_EDI + 4) + 7U >> 3;
  uVar3 = in_EDX + 7U >> 3;
  local_4 = 0;
  if (uVar2 < uVar3) {
    uVar3 = uVar3 + 7 & 0xfffffff8;
    uVar1 = FUN_00693a60(param_1,1,uVar2,uVar3,*(undefined4 *)(unaff_EDI + 8),&local_4);
    *(undefined4 *)(unaff_EDI + 8) = uVar1;
    if (local_4 == 0) {
      *(uint *)(unaff_EDI + 4) = uVar3 * 8;
    }
  }
  return;
}


/* FUN_006a59d0 @ 006a59d0  kind=gamemisc  attributed-by=none  size=32 */

uint FUN_006a59d0(void)

{
  uint *in_EAX;
  uint in_ECX;
  
  if (*in_EAX <= in_ECX) {
    return 0;
  }
  return (uint)*(byte *)(in_EAX[2] + ((int)in_ECX >> 3)) & 0x80 >> ((byte)in_ECX & 7);
}


/* FUN_006a5a10 @ 006a5a10  kind=gamemisc  attributed-by=none  size=70 */

int FUN_006a5a10(void)

{
  int iVar1;
  uint *in_ECX;
  byte *pbVar2;
  uint unaff_EBX;
  
  if ((int)unaff_EBX < 0) {
    return 0;
  }
  if (*in_ECX <= unaff_EBX) {
    iVar1 = FUN_006a5970();
    if (iVar1 != 0) {
      return iVar1;
    }
    *in_ECX = unaff_EBX + 1;
  }
  pbVar2 = (byte *)(((int)unaff_EBX >> 3) + in_ECX[2]);
  *pbVar2 = *pbVar2 | (byte)(0x80 >> ((byte)unaff_EBX & 7));
  return 0;
}


/* FUN_006a5a60 @ 006a5a60  kind=gamemisc  attributed-by=none  size=57 */

void FUN_006a5a60(undefined4 param_1)

{
  undefined4 *unaff_EBX;
  int iVar1;
  
  for (iVar1 = unaff_EBX[1]; iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_006a5950();
  }
  FUN_00691290(param_1,unaff_EBX[2]);
  unaff_EBX[2] = 0;
  *unaff_EBX = 0;
  unaff_EBX[1] = 0;
  return;
}


/* FUN_006a5aa0 @ 006a5aa0  kind=gamemisc  attributed-by=none  size=63 */

void FUN_006a5aa0(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_EDX;
  uint uVar2;
  int unaff_EDI;
  int local_4;
  
  local_4 = 0;
  if (*(uint *)(unaff_EDI + 4) < in_EDX) {
    uVar2 = in_EDX + 7 & 0xfffffff8;
    uVar1 = FUN_00693a60(param_1,0x10,*(uint *)(unaff_EDI + 4),uVar2,*(undefined4 *)(unaff_EDI + 8),
                         &local_4);
    *(undefined4 *)(unaff_EDI + 8) = uVar1;
    if (local_4 == 0) {
      *(uint *)(unaff_EDI + 4) = uVar2;
    }
  }
  return;
}


