
void FUN_0015779a(void)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = FUN_001426c4();
  bVar2 = DAT_ffff2985 | 0x40;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff2985 & 0xbf;
  }
  DAT_ffff2985 = bVar2;
  uVar1 = FUN_001426b6();
  bVar2 = DAT_ffff2985 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff2985 & 0x7f;
  }
  DAT_ffff2985 = bVar2;
  return;
}

