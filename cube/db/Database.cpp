// Database (db) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Database.h"

/* cube::Database::Database @ 00449380  kind=game  attributed-by=rtti  size=16 */

Database * __thiscall cube::Database::Database(Database *this)

{
  this->vftablePtr = &vftable;
  (this->Database_data).offset_0x0 = 0;
  return this;
}


/* cube::Database::Database @ 00449390  kind=game  attributed-by=rtti  size=34 */

void __thiscall cube::Database::Database(Database *this)

{
  int iVar1;
  
  iVar1 = (this->Database_data).offset_0x0;
  this->vftablePtr = &vftable;
  if (iVar1 != 0) {
    FUN_00520620(iVar1);
    (this->Database_data).offset_0x0 = 0;
  }
  return;
}


/* cube::Database::deleting_destructor @ 004493c0  kind=game  attributed-by=rtti  size=54 */

Database * __thiscall cube::Database::deleting_destructor(Database *this,byte param_1)

{
  int iVar1;
  
  iVar1 = (this->Database_data).offset_0x0;
                    /* inlined destructor: cube::Database::~Database */
  this->vftablePtr = &vftable;
  if (iVar1 != 0) {
    FUN_00520620(iVar1);
    (this->Database_data).offset_0x0 = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


