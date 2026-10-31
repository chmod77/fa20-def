
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014e7ea(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffff2c7a = _DAT_ffff2c7a + 1;
  FUN_00001550(uVar1);
  if (((_DAT_ffff2c7a == (short)(_DAT_ffff2c7c + 1)) && ((_DAT_ffff2c82 & 1) != 0)) &&
     ((_DAT_ffff2c80 & 1) == 0)) {
    _DAT_ffff2c80 = _DAT_ffff2c80 | 1;
    FUN_0014e704();
  }
  if (((_DAT_ffff2c7a == (short)(_DAT_ffff2c7e + 1)) && ((_DAT_ffff2c82 & 2) != 0)) &&
     ((_DAT_ffff2c80 & 2) == 0)) {
    _DAT_ffff2c80 = _DAT_ffff2c80 | 2;
    FUN_0014e72c();
    return;
  }
  return;
}

