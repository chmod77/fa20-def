
uint FUN_001594c6(void)

{
  uint uVar1;
  
  FUN_00149b06();
  FUN_0014c084();
  uVar1 = FUN_0015b4a8();
  if (DAT_ffff20d0 < 5) {
    DAT_ffff20d0 = DAT_ffff20d0 + 1;
    DAT_ffff20d1 = 0;
  }
  else {
    uVar1 = (uint)DAT_ffff20cc;
    if ((uVar1 & 2) != 0) {
      FUN_0015bbd8();
      uVar1 = FUN_0015bd18();
    }
    DAT_ffff20d0 = '\x01';
    DAT_ffff20d1 = 1;
  }
  return uVar1;
}

