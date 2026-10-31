
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c0834(char param_1,short *param_2)

{
  short sVar1;
  
  if (((((param_1 == '\x02') || (param_1 == '\a')) || (param_1 == '\b')) ||
      (((param_1 == '\t' || (param_1 == '\n')) ||
       ((param_1 == '\f' || ((param_1 == '\r' || (param_1 == '\x0e')))))))) ||
     ((param_1 == '\x15' ||
      ((((param_1 == '\x16' || (param_1 == '\x1f')) || (param_1 == '!')) || (param_1 == '\"')))))) {
    sVar1 = 0;
  }
  else {
    sVar1 = -1;
    if (_DAT_fffec99c != -1) {
      sVar1 = _DAT_fffec99c + 1;
    }
  }
  *param_2 = sVar1;
  _DAT_fffec99c = sVar1;
  return;
}

