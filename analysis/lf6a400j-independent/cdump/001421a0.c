
void FUN_001421a0(void)

{
  undefined2 uVar1;
  
  if (((int)(char)DAT_ffff8dac & 0x80U) == 0) {
    if (((int)(char)DAT_ffff8dad & 0x80U) != 0) {
      if (((int)DAT_ffff8dae & 0x80U) != 0) {
        uVar1 = FUN_00001550(0x70);
        thunk_FUN_00141c32();
        FUN_00001550(uVar1);
      }
      if (((int)DAT_ffff8daf & 0x80U) != 0) {
        uVar1 = FUN_00001550(0x70);
        thunk_FUN_00141c44();
        FUN_00001550(uVar1);
      }
      DAT_ffff8dac = DAT_ffff8dac & 0xbf;
    }
  }
  else {
    if (((int)(char)DAT_ffff8dad & 0x80U) == 0) {
      if (((int)DAT_ffff8dae & 0x80U) != 0) {
        uVar1 = FUN_00001550(0x70);
        FUN_00005a1c();
        FUN_00001550(uVar1);
        DAT_ffff8db0 = 2;
        FUN_00141e10();
      }
      if (((int)DAT_ffff8daf & 0x80U) != 0) {
        uVar1 = FUN_00001550(0x70);
        FUN_00005a4a();
        FUN_00001550(uVar1);
        DAT_ffff8db1 = 2;
        FUN_00141e14();
        DAT_ffff1df8 = 0;
      }
    }
    if (((int)DAT_ffff8dae & 0x80U) != 0) {
      if ((DAT_ffff8db3 != '\0') && (((int)(char)DAT_ffff8db7 & 0x80U) == 0)) {
        uVar1 = FUN_00001550(0x70);
        FUN_00005a1c();
        FUN_00001550(uVar1);
        DAT_ffff8db0 = 4;
        DAT_ffff8db3 = '\0';
        FUN_00141e10();
      }
      if ((((int)(char)DAT_ffff8db7 & 0x80U) == 0) || (DAT_ffff8db3 != '\0')) {
        DAT_ffff8db5 = 0;
      }
      else {
        DAT_ffff8db5 = FUN_0000152c(DAT_ffff8db5 + 1);
        if (9 < DAT_ffff8db5) {
          uVar1 = FUN_00001550(0x70);
          FUN_00005a1c();
          FUN_00001550(uVar1);
          DAT_ffff8db7 = DAT_ffff8db7 & 0x7f;
          DAT_ffff8db3 = '\0';
          DAT_ffff8db5 = 0;
          FUN_00141e10();
        }
      }
    }
    if (((int)DAT_ffff8daf & 0x80U) != 0) {
      if ((DAT_ffff8db4 != '\0') && (((int)(char)DAT_ffff8db8 & 0x80U) == 0)) {
        uVar1 = FUN_00001550(0x70);
        FUN_00005a4a();
        FUN_00001550(uVar1);
        DAT_ffff8db1 = 4;
        DAT_ffff8db4 = '\0';
        FUN_00141e14();
      }
      if ((((int)(char)DAT_ffff8db8 & 0x80U) == 0) || (DAT_ffff8db4 != '\0')) {
        DAT_ffff8db6 = 0;
      }
      else {
        DAT_ffff8db6 = FUN_0000152c(DAT_ffff8db6 + 1);
        if (9 < DAT_ffff8db6) {
          uVar1 = FUN_00001550(0x70);
          FUN_00005a4a();
          FUN_00001550(uVar1);
          DAT_ffff8db8 = DAT_ffff8db8 & 0x7f;
          DAT_ffff8db4 = '\0';
          DAT_ffff8db6 = 0;
          FUN_00141e14();
        }
      }
    }
    DAT_ffff8dac = DAT_ffff8dac | 0x40;
  }
  DAT_ffff8dad = DAT_ffff8dac;
  return;
}

