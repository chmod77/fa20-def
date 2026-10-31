
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00042da6(void)

{
  ushort uVar2;
  byte bVar3;
  uint uVar1;
  
  if ((((int)DAT_fffef371 & 4U) == 0) || (DAT_ffff08c4 != '\0')) {
    DAT_fffef905 = 0;
    DAT_fffef906 = 0;
    DAT_fffef907 = 0;
    DAT_fffef908 = 0;
    DAT_fffef909 = 0;
    return (int)DAT_fffef371;
  }
  uVar2 = _DAT_fffef17e & 3;
  if (((0x1999 < _DAT_fffef040) && (uVar2 == 3)) &&
     (DAT_fffef905 = FUN_0000152c(DAT_fffef905 + 1), 7 < DAT_fffef905)) {
    DAT_fffef904 = DAT_fffef904 | 0x80;
    DAT_fffef997 = '\x01';
  }
  bVar3 = 0x1999 < _DAT_fffef040;
  if (((0x1999 < _DAT_fffef040) && (bVar3 = uVar2 == 0, uVar2 == 0)) &&
     (bVar3 = FUN_0000152c(DAT_fffef908 + 1), 99 < bVar3)) {
    DAT_fffef905 = 0;
    DAT_fffef904 = DAT_fffef904 & 0x7f;
    DAT_fffef997 = '\x01';
  }
  DAT_fffef908 = bVar3;
  if (((_DAT_fffef040 < 0x6667) && (uVar2 == 2)) &&
     (DAT_fffef906 = FUN_0000152c(DAT_fffef906 + 1), 7 < DAT_fffef906)) {
    DAT_fffef904 = DAT_fffef904 | 0x40;
    DAT_fffef998 = '\x01';
  }
  if (((_DAT_fffef040 < 0x6667) && (uVar2 == 1)) &&
     (DAT_fffef907 = FUN_0000152c(DAT_fffef907 + 1), 7 < DAT_fffef907)) {
    DAT_fffef904 = DAT_fffef904 | 0x20;
    DAT_fffef999 = '\x01';
  }
  if ((_DAT_fffef040 < 0x6667) && (uVar2 == 0)) {
    DAT_fffef909 = FUN_0000152c(DAT_fffef909 + 1);
    if (99 < DAT_fffef909) {
      DAT_fffef906 = 0;
      DAT_fffef998 = '\x01';
      DAT_fffef907 = 0;
      DAT_fffef904 = DAT_fffef904 & 0x9f;
      DAT_fffef999 = '\x01';
    }
  }
  else {
    DAT_fffef909 = 0;
  }
  if (((DAT_fffef904 & 0x40) == 0) && ((DAT_fffef904 & 0x20) == 0)) {
    if ((DAT_fffef998 != '\x01') || (DAT_fffef999 != '\x01')) goto LAB_00042fb4;
    DAT_fffef9b3 = DAT_fffef9b3 & 0xfe;
  }
  else {
    DAT_fffef9b3 = DAT_fffef9b3 | 1;
  }
  DAT_fffef99a = 1;
LAB_00042fb4:
  if (((int)(char)DAT_fffef904 & 0x80U) == 0) {
    if ((int)DAT_fffef997 != 1) {
      return (int)DAT_fffef997;
    }
    uVar1 = (int)(char)DAT_fffef9b3 & 0xfd;
    DAT_fffef9b3 = (byte)uVar1;
  }
  else {
    uVar1 = (int)(char)DAT_fffef9b3 | 2;
    DAT_fffef9b3 = (byte)uVar1;
  }
  DAT_fffef99b = 1;
  return uVar1;
}

