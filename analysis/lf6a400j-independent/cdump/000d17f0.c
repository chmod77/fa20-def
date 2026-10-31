
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d17f0(void)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_4c [8];
  undefined1 local_44 [20];
  undefined4 local_30 [2];
  byte abStack_28 [4];
  byte abStack_24 [4];
  undefined1 *local_20;
  
  local_20 = &DAT_fffef006;
  FUN_000d03f8((int)_DAT_fffeeeb6,&DAT_ffff05bd);
  FUN_000d041c((int)_DAT_fffef134,&DAT_ffff05be);
  FUN_000d043c((int)_DAT_fffef13a,&DAT_ffff05bf);
  FUN_000d0470(DAT_fffef3e9 & 1,&DAT_ffff05c1);
  FUN_000d0484((DAT_fffef3e9 & 2) != 0,&DAT_ffff05c2);
  FUN_000d0498((DAT_fffef3ea & 4) != 0,&DAT_ffff05c3);
  FUN_000d04ac((DAT_fffef0eb & 0x10) != 0,&DAT_ffff05c4);
  FUN_000d04c0((DAT_ffff678b & 0x20) != 0,&DAT_ffff05c5);
  FUN_000d04d4(((int)DAT_ffff0438 & 0x80U) != 0,&DAT_ffff05c6);
  FUN_000d04e8(1,_DAT_ffff1674,(int)_DAT_ffff3916,(int)DAT_ffff369b,local_4c);
  for (uVar3 = 0; (uVar3 & 0xff) < 6; uVar3 = uVar3 + 1) {
    uVar3 = uVar3 & 0xff;
    (&DAT_ffff0f5e)[uVar3] = local_4c[uVar3];
  }
  FUN_000d056c((DAT_fffef3ea & 8) != 0,&DAT_ffff05c7);
  FUN_000d0580((DAT_ffff091e & 2) != 0,&DAT_ffff05c8);
  FUN_000d0594((DAT_fffeecfa & 2) != 0,&DAT_ffff05c9);
  FUN_000d05c4(DAT_fffef11e & 1,&DAT_ffff05cb);
  FUN_000d05d8(((int)(char)DAT_fffef09e & 0x80U) != 0,&DAT_ffff05cc);
  FUN_000d05ec(DAT_fffef09e & 1,&DAT_ffff05cd);
  FUN_000d0638((int)v_Ignition_Total_Timing_046C,&DAT_ffff05d0);
  FUN_000d0600((int)_v_Main_Throttle_Sensor_00B8,&DAT_ffff05ce);
  FUN_000d061c((int)_v_Sub_Throttle_Sensor_00BA,&DAT_ffff05cf);
  FUN_000d065c((int)_DAT_fffeeeb6,&DAT_ffff05d2);
  FUN_000d0640((int)_DAT_fffef048,&DAT_ffff05d1);
  FUN_000d0680((int)_v_Atmospheric_Pressure_E6AA,&DAT_ffff05d3);
  FUN_000d0690((DAT_ffff0569 & 0x40) != 0,&DAT_ffff05d4);
  FUN_000d06a4((DAT_fffef364 & 0x10) != 0,&DAT_ffff05d5);
  FUN_000d06b8(DAT_fffef318 & 1,&DAT_ffff05d6);
  FUN_000d06cc((int)_DAT_ffff008e,&DAT_ffff05d7);
  FUN_000d06e8((int)_v_Manifold_Absolute_Pressure_EECE,(int)_v_Barometric_Pressure_OBD_F320,
               &DAT_ffff05d8);
  FUN_000d072c(DAT_fffef364 & 1,&DAT_ffff05d9);
  FUN_000d0740(((int)DAT_ffff064a & 0x80U) != 0,&DAT_ffff05da);
  FUN_000d0754((int)v_CPC_Valve_Duty_Ratio_043B,&DAT_ffff05db);
  FUN_000d0784((int)_v_Alternator_Duty_10D6,&DAT_ffff05dc);
  FUN_000d07b0((int)_v_Fuel_Pump_Duty_0FDC,&DAT_ffff05dd);
  FUN_000d07dc((int)_v_Primary_Wastegate_Duty_0E5E,&DAT_ffff05de);
  FUN_000d080c((int)DAT_ffff0545,&DAT_ffff05df);
  FUN_000d0820(DAT_fffef312 & 1,&DAT_ffff05e0);
  FUN_000d0834((int)_v_Exhaust_OCV_Duty_Left_1230,&DAT_ffff05e1);
  FUN_000d0860((int)_v_Exhaust_OCV_Duty_Right_1228,&DAT_ffff05e2);
  FUN_000d088c((int)_DAT_fffeeeb4,&DAT_ffff05e3);
  FUN_000d08a4((DAT_fffef913 & 2) != 0,&DAT_ffff05e4);
  FUN_000d08b8(DAT_fffef913 & 1,&DAT_ffff05e5);
  FUN_000d08cc((int)_DAT_fffef2ba,&DAT_ffff05e6);
  FUN_000d08f8((int)_DAT_fffef2b8,&DAT_ffff05e7);
  FUN_000d0924((int)_DAT_fffef282,&DAT_ffff05e8);
  FUN_000d093c((int)_DAT_fffef280,&DAT_ffff05e9);
  FUN_000d0954((DAT_ffff03d8 & 2) != 0,&DAT_ffff05ea);
  FUN_000d0968((int)_DAT_ffff0ede,&DAT_ffff0f64);
  FUN_000d097c(DAT_fffef331 & 1,&DAT_ffff05eb);
  FUN_000d0990((DAT_fffef330 & 0x40) != 0,&DAT_ffff05ec);
  FUN_000d09a4((DAT_fffef09e & 4) != 0,&DAT_ffff05ed);
  FUN_000d09b8((int)_v_Battery_Current_F0CA,&DAT_ffff05ee);
  FUN_000d09dc((DAT_fffef152 & 0x20) != 0,&DAT_ffff05ef);
  FUN_000d09f0((int)_v_Throttle_Motor_Duty_0128,&DAT_ffff05f0);
  FUN_000d0a28((int)DAT_ffff0586,&DAT_ffff05f1);
  FUN_000d0a3c((int)DAT_ffff3691,&DAT_ffff05f2);
  FUN_000d0a48(DAT_fffeeec2 & 1,&DAT_ffff05f3);
  FUN_000d0a5c((int)_DAT_fffef006,&DAT_ffff05f4);
  FUN_000d0a94((int)_DAT_ffff2f9c,&DAT_ffff05f5);
  FUN_000d0ad0((int)_DAT_ffff2f9e,&DAT_ffff05f6);
  FUN_000d0b0c((int)DAT_fffeef2a,&DAT_ffff05f7);
  FUN_000d0b28((int)_v_A_F_Correction_1_0D92,&DAT_ffff05f8);
  FUN_000d0b8c((int)_DAT_ffff0d80,&DAT_ffff05fa);
  FUN_000d0b44((int)_DAT_ffff0dc2,&DAT_ffff05f9);
  FUN_000d0be8((DAT_fffef330 & 0x20) != 0,&DAT_ffff05fc);
  FUN_000d0be4((int)v_Engine_Load_Relative_E6FE,&DAT_ffff05fb);
  FUN_000d0bfc((DAT_fffeed34 & 0x20) != 0,&DAT_ffff05fd);
  FUN_000d0c10(DAT_fffef06c & 1,&DAT_ffff05fe);
  FUN_000d0c24((DAT_fffef364 & 8) != 0,&DAT_ffff05ff);
  FUN_000d0c38((int)_v_Engine_Speed_2994,&DAT_ffff0f66);
  FUN_000d0c50((int)_DAT_ffff0d06,&DAT_ffff0f68);
  FUN_000d0c68((int)DAT_fffee6de,&DAT_ffff0600);
  FUN_000d0c70(&DAT_ffff0e06,&DAT_ffff0601);
  FUN_000d0ca4(&DAT_ffff0e06,&DAT_ffff0602);
  FUN_000d0cd8((int)_DAT_fffef26e,&DAT_ffff0603);
  FUN_000d0cf0((int)_DAT_fffef26c,&DAT_ffff0604);
  FUN_000d0d08((DAT_ffff0012 & 0x20) != 0,&DAT_ffff0605);
  FUN_000d0d2c((int)_v_Brake_Booster_Pressure_F200,&DAT_ffff0607);
  FUN_000d0d3c(((int)DAT_ffff077b & 0x80U) != 0,&DAT_ffff0608);
  FUN_000d0d1c((int)_v_Manifold_Absolute_Pressure_EECE,&DAT_ffff0606);
  FUN_000d0d50((int)DAT_ffff04bb,&DAT_ffff0609);
  FUN_000d0d8c(((int)(char)DAT_fffef364 & 0x80U) != 0,&DAT_ffff060a);
  FUN_000d0da0((int)_v_Mass_Airflow_EEE4,&DAT_ffff0f6a);
  FUN_000d0db8((int)_v_Main_Accelerator_Sensor_00C2,&DAT_ffff060b);
  FUN_000d0dd4((int)_v_Sub_Accelerator_Sensor_00C4,&DAT_ffff060c);
  FUN_000d0df0((DAT_ffff6570 & 0x10) != 0,&DAT_ffff060e);
  FUN_000d0e04(DAT_ffff6570 & 1,&DAT_ffff060d);
  FUN_000d0e18((DAT_fffef09e & 0x20) != 0,&DAT_ffff060f);
  FUN_000d0e2c((DAT_fffef07a & 4) != 0,&DAT_ffff0610);
  FUN_000d0e40((int)_DAT_ffff0d44,&DAT_ffff0611);
  FUN_000d0e58((int)DAT_fffee6d0,&DAT_ffff0612);
  FUN_000d0e74(&DAT_ffff0dfc,&DAT_ffff0613);
  FUN_000d0ea8(&DAT_ffff0dfc,&DAT_ffff0614);
  FUN_000d0edc((int)_v_A_F_Sensor_1_EF96,&DAT_ffff0615);
  FUN_000d0f00((DAT_fffef09e & 0x40) != 0,&DAT_ffff0616);
  FUN_000d0f14((DAT_fffeef76 & 0x20) != 0,&DAT_ffff0617);
  FUN_000d0f28((int)v_Intake_Air_Temperature_2B23,&DAT_ffff0618);
  FUN_000d0f40((int)v_Battery_Temperature_F0D2,&DAT_ffff0619);
  FUN_000d0f58((DAT_fffef06e & 2) != 0,&DAT_ffff061a);
  FUN_000d0f6c((DAT_fffef364 & 4) != 0,&DAT_ffff061b);
  FUN_000d0f80((int)_DAT_fffeed6c,&DAT_ffff061c);
  FUN_000d0f9c(((int)DAT_ffff054a & 0x80U) != 0,&DAT_ffff061d);
  FUN_000d0fb0((int)_DAT_fffeed6e,&DAT_ffff061e);
  FUN_000d0fcc(0xffff2b4e,&DAT_ffff061f);
  FUN_000d0ff8((int)DAT_ffff04a4,(int)DAT_ffff04bb,&DAT_ffff0620);
  FUN_000d1040((int)_v_Throttle_Opening_Angle_target_commanded_0AF4,&DAT_ffff0621);
  FUN_000d1070((int)_DAT_ffff0b1a,&DAT_ffff0622);
  FUN_000d1090((int)v_Coolant_Temperature_29A5,&DAT_ffff0623);
  FUN_000d10a8((int)_v_Mass_Airflow_Sensor_Voltage_EEB2,&DAT_ffff0624);
  FUN_000d10b8((int)DAT_ffffab41,&DAT_ffff0625);
  FUN_000d10bc((int)v_Vehicle_Speed_byte_65A1,&DAT_ffff0626);
  FUN_000d05a8((int)_DAT_ffff0ede,&DAT_ffff05ca);
  FUN_000d10c0(0xffff07ef,local_44);
  for (uVar3 = 0; (uVar3 & 0xff) < 0x11; uVar3 = uVar3 + 1) {
    uVar3 = uVar3 & 0xff;
    *(undefined1 *)(uVar3 - 0xf9d9) = local_44[uVar3];
  }
  FUN_000d1718(((int)DAT_ffff2a03 & 0x80U) != 0,&DAT_ffff0638);
  FUN_000d2488((DAT_fffef0eb & 0x20) != 0,&DAT_ffff063a);
  FUN_000d2640(((int)(char)DAT_fffef312 & 0x80U) != 0,&DAT_ffff063b);
  FUN_000d2654((DAT_fffef314 & 4) != 0,&DAT_ffff063c);
  FUN_000d2668((DAT_fffef3e9 & 0x10) != 0,&DAT_ffff063d);
  FUN_000d267c((int)_DAT_ffff102e,&DAT_ffff063e);
  FUN_000d2690((int)_DAT_ffff1030,&DAT_ffff063f);
  FUN_000d26a4((int)_DAT_ffff1032,&DAT_ffff0640);
  FUN_000d26b8((int)_DAT_ffff1034,&DAT_ffff0641);
  FUN_000d26f4((int)_DAT_fffef0da,0xffff3b10,local_30);
  iVar4 = 0;
  for (bVar2 = 0; bVar2 < 2; bVar2 = bVar2 + 1) {
    *(undefined4 *)(iVar4 + -0xc4f0) = *(undefined4 *)((int)local_30 + iVar4);
    iVar4 = iVar4 + 4;
  }
  FUN_000d2728((DAT_ffff0515 & 0x10) != 0,&DAT_ffff0642);
  FUN_000d273c(((int)DAT_ffff077b & 0x80U) != 0,&DAT_ffff0643);
  FUN_000d2750((DAT_fffef3ea & 2) != 0,&DAT_ffff0644);
  FUN_000d29b4(DAT_fffef3ea & 1,&DAT_ffff0645);
  FUN_000d29c8((int)_DAT_fffeeed4,&DAT_ffff0646);
  FUN_000d29e0((int)_DAT_ffff1276,&DAT_ffff0f76);
  FUN_000d2a00((int)_DAT_ffff12c8,&DAT_ffff0647);
  FUN_000d2a24((int)DAT_ffff03c6,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0639 | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0639 & 0xfe;
  }
  DAT_ffff0639 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d2a30((int)DAT_ffff03c6,abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0639 | 2;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff0639 & 0xfd;
  }
  DAT_ffff0639 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d03e4(DAT_ffff0639 & 1,&DAT_ffff05bc);
  FUN_000d045c((DAT_ffff0639 & 2) != 0,&DAT_ffff05c0);
  FUN_000d26cc(0xffff3b10,(int)_DAT_ffff3918,&DAT_ffff3918);
  return;
}

