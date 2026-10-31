
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000938f8(char param_1,undefined1 *param_2)

{
  short sVar1;
  
  if (param_1 != '\0') {
    *param_2 = 0;
    sVar1 = -1;
    if (_DAT_fffebe90 != -1) {
      sVar1 = _DAT_fffebe90 + 1;
    }
    _DAT_fffebe90 = sVar1;
    return;
  }
  *param_2 = 0;
  _DAT_fffebe90 = 0;
  return;
}

