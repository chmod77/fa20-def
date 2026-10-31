
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00145fca(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if (param_1 == '\0') {
    _DAT_ffff671e = _DAT_ffff671e & 0xbfff;
  }
  else {
    _DAT_ffff671e = _DAT_ffff671e | 0x4000;
  }
  FUN_00001550(uVar1);
  return;
}

