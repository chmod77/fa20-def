
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006fec(void)

{
  char cVar1;
  
  cVar1 = FUN_00006a58();
  if ((cVar1 == '\0') && ((_DAT_fffff75e & 0x10) != 0)) {
    FUN_00006ac4();
    if (DAT_ffffa309 == '\0') {
      FUN_00007198(0xc);
      return;
    }
    if (DAT_ffffa309 == '\x10') {
      FUN_00007198(0xd);
      return;
    }
  }
  FUN_00007478();
  return;
}

