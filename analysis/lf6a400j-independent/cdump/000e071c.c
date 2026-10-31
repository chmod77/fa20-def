
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e071c(ushort param_1,short param_2,ushort param_3,ushort param_4,char param_5,
                 undefined1 *param_6)

{
  undefined1 uVar1;
  
  if ((0x45ff < param_3) || (0x76ff < param_4)) {
    uVar1 = 1;
    if (_DAT_fffed1d4 < param_1) goto LAB_000e0754;
  }
  uVar1 = DAT_fffed1d6;
LAB_000e0754:
  if (param_2 == 400) {
    uVar1 = 0;
  }
  if (param_5 == '\0') {
    *param_6 = DAT_fffed1d6;
  }
  else {
    *param_6 = 0;
  }
  _DAT_fffed1d4 = param_1;
  DAT_fffed1d6 = uVar1;
  return;
}

