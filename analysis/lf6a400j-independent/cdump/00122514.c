
void FUN_00122514(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_2c [4];
  byte abStack_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [8];
  
  FUN_00122664(DAT_fffef050 & 1,local_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff094e | 4;
  if ((local_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff094e & 0xfb;
  }
  DAT_ffff094e = bVar2;
  FUN_00001550();
  FUN_00122670((DAT_ffff34b8 & 0x20) != 0,(int)DAT_ffffab41,abStack_28);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff094f | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff094f & 0xfe;
  }
  DAT_ffff094f = bVar2;
  FUN_00001550();
  FUN_00122698((DAT_ffff34b8 & 0x20) != 0,(int)DAT_ffffab41,abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff094f | 2;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff094f & 0xfd;
  }
  DAT_ffff094f = bVar2;
  FUN_00001550(uVar1);
  FUN_001226c0(DAT_ffff094f & 1,(DAT_ffff094e & 4) != 0,abStack_20);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff094e | 1;
  if ((abStack_20[0] & 1) == 0) {
    bVar2 = DAT_ffff094e & 0xfe;
  }
  DAT_ffff094e = bVar2;
  FUN_00001550();
  FUN_001226d4((DAT_ffff094f & 2) != 0,(DAT_ffff094e & 4) != 0,abStack_1c,&DAT_ffff13ee);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff094e | 2;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff094e & 0xfd;
  }
  DAT_ffff094e = bVar2;
  FUN_00001550();
  FUN_0012274c((DAT_ffff34b8 & 0x20) != 0,(DAT_ffff094e & 4) != 0,(int)DAT_ffffab41,abStack_18);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0950 | 0x20;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff0950 & 0xdf;
  }
  DAT_ffff0950 = bVar2;
  FUN_00001550(uVar1);
  return;
}

