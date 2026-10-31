
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f6b24(void)

{
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar1;
  uint uVar5;
  byte local_134;
  byte bStack_130;
  byte bStack_12c;
  byte bStack_128;
  byte bStack_124;
  byte bStack_120;
  byte bStack_11c;
  byte bStack_118;
  byte bStack_114;
  byte bStack_110;
  char cStack_10c;
  byte bStack_108;
  byte bStack_104;
  byte bStack_100;
  byte bStack_fc;
  undefined1 local_f8 [4];
  byte bStack_f4;
  byte bStack_f0;
  byte bStack_ec;
  byte bStack_e8;
  byte bStack_e4;
  byte bStack_e0;
  byte bStack_dc;
  byte bStack_d8;
  byte bStack_d4;
  byte bStack_d0;
  byte bStack_cc;
  byte bStack_c8;
  byte bStack_c4;
  byte bStack_c0;
  byte bStack_bc;
  byte bStack_b8;
  byte bStack_b4;
  byte bStack_b0;
  byte bStack_ac;
  undefined1 local_a8 [4];
  byte bStack_a4;
  byte bStack_a0;
  byte bStack_9c;
  byte bStack_98;
  byte bStack_94;
  byte bStack_90;
  byte bStack_8c;
  byte bStack_88;
  byte bStack_84;
  byte bStack_80;
  byte bStack_7c;
  byte bStack_78;
  byte bStack_74;
  byte bStack_70;
  byte bStack_6c;
  byte bStack_68;
  char cStack_64;
  char cStack_60;
  char cStack_5c;
  undefined1 *puStack_58;
  char cStack_54;
  char cStack_50;
  char cStack_4c;
  char cStack_48;
  char cStack_44;
  char cStack_40;
  char cStack_3c;
  char cStack_38;
  short sStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_fffef258;
  FUN_000ff790(DAT_fffef050 & 1);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff076c | 1;
  if ((local_134 & 1) == 0) {
    bVar2 = DAT_ffff076c & 0xfe;
  }
  DAT_ffff076c = bVar2;
  FUN_00001550();
  cStack_64 = '\x01' - ((DAT_fffef152 & 0x20) == 0);
  cStack_60 = '\x01' - ((DAT_ffff076c & 2) == 0);
  cStack_5c = '\x01' - ((DAT_fffeef76 & 0x40) == 0);
  uStack_30 = (uint)(((int)(char)DAT_ffff0769 & 0x80U) != 0);
  puStack_58 = &DAT_ffff11b6;
  FUN_000f84c0((int)cStack_64,(int)_DAT_fffeef10,(int)_DAT_fffeeee0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff076c | 8;
  if ((bStack_118 & 1) == 0) {
    bVar2 = DAT_ffff076c & 0xf7;
  }
  bVar3 = bVar2 | 0x10;
  if ((bStack_11c & 1) == 0) {
    bVar3 = bVar2 & 0xef;
  }
  bVar2 = bVar3 | 4;
  if ((bStack_120 & 1) == 0) {
    bVar2 = bVar3 & 0xfb;
  }
  bVar3 = DAT_ffff0768 | 0x80;
  if ((bStack_124 & 1) == 0) {
    bVar3 = DAT_ffff0768 & 0x7f;
  }
  bVar4 = bVar2 | 0x40;
  if ((bStack_128 & 1) == 0) {
    bVar4 = bVar2 & 0xbf;
  }
  bVar2 = bVar4 | 0x80;
  if ((bStack_12c & 1) == 0) {
    bVar2 = bVar4 & 0x7f;
  }
  DAT_ffff076c = bVar2 | 0x20;
  if ((bStack_130 & 1) == 0) {
    DAT_ffff076c = bVar2 & 0xdf;
  }
  DAT_ffff0768 = bVar3;
  FUN_00001550();
  cStack_54 = '\x01' - ((DAT_fffef32a & 2) == 0);
  cStack_50 = '\x01' - ((DAT_ffff076c & 2) == 0);
  cStack_4c = '\x01' - ((DAT_fffeeec2 & 2) == 0);
  cStack_48 = '\x01' - (((int)DAT_ffff0770 & 0x80U) == 0);
  uStack_30 = (uint)((DAT_ffff03d8 & 2) != 0);
  FUN_000f8864((DAT_fffeef76 & 8) != 0,((int)(char)DAT_ffff076d & 0x80U) != 0,
               (int)_v_Engine_Speed_OBD_copy_2ADA);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff076d | 0x20;
  if ((bStack_114 & 1) == 0) {
    bVar2 = DAT_ffff076d & 0xdf;
  }
  DAT_ffff076d = bVar2;
  FUN_00001550();
  FUN_000f8ee0((int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_fffef152 & 0x20) != 0,(int)_DAT_fffeeede,
               (int)_DAT_fffef394);
  FUN_000f92cc((DAT_fffeef76 & 8) != 0,((int)(char)DAT_ffff076d & 0x80U) != 0,(int)DAT_ffff0771);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff076f | 0x80;
  if ((bStack_110 & 1) == 0) {
    bVar2 = DAT_ffff076f & 0x7f;
  }
  DAT_ffff076f = bVar2;
  FUN_00001550();
  cStack_44 = '\x01' - (((int)(char)DAT_ffff0769 & 0x80U) == 0);
  cStack_40 = '\x01' - ((DAT_fffef32a & 2) == 0);
  cStack_3c = '\x01' - ((DAT_ffff076c & 2) == 0);
  cStack_38 = '\x01' - ((DAT_fffeeec2 & 2) == 0);
  uStack_2c = (uint)cStack_44;
  FUN_000fbe88((DAT_fffeef76 & 8) != 0,uStack_2c,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (DAT_fffef152 & 0x20) != 0);
  FUN_00001550(0xf0);
  uStack_2c = (uint)cStack_10c;
  bVar2 = DAT_ffff0769 | 0x20;
  if ((uStack_2c & 1) == 0) {
    bVar2 = DAT_ffff0769 & 0xdf;
  }
  DAT_ffff0769 = bVar2;
  FUN_00001550();
  FUN_000fc52c((int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_fffef152 & 0x20) != 0,(int)_DAT_fffeeede,
               (int)_DAT_fffef394);
  FUN_000fc918((DAT_fffeef76 & 8) != 0,((int)(char)DAT_ffff0769 & 0x80U) != 0,(int)DAT_ffff0776,
               (int)_DAT_ffff1208);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff076b | 0x80;
  if ((bStack_108 & 1) == 0) {
    bVar2 = DAT_ffff076b & 0x7f;
  }
  DAT_ffff076b = bVar2;
  FUN_00001550();
  FUN_000f974c((int)DAT_ffff0774,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff11b6);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff076d | 2;
  if ((bStack_fc & 1) == 0) {
    bVar2 = DAT_ffff076d & 0xfd;
  }
  bVar3 = bVar2 | 4;
  if ((bStack_100 & 1) == 0) {
    bVar3 = bVar2 & 0xfb;
  }
  DAT_ffff076d = bVar3 | 8;
  if ((bStack_104 & 1) == 0) {
    DAT_ffff076d = bVar3 & 0xf7;
  }
  FUN_00001550(uVar1);
  bStack_ec = 1 - (((int)(char)DAT_ffff36cc & 0x80U) == 0);
  puStack_58 = puStack_58 + 0x18;
  FUN_000f9970((int)_v_Engine_Speed_OBD_copy_2ADA,DAT_fffef32d & 1,(DAT_ffff076d & 8) != 0);
  sStack_34 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff076e | 0x20;
  if ((bStack_e8 & 1) == 0) {
    bVar2 = DAT_ffff076e & 0xdf;
  }
  bVar3 = DAT_ffff36cc | 0x80;
  if ((bStack_ec & 1) == 0) {
    bVar3 = DAT_ffff36cc & 0x7f;
  }
  DAT_ffff076e = bVar2 | 0x80;
  if ((bStack_f0 & 1) == 0) {
    DAT_ffff076e = bVar2 & 0x7f;
  }
  bVar2 = DAT_ffff076f | 0x40;
  if ((bStack_f4 & 1) == 0) {
    bVar2 = DAT_ffff076f & 0xbf;
  }
  DAT_ffff076f = bVar2;
  DAT_ffff36cc = bVar3;
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xee2e) = local_f8[uVar5];
  }
  FUN_00001550((int)sStack_34);
  bStack_dc = 1 - ((DAT_ffff36cc & 0x40) == 0);
  FUN_000fa124((int)_v_Engine_Speed_OBD_copy_2ADA,DAT_fffef32d & 1,(DAT_ffff076d & 8) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff076e | 0x10;
  if ((bStack_d8 & 1) == 0) {
    bVar2 = DAT_ffff076e & 0xef;
  }
  bVar3 = DAT_ffff36cc | 0x40;
  if ((bStack_dc & 1) == 0) {
    bVar3 = DAT_ffff36cc & 0xbf;
  }
  DAT_ffff076e = bVar2 | 0x40;
  if ((bStack_e0 & 1) == 0) {
    DAT_ffff076e = bVar2 & 0xbf;
  }
  bVar2 = DAT_ffff076f | 0x20;
  if ((bStack_e4 & 1) == 0) {
    bVar2 = DAT_ffff076f & 0xdf;
  }
  DAT_ffff076f = bVar2;
  DAT_ffff36cc = bVar3;
  FUN_00001550();
  FUN_000fa7b0((DAT_fffef152 & 0x20) != 0,(int)_DAT_fffef0da,(int)_v_Engine_Speed_OBD_copy_2ADA);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff076e | 8;
  if ((bStack_d4 & 1) == 0) {
    bVar2 = DAT_ffff076e & 0xf7;
  }
  DAT_ffff076e = bVar2;
  FUN_00001550();
  FUN_000fadc0((DAT_fffef152 & 0x20) != 0,(int)_DAT_fffef0da,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)_DAT_ffff11b6);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff076e | 4;
  if ((bStack_d0 & 1) == 0) {
    bVar2 = DAT_ffff076e & 0xfb;
  }
  DAT_ffff076e = bVar2;
  FUN_00001550(uVar1);
  FUN_000fb3d4((int)_DAT_fffef18e,(int)_DAT_ffff11cc,(int)_DAT_ffff11b6,(int)_DAT_ffff11d8);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff076e | 2;
  if ((bStack_cc & 1) == 0) {
    bVar2 = DAT_ffff076e & 0xfd;
  }
  DAT_ffff076e = bVar2;
  FUN_00001550(uVar1);
  FUN_000fb7ac((int)_DAT_fffef18e,(int)_DAT_ffff11cc);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff076e | 1;
  if ((bStack_c8 & 1) == 0) {
    bVar2 = DAT_ffff076e & 0xfe;
  }
  DAT_ffff076e = bVar2;
  FUN_00001550();
  FUN_000fbb84((DAT_fffef152 & 0x20) != 0,(int)_DAT_ffff11b6);
  FUN_000fbc88();
  FUN_000fbd8c((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff11b6,(int)DAT_ffff0772,
               (int)DAT_ffff0774);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff076d | 1;
  if ((bStack_b8 & 1) == 0) {
    bVar2 = DAT_ffff076d & 0xfe;
  }
  bVar3 = bVar2 | 0x10;
  if ((bStack_bc & 1) == 0) {
    bVar3 = bVar2 & 0xef;
  }
  bVar2 = bVar3 | 0x40;
  if ((bStack_c0 & 1) == 0) {
    bVar2 = bVar3 & 0xbf;
  }
  DAT_ffff076d = bVar2 | 0x80;
  if ((bStack_c4 & 1) == 0) {
    DAT_ffff076d = bVar2 & 0x7f;
  }
  FUN_00001550();
  FUN_000fcd98((int)DAT_ffff0779,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff11b6);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0769 | 2;
  if ((bStack_ac & 1) == 0) {
    bVar2 = DAT_ffff0769 & 0xfd;
  }
  bVar3 = bVar2 | 4;
  if ((bStack_b0 & 1) == 0) {
    bVar3 = bVar2 & 0xfb;
  }
  DAT_ffff0769 = bVar3 | 8;
  if ((bStack_b4 & 1) == 0) {
    DAT_ffff0769 = bVar3 & 0xf7;
  }
  puStack_28 = &DAT_ffff0778;
  FUN_00001550(uVar1);
  bStack_9c = 1 - ((DAT_ffff36cc & 0x20) == 0);
  FUN_000fcfbc((int)_v_Engine_Speed_OBD_copy_2ADA,DAT_fffef32d & 1,(DAT_ffff0769 & 8) != 0,
               (int)DAT_ffff0778);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff076a | 0x20;
  if ((bStack_98 & 1) == 0) {
    bVar2 = DAT_ffff076a & 0xdf;
  }
  bVar3 = DAT_ffff36cc | 0x20;
  if ((bStack_9c & 1) == 0) {
    bVar3 = DAT_ffff36cc & 0xdf;
  }
  DAT_ffff076a = bVar2 | 0x80;
  if ((bStack_a0 & 1) == 0) {
    DAT_ffff076a = bVar2 & 0x7f;
  }
  bVar2 = DAT_ffff076b | 0x40;
  if ((bStack_a4 & 1) == 0) {
    bVar2 = DAT_ffff076b & 0xbf;
  }
  DAT_ffff076b = bVar2;
  DAT_ffff36cc = bVar3;
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xedde) = local_a8[uVar5];
  }
  FUN_00001550(uVar1);
  bStack_8c = 1 - ((DAT_ffff36cc & 0x10) == 0);
  FUN_000fd7a8((int)_v_Engine_Speed_OBD_copy_2ADA,DAT_fffef32d & 1,(DAT_ffff0769 & 8) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff076a | 0x10;
  if ((bStack_88 & 1) == 0) {
    bVar2 = DAT_ffff076a & 0xef;
  }
  bVar3 = DAT_ffff36cc | 0x10;
  if ((bStack_8c & 1) == 0) {
    bVar3 = DAT_ffff36cc & 0xef;
  }
  DAT_ffff076a = bVar2 | 0x40;
  if ((bStack_90 & 1) == 0) {
    DAT_ffff076a = bVar2 & 0xbf;
  }
  bVar2 = DAT_ffff076b | 0x20;
  if ((bStack_94 & 1) == 0) {
    bVar2 = DAT_ffff076b & 0xdf;
  }
  DAT_ffff076b = bVar2;
  DAT_ffff36cc = bVar3;
  FUN_00001550();
  FUN_000fdf34((DAT_fffef152 & 0x20) != 0,(int)_DAT_fffef394,(int)_v_Engine_Speed_OBD_copy_2ADA);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff076a | 8;
  if ((bStack_84 & 1) == 0) {
    bVar2 = DAT_ffff076a & 0xf7;
  }
  DAT_ffff076a = bVar2;
  FUN_00001550();
  FUN_000fe55c((DAT_fffef152 & 0x20) != 0,(int)_DAT_fffef394,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)_DAT_ffff11b6);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff076a | 4;
  if ((bStack_80 & 1) == 0) {
    bVar2 = DAT_ffff076a & 0xfb;
  }
  DAT_ffff076a = bVar2;
  FUN_00001550(uVar1);
  FUN_000feb84((int)_DAT_fffef18e,(int)_DAT_ffff121c,(int)_DAT_ffff11b6,
               (int)_v_Exhaust_OCV_Duty_Right_1228);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff076a | 2;
  if ((bStack_7c & 1) == 0) {
    bVar2 = DAT_ffff076a & 0xfd;
  }
  DAT_ffff076a = bVar2;
  FUN_00001550(uVar1);
  FUN_000fef5c((int)_DAT_fffef18e,(int)_DAT_ffff121c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff076a | 1;
  if ((bStack_78 & 1) == 0) {
    bVar2 = DAT_ffff076a & 0xfe;
  }
  DAT_ffff076a = bVar2;
  FUN_00001550();
  FUN_000ff334((DAT_fffef152 & 0x20) != 0,(int)_DAT_ffff11b6);
  FUN_000ff438();
  FUN_000ff53c((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff11b6,(int)DAT_ffff0777,
               (int)DAT_ffff0779);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0769 | 1;
  if ((bStack_68 & 1) == 0) {
    bVar2 = DAT_ffff0769 & 0xfe;
  }
  bVar3 = bVar2 | 0x10;
  if ((bStack_6c & 1) == 0) {
    bVar3 = bVar2 & 0xef;
  }
  bVar2 = bVar3 | 0x40;
  if ((bStack_70 & 1) == 0) {
    bVar2 = bVar3 & 0xbf;
  }
  DAT_ffff0769 = bVar2 | 0x80;
  if ((bStack_74 & 1) == 0) {
    DAT_ffff0769 = bVar2 & 0x7f;
  }
  FUN_00001550(uVar1);
  return;
}

