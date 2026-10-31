
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c0890(char param_1,short *param_2)

{
  short sVar1;
  
  if (((((param_1 == '\x03') || (param_1 == '\x04')) || (param_1 == '\x05')) ||
      ((((param_1 == '\x06' || (param_1 == '\n')) ||
        ((param_1 == '\v' || ((param_1 == '\x0f' || (param_1 == '\x10')))))) || (param_1 == '\x11'))
      )) || ((((param_1 == '\x19' || (param_1 == '\x1a')) || (param_1 == '\x1b')) ||
             ((param_1 == ' ' || (param_1 == '#')))))) {
    sVar1 = 0;
  }
  else {
    sVar1 = -1;
    if (_DAT_fffec9a0 != -1) {
      sVar1 = _DAT_fffec9a0 + 1;
    }
  }
  *param_2 = sVar1;
  _DAT_fffec9a0 = sVar1;
  return;
}

