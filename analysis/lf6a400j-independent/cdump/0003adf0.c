
void FUN_0003adf0(void)

{
  byte bVar1;
  
  if (DAT_ffff29a7 < 0x26) {
    bVar1 = 0x40;
  }
  else {
    bVar1 = 0x28;
  }
  if (DAT_ffff29a2 < bVar1) {
    DAT_ffff2ac6 = 0;
  }
  else {
    DAT_ffff2ac6 = FUN_0000152c(DAT_ffff2ac6 + 1);
  }
  return;
}

