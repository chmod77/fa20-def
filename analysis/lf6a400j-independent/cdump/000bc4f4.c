
uint FUN_000bc4f4(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar6;
  char *pcVar5;
  
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = (uVar4 & 0xff) + 1) {
    *(undefined1 *)((uVar4 & 0xff) - 0xf1ee) = 0x80;
  }
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = (uVar4 & 0xff) + 1) {
    *(undefined1 *)((uVar4 & 0xff) - 0xf1dc) = 0;
  }
  iVar2 = 0;
  for (bVar6 = 0; bVar6 < 2; bVar6 = bVar6 + 1) {
    *(undefined2 *)(&DAT_ffff1668 + iVar2) = 0;
    iVar2 = iVar2 + 2;
  }
  uVar1 = 0x80;
  DAT_ffff051a = 0x80;
  DAT_ffff051b = 0x80;
  uVar4 = 0;
  while ((uVar4 & 0xff) < 2) {
    *(undefined1 *)((uVar4 & 0xff) - 0xf1ea) = 0;
    uVar1 = (uVar4 & 0xff) + 1;
    uVar4 = uVar1;
  }
  uVar4 = 0;
  while ((uVar4 & 0xff) < 2) {
    *(undefined1 *)((uVar4 & 0xff) - 0xf1da) = 0x80;
    uVar1 = (uVar4 & 0xff) + 1;
    uVar4 = uVar1;
  }
  uVar4 = 0;
  while ((uVar4 & 0xff) < 2) {
    *(undefined1 *)((uVar4 & 0xff) - 0xf1ec) = 0x80;
    uVar1 = (uVar4 & 0xff) + 1;
    uVar4 = uVar1;
  }
  uVar4 = 0;
  while ((uVar4 & 0xff) < 2) {
    (&DAT_ffff0e18)[uVar4 & 0xff] = 0x80;
    uVar1 = (uVar4 & 0xff) + 1;
    uVar4 = uVar1;
  }
  uVar4 = 0;
  while ((uVar4 & 0xff) < 2) {
    *(undefined1 *)((uVar4 & 0xff) - 0xf1e6) = 0x80;
    uVar1 = (uVar4 & 0xff) + 1;
    uVar4 = uVar1;
  }
  uVar4 = 0;
  while ((uVar4 & 0xff) < 2) {
    *(undefined1 *)((uVar4 & 0xff) - 0xf1e4) = 0x80;
    uVar1 = (uVar4 & 0xff) + 1;
    uVar4 = uVar1;
  }
  uVar4 = 0;
  while ((uVar4 & 0xff) < 2) {
    *(undefined1 *)((uVar4 & 0xff) - 0xf1e2) = 0;
    uVar1 = (uVar4 & 0xff) + 1;
    uVar4 = uVar1;
  }
  uVar4 = 0;
  while ((uVar4 & 0xff) < 2) {
    (&DAT_ffff0e20)[uVar4 & 0xff] = 0;
    uVar1 = (uVar4 & 0xff) + 1;
    uVar4 = uVar1;
  }
  uVar4 = 0;
  while ((uVar4 & 0xff) < 2) {
    *(undefined1 *)((uVar4 & 0xff) - 0xf1de) = 0;
    uVar1 = (uVar4 & 0xff) + 1;
    uVar4 = uVar1;
  }
  uVar4 = 0;
  while (uVar3 = 0, (uVar4 & 0xff) < 2) {
    *(undefined1 *)((uVar4 & 0xff) - 0xf1d8) = 0x80;
    uVar1 = (uVar4 & 0xff) + 1;
    uVar4 = uVar1;
  }
  for (; (uVar3 & 0xff) < 2; uVar3 = (uVar3 & 0xff) + 1) {
    pcVar5 = (char *)((uVar3 & 0xff) - 0xf1d6);
    uVar1 = (int)*pcVar5 & 0x7f;
    *pcVar5 = (char)uVar1;
  }
  return uVar1;
}

