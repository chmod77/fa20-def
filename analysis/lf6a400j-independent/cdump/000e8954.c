
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e8954(char param_1,char param_2,ushort param_3,ushort param_4,ushort param_5,
                 short *param_6)

{
  short sVar1;
  
  sVar1 = _DAT_fffed3d8;
  if (((param_2 == '\0') && (param_1 != '\0')) && (sVar1 = -1, _DAT_fffed3d8 != -1)) {
    sVar1 = _DAT_fffed3d8 + 1;
  }
  if (((0x2ed < param_3) || (param_5 < 0x8b85)) || (499 < param_4)) {
    sVar1 = 0;
  }
  *param_6 = sVar1;
  _DAT_fffed3d8 = sVar1;
  return;
}

