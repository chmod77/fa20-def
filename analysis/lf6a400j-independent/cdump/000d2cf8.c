
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d2cf8(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_60 [4];
  byte abStack_5c [4];
  byte abStack_58 [4];
  byte abStack_54 [4];
  byte abStack_50 [4];
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte abStack_44 [4];
  byte bStack_40;
  byte local_3c [4];
  byte local_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff05a5;
  FUN_000d33f0(((int)DAT_ffff369c & 0x80U) != 0,DAT_fffeeec2 & 1,(int)_DAT_ffff391a,
               ((int)(char)DAT_ffff064a & 0x80U) != 0,&DAT_ffff391a);
  FUN_000d3434((int)_DAT_fffeed02,(int)v_Vehicle_Speed_byte_65A1,&DAT_ffff0f7a);
  FUN_000d35e4(DAT_fffef09e & 1,((int)(char)DAT_ffff064a & 0x80U) != 0,(int)_v_Engine_Speed_2994,
               (int)DAT_ffff064d,&DAT_ffff064d);
  local_60[0] = 1 - ((DAT_ffff064a & 8) == 0);
  FUN_000d3638((int)_v_Engine_Speed_2994,(int)(char)local_60[0],local_60);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff064a | 8;
  if ((local_60[0] & 1) == 0) {
    bVar2 = DAT_ffff064a & 0xf7;
  }
  DAT_ffff064a = bVar2;
  FUN_00001550();
  abStack_5c[0] = 1 - ((DAT_ffff064a & 0x10) == 0);
  FUN_000d3868((DAT_fffef32a & 2) != 0,(int)(char)abStack_5c[0],(int)v_Coolant_Temperature_29A5,
               abStack_5c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff064a | 0x10;
  if ((abStack_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff064a & 0xef;
  }
  DAT_ffff064a = bVar2;
  FUN_00001550(uVar1);
  abStack_58[0] = 1 - ((DAT_ffff064a & 0x20) == 0);
  FUN_000d38c8((int)v_Vehicle_Speed_byte_65A1,(int)(char)abStack_58[0],(int)_DAT_fffeed02,abStack_58
              );
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff064a | 0x20;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff064a & 0xdf;
  }
  DAT_ffff064a = bVar2;
  FUN_00001550(uVar1);
  abStack_54[0] = 1 - (((int)(char)DAT_ffff064b & 0x80U) == 0);
  FUN_000d409c((int)v_Vehicle_Speed_byte_65A1,(int)(char)abStack_54[0],(int)_DAT_ffff2a3c,abStack_54
              );
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff064b | 0x80;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff064b & 0x7f;
  }
  DAT_ffff064b = bVar2;
  FUN_00001550();
  FUN_000d349c((DAT_ffff064a & 0x20) != 0,(int)_DAT_fffeef10,DAT_fffef32a & 1,(int)_DAT_fffeed02,
               _DAT_ffff0f7c,(DAT_ffff064a & 0x40) != 0,(DAT_ffff064a & 0x10) != 0,&DAT_ffff0f7c);
  FUN_000d3c54(((int)DAT_fffee710 & 0x80U) != 0,(int)DAT_ffff05a5,
               ((int)(char)DAT_ffff064b & 0x80U) != 0,(int)v_Vehicle_Speed_byte_65A1,
               (DAT_ffff064a & 2) != 0,abStack_50);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff064a | 1;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff064a & 0xfe;
  }
  DAT_ffff064a = bVar2;
  FUN_00001550(uVar1);
  FUN_000d3d90((int)_DAT_ffff391a,(int)_v_Engine_Speed_2994,(DAT_ffff0001 & 0x10) != 0,abStack_4c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff064b | 0x20;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff064b & 0xdf;
  }
  DAT_ffff064b = bVar2;
  FUN_00001550();
  FUN_000d3f0c((DAT_ffff064b & 8) != 0,(DAT_ffff064a & 0x10) != 0,(int)v_Coolant_Temperature_29A5,
               abStack_48);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff064b | 0x10;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff064b & 0xef;
  }
  DAT_ffff064b = bVar2;
  FUN_00001550(uVar1);
  FUN_000d2abc(DAT_ffff064a & 1,(int)v_Coolant_Temperature_29A5,(int)_DAT_fffeef10,(int)DAT_ffff0649
               ,(DAT_ffff0003 & 8) != 0,(DAT_ffff064a & 0x40) != 0,_v_Atmospheric_Pressure_E6AA,
               &DAT_ffff0649);
  FUN_000d2a3c(DAT_ffff064a & 1,(int)v_Coolant_Temperature_29A5,(DAT_ffff064a & 4) != 0,
               (int)_DAT_fffeef10,DAT_ffff0648,(DAT_ffff0003 & 8) != 0,&DAT_ffff0648);
  FUN_000d2b58((DAT_ffff064b & 0x10) != 0,((int)(char)DAT_ffff064a & 0x80U) != 0,(int)_DAT_ffff0f78)
  ;
  abStack_44[0] = 1 - ((DAT_ffff064a & 2) == 0);
  FUN_000d39f0((int)DAT_ffff0649,(int)(char)abStack_44[0],abStack_44);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff064a | 2;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff064a & 0xfd;
  }
  DAT_ffff064a = bVar2;
  FUN_00001550(uVar1);
  bStack_40 = 1 - ((DAT_ffff064a & 4) == 0);
  FUN_000d3988((int)DAT_ffff0648);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff064a | 4;
  if ((bStack_40 & 1) == 0) {
    bVar2 = DAT_ffff064a & 0xfb;
  }
  DAT_ffff064a = bVar2;
  FUN_00001550(uVar1);
  local_3c[0] = 1 - ((DAT_ffff064b & 2) == 0);
  FUN_000d3f54(0,(DAT_fffeef76 & 8) != 0,(int)_DAT_fffeef10,(DAT_ffff064a & 0x10) != 0,_DAT_ffff0f7c
               ,_DAT_ffff0f7a,DAT_ffff064d,(DAT_ffff064a & 4) != 0,(DAT_ffff064b & 0x40) != 0,
               _v_Engine_Speed_2994,DAT_ffff29a3,local_3c[0],local_3c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff064b | 2;
  if ((local_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff064b & 0xfd;
  }
  DAT_ffff064b = bVar2;
  FUN_00001550(uVar1);
  local_38[0] = 1 - ((DAT_ffff064a & 0x40) == 0);
  puStack_28 = &DAT_fffeef10;
  FUN_000d3690(0,(DAT_ffff064b & 2) != 0,DAT_fffef09e & 1,DAT_fffeeec2 & 1,(DAT_fffeef76 & 8) != 0,
               _DAT_fffeef10,(DAT_ffff064a & 0x10) != 0,(DAT_ffff064a & 8) != 0,_DAT_ffff0f7c,
               _DAT_ffff0f7a,DAT_ffff064d,(DAT_ffff064a & 4) != 0,(DAT_ffff064b & 0x20) != 0,
               (DAT_ffff064b & 0x40) != 0,_v_Engine_Speed_2994,DAT_ffff29a3,local_38[0],local_38);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff064a | 0x40;
  if ((local_38[0] & 1) == 0) {
    bVar2 = DAT_ffff064a & 0xbf;
  }
  DAT_ffff064a = bVar2;
  FUN_00001550(uVar1);
  FUN_000d3838(0,(DAT_ffff064b & 2) != 0,DAT_fffef063 & 1,abStack_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff064b | 1;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff064b & 0xfe;
  }
  DAT_ffff064b = bVar2;
  FUN_00001550(uVar1);
  abStack_30[0] = 1 - (((int)(char)DAT_ffff064a & 0x80U) == 0);
  FUN_000d3a58(0,(DAT_ffff064a & 0x40) != 0,(int)_v_Engine_Speed_2994,DAT_ffff091f & 1,
               DAT_fffeeec6 & 1,abStack_30[0],(DAT_fffef054 & 0x10) != 0,abStack_30);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff064a | 0x80;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff064a & 0x7f;
  }
  DAT_ffff064a = bVar2;
  FUN_00001550();
  FUN_000d3628(((int)(char)DAT_ffff064a & 0x80U) != 0,0,abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff2a14 | 0x40;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff2a14 & 0xbf;
  }
  DAT_ffff2a14 = bVar2;
  FUN_00001550(uVar1);
  return;
}

