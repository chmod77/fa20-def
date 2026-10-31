
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e9728(char param_1,char param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = _DAT_fffed43c;
  if ((param_1 == '\x03') && (sVar1 = -1, _DAT_fffed43c != -1)) {
    sVar1 = _DAT_fffed43c + 1;
  }
  if (((param_2 != '\0') || (param_1 == '\x01')) || (param_1 == '\x02')) {
    sVar1 = 0;
  }
  *param_3 = sVar1;
  _DAT_fffed43c = sVar1;
  return;
}

