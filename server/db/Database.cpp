// Database (db) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Database.h"

/* cube::Database::Database @ 00412940  kind=game  attributed-by=rtti  size=16 */

Database * __thiscall cube::Database::Database(Database *this)

{
  this->vftablePtr = &vftable;
  (this->Database_data).offset_0x0 = (int *)0x0;
  return this;
}


/* cube::Database::Database @ 00412950  kind=game  attributed-by=rtti  size=34 */

void __thiscall cube::Database::Database(Database *this)

{
  int *piVar1;
  
  piVar1 = (this->Database_data).offset_0x0;
  this->vftablePtr = &vftable;
  if (piVar1 != (int *)0x0) {
    FUN_00462fe0(piVar1);
    (this->Database_data).offset_0x0 = (int *)0x0;
  }
  return;
}


/* cube::Database::scalar_deleting_destructor @ 00412ac0  kind=game  attributed-by=rtti  size=57 */

undefined4 * __thiscall cube::Database::scalar_deleting_destructor(Database *this,byte param_1)

{
  int *piVar1;
  
  piVar1 = (this->Database_data).offset_0x0;
                    /* inlined destructor: cube::Database::~Database */
  this->vftablePtr = &vftable;
  if (piVar1 != (int *)0x0) {
    FUN_00462fe0(piVar1);
    (this->Database_data).offset_0x0 = (int *)0x0;
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}


