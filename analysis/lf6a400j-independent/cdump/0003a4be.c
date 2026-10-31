
uint FUN_0003a4be(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffffab35;
  if (((((uVar1 & 0x80) != 0) && (0x12 < DAT_fffef3df)) &&
      (uVar1 = (uint)DAT_ffff0006, (uVar1 & 2) != 0)) &&
     (uVar1 = (uint)DAT_fffef3e1, (uVar1 & 0x80) == 0)) {
    if ((DAT_fffef310 & 8) == 0) {
      if ((DAT_fffef310 & 0x10) == 0) {
        uVar1 = (uint)(char)DAT_fffef310;
        if ((uVar1 & 4) != 0) {
          func_0x0003a822();
          func_0x0003a852();
          func_0x0003a882();
          func_0x0003a8c0();
          uVar1 = func_0x0003a8f2();
        }
      }
      else {
        func_0x0003a690();
        func_0x0003a728();
        func_0x0003a75a();
        func_0x0003a78c();
        func_0x0003a7be();
        uVar1 = func_0x0003a7f0();
      }
    }
    else {
      FUN_0003a596();
      FUN_0003a5c8();
      FUN_0003a5fa();
      FUN_0003a62c();
      uVar1 = FUN_0003a65e();
    }
    if (((DAT_ffff857e != 0) && (uVar1 = FUN_0003a924(0,0x19), 1 < DAT_ffff857e)) &&
       ((uVar1 = FUN_0003a924(1,0x1a), 2 < DAT_ffff857e &&
        (uVar1 = FUN_0003a924(2,0x1b), 3 < DAT_ffff857e)))) {
      FUN_0003a924(3,0x1c);
      uVar1 = (uint)(char)DAT_ffff857e;
      if (uVar1 == 5) {
        uVar1 = FUN_0003a924(4,0x1d);
        return uVar1;
      }
    }
  }
  return uVar1;
}

