
void FUN_00049e70(void)

{
  undefined2 uVar1;
  
  FUN_00069f44();
  FUN_0003ade6();
  FUN_0003bf24();
  FUN_0003c076();
  FUN_0003b712();
  FUN_0003aea8();
  FUN_0005a63a();
  FUN_0006a07e();
  FUN_0007ea40();
  FUN_0007f8b8();
  FUN_0003baf2();
  FUN_0003bdc6();
  FUN_0003f9ee();
  FUN_0005fbfe(0x328);
  FUN_0005fbfe(0x329);
  FUN_0003f87c();
  FUN_0005fbfe(0xbc);
  FUN_0005fbfe(0xbd);
  FUN_0003b634();
  FUN_0003c1d4();
  FUN_0007f324();
  FUN_0007ec90();
  FUN_0007e298();
  FUN_0007f1cc();
  FUN_000e4728();
  FUN_000cf4b4();
  FUN_000be0e8();
  FUN_000c0fd0();
  if (((int)DAT_ffffab40 & 0x80U) == 0) {
    uVar1 = FUN_00001550(0xf0);
    DAT_ffff2983 = FUN_0000152c(DAT_ffff2983 + 1);
    FUN_00001550(uVar1);
    if (0x27 < DAT_ffff2983) {
      DAT_fffee6ad = DAT_fffee6ad | 8;
      FUN_001526ac();
    }
  }
  if ((((int)DAT_fffef546 & 0x80U) == 0) || ((DAT_fffef499 & 0x40) == 0)) {
    FUN_000b177c();
  }
  FUN_000b9bac();
  FUN_000bbe98();
  FUN_000a006c();
  FUN_00062454();
  FUN_0009bdf4();
  FUN_00100cb4();
  FUN_00126050();
  DAT_fffef5a4 = DAT_fffef5a4 + 1;
  if (3 < DAT_fffef5a4) {
    DAT_fffef5a4 = 0;
  }
  if (DAT_ffff20bc == '\x03') {
    DAT_fffef5a4 = 0;
  }
  FUN_00087410();
  if ((DAT_fffef5a4 == 0) && (DAT_fffef5a5 != '\0')) {
    FUN_00123600();
  }
  if (((int)DAT_fffef3af & 0x80U) == 0) {
    FUN_000a8230();
  }
  FUN_00082fa0();
  if ((DAT_fffef5a4 == 0) && (DAT_fffef5a5 != '\0')) {
    FUN_0012560c();
  }
  FUN_00125420();
  FUN_00087478();
  FUN_0007dcf4();
  if ((DAT_fffef5a4 == 0) && (DAT_fffef5a5 != '\0')) {
    FUN_0012367c();
  }
  DAT_fffef5a5 = 0xff;
  FUN_001234d4();
  FUN_0009c94c();
  if (DAT_fffef52a == 0) {
    FUN_0009bdd0();
    DAT_fffef52a = 100;
  }
  DAT_fffef52a = FUN_0016bd28(DAT_fffef52a - 1);
  FUN_000aebe8();
  FUN_000888c0();
  FUN_00089a78();
  FUN_000fffb0();
  FUN_0003df26();
  return;
}

