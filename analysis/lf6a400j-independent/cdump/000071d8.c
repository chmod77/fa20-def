
uint FUN_000071d8(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0000718c();
  uVar1 = uVar1 & 0xff;
  if ((uVar1 == 6) || (uVar1 == 10)) {
    uVar2 = 0x50;
  }
  else {
    if (uVar1 != 0xf) {
      return uVar1;
    }
    uVar2 = 0x96;
  }
  uVar1 = FUN_00007360(uVar2);
  return uVar1;
}

