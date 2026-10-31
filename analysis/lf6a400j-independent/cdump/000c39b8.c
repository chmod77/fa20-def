
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c39b8(char param_1,char param_2,char param_3,char param_4,short *param_5)

{
  if (param_4 != '\0') {
    if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 == DAT_fffeca80)) {
      if (_DAT_fffeca7e == -1) {
        _DAT_fffeca7c = -1;
      }
      else {
        _DAT_fffeca7c = _DAT_fffeca7e + 1;
      }
    }
    else {
      _DAT_fffeca7c = 0;
    }
  }
  if (param_4 != '\0') {
    _DAT_fffeca7e = _DAT_fffeca7c;
  }
  *param_5 = _DAT_fffeca7e;
  DAT_fffeca80 = param_3;
  return;
}

