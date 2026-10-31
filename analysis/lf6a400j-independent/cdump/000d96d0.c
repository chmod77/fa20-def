
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d96d0(char param_1,undefined1 *param_2)

{
  short sVar1;
  
  if (param_1 != '\0') {
    *param_2 = 0x31 < _DAT_fffecfa4;
    sVar1 = -1;
    if (_DAT_fffecfa4 != 0xffff) {
      sVar1 = _DAT_fffecfa4 + 1;
    }
    _DAT_fffecfa4 = sVar1;
    return;
  }
  *param_2 = 0;
  _DAT_fffecfa4 = 0;
  return;
}

