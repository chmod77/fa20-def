
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eaacc(ushort param_1,char param_2,undefined4 param_3,char param_4,ushort *param_5)

{
  if (param_1 < _DAT_fffed484) {
    param_1 = _DAT_fffed484;
  }
  if ((param_4 != '\0') ||
     (((param_2 != '\x01' && (param_2 != '\x02')) && ((param_2 == '\x03' || (param_2 == '\x04'))))))
  {
    param_1 = 0;
  }
  *param_5 = param_1;
  _DAT_fffed484 = param_1;
  return;
}

