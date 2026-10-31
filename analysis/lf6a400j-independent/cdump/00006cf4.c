
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00006cf4(void)

{
  char cVar2;
  int iVar1;
  
  if (((_DAT_fffff75e & 0x10) != 0) && (cVar2 = FUN_00006a58(), cVar2 == '\0')) {
    FUN_00006ac4();
    if (DAT_ffffa309 != 0x30) {
      return (int)DAT_ffffa309;
    }
    FUN_00007290();
    FUN_00006470();
    if (_DAT_ffffa30e == 0) {
      FUN_00007210();
      iVar1 = FUN_00007198(8);
      return iVar1;
    }
    if (_DAT_ffffa30e == 1) {
      FUN_000071a4();
      iVar1 = FUN_00007198(7);
      return iVar1;
    }
  }
  iVar1 = FUN_00007478();
  return iVar1;
}

