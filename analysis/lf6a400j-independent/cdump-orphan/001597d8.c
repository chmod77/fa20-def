
uint FUN_001597d8(void)

{
  uint uVar1;
  
  FUN_00001592();
  FUN_00149b36();
  FUN_0014568a();
  if (((int)DAT_ffff20cc & 2U) != 0) {
    DAT_ffff20c5 = DAT_fffff015;
    DAT_fffff014 = DAT_fffff014 & 0x9f;
    uVar1 = (uint)DAT_ffff20e0;
    if ((uVar1 & 0x80) != 0) {
      if (DAT_ffff20bc == 1) {
        FUN_0015c088();
        DAT_ffff20c4 = DAT_ffff20c0;
      }
      else if (DAT_ffff20bc == 2) {
        FUN_0015c1a4();
        FUN_0015c2e4();
      }
      else if (DAT_ffff20bc == 3) {
        FUN_0015c33e();
      }
      else if (DAT_ffff20bc == 4) {
        FUN_0015c37e();
      }
      if (DAT_ffff20bc < 4) {
        DAT_ffff20bc = DAT_ffff20bc + 1;
      }
      else {
        DAT_ffff20bc = 1;
      }
      DAT_fffff013 = DAT_ffff20c4;
      uVar1 = (int)(char)DAT_fffff014 & 0xffffff7f;
      DAT_fffff014 = (byte)uVar1;
    }
    DAT_ffff20c7 = 0;
    return uVar1;
  }
  return (int)DAT_ffff20cc;
}

