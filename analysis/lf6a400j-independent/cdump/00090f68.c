
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090f68(char param_1,short *param_2)

{
  if (param_1 != '\x03') {
    DAT_fffebdac = '\0';
  }
  else {
    if (DAT_fffebdac == '\0') {
      _DAT_fffebdaa = 0;
      DAT_fffebdac = '\x01';
    }
    _DAT_fffebda8 = _DAT_fffebdaa;
    _DAT_fffebdaa = _DAT_fffebdaa + 1;
    if (_DAT_fffebdaa == 0) {
      _DAT_fffebdaa = -1;
    }
  }
  if (param_1 == '\x03') {
    *param_2 = _DAT_fffebda8;
    return;
  }
  *param_2 = 0;
  return;
}

