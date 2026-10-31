
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d3988(byte param_1,undefined1 param_2,undefined1 *param_3)

{
  ushort uVar1;
  
  if (1 < param_1) {
    uVar1 = 0;
    if (DAT_fffece06 < 2) goto LAB_000d39ba;
  }
  uVar1 = 0xffff;
  if (_DAT_fffece04 != -1) {
    uVar1 = _DAT_fffece04 + 1;
  }
LAB_000d39ba:
  if (uVar1 == 0) {
    *param_3 = 1;
  }
  else if (uVar1 < 0x1b) {
    *param_3 = param_2;
  }
  else {
    *param_3 = 0;
  }
  DAT_fffece06 = param_1;
  _DAT_fffece04 = uVar1;
  return;
}

