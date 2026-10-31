
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b7e2c(char param_1,short param_2,char param_3,undefined1 *param_4)

{
  short sVar1;
  
  if (param_1 != '\0') {
    if ((param_3 != '\0') && (DAT_fffec7fc == '\0')) {
      sVar1 = param_2 + 1;
      if ((-1 < param_2) && (sVar1 < 0)) {
        sVar1 = 0x7fff;
      }
      DAT_fffec7fd = sVar1 < _DAT_fffec7fa;
      _DAT_fffec7fa = param_2;
    }
    DAT_fffec7f8 = DAT_fffec7fd;
    DAT_fffec7fc = param_3;
  }
  *param_4 = DAT_fffec7f8;
  return;
}

