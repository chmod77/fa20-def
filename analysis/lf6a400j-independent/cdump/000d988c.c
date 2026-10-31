
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d988c(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  short sVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (((param_1 == '\0') && (param_2 == '\0' || _DAT_fffecfb0 < 1000)) && (param_3 == '\0')) {
    uVar2 = 0;
  }
  *param_4 = uVar2;
  if (param_2 == '\0') {
    _DAT_fffecfb0 = 0;
    sVar1 = _DAT_fffecfb0;
  }
  else {
    sVar1 = -1;
    if (_DAT_fffecfb0 != 0xffff) {
      sVar1 = _DAT_fffecfb0 + 1;
    }
  }
  _DAT_fffecfb0 = sVar1;
  return;
}

