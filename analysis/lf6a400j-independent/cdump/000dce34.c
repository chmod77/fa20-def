
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dce34(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte local_d4;
  byte abStack_d0 [4];
  byte abStack_cc [4];
  byte bStack_c8;
  byte bStack_c4;
  byte abStack_c0 [4];
  byte abStack_bc [4];
  byte bStack_b8;
  byte abStack_b4 [4];
  byte bStack_b0;
  byte bStack_ac;
  byte abStack_a8 [4];
  byte abStack_a4 [4];
  byte bStack_a0;
  byte bStack_9c;
  byte bStack_98;
  byte abStack_94 [4];
  byte bStack_90;
  byte abStack_8c [4];
  byte abStack_88 [4];
  byte bStack_84;
  byte abStack_80 [4];
  byte abStack_7c [4];
  byte abStack_78 [4];
  byte abStack_74 [4];
  byte abStack_70 [4];
  byte abStack_6c [4];
  byte bStack_68;
  byte bStack_64;
  byte bStack_60;
  byte bStack_5c;
  byte bStack_58;
  byte abStack_54 [4];
  byte abStack_50 [4];
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte abStack_44 [4];
  byte bStack_40;
  byte bStack_3c;
  char cStack_38;
  char cStack_34;
  undefined1 *puStack_30;
  char cStack_2c;
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0687;
  FUN_000da440((int)DAT_ffff2a48,((int)DAT_fffef0a0 & 0x80U) != 0,&DAT_ffff0687);
  FUN_000e0044((int)DAT_ffff0541,(int)DAT_ffff0458,(int)DAT_ffff0532,(int)_DAT_fffef0da);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bf | 1;
  if ((local_d4 & 1) == 0) {
    bVar2 = DAT_ffff06bf & 0xfe;
  }
  DAT_ffff06bf = bVar2;
  FUN_00001550(uVar1);
  FUN_000debc8((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_fffeeed0,
               (int)v_Ignition_Total_Timing_046C,&DAT_ffff106c);
  FUN_000dc99c(_DAT_ffff2a44,&DAT_ffff16b4);
  FUN_000dc9f4((int)v_Vehicle_Speed_byte_65A1,(int)DAT_ffff2996,(int)_DAT_ffff106c,&DAT_ffff1068);
  FUN_000dc9a0(_DAT_ffff16b4,DAT_fffef050 & 1,&DAT_ffff16b8);
  FUN_000df7e8((int)DAT_ffff2996,(DAT_fffee6bd & 0x20) != 0,DAT_ffff06bf & 1,abStack_d0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c3 | 2;
  if ((abStack_d0[0] & 1) == 0) {
    bVar2 = DAT_ffff06c3 & 0xfd;
  }
  DAT_ffff06c3 = bVar2;
  FUN_00001550(uVar1);
  FUN_000df838((int)DAT_ffff0687,abStack_cc);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c3 | 0x80;
  if ((abStack_cc[0] & 1) == 0) {
    bVar2 = DAT_ffff06c3 & 0x7f;
  }
  DAT_ffff06c3 = bVar2;
  FUN_00001550(uVar1);
  FUN_000df8ac((int)DAT_ffff2996,(int)_DAT_fffeeede,(int)_DAT_fffee6f8,(int)_DAT_ffff1020);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bf | 0x40;
  if ((bStack_c8 & 1) == 0) {
    bVar2 = DAT_ffff06bf & 0xbf;
  }
  DAT_ffff06bf = bVar2;
  FUN_00001550(uVar1);
  FUN_000e06b4((int)v_Vehicle_Speed_byte_65A1,(int)DAT_ffff2996,(int)_DAT_fffee6f8,(int)DAT_ffff29c8
              );
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c2 | 0x80;
  if ((bStack_c4 & 1) == 0) {
    bVar2 = DAT_ffff06c2 & 0x7f;
  }
  DAT_ffff06c2 = bVar2;
  FUN_00001550(uVar1);
  FUN_000dc9bc(_DAT_ffff16b8,DAT_fffef050 & 1,&DAT_ffff16bc);
  FUN_000ded88(_DAT_ffff16b4,(DAT_ffff06c3 & 2) != 0,DAT_fffef050 & 1,&DAT_ffff1072);
  FUN_000e00e0((DAT_ffff06c3 & 2) != 0,(int)_DAT_ffff1070,DAT_fffef050 & 1,abStack_c0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c3 | 1;
  if ((abStack_c0[0] & 1) == 0) {
    bVar2 = DAT_ffff06c3 & 0xfe;
  }
  DAT_ffff06c3 = bVar2;
  FUN_00001550();
  FUN_000df948((DAT_ffff06bf & 0x40) != 0,abStack_bc);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bf | 0x20;
  if ((abStack_bc[0] & 1) == 0) {
    bVar2 = DAT_ffff06bf & 0xdf;
  }
  DAT_ffff06bf = bVar2;
  FUN_00001550();
  FUN_000e01e8((int)_DAT_fffeef10,(DAT_ffff06bf & 0x40) != 0,(DAT_ffff06c1 & 0x10) != 0,
               (int)DAT_ffff06c6);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bf | 0x80;
  if ((bStack_b8 & 1) == 0) {
    bVar2 = DAT_ffff06bf & 0x7f;
  }
  DAT_ffff06bf = bVar2;
  FUN_00001550();
  FUN_000db4c8(((int)(char)DAT_ffff06c2 & 0x80U) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)DAT_ffff03a0,DAT_ffff06bf & 1);
  FUN_000db5b0(((int)(char)DAT_ffff06c2 & 0x80U) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)DAT_ffff03a0,DAT_ffff06bf & 1);
  FUN_000db53c(((int)(char)DAT_ffff06c2 & 0x80U) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)DAT_ffff03a0,DAT_ffff06bf & 1);
  FUN_000db698(((int)(char)DAT_ffff06c2 & 0x80U) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)DAT_ffff03a0,DAT_ffff06bf & 1);
  FUN_000db624(((int)(char)DAT_ffff06c2 & 0x80U) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)DAT_ffff03a0,DAT_ffff06bf & 1);
  FUN_000dc9d8(_DAT_ffff16bc,DAT_fffef050 & 1,&DAT_ffff16c0);
  abStack_b4[0] = 1 - ((DAT_ffff36ad & 0x40) == 0);
  FUN_000e00c0(DAT_ffff06c3 & 1,(int)(char)abStack_b4[0],DAT_fffef050 & 1,abStack_b4);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff36ad | 0x40;
  if ((abStack_b4[0] & 1) == 0) {
    bVar2 = DAT_ffff36ad & 0xbf;
  }
  DAT_ffff36ad = bVar2;
  FUN_00001550();
  FUN_000da3d8(((int)(char)DAT_ffff06bf & 0x80U) != 0,DAT_fffef050 & 1,&DAT_ffff0fec);
  FUN_000da40c(((int)(char)DAT_ffff06bf & 0x80U) != 0,DAT_fffef050 & 1,&DAT_ffff0fee);
  FUN_000e0334(((int)(char)DAT_ffff06bf & 0x80U) != 0,DAT_fffef050 & 1);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c1 | 0x20;
  if ((bStack_b0 & 1) == 0) {
    bVar2 = DAT_ffff06c1 & 0xdf;
  }
  DAT_ffff06c1 = bVar2;
  FUN_00001550();
  FUN_000da4cc(((int)(char)DAT_ffff06bf & 0x80U) != 0,&DAT_ffff0688);
  FUN_000da520(((int)(char)DAT_ffff06bf & 0x80U) != 0,&DAT_ffff0689);
  FUN_000da574(((int)(char)DAT_ffff06bf & 0x80U) != 0,&DAT_ffff068a);
  FUN_000da5c8(((int)(char)DAT_ffff06bf & 0x80U) != 0,&DAT_ffff068b);
  FUN_000da6d8(((int)(char)DAT_ffff06bf & 0x80U) != 0);
  FUN_000da0dc((int)_DAT_ffff1072,((int)(char)DAT_ffff06c3 & 0x80U) != 0,(DAT_ffff06c3 & 2) != 0);
  FUN_000da258((int)_DAT_ffff1072,((int)(char)DAT_ffff06c3 & 0x80U) != 0,(DAT_ffff06c3 & 2) != 0,
               (DAT_ffff36ad & 0x40) != 0);
  FUN_000df6c8((DAT_ffff06c3 & 2) != 0,_DAT_ffff16b4,_DAT_ffff16bc,_DAT_ffff16b8);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c3 | 8;
  if ((bStack_ac & 1) == 0) {
    bVar2 = DAT_ffff06c3 & 0xf7;
  }
  DAT_ffff06c3 = bVar2;
  FUN_00001550(uVar1);
  FUN_000dad68((int)_DAT_ffff0fec,&DAT_ffff0692);
  FUN_000e02c8((int)_DAT_ffff0fec,abStack_a8);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c1 | 0x80;
  if ((abStack_a8[0] & 1) == 0) {
    bVar2 = DAT_ffff06c1 & 0x7f;
  }
  DAT_ffff06c1 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e02d8((int)_DAT_ffff0fee,abStack_a4);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c1 | 0x40;
  if ((abStack_a4[0] & 1) == 0) {
    bVar2 = DAT_ffff06c1 & 0xbf;
  }
  DAT_ffff06c1 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e0370((int)_DAT_ffff0fec,DAT_fffef050 & 1);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c1 | 0x10;
  if ((bStack_a0 & 1) == 0) {
    bVar2 = DAT_ffff06c1 & 0xef;
  }
  DAT_ffff06c1 = bVar2;
  FUN_00001550(uVar1);
  FUN_000daba8((int)_DAT_ffff392e,DAT_ffff06c3 & 1,(DAT_ffff36ad & 0x40) != 0,(int)_DAT_ffff3932);
  FUN_000dac88((int)_DAT_ffff3930,DAT_ffff06c3 & 1,(DAT_ffff36ad & 0x40) != 0,(int)_DAT_ffff3934);
  FUN_000ded48((int)_DAT_ffff1072,((int)(char)DAT_ffff06c3 & 0x80U) != 0,(int)_DAT_ffff392e,
               (int)_DAT_ffff3930);
  bStack_98 = 1 - (((int)(char)DAT_ffff36ad & 0x80U) == 0);
  FUN_000dffc0((int)(char)bStack_98,(DAT_ffff06c3 & 8) != 0,(int)DAT_ffff2996,DAT_fffef050 & 1);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff36ad | 0x80;
  if ((bStack_98 & 1) == 0) {
    bVar2 = DAT_ffff36ad & 0x7f;
  }
  bVar3 = DAT_ffff06c3 | 0x20;
  if ((bStack_9c & 1) == 0) {
    bVar3 = DAT_ffff06c3 & 0xdf;
  }
  DAT_ffff06c3 = bVar3;
  DAT_ffff36ad = bVar2;
  FUN_00001550();
  FUN_000e02e8((DAT_ffff06c1 & 0x40) != 0,DAT_fffef050 & 1,abStack_94);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c1 | 8;
  if ((abStack_94[0] & 1) == 0) {
    bVar2 = DAT_ffff06c1 & 0xf7;
  }
  DAT_ffff06c1 = bVar2;
  FUN_00001550(uVar1);
  FUN_000dc87c(_DAT_ffff16b4,(int)DAT_ffff0687,(int)_DAT_ffff3932,(int)_DAT_ffff3934);
  FUN_000db3b8((DAT_ffff06c1 & 0x10) != 0,(int)_DAT_ffff0fec,&DAT_ffff0693);
  FUN_000daad4((int)_DAT_ffff1064,DAT_fffef050 & 1,&DAT_ffff101c,&DAT_ffff101e);
  FUN_000db3dc((int)DAT_ffff0697,(int)DAT_ffff06c7,(int)DAT_ffff0693,&DAT_ffff1022);
  FUN_000db454((int)DAT_ffff069b,(int)DAT_ffff06c9,(int)DAT_ffff0693,&DAT_ffff1026);
  FUN_000db418((int)DAT_ffff069a,(int)DAT_ffff06c9,(int)DAT_ffff0693,&DAT_ffff1024);
  FUN_000db4ac((int)DAT_ffff0699,(int)DAT_ffff06c8,(int)DAT_ffff0693,&DAT_ffff102a);
  FUN_000db470((int)DAT_ffff0698,(int)DAT_ffff06c8,(int)DAT_ffff0693,&DAT_ffff1028);
  FUN_000da88c((int)_DAT_ffff101c,(DAT_ffff06bf & 0x40) != 0,DAT_fffef050 & 1,&DAT_ffff100a);
  FUN_000daa60((int)_DAT_ffff100a,DAT_fffef050 & 1,&DAT_ffff1014);
  FUN_000da760((int)_DAT_ffff100a,(int)_DAT_ffff1014,&DAT_ffff0ffc,&DAT_ffff068d);
  FUN_000daa80((int)_DAT_ffff1014,DAT_fffef050 & 1,&DAT_ffff1016);
  FUN_000da7b4((int)_DAT_ffff0ffc,DAT_fffef050 & 1,&DAT_ffff0ffe);
  FUN_000daaa0((int)_DAT_ffff1016,DAT_fffef050 & 1,&DAT_ffff1018,&DAT_ffff101a);
  FUN_000da6f4((int)_DAT_ffff100a,(int)_DAT_ffff1016,(int)_DAT_ffff1018,&DAT_ffff0ffa);
  FUN_000da7d4((int)_DAT_ffff100a,(int)_DAT_ffff1018,&DAT_ffff1000,&DAT_ffff068e);
  FUN_000e05c4(((int)(char)DAT_ffff06bf & 0x80U) != 0,(int)DAT_ffff2996,(int)_DAT_ffff0ffc,
               (int)_DAT_ffff0ffe);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06be | 0x80;
  if ((bStack_90 & 1) == 0) {
    bVar2 = DAT_ffff06be & 0x7f;
  }
  DAT_ffff06be = bVar2;
  FUN_00001550(uVar1);
  FUN_000da828((int)_DAT_ffff1000,DAT_fffef050 & 1,&DAT_ffff1002,&DAT_ffff1004);
  FUN_000e03e4((int)DAT_ffff0687,((int)(char)DAT_ffff06be & 0x80U) != 0,DAT_fffef050 & 1,abStack_8c)
  ;
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06be | 0x40;
  if ((abStack_8c[0] & 1) == 0) {
    bVar2 = DAT_ffff06be & 0xbf;
  }
  DAT_ffff06be = bVar2;
  FUN_00001550(uVar1);
  FUN_000e0458((int)DAT_ffff0687,((int)(char)DAT_ffff06be & 0x80U) != 0,DAT_fffef050 & 1,abStack_88)
  ;
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06be | 0x20;
  if ((abStack_88[0] & 1) == 0) {
    bVar2 = DAT_ffff06be & 0xdf;
  }
  DAT_ffff06be = bVar2;
  FUN_00001550();
  FUN_000e0488(((int)(char)DAT_ffff06bf & 0x80U) != 0,(int)DAT_ffff2996,(int)_DAT_ffff0ffa,
               (int)_DAT_ffff1022);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bc | 0x80;
  if ((bStack_84 & 1) == 0) {
    bVar2 = DAT_ffff06bc & 0x7f;
  }
  DAT_ffff06bc = bVar2;
  FUN_00001550(uVar1);
  FUN_000e0520((int)DAT_ffff0687,((int)(char)DAT_ffff06be & 0x80U) != 0,DAT_fffef050 & 1,abStack_80)
  ;
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06be | 0x10;
  if ((abStack_80[0] & 1) == 0) {
    bVar2 = DAT_ffff06be & 0xef;
  }
  DAT_ffff06be = bVar2;
  FUN_00001550(uVar1);
  FUN_000e0594((int)DAT_ffff0687,((int)(char)DAT_ffff06be & 0x80U) != 0,DAT_fffef050 & 1,abStack_7c)
  ;
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06be | 8;
  if ((abStack_7c[0] & 1) == 0) {
    bVar2 = DAT_ffff06be & 0xf7;
  }
  DAT_ffff06be = bVar2;
  FUN_00001550(uVar1);
  cStack_38 = '\x01' - (((int)(char)DAT_ffff06bc & 0x80U) == 0);
  FUN_000e03a0((int)DAT_ffff0687,(int)cStack_38,DAT_fffef050 & 1,abStack_78);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bc | 8;
  if ((abStack_78[0] & 1) == 0) {
    bVar2 = DAT_ffff06bc & 0xf7;
  }
  DAT_ffff06bc = bVar2;
  FUN_00001550(uVar1);
  FUN_000e0414((int)DAT_ffff0687,((int)(char)DAT_ffff06bc & 0x80U) != 0,DAT_fffef050 & 1,abStack_74)
  ;
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bc | 0x10;
  if ((abStack_74[0] & 1) == 0) {
    bVar2 = DAT_ffff06bc & 0xef;
  }
  DAT_ffff06bc = bVar2;
  FUN_00001550(uVar1);
  FUN_000e04dc((int)DAT_ffff0687,((int)(char)DAT_ffff06bc & 0x80U) != 0,DAT_fffef050 & 1,abStack_70)
  ;
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bc | 0x20;
  if ((abStack_70[0] & 1) == 0) {
    bVar2 = DAT_ffff06bc & 0xdf;
  }
  DAT_ffff06bc = bVar2;
  FUN_00001550(uVar1);
  FUN_000e0550((int)DAT_ffff0687,((int)(char)DAT_ffff06bc & 0x80U) != 0,DAT_fffef050 & 1,abStack_6c)
  ;
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bc | 0x40;
  if ((abStack_6c[0] & 1) == 0) {
    bVar2 = DAT_ffff06bc & 0xbf;
  }
  DAT_ffff06bc = bVar2;
  FUN_00001550();
  FUN_000e0638(((int)(char)DAT_ffff06bf & 0x80U) != 0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bd | 0x80;
  if ((bStack_68 & 1) == 0) {
    bVar2 = DAT_ffff06bd & 0x7f;
  }
  DAT_ffff06bd = bVar2;
  FUN_00001550(uVar1);
  FUN_000df058((int)DAT_ffff2996,((int)(char)DAT_ffff06be & 0x80U) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c0 | 8;
  if ((bStack_60 & 1) == 0) {
    bVar2 = DAT_ffff06c0 & 0xf7;
  }
  DAT_ffff06c0 = bVar2 | 2;
  if ((bStack_64 & 1) == 0) {
    DAT_ffff06c0 = bVar2 & 0xfd;
  }
  FUN_00001550();
  FUN_000df968((int)DAT_ffff2996,((int)(char)DAT_ffff06be & 0x80U) != 0,
               ((int)(char)DAT_ffff06bf & 0x80U) != 0,((int)(char)DAT_ffff06bc & 0x80U) != 0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c0 | 4;
  if ((bStack_58 & 1) == 0) {
    bVar2 = DAT_ffff06c0 & 0xfb;
  }
  DAT_ffff06c0 = bVar2 | 1;
  if ((bStack_5c & 1) == 0) {
    DAT_ffff06c0 = bVar2 & 0xfe;
  }
  FUN_00001550(uVar1);
  FUN_000e03cc((int)DAT_ffff0687,((int)(char)DAT_ffff06bd & 0x80U) != 0,DAT_fffef050 & 1,abStack_54)
  ;
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bd | 0x40;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff06bd & 0xbf;
  }
  DAT_ffff06bd = bVar2;
  FUN_00001550(uVar1);
  FUN_000e0440((int)DAT_ffff0687,((int)(char)DAT_ffff06bd & 0x80U) != 0,DAT_fffef050 & 1,abStack_50)
  ;
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bd | 0x20;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff06bd & 0xdf;
  }
  DAT_ffff06bd = bVar2;
  FUN_00001550(uVar1);
  FUN_000e0508((int)DAT_ffff0687,((int)(char)DAT_ffff06bd & 0x80U) != 0,DAT_fffef050 & 1,abStack_4c)
  ;
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bd | 0x10;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff06bd & 0xef;
  }
  DAT_ffff06bd = bVar2;
  FUN_00001550(uVar1);
  FUN_000e057c((int)DAT_ffff0687,((int)(char)DAT_ffff06bd & 0x80U) != 0,DAT_fffef050 & 1,abStack_48)
  ;
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06bd | 8;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff06bd & 0xf7;
  }
  DAT_ffff06bd = bVar2;
  FUN_00001550();
  FUN_000e02c0((DAT_ffff06c0 & 4) != 0,abStack_44);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c0 | 0x40;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff06c0 & 0xbf;
  }
  DAT_ffff06c0 = bVar2;
  FUN_00001550();
  FUN_000e02c4((DAT_ffff06c0 & 8) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c0 | 0x20;
  if ((bStack_40 & 1) == 0) {
    bVar2 = DAT_ffff06c0 & 0xdf;
  }
  DAT_ffff06c0 = bVar2;
  FUN_00001550();
  FUN_000da494();
  FUN_000da4e8();
  FUN_000da53c();
  FUN_000da590();
  cStack_34 = '\x01' - ((DAT_ffff06be & 0x40) == 0);
  FUN_000da5e4((int)_DAT_ffff0ff0,(int)_DAT_ffff0ff2,(int)_DAT_ffff0ff4);
  puStack_30 = &DAT_ffff0687;
  FUN_000db70c();
  FUN_000db778();
  FUN_000db7e4();
  FUN_000db850();
  FUN_000db8ec();
  FUN_000db954();
  FUN_000db9bc();
  FUN_000dba24(((int)(char)DAT_ffff06bf & 0x80U) != 0,(DAT_ffff06c1 & 0x40) != 0,
               (DAT_ffff06c0 & 0x20) != 0);
  FUN_000dbab8();
  FUN_000dbb0c();
  FUN_000dbb60();
  FUN_000dbbb4();
  FUN_000dbc38(((int)(char)DAT_ffff06bf & 0x80U) != 0,(DAT_ffff06c1 & 0x40) != 0,
               (DAT_ffff06bc & 8) != 0);
  cStack_2c = '\x01' - (((int)(char)DAT_ffff06bf & 0x80U) == 0);
  puStack_28 = &DAT_ffff1020;
  FUN_000dbca4();
  FUN_000dbd10();
  FUN_000dbd7c();
  FUN_000dbe14();
  FUN_000dbe68();
  FUN_000dbebc();
  FUN_000dbf10();
  FUN_000dbf94();
  FUN_000dc00c();
  FUN_000dc084();
  FUN_000dc0fc();
  FUN_000dc1a0();
  FUN_000dc1f4();
  FUN_000dc248();
  FUN_000dc29c();
  FUN_000dc320();
  FUN_000dc398();
  FUN_000dc410();
  FUN_000dc488(((int)(char)DAT_ffff06bf & 0x80U) != 0,(DAT_ffff06c1 & 0x40) != 0,
               (DAT_ffff06be & 8) != 0,(DAT_ffff06c0 & 0x20) != 0);
  FUN_000db8bc((int)DAT_ffff069d,(int)DAT_ffff069e,(int)DAT_ffff069f,(int)DAT_ffff06a0);
  FUN_000dba8c((int)_DAT_ffff102e,(int)_DAT_ffff1030,(int)_DAT_ffff1032,(int)_DAT_ffff1034);
  FUN_000dbc08((int)DAT_ffff06a2,(int)DAT_ffff06a3,(int)DAT_ffff06a4,(int)DAT_ffff06a5);
  FUN_000dbde8((int)_DAT_ffff1038,(int)_DAT_ffff103a,(int)_DAT_ffff103c,(int)_DAT_ffff103e);
  FUN_000dbf64((int)DAT_ffff06ab,(int)DAT_ffff06ac,(int)DAT_ffff06ad,(int)DAT_ffff06ae);
  FUN_000dc174((int)_DAT_ffff1042,(int)_DAT_ffff1044,(int)_DAT_ffff1046,(int)_DAT_ffff1048);
  FUN_000dc2f0((int)DAT_ffff06b4,(int)DAT_ffff06b5,(int)DAT_ffff06b6,(int)DAT_ffff06b7);
  FUN_000dc500((int)_DAT_ffff104c,(int)_DAT_ffff104e,(int)_DAT_ffff1050,(int)_DAT_ffff1052);
  FUN_000e071c((int)_DAT_ffff102c,(int)_DAT_ffff0fee,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)_DAT_fffee6f8);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06c4 | 1;
  if ((bStack_3c & 1) == 0) {
    bVar2 = DAT_ffff06c4 & 0xfe;
  }
  DAT_ffff06c4 = bVar2;
  FUN_00001550(uVar1);
  FUN_000dc52c((int)_DAT_ffff102e,(int)_DAT_ffff102c,(int)_DAT_ffff0fee,(int)DAT_ffff2b18);
  FUN_000dc594((int)_DAT_ffff1030,(int)_DAT_ffff102c,(int)_DAT_ffff0fee,(int)DAT_ffff2b18);
  FUN_000dc5fc((int)_DAT_ffff1032,(int)_DAT_ffff102c,(int)_DAT_ffff0fee,(int)DAT_ffff2b18);
  FUN_000dc664((int)_DAT_ffff1034,(int)_DAT_ffff102c,(int)_DAT_ffff0fee,(int)DAT_ffff2b18);
  FUN_000dc6cc((int)DAT_ffff069d,(int)DAT_ffff069c,(int)_DAT_ffff0fec,DAT_fffef050 & 1);
  FUN_000dc738((int)DAT_ffff069e,(int)DAT_ffff069c,(int)_DAT_ffff0fec,DAT_fffef050 & 1);
  FUN_000dc7a4((int)DAT_ffff069f,(int)DAT_ffff069c,(int)_DAT_ffff0fec,DAT_fffef050 & 1);
  FUN_000dc810((int)DAT_ffff06a0,(int)DAT_ffff069c,(int)_DAT_ffff0fec,DAT_fffef050 & 1);
  return;
}

