
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006bc78(void)

{
  if (DAT_ffff66b8 == -0x5b) {
    if (((DAT_fffef937 & 1) != 0) || (359999 < _DAT_fffef228)) {
      DAT_fffef22c = DAT_fffef22c | 0x80;
      DAT_fffef221 = DAT_fffef221 & 0xfe;
    }
    if (_DAT_fffef228 != 0xffffffff) {
      _DAT_fffef228 = _DAT_fffef228 + 1;
    }
    DAT_fffef22e = DAT_fffef22e & 0xfd;
    return;
  }
  if ((DAT_ffff66b0 == '\x03') && ((DAT_fffef22e & 2) == 0)) {
    DAT_fffef22c = DAT_fffef22c & 0x7f;
    DAT_fffef22e = DAT_fffef22e | 2;
  }
  _DAT_fffef228 = 0;
  return;
}

