
uint FUN_00007074(void)

{
  uint uVar1;
  
  FUN_000072f8();
  uVar1 = (uint)DAT_ffffa308;
  if (uVar1 == 0) {
    uVar1 = FUN_00007198(3);
    return uVar1;
  }
  if (uVar1 != 1) {
    if (uVar1 != 0xff) {
      return uVar1;
    }
    uVar1 = FUN_00007478();
    return uVar1;
  }
  uVar1 = FUN_00007198(5);
  return uVar1;
}

