
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00093f04(void)

{
  byte bVar1;
  byte local_20 [4];
  byte bStack_1c;
  byte abStack_18 [4];
  byte bStack_14;
  undefined1 *local_10;
  
  local_10 = &DAT_ffff042e;
  FUN_00093c20();
  FUN_00096750((DAT_ffff0437 & 8) != 0,(DAT_ffff0434 & 0x20) != 0,(int)DAT_ffff0440,0,DAT_ffff042e,
               local_20);
  FUN_00001550(0xf0);
  bVar1 = DAT_ffff0433 | 4;
  if ((local_20[0] & 1) == 0) {
    bVar1 = DAT_ffff0433 & 0xfb;
  }
  DAT_ffff0433 = bVar1;
  FUN_00001550();
  FUN_000967c8((DAT_ffff0433 & 4) != 0,(DAT_ffff0435 & 0x20) != 0,((int)DAT_ffff050f & 0x80U) != 0);
  FUN_00001550(0xf0);
  bVar1 = DAT_ffff0433 | 8;
  if ((bStack_1c & 1) == 0) {
    bVar1 = DAT_ffff0433 & 0xf7;
  }
  DAT_ffff0433 = bVar1;
  FUN_00001550();
  FUN_0009395c();
  FUN_000966c4((DAT_ffff0433 & 4) != 0,(DAT_ffff0433 & 8) != 0,(DAT_ffff0432 & 8) != 0,
               (DAT_ffff0435 & 0x20) != 0,abStack_18);
  FUN_00001550(0xf0);
  bVar1 = DAT_ffff0433 | 2;
  if ((abStack_18[0] & 1) == 0) {
    bVar1 = DAT_ffff0433 & 0xfd;
  }
  DAT_ffff0433 = bVar1;
  FUN_00001550();
  FUN_00096938((DAT_ffff0433 & 8) != 0);
  FUN_00001550(0xf0);
  bVar1 = DAT_ffff0433 | 1;
  if ((bStack_14 & 1) == 0) {
    bVar1 = DAT_ffff0433 & 0xfe;
  }
  DAT_ffff0433 = bVar1;
  FUN_00001550();
  FUN_00093b28((DAT_ffff0433 & 2) != 0,(DAT_ffff0433 & 8) != 0,(DAT_ffff0433 & 4) != 0,
               (int)_DAT_ffff0bca,DAT_ffff042e,0,(DAT_ffff0435 & 0x20) != 0,&DAT_ffff0bce);
  return;
}

