
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004e0f8(void)

{
  byte bVar1;
  
  if ((DAT_fffeef76 & 8) == 0) {
    if ((DAT_fffef08c & 8) != 0) {
      DAT_fffef08f = DAT_fffef08f | 0x80;
    }
  }
  else {
    DAT_fffef08f = DAT_fffef08f & 0x7f;
  }
  if ((DAT_ffff067d & 4) == 0) {
    if ((DAT_fffef08f & 1) != 0) {
      DAT_fffef08f = DAT_fffef08f | 0x40;
    }
  }
  else {
    DAT_fffef08f = DAT_fffef08f & 0xbf;
  }
  if (((int)DAT_ffff2fdc & 0x80U) == 0) {
    _DAT_fffef094 = FUN_00001540(_DAT_fffef094 + 1);
  }
  else {
    _DAT_fffef094 = 100;
  }
  if (((DAT_ffff000d & 0x20) == 0) &&
     ((((int)DAT_fffee710 & 0x80U) != 0 ||
      (((((((DAT_fffef0d6 & 1) != 0 || ((DAT_fffeef76 & 8) == 0)) &&
          (((DAT_fffef0d6 & 1) == 0 || ((DAT_ffff067d & 4) == 0)))) &&
         ((((DAT_fffef0d6 & 1) != 0 || (((int)(char)DAT_fffef08f & 0x80U) == 0)) ||
          (200 < DAT_fffef096)))) &&
        ((((DAT_fffef0d6 & 1) == 0 || ((DAT_fffef08f & 0x40) == 0)) || (200 < DAT_fffef5b2)))) &&
       (99 < _DAT_fffef094)))))) {
    DAT_fffeef76 = DAT_fffeef76 & 0xbf;
  }
  else {
    DAT_fffeef76 = DAT_fffeef76 | 0x40;
  }
  if (((int)(char)DAT_fffef08f & 0x80U) == 0) {
    DAT_fffef096 = 0;
  }
  else {
    DAT_fffef096 = FUN_0000152c(DAT_fffef096 + 1);
  }
  if ((DAT_fffef08f & 0x40) == 0) {
    DAT_fffef5b2 = 0;
  }
  else {
    DAT_fffef5b2 = FUN_0000152c(DAT_fffef5b2 + 1);
  }
  bVar1 = DAT_fffef08c | 8;
  if ((DAT_fffeef76 & 8) == 0) {
    bVar1 = DAT_fffef08c & 0xf7;
  }
  DAT_fffef08c = bVar1;
  bVar1 = DAT_fffef08f | 1;
  if ((DAT_ffff067d & 4) == 0) {
    bVar1 = DAT_fffef08f & 0xfe;
  }
  DAT_fffef08f = bVar1;
  return;
}

