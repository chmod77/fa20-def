
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a8230(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  byte local_158;
  byte bStack_154;
  byte abStack_150 [4];
  byte bStack_14c;
  byte bStack_148;
  byte bStack_144;
  byte bStack_140;
  byte bStack_13c;
  byte bStack_138;
  byte abStack_134 [4];
  byte bStack_130;
  byte bStack_12c;
  byte bStack_128;
  byte bStack_124;
  byte bStack_120;
  byte bStack_11c;
  byte bStack_118;
  byte bStack_114;
  byte abStack_110 [4];
  byte abStack_10c [4];
  byte abStack_108 [4];
  byte bStack_104;
  byte bStack_100;
  byte bStack_fc;
  byte abStack_f8 [4];
  byte bStack_f4;
  byte bStack_f0;
  byte bStack_ec;
  byte bStack_e8;
  byte bStack_e4;
  byte bStack_e0;
  byte bStack_dc;
  byte bStack_d8;
  byte bStack_d4;
  undefined1 *puStack_d0;
  undefined1 *puStack_cc;
  char cStack_c8;
  undefined1 uStack_c4;
  char cStack_c0;
  char cStack_bc;
  byte bStack_b8;
  byte bStack_b4;
  uint uStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  byte bStack_9c;
  byte bStack_98;
  char cStack_94;
  byte bStack_90;
  char cStack_8c;
  undefined1 uStack_88;
  char cStack_84;
  char cStack_80;
  char cStack_7c;
  char cStack_78;
  char cStack_74;
  char cStack_70;
  undefined1 local_6c;
  char cStack_68;
  byte bStack_64;
  undefined1 uStack_60;
  char cStack_5c;
  char cStack_58;
  char cStack_54;
  char cStack_50;
  char cStack_4c;
  undefined1 uStack_48;
  char cStack_44;
  byte bStack_40;
  char cStack_3c;
  char cStack_38;
  byte bStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0423;
  puStack_d0 = &DAT_ffff0c7e;
  FUN_000a6ef0((int)_v_Alternator_Duty_10D6,&DAT_ffff0c82);
  FUN_000a818c(((int)(char)DAT_ffff0002 & 0x80U) != 0,(int)DAT_ffff66b0,
               (int)v_Vehicle_Speed_byte_65A1,&DAT_ffff0cc6);
  FUN_000a81f0((int)_DAT_fffeeede,&DAT_ffff0cca);
  FUN_000aa5f8((DAT_ffff0003 & 8) != 0);
  FUN_000aced8(DAT_ffff03ab & 1,((int)(char)DAT_fffee710 & 0x80U) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04ca | 4;
  if ((local_158 & 1) == 0) {
    bVar3 = DAT_ffff04ca & 0xfb;
  }
  DAT_ffff04ca = bVar3;
  FUN_00001550(uVar2);
  FUN_000acacc((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_fffeeede,
               ((int)(char)DAT_fffeef76 & 0x80U) != 0,(DAT_fffeef76 & 0x40) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04cc | 1;
  if ((bStack_154 & 1) == 0) {
    bVar3 = DAT_ffff04cc & 0xfe;
  }
  DAT_ffff04cc = bVar3;
  FUN_00001550(uVar2);
  FUN_000a6890((int)_v_Engine_Speed_OBD_copy_2ADA,&DAT_ffff0c76);
  FUN_000ad3ec((int)v_Vehicle_Speed_byte_65A1,DAT_ffff03ab & 1,(int)_DAT_ffff2ae4,abStack_150);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04c9 | 4;
  if ((abStack_150[0] & 1) == 0) {
    bVar3 = DAT_ffff04c9 & 0xfb;
  }
  DAT_ffff04c9 = bVar3;
  FUN_00001550(uVar2);
  FUN_000acf80(0,DAT_fffeeec0 & 1);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04c8 | 1;
  if ((bStack_14c & 1) == 0) {
    bVar3 = DAT_ffff04c8 & 0xfe;
  }
  DAT_ffff04c8 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a5450((int)_v_Engine_Speed_2994,(int)_DAT_fffeed40,((int)(char)DAT_fffee710 & 0x80U) != 0,
               (DAT_fffef32d & 2) != 0);
  puVar1 = puStack_d0;
  FUN_000a6f10();
  FUN_000a7408(1,(int)_v_Alternator_Duty_10D6,(int)_DAT_ffff0efa,(int)_DAT_fffef0a4);
  FUN_000a7524((DAT_fffef330 & 0x40) != 0,(int)DAT_ffff0583,(int)DAT_ffff3694,puVar1 + 0x14);
  FUN_000a7568((DAT_fffef079 & 0x20) != 0,&DAT_ffff0c94);
  FUN_000a7580((DAT_fffef09e & 0x20) != 0,&DAT_ffff0c98);
  FUN_000a7598((int)_DAT_ffff0d42,(int)DAT_ffff04e6,(int)v_Vehicle_Speed_byte_65A1,DAT_fffeeec0 & 1)
  ;
  FUN_000a7680();
  FUN_000a7688((DAT_fffef319 & 0x10) != 0,&DAT_ffff0ca2);
  FUN_000a7ae0((DAT_fffeeec2 & 4) != 0,(int)_DAT_ffff38e6,DAT_ffff368d & 1,(int)_DAT_ffff38e4);
  FUN_000a7bb0((int)_DAT_fffeeede,(int)v_Vehicle_Speed_byte_65A1,&DAT_ffff0cae,&DAT_ffff0cb0);
  FUN_000a53b8((int)_v_Manifold_Absolute_Pressure_EECE,&DAT_ffff0c3e,&DAT_ffff0c40,&DAT_ffff0c3c);
  FUN_000a5518(DAT_ffff368d & 1,0,(int)_DAT_fffeeee0,(int)DAT_ffff0589);
  FUN_000ac7c0((int)_DAT_ffff0b1a,&DAT_ffff0d28);
  FUN_000ad5a8((DAT_fffee710 & 4) != 0,(int)v_Vehicle_Speed_byte_65A1,(int)_v_Engine_Speed_2994,
               (int)_DAT_ffff2ae4);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04cb | 2;
  if ((bStack_148 & 1) == 0) {
    bVar3 = DAT_ffff04cb & 0xfd;
  }
  DAT_ffff04cb = bVar3;
  FUN_00001550();
  FUN_000ad510((DAT_fffee710 & 4) != 0,(int)v_Coolant_Temperature_29A5,(int)_v_Engine_Speed_2994,
               (int)v_Vehicle_Speed_byte_65A1);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04cb | 1;
  if ((bStack_144 & 1) == 0) {
    bVar3 = DAT_ffff04cb & 0xfe;
  }
  DAT_ffff04cb = bVar3;
  FUN_00001550(uVar2);
  FUN_000ab210((int)DAT_ffff312e,(int)DAT_ffff312f,(DAT_ffff064a & 0x40) != 0);
  FUN_000ac870((int)_DAT_fffeeee0,DAT_fffeeec6 & 1,(int)_DAT_fffeeede);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04cb | 4;
  if ((bStack_140 & 1) == 0) {
    bVar3 = DAT_ffff04cb & 0xfb;
  }
  DAT_ffff04cb = bVar3;
  FUN_00001550();
  FUN_000addfc((DAT_ffff6570 & 0x10) != 0,DAT_ffff6570 & 1,(int)_DAT_ffff0d44,0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04ca | 0x10;
  if ((bStack_13c & 1) == 0) {
    bVar3 = DAT_ffff04ca & 0xef;
  }
  DAT_ffff04ca = bVar3;
  FUN_00001550(uVar2);
  FUN_000a562c((int)DAT_ffff2aa3,(int)_DAT_fffeeede,&DAT_ffff04c1);
  FUN_000acfcc(((int)DAT_ffff2a14 & 0x80U) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04c7 | 0x20;
  if ((bStack_138 & 1) == 0) {
    bVar3 = DAT_ffff04c7 & 0xdf;
  }
  DAT_ffff04c7 = bVar3;
  FUN_00001550(uVar2);
  FUN_000a7f20((int)v_Vehicle_Speed_byte_65A1,(DAT_ffff04ca & 4) != 0,&DAT_ffff0cbe);
  FUN_000a54b8((int)_DAT_ffff0c42,(DAT_fffeef76 & 0x40) != 0,&DAT_ffff0c44);
  puStack_cc = &DAT_ffff0cea;
  FUN_000aae98(((int)(char)DAT_fffee710 & 0x80U) != 0,(DAT_fffeef76 & 0x40) != 0,(int)DAT_ffff0593,
               (int)v_Vehicle_Speed_byte_65A1);
  FUN_000a7348((int)_DAT_ffff0ca2,(int)_DAT_ffff0c94,(int)_DAT_ffff0c92,(int)_DAT_ffff0c98);
  FUN_000a7900((int)DAT_ffff04c6,(int)_DAT_ffff38e4,(int)_DAT_ffff38e2);
  abStack_134[0] = DAT_ffff368d & 1;
  FUN_000ad6bc((int)DAT_ffff04c6,abStack_134[0],abStack_134);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff368d | 1;
  if ((abStack_134[0] & 1) == 0) {
    bVar3 = DAT_ffff368d & 0xfe;
  }
  DAT_ffff368d = bVar3;
  FUN_00001550(uVar2);
  FUN_000ab110((DAT_fffef09e & 0x40) != 0,(DAT_fffef330 & 0x40) != 0,(DAT_fffef09e & 0x20) != 0,
               (DAT_ffff04ca & 0x10) != 0);
  FUN_000ac00c((int)DAT_ffff04dc,DAT_ffff04ca & 1,&DAT_ffff04d7);
  FUN_000ac810((int)DAT_ffff04dc,&DAT_ffff04db);
  FUN_000adcfc((DAT_fffeef76 & 0x40) != 0,(int)_DAT_ffff0c42,(int)_DAT_ffff0c44,(int)_DAT_fffeed40);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04ca | 2;
  if ((bStack_130 & 1) == 0) {
    bVar3 = DAT_ffff04ca & 0xfd;
  }
  DAT_ffff04ca = bVar3;
  FUN_00001550(uVar2);
  FUN_000ab238((int)DAT_ffff04d7,(int)_DAT_fffeeede,&DAT_ffff0d08);
  FUN_000ab3c4((int)DAT_ffff04d7,(int)_DAT_fffeeede,&DAT_ffff0d0c);
  FUN_000a7024(((int)(char)DAT_fffee710 & 0x80U) != 0,(DAT_fffeef76 & 0x40) != 0,
               (DAT_fffef32d & 2) != 0,(DAT_ffff04ca & 2) != 0);
  FUN_000ab2fc(((int)(char)DAT_fffeef76 & 0x80U) != 0,(DAT_ffff04cc & 0x10) != 0,
               (DAT_fffef152 & 0x20) != 0,(int)_DAT_ffff0d08);
  FUN_000aa684((int)_v_Engine_Speed_2994,(int)DAT_fffee6a6,(DAT_ffff054a & 0x10) != 0,
               (int)DAT_ffff04db);
  FUN_000a6f18((int)DAT_ffff04c5,(int)_DAT_fffeeede,(int)_DAT_ffff0cea);
  FUN_000acaac((int)DAT_ffff04c5);
  uVar5 = FUN_00001550(0xf0);
  uStack_b0 = (uint)((ulonglong)uVar5 >> 0x20);
  bVar3 = DAT_ffff04ca | 1;
  if ((bStack_12c & 1) == 0) {
    bVar3 = DAT_ffff04ca & 0xfe;
  }
  DAT_ffff04ca = bVar3;
  FUN_00001550((int)uVar5);
  FUN_000ab09c((int)_DAT_ffff0d0a,(DAT_ffff056a & 0x10) != 0,((int)(char)DAT_fffeef76 & 0x80U) != 0,
               (DAT_fffeef76 & 0x40) != 0);
  cStack_c8 = '\x01' - ((DAT_ffff064a & 0x40) == 0);
  uStack_c4 = 1;
  cStack_c0 = '\x01' - (((int)(char)DAT_fffef09e & 0x80U) == 0);
  cStack_bc = '\x01' - ((DAT_fffeef76 & 0x40) == 0);
  uStack_b0 = (uint)((DAT_fffef310 & 0x10) != 0);
  FUN_000ab7b4(0,(int)DAT_ffff0589,(int)cStack_c8,DAT_ffff04cb & 1);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04cc | 0x80;
  if ((bStack_124 & 1) == 0) {
    bVar3 = DAT_ffff04cc & 0x7f;
  }
  DAT_ffff04cc = bVar3 | 0x40;
  if ((bStack_128 & 1) == 0) {
    DAT_ffff04cc = bVar3 & 0xbf;
  }
  FUN_00001550();
  puVar1 = puStack_cc;
  FUN_000ab150((DAT_fffeef76 & 0x40) != 0,((int)(char)DAT_fffeef76 & 0x80U) != 0,
               (DAT_ffff064a & 0x40) != 0,(int)_DAT_ffff0d08);
  FUN_000ab758((int)_DAT_ffff0d02,(int)DAT_fffeed47,&DAT_ffff0d0e);
  FUN_000ab784((DAT_ffff04cc & 0x10) != 0,(int)_DAT_fffeeede,(int)_DAT_ffff0d0e);
  FUN_000ab738((int)_DAT_ffff0d10,(int)DAT_fffef473,DAT_fffeeec6 & 1,(DAT_ffff66b1 & 0x10) != 0);
  puStack_cc = puVar1 + 0xe;
  puStack_d0 = puStack_d0 + 2;
  FUN_000a6a3c(0,(int)DAT_ffff0589,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff0552);
  bStack_b8 = DAT_fffeeec1 & 1;
  bStack_b4 = DAT_fffeeec0 & 1;
  puStack_ac = &DAT_ffff0c3e;
  FUN_000a7260(bStack_b8,(int)v_Vehicle_Speed_byte_65A1,bStack_b4,DAT_ffff04ca & 1);
  puStack_a8 = &DAT_ffff0cc6;
  FUN_000aab08(DAT_fffeeec1 & 1,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff0d06,
               (int)_DAT_fffeef10);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04cb | 0x20;
  if ((bStack_118 & 1) == 0) {
    bVar3 = DAT_ffff04cb & 0xdf;
  }
  bVar4 = bVar3 | 0x80;
  if ((bStack_11c & 1) == 0) {
    bVar4 = bVar3 & 0x7f;
  }
  DAT_ffff04cb = bVar4 | 0x40;
  if ((bStack_120 & 1) == 0) {
    DAT_ffff04cb = bVar4 & 0xbf;
  }
  FUN_00001550(uVar2);
  puStack_a4 = &DAT_ffff0c5a;
  FUN_000a5c58((int)_DAT_fffeeede,DAT_ffff04cc & 1,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)_DAT_ffff0d06);
  puStack_a0 = &DAT_ffff0423;
  FUN_000a5974(((int)(char)DAT_ffff03d8 & 0x80U) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)_DAT_ffff0d06,(int)_DAT_fffeeede);
  FUN_000ad44c(DAT_ffff04c8 & 1,(DAT_ffff03d8 & 4) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)_DAT_ffff0d06);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04c8 | 2;
  if ((bStack_114 & 1) == 0) {
    bVar3 = DAT_ffff04c8 & 0xfd;
  }
  DAT_ffff04c8 = bVar3;
  FUN_00001550();
  FUN_000a68b0((DAT_fffef09e & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,DAT_fffeeec0 & 1,
               (int)_DAT_fffeeede);
  FUN_000a5bec(DAT_ffff04cc & 1,(DAT_ffff04cc & 2) != 0,(int)_DAT_ffff0c5c);
  FUN_000ad024((DAT_ffff04c8 & 2) != 0,abStack_110);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04c8 | 4;
  if ((abStack_110[0] & 1) == 0) {
    bVar3 = DAT_ffff04c8 & 0xfb;
  }
  DAT_ffff04c8 = bVar3;
  FUN_00001550(uVar2);
  FUN_000aa2e4(DAT_ffff04cb & 1,(int)_v_Engine_Speed_2994,(int)_v_Atmospheric_Pressure_E6AA,
               (DAT_ffff04cb & 2) != 0);
  FUN_000a69e0((int)_DAT_ffff0c8e,(int)_DAT_ffff0c82,(int)_DAT_ffff0cce,(int)_DAT_ffff0c80);
  FUN_000acc30(DAT_ffff04cc & 1,(int)_DAT_ffff0c5a,(int)_DAT_ffff0c5c,abStack_10c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04cc | 4;
  if ((abStack_10c[0] & 1) == 0) {
    bVar3 = DAT_ffff04cc & 0xfb;
  }
  DAT_ffff04cc = bVar3;
  FUN_00001550(uVar2);
  FUN_000acc5c(DAT_ffff04cc & 1,(int)_DAT_ffff0c5a,(int)_DAT_ffff0c5c,abStack_108);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04cc | 2;
  if ((abStack_108[0] & 1) == 0) {
    bVar3 = DAT_ffff04cc & 0xfd;
  }
  DAT_ffff04cc = bVar3;
  FUN_00001550();
  bStack_9c = DAT_fffeeec6 & 1;
  bStack_98 = DAT_ffff0002 & 1;
  uStack_b0 = (uint)((DAT_fffef3fc & 0x10) != 0);
  FUN_000acc88((DAT_ffff04c8 & 4) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff0d06,
               DAT_fffeeec1 & 1);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04c8 | 0x10;
  if ((bStack_100 & 1) == 0) {
    bVar3 = DAT_ffff04c8 & 0xef;
  }
  DAT_ffff04c8 = bVar3 | 8;
  if ((bStack_104 & 1) == 0) {
    DAT_ffff04c8 = bVar3 & 0xf7;
  }
  FUN_00001550(uVar2);
  FUN_000a5e18((int)_DAT_ffff0c70,(DAT_ffff04c8 & 0x10) != 0,(int)_DAT_ffff2ae4,(int)_DAT_fffeeed6);
  FUN_000a7ce8(DAT_fffeeec1 & 1,(int)v_Vehicle_Speed_byte_65A1,DAT_ffff03ab & 1,
               (int)v_Coolant_Temperature_29A5);
  FUN_000aa454((int)_DAT_ffff0ce2,(int)_DAT_ffff0cdc,(int)_DAT_ffff0cc6,(int)_DAT_ffff0c7e);
  FUN_000acf74((DAT_ffff04c8 & 0x10) != 0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff2a0f | 0x80;
  if ((bStack_fc & 1) == 0) {
    bVar3 = DAT_ffff2a0f & 0x7f;
  }
  DAT_ffff2a0f = bVar3;
  FUN_00001550(uVar2);
  FUN_000adde0(DAT_ffff04cc & 1,(DAT_ffff04cc & 4) != 0,1,abStack_f8);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04cc | 0x10;
  if ((abStack_f8[0] & 1) == 0) {
    bVar3 = DAT_ffff04cc & 0xef;
  }
  puStack_28 = &DAT_ffff0cea;
  DAT_ffff04cc = bVar3;
  FUN_00001550();
  FUN_000ac6ec((DAT_ffff04c8 & 0x10) != 0,(DAT_ffff04c8 & 4) != 0,(int)_DAT_ffff0d06,
               (int)_v_Engine_Speed_OBD_copy_2ADA);
  FUN_000a8210();
  FUN_000a5b24((DAT_ffff04c8 & 0x10) != 0,(DAT_ffff04c8 & 4) != 0,(int)_DAT_ffff0d24);
  FUN_000ad07c(DAT_fffeeec0 & 1,(DAT_fffee710 & 0x20) != 0,(int)v_Vehicle_Speed_byte_65A1,
               (int)_DAT_fffeef10);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04c9 | 1;
  if ((bStack_f4 & 1) == 0) {
    bVar3 = DAT_ffff04c9 & 0xfe;
  }
  DAT_ffff04c9 = bVar3;
  FUN_00001550();
  FUN_000a6104((int)_DAT_fffee6f8,(DAT_ffff04c8 & 4) != 0,(DAT_ffff04c8 & 0x10) != 0,
               (int)_v_Engine_Speed_OBD_copy_2ADA);
  FUN_000ad358(DAT_ffff04c9 & 1,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff2ae2,
               DAT_fffeeec1 & 1);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04c9 | 2;
  if ((bStack_f0 & 1) == 0) {
    bVar3 = DAT_ffff04c9 & 0xfd;
  }
  DAT_ffff04c9 = bVar3;
  FUN_00001550();
  FUN_000a5fa8((DAT_ffff04c8 & 4) != 0,(int)_DAT_ffff0c72,1,(int)_DAT_ffff0cd6);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04c9 | 0x40;
  if ((bStack_e0 & 1) == 0) {
    bVar3 = DAT_ffff04c9 & 0xbf;
  }
  bVar4 = bVar3 | 0x20;
  if ((bStack_e4 & 1) == 0) {
    bVar4 = bVar3 & 0xdf;
  }
  bVar3 = bVar4 | 0x10;
  if ((bStack_e8 & 1) == 0) {
    bVar3 = bVar4 & 0xef;
  }
  DAT_ffff04c9 = bVar3 | 8;
  if ((bStack_ec & 1) == 0) {
    DAT_ffff04c9 = bVar3 & 0xf7;
  }
  FUN_00001550(uVar2);
  FUN_000a81ec();
  puVar1 = puStack_a0;
  FUN_000a5840((DAT_ffff04c8 & 4) != 0,(int)_DAT_ffff0c72,(int)_DAT_ffff0c70,(int)_DAT_ffff0c76);
  puStack_a0 = puVar1 + 0xa1;
  puStack_a4 = puStack_a4 + 0x1a;
  FUN_000a6764((DAT_ffff04c8 & 4) != 0,(int)_DAT_ffff0c70,(DAT_ffff04c8 & 0x10) != 0,
               (int)_DAT_ffff0d24);
  FUN_000aa3e8((int)_DAT_ffff0cd6,(int)_DAT_ffff0c70,(int)_DAT_ffff0cca);
  puStack_a8 = puStack_a8 + 0x12;
  FUN_000aa4c0((int)_DAT_ffff0cca,(int)_DAT_ffff0cd4,(int)_DAT_ffff0ccc,(DAT_ffff0567 & 4) != 0);
  puStack_ac = puStack_ac + 0xc;
  FUN_000a54dc((int)_DAT_ffff0cd8);
  cStack_94 = '\x01' - ((DAT_ffff04c8 & 4) == 0);
  bStack_90 = DAT_ffff368d & 1;
  cStack_8c = '\x01' - ((DAT_ffff66b1 & 0x10) == 0);
  uStack_88 = 0;
  cStack_84 = '\x01' - ((DAT_ffff0001 & 0x10) == 0);
  cStack_80 = '\x01' - ((DAT_ffff04c8 & 0x10) == 0);
  cStack_7c = '\x01' - ((DAT_fffef09e & 2) == 0);
  cStack_78 = '\x01' - ((DAT_fffef32a & 2) == 0);
  cStack_74 = '\x01' - ((DAT_fffef3fc & 0x10) == 0);
  cStack_70 = '\x01' - (((int)(char)DAT_fffef32a & 0x80U) == 0);
  local_6c = 1;
  cStack_68 = '\x01' - (((int)DAT_fffef1d4 & 0x80U) == 0);
  bStack_64 = DAT_fffef066 & 1;
  uStack_60 = 0;
  cStack_5c = '\x01' - ((DAT_ffff064a & 0x40) == 0);
  cStack_58 = '\x01' - ((DAT_fffef09e & 0x40) == 0);
  cStack_54 = '\x01' - ((DAT_fffef330 & 0x40) == 0);
  cStack_50 = '\x01' - ((DAT_fffef09e & 0x20) == 0);
  cStack_4c = '\x01' - ((DAT_fffef330 & 0x20) == 0);
  uStack_48 = 0;
  cStack_44 = '\x01' - ((DAT_fffef152 & 0x20) == 0);
  bStack_40 = DAT_ffff04cb & 1;
  cStack_3c = '\x01' - ((DAT_fffeef76 & 0x40) == 0);
  cStack_38 = '\x01' - (((int)(char)DAT_fffee710 & 0x80U) == 0);
  bStack_34 = DAT_fffef331 & 1;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_000ad770((int)cStack_94,bStack_90,(int)cStack_8c,0);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04c8 | 0x40;
  if ((bStack_d8 & 1) == 0) {
    bVar3 = DAT_ffff04c8 & 0xbf;
  }
  DAT_ffff04c8 = bVar3 | 0x80;
  if ((bStack_dc & 1) == 0) {
    DAT_ffff04c8 = bVar3 & 0x7f;
  }
  FUN_00001550(uVar2);
  FUN_000ad6cc((int)_DAT_fffeeee0,(int)_DAT_fffeeede,DAT_ffff368d & 1,(int)_DAT_ffff0c70);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04c8 | 0x20;
  if ((bStack_d4 & 1) == 0) {
    bVar3 = DAT_ffff04c8 & 0xdf;
  }
  DAT_ffff04c8 = bVar3;
  FUN_00001550(uVar2);
  FUN_000ac1f4(DAT_ffff368d & 1,(int)_DAT_ffff38ea,(DAT_ffff04c8 & 0x40) != 0,(int)_DAT_ffff0c70);
  FUN_000ac03c(DAT_ffff368d & 1,(int)_DAT_ffff38e8,(DAT_ffff04c8 & 0x40) != 0,(int)_DAT_ffff0c70);
  FUN_000ac3ac(DAT_ffff368d & 1,(int)_DAT_ffff38ec,(DAT_ffff04c8 & 0x40) != 0,(int)_DAT_ffff0c70);
  FUN_000ac564(DAT_ffff368d & 1,(int)_DAT_ffff0d22,(DAT_ffff04c8 & 0x40) != 0,(int)_DAT_ffff0c70);
  FUN_000a7b64((DAT_ffff04c8 & 0x20) != 0,(int)DAT_ffff04c6,(int)_DAT_ffff38e6);
  FUN_000a77ac(0,(int)DAT_ffff0589,(DAT_ffff064a & 0x40) != 0);
  FUN_000a7970((DAT_ffff04c8 & 0x20) != 0,DAT_ffff368d & 1,(int)_DAT_ffff0ca4,
               ((int)(char)DAT_fffee710 & 0x80U) != 0);
  FUN_000a76a0(0,(int)_DAT_ffff0ca6,&DAT_ffff0ca4);
  return;
}

