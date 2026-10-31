
uint FUN_000072c8(void)

{
  uint uVar1;
  
  uVar1 = FUN_0000718c();
  uVar1 = uVar1 & 0xff;
  if ((((uVar1 != 4) && (uVar1 != 6)) && (uVar1 != 10)) && (uVar1 != 0xf)) {
    return uVar1;
  }
  uVar1 = FUN_00007334();
  return uVar1;
}

