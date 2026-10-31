
uint FUN_00052c40(void)

{
  uint uVar1;
  
  FUN_00052c80();
  if ((DAT_fffef310 & 8) != 0) {
    uVar1 = FUN_00052d0a();
    return uVar1;
  }
  if ((DAT_fffef310 & 0x10) == 0) {
    uVar1 = (uint)(char)DAT_fffef310;
    if ((uVar1 & 4) != 0) {
      uVar1 = FUN_000567bc();
      return uVar1;
    }
  }
  else {
    uVar1 = (uint)DAT_ffffab35;
    if ((uVar1 & 0x80) != 0) {
      uVar1 = (uint)DAT_ffff0006;
      if ((uVar1 & 2) != 0) {
        uVar1 = FUN_000548a6();
        return uVar1;
      }
    }
  }
  return uVar1;
}

