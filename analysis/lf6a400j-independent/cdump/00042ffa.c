
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00042ffa(void)

{
  ushort uVar2;
  byte bVar3;
  uint uVar1;
  
  if ((((int)DAT_fffef371 & 4U) == 0) || (DAT_ffff0904 != '\0')) {
    DAT_fffef90b = 0;
    DAT_fffef90c = 0;
    DAT_fffef90d = 0;
    DAT_fffef90e = 0;
    DAT_fffef90f = 0;
    return (int)DAT_fffef371;
  }
  uVar2 = _DAT_fffef17e & 0xc;
  if ((((DAT_ffff655e & 4) != 0) && (uVar2 == 0xc)) &&
     (DAT_fffef90b = FUN_0000152c(DAT_fffef90b + 1), 7 < DAT_fffef90b)) {
    DAT_fffef90a = DAT_fffef90a | 0x80;
    DAT_fffef99c = '\x01';
  }
  if (((DAT_ffff655e & 4) == 0) || (uVar2 != 0)) {
    DAT_fffef90e = 0;
  }
  else {
    DAT_fffef90e = FUN_0000152c(DAT_fffef90e + 1);
    if (99 < DAT_fffef90e) {
      DAT_fffef90b = 0;
      DAT_fffef90a = DAT_fffef90a & 0x7f;
      DAT_fffef99c = '\x01';
    }
  }
  if ((((DAT_ffff655e & 4) == 0) && (uVar2 == 8)) &&
     (DAT_fffef90c = FUN_0000152c(DAT_fffef90c + 1), 7 < DAT_fffef90c)) {
    DAT_fffef90a = DAT_fffef90a | 0x40;
    DAT_fffef99d = '\x01';
  }
  if ((((DAT_ffff655e & 4) == 0) && (uVar2 == 4)) &&
     (DAT_fffef90d = FUN_0000152c(DAT_fffef90d + 1), 7 < DAT_fffef90d)) {
    DAT_fffef90a = DAT_fffef90a | 0x20;
    DAT_fffef99e = '\x01';
  }
  bVar3 = (DAT_ffff655e & 4) == 0;
  if ((((bool)bVar3) && (bVar3 = uVar2 == 0, uVar2 == 0)) &&
     (bVar3 = FUN_0000152c(DAT_fffef90f + 1), 99 < bVar3)) {
    DAT_fffef90c = 0;
    DAT_fffef99d = '\x01';
    DAT_fffef90d = 0;
    DAT_fffef90a = DAT_fffef90a & 0x9f;
    DAT_fffef99e = '\x01';
  }
  DAT_fffef90f = bVar3;
  if (((DAT_fffef90a & 0x40) == 0) && ((DAT_fffef90a & 0x20) == 0)) {
    if ((DAT_fffef99d != '\x01') || (DAT_fffef99e != '\x01')) goto LAB_000431fa;
    DAT_fffef9b7 = DAT_fffef9b7 & 0xfe;
  }
  else {
    DAT_fffef9b7 = DAT_fffef9b7 | 1;
  }
  DAT_fffef99f = 1;
LAB_000431fa:
  if (((int)(char)DAT_fffef90a & 0x80U) == 0) {
    if ((int)DAT_fffef99c != 1) {
      return (int)DAT_fffef99c;
    }
    uVar1 = (int)(char)DAT_fffef9b7 & 0xfd;
    DAT_fffef9b7 = (byte)uVar1;
  }
  else {
    uVar1 = (int)(char)DAT_fffef9b7 | 2;
    DAT_fffef9b7 = (byte)uVar1;
  }
  DAT_fffef9a0 = 1;
  return uVar1;
}

