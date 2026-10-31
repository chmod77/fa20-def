
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e3250(char param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = 0;
  if (param_1 != '\0') {
    sVar1 = -1;
    if (_DAT_fffed26c < 0xfffc) {
      sVar1 = _DAT_fffed26c + 4;
    }
  }
  *param_2 = sVar1;
  _DAT_fffed26c = sVar1;
  return;
}

