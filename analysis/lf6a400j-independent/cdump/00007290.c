
uint FUN_00007290(void)

{
  uint uVar1;
  
  uVar1 = FUN_0000718c();
  uVar1 = uVar1 & 0xff;
  if ((uVar1 != 0x11) && (uVar1 != 7)) {
    if (uVar1 != 0x10) {
      return uVar1;
    }
    uVar1 = FUN_000073e4();
    return uVar1;
  }
  uVar1 = FUN_00007334();
  return uVar1;
}

