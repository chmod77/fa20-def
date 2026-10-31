
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00006b60(void)

{
  char cVar2;
  uint uVar1;
  
  if (((_DAT_fffff75e & 0x10) == 0) || (cVar2 = FUN_00006a58(), cVar2 != '\0')) {
    uVar1 = FUN_00007478();
    return uVar1;
  }
  FUN_00006ac4();
  uVar1 = (uint)DAT_ffffa309;
  if (uVar1 == 0x20) {
    FUN_00007290();
    uVar1 = FUN_00007198(0x12);
    return uVar1;
  }
  if (uVar1 != 0) {
    if (uVar1 != 0x10) {
      return uVar1;
    }
    FUN_00007290();
    FUN_000060e0();
    uVar1 = FUN_00007198(0xd);
    return uVar1;
  }
  FUN_00007290();
  FUN_000060e0();
  uVar1 = FUN_00007198(0xc);
  return uVar1;
}

