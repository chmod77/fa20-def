
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b2efc(char param_1,uint param_2,char param_3,undefined2 *param_4)

{
  if ((param_3 != '\0') && (_DAT_fffec6d4 = _DAT_fffec6d6, param_1 != '\0')) {
    _DAT_fffec6d4 = (undefined2)((param_2 & 0xffff) >> 7);
    _DAT_fffec6d6 = _DAT_fffec6d4;
  }
  *param_4 = _DAT_fffec6d4;
  return;
}

