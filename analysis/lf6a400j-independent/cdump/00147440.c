
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00147440(void)

{
  uint uVar1;
  
  if ((DAT_ffff66ca & 8) == 0) {
    _DAT_ffff1e6e = _DAT_ffff1e2a;
    _DAT_ffff1e70 = _DAT_ffff1e2e;
    _DAT_ffff1e72 = _DAT_ffff1e32;
    _DAT_ffff1e74 = _DAT_ffff1e36;
    _DAT_ffff1e76 = _DAT_ffff1e3a;
    _DAT_ffff1e78 = _DAT_ffff1e3e;
    _DAT_ffff1e7a = _DAT_ffff1e42;
    _DAT_ffff1e7c = _DAT_ffff1e46;
    _DAT_ffff1e7e = _DAT_ffff1e4a;
    _DAT_ffff1e80 = _DAT_ffff1e4e;
    _DAT_ffff1e82 = _DAT_ffff1e52;
    FUN_00147adc();
    uVar1 = (uint)(char)DAT_ffff66ca;
    DAT_ffff66ca = (char)(uVar1 | 8);
    return uVar1 | 8;
  }
  if ((DAT_ffff66ca & 4) != 0) {
    _DAT_ffff1e6e = _DAT_ffff1e2a;
    _DAT_ffff1e70 = _DAT_ffff1e2e;
    _DAT_ffff1e72 = _DAT_ffff1e32;
    _DAT_ffff1e74 = _DAT_ffff1e36;
    _DAT_ffff1e76 = _DAT_ffff1e3a;
    _DAT_ffff1e78 = _DAT_ffff1e3e;
    _DAT_ffff1e7a = _DAT_ffff1e42;
    _DAT_ffff1e7c = _DAT_ffff1e46;
    _DAT_ffff1e7e = _DAT_ffff1e4a;
    _DAT_ffff1e80 = _DAT_ffff1e4e;
    _DAT_ffff1e82 = _DAT_ffff1e52;
    uVar1 = FUN_00147adc();
    return uVar1;
  }
  _DAT_ffff1e84 = _DAT_ffff1e2a;
  _DAT_ffff1e86 = _DAT_ffff1e2e;
  _DAT_ffff1e88 = _DAT_ffff1e32;
  _DAT_ffff1e8a = _DAT_ffff1e36;
  _DAT_ffff1e8c = _DAT_ffff1e3a;
  _DAT_ffff1e8e = _DAT_ffff1e3e;
  uVar1 = FUN_00147bf2();
  return uVar1;
}

