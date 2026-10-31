
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005205e(void)

{
  uint uVar1;
  
  if ((int)DAT_fffeef9c != 6) {
    DAT_fffef035 = 0;
    DAT_fffef160 = 0;
    DAT_fffef161 = 0;
    DAT_fffef167 = 0;
    return (int)DAT_fffeef9c;
  }
  if ((DAT_fffef32a & 0x10) == 0) {
    if ((((DAT_fffef02a & 0x40) == 0) && ((DAT_fffef02a & 0x20) == 0)) || (DAT_fffef167 == 0)) {
      if (((((DAT_fffef02a & 8) == 0) && ((DAT_fffef02a & 4) == 0)) ||
          ((-0x2e < _DAT_fffef006 && (_DAT_fffef006 < 0x2e)))) || (DAT_fffef160 < 0x26)) {
        if ((((DAT_fffef02a & 8) == 0) && ((DAT_fffef02a & 4) == 0)) ||
           ((_DAT_fffef006 < -0x2d || ((0x2d < _DAT_fffef006 || (DAT_fffef161 < 0x19)))))) {
          if ((0xe2bf < _DAT_fffeeeb6) &&
             ((-(uint)((DAT_fffeef98 & 2) == 0) == -(uint)((DAT_fffef02b & 2) == 0) &&
              (2 < DAT_fffef035)))) {
            DAT_fffeef9c = '\x05';
          }
          goto LAB_000521d4;
        }
      }
      else {
        DAT_fffef158 = FUN_0000152c(DAT_fffef158 + 1);
        if (DAT_fffef158 < 3) {
          DAT_fffeef9c = '\a';
          goto LAB_000520ec;
        }
      }
      DAT_fffeef9a = DAT_fffeef9a | 0x80;
      goto LAB_000521d4;
    }
    DAT_fffeef9c = '\b';
  }
  else {
    DAT_fffeef9c = '\v';
  }
LAB_000520ec:
  DAT_fffeef9a = DAT_fffeef9a & 0xfe;
LAB_000521d4:
  if ((((DAT_fffef02a & 8) == 0) && ((DAT_fffef02a & 4) == 0)) ||
     ((-0x2e < _DAT_fffef006 && (_DAT_fffef006 < 0x2e)))) {
    DAT_fffef160 = 0;
  }
  else {
    DAT_fffef160 = FUN_0000152c(DAT_fffef160 + 1);
  }
  if (((((DAT_fffef02a & 8) == 0) && ((DAT_fffef02a & 4) == 0)) || (_DAT_fffef006 < -0x2d)) ||
     (0x2d < _DAT_fffef006)) {
    DAT_fffef161 = 0;
  }
  else {
    DAT_fffef161 = FUN_0000152c(DAT_fffef161 + 1);
  }
  if (-(uint)((DAT_fffeef98 & 2) == 0) == -(uint)((DAT_fffef02b & 2) == 0)) {
    DAT_fffef035 = FUN_0000152c(DAT_fffef035 + 1);
  }
  else {
    DAT_fffef035 = 0;
  }
  if (((DAT_fffef02a & 0x40) == 0) && (((int)(char)DAT_fffef02a & 0x20U) == 0)) {
    DAT_fffef167 = 0;
    return (int)(char)DAT_fffef02a;
  }
  uVar1 = FUN_0000152c(DAT_fffef167 + 1);
  DAT_fffef167 = (char)uVar1;
  return uVar1;
}

