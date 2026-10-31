
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00051d5e(void)

{
  uint uVar1;
  
  if ((int)DAT_fffeef9c != 4) {
    DAT_fffef033 = 0;
    DAT_fffef15a = 0;
    _DAT_fffef15c = 0;
    DAT_fffef165 = 0;
    return (int)DAT_fffeef9c;
  }
  if ((((int)(char)DAT_fffef8f0 & 0x80U) == 0) && ((DAT_fffef8f0 & 1) == 0)) {
    if ((((DAT_fffef02a & 0x40) == 0) && ((DAT_fffef02a & 0x20) == 0)) || (DAT_fffef165 == 0)) {
      if (((DAT_fffef02a & 4) == 0) || (DAT_fffef15a == 0)) {
        if ((_DAT_fffeeffc < 0x8481) || (_DAT_fffef15c < 0x177)) {
          if ((_DAT_fffeeffc < 0x8481) && ((6 < DAT_fffef033 && ((DAT_fffeef99 & 0x20) != 0)))) {
            DAT_fffeef9c = '\x05';
          }
        }
        else {
          DAT_fffef16a = DAT_fffef16a | 0x40;
        }
        goto LAB_00051e08;
      }
      DAT_fffeef9c = '\a';
    }
    else {
      DAT_fffeef9c = '\b';
    }
  }
  else {
    DAT_fffeef9c = '\v';
  }
  DAT_fffef00b = DAT_fffef00b & 0xf7;
LAB_00051e08:
  if ((DAT_fffef02a & 4) == 0) {
    DAT_fffef15a = 0;
  }
  else {
    DAT_fffef15a = FUN_0000152c(DAT_fffef15a + 1);
  }
  DAT_fffef033 = FUN_0000152c(DAT_fffef033 + 1);
  if (_DAT_fffeeffc < 0x8481) {
    _DAT_fffef15c = 0;
  }
  else {
    _DAT_fffef15c = FUN_00001540(_DAT_fffef15c + 1);
  }
  if (((DAT_fffef02a & 0x40) == 0) && (((int)(char)DAT_fffef02a & 0x20U) == 0)) {
    DAT_fffef165 = 0;
    return (int)(char)DAT_fffef02a;
  }
  uVar1 = FUN_0000152c(DAT_fffef165 + 1);
  DAT_fffef165 = (char)uVar1;
  return uVar1;
}

