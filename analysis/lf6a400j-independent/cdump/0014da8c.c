
void FUN_0014da8c(void)

{
  bool bVar1;
  
  bVar1 = (DAT_ffff1e16 & 2) != 0;
  if ((!bVar1) && (DAT_ffff3b80 == '\x04')) {
    DAT_ffff1b00 = FUN_0000152c(DAT_ffff1b00 + 1);
    if (4 < DAT_ffff1b00) {
      FUN_0014da42();
      DAT_ffff2088 = DAT_ffff2088 | 0x80;
    }
    return;
  }
  DAT_ffff2088 = DAT_ffff2088 & 0x7f;
  DAT_ffff1b00 = 0;
  if (DAT_ffff3b80 == '\0') {
    if (((DAT_ffff208c & 0x10) == 0) && ((DAT_ffff208c & 0x40) != 0)) {
      DAT_ffff208c = DAT_ffff208c | 0x10;
    }
    else {
      if (((DAT_ffff208c & 8) != 0) || ((DAT_ffff208c & 0x20) == 0)) {
        if (((DAT_ffff208c & 2) == 0) && ((DAT_ffff208c & 4) != 0)) {
          DAT_ffff208c = DAT_ffff208c | 2;
          FUN_0014da56(0);
        }
        goto LAB_0014db30;
      }
      DAT_ffff208c = DAT_ffff208c | 8;
    }
    FUN_0014da56(0x72);
  }
LAB_0014db30:
  if (bVar1) {
    FUN_0014db54(1);
  }
  else {
    FUN_0014db54(0);
  }
  FUN_0014da66();
  FUN_0014e63c(&PTR_DAT_0016297c);
  return;
}

