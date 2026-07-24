// helpers_computed (game_misc) -- cube. 65 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_computed.h"

/* compute_401040 @ 00401040  kind=gamemisc  attributed-by=role:computed  size=17 */

byte FUN_00401040(int *param_1)

{
  return *(byte *)(*param_1 + 5) & 4;
}


/* compute_408150 @ 00408150  kind=gamemisc  attributed-by=role:computed  size=12 */

int FUN_00408150(undefined4 param_1,int param_2)

{
  return param_2 * 2 >> 1;
}


/* compute_4081e0 @ 004081e0  kind=gamemisc  attributed-by=role:computed  size=23 */

undefined4 FUN_004081e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


/* compute_40bbb0 @ 0040bbb0  kind=gamemisc  attributed-by=role:computed  size=11 */

int FUN_0040bbb0(int param_1,int param_2)

{
  return param_1 + param_2;
}


/* compute_40f8e0 @ 0040f8e0  kind=gamemisc  attributed-by=role:computed  size=4 */

undefined4 FUN_0040f8e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3c);
}


/* compute_411320 @ 00411320  kind=gamemisc  attributed-by=role:computed  size=4 */

undefined4 FUN_00411320(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}


/* compute_411cf0 @ 00411cf0  kind=gamemisc  attributed-by=role:computed  size=4 */

undefined4 FUN_00411cf0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x40);
}


/* compute_411d00 @ 00411d00  kind=gamemisc  attributed-by=role:computed  size=7 */

int FUN_00411d00(void)

{
  int in_ECX;
  
  return in_ECX + 0x2e4;
}


/* compute_4120a0 @ 004120a0  kind=gamemisc  attributed-by=role:computed  size=12 */

int FUN_004120a0(int param_1)

{
  int in_ECX;
  
  return param_1 + in_ECX;
}


/* compute_4120b0 @ 004120b0  kind=gamemisc  attributed-by=role:computed  size=13 */

int FUN_004120b0(int param_1)

{
  int in_ECX;
  
  return in_ECX + param_1 * 8;
}


/* compute_424810 @ 00424810  kind=gamemisc  attributed-by=role:computed  size=4 */

undefined4 FUN_00424810(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}


/* compute_424820 @ 00424820  kind=gamemisc  attributed-by=role:computed  size=4 */

undefined4 FUN_00424820(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x48);
}


/* compute_428970 @ 00428970  kind=gamemisc  attributed-by=role:computed  size=13 */

int FUN_00428970(int param_1)

{
  int in_ECX;
  
  return in_ECX + param_1 * 4;
}


/* compute_428980 @ 00428980  kind=gamemisc  attributed-by=role:computed  size=15 */

int FUN_00428980(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x10 + *in_ECX;
}


/* compute_42c6c0 @ 0042c6c0  kind=gamemisc  attributed-by=role:computed  size=6 */

int FUN_0042c6c0(void)

{
  int *in_ECX;
  
  return *in_ECX + 8;
}


/* compute_42c6d0 @ 0042c6d0  kind=gamemisc  attributed-by=role:computed  size=3 */

undefined4 FUN_0042c6d0(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


/* compute_42f590 @ 0042f590  kind=gamemisc  attributed-by=role:computed  size=10 */

int FUN_0042f590(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x20) * 0x40 + *(int *)(in_ECX + 0x4c);
}


/* compute_4348b0 @ 004348b0  kind=gamemisc  attributed-by=role:computed  size=4 */

undefined4 FUN_004348b0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


/* compute_434b70 @ 00434b70  kind=gamemisc  attributed-by=role:computed  size=4 */

undefined4 FUN_00434b70(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1c);
}


/* compute_434c10 @ 00434c10  kind=gamemisc  attributed-by=role:computed  size=10 */

byte FUN_00434c10(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 3) & 0x1f;
}


/* compute_43a490 @ 0043a490  kind=gamemisc  attributed-by=role:computed  size=7 */

undefined4 FUN_0043a490(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xe8);
}


/* compute_44b560 @ 0044b560  kind=gamemisc  attributed-by=role:computed  size=18 */

int FUN_0044b560(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x188 + *in_ECX;
}


/* compute_44e890 @ 0044e890  kind=gamemisc  attributed-by=role:computed  size=23 */

int FUN_0044e890(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x188;
}


/* compute_4688d0 @ 004688d0  kind=gamemisc  attributed-by=role:computed  size=19 */

bool FUN_004688d0(int *param_1)

{
  int *in_ECX;
  
  return *in_ECX != *param_1;
}


/* compute_468c60 @ 00468c60  kind=gamemisc  attributed-by=role:computed  size=15 */

int FUN_00468c60(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 4;
}


/* compute_468c70 @ 00468c70  kind=gamemisc  attributed-by=role:computed  size=15 */

int FUN_00468c70(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 8;
}


/* compute_468c80 @ 00468c80  kind=gamemisc  attributed-by=role:computed  size=6 */

int FUN_00468c80(void)

{
  int *in_ECX;
  
  return *in_ECX + -0xc;
}


/* compute_468c90 @ 00468c90  kind=gamemisc  attributed-by=role:computed  size=6 */

int FUN_00468c90(void)

{
  int *in_ECX;
  
  return *in_ECX + 0x10;
}


/* compute_477220 @ 00477220  kind=gamemisc  attributed-by=role:computed  size=9 */

bool FUN_00477220(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) == 0;
}


/* compute_477240 @ 00477240  kind=gamemisc  attributed-by=role:computed  size=11 */

bool FUN_00477240(void)

{
  int *in_ECX;
  
  return *in_ECX == in_ECX[1];
}


/* compute_47b5f0 @ 0047b5f0  kind=gamemisc  attributed-by=role:computed  size=4 */

undefined4 FUN_0047b5f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x4c);
}


/* compute_487f50 @ 00487f50  kind=gamemisc  attributed-by=role:computed  size=9 */

int FUN_00487f50(void)

{
  int *in_ECX;
  
  return in_ECX[1] - *in_ECX >> 2;
}


/* compute_487f60 @ 00487f60  kind=gamemisc  attributed-by=role:computed  size=9 */

int FUN_00487f60(void)

{
  int *in_ECX;
  
  return in_ECX[1] - *in_ECX >> 3;
}


/* compute_4abc30 @ 004abc30  kind=gamemisc  attributed-by=role:computed  size=6 */

int FUN_004abc30(void)

{
  int *in_ECX;
  
  return *in_ECX + -4;
}


/* compute_4c0ec0 @ 004c0ec0  kind=gamemisc  attributed-by=role:computed  size=8 */

byte FUN_004c0ec0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x30) & 1;
}


/* compute_4d6c20 @ 004d6c20  kind=gamemisc  attributed-by=role:computed  size=10 */

void FUN_004d6c20(size_t param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004d6c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  malloc(param_1);
  return;
}


/* compute_4d6d60 @ 004d6d60  kind=gamemisc  attributed-by=role:computed  size=10 */

int FUN_004d6d60(void)

{
  int *in_ECX;
  
  return (*in_ECX != 0) - 1;
}


/* compute_4db110 @ 004db110  kind=gamemisc  attributed-by=role:computed  size=18 */

int FUN_004db110(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 0xc;
}


/* compute_51ce90 @ 0051ce90  kind=gamemisc  attributed-by=role:computed  size=13 */

undefined4 FUN_0051ce90(int *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}


/* compute_5260c0 @ 005260c0  kind=gamemisc  attributed-by=role:computed  size=19 */

undefined1 FUN_005260c0(int param_1)

{
  return (&DAT_00715253)[*(byte *)(param_1 + 0x3c)];
}


/* compute_5268d0 @ 005268d0  kind=gamemisc  attributed-by=role:computed  size=14 */

void FUN_005268d0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005268d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free((void *)(param_1 + -8));
  return;
}


/* compute_526db0 @ 00526db0  kind=gamemisc  attributed-by=role:computed  size=14 */

uint FUN_00526db0(int param_1)

{
  return param_1 + 7U & 0xfffffff8;
}


/* compute_526e20 @ 00526e20  kind=gamemisc  attributed-by=role:computed  size=21 */

int FUN_00526e20(int param_1)

{
  return (*(byte *)(param_1 + 0x10) & 0x10 | 8) << 8;
}


/* compute_528710 @ 00528710  kind=gamemisc  attributed-by=role:computed  size=14 */

void FUN_00528710(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}


/* compute_528800 @ 00528800  kind=gamemisc  attributed-by=role:computed  size=14 */

undefined4 FUN_00528800(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x18);
}


/* compute_55dc20 @ 0055dc20  kind=gamemisc  attributed-by=role:computed  size=10 */

void FUN_0055dc20(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055dc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00766608._4_4_)();
  return;
}


/* compute_585870 @ 00585870  kind=gamemisc  attributed-by=role:computed  size=15 */

int FUN_00585870(int *param_1)

{
  return param_1[1] - *param_1;
}


/* compute_586b90 @ 00586b90  kind=gamemisc  attributed-by=role:computed  size=21 */

undefined1 FUN_00586b90(int param_1,int param_2)

{
  return *(undefined1 *)(param_1 + 0x194 + param_2);
}


/* compute_586be0 @ 00586be0  kind=gamemisc  attributed-by=role:computed  size=19 */

undefined1 FUN_00586be0(int *param_1,int param_2)

{
  return *(undefined1 *)(*param_1 + param_2);
}


/* compute_5945b0 @ 005945b0  kind=gamemisc  attributed-by=role:computed  size=18 */

int FUN_005945b0(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x148 + *in_ECX;
}


/* compute_5c0100 @ 005c0100  kind=gamemisc  attributed-by=role:computed  size=23 */

int FUN_005c0100(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x18;
}


/* compute_642ab0 @ 00642ab0  kind=gamemisc  attributed-by=role:computed  size=22 */

int FUN_00642ab0(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0xc;
}


/* Catch@00650dfb @ 00650dfb  kind=gamemisc  attributed-by=role:computed  size=6 */

undefined * Catch_00650dfb(void)

{
  return &DAT_00650e01;
}


/* compute_6531e0 @ 006531e0  kind=gamemisc  attributed-by=role:computed  size=7 */

undefined4 FUN_006531e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xcc);
}


/* compute_66cd10 @ 0066cd10  kind=gamemisc  attributed-by=role:computed  size=15 */

void FUN_0066cd10(int param_1)

{
  Concurrency::
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
  ::
  ~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
            ((task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
              *)(param_1 + 0x14));
  return;
}


/* compute_66cd20 @ 0066cd20  kind=gamemisc  attributed-by=role:computed  size=15 */

void FUN_0066cd20(int param_1)

{
  Concurrency::
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
  ::
  ~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
            ((task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
              *)(param_1 + 0x14));
  return;
}


/* compute_66cd30 @ 0066cd30  kind=gamemisc  attributed-by=role:computed  size=15 */

void FUN_0066cd30(int param_1)

{
  Concurrency::
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
  ::
  ~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
            ((task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
              *)(param_1 + 0x14));
  return;
}


/* compute_66cd40 @ 0066cd40  kind=gamemisc  attributed-by=role:computed  size=15 */

void FUN_0066cd40(int param_1)

{
  Concurrency::
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
  ::
  ~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
            ((task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
              *)(param_1 + 0x14));
  return;
}


/* compute_66cd50 @ 0066cd50  kind=gamemisc  attributed-by=role:computed  size=15 */

void FUN_0066cd50(int param_1)

{
  Concurrency::
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
  ::
  ~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
            ((task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
              *)(param_1 + 0x14));
  return;
}


/* compute_68d74c @ 0068d74c  kind=gamemisc  attributed-by=role:computed  size=9 */

void FUN_0068d74c(void)

{
  _unlock(8);
  return;
}


/* ___report_rangecheckfailure @ 0068dca4  kind=gamemisc  attributed-by=role:computed  size=12 */

/* Library Function - Single Match
    ___report_rangecheckfailure
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___report_rangecheckfailure(void)

{
  ___report_securityfailure(8);
  return;
}


/* compute_6dec50 @ 006dec50  kind=gamemisc  attributed-by=role:computed  size=19 */

int FUN_006dec50(undefined4 *param_1,undefined4 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}


/* compute_6f93e0 @ 006f93e0  kind=gamemisc  attributed-by=role:computed  size=12 */

void FUN_006f93e0(void)

{
  _atexit(std::error_category::~error_category);
  return;
}


/* compute_6f93f0 @ 006f93f0  kind=gamemisc  attributed-by=role:computed  size=12 */

void FUN_006f93f0(void)

{
  _atexit(std::error_category::~error_category);
  return;
}


/* compute_6f9400 @ 006f9400  kind=gamemisc  attributed-by=role:computed  size=12 */

void FUN_006f9400(void)

{
  _atexit(std::error_category::~error_category);
  return;
}


