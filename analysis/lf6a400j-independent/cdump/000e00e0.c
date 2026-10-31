
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e00e0(char param_1,short param_2,char param_3,undefined1 *param_4,ushort *param_5,
                 char *param_6)

{
  undefined1 uVar1;
  ushort uVar2;
  
  if ((param_1 == '\0') && (param_3 == '\0')) {
    if (DAT_fffed19d != '\0') {
      DAT_fffed198 = '\0';
      DAT_fffed19d = '\0';
      DAT_fffed19f = '\0';
    }
  }
  else {
    if (DAT_fffed19f == '\0') {
      DAT_fffed1a1 = '\0';
      DAT_fffed19f = '\x01';
      DAT_fffed19d = '\x01';
    }
    DAT_fffed198 = DAT_fffed1a1;
    if ((0x418 < param_2) && (DAT_fffed198 = -1, DAT_fffed1a1 != -1)) {
      DAT_fffed198 = DAT_fffed1a1 + '\x01';
    }
    DAT_fffed1a1 = DAT_fffed198;
    if (param_3 != '\0') {
      DAT_fffed198 = '\0';
      DAT_fffed1a1 = DAT_fffed198;
    }
  }
  *param_6 = DAT_fffed198;
  if ((param_1 == '\0') && (DAT_fffed196 != '\0')) {
    DAT_fffed197 = DAT_fffed19c;
  }
  if ((param_1 != '\0') || (param_3 != '\0')) {
    if ((param_1 == '\0') || (uVar2 = 0, DAT_fffed19e != '\0')) {
      uVar2 = _DAT_fffed19a;
    }
    _DAT_fffed194 = 0;
    _DAT_fffed19a = _DAT_fffed194;
    if ((param_3 == '\0') &&
       (_DAT_fffed194 = 0xffff, _DAT_fffed19a = _DAT_fffed194, uVar2 != 0xffff)) {
      _DAT_fffed194 = uVar2 + 1;
      _DAT_fffed19a = _DAT_fffed194;
    }
  }
  if (param_3 == '\0') {
    uVar1 = 0;
    if ((((param_1 == '\0') && (DAT_fffed1a0 != '\0')) && (99 < _DAT_fffed194)) &&
       (DAT_fffed197 != '\0')) {
      uVar1 = 1;
    }
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  *param_5 = _DAT_fffed194;
  DAT_fffed19c = DAT_fffed198 == '\0';
  DAT_fffed1a0 = param_1;
  DAT_fffed19e = param_1;
  DAT_fffed196 = param_1;
  return;
}

