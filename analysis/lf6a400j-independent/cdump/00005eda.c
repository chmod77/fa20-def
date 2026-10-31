
uint FUN_00005eda(void)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = FUN_0000718c();
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    FUN_00006f96();
    cVar2 = FUN_0000718c();
    if (cVar2 == '\x02') {
      FUN_00007074();
      cVar2 = FUN_0000718c();
      if (cVar2 == '\x03') {
        FUN_0000685c();
        FUN_00007258();
        uVar1 = FUN_00007198(4);
        return uVar1;
      }
      cVar2 = FUN_0000718c();
      if (cVar2 == '\x05') {
        FUN_0000685c();
        FUN_00007258();
        uVar1 = FUN_00007198(6);
        return uVar1;
      }
    }
    uVar1 = FUN_0000718c();
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0x15) {
      uVar1 = FUN_00005008();
      return uVar1;
    }
  }
  else if (uVar1 == 0x15) {
    FUN_00007166();
    uVar1 = FUN_0000718c();
    if ((uVar1 & 0xff) == 0) {
      FUN_00006164();
      uVar1 = FUN_00007198(1);
      return uVar1;
    }
  }
  return uVar1;
}

