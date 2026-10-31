
void FUN_001216b0(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_2c [4];
  byte abStack_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [8];
  
  FUN_001217f0(DAT_fffef050 & 1,local_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0943 | 4;
  if ((local_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0943 & 0xfb;
  }
  DAT_ffff0943 = bVar2;
  FUN_00001550(uVar1);
  FUN_001218ec((int)DAT_fffef530,(int)DAT_ffffab41,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0944 | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0944 & 0xfe;
  }
  DAT_ffff0944 = bVar2;
  FUN_00001550(uVar1);
  FUN_00121914((int)DAT_fffef530,(int)DAT_ffffab41,abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0944 | 2;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff0944 & 0xfd;
  }
  DAT_ffff0944 = bVar2;
  FUN_00001550(uVar1);
  FUN_001217fc(DAT_ffff0944 & 1,(DAT_ffff0943 & 4) != 0,abStack_20,&DAT_ffff0945);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0943 | 1;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff0943 & 0xfe;
  }
  DAT_ffff0943 = bVar2;
  FUN_00001550();
  FUN_00121874((DAT_ffff0944 & 2) != 0,(DAT_ffff0943 & 4) != 0,abStack_1c,&DAT_ffff0946);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0943 | 2;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff0943 & 0xfd;
  }
  DAT_ffff0943 = bVar2;
  FUN_00001550(uVar1);
  FUN_0012193c((int)DAT_fffef530,(DAT_ffff0943 & 4) != 0,(int)DAT_ffffab41,abStack_18);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0950 | 2;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff0950 & 0xfd;
  }
  DAT_ffff0950 = bVar2;
  FUN_00001550(uVar1);
  return;
}

