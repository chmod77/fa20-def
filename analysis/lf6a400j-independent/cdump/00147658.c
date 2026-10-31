
void FUN_00147658(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (DAT_ffff1e19 & 2) == 0;
  bVar2 = DAT_ffff1e56 | 0x80;
  if (bVar1) {
    bVar2 = DAT_ffff1e56 & 0x7f;
  }
  bVar1 = !bVar1;
  if (((DAT_ffff66ca & 0x40) == 0) || (-(uint)!bVar1 != -(uint)((bVar2 & 0x40) == 0))) {
    DAT_ffff1e95 = 0x10;
    DAT_ffff1e96 = 0xf;
    if (bVar1) {
      DAT_ffff1e90 = 0x24;
      DAT_ffff1e91 = 0xf;
      DAT_ffff1e92 = 0xf;
    }
    else {
      DAT_ffff1e90 = 0x2c;
      DAT_ffff1e91 = 0x10;
      DAT_ffff1e92 = 0x10;
    }
    DAT_ffff1e94 = 0;
    DAT_ffff1e9d = 4;
    DAT_ffff1e9e = 0xc;
    DAT_ffff1e54 = DAT_ffff1e54 | 0x80;
    DAT_ffff66ca = DAT_ffff66ca | 0x40;
  }
  DAT_ffff1e56 = bVar2 | 0x40;
  if (!bVar1) {
    DAT_ffff1e56 = bVar2 & 0xbf;
  }
  return;
}

