
uint FUN_000623dc(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef63a;
  if ((uVar1 & 1) == 0) {
    uVar1 = (int)DAT_fffef63b & 0xfd;
    DAT_fffef63b = (char)uVar1;
  }
  else if (DAT_fffef5d0 == '\n') {
    uVar1 = (uint)DAT_fffef63b;
    DAT_fffef63b = (char)(uVar1 | 2);
    return uVar1 | 2;
  }
  return uVar1;
}

