
void FUN_00153248(void)

{
  FUN_001400d8();
  FUN_001400a8();
  FUN_00077712();
  FUN_00140284();
  FUN_001402a4();
  if ((DAT_fffef050 & 1) != 0) {
    DAT_fffef49a = DAT_fffef49a + 1;
    if (0x1a < DAT_fffef49a) {
      FUN_000604ba();
      DAT_fffef050 = DAT_fffef050 & 0xfe;
      DAT_fffef49a = 0;
    }
  }
  FUN_0003c0ca();
  FUN_0004a1ee();
  FUN_0004a228();
  FUN_0003c0e8();
  FUN_00075610();
  FUN_00058b96();
  FUN_0003daac();
  FUN_0003dafe();
  FUN_0003db34();
  FUN_0004c054();
  FUN_0004c0a0();
  FUN_0004c1d2();
  FUN_000c773c();
  FUN_0008a330();
  FUN_000c1848();
  FUN_000e2938();
  if (DAT_fffef380 == 0) {
    FUN_000e2824();
    DAT_fffef380 = 0x19;
    FUN_0005e938();
    FUN_0005e9ea();
    FUN_0005ea1a();
    FUN_0005ea4e();
    FUN_0005e98a();
  }
  DAT_fffef380 = FUN_0016bd28(DAT_fffef380 - 1);
  FUN_000d7d20();
  FUN_000d17f0();
  FUN_00118e00();
  FUN_000f814c();
  FUN_000d9b78();
  FUN_00132c10();
  FUN_0005fbfe(0x1b);
  FUN_000e59bc();
  FUN_0005fbfe(0x1a0);
  FUN_0005fbfe(0x1a1);
  FUN_0005fbfe(0x1a2);
  FUN_0005fbfe(0x1a3);
  FUN_000e61e8();
  FUN_0005fbfe(0x94);
  FUN_000ea018();
  FUN_000e7858();
  FUN_0005fbfe(0x27f);
  FUN_0005fbfe(0x27e);
  FUN_000eaed4();
  FUN_0005fbfe(0x1c8);
  FUN_0010a524();
  FUN_0011abb8();
  FUN_0005fbfe(0x27b);
  FUN_0005fbfe(0x27a);
  FUN_000dcb00();
  FUN_00128f04();
  if (DAT_fffef3ab == 0) {
    FUN_0010c4dc();
    DAT_fffef3ab = 0x19;
  }
  DAT_fffef3ab = FUN_0016bd28(DAT_fffef3ab - 1);
  FUN_000c83b4();
  FUN_0005a3d6();
  FUN_0005a424();
  if (DAT_fffeff83 != '\0') {
    FUN_00060588();
  }
  FUN_0006ad9c();
  FUN_0003ddfe();
  FUN_0003de14();
  DAT_fffefdc1 = DAT_ffff07db & 1;
  return;
}

