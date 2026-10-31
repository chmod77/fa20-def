
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a3704(char param_1,char param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = 0;
  if (param_1 == '\0') {
    sVar1 = -1;
    if (_DAT_fffec2d0 != -1) {
      sVar1 = _DAT_fffec2d0 + 1;
    }
  }
  if (param_2 != '\0') {
    sVar1 = 0;
  }
  *param_3 = sVar1;
  _DAT_fffec2d0 = sVar1;
  return;
}

