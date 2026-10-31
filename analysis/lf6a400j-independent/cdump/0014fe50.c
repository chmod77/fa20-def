
void FUN_0014fe50(void)

{
  uint uVar1;
  
  DAT_ffff2d2c = DAT_ffff2d2c + '\x01';
  for (uVar1 = 0; (uVar1 & 0xff) < 4; uVar1 = uVar1 + 1) {
    uVar1 = uVar1 & 0xff;
    if (((*(byte *)(uVar1 - 0xd330) & 2) != 0) && (*(char *)(uVar1 - 0xd2d3) == DAT_ffff2d2c)) {
      FUN_0014fa80(uVar1);
      FUN_0014fe9c(uVar1);
    }
  }
  return;
}

