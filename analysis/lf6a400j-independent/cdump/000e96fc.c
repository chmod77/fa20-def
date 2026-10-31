
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e96fc(char param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = 0;
  if (param_1 != '\0') {
    sVar1 = -1;
    if (_DAT_fffed438 != -1) {
      sVar1 = _DAT_fffed438 + 1;
    }
  }
  *param_3 = sVar1;
  _DAT_fffed438 = sVar1;
  return;
}

