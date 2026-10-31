
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e61e8(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_5c [4];
  byte abStack_58 [4];
  byte abStack_54 [4];
  byte abStack_50 [4];
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  undefined1 *puStack_38;
  char cStack_34;
  char cStack_30;
  char cStack_2c;
  code *pcStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff064a;
  puStack_38 = &DAT_ffff064a;
  FUN_000e5ebc();
  FUN_000e6a9c((DAT_ffff064a & 0x40) != 0,(DAT_ffff0000 & 0x20) != 0,(DAT_ffff0008 & 2) != 0,
               (DAT_ffff0007 & 0x10) != 0,(DAT_ffff0008 & 4) != 0,DAT_fffef050 & 1,local_5c,
               &DAT_ffff06e8);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e6 | 0x80;
  if ((local_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff06e6 & 0x7f;
  }
  DAT_ffff06e6 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e6bb4(DAT_ffff03d8 & 1,DAT_fffef050 & 1,abStack_58,puStack_38 + 0x9f);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e6 | 0x20;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff06e6 & 0xdf;
  }
  DAT_ffff06e6 = bVar2;
  FUN_00001550();
  FUN_000e6868((DAT_ffff06e6 & 2) != 0,((int)(char)DAT_ffff06e6 & 0x80U) != 0,
               (DAT_ffff06e6 & 0x10) != 0,(int)_DAT_fffeef12,v_Coolant_Temperature_29A5,
               _DAT_fffef59e,_DAT_fffeef14,DAT_ffff06e2,DAT_fffef050 & 1,abStack_54);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e6 | 0x40;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff06e6 & 0xbf;
  }
  DAT_ffff06e6 = bVar2;
  FUN_00001550();
  FUN_000e6908((DAT_fffef378 & 0x10) != 0,(DAT_ffff06e6 & 0x40) != 0,DAT_ffff03d8 & 1,
               (DAT_ffff06e6 & 0x20) != 0,v_Vehicle_Speed_byte_65A1,(DAT_ffff000d & 0x20) != 0,
               _v_Engine_Speed_2994,_v_Accelerator_Pedal_Angle_EEF8,_DAT_fffef59e,
               v_Coolant_Temperature_29A5,(DAT_fffef371 & 8) != 0,DAT_ffff08e2,abStack_50);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e6 | 0x10;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff06e6 & 0xef;
  }
  DAT_ffff06e6 = bVar2;
  FUN_00001550();
  FUN_000e6754((DAT_ffff06e6 & 0x10) != 0,(int)_DAT_fffef59e,DAT_fffef050 & 1,&DAT_ffff10fa);
  FUN_000e6c20((DAT_ffff06e6 & 0x10) != 0,(int)DAT_ffff06e3,DAT_fffef050 & 1,abStack_4c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e6 | 4;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff06e6 & 0xfb;
  }
  DAT_ffff06e6 = bVar2;
  FUN_00001550();
  FUN_000e5f28((DAT_ffff06e6 & 0x10) != 0,(DAT_ffff06e6 & 4) != 0,(DAT_ffff06e6 & 8) != 0,
               DAT_fffef050 & 1,puStack_38 + 0x99);
  FUN_000e67c4((DAT_ffff06e6 & 4) != 0,(int)_DAT_fffef59e,DAT_fffef050 & 1,&DAT_ffff10fe);
  FUN_000e6c5c((DAT_ffff06e6 & 0x10) != 0,(DAT_ffff06e6 & 4) != 0,(int)DAT_ffff06e3,
               (int)_DAT_fffef59e,DAT_fffef050 & 1,abStack_48);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e6 | 8;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff06e6 & 0xf7;
  }
  pcStack_28 = FUN_00001550;
  DAT_ffff06e6 = bVar2;
  FUN_00001550();
  FUN_000e6794((DAT_ffff06e6 & 8) != 0,(int)_DAT_fffef59e,DAT_fffef050 & 1);
  FUN_000e60a0((int)_DAT_ffff10fe,(int)_DAT_ffff10fa,(int)_DAT_ffff10fc,(DAT_ffff06e6 & 4) != 0,
               (DAT_ffff06e6 & 8) != 0,DAT_fffef050 & 1,&DAT_ffff10f8);
  cStack_34 = '\x01' - ((DAT_fffef8c3 & 0x40) == 0);
  cStack_30 = '\x01' - ((DAT_fffef8c3 & 0x20) == 0);
  cStack_2c = '\x01' - ((DAT_fffef8c3 & 8) == 0);
  pcStack_28 = (code *)(uint)((DAT_fffef8c4 & 8) != 0);
  FUN_000e5f90();
  FUN_000e67f4((DAT_ffff06e6 & 4) != 0,(DAT_ffff06e6 & 8) != 0,(DAT_ffff06e6 & 0x10) != 0,
               (int)DAT_ffff06e3,_DAT_fffef59e,_DAT_ffff10f8,abStack_44);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e6 | 2;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff06e6 & 0xfd;
  }
  DAT_ffff06e6 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e610c((int)DAT_ffff06e5,(int)_DAT_ffff10f8,DAT_fffef050 & 1,(int)_DAT_ffff3952,
               &DAT_ffff3952);
  FUN_000e6158((int)DAT_ffff06e5,DAT_fffef050 & 1,(int)DAT_ffff36b0);
  FUN_000e6b8c((int)DAT_ffff06e5,DAT_fffef050 & 1,abStack_40);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e7 | 1;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff06e7 & 0xfe;
  }
  DAT_ffff06e7 = bVar2;
  FUN_00001550(uVar1);
  FUN_000e6b5c((int)DAT_ffff06e5,DAT_fffef050 & 1,abStack_3c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06e6 | 1;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff06e6 & 0xfe;
  }
  DAT_ffff06e6 = bVar2;
  FUN_00001550(uVar1);
  puStack_38 = puStack_38 + 0x9a;
  FUN_000e5f8c(DAT_ffff06e7 & 1);
  return;
}

