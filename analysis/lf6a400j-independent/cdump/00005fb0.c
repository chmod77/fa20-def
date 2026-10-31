
uint FUN_00005fb0(void)

{
  uint uVar1;
  
  uVar1 = FUN_0000718c();
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 4) {
    FUN_00007144();
  }
  else if (uVar1 == 6) {
    FUN_00006f78();
  }
  else if (uVar1 == 10) {
    FUN_00006cb8();
  }
  else {
    if (uVar1 != 0xf) {
      if (uVar1 == 0x11) {
        FUN_00006bdc();
      }
      else {
        if (uVar1 != 7) {
          return uVar1;
        }
        thunk_FUN_00007478();
      }
      uVar1 = FUN_0000718c();
      if ((uVar1 & 0xff) != 0x15) {
        return uVar1 & 0xff;
      }
      uVar1 = thunk_FUN_00005008();
      return uVar1;
    }
    FUN_00006e18();
  }
  uVar1 = FUN_0000718c();
  if ((uVar1 & 0xff) != 0x13) {
    return uVar1 & 0xff;
  }
  uVar1 = FUN_00007050();
  return uVar1;
}

