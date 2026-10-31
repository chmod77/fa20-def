
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e32a8(int param_1,ushort param_2,char param_3,short *param_4)

{
  short sVar1;
  
  sVar1 = _DAT_fffed274;
  if ((param_1 < -0x3ffff) && (param_2 != 0)) {
    sVar1 = _DAT_fffed274 + -1;
  }
  if ((0x3ffff < param_1) && (param_2 < 0x3200)) {
    sVar1 = _DAT_fffed274 + 1;
  }
  if ((param_3 == '\0') || (_DAT_fffed274 = 0, DAT_fffed276 != '\0')) {
    if (0x4380 < sVar1) {
      sVar1 = 0x4380;
    }
    _DAT_fffed274 = sVar1;
    if (sVar1 < -0x437f) {
      _DAT_fffed274 = -0x4380;
    }
  }
  *param_4 = _DAT_fffed274;
  DAT_fffed276 = param_3;
  return;
}

