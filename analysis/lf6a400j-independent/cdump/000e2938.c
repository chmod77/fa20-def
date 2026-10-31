
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e2938(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_70 [4];
  byte bStack_6c;
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
  byte bStack_34;
  byte abStack_30 [4];
  byte bStack_2c;
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0efa;
  FUN_000e3b74((DAT_fffef152 & 0x20) != 0,(int)_DAT_ffff0f56,(int)DAT_ffff2996,local_70);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d4 | 0x40;
  if ((local_70[0] & 1) == 0) {
    bVar2 = DAT_ffff06d4 & 0xbf;
  }
  DAT_ffff06d4 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e3888((int)_v_Accelerator_Pedal_Angle_EEF8);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d6 | 8;
  if ((bStack_6c & 1) == 0) {
    bVar2 = DAT_ffff06d6 & 0xf7;
  }
  DAT_ffff06d6 = bVar2;
  FUN_00001550();
  FUN_000e39cc((DAT_ffff03d8 & 4) != 0,(DAT_fffef152 & 0x20) != 0,(DAT_fffeef76 & 0x40) != 0,
               (int)_DAT_ffff09b8,_v_Engine_Speed_2994,v_Vehicle_Speed_byte_65A1,abStack_68);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d6 | 0x10;
  if ((abStack_68[0] & 1) == 0) {
    bVar2 = DAT_ffff06d6 & 0xef;
  }
  DAT_ffff06d6 = bVar2;
  FUN_00001550();
  FUN_000e3aa0((DAT_ffff06d7 & 0x10) != 0,(DAT_fffef32a & 2) != 0,(DAT_fffef32c & 2) != 0,
               (DAT_fffef32d & 4) != 0,(DAT_fffef32d & 2) != 0,(DAT_fffef3fc & 2) != 0,
               (DAT_fffef3fc & 4) != 0,DAT_fffef32a & 1,abStack_64);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d6 | 2;
  if ((abStack_64[0] & 1) == 0) {
    bVar2 = DAT_ffff06d6 & 0xfd;
  }
  DAT_ffff06d6 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e3d4c((int)_DAT_ffff0f56,(int)DAT_ffff2996,abStack_60);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d6 | 4;
  if ((abStack_60[0] & 1) == 0) {
    bVar2 = DAT_ffff06d6 & 0xfb;
  }
  DAT_ffff06d6 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e3f4c((DAT_fffeef76 & 0x40) != 0,((int)(char)DAT_fffeef76 & 0x80U) != 0,DAT_fffef364 & 1,
               (DAT_ffff056a & 0x20) != 0,_DAT_fffeeede,v_Vehicle_Speed_byte_65A1,
               _v_Control_Module_Voltage_EF18,abStack_5c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d6 | 0x20;
  if ((abStack_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff06d6 & 0xdf;
  }
  DAT_ffff06d6 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e3fe0((int)v_Vehicle_Speed_byte_65A1,(int)_DAT_fffeeede,abStack_58);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d6 | 0x80;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff06d6 & 0x7f;
  }
  DAT_ffff06d6 = bVar2;
  FUN_00001550();
  FUN_000e4044((DAT_ffff03d8 & 4) != 0,(int)_DAT_fffeeede,abStack_54);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d6 | 0x40;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff06d6 & 0xbf;
  }
  DAT_ffff06d6 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e3c08((DAT_fffef330 & 0x40) != 0,((int)(char)DAT_fffef330 & 0x80U) != 0,
               (DAT_fffef09e & 0x40) != 0,(DAT_fffef09e & 0x20) != 0,(DAT_fffef3e1 & 0x20) != 0,
               (DAT_fffeef76 & 8) != 0,(DAT_fffef079 & 0x10) != 0,(DAT_fffef079 & 0x20) != 0,
               abStack_50);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d7 | 0x20;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff06d7 & 0xdf;
  }
  DAT_ffff06d7 = bVar2;
  FUN_00001550();
  FUN_000e3db8(((int)(char)DAT_fffef3aa & 0x80U) != 0,(DAT_fffef3aa & 0x40) != 0,
               (DAT_fffef3aa & 0x20) != 0,(DAT_fffef3aa & 0x10) != 0,DAT_ffff07b3 & 1,
               (DAT_ffff07b3 & 2) != 0,(DAT_ffff07b3 & 4) != 0,abStack_4c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d7 | 0x10;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff06d7 & 0xef;
  }
  DAT_ffff06d7 = bVar2;
  FUN_00001550();
  FUN_000e3dfc((DAT_fffef079 & 0x20) != 0,(DAT_fffef09e & 0x20) != 0,
               ((int)(char)DAT_fffef330 & 0x80U) != 0,(int)DAT_ffff0583,DAT_ffff3694,
               (DAT_fffef330 & 0x40) != 0,DAT_fffef082,(DAT_fffef079 & 0x10) != 0,abStack_48);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d7 | 0x80;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff06d7 & 0x7f;
  }
  DAT_ffff06d7 = bVar2;
  FUN_00001550();
  FUN_000e3ed4((DAT_fffef330 & 0x10) != 0,(DAT_fffef330 & 0x20) != 0,(int)DAT_ffff04e6,
               (int)_DAT_ffff0d44,_DAT_ffff0efa,0,0,1,0,abStack_44);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d7 | 0x40;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff06d7 & 0xbf;
  }
  DAT_ffff06d7 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e37e0((int)_v_Alternator_Duty_10D6,&DAT_ffff10e4);
  FUN_000e3848((int)_DAT_ffff10dc,(int)_DAT_ffff10d2,&DAT_ffff10e8);
  FUN_000e3cbc((int)DAT_fffef0a6,abStack_40);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d5 | 8;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff06d5 & 0xf7;
  }
  DAT_ffff06d5 = bVar2;
  FUN_00001550();
  FUN_000e33c0((DAT_ffff06d4 & 0x40) != 0,(int)DAT_ffff3694,(DAT_fffef330 & 0x40) != 0,&DAT_ffff10d8
              );
  FUN_000e33f4((int)DAT_ffff3694,(DAT_fffef330 & 0x40) != 0,(DAT_ffff06d4 & 0x40) != 0,&DAT_ffff10da
              );
  FUN_000e3250((DAT_ffff06d6 & 0x10) != 0,&DAT_ffff10d0);
  FUN_000e3608((DAT_ffff06d7 & 0x20) != 0,(int)_DAT_ffff10dc,&DAT_ffff10de);
  FUN_000e3c58((int)_DAT_ffff10e8,(int)_DAT_fffeef12,abStack_3c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d5 | 0x80;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff06d5 & 0x7f;
  }
  DAT_ffff06d5 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e3a70((int)_DAT_ffff10e4,(int)_DAT_ffff10d0,abStack_38);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d5 | 0x20;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff06d5 & 0xdf;
  }
  DAT_ffff06d5 = bVar2;
  FUN_00001550();
  FUN_000e3af0(((int)(char)DAT_ffff06d5 & 0x80U) != 0,(int)_DAT_ffff10e6,
               (int)_v_Control_Module_Voltage_EF18);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d5 | 0x40;
  if ((bStack_34 & 1) == 0) {
    bVar2 = DAT_ffff06d5 & 0xbf;
  }
  DAT_ffff06d5 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e408c((int)_DAT_ffff10de,(int)_DAT_ffff3950,abStack_30);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d5 | 0x10;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff06d5 & 0xef;
  }
  DAT_ffff06d5 = bVar2;
  FUN_00001550();
  FUN_000e3c78(((int)(char)DAT_ffff06d5 & 0x80U) != 0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d5 | 4;
  if ((bStack_2c & 1) == 0) {
    bVar2 = DAT_ffff06d5 & 0xfb;
  }
  DAT_ffff06d5 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e392c((DAT_ffff06d5 & 2) != 0,((int)(char)DAT_ffff06d7 & 0x80U) != 0,
               (DAT_ffff06d7 & 0x40) != 0,(DAT_ffff06d6 & 0x20) != 0,(DAT_ffff06d5 & 4) != 0,
               ((int)(char)DAT_ffff06d6 & 0x80U) != 0,(DAT_ffff06d6 & 0x40) != 0,
               (DAT_ffff06d6 & 4) != 0,(DAT_ffff06d6 & 2) != 0,abStack_28);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d4 | 0x80;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff06d4 & 0x7f;
  }
  DAT_ffff06d4 = bVar2;
  FUN_00001550();
  FUN_000e31c4(((int)(char)DAT_ffff06d4 & 0x80U) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,
               DAT_ffff66b2 & 1,(int)DAT_fffef471,(DAT_ffff06d6 & 0x10) != 0,(DAT_ffff06d6 & 8) != 0
               ,DAT_ffff3694,(DAT_fffef330 & 0x40) != 0,&DAT_ffff06d8);
  FUN_000e363c((int)DAT_ffff06d8,(int)_DAT_ffff3950,(int)DAT_ffff0583,(int)_DAT_ffff10e6,
               DAT_fffef0a6,DAT_ffff3694,(DAT_fffef330 & 0x40) != 0,&DAT_ffff10e0);
  FUN_000e331c((int)_DAT_ffff10e0,(int)_DAT_ffff10d8,(int)_DAT_ffff10da,&v_Alternator_Duty_10D6);
  return;
}

