
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00110ebc(void)

{
  uint uVar1;
  
  DAT_ffff07ed = 0;
  for (uVar1 = 0; (uVar1 & 0xff) < 0x67; uVar1 = (uVar1 & 0xff) + 1) {
    *(undefined1 *)((uVar1 & 0xff) - 0xf811) = 0;
  }
  DAT_ffff0856 = 0;
  _DAT_ffff1308 = 0;
  for (uVar1 = 0; (uVar1 & 0xff) < 0x67; uVar1 = (uVar1 & 0xff) + 1) {
    *(undefined1 *)((uVar1 & 0xff) - 0xf7a9) = 0;
  }
  DAT_ffff08be = DAT_ffff08be & 0xfe;
  DAT_ffff08bf = DAT_ffff08bf & 0xfe;
  DAT_ffff08c0 = DAT_ffff08c0 & 0xfe;
  DAT_ffff08c1 = DAT_ffff08c1 & 0xfe;
  DAT_ffff08c2 = DAT_ffff08c2 & 0xfe;
  DAT_ffff08c3 = DAT_ffff08c3 & 0xfe;
  DAT_ffff07ee = 0;
  return;
}

