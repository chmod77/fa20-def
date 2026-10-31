
void FUN_0006c138(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar3 = 0;
  pbVar5 = &DAT_fffef821;
  for (uVar4 = 0; (uVar4 & 0xff) < 7; uVar4 = (uVar4 & 0xff) + 1) {
    uVar2 = (uint)*(char *)((uVar4 & 0xff) * 3 + -0x11417);
    bVar1 = 0;
    if ((uVar2 & 0x40) == 0) {
      bVar1 = 0x80;
    }
    if ((uVar2 & 0x20) != 0) {
      bVar1 = bVar1 | 0x40;
    }
    if ((uVar2 & 1) != 0) {
      bVar1 = bVar1 | 0x20;
    }
    if ((uVar2 & 8) != 0) {
      bVar1 = bVar1 | 0x10;
    }
    if ((uVar2 & 0x80) != 0) {
      bVar1 = bVar1 | 8;
    }
    if ((uVar2 & 2) != 0) {
      bVar1 = bVar1 | 4;
    }
    if ((uVar2 & 4) != 0) {
      bVar1 = bVar1 | 1;
    }
    *pbVar5 = bVar1;
    uVar3 = uVar3 >> 1;
    pbVar5 = pbVar5 + 1;
    if (((uVar2 & 2) != 0) && ((uVar2 & 0x40) == 0)) {
      uVar3 = uVar3 | 0x40;
    }
  }
  DAT_fffef747 = (char)uVar3;
  return;
}

