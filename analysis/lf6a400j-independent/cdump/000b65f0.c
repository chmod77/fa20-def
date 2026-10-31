
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b65f0(ushort param_1,char param_2,ushort param_3,undefined1 *param_4,ushort *param_5,
                 ushort *param_6)

{
  if (param_2 == '\0') {
    if (DAT_fffec776 != '\0') {
      DAT_fffec774 = 0;
      _DAT_fffec770 = 0;
      _DAT_fffec772 = 0;
      DAT_fffec776 = '\0';
      DAT_fffec777 = '\0';
    }
  }
  else {
    if (DAT_fffec777 == '\0') {
      DAT_fffec775 = '\0';
      DAT_fffec777 = '\x01';
      DAT_fffec776 = '\x01';
    }
    _DAT_fffec770 = 0;
    if (0x14 < param_3) {
      _DAT_fffec770 = param_3 - 0x15;
    }
    _DAT_fffec772 = param_3 + 0x15;
    if (_DAT_fffec772 < 0x15) {
      _DAT_fffec772 = 0xffff;
    }
    if (DAT_fffec775 == '\0') {
      DAT_fffec774 = _DAT_fffec772 < param_1;
      DAT_fffec775 = DAT_fffec774;
    }
    else {
      DAT_fffec774 = _DAT_fffec770 <= param_1;
      DAT_fffec775 = DAT_fffec774;
    }
  }
  *param_5 = _DAT_fffec770;
  *param_6 = _DAT_fffec772;
  if (param_2 == '\0') {
    *param_4 = 0;
  }
  else {
    *param_4 = DAT_fffec774;
  }
  return;
}

