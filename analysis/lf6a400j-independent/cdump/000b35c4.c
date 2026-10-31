
void FUN_000b35c4(void)

{
  uint uVar1;
  
  DAT_ffff3692 = DAT_ffff3692 & 0x7f;
  DAT_ffff368f = 0;
  DAT_ffff3690 = 0;
  for (uVar1 = 0; (uVar1 & 0xff) < 0xc; uVar1 = (uVar1 & 0xff) + 1) {
    *(undefined1 *)((uVar1 & 0xff) - 0xc4fc) = 0;
  }
  for (uVar1 = 0; (uVar1 & 0xff) < 10; uVar1 = (uVar1 & 0xff) + 1) {
    *(undefined1 *)((uVar1 & 0xff) - 0xc712) = 0;
  }
  DAT_ffff3691 = 0x80;
  DAT_ffff3693 = DAT_ffff3693 & 0xfe;
  return;
}

