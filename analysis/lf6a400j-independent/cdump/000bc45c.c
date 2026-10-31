
void FUN_000bc45c(void)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  
  for (uVar2 = 0; (uVar2 & 0xff) < 2; uVar2 = (uVar2 & 0xff) + 1) {
    *(undefined1 *)((uVar2 & 0xff) - 0xc6fc) = 0x80;
  }
  for (uVar2 = 0; (uVar2 & 0xff) < 2; uVar2 = (uVar2 & 0xff) + 1) {
    *(undefined1 *)((uVar2 & 0xff) - 0xc6fa) = 0x80;
  }
  for (uVar2 = 0; (uVar2 & 0xff) < 2; uVar2 = (uVar2 & 0xff) + 1) {
    *(undefined1 *)((uVar2 & 0xff) - 0xc6f8) = 0x80;
  }
  for (uVar2 = 0; uVar1 = 0, (uVar2 & 0xff) < 2; uVar2 = (uVar2 & 0xff) + 1) {
    *(undefined1 *)((uVar2 & 0xff) - 0xc6f6) = 0x80;
  }
  for (; (uVar1 & 0xff) < 2; uVar1 = (uVar1 & 0xff) + 1) {
    pbVar3 = (byte *)((uVar1 & 0xff) - 0xc6f4);
    *pbVar3 = *pbVar3 & 0xef;
  }
  return;
}

