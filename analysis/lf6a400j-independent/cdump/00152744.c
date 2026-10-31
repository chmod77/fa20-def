
void FUN_00152744(void)

{
  byte bVar1;
  
  FUN_00038400();
  FUN_0004a23a();
  FUN_0004a520();
  FUN_0004a372();
  FUN_0007d9bc();
  FUN_00066872(1);
  FUN_0003e4ca();
  FUN_0004a38e();
  FUN_0006bb30();
  FUN_0003cdfe();
  FUN_0004d2b0();
  FUN_0004d2d6();
  FUN_0004d0a4();
  FUN_0004e6d4();
  FUN_0005ac24();
  FUN_0005dee0();
  FUN_000c81dc();
  FUN_000c83b4();
  FUN_000c8210();
  FUN_000aa2b8();
  FUN_0009cac8();
  FUN_000ebce8();
  bVar1 = DAT_fffef364 | 4;
  if ((DAT_ffff0009 & 0x10) == 0) {
    bVar1 = DAT_fffef364 & 0xfb;
  }
  DAT_fffef4e8 = 1;
  DAT_fffef364 = bVar1;
  FUN_001196b4();
  DAT_fffef4e8 = 0;
  DAT_fffefa46 = 1;
  FUN_00112854();
  FUN_001128d0();
  FUN_000604ba();
  DAT_fffefa46 = 0;
  FUN_00061160();
  DAT_fffef311 = 0;
  FUN_00050cd2();
  FUN_0003ecd4();
  FUN_0006baf8();
  return;
}

