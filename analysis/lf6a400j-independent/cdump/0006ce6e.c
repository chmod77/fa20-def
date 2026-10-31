
void FUN_0006ce6e(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  DAT_fffeeada = 0xa1;
  for (uVar2 = 0; (uVar2 & 0xff) < 0x1c; uVar2 = (uVar2 & 0xff) + 1) {
    uVar3 = 0;
    for (uVar4 = 0; (uVar4 & 0xff) < 8; uVar4 = (uVar4 & 0xff) + 1) {
      if (((&DAT_0001b1f8)[(uVar2 & 0xff) * 8 + (uVar4 & 0xff)] & 0x10) != 0) {
        uVar1 = __shl_r0_by_r1(1,uVar4 & 0xff);
        uVar3 = uVar1 | uVar3 & 0xff;
      }
    }
    *(char *)((uVar2 & 0xff) - 0x11525) = (char)uVar3;
  }
  DAT_fffeeaf7 = 0xff;
  DAT_fffeeaf8 = 0;
  return;
}

