
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e0ce8(void)

{
  byte bVar3;
  undefined4 uVar1;
  uint uVar2;
  byte local_74 [4];
  byte abStack_70 [4];
  byte abStack_6c [4];
  byte abStack_68 [4];
  byte bStack_64;
  byte abStack_60 [4];
  byte abStack_5c [4];
  byte abStack_58 [4];
  byte abStack_54 [4];
  byte abStack_50 [4];
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte abStack_44 [4];
  byte local_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  uint uStack_2c;
  uint uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0f56;
  FUN_000e1a20((int)_v_A_F_Sensor_1_EF96,DAT_fffef050 & 1,&DAT_ffff10b0);
  FUN_000e1d10((int)_DAT_fffeecae,&DAT_ffff10ba);
  FUN_000e2740(local_74,&DAT_ffff06d3);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff06d0 | 2;
  if ((local_74[0] & 1) == 0) {
    bVar3 = DAT_ffff06d0 & 0xfd;
  }
  DAT_ffff06d0 = bVar3;
  FUN_00001550();
  FUN_000e25a8((DAT_ffff03d8 & 2) != 0,(int)_DAT_ffff0f56,abStack_70,&DAT_ffff10c6,&DAT_ffff10c8);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff06cf | 1;
  if ((abStack_70[0] & 1) == 0) {
    bVar3 = DAT_ffff06cf & 0xfe;
  }
  DAT_ffff06cf = bVar3;
  FUN_00001550();
  FUN_000e2674((DAT_fffef152 & 0x20) != 0,(int)_DAT_ffff0f56,abStack_6c,&DAT_ffff10ca,&DAT_ffff10cc)
  ;
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff06cf | 2;
  if ((abStack_6c[0] & 1) == 0) {
    bVar3 = DAT_ffff06cf & 0xfd;
  }
  DAT_ffff06cf = bVar3;
  FUN_00001550();
  FUN_000e2780((DAT_ffff06ce & 2) != 0,DAT_fffef050 & 1,(int)_DAT_ffff1100,abStack_68);
  uVar1 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff06d0 | 0x40;
  if ((abStack_68[0] & 1) == 0) {
    bVar3 = DAT_ffff06d0 & 0xbf;
  }
  DAT_ffff06d0 = bVar3;
  FUN_00001550(uVar1);
  FUN_000e1ca8((int)_DAT_ffff10ba,DAT_fffef050 & 1,&DAT_ffff10b8);
  FUN_000e27b4(DAT_ffff06cf & 1,(DAT_ffff06cf & 2) != 0,(int)_v_Catalyst_Temperature_B1S1_0FE4);
  uVar1 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff06cf | 4;
  if ((bStack_64 & 1) == 0) {
    bVar3 = DAT_ffff06cf & 0xfb;
  }
  DAT_ffff06cf = bVar3;
  FUN_00001550(uVar1);
  FUN_000e23dc(DAT_fffef378 & 1,(DAT_ffff06ce & 0x10) != 0,(int)v_Coolant_Temperature_29A5,
               (int)_DAT_fffeef12,_DAT_fffeef14,(DAT_ffff06cf & 4) != 0,_DAT_ffff102c,DAT_ffff08da,
               (DAT_fffef371 & 8) != 0,((int)DAT_fffefef0 & 0x80U) != 0,(DAT_fffefef1 & 0x40) != 0,
               _DAT_fffef468,_v_Ambient_Air_Temperature_F344,_DAT_ffff1314,DAT_ffff091d,
               (DAT_fffef371 & 4) != 0,_v_Catalyst_Temperature_B1S1_0FE4,v_Vehicle_Speed_byte_65A1,
               abStack_60);
  uVar1 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff06ce | 4;
  if ((abStack_60[0] & 1) == 0) {
    bVar3 = DAT_ffff06ce & 0xfb;
  }
  DAT_ffff06ce = bVar3;
  FUN_00001550(uVar1);
  FUN_000e200c((DAT_ffff06ce & 4) != 0,((int)(char)DAT_ffff050e & 0x80U) != 0,
               (DAT_ffff050e & 0x20) != 0,((int)DAT_ffff0515 & 0x80U) != 0,(int)_DAT_ffff0d86,
               v_Vehicle_Speed_byte_65A1,_DAT_ffff0f56,DAT_ffff2996,DAT_ffff039f,_DAT_fffeecae,
               _v_A_F_Correction_1_0D92,_DAT_ffff389a,DAT_ffff0962 & 1,DAT_ffff091d,
               (DAT_fffef152 & 0x20) != 0,abStack_5c,&DAT_ffff06d1,&DAT_ffff10bc,&DAT_ffff10be,
               &DAT_ffff10c0,&DAT_ffff10c2,&DAT_ffff06d2);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff06ce | 8;
  if ((abStack_5c[0] & 1) == 0) {
    bVar3 = DAT_ffff06ce & 0xf7;
  }
  DAT_ffff06ce = bVar3;
  FUN_00001550();
  FUN_000e2384((DAT_ffff06ce & 8) != 0,abStack_58,&DAT_ffff10c4);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff06d0 | 1;
  if ((abStack_58[0] & 1) == 0) {
    bVar3 = DAT_ffff06d0 & 0xfe;
  }
  DAT_ffff06d0 = bVar3;
  FUN_00001550();
  FUN_000e1748();
  FUN_000e1894((DAT_ffff06ce & 8) != 0,(DAT_ffff06ce & 4) != 0,(DAT_ffff06d0 & 2) != 0,
               DAT_ffff06d0 & 1,_DAT_ffff10b0,(DAT_ffff06d0 & 0x20) != 0,&DAT_ffff10aa,&DAT_ffff10ac
               ,&DAT_ffff10ae,abStack_54);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff06ce | 0x40;
  if ((abStack_54[0] & 1) == 0) {
    bVar3 = DAT_ffff06ce & 0xbf;
  }
  DAT_ffff06ce = bVar3;
  FUN_00001550();
  FUN_000e1a88();
  FUN_000e1b2c((DAT_ffff06ce & 8) != 0,(DAT_ffff06ce & 4) != 0,(DAT_ffff06d0 & 2) != 0,
               DAT_ffff06d0 & 1,_DAT_ffff10b8,(DAT_ffff06d0 & 0x20) != 0,&DAT_ffff16e4,&DAT_ffff10b6
               ,&DAT_ffff16e8);
  FUN_000e1d9c((int)_DAT_ffff10b2,(int)_DAT_ffff10aa,(int)_DAT_ffff10a4,(DAT_ffff06ce & 0x20) != 0,
               DAT_ffff091d,abStack_50);
  uVar1 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff06d0 | 4;
  if ((abStack_50[0] & 1) == 0) {
    bVar3 = DAT_ffff06d0 & 0xfb;
  }
  DAT_ffff06d0 = bVar3;
  FUN_00001550(uVar1);
  FUN_000e1e3c((int)_DAT_ffff10aa,(int)_DAT_ffff10a4,(DAT_ffff06ce & 0x20) != 0,(int)DAT_ffff091d,
               abStack_4c);
  uVar1 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff06d0 | 8;
  if ((abStack_4c[0] & 1) == 0) {
    bVar3 = DAT_ffff06d0 & 0xf7;
  }
  DAT_ffff06d0 = bVar3;
  FUN_00001550(uVar1);
  FUN_000e1e9c((int)_DAT_ffff10aa,(int)_DAT_ffff10a4,(DAT_ffff06ce & 0x20) != 0,(int)DAT_ffff091d,
               abStack_48);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff06d0 | 0x10;
  if ((abStack_48[0] & 1) == 0) {
    bVar3 = DAT_ffff06d0 & 0xef;
  }
  DAT_ffff06d0 = bVar3;
  FUN_00001550();
  FUN_000e078c();
  FUN_000e1fb4((DAT_ffff06d0 & 4) != 0,(DAT_ffff06d0 & 8) != 0,(DAT_ffff06d0 & 0x10) != 0,
               (DAT_ffff06ce & 0x20) != 0,DAT_fffef050 & 1,abStack_44);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff06ce | 0x10;
  if ((abStack_44[0] & 1) == 0) {
    bVar3 = DAT_ffff06ce & 0xef;
  }
  DAT_ffff06ce = bVar3;
  FUN_00001550();
  uVar2 = (uint)(char)DAT_fffef050;
  uStack_2c = (int)(char)DAT_ffff06f5 & 1;
  FUN_000e0864((DAT_ffff06ce & 0x10) != 0,(int)_DAT_ffff109e,(int)_DAT_ffff10a4,(int)DAT_ffff0710,
               uVar2 & 1,0,DAT_fffef377 & 1,uStack_2c,(DAT_ffff06d0 & 4) != 0,
               (DAT_ffff06ce & 0x20) != 0,DAT_ffff091d,&DAT_ffff10a0);
  local_40[0] = DAT_ffff36af & 1;
  uStack_2c = (uint)local_40[0];
  FUN_000e1f6c((DAT_ffff06ce & 0x10) != 0,DAT_fffef050 & 1,0,DAT_fffef377 & 1,uStack_2c,local_40);
  uVar1 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff36af | 1;
  if ((local_40[0] & 1) == 0) {
    bVar3 = DAT_ffff36af & 0xfe;
  }
  uStack_28 = uVar2 & 1;
  DAT_ffff36af = bVar3;
  FUN_00001550(uVar1);
  FUN_000e0960((int)_DAT_ffff10a0,(DAT_ffff06ce & 0x10) != 0,DAT_fffef050 & 1,0,DAT_ffff36af & 1,
               DAT_fffef377 & 1,_DAT_ffff394a,DAT_ffff091d,&DAT_ffff394a);
  uStack_28 = (uint)((DAT_ffff06d0 & 0x40) != 0);
  FUN_000e0a68((int)_DAT_ffff10a0,(DAT_ffff06ce & 0x10) != 0,DAT_fffef050 & 1,0,uStack_28,
               (DAT_ffff06d0 & 4) != 0,DAT_ffff06f5 & 1,_DAT_ffff1100,DAT_fffef377 & 1,&DAT_ffff10a2
              );
  uStack_28 = (uint)DAT_ffff091d;
  FUN_000e1efc((DAT_ffff06d0 & 4) != 0,(DAT_ffff06ce & 0x10) != 0,DAT_fffef050 & 1,0,
               DAT_fffef377 & 1,DAT_ffff06f5 & 1,DAT_ffff091d,abStack_3c);
  uVar1 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff06ce | 0x20;
  if ((abStack_3c[0] & 1) == 0) {
    bVar3 = DAT_ffff06ce & 0xdf;
  }
  DAT_ffff06ce = bVar3;
  FUN_00001550(uVar1);
  FUN_000e0834((int)_DAT_ffff394a,(int)_DAT_ffff10a2,0,DAT_fffef050 & 1,DAT_ffff091d,&DAT_ffff109c);
  FUN_000e0ba8(DAT_fffef050 & 1,(DAT_ffff06ce & 0x20) != 0);
  FUN_000e0bc4(DAT_fffef050 & 1,(int)DAT_ffff091d,(DAT_ffff06ce & 0x20) != 0,(int)_DAT_ffff394e,
               &DAT_ffff394e);
  FUN_000e1d14((DAT_ffff06ce & 0x20) != 0,DAT_fffef050 & 1,abStack_38);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff06ce | 2;
  if ((abStack_38[0] & 1) == 0) {
    bVar3 = DAT_ffff06ce & 0xfd;
  }
  DAT_ffff06ce = bVar3;
  FUN_00001550();
  FUN_000e1ff0((DAT_ffff06ce & 0x20) != 0,(DAT_ffff06d0 & 4) != 0,DAT_fffef050 & 1,abStack_34);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff06d0 | 0x20;
  if ((abStack_34[0] & 1) == 0) {
    bVar3 = DAT_ffff06d0 & 0xdf;
  }
  DAT_ffff06d0 = bVar3;
  FUN_00001550();
  FUN_000e0b84((DAT_ffff06ce & 2) != 0,&DAT_ffff06cd);
  FUN_000e0b88(DAT_fffef050 & 1,(int)_DAT_ffff109c,(DAT_ffff06ce & 0x20) != 0,(int)_DAT_ffff394c,
               &DAT_ffff394c);
  FUN_000e1d48((int)_DAT_ffff109c,(DAT_ffff06ce & 0x20) != 0,DAT_fffef050 & 1,(int)DAT_ffff091d,
               abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff06ce | 1;
  if ((abStack_30[0] & 1) == 0) {
    bVar3 = DAT_ffff06ce & 0xfe;
  }
  DAT_ffff06ce = bVar3;
  FUN_00001550(uVar1);
  return;
}

