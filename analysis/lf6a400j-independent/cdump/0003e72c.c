
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003e72c(void)

{
  uint uVar1;
  
  if (((DAT_fffeeec3 & 1) == 0) || ((DAT_fffeeec2 & 1) != 0)) {
    if ((DAT_fffeeec2 & 1) != 0) {
      DAT_fffef389 = DAT_fffef389 & 0xfe;
    }
  }
  else {
    DAT_fffef389 = DAT_fffef389 | 1;
  }
  if ((((DAT_fffeeec2 & 1) == 0) && ((DAT_fffef389 & 1) != 0)) && (9 < _DAT_fffef38a)) {
    if (((DAT_fffef455 & 1) == 0) || (2999 < _DAT_fffef38a)) {
      DAT_ffff2fe8 = DAT_ffff2fe8 & 0xfa;
    }
    else {
      DAT_ffff2fe8 = DAT_ffff2fe8 & 0xfb | 1;
      _DAT_ffff3b50 = _DAT_ffff3b50 | 0x100;
    }
  }
  else {
    DAT_ffff2fe8 = DAT_ffff2fe8 | 1;
  }
  if ((DAT_ffff2fe8 & 4) == 0) {
    _DAT_ffff3b50 = _DAT_ffff3b50 & 0xffffff7f;
  }
  else {
    _DAT_ffff3b50 = _DAT_ffff3b50 | 0x80;
  }
  uVar1 = (uint)(char)DAT_fffef389;
  if ((uVar1 & 1) == 0) {
    _DAT_fffef38a = 0;
  }
  else {
    uVar1 = FUN_00001540(_DAT_fffef38a + 1);
    _DAT_fffef38a = (ushort)uVar1;
  }
  return uVar1;
}

