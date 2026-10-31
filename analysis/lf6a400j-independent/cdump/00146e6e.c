
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00146e6e(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if ((param_1 & 1) == 0) {
    _DAT_ffff672a = _DAT_ffff672a & 0xefff;
  }
  else {
    _DAT_ffff672a = _DAT_ffff672a | 0x1000;
  }
  if ((_DAT_ffff672a & 0x1000) == 0) {
    _DAT_fffff738 = _DAT_fffff738 & 0xefff;
  }
  else {
    _DAT_fffff738 = _DAT_fffff738 | 0x1000;
  }
  FUN_00001550(uVar1);
  return;
}

