
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c5934(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar4;
  undefined4 uVar3;
  byte bVar5;
  byte local_dc [4];
  byte abStack_d8 [4];
  byte abStack_d4 [4];
  byte abStack_d0 [4];
  byte bStack_cc;
  byte bStack_c8;
  byte bStack_c4;
  byte bStack_c0;
  byte bStack_bc;
  byte bStack_b8;
  byte bStack_b4;
  byte bStack_b0;
  byte abStack_ac [4];
  byte abStack_a8 [4];
  byte abStack_a4 [4];
  byte abStack_a0 [4];
  byte abStack_9c [4];
  byte bStack_98;
  byte bStack_94;
  byte abStack_90 [4];
  byte abStack_8c [4];
  byte bStack_88;
  byte bStack_84;
  byte bStack_80;
  byte abStack_7c [4];
  byte abStack_78 [4];
  byte abStack_74 [4];
  byte abStack_70 [4];
  byte bStack_6c;
  byte bStack_68;
  byte bStack_64;
  byte abStack_60 [4];
  byte abStack_5c [4];
  byte abStack_58 [4];
  byte bStack_54;
  byte bStack_50;
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte abStack_44 [4];
  byte bStack_40;
  byte abStack_3c [4];
  byte abStack_38 [4];
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff050e;
  puStack_34 = &DAT_ffff050e;
  FUN_000c3350();
  FUN_000c3480((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(DAT_fffef310 & 4) != 0,
               &DAT_ffff055b);
  FUN_000c34bc((int)_DAT_ffff1282,&DAT_ffff055d);
  FUN_000c43b0((int)_DAT_ffff0abc,&DAT_ffff0562);
  FUN_000c46b0((int)_v_Engine_Speed_2994,&DAT_ffff0eda);
  FUN_000c47c0(&DAT_ffff0566);
  FUN_000c9aac((int)DAT_ffff0584,(int)DAT_ffff0586,(int)DAT_ffff0588,&DAT_ffff0587);
  puStack_30 = &DAT_ffff0ef0;
  FUN_000c9d0c();
  FUN_000c9d14((DAT_fffef37e & 2) != 0,(DAT_fffef37e & 4) != 0,&DAT_ffff058c);
  FUN_000c9d44((int)_DAT_ffff0afe,&DAT_ffff058d);
  FUN_000c9dc4((int)_DAT_ffff0ada,(int)_DAT_ffff0ab4,&DAT_ffff058e);
  FUN_000c9e68((int)_DAT_ffff0ada,&DAT_ffff0f0a);
  FUN_000c9e7c((int)_DAT_ffff0ada,&DAT_ffff0590);
  FUN_000c9e38((int)_DAT_ffff0ada,&DAT_ffff058f);
  FUN_000c9f4c((int)DAT_ffffab41,&DAT_ffff0592);
  FUN_000c9f50((int)_DAT_ffff0a1e,&DAT_ffff0f10);
  FUN_000ca494((DAT_fffef32a & 8) != 0,(int)_DAT_fffee6f8,&DAT_ffff059a);
  FUN_000ca458((DAT_fffef32a & 8) != 0,(int)_DAT_fffee6f8,&DAT_ffff0599);
  FUN_000ca500((int)_DAT_fffef408,&DAT_ffff059b);
  FUN_000cad5c((int)DAT_ffff3669,&DAT_ffff05a3);
  FUN_000caf68((int)_DAT_ffff0a8e,&DAT_ffff05a6);
  FUN_000caf78((int)_DAT_fffeeed6,(int)_DAT_ffff0b18,&DAT_ffff05a7);
  FUN_000cb2cc((int)_DAT_ffff0a8e,&DAT_ffff05ac);
  puStack_2c = &DAT_ffff0f26;
  FUN_000cb52c((int)_DAT_ffff0ab6,&DAT_ffff0f28);
  FUN_000cb54c((int)_DAT_ffff0e90,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff03a0,&DAT_ffff0f2c
              );
  FUN_000cb664((int)_DAT_ffff0e90,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff03a0);
  FUN_000cb99c((int)_DAT_ffff0a70,&DAT_ffff0f38);
  FUN_000cb9bc((int)_DAT_ffff0ab4);
  FUN_000cb9d0((int)DAT_fffee6fa,(DAT_fffef32a & 2) != 0,&DAT_ffff05b1);
  FUN_000cc24c(local_dc);
  FUN_00001550(0xf0);
  bVar4 = DAT_fffeed34 | 4;
  if ((local_dc[0] & 1) == 0) {
    bVar4 = DAT_fffeed34 & 0xfb;
  }
  DAT_fffeed34 = bVar4;
  FUN_00001550();
  FUN_000cc454((DAT_fffee710 & 0x20) != 0,abStack_d8);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_fffeed34 | 0x40;
  if ((abStack_d8[0] & 1) == 0) {
    bVar4 = DAT_fffeed34 & 0xbf;
  }
  DAT_fffeed34 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cc458(abStack_d4);
  FUN_00001550(0xf0);
  bVar4 = DAT_fffeed3c | 4;
  if ((abStack_d4[0] & 1) == 0) {
    bVar4 = DAT_fffeed3c & 0xfb;
  }
  DAT_fffeed3c = bVar4;
  FUN_00001550();
  FUN_000cc4c8(((int)(char)DAT_fffee710 & 0x80U) != 0,(int)v_Coolant_Temperature_29A5,abStack_d0);
  FUN_00001550(0xf0);
  bVar4 = DAT_fffef318 | 1;
  if ((abStack_d0[0] & 1) == 0) {
    bVar4 = DAT_fffef318 & 0xfe;
  }
  DAT_fffef318 = bVar4;
  FUN_00001550();
  FUN_000cc4e8((DAT_fffef331 & 0x20) != 0);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_fffef316 | 0x10;
  if ((bStack_cc & 1) == 0) {
    bVar4 = DAT_fffef316 & 0xef;
  }
  DAT_fffef316 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cc500(DAT_fffef3ea & 1);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0574 | 8;
  if ((bStack_c8 & 1) == 0) {
    bVar4 = DAT_ffff0574 & 0xf7;
  }
  DAT_ffff0574 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cc58c(DAT_fffef3ea & 1);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0574 | 0x10;
  if ((bStack_c4 & 1) == 0) {
    bVar4 = DAT_ffff0574 & 0xef;
  }
  DAT_ffff0574 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cc618(DAT_fffef3ea & 1,(DAT_fffef3ea & 2) != 0,(DAT_fffef3ea & 8) != 0,
               (DAT_fffef3ea & 4) != 0);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0574 | 0x20;
  if ((bStack_c0 & 1) == 0) {
    bVar4 = DAT_ffff0574 & 0xdf;
  }
  DAT_ffff0574 = bVar4;
  FUN_00001550(uVar3);
  FUN_000ccf30(DAT_fffeeec1 & 1,(DAT_fffeef76 & 8) != 0,DAT_fffef560 & 1,
               (int)_v_Control_Module_Voltage_EF18);
  FUN_00001550(0xf0);
  bVar4 = DAT_fffef312 | 1;
  if ((bStack_bc & 1) == 0) {
    bVar4 = DAT_fffef312 & 0xfe;
  }
  DAT_fffef312 = bVar4;
  FUN_00001550();
  FUN_000cd150((DAT_fffeeec2 & 2) != 0,(DAT_fffef316 & 2) != 0,(int)DAT_ffff0588);
  FUN_00001550(0xf0);
  bVar4 = DAT_fffeed3c | 2;
  if ((bStack_b4 & 1) == 0) {
    bVar4 = DAT_fffeed3c & 0xfd;
  }
  bVar5 = DAT_ffff056a | 4;
  if ((bStack_b8 & 1) == 0) {
    bVar5 = DAT_ffff056a & 0xfb;
  }
  DAT_fffeed3c = bVar4;
  DAT_ffff056a = bVar5;
  FUN_00001550();
  FUN_000cd3cc((DAT_fffef319 & 2) != 0,1,(int)DAT_ffff0588,0);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff056a | 8;
  if ((bStack_b0 & 1) == 0) {
    bVar4 = DAT_ffff056a & 0xf7;
  }
  DAT_ffff056a = bVar4;
  FUN_00001550();
  FUN_000cd404((DAT_ffff6559 & 8) != 0,(DAT_fffef37e & 2) != 0,abStack_ac);
  FUN_00001550(0xf0);
  bVar4 = DAT_fffef317 | 1;
  if ((abStack_ac[0] & 1) == 0) {
    bVar4 = DAT_fffef317 & 0xfe;
  }
  DAT_fffef317 = bVar4;
  FUN_00001550();
  FUN_000cd564((DAT_fffef152 & 0x10) != 0,abStack_a8);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff0571 | 2;
  if ((abStack_a8[0] & 1) == 0) {
    bVar4 = DAT_ffff0571 & 0xfd;
  }
  DAT_ffff0571 = bVar4;
  FUN_00001550();
  FUN_000cd568((DAT_ffff03d8 & 2) != 0,abStack_a4);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_fffef314 | 0x80;
  if ((abStack_a4[0] & 1) == 0) {
    bVar4 = DAT_fffef314 & 0x7f;
  }
  DAT_fffef314 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cd56c((int)DAT_ffff03cf,abStack_a0);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_fffef314 | 0x40;
  if ((abStack_a0[0] & 1) == 0) {
    bVar4 = DAT_fffef314 & 0xbf;
  }
  DAT_fffef314 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cd80c((int)_DAT_fffeeede,abStack_9c);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0577 | 0x40;
  if ((abStack_9c[0] & 1) == 0) {
    bVar4 = DAT_ffff0577 & 0xbf;
  }
  DAT_ffff0577 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cd85c((int)DAT_ffff0584);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff0577 | 8;
  if ((bStack_98 & 1) == 0) {
    bVar4 = DAT_ffff0577 & 0xf7;
  }
  DAT_ffff0577 = bVar4;
  FUN_00001550();
  FUN_000cd910((DAT_fffef3fc & 2) != 0,(DAT_fffef3fc & 4) != 0,1,(int)DAT_ffff0585);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_fffef312 | 0x80;
  if ((bStack_94 & 1) == 0) {
    bVar4 = DAT_fffef312 & 0x7f;
  }
  DAT_fffef312 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cd9f0((int)DAT_ffff66b0,(int)DAT_ffff29a7,(int)v_Coolant_Temperature_29A5,abStack_90);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_fffeed34 | 0x20;
  if ((abStack_90[0] & 1) == 0) {
    bVar4 = DAT_fffeed34 & 0xdf;
  }
  DAT_fffeed34 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cdd5c(DAT_fffeeec1 & 1,(DAT_fffeef76 & 8) != 0,(int)_v_Control_Module_Voltage_EF18,
               abStack_8c);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_fffeed35 | 4;
  if ((abStack_8c[0] & 1) == 0) {
    bVar4 = DAT_fffeed35 & 0xfb;
  }
  DAT_fffeed35 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cddf8((int)_v_Engine_Speed_2994);
  FUN_00001550(0xf0);
  bVar4 = DAT_fffeed38 | 4;
  if ((bStack_88 & 1) == 0) {
    bVar4 = DAT_fffeed38 & 0xfb;
  }
  DAT_fffeed38 = bVar4;
  FUN_00001550();
  FUN_000ce0a0((DAT_fffef2d0 & 0x40) != 0,(DAT_ffff056c & 0x20) != 0,(DAT_ffff056c & 8) != 0,
               (DAT_fffef2d0 & 0x10) != 0);
  FUN_00001550(0xf0);
  bVar4 = DAT_fffef317 | 0x10;
  if ((bStack_84 & 1) == 0) {
    bVar4 = DAT_fffef317 & 0xef;
  }
  DAT_fffef317 = bVar4;
  FUN_00001550();
  FUN_000ce0d8((DAT_ffff0000 & 0x20) != 0,(int)_DAT_ffff0efa,1);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0578 | 2;
  if ((bStack_80 & 1) == 0) {
    bVar4 = DAT_ffff0578 & 0xfd;
  }
  DAT_ffff0578 = bVar4;
  FUN_00001550(uVar3);
  FUN_000ce27c(abStack_7c);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_fffeed35 | 0x10;
  if ((abStack_7c[0] & 1) == 0) {
    bVar4 = DAT_fffeed35 & 0xef;
  }
  DAT_fffeed35 = bVar4;
  FUN_00001550(uVar3);
  FUN_000ce284((int)DAT_fffef6ce,abStack_78);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_fffeed3c | 0x40;
  if ((abStack_78[0] & 1) == 0) {
    bVar4 = DAT_fffeed3c & 0xbf;
  }
  DAT_fffeed3c = bVar4;
  FUN_00001550(uVar3);
  FUN_000ce56c((int)DAT_ffff29b7,abStack_74);
  FUN_00001550(0xf0);
  bVar4 = DAT_fffef318 | 0x80;
  if ((abStack_74[0] & 1) == 0) {
    bVar4 = DAT_fffef318 & 0x7f;
  }
  DAT_fffef318 = bVar4;
  FUN_00001550();
  FUN_000ce5ac((DAT_fffef32d & 0x20) != 0,(int)_DAT_fffef328,abStack_70);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0577 | 0x20;
  if ((abStack_70[0] & 1) == 0) {
    bVar4 = DAT_ffff0577 & 0xdf;
  }
  DAT_ffff0577 = bVar4;
  FUN_00001550(uVar3);
  FUN_000ce600((int)v_Coolant_Temperature_29A5,((int)(char)DAT_fffee710 & 0x80U) != 0);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_fffef318 | 0x10;
  if ((bStack_6c & 1) == 0) {
    bVar4 = DAT_fffef318 & 0xef;
  }
  DAT_fffef318 = bVar4;
  FUN_00001550(uVar3);
  FUN_000c3950((int)DAT_ffff0582,DAT_fffef364 & 1,(DAT_fffeef76 & 0x40) != 0);
  FUN_000c39b8(DAT_fffef364 & 1,(DAT_fffeef76 & 0x40) != 0,(int)DAT_fffef5b4);
  FUN_000c8904(0,(int)DAT_fffef5b4);
  FUN_000cd690((int)DAT_ffff0582,(int)DAT_fffef5b4,((int)(char)DAT_fffeef76 & 0x80U) != 0,0);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff057c | 1;
  if ((bStack_68 & 1) == 0) {
    bVar4 = DAT_ffff057c & 0xfe;
  }
  DAT_ffff057c = bVar4;
  FUN_00001550();
  puVar2 = puStack_2c;
  puVar1 = puStack_30;
  FUN_000c2d6c((int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff3669,DAT_ffff03d8 & 1,
               (int)_DAT_ffff0ada);
  puStack_2c = puVar2 + 10;
  FUN_000c43ec((int)_DAT_ffff0f0a,(int)_v_Engine_Speed_2994,(int)_DAT_ffff0f56,(int)_DAT_fffeeee2);
  puStack_34 = puStack_34 + 0x78;
  FUN_000c9a58((int)DAT_ffff0584,(int)DAT_ffff0588);
  puStack_30 = puVar1 + 0x10;
  FUN_000c9d74((DAT_fffee710 & 0x20) != 0,(int)_DAT_ffff0a40,(int)_DAT_ffff0f0a);
  FUN_000cc41c((DAT_ffff056f & 0x10) != 0,(DAT_ffff056f & 4) != 0,DAT_fffef08a & 1,
               (DAT_fffef317 & 0x10) != 0);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff057a | 0x10;
  if ((bStack_64 & 1) == 0) {
    bVar4 = DAT_ffff057a & 0xef;
  }
  DAT_ffff057a = bVar4;
  FUN_00001550();
  FUN_000cd830((DAT_ffff0577 & 0x40) != 0,(int)_v_Accelerator_Pedal_Angle_EEF8,abStack_60);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff056a | 2;
  if ((abStack_60[0] & 1) == 0) {
    bVar4 = DAT_ffff056a & 0xfd;
  }
  DAT_ffff056a = bVar4;
  FUN_00001550(uVar3);
  FUN_000cd8c4((int)DAT_ffff0587,abStack_5c);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0573 | 1;
  if ((abStack_5c[0] & 1) == 0) {
    bVar4 = DAT_ffff0573 & 0xfe;
  }
  DAT_ffff0573 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cd8e4((int)DAT_ffff0587,abStack_58);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0573 | 2;
  if ((abStack_58[0] & 1) == 0) {
    bVar4 = DAT_ffff0573 & 0xfd;
  }
  DAT_ffff0573 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cd904((int)DAT_ffff0587);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff0573 | 4;
  if ((bStack_54 & 1) == 0) {
    bVar4 = DAT_ffff0573 & 0xfb;
  }
  DAT_ffff0573 = bVar4;
  FUN_00001550();
  FUN_000cdab8((int)DAT_ffff66b0,(int)_DAT_ffff0abc,(int)_DAT_fffeed4c,(int)DAT_fffef2e9);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_fffef317 | 8;
  if ((bStack_50 & 1) == 0) {
    bVar4 = DAT_fffef317 & 0xf7;
  }
  DAT_fffef317 = bVar4;
  FUN_00001550(uVar3);
  FUN_000c3888((int)DAT_ffff0582,DAT_fffef364 & 1,((int)(char)DAT_fffeef76 & 0x80U) != 0,
               DAT_ffff057c & 1);
  FUN_000c42a0(0,(int)DAT_ffff057e,(int)_DAT_fffef0da,(int)DAT_ffff0587);
  FUN_000c8724(0,(int)DAT_ffff0587,(int)DAT_fffef5b4,&DAT_ffff0ee8);
  FUN_000c8770(0,(int)DAT_ffff0587,(int)DAT_fffef5b4,&DAT_ffff0eec);
  puStack_28 = &DAT_ffff050e;
  FUN_000c893c((int)DAT_ffff0587,0,&DAT_ffff057f);
  FUN_000c9e14((int)_DAT_ffff0f26,(int)DAT_ffff058f,&DAT_ffff0f06);
  FUN_000cd878((int)DAT_ffff0586,abStack_4c);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0577 | 2;
  if ((abStack_4c[0] & 1) == 0) {
    bVar4 = DAT_ffff0577 & 0xfd;
  }
  DAT_ffff0577 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cd898((int)DAT_ffff0586,abStack_48);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff0577 | 4;
  if ((abStack_48[0] & 1) == 0) {
    bVar4 = DAT_ffff0577 & 0xfb;
  }
  DAT_ffff0577 = bVar4;
  FUN_00001550(uVar3);
  FUN_000cd8b8((int)DAT_ffff0586,abStack_44);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff0577 | 1;
  if ((abStack_44[0] & 1) == 0) {
    bVar4 = DAT_ffff0577 & 0xfe;
  }
  DAT_ffff0577 = bVar4;
  FUN_00001550();
  FUN_000c8968(0,(int)DAT_fffef5b4,(int)DAT_ffff057f);
  FUN_000cd5c8(0,(int)_v_Accelerator_Pedal_Angle_EEF8,(int)_DAT_fffeeed4,(DAT_fffef316 & 2) != 0);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff057c | 2;
  if ((bStack_40 & 1) == 0) {
    bVar4 = DAT_ffff057c & 0xfd;
  }
  DAT_ffff057c = bVar4;
  FUN_00001550();
  FUN_000c4328(0,(int)DAT_ffff0580,(int)_DAT_fffef0da);
  FUN_000c89a0(0,DAT_fffef317 & 1,(DAT_fffef06e & 2) != 0);
  FUN_000c3eb0(0,(int)DAT_ffff0582,(int)_v_Engine_Speed_OBD_copy_2ADA);
  FUN_000c83d8(0,(int)DAT_ffff0582,(int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_fffef152 & 0x20) != 0);
  FUN_000c3fa8(0,(int)DAT_ffff0582,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff0ed0);
  FUN_000c4124(0,(int)DAT_ffff0582,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff0ed0);
  FUN_000c8634(0,(int)DAT_ffff0582,(int)_DAT_ffff0ee0,(int)_DAT_ffff0eec);
  FUN_000c87bc(0,(int)DAT_ffff0582,(int)_DAT_ffff0ee0,(int)_DAT_ffff0eec);
  FUN_000c849c(0,(int)DAT_ffff0582,(int)_DAT_ffff0ed2,(int)_DAT_ffff0ed6);
  FUN_000c8568(0,(int)DAT_ffff0582,(int)_DAT_ffff0ed4,(int)_DAT_ffff0ed8);
  FUN_000ca56c(0,(int)DAT_ffff0582,(int)DAT_ffff057e);
  puStack_28 = puStack_28 + 0x90;
  FUN_000ca770(0,(DAT_fffeeec2 & 2) != 0,(int)DAT_ffff0582,(int)DAT_ffff059d);
  FUN_000cd5ac(0,(int)DAT_ffff059e,abStack_3c);
  FUN_00001550(0xf0);
  bVar4 = DAT_fffef317 | 4;
  if ((abStack_3c[0] & 1) == 0) {
    bVar4 = DAT_fffef317 & 0xfb;
  }
  DAT_fffef317 = bVar4;
  FUN_00001550();
  FUN_000cd724(0,(int)DAT_ffff059e,abStack_38);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_fffef317 | 2;
  if ((abStack_38[0] & 1) == 0) {
    bVar4 = DAT_fffef317 & 0xfd;
  }
  DAT_fffef317 = bVar4;
  FUN_00001550(uVar3);
  return;
}

