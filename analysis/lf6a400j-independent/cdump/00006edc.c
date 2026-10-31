
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006edc(void)

{
  char cVar1;
  
  _DAT_ffffab28 = 0;
  DAT_ffff885f = DAT_ffff885f | 0x30;
  cVar1 = FUN_00006980();
  if (cVar1 == '\0') {
    FUN_00006470();
    FUN_00007198(0xe);
    return;
  }
  FUN_00007478();
  return;
}

