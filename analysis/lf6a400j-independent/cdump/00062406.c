
uint FUN_00062406(void)

{
  uint uVar1;
  byte bVar2;
  
  if ((DAT_fffef63a & 1) != 0) {
    bVar2 = DAT_fffef5d1 == '\x01';
    if (DAT_fffef5d2 == '\x01') {
      bVar2 = bVar2 + 1;
    }
    if (DAT_fffef5d3 == '\x01') {
      bVar2 = bVar2 + 1;
    }
    uVar1 = (uint)DAT_fffef5d4;
    if (uVar1 == 1) {
      bVar2 = bVar2 + 1;
    }
    if (bVar2 < 3) {
      return uVar1;
    }
    if (DAT_fffef5d0 != '\0') {
      return uVar1;
    }
  }
  uVar1 = (uint)DAT_fffef63b;
  DAT_fffef63b = (char)(uVar1 & 0xfd);
  return uVar1 & 0xfd;
}

