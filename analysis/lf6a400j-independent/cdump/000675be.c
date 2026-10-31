
/* WARNING: Removing unreachable block (ram,0x000676ae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000675be(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0x60);
  if (((_DAT_fffef186 < 10) || (0xb04a < _DAT_fffef186)) && (_DAT_fffef186 != 0)) {
    _DAT_ffff003a = 0;
    DAT_fffefff7 = DAT_fffefff7 | 0x10;
  }
  else {
    if (_DAT_fffef186 == 0) {
      _DAT_ffff34fc = _DAT_fffef186;
    }
    else {
      _DAT_ffff34fc = (_DAT_fffef186 - 2 & 0xfff0) + 1000;
    }
    if (_DAT_ffff003a == 0) {
      _DAT_ffff003a = 0;
    }
    else {
      _DAT_ffff003a = _DAT_ffff003a + -1;
    }
  }
  FUN_00001550(uVar1);
  return;
}

