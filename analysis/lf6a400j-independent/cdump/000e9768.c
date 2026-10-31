
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e9768(char param_1,char param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = _DAT_fffed440;
  if ((param_1 == '\x03') && (sVar1 = -1, _DAT_fffed440 != -1)) {
    sVar1 = _DAT_fffed440 + 1;
  }
  if (((param_2 != '\0') || (param_1 == '\x01')) || (param_1 == '\x02')) {
    sVar1 = 0;
  }
  *param_3 = sVar1;
  _DAT_fffed440 = sVar1;
  return;
}

