
uint FUN_00007258(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0000718c();
  uVar1 = uVar1 & 0xff;
  if (((uVar1 == 3) || (uVar1 == 5)) || (uVar1 == 9)) {
    uVar2 = 0x1e;
  }
  else {
    if (uVar1 != 0xe) {
      return uVar1;
    }
    uVar2 = 0x19;
  }
  uVar1 = FUN_00007360(uVar2);
  return uVar1;
}

