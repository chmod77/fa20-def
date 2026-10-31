
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb154(char param_1,ushort param_2,char param_3,ushort param_4,char param_5,
                 ushort *param_6)

{
  if ((((param_1 != '\0') && (param_2 < 500)) && (param_3 != '\0')) &&
     (_DAT_fffed4dc = param_4 + _DAT_fffed4dc, _DAT_fffed4dc < param_4)) {
    _DAT_fffed4dc = 0xffff;
  }
  if (param_5 != '\0') {
    _DAT_fffed4dc = 0;
  }
  *param_6 = _DAT_fffed4dc;
  return;
}

