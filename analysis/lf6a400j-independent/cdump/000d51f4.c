
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d51f4(char param_1,ushort param_2,ushort *param_3)

{
  if (_DAT_fffecea4 < param_2) {
    _DAT_fffecea4 = param_2;
  }
  if (param_1 != '\0') {
    _DAT_fffecea4 = 0;
  }
  *param_3 = _DAT_fffecea4;
  return;
}

