
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e8928(char param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = 0;
  if (param_1 == '\0') {
    sVar1 = -1;
    if (_DAT_fffed3d4 != -1) {
      sVar1 = _DAT_fffed3d4 + 1;
    }
  }
  *param_2 = sVar1;
  _DAT_fffed3d4 = sVar1;
  return;
}

