
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001528a2(void)

{
  uint uVar1;
  byte bVar2;
  
  FUN_0003d45e();
  FUN_0004c0ec();
  FUN_000cf6d4();
  uVar1 = FUN_0016b428((int)_v_Engine_Speed_2994,0xffffffff,0x400,
                       ((int)(char)DAT_fffef546 & 0x80U) != 0);
  bVar2 = DAT_fffef546 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffef546 & 0x7f;
  }
  DAT_fffef546 = bVar2;
  if ((((int)(char)bVar2 & 0x80U) == 0) || ((DAT_fffef499 & 0x40) == 0)) {
    FUN_000b1cac();
  }
  FUN_001195cc();
  FUN_00128f08();
  FUN_00128f0c();
  FUN_00051932();
  FUN_00051966();
  FUN_000516d8();
  FUN_0003cbd6();
  FUN_0003cc16();
  FUN_00077394();
  DAT_fffeff91 = DAT_ffff07db & 1;
  return;
}

