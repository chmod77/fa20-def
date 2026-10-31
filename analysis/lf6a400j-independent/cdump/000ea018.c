
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ea018(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 extraout_r1;
  byte local_7c [4];
  byte abStack_78 [4];
  byte abStack_74 [4];
  byte abStack_70 [4];
  byte abStack_6c [4];
  byte abStack_68 [4];
  byte bStack_64;
  byte abStack_60 [4];
  byte abStack_5c [4];
  byte bStack_58;
  byte abStack_54 [4];
  byte abStack_50 [4];
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte bStack_44;
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0f56;
  puStack_34 = &DAT_ffff0f56;
  FUN_000e9838((DAT_ffff03d8 & 2) != 0,(int)_v_Engine_Speed_2994,&DAT_ffff1122);
  FUN_000e96fc();
  FUN_000e9fe0((DAT_ffff0708 & 8) != 0,(DAT_ffff0707 & 8) != 0,(DAT_ffff0708 & 0x10) != 0,
               (DAT_ffff0707 & 0x10) != 0,_DAT_ffff111c,DAT_fffef050 & 1,&DAT_ffff0706);
  FUN_000eae78((int)DAT_ffff0706,DAT_fffef050 & 1,local_7c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff0709 | 0x40;
  if ((local_7c[0] & 1) == 0) {
    bVar3 = DAT_ffff0709 & 0xbf;
  }
  DAT_ffff0709 = bVar3;
  FUN_00001550(uVar2);
  FUN_000eae48((int)DAT_ffff0706,(DAT_ffff0709 & 0x40) != 0,DAT_fffef050 & 1,abStack_78);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0709 | 0x80;
  if ((abStack_78[0] & 1) == 0) {
    bVar3 = DAT_ffff0709 & 0x7f;
  }
  DAT_ffff0709 = bVar3;
  FUN_00001550();
  FUN_000e9c70(((int)(char)DAT_ffff0709 & 0x80U) != 0,(DAT_ffff0707 & 4) != 0,
               (DAT_ffff0707 & 0x20) != 0,(int)_DAT_ffff112c,(DAT_ffff0707 & 0x10) != 0,
               DAT_fffef050 & 1,&DAT_ffff0700);
  FUN_000eac04((int)DAT_ffff0700,(DAT_ffff0707 & 0x10) != 0,(int)_DAT_ffff112c,
               (DAT_ffff0707 & 0x20) != 0,DAT_fffeff1c & 1,DAT_fffef050 & 1,abStack_74);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff070a | 8;
  if ((abStack_74[0] & 1) == 0) {
    bVar3 = DAT_ffff070a & 0xf7;
  }
  DAT_ffff070a = bVar3;
  FUN_00001550(uVar2);
  FUN_000eac58((int)DAT_ffff0700,(DAT_ffff0707 & 0x20) != 0,DAT_fffeff1c & 1,DAT_fffef050 & 1,
               abStack_70);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff070a | 4;
  if ((abStack_70[0] & 1) == 0) {
    bVar3 = DAT_ffff070a & 0xfb;
  }
  DAT_ffff070a = bVar3;
  FUN_00001550(uVar2);
  FUN_000ead08((int)DAT_ffff0700,DAT_fffef050 & 1,abStack_6c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff0707 | 8;
  if ((abStack_6c[0] & 1) == 0) {
    bVar3 = DAT_ffff0707 & 0xf7;
  }
  DAT_ffff0707 = bVar3;
  FUN_00001550(uVar2);
  puVar1 = puStack_34;
  FUN_000e98f8((int)_DAT_ffff1124,(int)_DAT_ffff112c,(int)DAT_ffff0700,(DAT_ffff0707 & 8) != 0,
               DAT_fffef050 & 1,puStack_34 + 0x1d0);
  FUN_000eaa94((int)_DAT_fffeecae,(int)DAT_ffff0700,(int)_DAT_ffff1126,DAT_fffef050 & 1,
               puVar1 + 0x1d6);
  FUN_000ead40((int)DAT_ffff0700,(int)_DAT_ffff112c,DAT_fffef050 & 1,abStack_68);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0707 | 4;
  if ((abStack_68[0] & 1) == 0) {
    bVar3 = DAT_ffff0707 & 0xfb;
  }
  DAT_ffff0707 = bVar3;
  FUN_00001550();
  FUN_000e9cf0(((int)(char)DAT_ffff0709 & 0x80U) != 0,(int)_DAT_ffff112c,(DAT_ffff0707 & 4) != 0,
               DAT_fffef050 & 1,&DAT_ffff0701);
  FUN_000ead7c((int)DAT_ffff0701);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0707 | 0x10;
  if ((bStack_64 & 1) == 0) {
    bVar3 = DAT_ffff0707 & 0xef;
  }
  puStack_2c = puVar1;
  DAT_ffff0707 = bVar3;
  FUN_00001550();
  FUN_000e98c8(((int)(char)DAT_ffff0709 & 0x80U) != 0,(DAT_ffff0707 & 0x10) != 0,
               (DAT_ffff0707 & 8) != 0,DAT_fffef050 & 1,DAT_ffff36b4,&DAT_ffff36b4);
  FUN_000e985c((int)_DAT_ffff1126,(int)_DAT_ffff112c,(int)DAT_ffff0701,(DAT_ffff0707 & 0x10) != 0,
               DAT_fffef050 & 1,puStack_34 + 0x1ce);
  puStack_30 = &DAT_ffff395a;
  FUN_000e9884((int)_DAT_ffff1124,((int)(char)DAT_ffff0709 & 0x80U) != 0,DAT_fffef050 & 1,
               (int)_DAT_ffff395a,&DAT_ffff395a);
  puStack_2c = (undefined1 *)(uint)(((int)DAT_ffff0515 & 0x80U) != 0);
  FUN_000e9ab0((DAT_ffff0707 & 4) != 0,DAT_fffeeec6 & 1,((int)(char)DAT_ffff050e & 0x80U) != 0,
               (DAT_ffff050e & 0x20) != 0,puStack_2c,_DAT_ffff0f56,v_Coolant_Temperature_29A5,
               _DAT_ffff102c,_DAT_ffff0da4,_DAT_ffff1124,DAT_ffff0902,(DAT_fffef371 & 4) != 0,
               DAT_fffef050 & 1,_DAT_ffff0dd4,&DAT_ffff06fe);
  FUN_000e9728((int)DAT_ffff06fe,DAT_fffef050 & 1,puStack_34 + 0x1c8);
  FUN_000eab04(DAT_fffeeec6 & 1,(int)_DAT_ffff111e,abStack_60);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0707 | 0x80;
  if ((abStack_60[0] & 1) == 0) {
    bVar3 = DAT_ffff0707 & 0x7f;
  }
  DAT_ffff0707 = bVar3;
  FUN_00001550();
  FUN_000e9bc4((DAT_ffff0707 & 4) != 0,((int)DAT_ffff0512 & 0x80U) != 0,DAT_fffeeec6 & 1,
               (DAT_ffff03d8 & 2) != 0,(DAT_ffff0707 & 0x40) != 0,_DAT_ffff111c,_DAT_ffff1122,
               ((int)(char)DAT_ffff0707 & 0x80U) != 0,DAT_ffff0902,(DAT_fffef371 & 4) != 0,
               DAT_fffef050 & 1,&DAT_ffff06ff);
  FUN_000e97a8((int)DAT_ffff06ff,DAT_fffef050 & 1,&DAT_ffff06fc);
  FUN_000eab8c((int)DAT_ffff06ff,(int)DAT_ffff06fc,DAT_fffef050 & 1,abStack_5c);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0707 | 0x40;
  if ((abStack_5c[0] & 1) == 0) {
    bVar3 = DAT_ffff0707 & 0xbf;
  }
  DAT_ffff0707 = bVar3;
  FUN_00001550();
  FUN_000eab4c(((int)(char)DAT_ffff0707 & 0x80U) != 0);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0707 | 0x20;
  if ((bStack_58 & 1) == 0) {
    bVar3 = DAT_ffff0707 & 0xdf;
  }
  DAT_ffff0707 = bVar3;
  FUN_00001550();
  FUN_000e9f04(((int)(char)DAT_ffff0709 & 0x80U) != 0,(DAT_ffff0708 & 4) != 0,
               (DAT_ffff0708 & 0x20) != 0,(int)_DAT_ffff112e,(DAT_ffff0708 & 0x10) != 0,
               (DAT_ffff0707 & 0x20) != 0,DAT_fffef050 & 1,&DAT_ffff0704);
  FUN_000eac84((int)DAT_ffff0704,(DAT_ffff0708 & 0x10) != 0,(int)_DAT_ffff112e,
               (DAT_ffff0708 & 0x20) != 0,DAT_fffeff1c & 1,DAT_fffef050 & 1,abStack_54);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff070a | 2;
  if ((abStack_54[0] & 1) == 0) {
    bVar3 = DAT_ffff070a & 0xfd;
  }
  DAT_ffff070a = bVar3;
  FUN_00001550(uVar2);
  FUN_000eacdc((int)DAT_ffff0704,(DAT_ffff0708 & 0x20) != 0,DAT_fffeff1c & 1,DAT_fffef050 & 1,
               abStack_50);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff070a | 1;
  if ((abStack_50[0] & 1) == 0) {
    bVar3 = DAT_ffff070a & 0xfe;
  }
  DAT_ffff070a = bVar3;
  FUN_00001550(uVar2);
  FUN_000eada8((int)DAT_ffff0704,DAT_fffef050 & 1,abStack_4c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff0708 | 8;
  if ((abStack_4c[0] & 1) == 0) {
    bVar3 = DAT_ffff0708 & 0xf7;
  }
  DAT_ffff0708 = bVar3;
  FUN_00001550(uVar2);
  puVar1 = puStack_34;
  FUN_000e99c0((int)_DAT_ffff1128,(int)_DAT_ffff112e,(int)DAT_ffff0704,(DAT_ffff0708 & 8) != 0,
               DAT_fffef050 & 1,puStack_34 + 0x1d4);
  FUN_000eaacc((int)_DAT_fffeecae,(int)DAT_ffff0704,(int)_DAT_ffff112a,DAT_fffef050 & 1,
               puVar1 + 0x1d8);
  FUN_000eade0((int)DAT_ffff0704,(int)_DAT_ffff112e,DAT_fffef050 & 1,abStack_48);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0708 | 4;
  if ((abStack_48[0] & 1) == 0) {
    bVar3 = DAT_ffff0708 & 0xfb;
  }
  DAT_ffff0708 = bVar3;
  FUN_00001550();
  FUN_000e9f88(((int)(char)DAT_ffff0709 & 0x80U) != 0,(int)_DAT_ffff112e,(DAT_ffff0708 & 4) != 0,
               DAT_fffef050 & 1,&DAT_ffff0705);
  FUN_000eae1c((int)DAT_ffff0705);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0708 | 0x10;
  if ((bStack_44 & 1) == 0) {
    bVar3 = DAT_ffff0708 & 0xef;
  }
  puStack_28 = (undefined1 *)extraout_r1;
  DAT_ffff0708 = bVar3;
  FUN_00001550();
  puStack_28 = (undefined1 *)(int)DAT_ffff36b5;
  FUN_000e9990(((int)(char)DAT_ffff0709 & 0x80U) != 0,(DAT_ffff0708 & 0x10) != 0,
               (DAT_ffff0708 & 8) != 0,DAT_fffef050 & 1,DAT_ffff36b5,&DAT_ffff36b5);
  puVar1 = puStack_34;
  FUN_000e9924((int)_DAT_ffff112a,(int)_DAT_ffff112e,(int)DAT_ffff0705,(DAT_ffff0708 & 0x10) != 0,
               DAT_fffef050 & 1,puStack_34 + 0x1d2);
  puStack_30 = puStack_30 + 2;
  puStack_28 = &DAT_ffff395a;
  FUN_000e994c((int)_DAT_ffff1128,((int)(char)DAT_ffff0709 & 0x80U) != 0,DAT_fffef050 & 1,
               (int)_DAT_ffff395c,puStack_30);
  puStack_28 = (undefined1 *)(uint)((DAT_fffef371 & 4) != 0);
  FUN_000e9d44((DAT_ffff0708 & 4) != 0,DAT_fffeeec6 & 1,((int)(char)DAT_ffff050e & 0x80U) != 0,
               (DAT_ffff050e & 0x20) != 0,((int)DAT_ffff0515 & 0x80U) != 0,_DAT_ffff0f56,
               v_Coolant_Temperature_29A5,_DAT_ffff102c,_DAT_ffff0da4,_DAT_ffff1128,DAT_ffff0902,
               puStack_28,DAT_fffef050 & 1,_DAT_ffff0dd4,&DAT_ffff0702);
  puStack_34 = puVar1 + 0x1ca;
  FUN_000e9768((int)DAT_ffff0702,DAT_fffef050 & 1,puStack_34);
  FUN_000eab28(DAT_fffeeec6 & 1,(int)_DAT_ffff1120,abStack_40);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0708 | 0x80;
  if ((abStack_40[0] & 1) == 0) {
    bVar3 = DAT_ffff0708 & 0x7f;
  }
  DAT_ffff0708 = bVar3;
  FUN_00001550();
  FUN_000e9e58((DAT_ffff0708 & 4) != 0,((int)DAT_ffff0512 & 0x80U) != 0,DAT_fffeeec6 & 1,
               (DAT_ffff03d8 & 2) != 0,(DAT_ffff0708 & 0x40) != 0,_DAT_ffff111c,_DAT_ffff1122,
               ((int)(char)DAT_ffff0708 & 0x80U) != 0,DAT_ffff0902,(DAT_fffef371 & 4) != 0,
               DAT_fffef050 & 1,&DAT_ffff0703);
  FUN_000e97f0((int)DAT_ffff0703,DAT_fffef050 & 1,&DAT_ffff06fd);
  FUN_000eabc8((int)DAT_ffff0703,(int)DAT_ffff06fd,DAT_fffef050 & 1,abStack_3c);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff0708 | 0x40;
  if ((abStack_3c[0] & 1) == 0) {
    bVar3 = DAT_ffff0708 & 0xbf;
  }
  DAT_ffff0708 = bVar3;
  FUN_00001550();
  FUN_000eab6c(((int)(char)DAT_ffff0708 & 0x80U) != 0,(int)DAT_ffff06fd,(DAT_ffff0708 & 0x40) != 0,
               abStack_38);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff0708 | 0x20;
  if ((abStack_38[0] & 1) == 0) {
    bVar3 = DAT_ffff0708 & 0xdf;
  }
  DAT_ffff0708 = bVar3;
  FUN_00001550(uVar2);
  return;
}

