
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003c320(void)

{
  char cVar1;
  
  if (DAT_ffff29ed != 0) {
    cVar1 = FUN_0016b5bc((uint)DAT_ffff29ec - (uint)DAT_ffff29ed);
    DAT_ffff29ee = cVar1 + -0x80;
  }
  DAT_ffff29ed = DAT_ffff29ec;
  if (_DAT_ffff29e2 != 0) {
    _DAT_ffff29e0 = FUN_0016b5d4((int)&DAT_00008000 + ((uint)_DAT_ffff2988 - (uint)_DAT_ffff29e2));
  }
  _DAT_ffff29e2 = _DAT_ffff2988;
  return;
}

