
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000593d0(void)

{
  if (((int)(char)DAT_fffef25b & 0x80U) == 0) {
    DAT_fffef27e = '\0';
  }
  else {
    DAT_fffef27e = FUN_0000152c(DAT_fffef27e + 1);
  }
  if (((DAT_fffef25b & 0x20) == 0) && (DAT_fffef27e == '\0')) {
    _DAT_fffef272 = (undefined2)((uint)_DAT_fffef276 * 1000 >> 0x10);
    _DAT_fffef274 = (short)((uint)_DAT_fffef278 * 1000 >> 0x10);
    if ((DAT_fffef270 & 1) == 0) {
      DAT_fffef270 = DAT_fffef270 | 1;
      _DAT_fffef27a = _DAT_fffef272;
      _DAT_fffef27c = _DAT_fffef274;
    }
    else {
      _DAT_fffef27a = FUN_0016b4d8(&DAT_fffef27a,_DAT_fffef272);
      _DAT_fffef27c = FUN_0016b4d8(&DAT_fffef27c,(int)_DAT_fffef274,0xffff8000);
    }
  }
  DAT_fffef25b = DAT_fffef25b | 0x20;
  return;
}

