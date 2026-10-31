
void FUN_0004edea(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  uVar1 = FUN_00001550(0x70);
  bVar2 = DAT_fffef364 | 4;
  if ((DAT_ffff0009 & 0x10) == 0) {
    bVar2 = DAT_fffef364 & 0xfb;
  }
  bVar3 = bVar2 | 8;
  if ((DAT_ffff000d & 0x20) == 0) {
    bVar3 = bVar2 & 0xf7;
  }
  bVar2 = bVar3 | 2;
  if ((DAT_ffff0008 & 1) == 0) {
    bVar2 = bVar3 & 0xfd;
  }
  bVar3 = DAT_fffef09e | 8;
  if ((DAT_ffff0006 & 4) == 0) {
    bVar3 = DAT_fffef09e & 0xf7;
  }
  bVar4 = DAT_fffef331 | 0x10;
  if ((DAT_ffff0007 & 8) == 0) {
    bVar4 = DAT_fffef331 & 0xef;
  }
  bVar5 = bVar4 | 8;
  if ((bVar4 & 0x10) == 0) {
    bVar5 = bVar4 & 0xf7;
  }
  bVar4 = bVar5 | 0x20;
  if ((DAT_ffff0007 & 4) == 0) {
    bVar4 = bVar5 & 0xdf;
  }
  bVar5 = bVar3 | 0x10;
  if ((DAT_ffff000e & 8) == 0) {
    bVar5 = bVar3 & 0xef;
  }
  bVar3 = bVar2 | 0x10;
  if (((int)DAT_fffee710 & 0x80U) == 0) {
    bVar3 = bVar2 & 0xef;
  }
  bVar2 = DAT_fffeef76 | 0x80;
  if ((bVar3 & 0x10) == 0) {
    bVar2 = DAT_fffeef76 & 0x7f;
  }
  bVar6 = bVar3 | 0x40;
  if ((DAT_ffff0009 & 0x20) == 0) {
    bVar6 = bVar3 & 0xbf;
  }
  DAT_fffef364 = bVar6 | 0x20;
  if ((bVar6 & 0x40) == 0) {
    DAT_fffef364 = bVar6 & 0xdf;
  }
  DAT_fffef331 = bVar4 | 2;
  if ((DAT_ffff000b & 0x20) == 0) {
    DAT_fffef331 = bVar4 & 0xfd;
  }
  DAT_fffef09e = bVar5 | 4;
  if ((DAT_ffff000e & 0x10) == 0) {
    DAT_fffef09e = bVar5 & 0xfb;
  }
  DAT_fffeef76 = bVar2;
  FUN_00001550(uVar1);
  return;
}

