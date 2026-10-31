
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dbc38(char param_1,char param_2,ushort param_3,char param_4,char param_5,ushort *param_6
                 ,undefined1 *param_7)

{
  if ((param_1 != '\0') &&
     (_DAT_fffed0a6 = (param_3 & 0xff) + _DAT_fffed0a6, _DAT_fffed0a6 < (param_3 & 0xff))) {
    _DAT_fffed0a6 = 0xffff;
  }
  if ((param_5 != '\0') || (param_4 != '\0')) {
    _DAT_fffed0a6 = 0;
  }
  if ((param_2 != '\0') && (DAT_fffed0a4 = (undefined1)_DAT_fffed0a6, 0xff < _DAT_fffed0a6)) {
    DAT_fffed0a4 = 0xff;
  }
  *param_7 = DAT_fffed0a4;
  *param_6 = _DAT_fffed0a6;
  if (param_2 != '\0') {
    _DAT_fffed0a6 = 0;
  }
  return;
}

