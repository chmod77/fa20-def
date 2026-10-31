
void FUN_0007dcf4(void)

{
  byte bVar1;
  
  bVar1 = DAT_ffffab40 | 8;
  if ((DAT_ffff03d8 & 2) == 0) {
    bVar1 = DAT_ffffab40 & 0xf7;
  }
  DAT_ffffab40 = bVar1 | 0x20;
  if ((DAT_ffff03d8 & 1) == 0) {
    DAT_ffffab40 = bVar1 & 0xdf;
  }
  return;
}

