
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f09e0(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_84 [4];
  byte abStack_80 [4];
  byte abStack_7c [4];
  byte abStack_78 [4];
  byte abStack_74 [4];
  byte abStack_70 [4];
  byte abStack_6c [4];
  byte abStack_68 [4];
  byte abStack_64 [4];
  byte abStack_60 [4];
  byte abStack_5c [4];
  byte abStack_58 [4];
  byte abStack_54 [4];
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
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0733;
  FUN_000f1958(DAT_ffff000b & 1,(int)_DAT_fffeef12,(DAT_ffff0000 & 0x20) != 0,
               (DAT_ffff000d & 0x20) != 0,(DAT_fffef371 & 4) != 0,DAT_ffff08fc,DAT_ffff08ea,local_84
               ,&DAT_ffff1176,&DAT_ffff1178);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073a | 0x80;
  if ((local_84[0] & 1) == 0) {
    bVar2 = DAT_ffff073a & 0x7f;
  }
  DAT_ffff073a = bVar2;
  FUN_00001550(uVar1);
  FUN_000f15e8((int)_DAT_fffef296,(int)_DAT_fffeeede,(int)_v_Engine_Speed_2994,&DAT_ffff1784);
  FUN_000f167c((int)_DAT_fffef28c,(int)_DAT_fffeeede,(int)_v_Engine_Speed_2994,&DAT_ffff1788);
  FUN_000f1da0(DAT_ffff076d & 1,DAT_fffef050 & 1,abStack_80);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073f | 0x10;
  if ((abStack_80[0] & 1) == 0) {
    bVar2 = DAT_ffff073f & 0xef;
  }
  DAT_ffff073f = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1df4(DAT_ffff076d & 1,DAT_fffef050 & 1,abStack_7c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff073f | 0x20;
  if ((abStack_7c[0] & 1) == 0) {
    bVar2 = DAT_ffff073f & 0xdf;
  }
  DAT_ffff073f = bVar2;
  FUN_00001550();
  FUN_000f1e18(((int)DAT_ffff0768 & 0x80U) != 0,(int)_v_Engine_Speed_2994,DAT_ffff076d & 1,
               (int)DAT_ffff0773,(DAT_fffef371 & 4) != 0,abStack_78);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff073e | 1;
  if ((abStack_78[0] & 1) == 0) {
    bVar2 = DAT_ffff073e & 0xfe;
  }
  DAT_ffff073e = bVar2;
  FUN_00001550();
  FUN_000f12e8(((int)(char)DAT_ffff073a & 0x80U) != 0,(DAT_ffff076d & 4) != 0,
               (int)_v_Engine_Speed_2994,_DAT_ffff180c,_DAT_ffff1810,(int)_DAT_fffef28a,
               (int)_DAT_fffef294,_DAT_fffeeede,&DAT_ffff117a);
  FUN_000f14b8(_DAT_ffff1784,&DAT_ffff177c);
  FUN_000f1550(_DAT_ffff1788,&DAT_ffff1780);
  FUN_000f0224(DAT_ffff073e & 1,(int)_DAT_fffef294,DAT_fffef050 & 1,&DAT_ffff1172);
  FUN_000f0280(DAT_ffff073e & 1,(int)_DAT_fffef28a,DAT_fffef050 & 1,&DAT_ffff1174);
  FUN_000f17b8((int)_DAT_ffff117a,abStack_74);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073e | 0x20;
  if ((abStack_74[0] & 1) == 0) {
    bVar2 = DAT_ffff073e & 0xdf;
  }
  DAT_ffff073e = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1bac((int)_DAT_ffff117a,abStack_70);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073d | 0x80;
  if ((abStack_70[0] & 1) == 0) {
    bVar2 = DAT_ffff073d & 0x7f;
  }
  DAT_ffff073d = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1d70((int)_DAT_ffff1172,DAT_fffef050 & 1,abStack_6c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073f | 0x40;
  if ((abStack_6c[0] & 1) == 0) {
    bVar2 = DAT_ffff073f & 0xbf;
  }
  DAT_ffff073f = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1dc4((int)_DAT_ffff1174,DAT_fffef050 & 1,abStack_68);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073f | 0x80;
  if ((abStack_68[0] & 1) == 0) {
    bVar2 = DAT_ffff073f & 0x7f;
  }
  DAT_ffff073f = bVar2;
  FUN_00001550(uVar1);
  FUN_000f06a0(DAT_ffff073c & 1,(DAT_ffff073e & 0x20) != 0,(int)_DAT_fffef290,DAT_fffef050 & 1,
               &DAT_ffff0736,&DAT_ffff1180,&DAT_ffff1184);
  FUN_000f07a4((DAT_ffff073c & 2) != 0,(DAT_ffff073e & 0x20) != 0,(int)_DAT_fffef286,
               DAT_fffef050 & 1,&DAT_ffff0737,&DAT_ffff1182,&DAT_ffff1186);
  FUN_000f0358();
  abStack_64[0] = 1 - (((int)(char)DAT_ffff36c4 & 0x80U) == 0);
  FUN_000f1a68(((int)(char)DAT_ffff073d & 0x80U) != 0,((int)(char)DAT_ffff073b & 0x80U) != 0,
               (DAT_ffff073b & 0x40) != 0,(int)(char)abStack_64[0],_DAT_ffff1170,_DAT_ffff1188,
               _DAT_ffff118a,_DAT_ffff1774,_DAT_ffff1778,_DAT_ffff176c,_DAT_ffff1770,DAT_fffef504,
               abStack_64);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff36c4 | 0x80;
  if ((abStack_64[0] & 1) == 0) {
    bVar2 = DAT_ffff36c4 & 0x7f;
  }
  DAT_ffff36c4 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f182c((int)DAT_ffff0736,DAT_fffef050 & 1,abStack_60);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073b | 8;
  if ((abStack_60[0] & 1) == 0) {
    bVar2 = DAT_ffff073b & 0xf7;
  }
  DAT_ffff073b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1850((int)DAT_ffff0736,DAT_fffef050 & 1,abStack_5c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073b | 2;
  if ((abStack_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff073b & 0xfd;
  }
  DAT_ffff073b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f18e0((int)DAT_ffff0737,DAT_fffef050 & 1,abStack_58);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073b | 0x10;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff073b & 0xef;
  }
  DAT_ffff073b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1904((int)DAT_ffff0737,DAT_fffef050 & 1,abStack_54);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073b | 4;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff073b & 0xfb;
  }
  DAT_ffff073b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1934((int)_DAT_ffff117a,((int)(char)DAT_ffff36c4 & 0x80U) != 0,abStack_50);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073d | 0x40;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff073d & 0xbf;
  }
  DAT_ffff073d = bVar2;
  FUN_00001550(uVar1);
  FUN_000f01f8((int)DAT_ffff0733,&DAT_ffff1170);
  FUN_000f1424((int)_v_Engine_Speed_2994,(int)DAT_ffff0733,&DAT_ffff1188);
  FUN_000f144c((int)_v_Engine_Speed_2994,(int)DAT_ffff0733,&DAT_ffff118a);
  FUN_000f1710(_DAT_ffff3b1c,(int)DAT_ffff0733,_DAT_ffff176c,_DAT_ffff1770,&DAT_ffff3b1c);
  FUN_000f1764(_DAT_ffff3b20,(int)DAT_ffff0733,_DAT_ffff1774,_DAT_ffff1778,&DAT_ffff3b20);
  FUN_000f08a8((DAT_ffff073b & 8) != 0,(DAT_ffff073b & 2) != 0,DAT_fffef050 & 1,&DAT_ffff0738);
  FUN_000f08cc((DAT_ffff073b & 0x10) != 0,(DAT_ffff073b & 4) != 0,DAT_fffef050 & 1,&DAT_ffff0739);
  FUN_000f13e0(_DAT_ffff177c,(int)DAT_ffff0733,_DAT_ffff3b1c,&DAT_ffff176c);
  FUN_000f1400(_DAT_ffff177c,(int)DAT_ffff0733,_DAT_ffff3b1c,&DAT_ffff1770);
  FUN_000f1474(_DAT_ffff1780,(int)DAT_ffff0733,_DAT_ffff3b20,&DAT_ffff1774);
  FUN_000f1494(_DAT_ffff1780,(int)DAT_ffff0733,_DAT_ffff3b20,&DAT_ffff1778);
  FUN_000f04b8(DAT_ffff073c & 1,(DAT_ffff073d & 0x40) != 0,_DAT_ffff177c,_DAT_ffff3b1c,
               DAT_fffef050 & 1,&DAT_ffff0734,&DAT_ffff117c);
  FUN_000f05ac((DAT_ffff073c & 2) != 0,(DAT_ffff073d & 0x40) != 0,_DAT_ffff1780,_DAT_ffff3b20,
               DAT_fffef050 & 1,&DAT_ffff0735,&DAT_ffff117e);
  FUN_000f1bc0(_DAT_ffff177c,_DAT_ffff3b1c,(DAT_ffff073d & 0x40) != 0,DAT_fffef050 & 1,abStack_4c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073b | 0x40;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff073b & 0xbf;
  }
  DAT_ffff073b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1c44(_DAT_ffff1780,_DAT_ffff3b20,(DAT_ffff073d & 0x40) != 0,DAT_fffef050 & 1,abStack_48);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073b | 0x80;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff073b & 0x7f;
  }
  DAT_ffff073b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f02dc((int)DAT_ffff0738,DAT_fffef050 & 1,&DAT_ffff0731);
  FUN_000f030c((int)DAT_ffff0739,DAT_fffef050 & 1,&DAT_ffff0732);
  FUN_000f17fc((int)DAT_ffff0738,DAT_fffef050 & 1,abStack_44);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073c | 1;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff073c & 0xfe;
  }
  DAT_ffff073c = bVar2;
  FUN_00001550(uVar1);
  FUN_000f17cc((int)DAT_ffff0738,DAT_fffef050 & 1,abStack_40);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073f | 4;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff073f & 0xfb;
  }
  DAT_ffff073f = bVar2;
  FUN_00001550(uVar1);
  FUN_000f18b0((int)DAT_ffff0739,DAT_fffef050 & 1,abStack_3c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073c | 2;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff073c & 0xfd;
  }
  DAT_ffff073c = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1880((int)DAT_ffff0739,DAT_fffef050 & 1,abStack_38);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073f | 8;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff073f & 0xf7;
  }
  DAT_ffff073f = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1cc8((int)DAT_ffff0734,DAT_fffef050 & 1,abStack_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073d | 0x10;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff073d & 0xef;
  }
  DAT_ffff073d = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1cec((int)DAT_ffff0735,DAT_fffef050 & 1,abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073d | 0x20;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff073d & 0xdf;
  }
  DAT_ffff073d = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1d10((int)DAT_ffff0734,DAT_fffef050 & 1,abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073d | 4;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff073d & 0xfb;
  }
  DAT_ffff073d = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1d40((int)DAT_ffff0735,DAT_fffef050 & 1,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff073d | 8;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff073d & 0xf7;
  }
  DAT_ffff073d = bVar2;
  FUN_00001550(uVar1);
  return;
}

