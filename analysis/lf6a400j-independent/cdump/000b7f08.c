
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b7f08(char param_1,short param_2,char param_3,undefined1 *param_4)

{
  short sVar1;
  
  if (param_1 != '\0') {
    if ((param_3 != '\0') && (DAT_fffec80c == '\0')) {
      sVar1 = param_2 + -1;
      if ((param_2 < 0) && (-1 < sVar1)) {
        sVar1 = -0x8000;
      }
      DAT_fffec80d = _DAT_fffec80a < sVar1;
      _DAT_fffec80a = param_2;
    }
    DAT_fffec808 = DAT_fffec80d;
    DAT_fffec80c = param_3;
  }
  *param_4 = DAT_fffec808;
  return;
}

