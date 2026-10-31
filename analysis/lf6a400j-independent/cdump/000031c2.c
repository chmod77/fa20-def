
uint FUN_000031c2(void)

{
  uint uVar1;
  
  DAT_ffffab30 = 1;
  while( true ) {
    if (DAT_ffffab2e == '\0') {
      FUN_00003a34();
    }
    if (((int)DAT_ffff8a81 & 4U) != 0) break;
    FUN_0000325e();
    if (DAT_ffffab1f == '\x01') {
      if (((int)DAT_ffff8723 & 0x80U) == 0) {
        DAT_ffff8725 = DAT_ffff8725 | 0x80;
        FUN_0000327a();
        if (((int)DAT_ffff8727 & 0x80U) == 0) {
          DAT_ffffab25 = 0;
          return (int)DAT_ffff8727;
        }
        DAT_ffff885f = DAT_ffff885f & 0xfa;
        DAT_ffff8861 = DAT_ffff8861 & 0xfa;
        DAT_ffff8860 = DAT_ffff8860 & 0xfb;
        DAT_ffff8862 = DAT_ffff8862 & 0xfb;
        uVar1 = FUN_000006e4();
        DAT_ffffab25 = 0;
        return uVar1;
      }
    }
    else if (DAT_ffffab23 == '\x01') {
      uVar1 = FUN_000032a2();
      DAT_ffffab25 = 0;
      return uVar1;
    }
  }
  DAT_ffffab25 = 0;
  return (int)DAT_ffff8a81;
}

