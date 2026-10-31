
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e454c(char param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if (((DAT_fffed2d9 == '\0') || (param_1 == DAT_fffed2da)) && (DAT_fffed2d8 == '\0')) {
    bVar1 = false;
  }
  if (param_1 != DAT_fffed2da) {
    _DAT_fffed2d4 = 500;
  }
  if (bVar1) {
    if (_DAT_fffed2d4 < 0) {
      _DAT_fffed2d4 = 0;
    }
    _DAT_fffed2d4 = _DAT_fffed2d4 + -1;
  }
  else {
    _DAT_fffed2d4 = 0;
  }
  *(bool *)param_2 = _DAT_fffed2d4 < 0;
  DAT_fffed2da = param_1;
  DAT_fffed2d9 = 1;
  DAT_fffed2d8 = bVar1;
  return;
}

