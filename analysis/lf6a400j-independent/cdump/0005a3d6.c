
void FUN_0005a3d6(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = DAT_fffef3aa | 0x40;
  if ((DAT_fffef8a3 & 4) == 0) {
    bVar1 = DAT_fffef3aa & 0xbf;
  }
  bVar2 = bVar1 | 0x80;
  if ((DAT_fffef8a3 & 8) == 0) {
    bVar2 = bVar1 & 0x7f;
  }
  bVar1 = bVar2 | 0x10;
  if ((DAT_fffef8a3 & 0x10) == 0) {
    bVar1 = bVar2 & 0xef;
  }
  bVar2 = bVar1 | 0x20;
  if ((DAT_fffef8a3 & 0x20) == 0) {
    bVar2 = bVar1 & 0xdf;
  }
  DAT_fffef3aa = bVar2 | 8;
  if ((DAT_ffff07b2 & 8) == 0) {
    DAT_fffef3aa = bVar2 & 0xf7;
  }
  return;
}

