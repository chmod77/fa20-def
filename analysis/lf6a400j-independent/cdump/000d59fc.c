
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d59fc(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte local_ec;
  byte bStack_e8;
  byte bStack_e4;
  byte bStack_e0;
  byte bStack_dc;
  byte bStack_d8;
  byte bStack_d4;
  byte bStack_d0;
  byte bStack_cc;
  byte bStack_c8;
  byte abStack_c4 [4];
  byte abStack_c0 [4];
  byte abStack_bc [4];
  byte abStack_b8 [4];
  byte abStack_b4 [4];
  byte bStack_b0;
  byte bStack_ac;
  byte bStack_a8;
  byte bStack_a4;
  byte bStack_a0;
  byte bStack_9c;
  byte bStack_98;
  byte bStack_94;
  byte bStack_90;
  byte bStack_8c;
  byte abStack_88 [4];
  byte abStack_84 [4];
  byte bStack_80;
  byte bStack_7c;
  byte bStack_78;
  byte bStack_74;
  byte bStack_70;
  byte abStack_6c [4];
  byte abStack_68 [4];
  byte abStack_64 [4];
  byte abStack_60 [4];
  byte abStack_5c [4];
  byte abStack_58 [4];
  byte bStack_54;
  byte bStack_50;
  byte bStack_4c;
  byte bStack_48;
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte bStack_34;
  byte abStack_30 [4];
  byte abStack_2c [4];
  char cStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0f56;
  FUN_000d6bfc(DAT_fffef050 & 1,(int)DAT_ffff299c,(int)v_Coolant_Temperature_29A5,(int)_DAT_ffff102c
              );
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0664 | 8;
  if ((bStack_c8 & 1) == 0) {
    bVar2 = DAT_ffff0664 & 0xf7;
  }
  bVar3 = DAT_ffff0665 | 2;
  if ((bStack_cc & 1) == 0) {
    bVar3 = DAT_ffff0665 & 0xfd;
  }
  bVar4 = bVar3 | 4;
  if ((bStack_d0 & 1) == 0) {
    bVar4 = bVar3 & 0xfb;
  }
  bVar3 = bVar4 | 8;
  if ((bStack_d4 & 1) == 0) {
    bVar3 = bVar4 & 0xf7;
  }
  bVar4 = bVar3 | 0x10;
  if ((bStack_d8 & 1) == 0) {
    bVar4 = bVar3 & 0xef;
  }
  bVar3 = bVar4 | 0x20;
  if ((bStack_dc & 1) == 0) {
    bVar3 = bVar4 & 0xdf;
  }
  bVar4 = bVar3 | 0x40;
  if ((bStack_e0 & 1) == 0) {
    bVar4 = bVar3 & 0xbf;
  }
  DAT_ffff0665 = bVar4 | 0x80;
  if ((bStack_e4 & 1) == 0) {
    DAT_ffff0665 = bVar4 & 0x7f;
  }
  bVar3 = DAT_ffff0666 | 1;
  if ((bStack_e8 & 1) == 0) {
    bVar3 = DAT_ffff0666 & 0xfe;
  }
  DAT_ffff0666 = bVar3 | 2;
  if ((local_ec & 1) == 0) {
    DAT_ffff0666 = bVar3 & 0xfd;
  }
  DAT_ffff0664 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d76dc(abStack_c4);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0664 | 1;
  if ((abStack_c4[0] & 1) == 0) {
    bVar2 = DAT_ffff0664 & 0xfe;
  }
  DAT_ffff0664 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d76e4(abStack_c0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0664 | 2;
  if ((abStack_c0[0] & 1) == 0) {
    bVar2 = DAT_ffff0664 & 0xfd;
  }
  DAT_ffff0664 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d57d4((int)_DAT_ffff0f56,&DAT_ffff0fbe);
  FUN_000d57f4((int)_DAT_ffff0f56,&DAT_ffff0fc0);
  FUN_000d5814((int)DAT_ffff299c);
  FUN_000d4ee8((int)DAT_ffff66b0,((int)(char)DAT_ffff050e & 0x80U) != 0,(DAT_ffff050e & 0x20) != 0,
               (int)_DAT_ffff0d9c);
  FUN_000d51f4(DAT_fffeeec6 & 1,(int)_DAT_fffeef10,&DAT_ffff0fa8);
  FUN_000d521c(DAT_fffeeec6 & 1,(int)_DAT_fffef2c6,&DAT_ffff0faa);
  FUN_000d6bac(DAT_fffeeec6 & 1,(DAT_fffef32d & 0x20) != 0,(int)_DAT_fffef328,(int)_DAT_fffeeede);
  FUN_000d7638((DAT_ffff0664 & 8) != 0,(int)_v_A_F_Sensor_1_EF96,abStack_bc);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0663 | 4;
  if ((abStack_bc[0] & 1) == 0) {
    bVar2 = DAT_ffff0663 & 0xfb;
  }
  DAT_ffff0663 = bVar2;
  FUN_00001550();
  FUN_000d7688((DAT_ffff0664 & 8) != 0,(int)_v_A_F_Sensor_1_EF96,abStack_b8);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0663 | 8;
  if ((abStack_b8[0] & 1) == 0) {
    bVar2 = DAT_ffff0663 & 0xf7;
  }
  DAT_ffff0663 = bVar2;
  FUN_00001550();
  FUN_000d7a30((DAT_ffff0664 & 8) != 0,(int)_v_A_F_Sensor_1_EF96,abStack_b4);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0664 | 0x40;
  if ((abStack_b4[0] & 1) == 0) {
    bVar2 = DAT_ffff0664 & 0xbf;
  }
  DAT_ffff0664 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d6ee0(DAT_fffef050 & 1,(int)DAT_ffff299c,(int)v_Coolant_Temperature_29A5,(int)_DAT_ffff102c
              );
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0667 | 8;
  if ((bStack_8c & 1) == 0) {
    bVar2 = DAT_ffff0667 & 0xf7;
  }
  bVar3 = DAT_ffff0668 | 1;
  if ((bStack_90 & 1) == 0) {
    bVar3 = DAT_ffff0668 & 0xfe;
  }
  bVar4 = bVar3 | 2;
  if ((bStack_94 & 1) == 0) {
    bVar4 = bVar3 & 0xfd;
  }
  bVar3 = bVar4 | 4;
  if ((bStack_98 & 1) == 0) {
    bVar3 = bVar4 & 0xfb;
  }
  bVar4 = bVar3 | 8;
  if ((bStack_9c & 1) == 0) {
    bVar4 = bVar3 & 0xf7;
  }
  bVar3 = bVar4 | 0x10;
  if ((bStack_a0 & 1) == 0) {
    bVar3 = bVar4 & 0xef;
  }
  bVar4 = bVar3 | 0x20;
  if ((bStack_a4 & 1) == 0) {
    bVar4 = bVar3 & 0xdf;
  }
  bVar3 = bVar4 | 0x40;
  if ((bStack_a8 & 1) == 0) {
    bVar3 = bVar4 & 0xbf;
  }
  DAT_ffff0668 = bVar3 | 0x80;
  if ((bStack_ac & 1) == 0) {
    DAT_ffff0668 = bVar3 & 0x7f;
  }
  bVar3 = DAT_ffff0669 | 1;
  if ((bStack_b0 & 1) == 0) {
    bVar3 = DAT_ffff0669 & 0xfe;
  }
  DAT_ffff0667 = bVar2;
  DAT_ffff0669 = bVar3;
  FUN_00001550(uVar1);
  FUN_000d5444((int)_DAT_ffff0f9c,(int)DAT_ffff3691,&DAT_ffff0fb4);
  FUN_000d6ac8((DAT_fffef32d & 0x20) != 0,(int)_DAT_fffef328,(int)_DAT_ffff0faa,(int)_DAT_ffff0fc4);
  FUN_000d7560((int)_DAT_ffff0fa8,DAT_fffeeec6 & 1,abStack_88);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff066c | 1;
  if ((abStack_88[0] & 1) == 0) {
    bVar2 = DAT_ffff066c & 0xfe;
  }
  DAT_ffff066c = bVar2;
  FUN_00001550();
  FUN_000d7ad8((DAT_ffff0664 & 0x40) != 0,abStack_84);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0664 | 0x80;
  if ((abStack_84[0] & 1) == 0) {
    bVar2 = DAT_ffff0664 & 0x7f;
  }
  DAT_ffff0664 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d7254((int)_DAT_ffff0fc4,(int)_DAT_ffff0faa,DAT_fffeeec6 & 1);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff066b | 2;
  if ((bStack_80 & 1) == 0) {
    bVar2 = DAT_ffff066b & 0xfd;
  }
  DAT_ffff066b = bVar2;
  FUN_00001550();
  FUN_000d546c((DAT_ffff0664 & 8) != 0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0663 | 1;
  if ((bStack_7c & 1) == 0) {
    bVar2 = DAT_ffff0663 & 0xfe;
  }
  DAT_ffff0663 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d5544((DAT_ffff0664 & 8) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0663 | 2;
  if ((bStack_78 & 1) == 0) {
    bVar2 = DAT_ffff0663 & 0xfd;
  }
  DAT_ffff0663 = bVar2;
  FUN_00001550();
  FUN_000d72a4((DAT_ffff0664 & 8) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0663 | 0x10;
  if ((bStack_74 & 1) == 0) {
    bVar2 = DAT_ffff0663 & 0xef;
  }
  DAT_ffff0663 = bVar2;
  FUN_00001550();
  FUN_000d737c((DAT_ffff0664 & 8) != 0,(DAT_ffff0663 & 8) != 0,(DAT_ffff0664 & 0x20) != 0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0663 | 0x20;
  if ((bStack_70 & 1) == 0) {
    bVar2 = DAT_ffff0663 & 0xdf;
  }
  DAT_ffff0663 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d5148((int)_DAT_ffff0fc4,(int)_DAT_ffff0faa,DAT_fffeeec6 & 1,(DAT_ffff066b & 2) != 0);
  FUN_000d7a04((DAT_ffff0664 & 8) != 0,(DAT_ffff0663 & 0x10) != 0,(int)_DAT_ffff0fb6,abStack_6c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0664 | 0x10;
  if ((abStack_6c[0] & 1) == 0) {
    bVar2 = DAT_ffff0664 & 0xef;
  }
  DAT_ffff0664 = bVar2;
  FUN_00001550();
  FUN_000d7aac((DAT_ffff0664 & 8) != 0,(DAT_ffff0663 & 0x20) != 0,(int)_DAT_ffff0fba,abStack_68);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0664 | 0x20;
  if ((abStack_68[0] & 1) == 0) {
    bVar2 = DAT_ffff0664 & 0xdf;
  }
  DAT_ffff0664 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d4f68((int)_DAT_ffff0fc2);
  FUN_000d5834(DAT_fffef050 & 1,(DAT_ffff0664 & 0x10) != 0,(DAT_ffff0664 & 0x40) != 0,
               (int)_DAT_ffff391e);
  FUN_000d58c0(DAT_fffef050 & 1,(DAT_ffff0664 & 0x10) != 0,(DAT_ffff0664 & 0x40) != 0,
               (int)_v_A_F_Sensor_1_EF96);
  FUN_000d58f8(DAT_fffef050 & 1,(DAT_ffff0664 & 0x10) != 0,(DAT_ffff0664 & 0x40) != 0,
               (int)DAT_ffff369d);
  FUN_000d5920(DAT_fffef050 & 1,(DAT_ffff0664 & 0x20) != 0,((int)(char)DAT_ffff0664 & 0x80U) != 0,
               (int)_DAT_ffff3922);
  FUN_000d599c(DAT_fffef050 & 1,(DAT_ffff0664 & 0x20) != 0,((int)(char)DAT_ffff0664 & 0x80U) != 0,
               (int)_v_A_F_Sensor_1_EF96);
  FUN_000d59d4(DAT_fffef050 & 1,(DAT_ffff0664 & 0x20) != 0,((int)(char)DAT_ffff0664 & 0x80U) != 0,
               (int)DAT_ffff369e);
  FUN_000d7218((int)_DAT_ffff0fa0,DAT_fffeeec6 & 1,(int)_DAT_ffff0f9e,abStack_64);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff066b | 4;
  if ((abStack_64[0] & 1) == 0) {
    bVar2 = DAT_ffff066b & 0xfb;
  }
  DAT_ffff066b = bVar2;
  FUN_00001550();
  FUN_000d52c4((DAT_ffff0664 & 0x10) != 0,(DAT_ffff0664 & 0x40) != 0,DAT_fffef050 & 1,&DAT_ffff0660)
  ;
  FUN_000d52ec((DAT_ffff0664 & 0x20) != 0,((int)(char)DAT_ffff0664 & 0x80U) != 0,DAT_fffef050 & 1,
               &DAT_ffff0661);
  FUN_000d79ac((DAT_ffff0664 & 0x10) != 0,(DAT_ffff0664 & 0x40) != 0,DAT_fffef050 & 1,abStack_60);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff066a | 0x40;
  if ((abStack_60[0] & 1) == 0) {
    bVar2 = DAT_ffff066a & 0xbf;
  }
  DAT_ffff066a = bVar2;
  FUN_00001550();
  FUN_000d79d8((DAT_ffff0664 & 0x20) != 0,((int)(char)DAT_ffff0664 & 0x80U) != 0,DAT_fffef050 & 1,
               abStack_5c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff066a | 0x80;
  if ((abStack_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff066a & 0x7f;
  }
  DAT_ffff066a = bVar2;
  FUN_00001550(uVar1);
  FUN_000d4f14((int)_DAT_ffff0fa0,(DAT_ffff066b & 4) != 0,DAT_fffeeec6 & 1,&DAT_ffff0f9e);
  FUN_000d5098((int)_DAT_ffff0f9e,(int)_DAT_ffff0fc4,(int)_DAT_ffff0faa,DAT_fffeeec6 & 1);
  FUN_000d4f50((int)_DAT_ffff0fa4,&DAT_ffff391c);
  FUN_000d4fb8((int)_DAT_ffff391c,(int)_DAT_fffeeed2,(int)_DAT_fffeeef4,&DAT_ffff0fa2);
  FUN_000d5348((int)DAT_ffff66b0,DAT_ffff066b & 1,(int)_DAT_fffef2c6,(int)_DAT_ffff0fa2);
  cStack_28 = '\x01' - ((DAT_ffff0667 & 8) == 0);
  FUN_000d77e0((int)cStack_28,(int)_DAT_ffff0fae,(int)DAT_ffff3691,abStack_58);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0667 | 4;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff0667 & 0xfb;
  }
  DAT_ffff0667 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d7454((int)_DAT_ffff0fae,(int)_DAT_ffff0fbe,(int)_DAT_ffff0fc0,(int)_DAT_ffff0fac);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0667 | 0x10;
  if ((bStack_54 & 1) == 0) {
    bVar2 = DAT_ffff0667 & 0xef;
  }
  DAT_ffff0667 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d758c((int)_DAT_ffff0fb4,(int)_DAT_ffff391c,(int)_DAT_ffff0fa2);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff066b | 1;
  if ((bStack_50 & 1) == 0) {
    bVar2 = DAT_ffff066b & 0xfe;
  }
  DAT_ffff066b = bVar2;
  FUN_00001550();
  FUN_000d76fc((DAT_ffff0667 & 8) != 0,(int)_DAT_ffff0fae,(int)DAT_ffff3691);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0667 | 1;
  if ((bStack_4c & 1) == 0) {
    bVar2 = DAT_ffff0667 & 0xfe;
  }
  DAT_ffff0667 = bVar2;
  FUN_00001550();
  FUN_000d7870((DAT_ffff0667 & 8) != 0,(int)_DAT_ffff0fae,(int)DAT_ffff3691,(DAT_ffff0667 & 4) != 0)
  ;
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0667 | 2;
  if ((bStack_48 & 1) == 0) {
    bVar2 = DAT_ffff0667 & 0xfd;
  }
  DAT_ffff0667 = bVar2;
  FUN_00001550();
  FUN_000d7504((DAT_ffff0667 & 0x10) != 0,abStack_44);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff066d | 1;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff066d & 0xfe;
  }
  DAT_ffff066d = bVar2;
  FUN_00001550();
  FUN_000d76f0((DAT_ffff0667 & 4) != 0,abStack_40);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff066a | 2;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff066a & 0xfd;
  }
  DAT_ffff066a = bVar2;
  FUN_00001550();
  FUN_000d76f8((DAT_ffff0667 & 4) != 0,abStack_3c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff066a | 8;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff066a & 0xf7;
  }
  DAT_ffff066a = bVar2;
  FUN_00001550(uVar1);
  FUN_000d76ec(DAT_ffff0667 & 1,abStack_38);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff066a | 1;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff066a & 0xfe;
  }
  DAT_ffff066a = bVar2;
  FUN_00001550();
  FUN_000d76f4((DAT_ffff0667 & 2) != 0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff066a | 4;
  if ((bStack_34 & 1) == 0) {
    bVar2 = DAT_ffff066a & 0xfb;
  }
  DAT_ffff066a = bVar2;
  FUN_00001550(uVar1);
  FUN_000d5274(DAT_ffff066a & 1,(DAT_ffff066a & 2) != 0,DAT_fffef050 & 1,&DAT_ffff065e);
  FUN_000d529c((DAT_ffff066a & 4) != 0,(DAT_ffff066a & 8) != 0,DAT_fffef050 & 1,&DAT_ffff065f);
  FUN_000d7954(DAT_ffff066a & 1,(DAT_ffff066a & 2) != 0,DAT_fffef050 & 1,abStack_30);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff066a | 0x10;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff066a & 0xef;
  }
  DAT_ffff066a = bVar2;
  FUN_00001550();
  FUN_000d7980((DAT_ffff066a & 4) != 0,(DAT_ffff066a & 8) != 0,DAT_fffef050 & 1,abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff066a | 0x20;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff066a & 0xdf;
  }
  DAT_ffff066a = bVar2;
  FUN_00001550(uVar1);
  return;
}

