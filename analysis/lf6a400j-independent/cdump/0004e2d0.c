
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004e2d0(void)

{
  byte bVar2;
  uint uVar1;
  
  if ((DAT_ffff0006 & 1) == 0) {
    DAT_fffeef76 = DAT_fffeef76 & 0xdf;
  }
  else {
    DAT_fffeef76 = DAT_fffeef76 | 0x20;
  }
  bVar2 = DAT_fffef08c | 0x10;
  if ((DAT_fffeef76 & 0x10) == 0) {
    bVar2 = DAT_fffef08c & 0xef;
  }
  if ((DAT_ffff000e & 1) == 0) {
    DAT_fffeef76 = DAT_fffeef76 & 0xef;
  }
  else {
    DAT_fffeef76 = DAT_fffeef76 | 0x10;
  }
  if ((DAT_fffeef76 & 0x10) == 0) {
    if ((bVar2 & 0x10) != 0) {
      DAT_fffef090 = DAT_fffef090 | 0x80;
    }
  }
  else {
    DAT_fffef090 = DAT_fffef090 & 0x7f;
  }
  if ((((DAT_fffeef76 & 0x10) == 0) || ((DAT_fffef08d & 1) != 0)) || (DAT_fffef09a != '\0')) {
    if (((((DAT_fffeef76 & 0x10) == 0) && (((int)(char)DAT_fffef090 & 0x80U) != 0)) &&
        (0x31 < _DAT_fffef098)) || (((DAT_fffef08d & 1) != 0 || (DAT_fffef09a != '\0')))) {
      DAT_fffeef76 = DAT_fffeef76 & 0xf7;
    }
  }
  else {
    DAT_fffeef76 = DAT_fffeef76 | 8;
  }
  uVar1 = (uint)(char)DAT_fffef090;
  DAT_fffef08c = bVar2;
  if ((uVar1 & 0x80) == 0) {
    _DAT_fffef098 = 0;
  }
  else {
    uVar1 = FUN_00001540(_DAT_fffef098 + 1);
    _DAT_fffef098 = (ushort)uVar1;
  }
  return uVar1;
}

