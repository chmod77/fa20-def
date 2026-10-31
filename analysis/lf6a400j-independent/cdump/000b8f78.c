
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b8f78(char param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = 0;
  if ((param_1 == '\x03') && (sVar1 = _DAT_fffec838 + 1, sVar1 == 0)) {
    sVar1 = -1;
  }
  *param_2 = sVar1;
  _DAT_fffec838 = sVar1;
  return;
}

