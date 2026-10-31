
void FUN_00051a74(void)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = FUN_0016b404((int)DAT_ffffab41,0x7d,7);
  bVar2 = DAT_fffef02b | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffef02b & 0x7f;
  }
  DAT_fffef02b = bVar2;
  uVar1 = FUN_0016b404(0xffffffc8,(int)DAT_ffffab41,7,(bVar2 & 0x40) != 0);
  bVar2 = DAT_fffef02b | 0x40;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffef02b & 0xbf;
  }
  if ((DAT_fffeef9c == '\x01') ||
     ((((7 < DAT_ffff299c && ((((int)(char)bVar2 & 0x80U) != 0 || (DAT_fffef02d < 7)))) &&
       (((bVar2 & 0x40) != 0 || (DAT_fffef02e < 7)))) && ((DAT_fffef02a & 2) != 0)))) {
    if ((((((DAT_ffff0000 & 2) != 0) && (DAT_ffff66b0 == '\x03')) &&
         (((int)(char)bVar2 & 0x80U) != 0)) && (((bVar2 & 0x40) != 0 && (6 < DAT_fffef02f)))) &&
       (((DAT_fffef02a & 2) != 0 && (DAT_fffeef9c == '\x01')))) {
      DAT_fffeef9c = '\f';
    }
  }
  else {
    DAT_fffeef9c = '\x01';
  }
  DAT_fffef02b = bVar2;
  if (((int)(char)bVar2 & 0x80U) == 0) {
    DAT_fffef02d = FUN_0000152c(DAT_fffef02d + 1);
  }
  else {
    DAT_fffef02d = 0;
  }
  if ((DAT_fffef02b & 0x40) == 0) {
    DAT_fffef02e = FUN_0000152c(DAT_fffef02e + 1);
  }
  else {
    DAT_fffef02e = 0;
  }
  if ((((int)(char)DAT_fffef02b & 0x80U) == 0) || ((DAT_fffef02b & 0x40) == 0)) {
    DAT_fffef02f = 0;
  }
  else {
    DAT_fffef02f = FUN_0000152c(DAT_fffef02f + 1);
  }
  if (DAT_ffff66b0 == '\x03') {
    DAT_fffef02c = FUN_0000152c(DAT_fffef02c + 1);
  }
  else {
    DAT_fffef02c = 0;
  }
  return;
}

