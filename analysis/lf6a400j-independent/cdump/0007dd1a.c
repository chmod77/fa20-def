
void FUN_0007dd1a(void)

{
  byte bVar1;
  
  bVar1 = DAT_ffff2a14 | 0x80;
  if ((DAT_ffff064a & 0x40) == 0) {
    bVar1 = DAT_ffff2a14 & 0x7f;
  }
  DAT_ffff2a14 = bVar1;
  return;
}

