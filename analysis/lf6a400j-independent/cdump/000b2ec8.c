
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b2ec8(ushort param_1,char param_2,char param_3,ushort *param_4)

{
  if ((param_3 != '\0') && (_DAT_fffec6d0 = _DAT_fffec6d2, param_2 == '\0')) {
    _DAT_fffec6d0 = param_1 >> 7;
    _DAT_fffec6d2 = _DAT_fffec6d0;
  }
  *param_4 = _DAT_fffec6d0;
  return;
}

