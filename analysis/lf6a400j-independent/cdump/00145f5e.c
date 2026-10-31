
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00145f5e(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if (param_1 == '\0') {
    _DAT_ffff6738 = _DAT_ffff6738 | 0x80;
  }
  else {
    _DAT_ffff6738 = _DAT_ffff6738 & 0xff7f;
  }
  if ((_DAT_ffff6738 & 0x80) == 0) {
    _DAT_fffff746 = _DAT_fffff746 & 0xff7f;
  }
  else {
    _DAT_fffff746 = _DAT_fffff746 | 0x80;
  }
  FUN_00001550(uVar1);
  return;
}

