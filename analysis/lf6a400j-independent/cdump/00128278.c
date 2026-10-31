
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00128278(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_ffff08de;
  FUN_001284b0((int)_v_Atmospheric_Pressure_E6AA,(int)_DAT_ffff2b1e,&DAT_ffff1496);
  FUN_00128958((DAT_fffef371 & 8) != 0,(int)DAT_ffff08de,(DAT_fffef37b & 0x20) != 0,DAT_ffff0963 & 1
               ,_DAT_ffff148e,_DAT_ffff2b1e,_v_Atmospheric_Pressure_E6AA,_v_Engine_Speed_2994,
               v_Vehicle_Speed_byte_65A1,_DAT_fffeef12,DAT_fffeeec6 & 1,(DAT_ffff050c & 2) != 0,
               _v_A_F_Sensor_1_EF96,_v_A_F_Correction_1_0D92,DAT_ffff044d,_DAT_ffff389a,
               _v_Ambient_Air_Temperature_F344,_DAT_ffff1490,local_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0964 | 2;
  if ((local_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0964 & 0xfd;
  }
  DAT_ffff0964 = bVar2;
  FUN_00001550();
  FUN_001271a0((DAT_ffff0964 & 2) != 0);
  FUN_001272d8(DAT_fffeeec6 & 1,(DAT_ffff0964 & 2) != 0,&DAT_ffff148e);
  FUN_0012861c((DAT_ffff0964 & 2) != 0,(int)_DAT_ffff148a,&DAT_ffff149a);
  FUN_00128694((DAT_ffff0964 & 2) != 0,(int)_DAT_ffff148a,(int)_DAT_ffff1496,&DAT_ffff0965);
  FUN_00128768((DAT_ffff0964 & 2) != 0,(int)_DAT_ffff148a,&DAT_ffff149e);
  FUN_001287d0((DAT_ffff0964 & 2) != 0,(int)_DAT_ffff148a,(int)_DAT_fffef212,&DAT_ffff1918);
  FUN_001286f4((DAT_ffff0964 & 2) != 0,(int)_DAT_ffff148a,_DAT_ffff1918,(int)_DAT_ffff149e,
               &DAT_ffff149c);
  FUN_00126ea8((DAT_ffff0964 & 2) != 0,(int)_DAT_ffff148a,(int)_DAT_ffff149c,(int)_DAT_ffff149a,
               DAT_ffff0965,_DAT_fffef212,&DAT_ffff0960);
  FUN_00128838((DAT_ffff0964 & 2) != 0,(int)_DAT_ffff148a,(int)_DAT_ffff149c,(int)_DAT_fffef212,
               DAT_fffef050 & 1,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0962 | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0962 & 0xfe;
  }
  DAT_ffff0962 = bVar2;
  FUN_00001550(uVar1);
  return;
}

