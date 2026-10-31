
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000d46cc(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte local_54 [4];
  byte abStack_50 [4];
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  byte abStack_24 [8];
  
  FUN_000d4ba0(DAT_fffef050 & 1,(int)DAT_ffff66b0,(int)DAT_fffee6a5,(int)v_Coolant_Temperature_29A5,
               DAT_ffff299c,DAT_ffff03a0,(DAT_fffef371 & 4) != 0,DAT_ffff0902,abStack_40,abStack_44,
               abStack_48,abStack_4c,abStack_50,local_54);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0651 | 8;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff0651 & 0xf7;
  }
  bVar3 = DAT_ffff0653 | 1;
  if ((abStack_44[0] & 1) == 0) {
    bVar3 = DAT_ffff0653 & 0xfe;
  }
  bVar4 = bVar3 | 2;
  if ((abStack_48[0] & 1) == 0) {
    bVar4 = bVar3 & 0xfd;
  }
  bVar3 = bVar4 | 0x10;
  if ((abStack_4c[0] & 1) == 0) {
    bVar3 = bVar4 & 0xef;
  }
  bVar4 = bVar3 | 0x20;
  if ((abStack_50[0] & 1) == 0) {
    bVar4 = bVar3 & 0xdf;
  }
  DAT_ffff0653 = bVar4 | 0x40;
  if ((local_54[0] & 1) == 0) {
    DAT_ffff0653 = bVar4 & 0xbf;
  }
  DAT_ffff0651 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d4c60((int)DAT_fffee6e0,abStack_3c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0655 | 1;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff0655 & 0xfe;
  }
  DAT_ffff0655 = bVar2;
  FUN_00001550();
  FUN_000d4c84((DAT_ffff0651 & 8) != 0,1,((int)DAT_ffff050e & 0x80U) != 0,(int)_DAT_ffff0da4,
               DAT_ffff03d8 & 1,DAT_fffef052,abStack_30,&DAT_ffff0f92,&DAT_ffff0f94,abStack_34,
               abStack_38);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0652 | 1;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff0652 & 0xfe;
  }
  bVar3 = DAT_ffff0654 | 1;
  if ((abStack_34[0] & 1) == 0) {
    bVar3 = DAT_ffff0654 & 0xfe;
  }
  DAT_ffff0654 = bVar3 | 2;
  if ((abStack_38[0] & 1) == 0) {
    DAT_ffff0654 = bVar3 & 0xfd;
  }
  DAT_ffff0652 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d4e70(DAT_ffff0655 & 1,(DAT_ffff0651 & 8) != 0,abStack_2c,&DAT_ffff0f9a);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0651 | 2;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0651 & 0xfd;
  }
  DAT_ffff0651 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d4a0c(DAT_fffef050 & 1,(int)DAT_fffee6e0,DAT_ffff0652 & 1,(int)v_Coolant_Temperature_29A5,
               DAT_ffff299c,DAT_ffff03a0,_v_Atmospheric_Pressure_E6AA,&DAT_ffff0656,&DAT_ffff0657,
               &DAT_ffff0658,&DAT_ffff0659,&DAT_ffff0f8e,&DAT_ffff065a,&DAT_ffff065b,&DAT_ffff065c,
               &DAT_ffff065d,&DAT_ffff0f90);
  FUN_000d4dd8(DAT_ffff0655 & 1,DAT_ffff0652 & 1,DAT_fffef050 & 1,abStack_28,&DAT_ffff0f96,
               &DAT_ffff0f98);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0651 | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0651 & 0xfe;
  }
  DAT_ffff0651 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d4620(DAT_ffff0651 & 1,(DAT_ffff0651 & 2) != 0,DAT_fffef050 & 1,&DAT_ffff0650);
  FUN_000d4dac(DAT_ffff0651 & 1,(DAT_ffff0651 & 2) != 0,DAT_fffef050 & 1,abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0651 | 0x80;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff0651 & 0x7f;
  }
  DAT_ffff0651 = bVar2;
  uVar1 = FUN_00001550(uVar1);
  return uVar1;
}

