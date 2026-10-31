
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001486cc(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if ((param_1 & 1) == 0) {
    _DAT_ffff671e = _DAT_ffff671e & 0xefff;
  }
  else {
    _DAT_ffff671e = _DAT_ffff671e | 0x1000;
  }
  if ((_DAT_ffff671e & 0x1000) == 0) {
    _DAT_fffff72c = _DAT_fffff72c & 0xefff;
  }
  else {
    _DAT_fffff72c = _DAT_fffff72c | 0x1000;
  }
  FUN_00001550(uVar1);
  return;
}

