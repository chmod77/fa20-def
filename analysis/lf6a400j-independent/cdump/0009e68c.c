
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009e68c(void)

{
  if (DAT_ffff1989 <= (char)((ushort)_DAT_fffec0d6 >> 8)) {
    _DAT_fffec0d6 = (short)DAT_ffff1989 << 8;
  }
  if ((char)((ushort)_DAT_fffec0d6 >> 8) <= DAT_ffff1988) {
    _DAT_fffec0d6 = (short)DAT_ffff1988 << 8;
  }
  *(short *)(&DAT_fffec090 + (uint)DAT_ffff1987 * 2) = _DAT_fffec0d6;
  return;
}

