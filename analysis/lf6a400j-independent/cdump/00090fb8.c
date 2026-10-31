
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090fb8(char param_1,short *param_2)

{
  if (param_1 != '\x03') {
    DAT_fffebdb4 = '\0';
  }
  else {
    if (DAT_fffebdb4 == '\0') {
      _DAT_fffebdb2 = 0;
      DAT_fffebdb4 = '\x01';
    }
    _DAT_fffebdb0 = _DAT_fffebdb2;
    _DAT_fffebdb2 = _DAT_fffebdb2 + 1;
    if (_DAT_fffebdb2 == 0) {
      _DAT_fffebdb2 = -1;
    }
  }
  if (param_1 == '\x03') {
    *param_2 = _DAT_fffebdb0;
    return;
  }
  *param_2 = 0;
  return;
}

