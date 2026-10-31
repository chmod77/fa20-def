
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000adf40(char param_1,short *param_2)

{
  if (param_1 != '\x03') {
    DAT_fffec578 = '\0';
  }
  else {
    if (DAT_fffec578 == '\0') {
      _DAT_fffec576 = 0;
      DAT_fffec578 = '\x01';
    }
    _DAT_fffec574 = _DAT_fffec576;
    _DAT_fffec576 = _DAT_fffec576 + 1;
    if (_DAT_fffec576 == 0) {
      _DAT_fffec576 = -1;
    }
  }
  if (param_1 == '\x03') {
    *param_2 = _DAT_fffec574;
    return;
  }
  *param_2 = 0;
  return;
}

