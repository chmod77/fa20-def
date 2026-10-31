
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f4df4(char param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = 0;
  if (param_1 == '\x01') {
    sVar1 = -1;
    if (_DAT_fffed738 != -1) {
      sVar1 = _DAT_fffed738 + 1;
    }
  }
  *param_2 = sVar1;
  _DAT_fffed738 = sVar1;
  return;
}

