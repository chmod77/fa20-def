
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f357c(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_88 [4];
  byte abStack_84 [4];
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
  byte bStack_2c;
  short sStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff178c;
  FUN_000f1f10((int)_v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff1818,&DAT_ffff178c);
  FUN_000f1f6c((int)_v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff1814,&DAT_ffff1790);
  FUN_000f2078(DAT_fffeeec6 & 1,((int)(char)DAT_ffff074c & 0x80U) != 0,_DAT_ffff1818,
               (DAT_ffff0769 & 8) != 0,&DAT_ffff1794);
  FUN_000f20f0(DAT_fffeeec6 & 1,((int)(char)DAT_ffff074c & 0x80U) != 0,_DAT_ffff1814,
               (DAT_ffff0769 & 8) != 0,&DAT_ffff1798);
  FUN_000f48d8((DAT_fffef371 & 4) != 0,(int)DAT_ffff08eb,local_88);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074b | 2;
  if ((local_88[0] & 1) == 0) {
    bVar2 = DAT_ffff074b & 0xfd;
  }
  DAT_ffff074b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4ac8(_DAT_ffff1814,_DAT_ffff1818,(int)_DAT_fffef2c0,(int)_DAT_fffef2c2,abStack_84);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074b | 1;
  if ((abStack_84[0] & 1) == 0) {
    bVar2 = DAT_ffff074b & 0xfe;
  }
  DAT_ffff074b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1ef4((int)DAT_ffff091d,&DAT_ffff1194);
  FUN_000f2168((int)DAT_ffff091d,&DAT_ffff179c);
  FUN_000f2184((int)DAT_ffff091d,&DAT_ffff17a0);
  FUN_000f21d0((int)DAT_ffff091d,&DAT_ffff17ac);
  FUN_000f21ec((int)DAT_ffff091d,&DAT_ffff17b0);
  FUN_000f4a98(DAT_fffeeec6 & 1,_DAT_ffff1798,_DAT_ffff1794,abStack_80);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074c | 0x80;
  if ((abStack_80[0] & 1) == 0) {
    bVar2 = DAT_ffff074c & 0x7f;
  }
  DAT_ffff074c = bVar2;
  FUN_00001550(uVar1);
  FUN_000f48ec((int)_DAT_ffff11b6,(int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_ffff0769 & 8) != 0,
               _DAT_ffff1790,_DAT_ffff178c,((int)(char)DAT_ffff074c & 0x80U) != 0,
               (DAT_fffef371 & 4) != 0,DAT_ffff08eb,abStack_7c,&DAT_ffff0755);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff074c | 0x40;
  if ((abStack_7c[0] & 1) == 0) {
    bVar2 = DAT_ffff074c & 0xbf;
  }
  DAT_ffff074c = bVar2;
  FUN_00001550();
  FUN_000f23a0((DAT_ffff074b & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_ffff0769 & 8) != 0,
               (int)_DAT_ffff11b6,((int)(char)DAT_ffff074c & 0x80U) != 0,(int)_DAT_fffef2c2,
               DAT_fffef050 & 1,&DAT_ffff0746);
  FUN_000f251c((DAT_ffff074b & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_ffff0769 & 8) != 0,
               (int)_DAT_ffff11b6,((int)(char)DAT_ffff074c & 0x80U) != 0,(int)_DAT_fffef2c0,
               DAT_fffef050 & 1,&DAT_ffff0747);
  FUN_000f2238((DAT_ffff074c & 0x40) != 0,DAT_ffff074b & 1,_DAT_ffff1818,(int)_DAT_ffff118e,
               _DAT_ffff1194,(int)_DAT_fffef2c2,_DAT_ffff118c,DAT_fffef050 & 1,&DAT_ffff0744);
  FUN_000f22ec((DAT_ffff074c & 0x40) != 0,DAT_ffff074b & 1,_DAT_ffff1814,(int)_DAT_ffff1192,
               _DAT_ffff1194,(int)_DAT_fffef2c0,_DAT_ffff1190,DAT_fffef050 & 1,&DAT_ffff0745);
  FUN_000f32b0((int)DAT_ffff0746,(int)_DAT_ffff39ac,DAT_fffef050 & 1,&DAT_ffff39ac);
  FUN_000f32e4((int)DAT_ffff0746,(int)_DAT_ffff39ae,DAT_fffef050 & 1,&DAT_ffff39ae);
  FUN_000f3318((int)_DAT_fffef2c2,(int)DAT_ffff0746,(int)_DAT_ffff39b0,DAT_fffef050 & 1,
               &DAT_ffff39b0);
  FUN_000f334c((int)DAT_ffff0746,(int)DAT_ffff36c9,DAT_fffef050 & 1,&DAT_ffff36c9);
  FUN_000f336c((int)DAT_ffff0747,(int)_DAT_ffff39b2,DAT_fffef050 & 1,&DAT_ffff39b2);
  FUN_000f33a0((int)DAT_ffff0747,(int)_DAT_ffff39b4,DAT_fffef050 & 1,&DAT_ffff39b4);
  FUN_000f33d4((int)_DAT_fffef2c0,(int)DAT_ffff0747,(int)_DAT_ffff39b6,DAT_fffef050 & 1,
               &DAT_ffff39b6);
  FUN_000f3408((int)DAT_ffff0747,(int)DAT_ffff36ca,DAT_fffef050 & 1,&DAT_ffff36ca);
  FUN_000f4898((int)DAT_ffff0746,(DAT_ffff074b & 0x40) != 0,&DAT_ffff0751);
  FUN_000f48a8((int)DAT_ffff0747,((int)(char)DAT_ffff074b & 0x80U) != 0,&DAT_ffff0752);
  FUN_000f48b8((int)DAT_ffff0746,(DAT_ffff074b & 0x10) != 0,&DAT_ffff0753);
  FUN_000f48c8((int)DAT_ffff0747,(DAT_ffff074b & 0x20) != 0,&DAT_ffff0754);
  FUN_000f2698((DAT_ffff074c & 0x40) != 0,DAT_ffff074b & 1,(int)_DAT_ffff118e,(int)_DAT_ffff1194,
               _DAT_ffff17a8,_DAT_ffff179c,_DAT_ffff17a4,_DAT_ffff17a0,_DAT_ffff118c,
               DAT_fffef050 & 1,&DAT_ffff0748);
  FUN_000f273c((DAT_ffff074c & 0x40) != 0,DAT_ffff074b & 1,(int)_DAT_ffff1192,(int)_DAT_ffff1194,
               _DAT_ffff17b8,_DAT_ffff17ac,_DAT_ffff17b4,_DAT_ffff17b0,_DAT_ffff1190,
               DAT_fffef050 & 1,&DAT_ffff0749);
  FUN_000f4628((int)DAT_ffff0744,(int)_DAT_ffff118c,&DAT_ffff1196);
  FUN_000f4654((int)DAT_ffff0744,(int)_DAT_ffff118e,&DAT_ffff1198);
  FUN_000f4680((int)DAT_ffff0745,(int)_DAT_ffff1190,&DAT_ffff119a);
  FUN_000f46ac((int)DAT_ffff0745,(int)_DAT_ffff1192,&DAT_ffff119c);
  FUN_000f46d8((int)DAT_ffff0744,_DAT_ffff17a4,(int)_DAT_fffef2c2,&DAT_ffff17dc);
  FUN_000f4724((int)DAT_ffff0744,_DAT_ffff17a8,(int)_DAT_fffef2c2,&DAT_ffff17e0);
  FUN_000f476c((int)DAT_ffff0745,_DAT_ffff17b4,(int)_DAT_fffef2c0,&DAT_ffff17e4);
  FUN_000f47b8((int)DAT_ffff0745,_DAT_ffff17b8,(int)_DAT_fffef2c0,&DAT_ffff17e8);
  FUN_000f4800((int)DAT_ffff0748,(DAT_ffff074c & 0x20) != 0,&DAT_ffff074d);
  FUN_000f4814((int)DAT_ffff0749);
  FUN_000f4828();
  FUN_000f4860((int)DAT_ffff0749,(DAT_ffff074a & 8) != 0,(DAT_ffff074a & 0x20) != 0,
               (DAT_ffff074a & 2) != 0,((int)(char)DAT_ffff074a & 0x80U) != 0,
               (DAT_ffff074c & 4) != 0,&DAT_ffff0750);
  FUN_000f1fc8((int)DAT_ffff0751,(int)DAT_ffff0753,DAT_fffef050 & 1,&DAT_ffff0740);
  FUN_000f1ff4((int)DAT_ffff0752,(int)DAT_ffff0754,DAT_fffef050 & 1,&DAT_ffff0741);
  FUN_000f49e8((int)DAT_ffff0751,(int)DAT_ffff0753,DAT_fffef050 & 1,abStack_78);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074b | 4;
  if ((abStack_78[0] & 1) == 0) {
    bVar2 = DAT_ffff074b & 0xfb;
  }
  DAT_ffff074b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4a14((int)DAT_ffff0752,(int)DAT_ffff0754,DAT_fffef050 & 1,abStack_74);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074b | 8;
  if ((abStack_74[0] & 1) == 0) {
    bVar2 = DAT_ffff074b & 0xf7;
  }
  DAT_ffff074b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4d84((int)DAT_ffff0751,(int)DAT_ffff0753,DAT_fffef050 & 1,abStack_70);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074b | 0x40;
  if ((abStack_70[0] & 1) == 0) {
    bVar2 = DAT_ffff074b & 0xbf;
  }
  DAT_ffff074b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4da0((int)DAT_ffff0752,(int)DAT_ffff0754,DAT_fffef050 & 1,abStack_6c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074b | 0x80;
  if ((abStack_6c[0] & 1) == 0) {
    bVar2 = DAT_ffff074b & 0x7f;
  }
  DAT_ffff074b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4dbc((int)DAT_ffff0751,(int)DAT_ffff0753,DAT_fffef050 & 1,abStack_68);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074b | 0x10;
  if ((abStack_68[0] & 1) == 0) {
    bVar2 = DAT_ffff074b & 0xef;
  }
  DAT_ffff074b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4dd8((int)DAT_ffff0752,(int)DAT_ffff0754,DAT_fffef050 & 1,abStack_64);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074b | 0x20;
  if ((abStack_64[0] & 1) == 0) {
    bVar2 = DAT_ffff074b & 0xdf;
  }
  DAT_ffff074b = bVar2;
  FUN_00001550(uVar1);
  FUN_000f28f0((int)DAT_ffff0748,_DAT_ffff179c,DAT_fffef050 & 1,&DAT_ffff17bc);
  FUN_000f2a24((int)DAT_ffff0748,_DAT_ffff17a0,DAT_fffef050 & 1,&DAT_ffff17c0);
  FUN_000f2ba4((int)DAT_ffff0748,_DAT_ffff17a4,DAT_fffef050 & 1,&DAT_ffff17c4);
  FUN_000f2d24((int)DAT_ffff0748,_DAT_ffff17a8,DAT_fffef050 & 1,&DAT_ffff17c8);
  FUN_000f2e58((int)DAT_ffff0749,_DAT_ffff17ac,DAT_fffef050 & 1,&DAT_ffff17cc);
  FUN_000f2f8c((int)DAT_ffff0749,_DAT_ffff17b0,DAT_fffef050 & 1,&DAT_ffff17d0);
  FUN_000f310c((int)DAT_ffff0749,_DAT_ffff17b4,DAT_fffef050 & 1,&DAT_ffff17d4);
  FUN_000f328c((int)DAT_ffff0749,_DAT_ffff17b8,DAT_fffef050 & 1,&DAT_ffff17d8);
  FUN_000f2020((int)DAT_ffff074d,(int)DAT_ffff074f,DAT_fffef050 & 1,&DAT_ffff0742);
  FUN_000f204c((int)DAT_ffff074e,(int)DAT_ffff0750,DAT_fffef050 & 1,&DAT_ffff0743);
  FUN_000f4a40((int)DAT_ffff074d,(int)DAT_ffff074f,DAT_fffef050 & 1,abStack_60);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074c | 2;
  if ((abStack_60[0] & 1) == 0) {
    bVar2 = DAT_ffff074c & 0xfd;
  }
  DAT_ffff074c = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4a6c((int)DAT_ffff074e,(int)DAT_ffff0750,DAT_fffef050 & 1,abStack_5c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074c | 1;
  if ((abStack_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff074c & 0xfe;
  }
  DAT_ffff074c = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4bc4((int)DAT_ffff074d,(int)DAT_ffff074f,DAT_fffef050 & 1,abStack_58);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074c | 0x20;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff074c & 0xdf;
  }
  DAT_ffff074c = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4be0((int)DAT_ffff074e,(int)DAT_ffff0750,DAT_fffef050 & 1,abStack_54);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074c | 0x10;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff074c & 0xef;
  }
  DAT_ffff074c = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4bfc((int)DAT_ffff074d,(int)DAT_ffff074f,DAT_fffef050 & 1,abStack_50);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074c | 8;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff074c & 0xf7;
  }
  DAT_ffff074c = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4c48((int)DAT_ffff0748,DAT_fffef050 & 1,abStack_4c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074a | 0x40;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff074a & 0xbf;
  }
  DAT_ffff074a = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4c18((int)DAT_ffff0748,DAT_fffef050 & 1,abStack_48);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074a | 4;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff074a & 0xfb;
  }
  DAT_ffff074a = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4c9c((int)DAT_ffff0749,DAT_fffef050 & 1,abStack_44);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074a | 0x80;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff074a & 0x7f;
  }
  DAT_ffff074a = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4c6c((int)DAT_ffff0749,DAT_fffef050 & 1,abStack_40);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074a | 8;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff074a & 0xf7;
  }
  DAT_ffff074a = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4cf0((int)DAT_ffff0748,DAT_fffef050 & 1,abStack_3c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074a | 0x10;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff074a & 0xef;
  }
  DAT_ffff074a = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4cc0((int)DAT_ffff0748,DAT_fffef050 & 1,abStack_38);
  sStack_28 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074a | 1;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff074a & 0xfe;
  }
  DAT_ffff074a = bVar2;
  FUN_00001550((int)sStack_28);
  FUN_000f4d44((int)DAT_ffff0749,DAT_fffef050 & 1,abStack_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074a | 0x20;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff074a & 0xdf;
  }
  DAT_ffff074a = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4d14((int)DAT_ffff0749,DAT_fffef050 & 1,abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074a | 2;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff074a & 0xfd;
  }
  DAT_ffff074a = bVar2;
  FUN_00001550(uVar1);
  FUN_000f4d68((int)DAT_ffff074e,(int)DAT_ffff0750,DAT_fffef050 & 1);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff074c | 4;
  if ((bStack_2c & 1) == 0) {
    bVar2 = DAT_ffff074c & 0xfb;
  }
  DAT_ffff074c = bVar2;
  FUN_00001550(uVar1);
  FUN_000f1e94((int)DAT_ffff0748,(int)_DAT_ffff1196,&DAT_ffff118c);
  FUN_000f1eac((int)DAT_ffff0748,(int)_DAT_ffff1198,&DAT_ffff118e);
  FUN_000f1ec4((int)DAT_ffff0749,(int)_DAT_ffff119a,&DAT_ffff1190);
  FUN_000f1edc((int)DAT_ffff0749,(int)_DAT_ffff119c);
  FUN_000f27e0((int)DAT_ffff0748,_DAT_ffff179c,(DAT_ffff074a & 4) != 0,(DAT_ffff074a & 0x10) != 0,
               DAT_ffff074a & 1,(DAT_ffff074a & 0x40) != 0,_DAT_ffff17bc,(int)_DAT_ffff399c,
               DAT_fffef050 & 1,&DAT_ffff399c);
  FUN_000f2914((int)DAT_ffff0748);
  FUN_000f2a48(_DAT_ffff17a4,(int)DAT_ffff0748,(DAT_ffff074a & 4) != 0,(DAT_ffff074a & 0x10) != 0,
               DAT_ffff074a & 1,(DAT_ffff074a & 0x40) != 0,_DAT_ffff17c4,(int)_DAT_ffff39a0,
               DAT_fffef050 & 1,&DAT_ffff39a0);
  FUN_000f2b58((int)DAT_ffff0748);
  FUN_000f2bc8(_DAT_ffff17a8,(int)DAT_ffff0748,(DAT_ffff074a & 4) != 0,(DAT_ffff074a & 0x10) != 0,
               DAT_ffff074a & 1,(DAT_ffff074a & 0x40) != 0,_DAT_ffff17c8,(int)_DAT_ffff39a2,
               DAT_fffef050 & 1,&DAT_ffff39a2);
  FUN_000f2cd8();
  FUN_000f2d48((int)DAT_ffff0749,_DAT_ffff17ac,(DAT_ffff074a & 8) != 0,(DAT_ffff074a & 0x20) != 0,
               (DAT_ffff074a & 2) != 0,((int)(char)DAT_ffff074a & 0x80U) != 0,_DAT_ffff17cc,
               (int)_DAT_ffff39a4,DAT_fffef050 & 1,&DAT_ffff39a4);
  FUN_000f2e7c();
  FUN_000f2fb0(_DAT_ffff17b4,(int)DAT_ffff0749,(DAT_ffff074a & 8) != 0,(DAT_ffff074a & 0x20) != 0,
               (DAT_ffff074a & 2) != 0,((int)(char)DAT_ffff074a & 0x80U) != 0,_DAT_ffff17d4,
               (int)_DAT_ffff39a8,DAT_fffef050 & 1,&DAT_ffff39a8);
  FUN_000f30c0();
  FUN_000f3130(_DAT_ffff17b8);
  FUN_000f3240((int)DAT_ffff0749,(DAT_ffff074a & 8) != 0,(DAT_ffff074a & 0x20) != 0,
               (DAT_ffff074a & 2) != 0,((int)(char)DAT_ffff074a & 0x80U) != 0,DAT_fffef050 & 1,
               DAT_ffff36c8,&DAT_ffff36c8);
  FUN_000f21a0((int)DAT_ffff0748,_DAT_ffff17dc,&DAT_ffff17a4);
  FUN_000f21b8((int)DAT_ffff0748,_DAT_ffff17e0,&DAT_ffff17a8);
  FUN_000f2208((int)DAT_ffff0749,_DAT_ffff17e4,&DAT_ffff17b4);
  FUN_000f2220((int)DAT_ffff0749,_DAT_ffff17e8,&DAT_ffff17b8);
  return;
}

