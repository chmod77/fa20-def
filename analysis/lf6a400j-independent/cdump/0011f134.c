
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011f134(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte local_88 [4];
  byte abStack_84 [4];
  byte abStack_80 [4];
  byte abStack_7c [4];
  byte abStack_78 [4];
  byte abStack_74 [4];
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
  byte bStack_40;
  undefined1 *puStack_3c;
  char cStack_38;
  undefined1 *puStack_34;
  byte bStack_30;
  char cStack_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_fffef2fe;
  puStack_3c = &DAT_ffff13a6;
  FUN_0011ecd0((int)_DAT_fffef406,&DAT_ffff13a6,&DAT_ffff13a8);
  cStack_38 = '\x01' - ((DAT_fffef06f & 0x40) == 0);
  uStack_28 = 0;
  puStack_34 = &DAT_ffff13b0;
  FUN_0011ef84((int)cStack_38,(DAT_fffef32a & 8) != 0,DAT_fffef32c & 1,1,0,0,(DAT_fffef9f3 & 4) != 0
               ,0,(DAT_fffef06f & 8) != 0,0,((int)DAT_fffef06c & 0x80U) != 0,
               (DAT_fffef310 & 0x10) != 0,(DAT_fffef310 & 8) != 0,&DAT_ffff13b6);
  FUN_0011f108((DAT_fffef331 & 8) != 0,puStack_34 + 0xc);
  FUN_0011fe20((int)DAT_fffef2fe,&DAT_ffff0939);
  FUN_001204dc(DAT_fffef32a & 1,(int)_DAT_ffff0f40,(int)_DAT_ffff0f44,(int)_DAT_ffff0f46,
               _DAT_ffff0f48,_DAT_fffef0da,&DAT_ffff093a,&DAT_ffff13d0,&DAT_ffff13d2,&DAT_ffff13d4,
               &DAT_ffff13d6,&DAT_ffff13d8);
  FUN_00120aa0((int)_DAT_fffef406,local_88);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0934 | 4;
  if ((local_88[0] & 1) == 0) {
    bVar2 = DAT_ffff0934 & 0xfb;
  }
  DAT_ffff0934 = bVar2;
  FUN_00001550(uVar1);
  FUN_00120770();
  FUN_00120930((DAT_fffef331 & 8) != 0,(DAT_ffff0934 & 4) != 0,
               ((int)(char)DAT_ffff0935 & 0x80U) != 0,(DAT_fffef3fc & 2) != 0,
               (DAT_fffef3fc & 4) != 0,abStack_84);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0936 | 0x10;
  if ((abStack_84[0] & 1) == 0) {
    bVar2 = DAT_ffff0936 & 0xef;
  }
  DAT_ffff0936 = bVar2;
  FUN_00001550(uVar1);
  FUN_00120ff0((int)DAT_ffff0939,(int)_DAT_fffeeed2,(int)_v_Atmospheric_Pressure_E6AA,abStack_80);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0935 | 8;
  if ((abStack_80[0] & 1) == 0) {
    bVar2 = DAT_ffff0935 & 0xf7;
  }
  DAT_ffff0935 = bVar2;
  FUN_00001550(uVar1);
  FUN_00121068((int)DAT_ffff0938,(int)DAT_ffff0937,(int)DAT_ffff0939,abStack_7c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0935 | 0x10;
  if ((abStack_7c[0] & 1) == 0) {
    bVar2 = DAT_ffff0935 & 0xef;
  }
  DAT_ffff0935 = bVar2;
  FUN_00001550();
  FUN_001210a8((DAT_ffff0935 & 0x40) != 0,(DAT_ffff0935 & 0x20) != 0,
               ((int)(char)DAT_ffff0935 & 0x80U) != 0,(int)_DAT_ffff13b6,abStack_78);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0934 | 0x10;
  if ((abStack_78[0] & 1) == 0) {
    bVar2 = DAT_ffff0934 & 0xef;
  }
  DAT_ffff0934 = bVar2;
  FUN_00001550();
  FUN_0011ee74((DAT_ffff0936 & 0x10) != 0,puStack_3c + 8);
  FUN_0011fda4((DAT_ffff0935 & 0x10) != 0,(int)DAT_ffff0939,&DAT_ffff0937);
  FUN_0011fdd4();
  FUN_00120be4((DAT_ffff0934 & 4) != 0,(DAT_fffef331 & 8) != 0,(DAT_ffff0934 & 0x10) != 0,
               (DAT_fffef3fc & 2) != 0,(DAT_fffef3fc & 4) != 0,
               ((int)(char)DAT_ffff0935 & 0x80U) != 0,DAT_ffff093a,abStack_74);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0936 | 8;
  if ((abStack_74[0] & 1) == 0) {
    bVar2 = DAT_ffff0936 & 0xf7;
  }
  DAT_ffff0936 = bVar2;
  FUN_00001550();
  FUN_00120e2c((int)_DAT_fffef406,(int)DAT_ffff093a,(int)_DAT_fffeeed4,
               (int)_v_Engine_Speed_OBD_copy_2ADA,DAT_ffff0939,(DAT_ffff0934 & 0x10) != 0,
               (DAT_fffef331 & 8) != 0,(DAT_ffff0934 & 2) != 0,abStack_70,&DAT_ffff13de,
               &DAT_ffff13e0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0934 | 8;
  if ((abStack_70[0] & 1) == 0) {
    bVar2 = DAT_ffff0934 & 0xf7;
  }
  DAT_ffff0934 = bVar2;
  FUN_00001550();
  puVar3 = puStack_34;
  FUN_0011ef48();
  FUN_001201d8((DAT_ffff0935 & 8) != 0,(DAT_ffff0935 & 0x10) != 0,(int)_v_Atmospheric_Pressure_E6AA,
               (int)_v_Manifold_Absolute_Pressure_EECE,0,0,_DAT_ffff13ca,DAT_ffff0938,DAT_ffff0937,
               (int)_DAT_fffef202,puVar3 + 0x16,puVar3 + 0x18);
  FUN_00120f88((int)DAT_ffff093a,(DAT_ffff0934 & 8) != 0,abStack_6c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0934 | 2;
  if ((abStack_6c[0] & 1) == 0) {
    bVar2 = DAT_ffff0934 & 0xfd;
  }
  DAT_ffff0934 = bVar2;
  FUN_00001550();
  FUN_00120400((DAT_ffff0935 & 8) != 0,(DAT_ffff0935 & 0x10) != 0,(int)_DAT_ffff13c6,
               puStack_34 + 0x1a);
  FUN_00120850((DAT_ffff0934 & 0x10) != 0,(int)DAT_ffff0939,(int)_DAT_ffff13c6,(int)DAT_ffff093a,
               (DAT_fffef331 & 8) != 0,(DAT_ffff0934 & 8) != 0,abStack_68);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0935 | 1;
  if ((abStack_68[0] & 1) == 0) {
    bVar2 = DAT_ffff0935 & 0xfe;
  }
  DAT_ffff0935 = bVar2;
  FUN_00001550();
  FUN_00120ae0((DAT_ffff0934 & 0x10) != 0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0935 | 2;
  if ((bStack_64 & 1) == 0) {
    bVar2 = DAT_ffff0935 & 0xfd;
  }
  DAT_ffff0935 = bVar2;
  FUN_00001550(uVar1);
  FUN_001208d4(DAT_ffff0935 & 1,(DAT_ffff0934 & 4) != 0,((int)(char)DAT_ffff0935 & 0x80U) != 0,
               (DAT_fffef3fc & 2) != 0,(DAT_fffef3fc & 4) != 0,abStack_60);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0935 | 0x40;
  if ((abStack_60[0] & 1) == 0) {
    bVar2 = DAT_ffff0935 & 0xbf;
  }
  DAT_ffff0935 = bVar2;
  FUN_00001550();
  FUN_00120b54(((int)(char)DAT_ffff0935 & 0x80U) != 0,(DAT_ffff0935 & 2) != 0,
               (DAT_ffff0934 & 4) != 0,(DAT_ffff0934 & 0x10) != 0,_DAT_ffff13bc,
               (DAT_fffef3fc & 2) != 0,(DAT_fffef3fc & 4) != 0,DAT_ffff0934 & 1,abStack_5c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0935 | 0x20;
  if ((abStack_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff0935 & 0xdf;
  }
  DAT_ffff0935 = bVar2;
  FUN_00001550();
  FUN_0011ee38((DAT_ffff0935 & 0x40) != 0,puStack_3c + 6);
  puVar3 = puStack_34;
  FUN_0011ef0c((DAT_ffff0935 & 0x20) != 0,puStack_34 + 2);
  FUN_0011fe78((int)_DAT_fffef406,DAT_ffff0934 & 1,((int)(char)DAT_ffff0935 & 0x80U) != 0,
               (DAT_ffff0935 & 0x40) != 0,(DAT_ffff0935 & 0x20) != 0,(DAT_ffff0936 & 0x10) != 0,
               (DAT_ffff0936 & 8) != 0,puVar3 + 0xe);
  FUN_0011ff04((int)_DAT_fffef406,DAT_ffff0934 & 1,((int)(char)DAT_ffff0935 & 0x80U) != 0,
               (DAT_ffff0935 & 0x40) != 0,(DAT_ffff0935 & 0x20) != 0,(DAT_ffff0936 & 0x10) != 0,
               (DAT_ffff0936 & 8) != 0,puVar3 + 0x10);
  FUN_00121224((int)DAT_ffff093b,(DAT_ffff0935 & 0x40) != 0,(int)DAT_ffff093a,abStack_58);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0935 | 4;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff0935 & 0xfb;
  }
  DAT_ffff0935 = bVar2;
  FUN_00001550(uVar1);
  puVar3 = puStack_34;
  FUN_00120430(DAT_ffff0934 & 1,(int)_DAT_fffef406,(int)_DAT_ffff13c0,(int)_DAT_ffff13be,
               puStack_34 + 0x1c);
  FUN_001207a4((int)DAT_ffff093b,(DAT_ffff0935 & 4) != 0,&DAT_ffff13da,&DAT_ffff13dc);
  FUN_0011f02c(DAT_ffff0934 & 1,(int)_DAT_fffef406,(int)_DAT_ffff13c0,(int)_DAT_ffff13be,
               _DAT_ffff13cc,puVar3 + 8);
  FUN_00121188((DAT_ffff0934 & 0x10) != 0,DAT_ffff0935 & 1,(DAT_ffff0935 & 4) != 0,(int)DAT_ffff093b
               ,_DAT_ffff13da,_DAT_fffef406,DAT_ffff093a,(DAT_ffff0935 & 0x40) != 0,abStack_54);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0936 | 4;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff0936 & 0xfb;
  }
  DAT_ffff0936 = bVar2;
  FUN_00001550(uVar1);
  FUN_001210e0(DAT_ffff0934 & 1,DAT_ffff0935 & 1,(int)_DAT_ffff13b8,(int)_DAT_ffff13cc,_DAT_ffff13ba
               ,_DAT_ffff13ce,_DAT_ffff13c2,_DAT_fffef406,(DAT_fffef3fc & 2) != 0,
               (DAT_fffef3fc & 4) != 0,(DAT_ffff0935 & 2) != 0,(DAT_fffef331 & 8) != 0,abStack_50);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0935 | 0x80;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff0935 & 0x7f;
  }
  DAT_ffff0935 = bVar2;
  FUN_00001550();
  puStack_3c = puStack_3c + 4;
  FUN_0011ed24(((int)(char)DAT_ffff0935 & 0x80U) != 0,(int)_DAT_fffef406,(int)_DAT_ffff13a6);
  FUN_0012046c(((int)(char)DAT_ffff0935 & 0x80U) != 0,DAT_fffef32a & 1);
  FUN_0012098c((DAT_ffff0935 & 0x40) != 0,(int)_DAT_ffff13ac,(int)_DAT_fffef406,(int)DAT_ffff093a,
               (DAT_ffff0936 & 4) != 0,((int)(char)DAT_ffff0935 & 0x80U) != 0,
               (DAT_fffef3fc & 2) != 0,(DAT_fffef3fc & 4) != 0,(DAT_ffff0936 & 0x10) != 0,
               (DAT_ffff0934 & 0x10) != 0,_DAT_ffff13ae,abStack_4c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0936 | 2;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff0936 & 0xfd;
  }
  DAT_ffff0936 = bVar2;
  FUN_00001550();
  FUN_00120d40((DAT_ffff0935 & 0x20) != 0,(int)_DAT_ffff13b2,(int)_DAT_fffef406,(int)DAT_ffff093a,
               ((int)(char)DAT_ffff0935 & 0x80U) != 0,(DAT_fffef3fc & 2) != 0,
               (DAT_fffef3fc & 4) != 0,(DAT_ffff0936 & 8) != 0,(DAT_ffff0934 & 0x10) != 0,
               _DAT_ffff13b4,abStack_48);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0936 | 1;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff0936 & 0xfe;
  }
  DAT_ffff0936 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011eeb0((int)_DAT_fffef406,(int)_DAT_ffff13aa,puStack_34);
  FUN_00121260(((int)(char)DAT_ffff0935 & 0x80U) != 0,(DAT_ffff0936 & 2) != 0,DAT_ffff0936 & 1,
               abStack_44);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0934 | 1;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff0934 & 0xfe;
  }
  DAT_ffff0934 = bVar2;
  FUN_00001550(uVar1);
  FUN_00120fb4(DAT_ffff0934 & 1,(int)DAT_ffff093a);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0934 | 0x20;
  if ((bStack_40 & 1) == 0) {
    bVar2 = DAT_ffff0934 & 0xdf;
  }
  DAT_ffff0934 = bVar2;
  FUN_00001550();
  FUN_0011ed5c(((int)(char)DAT_ffff0935 & 0x80U) != 0,(int)_DAT_fffef406,(int)_DAT_ffff13aa,
               (int)_DAT_ffff13b0,_DAT_ffff13c2,(DAT_ffff0934 & 0x20) != 0,&DAT_ffff0933);
  puVar3 = puStack_34 + 0x14;
  puStack_34 = puStack_34 + 0x12;
  FUN_0011ff90(DAT_ffff0934 & 1,((int)(char)DAT_ffff0935 & 0x80U) != 0,(int)DAT_ffff0933,
               (int)_DAT_ffff13ce,DAT_ffff093a,_DAT_fffef406,_DAT_ffff13ba,puStack_34,puVar3);
  bStack_30 = DAT_ffff0934 & 1;
  cStack_2c = '\x01' - (((int)(char)DAT_ffff0935 & 0x80U) == 0);
  FUN_0011f0ac(bStack_30,(int)cStack_2c,(int)DAT_ffff0933,&DAT_ffff13ba);
  return;
}

