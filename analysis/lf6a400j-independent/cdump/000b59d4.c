
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b59d4(char param_1,short param_2,short *param_3)

{
  short sVar1;
  
  if (param_1 != '\0') {
    sVar1 = param_2 >> 1;
    if (param_2 >> 1 < -0x32ff) {
      sVar1 = -0x3300;
    }
    _DAT_fffec748 = 0x3300;
    if (sVar1 < 0x3300) {
      _DAT_fffec748 = sVar1;
    }
  }
  *param_3 = _DAT_fffec748;
  return;
}

