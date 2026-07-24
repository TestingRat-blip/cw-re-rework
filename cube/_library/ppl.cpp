// ppl (_library) -- cube. 41 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "ppl.h"

/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>::~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_> @ 0066cd60  kind=lib  attributed-by=rtti-lib-ns  size=774 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
           *this,undefined4 param_1,uint param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  exception eVar7;
  undefined8 *puVar8;
  char *pcVar9;
  uint local_90;
  missing_wait local_80 [3];
  char *local_74;
  int local_70;
  _StructuredTaskCollection local_6c [4];
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
  local_4c;
  undefined4 *local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  int *piStack_38;
  undefined4 local_34;
  exception eStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 *local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7e30;
  local_10 = ExceptionList;
  local_90 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*param_3 != 1) {
    param_2 = (int)(param_2 - 1) / *param_3 + 1;
  }
  local_40 = param_2;
  local_14 = local_90;
  local_20 = (char *)Concurrency::details::_CurrentScheduler::_GetNumberOfVirtualProcessors();
  local_4c.vftablePtr = &vftable;
  local_48 = (undefined4 *)0x0;
  local_44 = 0;
  uVar4 = (int)local_20 * 0x2c + 8;
  local_8 = 0;
  if (uVar4 < 0x401) {
    puVar3 = &local_90;
    local_24 = &local_90;
    if (&stack0x00000000 == (undefined1 *)0x90) goto LAB_0066ce17;
    local_90 = 0xcccc;
  }
  else {
    puVar3 = malloc(uVar4);
    local_24 = puVar3;
    if (puVar3 == (undefined4 *)0x0) goto LAB_0066ce17;
    *puVar3 = 0xdddd;
  }
  local_24 = puVar3 + 2;
  if (local_24 != (undefined4 *)0x0) {
    local_5c = 0;
    local_18 = 0;
    local_54 = 0;
    local_58 = 0x80000000;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    }
    local_60 = 0;
    local_68 = 0x1fffffff;
    local_64 = 0;
    local_70 = (int)param_2 / (int)local_20;
    local_1c = (char *)((int)param_2 % (int)local_20);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_70 == 0) {
      local_20 = local_1c;
    }
    local_20 = local_20 + -1;
    eVar7 = (exception)0x0;
    pcVar9 = (char *)0x0;
    local_48 = local_24;
    if (0 < (int)local_20) {
      puVar8 = (undefined8 *)(puVar3 + 7);
      iVar5 = 0;
      local_74 = local_20;
      do {
        iVar6 = local_70;
        if (0 < (int)local_1c) {
          local_1c = local_1c + -1;
          iVar6 = local_70 + 1;
        }
        local_18 = iVar6;
        if (puVar8 != (undefined8 *)0x14) {
          local_3c = param_1;
          piStack_38 = param_3;
          *puVar8 = CONCAT44(param_3,param_1);
          local_34 = param_4;
          eStack_30 = eVar7;
          puVar8[1] = CONCAT44(eVar7,param_4);
          uStack_28 = 0;
          local_2c = (int)eVar7 + iVar6;
          *(undefined4 *)((int)puVar8 + -0xc) = 0;
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
                        */
          *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
            **)((int)puVar8 + -0x14) =
               &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
                ::vftable;
          puVar8[2] = (ulonglong)(uint)((int)eVar7 + iVar6);
          *(code **)(puVar8 + -2) = FUN_0066cd10;
        }
        iVar5 = iVar5 + 1;
        local_44 = iVar5;
        *(undefined1 *)((int)puVar8 + -4) = 0;
        Concurrency::details::_StructuredTaskCollection::_Schedule
                  (local_6c,(_UnrealizedChore *)((int)puVar8 + -0x14));
        eVar7 = (exception)((int)eVar7 + local_18);
        puVar8 = (undefined8 *)((int)puVar8 + 0x2c);
        local_20 = local_20 + -1;
      } while (local_20 != (char *)0x0);
      local_20 = (char *)0x0;
      pcVar9 = local_74;
      local_18 = iVar5;
    }
    uVar4 = local_40;
    puVar1 = local_24 + (int)pcVar9 * 0xb;
    if (puVar1 != (undefined4 *)0x0) {
      local_3c = param_1;
      piStack_38 = param_3;
      *(ulonglong *)(puVar1 + 5) = CONCAT44(param_3,param_1);
      local_34 = param_4;
      eStack_30 = eVar7;
      *(ulonglong *)(puVar1 + 7) = CONCAT44(eVar7,param_4);
      local_2c = uVar4;
      uStack_28 = 0;
      puVar1[2] = 0;
      *puVar1 = &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
                 ::vftable;
      *(ulonglong *)(puVar1 + 9) = (ulonglong)uVar4;
      puVar1[1] = FUN_0066cd10;
    }
    local_44 = local_18 + 1;
    Concurrency::details::_StructuredTaskCollection::_RunAndWait((_UnrealizedChore *)local_6c);
    local_8 = local_8 & 0xffffff00;
    if (0 < local_5c) {
      Concurrency::details::_StructuredTaskCollection::_Abort(local_6c);
      cVar2 = __uncaught_exception();
      if (cVar2 == '\0') {
        if ((local_64 != 0) && (local_64 != 2)) {
          Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_6c);
        }
        Concurrency::missing_wait::missing_wait(local_80);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_80,(ThrowInfo *)&DAT_0075f3d8);
      }
    }
    if ((local_64 != 0) && (local_64 != 2)) {
      Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_6c);
    }
    local_8 = 0xffffffff;
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
              (&local_4c);
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_0066ce17:
  local_1c = "bad allocation";
  std::exception::exception(&eStack_30,&local_1c,1);
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
  eStack_30 = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&eStack_30,(ThrowInfo *)&DAT_0075f410);
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>::~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_> @ 0066d070  kind=lib  attributed-by=rtti-lib-ns  size=774 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
           *this,undefined4 param_1,uint param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  exception eVar7;
  undefined8 *puVar8;
  char *pcVar9;
  uint local_90;
  missing_wait local_80 [3];
  char *local_74;
  int local_70;
  _StructuredTaskCollection local_6c [4];
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
  local_4c;
  undefined4 *local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  int *piStack_38;
  undefined4 local_34;
  exception eStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 *local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7e70;
  local_10 = ExceptionList;
  local_90 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*param_3 != 1) {
    param_2 = (int)(param_2 - 1) / *param_3 + 1;
  }
  local_40 = param_2;
  local_14 = local_90;
  local_20 = (char *)Concurrency::details::_CurrentScheduler::_GetNumberOfVirtualProcessors();
  local_4c.vftablePtr = &vftable;
  local_48 = (undefined4 *)0x0;
  local_44 = 0;
  uVar4 = (int)local_20 * 0x2c + 8;
  local_8 = 0;
  if (uVar4 < 0x401) {
    puVar3 = &local_90;
    local_24 = &local_90;
    if (&stack0x00000000 == (undefined1 *)0x90) goto LAB_0066d127;
    local_90 = 0xcccc;
  }
  else {
    puVar3 = malloc(uVar4);
    local_24 = puVar3;
    if (puVar3 == (undefined4 *)0x0) goto LAB_0066d127;
    *puVar3 = 0xdddd;
  }
  local_24 = puVar3 + 2;
  if (local_24 != (undefined4 *)0x0) {
    local_5c = 0;
    local_18 = 0;
    local_54 = 0;
    local_58 = 0x80000000;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    }
    local_60 = 0;
    local_68 = 0x1fffffff;
    local_64 = 0;
    local_70 = (int)param_2 / (int)local_20;
    local_1c = (char *)((int)param_2 % (int)local_20);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_70 == 0) {
      local_20 = local_1c;
    }
    local_20 = local_20 + -1;
    eVar7 = (exception)0x0;
    pcVar9 = (char *)0x0;
    local_48 = local_24;
    if (0 < (int)local_20) {
      puVar8 = (undefined8 *)(puVar3 + 7);
      iVar5 = 0;
      local_74 = local_20;
      do {
        iVar6 = local_70;
        if (0 < (int)local_1c) {
          local_1c = local_1c + -1;
          iVar6 = local_70 + 1;
        }
        local_18 = iVar6;
        if (puVar8 != (undefined8 *)0x14) {
          local_3c = param_1;
          piStack_38 = param_3;
          *puVar8 = CONCAT44(param_3,param_1);
          local_34 = param_4;
          eStack_30 = eVar7;
          puVar8[1] = CONCAT44(eVar7,param_4);
          uStack_28 = 0;
          local_2c = (int)eVar7 + iVar6;
          *(undefined4 *)((int)puVar8 + -0xc) = 0;
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
                        */
          *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
            **)((int)puVar8 + -0x14) =
               &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
                ::vftable;
          puVar8[2] = (ulonglong)(uint)((int)eVar7 + iVar6);
          *(code **)(puVar8 + -2) = FUN_0066cd20;
        }
        iVar5 = iVar5 + 1;
        local_44 = iVar5;
        *(undefined1 *)((int)puVar8 + -4) = 0;
        Concurrency::details::_StructuredTaskCollection::_Schedule
                  (local_6c,(_UnrealizedChore *)((int)puVar8 + -0x14));
        eVar7 = (exception)((int)eVar7 + local_18);
        puVar8 = (undefined8 *)((int)puVar8 + 0x2c);
        local_20 = local_20 + -1;
      } while (local_20 != (char *)0x0);
      local_20 = (char *)0x0;
      pcVar9 = local_74;
      local_18 = iVar5;
    }
    uVar4 = local_40;
    puVar1 = local_24 + (int)pcVar9 * 0xb;
    if (puVar1 != (undefined4 *)0x0) {
      local_3c = param_1;
      piStack_38 = param_3;
      *(ulonglong *)(puVar1 + 5) = CONCAT44(param_3,param_1);
      local_34 = param_4;
      eStack_30 = eVar7;
      *(ulonglong *)(puVar1 + 7) = CONCAT44(eVar7,param_4);
      local_2c = uVar4;
      uStack_28 = 0;
      puVar1[2] = 0;
      *puVar1 = &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
                 ::vftable;
      *(ulonglong *)(puVar1 + 9) = (ulonglong)uVar4;
      puVar1[1] = FUN_0066cd20;
    }
    local_44 = local_18 + 1;
    Concurrency::details::_StructuredTaskCollection::_RunAndWait((_UnrealizedChore *)local_6c);
    local_8 = local_8 & 0xffffff00;
    if (0 < local_5c) {
      Concurrency::details::_StructuredTaskCollection::_Abort(local_6c);
      cVar2 = __uncaught_exception();
      if (cVar2 == '\0') {
        if ((local_64 != 0) && (local_64 != 2)) {
          Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_6c);
        }
        Concurrency::missing_wait::missing_wait(local_80);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_80,(ThrowInfo *)&DAT_0075f3d8);
      }
    }
    if ((local_64 != 0) && (local_64 != 2)) {
      Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_6c);
    }
    local_8 = 0xffffffff;
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
              (&local_4c);
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_0066d127:
  local_1c = "bad allocation";
  std::exception::exception(&eStack_30,&local_1c,1);
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
  eStack_30 = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&eStack_30,(ThrowInfo *)&DAT_0075f410);
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>::~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_> @ 0066d380  kind=lib  attributed-by=rtti-lib-ns  size=774 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
           *this,undefined4 param_1,uint param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  exception eVar7;
  undefined8 *puVar8;
  char *pcVar9;
  uint local_90;
  missing_wait local_80 [3];
  char *local_74;
  int local_70;
  _StructuredTaskCollection local_6c [4];
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
  local_4c;
  undefined4 *local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  int *piStack_38;
  undefined4 local_34;
  exception eStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 *local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7eb0;
  local_10 = ExceptionList;
  local_90 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*param_3 != 1) {
    param_2 = (int)(param_2 - 1) / *param_3 + 1;
  }
  local_40 = param_2;
  local_14 = local_90;
  local_20 = (char *)Concurrency::details::_CurrentScheduler::_GetNumberOfVirtualProcessors();
  local_4c.vftablePtr = &vftable;
  local_48 = (undefined4 *)0x0;
  local_44 = 0;
  uVar4 = (int)local_20 * 0x2c + 8;
  local_8 = 0;
  if (uVar4 < 0x401) {
    puVar3 = &local_90;
    local_24 = &local_90;
    if (&stack0x00000000 == (undefined1 *)0x90) goto LAB_0066d437;
    local_90 = 0xcccc;
  }
  else {
    puVar3 = malloc(uVar4);
    local_24 = puVar3;
    if (puVar3 == (undefined4 *)0x0) goto LAB_0066d437;
    *puVar3 = 0xdddd;
  }
  local_24 = puVar3 + 2;
  if (local_24 != (undefined4 *)0x0) {
    local_5c = 0;
    local_18 = 0;
    local_54 = 0;
    local_58 = 0x80000000;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    }
    local_60 = 0;
    local_68 = 0x1fffffff;
    local_64 = 0;
    local_70 = (int)param_2 / (int)local_20;
    local_1c = (char *)((int)param_2 % (int)local_20);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_70 == 0) {
      local_20 = local_1c;
    }
    local_20 = local_20 + -1;
    eVar7 = (exception)0x0;
    pcVar9 = (char *)0x0;
    local_48 = local_24;
    if (0 < (int)local_20) {
      puVar8 = (undefined8 *)(puVar3 + 7);
      iVar5 = 0;
      local_74 = local_20;
      do {
        iVar6 = local_70;
        if (0 < (int)local_1c) {
          local_1c = local_1c + -1;
          iVar6 = local_70 + 1;
        }
        local_18 = iVar6;
        if (puVar8 != (undefined8 *)0x14) {
          local_3c = param_1;
          piStack_38 = param_3;
          *puVar8 = CONCAT44(param_3,param_1);
          local_34 = param_4;
          eStack_30 = eVar7;
          puVar8[1] = CONCAT44(eVar7,param_4);
          uStack_28 = 0;
          local_2c = (int)eVar7 + iVar6;
          *(undefined4 *)((int)puVar8 + -0xc) = 0;
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
                        */
          *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
            **)((int)puVar8 + -0x14) =
               &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
                ::vftable;
          puVar8[2] = (ulonglong)(uint)((int)eVar7 + iVar6);
          *(code **)(puVar8 + -2) = FUN_0066cd30;
        }
        iVar5 = iVar5 + 1;
        local_44 = iVar5;
        *(undefined1 *)((int)puVar8 + -4) = 0;
        Concurrency::details::_StructuredTaskCollection::_Schedule
                  (local_6c,(_UnrealizedChore *)((int)puVar8 + -0x14));
        eVar7 = (exception)((int)eVar7 + local_18);
        puVar8 = (undefined8 *)((int)puVar8 + 0x2c);
        local_20 = local_20 + -1;
      } while (local_20 != (char *)0x0);
      local_20 = (char *)0x0;
      pcVar9 = local_74;
      local_18 = iVar5;
    }
    uVar4 = local_40;
    puVar1 = local_24 + (int)pcVar9 * 0xb;
    if (puVar1 != (undefined4 *)0x0) {
      local_3c = param_1;
      piStack_38 = param_3;
      *(ulonglong *)(puVar1 + 5) = CONCAT44(param_3,param_1);
      local_34 = param_4;
      eStack_30 = eVar7;
      *(ulonglong *)(puVar1 + 7) = CONCAT44(eVar7,param_4);
      local_2c = uVar4;
      uStack_28 = 0;
      puVar1[2] = 0;
      *puVar1 = &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
                 ::vftable;
      *(ulonglong *)(puVar1 + 9) = (ulonglong)uVar4;
      puVar1[1] = FUN_0066cd30;
    }
    local_44 = local_18 + 1;
    Concurrency::details::_StructuredTaskCollection::_RunAndWait((_UnrealizedChore *)local_6c);
    local_8 = local_8 & 0xffffff00;
    if (0 < local_5c) {
      Concurrency::details::_StructuredTaskCollection::_Abort(local_6c);
      cVar2 = __uncaught_exception();
      if (cVar2 == '\0') {
        if ((local_64 != 0) && (local_64 != 2)) {
          Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_6c);
        }
        Concurrency::missing_wait::missing_wait(local_80);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_80,(ThrowInfo *)&DAT_0075f3d8);
      }
    }
    if ((local_64 != 0) && (local_64 != 2)) {
      Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_6c);
    }
    local_8 = 0xffffffff;
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
              (&local_4c);
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_0066d437:
  local_1c = "bad allocation";
  std::exception::exception(&eStack_30,&local_1c,1);
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
  eStack_30 = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&eStack_30,(ThrowInfo *)&DAT_0075f410);
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>::~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_> @ 0066d690  kind=lib  attributed-by=rtti-lib-ns  size=774 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
           *this,undefined4 param_1,uint param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  exception eVar7;
  undefined8 *puVar8;
  char *pcVar9;
  uint local_90;
  missing_wait local_80 [3];
  char *local_74;
  int local_70;
  _StructuredTaskCollection local_6c [4];
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
  local_4c;
  undefined4 *local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  int *piStack_38;
  undefined4 local_34;
  exception eStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 *local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7ef0;
  local_10 = ExceptionList;
  local_90 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*param_3 != 1) {
    param_2 = (int)(param_2 - 1) / *param_3 + 1;
  }
  local_40 = param_2;
  local_14 = local_90;
  local_20 = (char *)Concurrency::details::_CurrentScheduler::_GetNumberOfVirtualProcessors();
  local_4c.vftablePtr = &vftable;
  local_48 = (undefined4 *)0x0;
  local_44 = 0;
  uVar4 = (int)local_20 * 0x2c + 8;
  local_8 = 0;
  if (uVar4 < 0x401) {
    puVar3 = &local_90;
    local_24 = &local_90;
    if (&stack0x00000000 == (undefined1 *)0x90) goto LAB_0066d747;
    local_90 = 0xcccc;
  }
  else {
    puVar3 = malloc(uVar4);
    local_24 = puVar3;
    if (puVar3 == (undefined4 *)0x0) goto LAB_0066d747;
    *puVar3 = 0xdddd;
  }
  local_24 = puVar3 + 2;
  if (local_24 != (undefined4 *)0x0) {
    local_5c = 0;
    local_18 = 0;
    local_54 = 0;
    local_58 = 0x80000000;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    }
    local_60 = 0;
    local_68 = 0x1fffffff;
    local_64 = 0;
    local_70 = (int)param_2 / (int)local_20;
    local_1c = (char *)((int)param_2 % (int)local_20);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_70 == 0) {
      local_20 = local_1c;
    }
    local_20 = local_20 + -1;
    eVar7 = (exception)0x0;
    pcVar9 = (char *)0x0;
    local_48 = local_24;
    if (0 < (int)local_20) {
      puVar8 = (undefined8 *)(puVar3 + 7);
      iVar5 = 0;
      local_74 = local_20;
      do {
        iVar6 = local_70;
        if (0 < (int)local_1c) {
          local_1c = local_1c + -1;
          iVar6 = local_70 + 1;
        }
        local_18 = iVar6;
        if (puVar8 != (undefined8 *)0x14) {
          local_3c = param_1;
          piStack_38 = param_3;
          *puVar8 = CONCAT44(param_3,param_1);
          local_34 = param_4;
          eStack_30 = eVar7;
          puVar8[1] = CONCAT44(eVar7,param_4);
          uStack_28 = 0;
          local_2c = (int)eVar7 + iVar6;
          *(undefined4 *)((int)puVar8 + -0xc) = 0;
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
                        */
          *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
            **)((int)puVar8 + -0x14) =
               &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
                ::vftable;
          puVar8[2] = (ulonglong)(uint)((int)eVar7 + iVar6);
          *(code **)(puVar8 + -2) = FUN_0066cd40;
        }
        iVar5 = iVar5 + 1;
        local_44 = iVar5;
        *(undefined1 *)((int)puVar8 + -4) = 0;
        Concurrency::details::_StructuredTaskCollection::_Schedule
                  (local_6c,(_UnrealizedChore *)((int)puVar8 + -0x14));
        eVar7 = (exception)((int)eVar7 + local_18);
        puVar8 = (undefined8 *)((int)puVar8 + 0x2c);
        local_20 = local_20 + -1;
      } while (local_20 != (char *)0x0);
      local_20 = (char *)0x0;
      pcVar9 = local_74;
      local_18 = iVar5;
    }
    uVar4 = local_40;
    puVar1 = local_24 + (int)pcVar9 * 0xb;
    if (puVar1 != (undefined4 *)0x0) {
      local_3c = param_1;
      piStack_38 = param_3;
      *(ulonglong *)(puVar1 + 5) = CONCAT44(param_3,param_1);
      local_34 = param_4;
      eStack_30 = eVar7;
      *(ulonglong *)(puVar1 + 7) = CONCAT44(eVar7,param_4);
      local_2c = uVar4;
      uStack_28 = 0;
      puVar1[2] = 0;
      *puVar1 = &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
                 ::vftable;
      *(ulonglong *)(puVar1 + 9) = (ulonglong)uVar4;
      puVar1[1] = FUN_0066cd40;
    }
    local_44 = local_18 + 1;
    Concurrency::details::_StructuredTaskCollection::_RunAndWait((_UnrealizedChore *)local_6c);
    local_8 = local_8 & 0xffffff00;
    if (0 < local_5c) {
      Concurrency::details::_StructuredTaskCollection::_Abort(local_6c);
      cVar2 = __uncaught_exception();
      if (cVar2 == '\0') {
        if ((local_64 != 0) && (local_64 != 2)) {
          Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_6c);
        }
        Concurrency::missing_wait::missing_wait(local_80);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_80,(ThrowInfo *)&DAT_0075f3d8);
      }
    }
    if ((local_64 != 0) && (local_64 != 2)) {
      Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_6c);
    }
    local_8 = 0xffffffff;
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
              (&local_4c);
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_0066d747:
  local_1c = "bad allocation";
  std::exception::exception(&eStack_30,&local_1c,1);
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
  eStack_30 = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&eStack_30,(ThrowInfo *)&DAT_0075f410);
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>::~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_> @ 0066d9a0  kind=lib  attributed-by=rtti-lib-ns  size=774 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
           *this,undefined4 param_1,uint param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  exception eVar7;
  undefined8 *puVar8;
  char *pcVar9;
  uint local_90;
  missing_wait local_80 [3];
  char *local_74;
  int local_70;
  _StructuredTaskCollection local_6c [4];
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
  local_4c;
  undefined4 *local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  int *piStack_38;
  undefined4 local_34;
  exception eStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 *local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7f30;
  local_10 = ExceptionList;
  local_90 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*param_3 != 1) {
    param_2 = (int)(param_2 - 1) / *param_3 + 1;
  }
  local_40 = param_2;
  local_14 = local_90;
  local_20 = (char *)Concurrency::details::_CurrentScheduler::_GetNumberOfVirtualProcessors();
  local_4c.vftablePtr = &vftable;
  local_48 = (undefined4 *)0x0;
  local_44 = 0;
  uVar4 = (int)local_20 * 0x2c + 8;
  local_8 = 0;
  if (uVar4 < 0x401) {
    puVar3 = &local_90;
    local_24 = &local_90;
    if (&stack0x00000000 == (undefined1 *)0x90) goto LAB_0066da57;
    local_90 = 0xcccc;
  }
  else {
    puVar3 = malloc(uVar4);
    local_24 = puVar3;
    if (puVar3 == (undefined4 *)0x0) goto LAB_0066da57;
    *puVar3 = 0xdddd;
  }
  local_24 = puVar3 + 2;
  if (local_24 != (undefined4 *)0x0) {
    local_5c = 0;
    local_18 = 0;
    local_54 = 0;
    local_58 = 0x80000000;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    }
    local_60 = 0;
    local_68 = 0x1fffffff;
    local_64 = 0;
    local_70 = (int)param_2 / (int)local_20;
    local_1c = (char *)((int)param_2 % (int)local_20);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_70 == 0) {
      local_20 = local_1c;
    }
    local_20 = local_20 + -1;
    eVar7 = (exception)0x0;
    pcVar9 = (char *)0x0;
    local_48 = local_24;
    if (0 < (int)local_20) {
      puVar8 = (undefined8 *)(puVar3 + 7);
      iVar5 = 0;
      local_74 = local_20;
      do {
        iVar6 = local_70;
        if (0 < (int)local_1c) {
          local_1c = local_1c + -1;
          iVar6 = local_70 + 1;
        }
        local_18 = iVar6;
        if (puVar8 != (undefined8 *)0x14) {
          local_3c = param_1;
          piStack_38 = param_3;
          *puVar8 = CONCAT44(param_3,param_1);
          local_34 = param_4;
          eStack_30 = eVar7;
          puVar8[1] = CONCAT44(eVar7,param_4);
          uStack_28 = 0;
          local_2c = (int)eVar7 + iVar6;
          *(undefined4 *)((int)puVar8 + -0xc) = 0;
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
                        */
          *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
            **)((int)puVar8 + -0x14) =
               &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
                ::vftable;
          puVar8[2] = (ulonglong)(uint)((int)eVar7 + iVar6);
          *(code **)(puVar8 + -2) = FUN_0066cd50;
        }
        iVar5 = iVar5 + 1;
        local_44 = iVar5;
        *(undefined1 *)((int)puVar8 + -4) = 0;
        Concurrency::details::_StructuredTaskCollection::_Schedule
                  (local_6c,(_UnrealizedChore *)((int)puVar8 + -0x14));
        eVar7 = (exception)((int)eVar7 + local_18);
        puVar8 = (undefined8 *)((int)puVar8 + 0x2c);
        local_20 = local_20 + -1;
      } while (local_20 != (char *)0x0);
      local_20 = (char *)0x0;
      pcVar9 = local_74;
      local_18 = iVar5;
    }
    uVar4 = local_40;
    puVar1 = local_24 + (int)pcVar9 * 0xb;
    if (puVar1 != (undefined4 *)0x0) {
      local_3c = param_1;
      piStack_38 = param_3;
      *(ulonglong *)(puVar1 + 5) = CONCAT44(param_3,param_1);
      local_34 = param_4;
      eStack_30 = eVar7;
      *(ulonglong *)(puVar1 + 7) = CONCAT44(eVar7,param_4);
      local_2c = uVar4;
      uStack_28 = 0;
      puVar1[2] = 0;
      *puVar1 = &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
                 ::vftable;
      *(ulonglong *)(puVar1 + 9) = (ulonglong)uVar4;
      puVar1[1] = FUN_0066cd50;
    }
    local_44 = local_18 + 1;
    Concurrency::details::_StructuredTaskCollection::_RunAndWait((_UnrealizedChore *)local_6c);
    local_8 = local_8 & 0xffffff00;
    if (0 < local_5c) {
      Concurrency::details::_StructuredTaskCollection::_Abort(local_6c);
      cVar2 = __uncaught_exception();
      if (cVar2 == '\0') {
        if ((local_64 != 0) && (local_64 != 2)) {
          Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_6c);
        }
        Concurrency::missing_wait::missing_wait(local_80);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_80,(ThrowInfo *)&DAT_0075f3d8);
      }
    }
    if ((local_64 != 0) && (local_64 != 2)) {
      Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_6c);
    }
    local_8 = 0xffffffff;
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
              (&local_4c);
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_0066da57:
  local_1c = "bad allocation";
  std::exception::exception(&eStack_30,&local_1c,1);
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
  eStack_30 = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&eStack_30,(ThrowInfo *)&DAT_0075f410);
}


/* Concurrency::details::_UnrealizedChore::~_UnrealizedChore @ 0066e240  kind=lib  attributed-by=rtti-lib-ns  size=16 */

_UnrealizedChore * __thiscall
Concurrency::details::_UnrealizedChore::~_UnrealizedChore(_UnrealizedChore *this)

{
  this->vftablePtr = &vftable;
  this->_AllocBase = (_AllocBase)0x0;
  return this;
}


/* Concurrency::missing_wait::missing_wait @ 0066e270  kind=lib  attributed-by=rtti-lib-ns  size=28 */

missing_wait * __thiscall
Concurrency::missing_wait::missing_wait(missing_wait *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  this->vftablePtr = &vftable;
  return this;
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>::~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_> @ 0066e290  kind=lib  attributed-by=rtti-lib-ns  size=180 */

void __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
           *this)

{
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>_vftable
  *p_Var1;
  _UnrealizedChore *this_00;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7f98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>_vftable
            *)0x0;
  this->vftablePtr = &vftable;
  if (this[2].vftablePtr !=
      (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>_vftable
       *)0x0) {
    local_14 = 0;
    do {
      this_00 = (_UnrealizedChore *)((int)&(this[1].vftablePtr)->deleting_destructor + local_14);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
                        */
      this_00->vftablePtr =
           (_UnrealizedChore_vftable *)
           &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
            ::vftable;
      local_8 = 0;
      if ((this_00->_AllocBase != (_AllocBase)0x0) && (this_00[1].field_0x4 == '\0')) {
        Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this_00);
      }
      p_Var1 = (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>_vftable
                *)((int)&p_Var1->deleting_destructor + 1);
      local_14 = local_14 + 0x2c;
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
      this_00->vftablePtr = (_UnrealizedChore_vftable *)&_Chore::vftable;
    } while (p_Var1 < this[2].vftablePtr);
  }
  local_8 = 0xffffffff;
  if ((this[1].vftablePtr !=
       (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>_vftable
        *)0x0) &&
     (p_Var1 = this[1].vftablePtr + -2, p_Var1->deleting_destructor == (deleting_destructor *)0xdddd
     )) {
    free(p_Var1);
  }
  ExceptionList = local_10;
  return;
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>::~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_> @ 0066e350  kind=lib  attributed-by=rtti-lib-ns  size=180 */

void __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
           *this)

{
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>_vftable
  *p_Var1;
  _UnrealizedChore *this_00;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7f98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>_vftable
            *)0x0;
  this->vftablePtr = &vftable;
  if (this[2].vftablePtr !=
      (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>_vftable
       *)0x0) {
    local_14 = 0;
    do {
      this_00 = (_UnrealizedChore *)((int)&(this[1].vftablePtr)->deleting_destructor + local_14);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
                        */
      this_00->vftablePtr =
           (_UnrealizedChore_vftable *)
           &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
            ::vftable;
      local_8 = 0;
      if ((this_00->_AllocBase != (_AllocBase)0x0) && (this_00[1].field_0x4 == '\0')) {
        Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this_00);
      }
      p_Var1 = (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>_vftable
                *)((int)&p_Var1->deleting_destructor + 1);
      local_14 = local_14 + 0x2c;
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
      this_00->vftablePtr = (_UnrealizedChore_vftable *)&_Chore::vftable;
    } while (p_Var1 < this[2].vftablePtr);
  }
  local_8 = 0xffffffff;
  if ((this[1].vftablePtr !=
       (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>_vftable
        *)0x0) &&
     (p_Var1 = this[1].vftablePtr + -2, p_Var1->deleting_destructor == (deleting_destructor *)0xdddd
     )) {
    free(p_Var1);
  }
  ExceptionList = local_10;
  return;
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>::~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_> @ 0066e410  kind=lib  attributed-by=rtti-lib-ns  size=180 */

void __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
           *this)

{
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>_vftable
  *p_Var1;
  _UnrealizedChore *this_00;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7f98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>_vftable
            *)0x0;
  this->vftablePtr = &vftable;
  if (this[2].vftablePtr !=
      (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>_vftable
       *)0x0) {
    local_14 = 0;
    do {
      this_00 = (_UnrealizedChore *)((int)&(this[1].vftablePtr)->deleting_destructor + local_14);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
                        */
      this_00->vftablePtr =
           (_UnrealizedChore_vftable *)
           &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
            ::vftable;
      local_8 = 0;
      if ((this_00->_AllocBase != (_AllocBase)0x0) && (this_00[1].field_0x4 == '\0')) {
        Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this_00);
      }
      p_Var1 = (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>_vftable
                *)((int)&p_Var1->deleting_destructor + 1);
      local_14 = local_14 + 0x2c;
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
      this_00->vftablePtr = (_UnrealizedChore_vftable *)&_Chore::vftable;
    } while (p_Var1 < this[2].vftablePtr);
  }
  local_8 = 0xffffffff;
  if ((this[1].vftablePtr !=
       (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>_vftable
        *)0x0) &&
     (p_Var1 = this[1].vftablePtr + -2, p_Var1->deleting_destructor == (deleting_destructor *)0xdddd
     )) {
    free(p_Var1);
  }
  ExceptionList = local_10;
  return;
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>::~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_> @ 0066e4d0  kind=lib  attributed-by=rtti-lib-ns  size=180 */

void __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
           *this)

{
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>_vftable
  *p_Var1;
  _UnrealizedChore *this_00;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7f98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>_vftable
            *)0x0;
  this->vftablePtr = &vftable;
  if (this[2].vftablePtr !=
      (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>_vftable
       *)0x0) {
    local_14 = 0;
    do {
      this_00 = (_UnrealizedChore *)((int)&(this[1].vftablePtr)->deleting_destructor + local_14);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
                        */
      this_00->vftablePtr =
           (_UnrealizedChore_vftable *)
           &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
            ::vftable;
      local_8 = 0;
      if ((this_00->_AllocBase != (_AllocBase)0x0) && (this_00[1].field_0x4 == '\0')) {
        Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this_00);
      }
      p_Var1 = (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>_vftable
                *)((int)&p_Var1->deleting_destructor + 1);
      local_14 = local_14 + 0x2c;
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
      this_00->vftablePtr = (_UnrealizedChore_vftable *)&_Chore::vftable;
    } while (p_Var1 < this[2].vftablePtr);
  }
  local_8 = 0xffffffff;
  if ((this[1].vftablePtr !=
       (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>_vftable
        *)0x0) &&
     (p_Var1 = this[1].vftablePtr + -2, p_Var1->deleting_destructor == (deleting_destructor *)0xdddd
     )) {
    free(p_Var1);
  }
  ExceptionList = local_10;
  return;
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>::~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_> @ 0066e590  kind=lib  attributed-by=rtti-lib-ns  size=180 */

void __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
           *this)

{
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>_vftable
  *p_Var1;
  _UnrealizedChore *this_00;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7f98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>_vftable
            *)0x0;
  this->vftablePtr = &vftable;
  if (this[2].vftablePtr !=
      (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>_vftable
       *)0x0) {
    local_14 = 0;
    do {
      this_00 = (_UnrealizedChore *)((int)&(this[1].vftablePtr)->deleting_destructor + local_14);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
                        */
      this_00->vftablePtr =
           (_UnrealizedChore_vftable *)
           &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
            ::vftable;
      local_8 = 0;
      if ((this_00->_AllocBase != (_AllocBase)0x0) && (this_00[1].field_0x4 == '\0')) {
        Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this_00);
      }
      p_Var1 = (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>_vftable
                *)((int)&p_Var1->deleting_destructor + 1);
      local_14 = local_14 + 0x2c;
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
      this_00->vftablePtr = (_UnrealizedChore_vftable *)&_Chore::vftable;
    } while (p_Var1 < this[2].vftablePtr);
  }
  local_8 = 0xffffffff;
  if ((this[1].vftablePtr !=
       (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>_vftable
        *)0x0) &&
     (p_Var1 = this[1].vftablePtr + -2, p_Var1->deleting_destructor == (deleting_destructor *)0xdddd
     )) {
    free(p_Var1);
  }
  ExceptionList = local_10;
  return;
}


/* Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>::~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_> @ 0066e650  kind=lib  attributed-by=rtti-lib-ns  size=158 */

void __thiscall
Concurrency::details::
_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
           *this)

{
  _AllocBase _Var1;
  _AllocBase this_00;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_006f7fc8;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  this_00 = (_AllocBase)this[1].vftablePtr;
  while (this_00 != (_AllocBase)0x0) {
    _Var1 = *(_AllocBase *)((int)this_00 + 0x2c);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
                        */
    *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
      **)this_00 = &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
                    ::vftable;
    local_8 = 0;
    if ((*(int *)((int)this_00 + 8) != 0) && (*(char *)((int)this_00 + 0x10) == '\0')) {
      Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)this_00);
    }
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
    *(_Chore_vftable **)this_00 = &_Chore::vftable;
    _Memory = (int *)((int)this_00 + -8);
    local_8 = 0xffffffff;
    this_00 = _Var1;
    if (*_Memory == 0xdddd) {
      free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}


/* Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>::~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_> @ 0066e6f0  kind=lib  attributed-by=rtti-lib-ns  size=158 */

void __thiscall
Concurrency::details::
_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
           *this)

{
  _AllocBase _Var1;
  _AllocBase this_00;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_006f7fc8;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  this_00 = (_AllocBase)this[1].vftablePtr;
  while (this_00 != (_AllocBase)0x0) {
    _Var1 = *(_AllocBase *)((int)this_00 + 0x2c);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
                        */
    *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
      **)this_00 = &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
                    ::vftable;
    local_8 = 0;
    if ((*(int *)((int)this_00 + 8) != 0) && (*(char *)((int)this_00 + 0x10) == '\0')) {
      Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)this_00);
    }
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
    *(_Chore_vftable **)this_00 = &_Chore::vftable;
    _Memory = (int *)((int)this_00 + -8);
    local_8 = 0xffffffff;
    this_00 = _Var1;
    if (*_Memory == 0xdddd) {
      free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}


/* Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>::~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_> @ 0066e790  kind=lib  attributed-by=rtti-lib-ns  size=158 */

void __thiscall
Concurrency::details::
_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
           *this)

{
  _AllocBase _Var1;
  _AllocBase this_00;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_006f7fc8;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  this_00 = (_AllocBase)this[1].vftablePtr;
  while (this_00 != (_AllocBase)0x0) {
    _Var1 = *(_AllocBase *)((int)this_00 + 0x2c);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
                        */
    *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
      **)this_00 = &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
                    ::vftable;
    local_8 = 0;
    if ((*(int *)((int)this_00 + 8) != 0) && (*(char *)((int)this_00 + 0x10) == '\0')) {
      Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)this_00);
    }
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
    *(_Chore_vftable **)this_00 = &_Chore::vftable;
    _Memory = (int *)((int)this_00 + -8);
    local_8 = 0xffffffff;
    this_00 = _Var1;
    if (*_Memory == 0xdddd) {
      free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}


/* Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>::~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_> @ 0066e830  kind=lib  attributed-by=rtti-lib-ns  size=158 */

void __thiscall
Concurrency::details::
_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
           *this)

{
  _AllocBase _Var1;
  _AllocBase this_00;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_006f7fc8;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  this_00 = (_AllocBase)this[1].vftablePtr;
  while (this_00 != (_AllocBase)0x0) {
    _Var1 = *(_AllocBase *)((int)this_00 + 0x2c);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
                        */
    *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
      **)this_00 = &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
                    ::vftable;
    local_8 = 0;
    if ((*(int *)((int)this_00 + 8) != 0) && (*(char *)((int)this_00 + 0x10) == '\0')) {
      Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)this_00);
    }
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
    *(_Chore_vftable **)this_00 = &_Chore::vftable;
    _Memory = (int *)((int)this_00 + -8);
    local_8 = 0xffffffff;
    this_00 = _Var1;
    if (*_Memory == 0xdddd) {
      free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}


/* Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>::~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_> @ 0066e8d0  kind=lib  attributed-by=rtti-lib-ns  size=158 */

void __thiscall
Concurrency::details::
_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
::
~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
          (_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
           *this)

{
  _AllocBase _Var1;
  _AllocBase this_00;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_006f7fc8;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  this_00 = (_AllocBase)this[1].vftablePtr;
  while (this_00 != (_AllocBase)0x0) {
    _Var1 = *(_AllocBase *)((int)this_00 + 0x2c);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
                        */
    *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
      **)this_00 = &task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
                    ::vftable;
    local_8 = 0;
    if ((*(int *)((int)this_00 + 8) != 0) && (*(char *)((int)this_00 + 0x10) == '\0')) {
      Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)this_00);
    }
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
    *(_Chore_vftable **)this_00 = &_Chore::vftable;
    _Memory = (int *)((int)this_00 + -8);
    local_8 = 0xffffffff;
    this_00 = _Var1;
    if (*_Memory == 0xdddd) {
      free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}


/* Concurrency::details::_Chore::~_Chore @ 0066ebf0  kind=lib  attributed-by=rtti-lib-ns  size=7 */

void __thiscall Concurrency::details::_Chore::~_Chore(_Chore *this)

{
  this->vftablePtr = &vftable;
  return;
}


/* Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_> @ 0066f660  kind=lib  attributed-by=rtti-lib-ns  size=1089 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall
Concurrency::
task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
::
~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
          (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
           *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
  *ptVar4;
  undefined1 local_11c [16];
  undefined1 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
  *local_f8;
  missing_wait local_dc [3];
  _SpinWait<1> local_d0 [8];
  undefined4 local_c8;
  code *local_c4;
  _UnrealizedChore *local_c0;
  _UnrealizedChore *local_bc;
  exception local_b8 [3];
  undefined1 local_ac [8];
  _AllocBase local_a4;
  char local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  _StructuredTaskCollection local_7c [4];
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
  local_5c;
  _UnrealizedChore *local_58;
  int *local_54;
  int local_50;
  int *local_4c [2];
  int local_44;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
  **local_40;
  int local_3c;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
  *local_38;
  int *piStack_34;
  _AllocBase local_30;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
  *ptStack_2c;
  int local_28;
  int **ppiStack_24;
  int local_20;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
  *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8065;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = this->field3_0xc;
  local_18 = this->field4_0x10;
  if (this->field5_0x14 != (_AllocBase)0x0) {
    _local_f8 = CONCAT44(0x66f6ac,local_f8);
    cVar1 = FUN_00671340();
    if (cVar1 == '\0') goto LAB_0066fa7f;
  }
  ptVar4 = local_1c;
  local_20 = *this->field1_0x4 * (int)local_1c;
  if (local_18 - (int)local_1c == 1) {
    _local_f8 = CONCAT44(&local_20,this->vftablePtr);
    local_100 = CONCAT44(0x66f6dd,(undefined4)local_100);
    FUN_006712c0();
  }
  else {
    local_6c = 0;
    local_68 = 0x80000000;
    local_64 = 0;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    }
    local_70 = 0;
    local_78 = 0x1fffffff;
    local_74 = 0;
    local_8 = 0;
    _local_f8 = CONCAT44(0x66f746,local_f8);
    FUN_0066e1b0();
    local_38 = this->vftablePtr;
    piStack_34 = this->field1_0x4;
    local_30 = this->_AllocBase;
    ptStack_2c = local_1c;
    local_28 = local_18;
    ppiStack_24 = &local_54;
    local_8._0_1_ = 1;
    details::_UnrealizedChore::~_UnrealizedChore((_UnrealizedChore *)local_ac);
    local_98 = CONCAT44(piStack_34,local_38);
    local_90 = CONCAT44(ptStack_2c,local_30);
    local_88 = CONCAT44(ppiStack_24,local_28);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
                        */
    local_ac._0_4_ = &vftable;
    local_ac._4_4_ = FUN_0066cd10;
    local_8._0_1_ = 2;
    local_9c = '\0';
    _local_f8 = CONCAT44(0x66f7ce,local_f8);
    Concurrency::details::_StructuredTaskCollection::_Schedule
              (local_7c,(_UnrealizedChore *)local_ac);
                    /* inlined destructor:
                       Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>::~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
                        */
    local_5c.vftablePtr =
         &details::
          _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
          ::vftable;
    local_58 = (_UnrealizedChore *)0x0;
    local_8._0_1_ = 3;
    if ((int)ptVar4 < local_18) {
      do {
        if ((*local_4c[0] != 0) &&
           ((local_44 != 0 ||
            (bVar2 = Concurrency::details::_Cancellation_beacon::_Confirm_cancel
                               ((_Cancellation_beacon *)local_4c), bVar2)))) break;
        if (local_54 != (int *)0x0) {
          if (1 < local_18 - (int)local_1c) {
            local_18 = (int)&local_1c->vfunction1 + (local_18 - (int)local_1c) / 2;
          }
          *local_54 = local_18;
          LOCK();
          local_54 = (int *)0x0;
          UNLOCK();
          if (1 < local_18 - (int)local_1c) {
            if ((&stack0x00000000 == (undefined1 *)0xec) ||
               ((_UnrealizedChore *)local_11c == (_UnrealizedChore *)0x0)) {
              local_80 = "bad allocation";
              std::exception::exception(local_b8,&local_80,1);
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
              local_b8[0] = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(local_b8,(ThrowInfo *)&DAT_0075f410);
            }
            local_38 = this->vftablePtr;
            piStack_34 = this->field1_0x4;
            local_30 = this->_AllocBase;
            ptStack_2c = local_1c;
            local_28 = local_18;
            ppiStack_24 = &local_54;
            local_8._0_1_ = 4;
            local_c0 = (_UnrealizedChore *)local_11c;
            local_bc = (_UnrealizedChore *)local_11c;
            local_58 = (_UnrealizedChore *)local_11c;
            details::_UnrealizedChore::~_UnrealizedChore((_UnrealizedChore *)local_11c);
            local_108 = CONCAT44(piStack_34,local_38);
            local_100 = CONCAT44(ptStack_2c,local_30);
            _local_f8 = CONCAT44(ppiStack_24,local_28);
            local_11c._0_4_ = &vftable;
            local_11c._4_4_ = FUN_0066cd10;
            local_8._0_1_ = 3;
            local_10c = 0;
            Concurrency::details::_StructuredTaskCollection::_Schedule
                      (local_7c,(_UnrealizedChore *)local_11c);
          }
        }
        local_40 = &local_1c;
        _local_f8 = CONCAT44(&local_20,this->vftablePtr);
        local_100 = CONCAT44(0x66f90f,(undefined4)local_100);
        FUN_006712c0();
        local_40 = (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
                    **)0x0;
        if (local_3c != 0) {
          local_c8 = 0;
          local_c4 = _UnderlyingYield_exref;
          do {
            Concurrency::details::_SpinWait<1>::_SpinOnce(local_d0);
          } while (local_3c != 0);
        }
        ptVar4 = (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
                  *)((int)&ptVar4->vfunction1 + 1);
        local_20 = local_20 + *this->field1_0x4;
        local_1c = ptVar4;
      } while ((int)ptVar4 < local_18);
    }
    LOCK();
    local_44 = 1;
    UNLOCK();
    _local_f8 = CONCAT44((_UnrealizedChore *)local_7c,0x66f973);
    Concurrency::details::_StructuredTaskCollection::_RunAndWait((_UnrealizedChore *)local_7c);
    local_44 = 2;
    local_8._0_1_ = 2;
    details::
    _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
              (&local_5c);
    local_ac._0_4_ = &vftable;
    local_8._0_1_ = 5;
    if ((local_a4 != (_AllocBase)0x0) && (local_9c == '\0')) {
      Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)local_ac);
    }
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
    local_ac._0_4_ = &details::_Chore::vftable;
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_44 != 2) {
      if (local_50 != 0) {
        LOCK();
        **(int **)(local_50 + 8) = **(int **)(local_50 + 8) + 1;
        UNLOCK();
      }
      LOCK();
      local_44 = 1;
      UNLOCK();
    }
    Concurrency::details::_Cancellation_beacon::~_Cancellation_beacon
              ((_Cancellation_beacon *)local_4c);
    local_8 = 0xffffffff;
    if (0 < local_6c) {
      Concurrency::details::_StructuredTaskCollection::_Abort(local_7c);
      cVar1 = __uncaught_exception();
      if (cVar1 == '\0') {
        if ((local_74 != 0) && (local_74 != 2)) {
          Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_7c);
        }
        Concurrency::missing_wait::missing_wait(local_dc);
        _local_f8 = CONCAT44(local_dc,0x66fa36);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_dc,(ThrowInfo *)&DAT_0075f3d8);
      }
    }
    if ((local_74 != 0) && (local_74 != 2)) {
      Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_7c);
    }
  }
LAB_0066fa7f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_> @ 0066fab0  kind=lib  attributed-by=rtti-lib-ns  size=1187 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall
Concurrency::
task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
::
~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
          (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
           *this)

{
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
  *ptVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_124 [16];
  undefined1 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  missing_wait local_e4 [3];
  _SpinWait<1> local_d8 [8];
  undefined4 local_d0;
  code *local_cc;
  exception local_c8 [3];
  _UnrealizedChore *local_bc;
  _UnrealizedChore *local_b8;
  undefined1 local_b4 [8];
  _AllocBase local_ac;
  char local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
  *local_84;
  _StructuredTaskCollection local_80 [4];
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
  local_60;
  _UnrealizedChore *local_5c;
  int *local_58;
  int local_54;
  int *local_50 [2];
  int local_48;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
  **local_44;
  int local_40;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
  *local_3c;
  int *piStack_38;
  _AllocBase local_34;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
  *ptStack_30;
  int local_2c;
  int **ppiStack_28;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
  *local_24;
  int local_20;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
  *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f80d5;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = this->field3_0xc;
  local_18 = this->field4_0x10;
  local_84 = this;
  if (this->field5_0x14 != (_AllocBase)0x0) {
    _local_100 = CONCAT44(0x66faff,local_100);
    cVar2 = FUN_00671340();
    if (cVar2 == '\0') goto LAB_0066ff31;
  }
  ptVar1 = local_1c;
  local_20 = *this->field1_0x4 * (int)local_1c;
  local_24 = local_1c;
  if (local_18 - (int)local_1c == 1) {
    _local_100 = CONCAT44(0x66fb38,local_100);
    Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of
              ((uint)(this->vftablePtr[1].vfunction1 + local_20));
    _local_100 = CONCAT44(0x66fb59,local_100);
    FUN_0066f380();
  }
  else {
    local_70 = 0;
    local_6c = 0x80000000;
    local_68 = 0;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    }
    local_74 = 0;
    local_7c = 0x1fffffff;
    local_78 = 0;
    local_8 = 0;
    _local_100 = CONCAT44(0x66fbbf,local_100);
    FUN_0066e1b0();
    local_3c = this->vftablePtr;
    piStack_38 = this->field1_0x4;
    local_34 = this->_AllocBase;
    ptStack_30 = local_1c;
    local_2c = local_18;
    ppiStack_28 = &local_58;
    local_8._0_1_ = 1;
    details::_UnrealizedChore::~_UnrealizedChore((_UnrealizedChore *)local_b4);
    local_a0 = CONCAT44(piStack_38,local_3c);
    local_98 = CONCAT44(ptStack_30,local_34);
    local_90 = CONCAT44(ppiStack_28,local_2c);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
                        */
    local_b4._0_4_ = &vftable;
    local_b4._4_4_ = FUN_0066cd20;
    local_8._0_1_ = 2;
    local_a4 = '\0';
    _local_100 = CONCAT44(0x66fc47,local_100);
    Concurrency::details::_StructuredTaskCollection::_Schedule
              (local_80,(_UnrealizedChore *)local_b4);
                    /* inlined destructor:
                       Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>::~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
                        */
    local_60.vftablePtr =
         &details::
          _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
          ::vftable;
    local_5c = (_UnrealizedChore *)0x0;
    local_8._0_1_ = 3;
    if ((int)ptVar1 < local_18) {
      do {
        if ((*local_50[0] != 0) &&
           ((local_48 != 0 ||
            (bVar3 = Concurrency::details::_Cancellation_beacon::_Confirm_cancel
                               ((_Cancellation_beacon *)local_50), bVar3)))) break;
        if (local_58 != (int *)0x0) {
          if (1 < local_18 - (int)local_1c) {
            local_18 = (int)&local_1c->vfunction1 + (local_18 - (int)local_1c) / 2;
          }
          *local_58 = local_18;
          LOCK();
          local_58 = (int *)0x0;
          UNLOCK();
          if (1 < local_18 - (int)local_1c) {
            if ((&stack0x00000000 == (undefined1 *)0xf4) ||
               ((_UnrealizedChore *)local_124 == (_UnrealizedChore *)0x0)) {
              local_88 = "bad allocation";
              std::exception::exception(local_c8,&local_88,1);
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
              local_c8[0] = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(local_c8,(ThrowInfo *)&DAT_0075f410);
            }
            local_3c = this->vftablePtr;
            piStack_38 = this->field1_0x4;
            local_34 = this->_AllocBase;
            ptStack_30 = local_1c;
            local_2c = local_18;
            ppiStack_28 = &local_58;
            local_8._0_1_ = 4;
            local_bc = (_UnrealizedChore *)local_124;
            local_b8 = (_UnrealizedChore *)local_124;
            local_5c = (_UnrealizedChore *)local_124;
            details::_UnrealizedChore::~_UnrealizedChore((_UnrealizedChore *)local_124);
            local_110 = CONCAT44(piStack_38,local_3c);
            local_108 = CONCAT44(ptStack_30,local_34);
            _local_100 = CONCAT44(ppiStack_28,local_2c);
            local_124._0_4_ = &vftable;
            local_124._4_4_ = FUN_0066cd20;
            local_8._0_1_ = 3;
            local_114 = 0;
            Concurrency::details::_StructuredTaskCollection::_Schedule
                      (local_80,(_UnrealizedChore *)local_124);
          }
        }
        local_44 = &local_1c;
        _local_100 = CONCAT44(0x66fd8c,local_100);
        Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of
                  ((uint)(this->vftablePtr[1].vfunction1 + local_20));
        _local_100 = CONCAT44(0x66fdad,local_100);
        FUN_0066f380();
        local_44 = (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
                    **)0x0;
        if (local_40 != 0) {
          local_d0 = 0;
          local_cc = _UnderlyingYield_exref;
          do {
            Concurrency::details::_SpinWait<1>::_SpinOnce(local_d8);
          } while (local_40 != 0);
        }
        local_24 = (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
                    *)((int)&local_24->vfunction1 + 1);
        local_20 = local_20 + *local_84->field1_0x4;
        this = local_84;
        local_1c = local_24;
      } while ((int)local_24 < local_18);
    }
    LOCK();
    local_48 = 1;
    UNLOCK();
    _local_100 = CONCAT44((_UnrealizedChore *)local_80,0x66fe1b);
    Concurrency::details::_StructuredTaskCollection::_RunAndWait((_UnrealizedChore *)local_80);
    local_48 = 2;
    local_8._0_1_ = 2;
    details::
    _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
              (&local_60);
    local_b4._0_4_ = &vftable;
    local_8._0_1_ = 5;
    if ((local_ac != (_AllocBase)0x0) && (local_a4 == '\0')) {
      Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)local_b4);
    }
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
    local_b4._0_4_ = &details::_Chore::vftable;
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_48 != 2) {
      if (local_54 != 0) {
        LOCK();
        **(int **)(local_54 + 8) = **(int **)(local_54 + 8) + 1;
        UNLOCK();
      }
      LOCK();
      local_48 = 1;
      UNLOCK();
    }
    Concurrency::details::_Cancellation_beacon::~_Cancellation_beacon
              ((_Cancellation_beacon *)local_50);
    local_8 = 0xffffffff;
    if (0 < local_70) {
      Concurrency::details::_StructuredTaskCollection::_Abort(local_80);
      cVar2 = __uncaught_exception();
      if (cVar2 == '\0') {
        if ((local_78 != 0) && (local_78 != 2)) {
          Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_80);
        }
        Concurrency::missing_wait::missing_wait(local_e4);
        _local_100 = CONCAT44(local_e4,0x66fee2);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_e4,(ThrowInfo *)&DAT_0075f3d8);
      }
    }
    if ((local_78 != 0) && (local_78 != 2)) {
      Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_80);
    }
  }
LAB_0066ff31:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_> @ 0066ff60  kind=lib  attributed-by=rtti-lib-ns  size=1188 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall
Concurrency::
task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
::
~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
          (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
           *this)

{
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
  *ptVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_124 [16];
  undefined1 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  missing_wait local_e4 [3];
  _SpinWait<1> local_d8 [8];
  undefined4 local_d0;
  code *local_cc;
  exception local_c8 [3];
  _UnrealizedChore *local_bc;
  _UnrealizedChore *local_b8;
  undefined1 local_b4 [8];
  _AllocBase local_ac;
  char local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
  *local_84;
  _StructuredTaskCollection local_80 [4];
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
  local_60;
  _UnrealizedChore *local_5c;
  int *local_58;
  int local_54;
  int *local_50 [2];
  int local_48;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
  **local_44;
  int local_40;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
  *local_3c;
  int *piStack_38;
  _AllocBase local_34;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
  *ptStack_30;
  int local_2c;
  int **ppiStack_28;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
  *local_24;
  int local_20;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
  *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8145;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = this->field3_0xc;
  local_18 = this->field4_0x10;
  local_84 = this;
  if (this->field5_0x14 != (_AllocBase)0x0) {
    _local_100 = CONCAT44(0x66ffaf,local_100);
    cVar2 = FUN_00671340();
    if (cVar2 == '\0') goto LAB_006703e2;
  }
  ptVar1 = local_1c;
  local_20 = *this->field1_0x4 * (int)local_1c;
  local_24 = local_1c;
  if (local_18 - (int)local_1c == 1) {
    _local_100 = CONCAT44(0x66ffe8,local_100);
    Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of
              ((uint)(this->vftablePtr[1].vfunction1 + local_20));
    _local_100 = CONCAT44(0x67000a,local_100);
    FUN_0066eef0();
  }
  else {
    local_70 = 0;
    local_6c = 0x80000000;
    local_68 = 0;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    }
    local_74 = 0;
    local_7c = 0x1fffffff;
    local_78 = 0;
    local_8 = 0;
    _local_100 = CONCAT44(0x670070,local_100);
    FUN_0066e1b0();
    local_3c = this->vftablePtr;
    piStack_38 = this->field1_0x4;
    local_34 = this->_AllocBase;
    ptStack_30 = local_1c;
    local_2c = local_18;
    ppiStack_28 = &local_58;
    local_8._0_1_ = 1;
    details::_UnrealizedChore::~_UnrealizedChore((_UnrealizedChore *)local_b4);
    local_a0 = CONCAT44(piStack_38,local_3c);
    local_98 = CONCAT44(ptStack_30,local_34);
    local_90 = CONCAT44(ppiStack_28,local_2c);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
                        */
    local_b4._0_4_ = &vftable;
    local_b4._4_4_ = FUN_0066cd30;
    local_8._0_1_ = 2;
    local_a4 = '\0';
    _local_100 = CONCAT44(0x6700f8,local_100);
    Concurrency::details::_StructuredTaskCollection::_Schedule
              (local_80,(_UnrealizedChore *)local_b4);
                    /* inlined destructor:
                       Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>::~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
                        */
    local_60.vftablePtr =
         &details::
          _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
          ::vftable;
    local_5c = (_UnrealizedChore *)0x0;
    local_8._0_1_ = 3;
    if ((int)ptVar1 < local_18) {
      do {
        if ((*local_50[0] != 0) &&
           ((local_48 != 0 ||
            (bVar3 = Concurrency::details::_Cancellation_beacon::_Confirm_cancel
                               ((_Cancellation_beacon *)local_50), bVar3)))) break;
        if (local_58 != (int *)0x0) {
          if (1 < local_18 - (int)local_1c) {
            local_18 = (int)&local_1c->vfunction1 + (local_18 - (int)local_1c) / 2;
          }
          *local_58 = local_18;
          LOCK();
          local_58 = (int *)0x0;
          UNLOCK();
          if (1 < local_18 - (int)local_1c) {
            if ((&stack0x00000000 == (undefined1 *)0xf4) ||
               ((_UnrealizedChore *)local_124 == (_UnrealizedChore *)0x0)) {
              local_88 = "bad allocation";
              std::exception::exception(local_c8,&local_88,1);
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
              local_c8[0] = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(local_c8,(ThrowInfo *)&DAT_0075f410);
            }
            local_3c = this->vftablePtr;
            piStack_38 = this->field1_0x4;
            local_34 = this->_AllocBase;
            ptStack_30 = local_1c;
            local_2c = local_18;
            ppiStack_28 = &local_58;
            local_8._0_1_ = 4;
            local_bc = (_UnrealizedChore *)local_124;
            local_b8 = (_UnrealizedChore *)local_124;
            local_5c = (_UnrealizedChore *)local_124;
            details::_UnrealizedChore::~_UnrealizedChore((_UnrealizedChore *)local_124);
            local_110 = CONCAT44(piStack_38,local_3c);
            local_108 = CONCAT44(ptStack_30,local_34);
            _local_100 = CONCAT44(ppiStack_28,local_2c);
            local_124._0_4_ = &vftable;
            local_124._4_4_ = FUN_0066cd30;
            local_8._0_1_ = 3;
            local_114 = 0;
            Concurrency::details::_StructuredTaskCollection::_Schedule
                      (local_80,(_UnrealizedChore *)local_124);
          }
        }
        local_44 = &local_1c;
        _local_100 = CONCAT44(0x67023d,local_100);
        Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of
                  ((uint)(this->vftablePtr[1].vfunction1 + local_20));
        _local_100 = CONCAT44(0x67025f,local_100);
        FUN_0066eef0();
        local_44 = (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
                    **)0x0;
        if (local_40 != 0) {
          local_d0 = 0;
          local_cc = _UnderlyingYield_exref;
          do {
            Concurrency::details::_SpinWait<1>::_SpinOnce(local_d8);
          } while (local_40 != 0);
        }
        local_24 = (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
                    *)((int)&local_24->vfunction1 + 1);
        local_20 = local_20 + *local_84->field1_0x4;
        this = local_84;
        local_1c = local_24;
      } while ((int)local_24 < local_18);
    }
    LOCK();
    local_48 = 1;
    UNLOCK();
    _local_100 = CONCAT44((_UnrealizedChore *)local_80,0x6702cc);
    Concurrency::details::_StructuredTaskCollection::_RunAndWait((_UnrealizedChore *)local_80);
    local_48 = 2;
    local_8._0_1_ = 2;
    details::
    _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
              (&local_60);
    local_b4._0_4_ = &vftable;
    local_8._0_1_ = 5;
    if ((local_ac != (_AllocBase)0x0) && (local_a4 == '\0')) {
      Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)local_b4);
    }
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
    local_b4._0_4_ = &details::_Chore::vftable;
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_48 != 2) {
      if (local_54 != 0) {
        LOCK();
        **(int **)(local_54 + 8) = **(int **)(local_54 + 8) + 1;
        UNLOCK();
      }
      LOCK();
      local_48 = 1;
      UNLOCK();
    }
    Concurrency::details::_Cancellation_beacon::~_Cancellation_beacon
              ((_Cancellation_beacon *)local_50);
    local_8 = 0xffffffff;
    if (0 < local_70) {
      Concurrency::details::_StructuredTaskCollection::_Abort(local_80);
      cVar2 = __uncaught_exception();
      if (cVar2 == '\0') {
        if ((local_78 != 0) && (local_78 != 2)) {
          Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_80);
        }
        Concurrency::missing_wait::missing_wait(local_e4);
        _local_100 = CONCAT44(local_e4,0x670393);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_e4,(ThrowInfo *)&DAT_0075f3d8);
      }
    }
    if ((local_78 != 0) && (local_78 != 2)) {
      Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_80);
    }
  }
LAB_006703e2:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_> @ 00670410  kind=lib  attributed-by=rtti-lib-ns  size=1188 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall
Concurrency::
task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
::
~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
          (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
           *this)

{
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
  *ptVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_124 [16];
  undefined1 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  missing_wait local_e4 [3];
  _SpinWait<1> local_d8 [8];
  undefined4 local_d0;
  code *local_cc;
  exception local_c8 [3];
  _UnrealizedChore *local_bc;
  _UnrealizedChore *local_b8;
  undefined1 local_b4 [8];
  _AllocBase local_ac;
  char local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
  *local_84;
  _StructuredTaskCollection local_80 [4];
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
  local_60;
  _UnrealizedChore *local_5c;
  int *local_58;
  int local_54;
  int *local_50 [2];
  int local_48;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
  **local_44;
  int local_40;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
  *local_3c;
  int *piStack_38;
  _AllocBase local_34;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
  *ptStack_30;
  int local_2c;
  int **ppiStack_28;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
  *local_24;
  int local_20;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
  *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f81b5;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = this->field3_0xc;
  local_18 = this->field4_0x10;
  local_84 = this;
  if (this->field5_0x14 != (_AllocBase)0x0) {
    _local_100 = CONCAT44(0x67045f,local_100);
    cVar2 = FUN_00671340();
    if (cVar2 == '\0') goto LAB_00670892;
  }
  ptVar1 = local_1c;
  local_20 = *this->field1_0x4 * (int)local_1c;
  local_24 = local_1c;
  if (local_18 - (int)local_1c == 1) {
    _local_100 = CONCAT44(0x670498,local_100);
    Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of
              ((uint)(this->vftablePtr[1].vfunction1 + local_20));
    _local_100 = CONCAT44(0x6704ba,local_100);
    FUN_0066f280();
  }
  else {
    local_70 = 0;
    local_6c = 0x80000000;
    local_68 = 0;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    }
    local_74 = 0;
    local_7c = 0x1fffffff;
    local_78 = 0;
    local_8 = 0;
    _local_100 = CONCAT44(0x670520,local_100);
    FUN_0066e1b0();
    local_3c = this->vftablePtr;
    piStack_38 = this->field1_0x4;
    local_34 = this->_AllocBase;
    ptStack_30 = local_1c;
    local_2c = local_18;
    ppiStack_28 = &local_58;
    local_8._0_1_ = 1;
    details::_UnrealizedChore::~_UnrealizedChore((_UnrealizedChore *)local_b4);
    local_a0 = CONCAT44(piStack_38,local_3c);
    local_98 = CONCAT44(ptStack_30,local_34);
    local_90 = CONCAT44(ppiStack_28,local_2c);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
                        */
    local_b4._0_4_ = &vftable;
    local_b4._4_4_ = FUN_0066cd40;
    local_8._0_1_ = 2;
    local_a4 = '\0';
    _local_100 = CONCAT44(0x6705a8,local_100);
    Concurrency::details::_StructuredTaskCollection::_Schedule
              (local_80,(_UnrealizedChore *)local_b4);
                    /* inlined destructor:
                       Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>::~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
                        */
    local_60.vftablePtr =
         &details::
          _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
          ::vftable;
    local_5c = (_UnrealizedChore *)0x0;
    local_8._0_1_ = 3;
    if ((int)ptVar1 < local_18) {
      do {
        if ((*local_50[0] != 0) &&
           ((local_48 != 0 ||
            (bVar3 = Concurrency::details::_Cancellation_beacon::_Confirm_cancel
                               ((_Cancellation_beacon *)local_50), bVar3)))) break;
        if (local_58 != (int *)0x0) {
          if (1 < local_18 - (int)local_1c) {
            local_18 = (int)&local_1c->vfunction1 + (local_18 - (int)local_1c) / 2;
          }
          *local_58 = local_18;
          LOCK();
          local_58 = (int *)0x0;
          UNLOCK();
          if (1 < local_18 - (int)local_1c) {
            if ((&stack0x00000000 == (undefined1 *)0xf4) ||
               ((_UnrealizedChore *)local_124 == (_UnrealizedChore *)0x0)) {
              local_88 = "bad allocation";
              std::exception::exception(local_c8,&local_88,1);
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
              local_c8[0] = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(local_c8,(ThrowInfo *)&DAT_0075f410);
            }
            local_3c = this->vftablePtr;
            piStack_38 = this->field1_0x4;
            local_34 = this->_AllocBase;
            ptStack_30 = local_1c;
            local_2c = local_18;
            ppiStack_28 = &local_58;
            local_8._0_1_ = 4;
            local_bc = (_UnrealizedChore *)local_124;
            local_b8 = (_UnrealizedChore *)local_124;
            local_5c = (_UnrealizedChore *)local_124;
            details::_UnrealizedChore::~_UnrealizedChore((_UnrealizedChore *)local_124);
            local_110 = CONCAT44(piStack_38,local_3c);
            local_108 = CONCAT44(ptStack_30,local_34);
            _local_100 = CONCAT44(ppiStack_28,local_2c);
            local_124._0_4_ = &vftable;
            local_124._4_4_ = FUN_0066cd40;
            local_8._0_1_ = 3;
            local_114 = 0;
            Concurrency::details::_StructuredTaskCollection::_Schedule
                      (local_80,(_UnrealizedChore *)local_124);
          }
        }
        local_44 = &local_1c;
        _local_100 = CONCAT44(0x6706ed,local_100);
        Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of
                  ((uint)(this->vftablePtr[1].vfunction1 + local_20));
        _local_100 = CONCAT44(0x67070f,local_100);
        FUN_0066f280();
        local_44 = (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
                    **)0x0;
        if (local_40 != 0) {
          local_d0 = 0;
          local_cc = _UnderlyingYield_exref;
          do {
            Concurrency::details::_SpinWait<1>::_SpinOnce(local_d8);
          } while (local_40 != 0);
        }
        local_24 = (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
                    *)((int)&local_24->vfunction1 + 1);
        local_20 = local_20 + *local_84->field1_0x4;
        this = local_84;
        local_1c = local_24;
      } while ((int)local_24 < local_18);
    }
    LOCK();
    local_48 = 1;
    UNLOCK();
    _local_100 = CONCAT44((_UnrealizedChore *)local_80,0x67077c);
    Concurrency::details::_StructuredTaskCollection::_RunAndWait((_UnrealizedChore *)local_80);
    local_48 = 2;
    local_8._0_1_ = 2;
    details::
    _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
              (&local_60);
    local_b4._0_4_ = &vftable;
    local_8._0_1_ = 5;
    if ((local_ac != (_AllocBase)0x0) && (local_a4 == '\0')) {
      Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)local_b4);
    }
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
    local_b4._0_4_ = &details::_Chore::vftable;
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_48 != 2) {
      if (local_54 != 0) {
        LOCK();
        **(int **)(local_54 + 8) = **(int **)(local_54 + 8) + 1;
        UNLOCK();
      }
      LOCK();
      local_48 = 1;
      UNLOCK();
    }
    Concurrency::details::_Cancellation_beacon::~_Cancellation_beacon
              ((_Cancellation_beacon *)local_50);
    local_8 = 0xffffffff;
    if (0 < local_70) {
      Concurrency::details::_StructuredTaskCollection::_Abort(local_80);
      cVar2 = __uncaught_exception();
      if (cVar2 == '\0') {
        if ((local_78 != 0) && (local_78 != 2)) {
          Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_80);
        }
        Concurrency::missing_wait::missing_wait(local_e4);
        _local_100 = CONCAT44(local_e4,0x670843);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_e4,(ThrowInfo *)&DAT_0075f3d8);
      }
    }
    if ((local_78 != 0) && (local_78 != 2)) {
      Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_80);
    }
  }
LAB_00670892:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_> @ 006708c0  kind=lib  attributed-by=rtti-lib-ns  size=1188 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall
Concurrency::
task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
::
~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
          (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
           *this)

{
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
  *ptVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_124 [16];
  undefined1 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  missing_wait local_e4 [3];
  _SpinWait<1> local_d8 [8];
  undefined4 local_d0;
  code *local_cc;
  exception local_c8 [3];
  _UnrealizedChore *local_bc;
  _UnrealizedChore *local_b8;
  undefined1 local_b4 [8];
  _AllocBase local_ac;
  char local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
  *local_84;
  _StructuredTaskCollection local_80 [4];
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
  local_60;
  _UnrealizedChore *local_5c;
  int *local_58;
  int local_54;
  int *local_50 [2];
  int local_48;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
  **local_44;
  int local_40;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
  *local_3c;
  int *piStack_38;
  _AllocBase local_34;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
  *ptStack_30;
  int local_2c;
  int **ppiStack_28;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
  *local_24;
  int local_20;
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
  *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8225;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = this->field3_0xc;
  local_18 = this->field4_0x10;
  local_84 = this;
  if (this->field5_0x14 != (_AllocBase)0x0) {
    _local_100 = CONCAT44(0x67090f,local_100);
    cVar2 = FUN_00671340();
    if (cVar2 == '\0') goto LAB_00670d42;
  }
  ptVar1 = local_1c;
  local_20 = *this->field1_0x4 * (int)local_1c;
  local_24 = local_1c;
  if (local_18 - (int)local_1c == 1) {
    _local_100 = CONCAT44(0x670948,local_100);
    Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of
              ((uint)(this->vftablePtr[1].vfunction1 + local_20));
    _local_100 = CONCAT44(0x67096a,local_100);
    FUN_0066ed80();
  }
  else {
    local_70 = 0;
    local_6c = 0x80000000;
    local_68 = 0;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    }
    local_74 = 0;
    local_7c = 0x1fffffff;
    local_78 = 0;
    local_8 = 0;
    _local_100 = CONCAT44(0x6709d0,local_100);
    FUN_0066e1b0();
    local_3c = this->vftablePtr;
    piStack_38 = this->field1_0x4;
    local_34 = this->_AllocBase;
    ptStack_30 = local_1c;
    local_2c = local_18;
    ppiStack_28 = &local_58;
    local_8._0_1_ = 1;
    details::_UnrealizedChore::~_UnrealizedChore((_UnrealizedChore *)local_b4);
    local_a0 = CONCAT44(piStack_38,local_3c);
    local_98 = CONCAT44(ptStack_30,local_34);
    local_90 = CONCAT44(ppiStack_28,local_2c);
                    /* inlined destructor:
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>::~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
                        */
    local_b4._0_4_ = &vftable;
    local_b4._4_4_ = FUN_0066cd50;
    local_8._0_1_ = 2;
    local_a4 = '\0';
    _local_100 = CONCAT44(0x670a58,local_100);
    Concurrency::details::_StructuredTaskCollection::_Schedule
              (local_80,(_UnrealizedChore *)local_b4);
                    /* inlined destructor:
                       Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>::~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
                        */
    local_60.vftablePtr =
         &details::
          _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
          ::vftable;
    local_5c = (_UnrealizedChore *)0x0;
    local_8._0_1_ = 3;
    if ((int)ptVar1 < local_18) {
      do {
        if ((*local_50[0] != 0) &&
           ((local_48 != 0 ||
            (bVar3 = Concurrency::details::_Cancellation_beacon::_Confirm_cancel
                               ((_Cancellation_beacon *)local_50), bVar3)))) break;
        if (local_58 != (int *)0x0) {
          if (1 < local_18 - (int)local_1c) {
            local_18 = (int)&local_1c->vfunction1 + (local_18 - (int)local_1c) / 2;
          }
          *local_58 = local_18;
          LOCK();
          local_58 = (int *)0x0;
          UNLOCK();
          if (1 < local_18 - (int)local_1c) {
            if ((&stack0x00000000 == (undefined1 *)0xf4) ||
               ((_UnrealizedChore *)local_124 == (_UnrealizedChore *)0x0)) {
              local_88 = "bad allocation";
              std::exception::exception(local_c8,&local_88,1);
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
              local_c8[0] = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(local_c8,(ThrowInfo *)&DAT_0075f410);
            }
            local_3c = this->vftablePtr;
            piStack_38 = this->field1_0x4;
            local_34 = this->_AllocBase;
            ptStack_30 = local_1c;
            local_2c = local_18;
            ppiStack_28 = &local_58;
            local_8._0_1_ = 4;
            local_bc = (_UnrealizedChore *)local_124;
            local_b8 = (_UnrealizedChore *)local_124;
            local_5c = (_UnrealizedChore *)local_124;
            details::_UnrealizedChore::~_UnrealizedChore((_UnrealizedChore *)local_124);
            local_110 = CONCAT44(piStack_38,local_3c);
            local_108 = CONCAT44(ptStack_30,local_34);
            _local_100 = CONCAT44(ppiStack_28,local_2c);
            local_124._0_4_ = &vftable;
            local_124._4_4_ = FUN_0066cd50;
            local_8._0_1_ = 3;
            local_114 = 0;
            Concurrency::details::_StructuredTaskCollection::_Schedule
                      (local_80,(_UnrealizedChore *)local_124);
          }
        }
        local_44 = &local_1c;
        _local_100 = CONCAT44(0x670b9d,local_100);
        Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of
                  ((uint)(this->vftablePtr[1].vfunction1 + local_20));
        _local_100 = CONCAT44(0x670bbf,local_100);
        FUN_0066ed80();
        local_44 = (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
                    **)0x0;
        if (local_40 != 0) {
          local_d0 = 0;
          local_cc = _UnderlyingYield_exref;
          do {
            Concurrency::details::_SpinWait<1>::_SpinOnce(local_d8);
          } while (local_40 != 0);
        }
        local_24 = (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
                    *)((int)&local_24->vfunction1 + 1);
        local_20 = local_20 + *local_84->field1_0x4;
        this = local_84;
        local_1c = local_24;
      } while ((int)local_24 < local_18);
    }
    LOCK();
    local_48 = 1;
    UNLOCK();
    _local_100 = CONCAT44((_UnrealizedChore *)local_80,0x670c2c);
    Concurrency::details::_StructuredTaskCollection::_RunAndWait((_UnrealizedChore *)local_80);
    local_48 = 2;
    local_8._0_1_ = 2;
    details::
    _MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
              (&local_60);
    local_b4._0_4_ = &vftable;
    local_8._0_1_ = 5;
    if ((local_ac != (_AllocBase)0x0) && (local_a4 == '\0')) {
      Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)local_b4);
    }
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
    local_b4._0_4_ = &details::_Chore::vftable;
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_48 != 2) {
      if (local_54 != 0) {
        LOCK();
        **(int **)(local_54 + 8) = **(int **)(local_54 + 8) + 1;
        UNLOCK();
      }
      LOCK();
      local_48 = 1;
      UNLOCK();
    }
    Concurrency::details::_Cancellation_beacon::~_Cancellation_beacon
              ((_Cancellation_beacon *)local_50);
    local_8 = 0xffffffff;
    if (0 < local_70) {
      Concurrency::details::_StructuredTaskCollection::_Abort(local_80);
      cVar2 = __uncaught_exception();
      if (cVar2 == '\0') {
        if ((local_78 != 0) && (local_78 != 2)) {
          Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_80);
        }
        Concurrency::missing_wait::missing_wait(local_e4);
        _local_100 = CONCAT44(local_e4,0x670cf3);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_e4,(ThrowInfo *)&DAT_0075f3d8);
      }
    }
    if ((local_78 != 0) && (local_78 != 2)) {
      Concurrency::details::_StructuredTaskCollection::_CleanupToken(local_80);
    }
  }
LAB_00670d42:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>::deleting_destructor @ 00670d70  kind=lib  attributed-by=rtti-lib-ns  size=30 */

_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
* __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
::deleting_destructor
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
           *this,byte param_1)

{
  ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
            (this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>::deleting_destructor @ 00670da0  kind=lib  attributed-by=rtti-lib-ns  size=30 */

_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
* __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
::deleting_destructor
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
           *this,byte param_1)

{
  ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
            (this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>::deleting_destructor @ 00670dd0  kind=lib  attributed-by=rtti-lib-ns  size=30 */

_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
* __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
::deleting_destructor
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
           *this,byte param_1)

{
  ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
            (this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>::deleting_destructor @ 00670e00  kind=lib  attributed-by=rtti-lib-ns  size=30 */

_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
* __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
::deleting_destructor
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
           *this,byte param_1)

{
  ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
            (this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* Concurrency::details::_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>::deleting_destructor @ 00670e30  kind=lib  attributed-by=rtti-lib-ns  size=30 */

_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
* __thiscall
Concurrency::details::
_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
::deleting_destructor
          (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
           *this,byte param_1)

{
  ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
            (this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>::deleting_destructor @ 00670e60  kind=lib  attributed-by=rtti-lib-ns  size=30 */

_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
* __thiscall
Concurrency::details::
_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
::deleting_destructor
          (_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
           *this,byte param_1)

{
  ~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
            (this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>::deleting_destructor @ 00670e90  kind=lib  attributed-by=rtti-lib-ns  size=30 */

_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
* __thiscall
Concurrency::details::
_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
::deleting_destructor
          (_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
           *this,byte param_1)

{
  ~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
            (this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>::deleting_destructor @ 00670ec0  kind=lib  attributed-by=rtti-lib-ns  size=30 */

_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
* __thiscall
Concurrency::details::
_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
::deleting_destructor
          (_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
           *this,byte param_1)

{
  ~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
            (this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>::deleting_destructor @ 00670ef0  kind=lib  attributed-by=rtti-lib-ns  size=30 */

_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
* __thiscall
Concurrency::details::
_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
::deleting_destructor
          (_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
           *this,byte param_1)

{
  ~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
            (this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* Concurrency::details::_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>::deleting_destructor @ 00670f20  kind=lib  attributed-by=rtti-lib-ns  size=30 */

_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
* __thiscall
Concurrency::details::
_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
::deleting_destructor
          (_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
           *this,byte param_1)

{
  ~_MallocaListHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
            (this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>::vfunction1 @ 00670f50  kind=lib  attributed-by=rtti-lib-ns  size=122 */

task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
* __thiscall
Concurrency::
task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
::vfunction1(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
             *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0;
  if ((this->_AllocBase != (_AllocBase)0x0) && ((char)this->field4_0x10 == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)this);
  }
  local_8 = 0xffffffff;
  this->vftablePtr =
       (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
        *)&details::_Chore::vftable;
  if ((param_1 & 1) != 0) {
    Concurrency::Free(this);
  }
  ExceptionList = local_10;
  return this;
}


/* Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>::vfunction1 @ 00670fd0  kind=lib  attributed-by=rtti-lib-ns  size=122 */

task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
* __thiscall
Concurrency::
task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
::vfunction1(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
             *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0;
  if ((this->_AllocBase != (_AllocBase)0x0) && ((char)this->field4_0x10 == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)this);
  }
  local_8 = 0xffffffff;
  this->vftablePtr =
       (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
        *)&details::_Chore::vftable;
  if ((param_1 & 1) != 0) {
    Concurrency::Free(this);
  }
  ExceptionList = local_10;
  return this;
}


/* Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>::vfunction1 @ 00671050  kind=lib  attributed-by=rtti-lib-ns  size=122 */

task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
* __thiscall
Concurrency::
task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
::vfunction1(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
             *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0;
  if ((this->_AllocBase != (_AllocBase)0x0) && ((char)this->field4_0x10 == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)this);
  }
  local_8 = 0xffffffff;
  this->vftablePtr =
       (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
        *)&details::_Chore::vftable;
  if ((param_1 & 1) != 0) {
    Concurrency::Free(this);
  }
  ExceptionList = local_10;
  return this;
}


/* Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>::vfunction1 @ 006710d0  kind=lib  attributed-by=rtti-lib-ns  size=122 */

task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
* __thiscall
Concurrency::
task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
::vfunction1(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
             *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0;
  if ((this->_AllocBase != (_AllocBase)0x0) && ((char)this->field4_0x10 == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)this);
  }
  local_8 = 0xffffffff;
  this->vftablePtr =
       (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
        *)&details::_Chore::vftable;
  if ((param_1 & 1) != 0) {
    Concurrency::Free(this);
  }
  ExceptionList = local_10;
  return this;
}


/* Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>::vfunction1 @ 00671150  kind=lib  attributed-by=rtti-lib-ns  size=122 */

task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
* __thiscall
Concurrency::
task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
::vfunction1(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
             *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0;
  if ((this->_AllocBase != (_AllocBase)0x0) && ((char)this->field4_0x10 == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection((_UnrealizedChore *)this);
  }
  local_8 = 0xffffffff;
  this->vftablePtr =
       (task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
        *)&details::_Chore::vftable;
  if ((param_1 & 1) != 0) {
    Concurrency::Free(this);
  }
  ExceptionList = local_10;
  return this;
}


/* Concurrency::details::_Chore::deleting_destructor @ 006711d0  kind=lib  attributed-by=rtti-lib-ns  size=31 */

_Chore * __thiscall Concurrency::details::_Chore::deleting_destructor(_Chore *this,byte param_1)

{
                    /* inlined destructor: Concurrency::details::_Chore::~_Chore */
  this->vftablePtr = &vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* Concurrency::details::_UnrealizedChore::vfunction1 @ 00671200  kind=lib  attributed-by=rtti-lib-ns  size=35 */

_UnrealizedChore * __thiscall
Concurrency::details::_UnrealizedChore::vfunction1(_UnrealizedChore *this,byte param_1)

{
  this->vftablePtr = (_UnrealizedChore_vftable *)&_Chore::vftable;
  if ((param_1 & 1) != 0) {
    Concurrency::Free(this);
  }
  return this;
}


/* Concurrency::missing_wait::deleting_destructor @ 00671260  kind=lib  attributed-by=rtti-lib-ns  size=31 */

missing_wait * __thiscall
Concurrency::missing_wait::deleting_destructor(missing_wait *this,byte param_1)

{
  std::exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


