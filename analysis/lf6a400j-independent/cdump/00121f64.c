
void FUN_00121f64(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [4];
  byte abStack_14 [4];
  undefined1 *local_10;
  
  local_10 = &DAT_ffff093f;
  FUN_001220dc(DAT_fffef050 & 1,local_28);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff094a | 4;
  if ((local_28[0] & 1) == 0) {
    bVar2 = DAT_ffff094a & 0xfb;
  }
  DAT_ffff094a = bVar2;
  FUN_00001550();
  FUN_001221c4(((int)DAT_ffff34b8 & 0x80U) != 0,(int)DAT_fffeff81,(DAT_ffff093f & 8) != 0,
               (DAT_fffef911 & 2) != 0,(DAT_ffff094a & 4) != 0,DAT_ffffab41,abStack_24);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0950 | 8;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff0950 & 0xf7;
  }
  DAT_ffff0950 = bVar2;
  FUN_00001550();
  FUN_001220e8((DAT_ffff0950 & 8) != 0,(int)DAT_ffffab41,abStack_20);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff094b | 1;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff094b & 0xfe;
  }
  DAT_ffff094b = bVar2;
  FUN_00001550();
  FUN_00122110((DAT_ffff0950 & 8) != 0,(int)DAT_ffffab41,abStack_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff094b | 2;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff094b & 0xfd;
  }
  DAT_ffff094b = bVar2;
  FUN_00001550(uVar1);
  FUN_00122138(DAT_ffff094b & 1,(DAT_ffff094a & 4) != 0,abStack_18);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff094a | 1;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff094a & 0xfe;
  }
  DAT_ffff094a = bVar2;
  FUN_00001550();
  FUN_0012214c((DAT_ffff094b & 2) != 0,(DAT_ffff094a & 4) != 0,abStack_14,&DAT_ffff13ea);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff094a | 2;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff094a & 0xfd;
  }
  DAT_ffff094a = bVar2;
  FUN_00001550(uVar1);
  return;
}

