
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f6928(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [4];
  undefined1 *local_14;
  
  local_14 = &DAT_fffef050;
  FUN_000f6a38((DAT_fffef371 & 4) != 0,(int)DAT_ffff08cc,(int)_DAT_fffef0da,(DAT_fffef061 & 8) != 0,
               local_20);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0766 | 4;
  if ((local_20[0] & 1) == 0) {
    bVar2 = DAT_ffff0766 & 0xfb;
  }
  DAT_ffff0766 = bVar2;
  FUN_00001550();
  FUN_000f6a98((DAT_fffef371 & 4) != 0,(int)DAT_ffff08cc,(int)_DAT_fffef0da,(DAT_fffef061 & 8) != 0,
               DAT_fffef050 & 1,abStack_1c,&DAT_ffff0767);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0766 | 2;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff0766 & 0xfd;
  }
  DAT_ffff0766 = bVar2;
  FUN_00001550();
  FUN_000f68d8((DAT_ffff0766 & 2) != 0,(DAT_ffff0766 & 4) != 0,DAT_fffef050 & 1,&DAT_ffff0765);
  FUN_000f6a6c((DAT_ffff0766 & 2) != 0,(DAT_ffff0766 & 4) != 0,DAT_fffef050 & 1,abStack_18);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0766 | 1;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff0766 & 0xfe;
  }
  DAT_ffff0766 = bVar2;
  FUN_00001550(uVar1);
  return;
}

