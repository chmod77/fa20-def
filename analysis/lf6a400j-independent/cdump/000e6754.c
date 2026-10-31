
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e6754(byte param_1,ushort param_2,char param_3,ushort *param_4)

{
  if ((0x1dff < param_2) || (param_1 <= DAT_fffed352)) {
    param_2 = _DAT_fffed350;
  }
  if (param_3 != '\0') {
    param_2 = 0;
  }
  *param_4 = param_2;
  _DAT_fffed350 = param_2;
  DAT_fffed352 = param_1;
  return;
}

