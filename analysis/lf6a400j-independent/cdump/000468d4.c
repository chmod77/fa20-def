
void FUN_000468d4(void)

{
  if (((((DAT_fffef371 & 2) == 0) || (DAT_ffff0592 < 0x89)) || ((DAT_ffff000e & 1) != 0)) ||
     (((DAT_fffeeec6 & 1) != 0 || ((DAT_ffff6788 & 0x20) != 0)))) {
    DAT_fffef0ea = DAT_fffef0ea & 0xfd;
  }
  else {
    DAT_fffef0ea = DAT_fffef0ea | 2;
  }
  if (((DAT_fffeeec6 & 1) == 0) && ((DAT_ffff6788 & 0x20) == 0)) {
    DAT_fffef0ea = DAT_fffef0ea | 1;
    return;
  }
  DAT_fffef0ea = DAT_fffef0ea & 0xfe;
  return;
}

