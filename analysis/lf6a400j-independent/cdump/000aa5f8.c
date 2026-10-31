
/* WARNING: Removing unreachable block (ram,0x000aa668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aa5f8(char param_1,undefined2 *param_2)

{
  short sVar1;
  
  if (param_1 == '\0') {
    DAT_fffec460 = '\0';
    sVar1 = _DAT_fffec45e;
  }
  else {
    if (DAT_fffec460 == '\0') {
      _DAT_fffec45e = 0;
      DAT_fffec460 = '\x01';
    }
    DAT_fffec45c = 0;
    sVar1 = -1;
    if (_DAT_fffec45e != -1) {
      sVar1 = _DAT_fffec45e + 1;
    }
  }
  _DAT_fffec45e = sVar1;
  if (param_1 != '\0') {
    *param_2 = 0x80;
    return;
  }
  *param_2 = 0;
  return;
}

