
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d3e7c(char param_1,undefined1 *param_2)

{
  short sVar1;
  
  if (param_1 != '\0') {
    *param_2 = _DAT_fffece34 < 10;
    sVar1 = -1;
    if (_DAT_fffece34 != 0xffff) {
      sVar1 = _DAT_fffece34 + 1;
    }
    _DAT_fffece34 = sVar1;
    return;
  }
  *param_2 = 0;
  _DAT_fffece34 = 0;
  return;
}

