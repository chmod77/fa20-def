
uint FUN_00046eb0(void)

{
  uint uVar1;
  
  if ((DAT_ffff0592 < 0x89) || ((DAT_ffff0006 & 2) == 0)) {
    uVar1 = (int)(char)DAT_fffef3e1 & 0xdf;
    DAT_fffef3e1 = (byte)uVar1;
    DAT_fffef0ec = 0;
  }
  else {
    if (99 < DAT_fffef0ec) {
      DAT_fffef3e1 = DAT_fffef3e1 | 0x20;
    }
    uVar1 = FUN_0000152c(DAT_fffef0ec + 1);
    DAT_fffef0ec = (byte)uVar1;
  }
  return uVar1;
}

