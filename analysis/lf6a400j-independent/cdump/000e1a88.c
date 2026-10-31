
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e1a88(byte param_1,char param_2,char param_3,char param_4,char param_5,short *param_6,
                 short *param_7)

{
  bool bVar1;
  short sVar2;
  
  bVar1 = false;
  if ((param_2 != '\0') && (param_1 == 0)) {
    bVar1 = true;
  }
  sVar2 = 0;
  if (bVar1) {
    sVar2 = _DAT_fffed20a;
  }
  if (DAT_fffed20e < param_1) {
    _DAT_fffed20c = _DAT_fffed208;
  }
  if (param_4 != '\0') {
    _DAT_fffed20c = 0;
  }
  *param_7 = _DAT_fffed20c;
  if ((param_2 == '\0') || (param_1 == 0)) {
    if ((param_3 != '\0') && (bVar1)) {
      sVar2 = _DAT_fffed20c;
    }
  }
  else {
    sVar2 = -1;
    if (_DAT_fffed20a != -1) {
      sVar2 = _DAT_fffed20a + 1;
    }
  }
  if ((param_5 != '\0') || (param_4 != '\0')) {
    sVar2 = 0;
  }
  *param_6 = sVar2;
  _DAT_fffed20a = sVar2;
  DAT_fffed20e = param_1;
  _DAT_fffed208 = sVar2;
  return;
}

