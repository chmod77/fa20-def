
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ef83c(char param_1,ushort param_2,char param_3,short param_4,ushort param_5,
                 short *param_6)

{
  if ((((param_1 == '\0') || (param_2 < 0xa00)) || (param_3 != '\x04')) ||
     ((param_4 == 0 || (param_5 < 0x32)))) {
    _DAT_fffed5a4 = 0;
  }
  *param_6 = _DAT_fffed5a4;
  if (((param_1 == '\0') || (param_2 < 0xa00)) ||
     ((param_3 != '\x04' || ((param_4 == 0 || (param_5 < 0x32)))))) {
    _DAT_fffed5a4 = 0;
  }
  else if (_DAT_fffed5a4 == -1) {
    _DAT_fffed5a4 = -1;
  }
  else {
    _DAT_fffed5a4 = _DAT_fffed5a4 + 1;
  }
  return;
}

