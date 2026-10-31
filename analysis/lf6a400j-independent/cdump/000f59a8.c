
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f59a8(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_80 [4];
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
  
  local_24 = &DAT_ffff073a;
  FUN_000f5140((int)_DAT_fffef2aa,(int)_DAT_fffeeede,(int)_v_Engine_Speed_2994,&DAT_ffff1804);
  FUN_000f51d4((int)_DAT_fffef2a0,(int)_DAT_fffeeede,(int)_v_Engine_Speed_2994,&DAT_ffff1808);
  FUN_000f67e4(DAT_ffff0769 & 1,DAT_fffef050 & 1,local_80);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0764 | 0x10;
  if ((local_80[0] & 1) == 0) {
    bVar2 = DAT_ffff0764 & 0xef;
  }
  DAT_ffff0764 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f6838(DAT_ffff0769 & 1,DAT_fffef050 & 1,abStack_7c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0764 | 0x20;
  if ((abStack_7c[0] & 1) == 0) {
    bVar2 = DAT_ffff0764 & 0xdf;
  }
  DAT_ffff0764 = bVar2;
  FUN_00001550();
  FUN_000f685c(((int)DAT_ffff0768 & 0x80U) != 0,(int)_v_Engine_Speed_2994,DAT_ffff0769 & 1,
               (int)DAT_ffff0778,(DAT_fffef371 & 4) != 0,abStack_78);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0760 | 1;
  if ((abStack_78[0] & 1) == 0) {
    bVar2 = DAT_ffff0760 & 0xfe;
  }
  DAT_ffff0760 = bVar2;
  FUN_00001550();
  FUN_000f6214(((int)DAT_ffff073a & 0x80U) != 0,(DAT_ffff0769 & 4) != 0,(int)_v_Engine_Speed_2994,
               _DAT_ffff1814,_DAT_ffff1818,(int)_DAT_fffef29e,(int)_DAT_fffef2a8,_DAT_fffeeede,
               &DAT_ffff11a8);
  FUN_000f6474((int)_DAT_ffff11a8,abStack_74);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff075f | 0x80;
  if ((abStack_74[0] & 1) == 0) {
    bVar2 = DAT_ffff075f & 0x7f;
  }
  DAT_ffff075f = bVar2;
  FUN_00001550(uVar1);
  FUN_000f6488((int)_DAT_ffff11a8,abStack_70);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0763 | 0x20;
  if ((abStack_70[0] & 1) == 0) {
    bVar2 = DAT_ffff0763 & 0xdf;
  }
  DAT_ffff0763 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f5010(_DAT_ffff1804,&DAT_ffff17fc);
  FUN_000f50a8(_DAT_ffff1808,&DAT_ffff1800);
  FUN_000f4e20(DAT_ffff0760 & 1,(int)_DAT_fffef2a8,DAT_fffef050 & 1,&DAT_ffff11a0);
  FUN_000f4e7c(DAT_ffff0760 & 1,(int)_DAT_fffef29e,DAT_fffef050 & 1,&DAT_ffff11a2);
  FUN_000f5658(DAT_ffff0761 & 1,(DAT_ffff0763 & 0x20) != 0,(int)_DAT_fffef2a4,DAT_fffef050 & 1,
               &DAT_ffff075b,&DAT_ffff11ae,&DAT_ffff11b2);
  FUN_000f575c((DAT_ffff0761 & 2) != 0,(DAT_ffff0763 & 0x20) != 0,(int)_DAT_fffef29a,
               DAT_fffef050 & 1,&DAT_ffff075c,&DAT_ffff11b0,&DAT_ffff11b4);
  FUN_000f5310();
  abStack_6c[0] = 1 - (((int)(char)DAT_ffff36cb & 0x80U) == 0);
  FUN_000f6330(((int)(char)DAT_ffff075f & 0x80U) != 0,((int)(char)DAT_ffff0760 & 0x80U) != 0,
               (DAT_ffff0760 & 0x40) != 0,(int)(char)abStack_6c[0],_DAT_ffff119e,_DAT_ffff11a4,
               _DAT_ffff11a6,_DAT_ffff17f4,_DAT_ffff17f8,_DAT_ffff17ec,_DAT_ffff17f0,DAT_fffef504,
               abStack_6c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff36cb | 0x80;
  if ((abStack_6c[0] & 1) == 0) {
    bVar2 = DAT_ffff36cb & 0x7f;
  }
  DAT_ffff36cb = bVar2;
  FUN_00001550(uVar1);
  FUN_000f67b4((int)_DAT_ffff11a0,DAT_fffef050 & 1,abStack_68);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0764 | 0x40;
  if ((abStack_68[0] & 1) == 0) {
    bVar2 = DAT_ffff0764 & 0xbf;
  }
  DAT_ffff0764 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f6808((int)_DAT_ffff11a2,DAT_fffef050 & 1,abStack_64);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0764 | 0x80;
  if ((abStack_64[0] & 1) == 0) {
    bVar2 = DAT_ffff0764 & 0x7f;
  }
  DAT_ffff0764 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f630c((int)_DAT_ffff11a8,((int)(char)DAT_ffff36cb & 0x80U) != 0,abStack_60);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0762 | 0x40;
  if ((abStack_60[0] & 1) == 0) {
    bVar2 = DAT_ffff0762 & 0xbf;
  }
  DAT_ffff0762 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f64fc((int)DAT_ffff075b,DAT_fffef050 & 1,abStack_5c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0760 | 8;
  if ((abStack_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff0760 & 0xf7;
  }
  DAT_ffff0760 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f6520((int)DAT_ffff075b,DAT_fffef050 & 1,abStack_58);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0760 | 2;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff0760 & 0xfd;
  }
  DAT_ffff0760 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f65b0((int)DAT_ffff075c,DAT_fffef050 & 1,abStack_54);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0760 | 0x10;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff0760 & 0xef;
  }
  DAT_ffff0760 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f65d4((int)DAT_ffff075c,DAT_fffef050 & 1,abStack_50);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0760 | 4;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff0760 & 0xfb;
  }
  DAT_ffff0760 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4df4((int)DAT_ffff0758,&DAT_ffff119e);
  FUN_000f4f7c((int)_v_Engine_Speed_2994,(int)DAT_ffff0758,&DAT_ffff11a4);
  FUN_000f4fa4((int)_v_Engine_Speed_2994,(int)DAT_ffff0758,&DAT_ffff11a6);
  FUN_000f5268(_DAT_ffff3b24,(int)DAT_ffff0758,_DAT_ffff17ec,_DAT_ffff17f0,&DAT_ffff3b24);
  FUN_000f52bc(_DAT_ffff3b28,(int)DAT_ffff0758,_DAT_ffff17f4,_DAT_ffff17f8,&DAT_ffff3b28);
  FUN_000f5860((DAT_ffff0760 & 8) != 0,(DAT_ffff0760 & 2) != 0,DAT_fffef050 & 1,&DAT_ffff075d);
  FUN_000f5884((DAT_ffff0760 & 0x10) != 0,(DAT_ffff0760 & 4) != 0,DAT_fffef050 & 1,&DAT_ffff075e);
  FUN_000f4f38(_DAT_ffff17fc,(int)DAT_ffff0758,_DAT_ffff3b24,&DAT_ffff17ec);
  FUN_000f4f58(_DAT_ffff17fc,(int)DAT_ffff0758,_DAT_ffff3b24,&DAT_ffff17f0);
  FUN_000f4fcc(_DAT_ffff1800,(int)DAT_ffff0758,_DAT_ffff3b28,&DAT_ffff17f4);
  FUN_000f4fec(_DAT_ffff1800,(int)DAT_ffff0758,_DAT_ffff3b28,&DAT_ffff17f8);
  FUN_000f5470(DAT_ffff0761 & 1,(DAT_ffff0762 & 0x40) != 0,_DAT_ffff17fc,_DAT_ffff3b24,
               DAT_fffef050 & 1,&DAT_ffff0759,&DAT_ffff11aa);
  FUN_000f5564((DAT_ffff0761 & 2) != 0,(DAT_ffff0762 & 0x40) != 0,_DAT_ffff1800,_DAT_ffff3b28,
               DAT_fffef050 & 1,&DAT_ffff075a,&DAT_ffff11ac);
  FUN_000f6604(_DAT_ffff17fc,_DAT_ffff3b24,(DAT_ffff0762 & 0x40) != 0,DAT_fffef050 & 1,abStack_4c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0760 | 0x40;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff0760 & 0xbf;
  }
  DAT_ffff0760 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f6688(_DAT_ffff1800,_DAT_ffff3b28,(DAT_ffff0762 & 0x40) != 0,DAT_fffef050 & 1,abStack_48);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0760 | 0x80;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff0760 & 0x7f;
  }
  DAT_ffff0760 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4ed8((int)DAT_ffff075d,DAT_fffef050 & 1,&DAT_ffff0756);
  FUN_000f4f08((int)DAT_ffff075e,DAT_fffef050 & 1,&DAT_ffff0757);
  FUN_000f64cc((int)DAT_ffff075d,DAT_fffef050 & 1,abStack_44);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0761 | 1;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff0761 & 0xfe;
  }
  DAT_ffff0761 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f649c((int)DAT_ffff075d,DAT_fffef050 & 1,abStack_40);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0761 | 4;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff0761 & 0xfb;
  }
  DAT_ffff0761 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f6580((int)DAT_ffff075e,DAT_fffef050 & 1,abStack_3c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0761 | 2;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff0761 & 0xfd;
  }
  DAT_ffff0761 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f6550((int)DAT_ffff075e,DAT_fffef050 & 1,abStack_38);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0761 | 8;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff0761 & 0xf7;
  }
  DAT_ffff0761 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f670c((int)DAT_ffff0759,DAT_fffef050 & 1,abStack_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0762 | 0x10;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff0762 & 0xef;
  }
  DAT_ffff0762 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f6730((int)DAT_ffff075a,DAT_fffef050 & 1,abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0762 | 0x20;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff0762 & 0xdf;
  }
  DAT_ffff0762 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f6754((int)DAT_ffff0759,DAT_fffef050 & 1,abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0762 | 4;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0762 & 0xfb;
  }
  DAT_ffff0762 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f6784((int)DAT_ffff075a,DAT_fffef050 & 1,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0762 | 8;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0762 & 0xf7;
  }
  DAT_ffff0762 = bVar2;
  FUN_00001550(uVar1);
  return;
}

