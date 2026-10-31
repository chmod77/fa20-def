
/* WARNING: Removing unreachable block (ram,0x000ad5dc) */
/* WARNING: Removing unreachable block (ram,0x000ad5e2) */
/* WARNING: Removing unreachable block (ram,0x000ad600) */
/* WARNING: Removing unreachable block (ram,0x000ad61a) */
/* WARNING: Removing unreachable block (ram,0x000ad628) */
/* WARNING: Removing unreachable block (ram,0x000ad62c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ad5a8(char param_1,undefined4 param_2,undefined4 param_3,short param_4,
                 undefined1 *param_5)

{
  bool bVar1;
  short sVar2;
  
  _DAT_fffec548 = 0;
  bVar1 = false;
  if (param_1 == '\0') {
    bVar1 = true;
    sVar2 = -1;
    if (_DAT_fffec54a != -1) {
      sVar2 = _DAT_fffec54a + 1;
    }
  }
  else {
    _DAT_fffec54a = 0;
    sVar2 = _DAT_fffec54a;
  }
  _DAT_fffec54a = sVar2;
  if ((bVar1) || (0x1ff < param_4)) {
    DAT_fffec54e = 0;
  }
  *param_5 = DAT_fffec54e;
  if (0x1ff < param_4) {
    sVar2 = -1;
    if (_DAT_fffec54c != -1) {
      sVar2 = _DAT_fffec54c + 1;
    }
  }
  else {
    _DAT_fffec54c = 0;
    sVar2 = _DAT_fffec54c;
  }
  _DAT_fffec54c = sVar2;
  return;
}

