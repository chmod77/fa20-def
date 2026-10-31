
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dbf94(char param_1,char param_2,ushort param_3,char param_4,char param_5,ushort *param_6
                 ,undefined1 *param_7)

{
  if ((param_1 != '\0') &&
     (_DAT_fffed0c6 = (param_3 & 0xff) + _DAT_fffed0c6, _DAT_fffed0c6 < (param_3 & 0xff))) {
    _DAT_fffed0c6 = 0xffff;
  }
  if ((param_5 != '\0') || (param_4 != '\0')) {
    _DAT_fffed0c6 = 0;
  }
  if ((param_2 != '\0') && (DAT_fffed0c4 = (undefined1)_DAT_fffed0c6, 0xff < _DAT_fffed0c6)) {
    DAT_fffed0c4 = 0xff;
  }
  if (param_5 == '\0') {
    *param_7 = DAT_fffed0c4;
  }
  else {
    *param_7 = 0;
  }
  *param_6 = _DAT_fffed0c6;
  if (param_2 != '\0') {
    _DAT_fffed0c6 = 0;
  }
  return;
}

