
void FUN_0013c088(void)

{
  uint uVar1;
  
  DAT_ffff2306 = DAT_ffff2406;
  DAT_ffff2307 = DAT_ffff2505 + 2;
  DAT_ffff2308 = DAT_ffff2504;
  if (DAT_ffff2504 == -8) {
    DAT_ffff2306 = 0xff;
  }
  if (DAT_ffff2505 != 0) {
    for (uVar1 = 0; (uVar1 & 0xff) < (uint)DAT_ffff2505; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xff;
      *(undefined1 *)(uVar1 - 0xdcf7) = *(undefined1 *)(uVar1 - 0xdafa);
    }
  }
  DAT_ffff2404 = FUN_0013c0e6();
  DAT_ffffab30 = 1;
  return;
}

