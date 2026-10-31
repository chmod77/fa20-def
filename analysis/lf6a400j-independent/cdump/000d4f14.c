
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d4f14(short param_1,undefined1 param_2,char param_3,short *param_4)

{
  short sVar1;
  
  if (((param_1 == 0) || (DAT_fffece9a != '\0')) || (param_3 != '\0')) {
    sVar1 = 0;
  }
  else {
    sVar1 = -1;
    if (_DAT_fffece98 != -1) {
      sVar1 = _DAT_fffece98 + 1;
    }
  }
  *param_4 = sVar1;
  _DAT_fffece98 = sVar1;
  DAT_fffece9a = param_2;
  return;
}

