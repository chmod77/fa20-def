
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ba26c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar5;
  byte *pbVar4;
  
  for (uVar3 = 0; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    *(undefined1 *)((uVar3 & 0xff) - 0xf20a) = 0x80;
  }
  for (uVar3 = 0; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    *(undefined1 *)((uVar3 & 0xff) - 0xf1f6) = 0;
  }
  iVar1 = 0;
  for (bVar5 = 0; bVar5 < 2; bVar5 = bVar5 + 1) {
    *(undefined2 *)(&DAT_ffff1664 + iVar1) = 0;
    iVar1 = iVar1 + 2;
  }
  DAT_ffff0517 = 0x80;
  DAT_ffff0518 = 0x80;
  for (uVar3 = 0; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    *(undefined1 *)((uVar3 & 0xff) - 0xf206) = 0;
  }
  for (uVar3 = 0; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    *(undefined1 *)((uVar3 & 0xff) - 0xf1f4) = 0x80;
  }
  for (uVar3 = 0; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    *(undefined1 *)((uVar3 & 0xff) - 0xf208) = 0x80;
  }
  for (uVar3 = 0; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    (&DAT_ffff0dfc)[uVar3 & 0xff] = 0x80;
  }
  for (uVar3 = 0; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    *(undefined1 *)((uVar3 & 0xff) - 0xf202) = 0x80;
  }
  for (uVar3 = 0; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    *(undefined1 *)((uVar3 & 0xff) - 0xf200) = 0x80;
  }
  _DAT_ffff0e02 = 0;
  for (uVar3 = 0; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    *(undefined1 *)((uVar3 & 0xff) - 0xf1fc) = 0;
  }
  for (uVar3 = 0; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    (&DAT_ffff0e06)[uVar3 & 0xff] = 0;
  }
  for (uVar3 = 0; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    *(undefined1 *)((uVar3 & 0xff) - 0xf1f8) = 0;
  }
  for (uVar3 = 0; uVar2 = 0, (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    *(undefined1 *)((uVar3 & 0xff) - 0xf1f2) = 0x80;
  }
  for (; (uVar2 & 0xff) < 2; uVar2 = (uVar2 & 0xff) + 1) {
    pbVar4 = (byte *)((uVar2 & 0xff) - 0xf1f0);
    *pbVar4 = *pbVar4 & 0x7f;
  }
  DAT_ffff0519 = DAT_ffff0519 & 0x5f;
  return;
}

