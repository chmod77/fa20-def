
void FUN_00006af4(void)

{
  char cVar1;
  
  cVar1 = FUN_00006980();
  if (cVar1 == '\0') {
    FUN_00006470();
    if (DAT_ffffab18 != '\x01') {
      if ((DAT_ffffa2da != '\0') && (DAT_ffffab19 == DAT_ffffa2da)) {
        FUN_00007198(0xe);
        return;
      }
      FUN_000071a4();
      FUN_00007198(0x11);
      return;
    }
  }
  FUN_00007478();
  return;
}

