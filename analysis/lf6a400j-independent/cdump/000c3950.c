
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c3950(char param_1,char param_2,char param_3,char param_4,ushort *param_5)

{
  if (param_4 != '\0') {
    if ((((param_1 == '\x03') || (param_1 == '\x05')) && (param_2 == '\0')) && (param_3 == '\0')) {
      _DAT_fffeca78 = 0xffff;
      if (_DAT_fffeca7a != -1) {
        _DAT_fffeca78 = _DAT_fffeca7a + 1;
      }
      if (99 < _DAT_fffeca78) {
        _DAT_fffeca78 = 100;
      }
    }
    else {
      _DAT_fffeca78 = 0;
    }
  }
  *param_5 = _DAT_fffeca78;
  _DAT_fffeca7a = _DAT_fffeca78;
  return;
}

