
uint FUN_00006034(void)

{
  uint uVar1;
  
  uVar1 = FUN_0000718c();
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 8) {
    FUN_00006ce8();
    uVar1 = FUN_0000718c();
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 9) {
      FUN_00006c14();
      uVar1 = FUN_0000718c();
      uVar1 = uVar1 & 0xff;
      if (uVar1 == 0x15) {
        uVar1 = thunk_FUN_00005008();
        return uVar1;
      }
    }
  }
  else if (uVar1 == 0x10) {
    FUN_00006eb6();
    uVar1 = FUN_0000718c();
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0xe) {
      uVar1 = FUN_00006d98();
      return uVar1;
    }
  }
  return uVar1;
}

