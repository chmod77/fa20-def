
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00051e92(void)

{
  uint uVar1;
  
  if ((int)DAT_fffeef9c != 5) {
    DAT_fffef034 = 0;
    DAT_fffef15b = 0;
    _DAT_fffef15e = 0;
    DAT_fffef166 = 0;
    return (int)DAT_fffeef9c;
  }
  if ((((DAT_fffef02a & 0x40) == 0) && ((DAT_fffef02a & 0x20) == 0)) || (DAT_fffef166 == 0)) {
    if (((DAT_fffef02a & 4) != 0) && (DAT_fffef15b != 0)) {
      DAT_fffeef9c = '\a';
      goto LAB_00051ed8;
    }
    if ((_DAT_fffeeeb6 < 0xc981) || (_DAT_fffef15e < 0x177)) {
      if (((0xc980 < _DAT_fffeeeb6) || ((DAT_fffeef98 >> 2 & 7) != (DAT_fffef02b >> 2 & 7))) ||
         (DAT_fffef034 < 3)) goto LAB_00051fb0;
      DAT_fffeef9c = '\x06';
    }
    else {
      DAT_fffeef9c = '\n';
      DAT_fffeef9a = DAT_fffeef9a & 0xfe;
      DAT_fffef16a = DAT_fffef16a | 0x80;
    }
  }
  else {
    DAT_fffeef9c = '\b';
LAB_00051ed8:
    DAT_fffeef9a = DAT_fffeef9a & 0xfe;
  }
  DAT_fffef00b = DAT_fffef00b & 0xf7;
LAB_00051fb0:
  if ((DAT_fffef02a & 4) == 0) {
    DAT_fffef15b = 0;
  }
  else {
    DAT_fffef15b = FUN_0000152c(DAT_fffef15b + 1);
  }
  if (_DAT_fffeeeb6 < 0xc981) {
    _DAT_fffef15e = 0;
  }
  else {
    _DAT_fffef15e = FUN_00001540(_DAT_fffef15e + 1);
  }
  if ((DAT_fffeef98 >> 2 & 7) == (DAT_fffef02b >> 2 & 7)) {
    DAT_fffef034 = FUN_0000152c(DAT_fffef034 + 1);
  }
  else {
    DAT_fffef034 = 0;
  }
  if (((DAT_fffef02a & 0x40) == 0) && (((int)(char)DAT_fffef02a & 0x20U) == 0)) {
    DAT_fffef166 = 0;
    return (int)(char)DAT_fffef02a;
  }
  uVar1 = FUN_0000152c(DAT_fffef166 + 1);
  DAT_fffef166 = (char)uVar1;
  return uVar1;
}

