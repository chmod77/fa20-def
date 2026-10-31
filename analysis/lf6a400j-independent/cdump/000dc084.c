
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dc084(char param_1,char param_2,ushort param_3,char param_4,char param_5,ushort *param_6
                 ,undefined1 *param_7)

{
  if ((param_1 != '\0') &&
     (_DAT_fffed0ce = (param_3 & 0xff) + _DAT_fffed0ce, _DAT_fffed0ce < (param_3 & 0xff))) {
    _DAT_fffed0ce = 0xffff;
  }
  if ((param_5 != '\0') || (param_4 != '\0')) {
    _DAT_fffed0ce = 0;
  }
  if ((param_2 != '\0') && (DAT_fffed0cc = (undefined1)_DAT_fffed0ce, 0xff < _DAT_fffed0ce)) {
    DAT_fffed0cc = 0xff;
  }
  if (param_5 == '\0') {
    *param_7 = DAT_fffed0cc;
  }
  else {
    *param_7 = 0;
  }
  *param_6 = _DAT_fffed0ce;
  if (param_2 != '\0') {
    _DAT_fffed0ce = 0;
  }
  return;
}

