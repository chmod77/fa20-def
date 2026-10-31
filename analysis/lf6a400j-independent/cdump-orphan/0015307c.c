
void FUN_0015307c(void)

{
  byte bVar1;
  
  FUN_00061c2e();
  FUN_00140038();
  FUN_0004a086();
  FUN_0003d9aa();
  FUN_00050b0c();
  FUN_000c81dc();
  FUN_000c70b0();
  FUN_000f6b24();
  FUN_000b7370();
  FUN_000d4220();
  FUN_000529d8();
  FUN_000b42ac();
  FUN_00093f04();
  FUN_00089e04();
  FUN_000bc86c();
  FUN_001037a0();
  FUN_001011ec();
  FUN_00101a90();
  FUN_00102e24();
  FUN_0012614c();
  FUN_000d7bc0();
  FUN_000afdc0();
  FUN_000d59fc();
  FUN_0005fbfe(0x2ab);
  FUN_0005fbfe(0x2ac);
  FUN_0005fbfe(0x96);
  FUN_0005fbfe(0x97);
  FUN_000e0ce8();
  FUN_0005fbfe(0x90);
  FUN_000eb988();
  FUN_0005fbfe(0x88);
  FUN_00127dc8();
  FUN_0005fbfe(0x26d);
  FUN_0011bfb4();
  FUN_0005fbfe(0x16f);
  FUN_0005fbfe(0x166);
  FUN_000aef98();
  FUN_0003cdfe();
  FUN_0006af8a();
  if (DAT_fffefa43 == '\0') {
    DAT_fffefa45 = 0;
    DAT_fffefa44 = 0;
    FUN_0010dcd0();
    FUN_0010df10();
    FUN_00101018();
    if (((DAT_fffeeec2 & 4) == 0) && ((DAT_fffef3c8 & 4) != 0)) {
      DAT_fffef3de = 1;
      FUN_0010e33c();
      DAT_fffef3de = 0;
      DAT_fffefa46 = 8;
      FUN_001128d0();
      DAT_fffefa46 = 0;
    }
    if ((DAT_ffff091d == '\0') && (DAT_fffefefa != '\0')) {
      DAT_fffefa46 = 0x20;
      FUN_001128d0();
      DAT_fffefa46 = 0;
    }
  }
  bVar1 = DAT_fffef3c8 | 4;
  if ((DAT_fffeeec2 & 4) == 0) {
    bVar1 = DAT_fffef3c8 & 0xfb;
  }
  DAT_fffefefa = DAT_ffff091d;
  DAT_fffef3c8 = bVar1;
  FUN_0003e72c();
  FUN_0003e138();
  FUN_0007bf84();
  DAT_fffef6b8 = '\x01' - ((DAT_fffeeec2 & 4) == 0);
  DAT_fffefdc0 = DAT_ffff07db & 1;
  return;
}

