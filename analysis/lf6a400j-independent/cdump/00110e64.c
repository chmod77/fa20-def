
void FUN_00110e64(void)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < 0x67; uVar1 = (uVar1 & 0xff) + 1) {
    *(undefined1 *)((uVar1 & 0xff) - 0xc8f5) = 0;
  }
  for (uVar1 = 0; (uVar1 & 0xff) < 0x67; uVar1 = (uVar1 & 0xff) + 1) {
    (&DAT_ffff3772)[uVar1 & 0xff] = 0;
  }
  for (uVar1 = 0; (uVar1 & 0xff) < 0x67; uVar1 = (uVar1 & 0xff) + 1) {
    (&DAT_ffff37d9)[uVar1 & 0xff] = 0;
  }
  return;
}

