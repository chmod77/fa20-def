
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00059ac2(void)

{
  if (((int)(char)DAT_fffef25b & 0x80U) == 0) {
    DAT_fffef26a = '\0';
  }
  else {
    DAT_fffef26a = FUN_0000152c(DAT_fffef26a + 1);
  }
  if (((DAT_fffef25b & 0x40) == 0) && (DAT_fffef26a == '\0')) {
    _DAT_fffef25e = (undefined2)((uint)_DAT_fffef262 * 1000 >> 0x10);
    _DAT_fffef260 = (short)((uint)_DAT_fffef264 * 1000 >> 0x10);
    if ((DAT_fffef25d & 1) == 0) {
      DAT_fffef25d = DAT_fffef25d | 1;
      _DAT_fffef266 = _DAT_fffef25e;
      _DAT_fffef268 = _DAT_fffef260;
    }
    else {
      _DAT_fffef266 = FUN_0016b4d8(&DAT_fffef266,_DAT_fffef25e);
      _DAT_fffef268 = FUN_0016b4d8(&DAT_fffef268,(int)_DAT_fffef260,0xffff8000);
    }
  }
  DAT_fffef25b = DAT_fffef25b | 0x40;
  return;
}

