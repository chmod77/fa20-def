
void FUN_000b8288(void)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  
  for (uVar2 = 0; (uVar2 & 0xff) < 2; uVar2 = (uVar2 & 0xff) + 1) {
    *(undefined1 *)((uVar2 & 0xff) - 0xc706) = 0x80;
  }
  for (uVar2 = 0; (uVar2 & 0xff) < 2; uVar2 = (uVar2 & 0xff) + 1) {
    *(undefined1 *)((uVar2 & 0xff) - 0xc704) = 0x80;
  }
  for (uVar2 = 0; (uVar2 & 0xff) < 2; uVar2 = (uVar2 & 0xff) + 1) {
    *(undefined1 *)((uVar2 & 0xff) - 0xc702) = 0x80;
  }
  for (uVar2 = 0; uVar1 = 0, (uVar2 & 0xff) < 2; uVar2 = (uVar2 & 0xff) + 1) {
    *(undefined1 *)((uVar2 & 0xff) - 0xc700) = 0x80;
  }
  for (; (uVar1 & 0xff) < 2; uVar1 = (uVar1 & 0xff) + 1) {
    pbVar3 = (byte *)((uVar1 & 0xff) - 0xc6fe);
    *pbVar3 = *pbVar3 & 0xef;
  }
  return;
}

