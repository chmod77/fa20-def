
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d39f0(byte param_1,undefined1 param_2,undefined1 *param_3)

{
  ushort uVar1;
  
  if (1 < param_1) {
    uVar1 = 0;
    if (DAT_fffece0a < 2) goto LAB_000d3a22;
  }
  uVar1 = 0xffff;
  if (_DAT_fffece08 != -1) {
    uVar1 = _DAT_fffece08 + 1;
  }
LAB_000d3a22:
  if (uVar1 == 0) {
    *param_3 = 1;
  }
  else if (uVar1 < 0x7d) {
    *param_3 = param_2;
  }
  else {
    *param_3 = 0;
  }
  DAT_fffece0a = param_1;
  _DAT_fffece08 = uVar1;
  return;
}

