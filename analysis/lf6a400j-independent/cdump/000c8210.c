
void FUN_000c8210(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [4];
  byte abStack_14 [4];
  byte abStack_10 [8];
  
  FUN_000c471c(((int)DAT_fffee710 & 0x80U) != 0,&DAT_ffff0565);
  FUN_000cc4ec(local_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0575 | 0x20;
  if ((local_30[0] & 1) == 0) {
    bVar2 = DAT_ffff0575 & 0xdf;
  }
  DAT_ffff0575 = bVar2;
  FUN_00001550(uVar1);
  FUN_000ccd80(abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0575 | 0x40;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0575 & 0xbf;
  }
  DAT_ffff0575 = bVar2;
  FUN_00001550(uVar1);
  FUN_000ccee0(abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0575 | 4;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0575 & 0xfb;
  }
  DAT_ffff0575 = bVar2;
  FUN_00001550(uVar1);
  FUN_000ccef4(abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0575 | 8;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff0575 & 0xf7;
  }
  DAT_ffff0575 = bVar2;
  FUN_00001550(uVar1);
  FUN_000ccf08(abStack_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0575 | 0x10;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff0575 & 0xef;
  }
  DAT_ffff0575 = bVar2;
  FUN_00001550(uVar1);
  FUN_000cd584(abStack_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0575 | 1;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff0575 & 0xfe;
  }
  DAT_ffff0575 = bVar2;
  FUN_00001550(uVar1);
  FUN_000cd598(abStack_18);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0575 | 2;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff0575 & 0xfd;
  }
  DAT_ffff0575 = bVar2;
  FUN_00001550();
  FUN_000cdde8(((int)DAT_fffee710 & 0x80U) != 0,abStack_14);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0576 | 0x80;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff0576 & 0x7f;
  }
  DAT_ffff0576 = bVar2;
  FUN_00001550(uVar1);
  FUN_000ce304(abStack_10);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0575 | 0x80;
  if ((abStack_10[0] & 1) == 0) {
    bVar2 = DAT_ffff0575 & 0x7f;
  }
  DAT_ffff0575 = bVar2;
  FUN_00001550(uVar1);
  return;
}

