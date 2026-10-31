
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010c574(void)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 local_40 [2];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  undefined1 *local_2c [4];
  
  local_2c[2] = &DAT_fffeef76;
  FUN_0010ae28(0xffff370b,&DAT_ffff3772,0xffff07ef,(int)DAT_ffff091d,DAT_fffef050 & 1,0,0,0,
               DAT_ffff08e2,DAT_ffff08c5,DAT_ffff08c6,DAT_ffff08ca,DAT_ffff08c9,DAT_ffff0906,
               DAT_ffff0902,DAT_ffff0903,DAT_ffff08da,DAT_ffff36d3,DAT_ffff08c4,DAT_ffff36d4,
               &DAT_ffff36d4);
  FUN_0010b91c((int)_DAT_fffeeef4,(int)_v_Engine_Speed_OBD_copy_2ADA,&DAT_ffff12dc,&DAT_ffff12d6,
               &DAT_ffff12fa);
  FUN_0010ba84((int)_DAT_ffff2f9c,(int)_DAT_ffff2f9e,(int)_v_Accelerator_Pedal_Sensor_D_F10C,
               (int)_v_Accelerator_Pedal_Sensor_E_F118,&DAT_ffff07b4,&DAT_ffff12d8,&DAT_ffff12da);
  FUN_0010bb58((int)v_Ignition_Timing_OBD_046D,&DAT_ffff07b5);
  FUN_0010bb60((int)_v_Accelerator_Pedal_Sensor_D_F10C,&DAT_ffff07b6);
  FUN_0010bb70((int)_v_Accelerator_Pedal_Sensor_E_F118,&DAT_ffff07b7);
  FUN_0010bb80((int)_v_Catalyst_Temperature_B1S1_0FE4,&DAT_ffff12de);
  FUN_0010bbd4((int)v_CPC_Valve_Duty_Ratio_043B,&DAT_ffff07b8);
  FUN_0010bc04((int)DAT_ffff04fa,(int)_DAT_fffeeeb4,&DAT_ffff07b9);
  FUN_0010bda0((int)_DAT_fffef0da,DAT_fffef050 & 1,0xffff3b3c,local_40);
  iVar3 = 0;
  for (bVar2 = 0; bVar2 < 2; bVar2 = bVar2 + 1) {
    *(undefined4 *)(iVar3 + -0xc4c4) = *(undefined4 *)((int)local_40 + iVar3);
    iVar3 = iVar3 + 4;
  }
  FUN_0010bdf4((int)DAT_ffff04fa,&DAT_ffff07ba);
  FUN_0010be50((int)_DAT_fffef35e,&DAT_ffff12e0);
  FUN_0010be54((int)_DAT_fffef212,&DAT_ffff12e2);
  FUN_0010be6c((int)_v_Fuel_Rail_Pressure_gauge_ED16);
  FUN_0010be88((int)_DAT_ffff0da4,((int)DAT_ffff050e & 0x80U) != 0,&DAT_ffff07bb);
  FUN_0010beb0((int)_DAT_ffff0dea);
  FUN_0010bf30(DAT_fffeeec6 & 1,(DAT_fffef32a & 0x40) != 0,((int)DAT_ffff050e & 0x80U) != 0,
               &DAT_ffff07bd);
  FUN_0010bf98((int)DAT_ffff0405,&DAT_ffff07be);
  FUN_0010bfa4((int)_DAT_ffff39f6);
  FUN_0010c060((int)DAT_ffff07c0,(DAT_fffeeec2 & 4) != 0,(int)DAT_ffff36fb,&DAT_ffff36fb);
  FUN_0010c080(&DAT_ffff07c1);
  FUN_0010c088((int)_v_Mass_Airflow_EEE4,&DAT_ffff12e6);
  FUN_0010c0a0((int)v_Intake_Air_Temperature_2B23,&DAT_ffff07c3);
  FUN_0010c0b8((int)DAT_fffeed6a,&DAT_ffff07c4);
  FUN_0010c0d0(&DAT_ffff07c2);
  FUN_0010c0d8((int)_DAT_fffef006,&DAT_ffff12e8);
  FUN_0010c0f4(&DAT_fffeef9e,&DAT_ffff12ea);
  FUN_0010c10c((int)v_Engine_Load_Relative_E6FE,(int)_DAT_ffff2b1e,(int)_DAT_ffff1068,&DAT_ffff07c5)
  ;
  FUN_0010c19c((int)_v_Engine_Speed_OBD_copy_2ADA,&DAT_ffff12ec);
  FUN_0010c1b4((int)_v_Barometric_Pressure_OBD_F320,&DAT_ffff07c6);
  FUN_0010c1c4((int)_v_Fuel_Rail_Pressure_gauge_ED16,&DAT_ffff12ee);
  FUN_0010c1e0((int)_v_Manifold_Absolute_Pressure_OBD_F648,&DAT_ffff07c7);
  FUN_0010c220();
  FUN_0010c1f0(((int)(char)DAT_fffeef76 & 0x80U) != 0,(DAT_fffeef76 & 0x40) != 0,DAT_fffef364 & 1,
               &DAT_ffff07c8);
  FUN_0010c234((int)_DAT_fffeecae,&DAT_ffff07ca);
  FUN_0010c258((int)_v_Main_Throttle_Sensor_00B8,(int)_DAT_fffef3ac,&DAT_ffff07cb);
  FUN_0010c2a0((int)_v_A_F_Sensor_1_EF96,&DAT_ffff12f0);
  FUN_0010c2b8((int)_v_A_F_Sensor_1_EF96,&DAT_ffff12f2);
  FUN_0010c2e8((int)_v_Ambient_Air_Temperature_F344,&DAT_ffff07cd);
  FUN_0010c2fc((int)_v_Throttle_Opening_Angle_target_commanded_0AF4,&DAT_ffff07ce);
  FUN_0010c2d0((int)v_Intake_Air_Temperature_2B23,&DAT_ffff07cc);
  FUN_0010c32c(((int)DAT_ffff050e & 0x80U) != 0,(int)_DAT_ffff0dc4,(int)_DAT_ffff0b84,
               (int)DAT_ffff0401,_DAT_ffff0b42,&DAT_ffff12f4,&DAT_ffff12fc);
  FUN_0010c3b8((int)_v_Sub_Throttle_Sensor_00BA,&DAT_ffff07d0);
  FUN_0010c3e0((int)_v_Main_Throttle_Sensor_00B8,&DAT_ffff07cf);
  FUN_0010c408((int)_DAT_ffff1276,&DAT_ffff12f6);
  FUN_0010c420((int)_v_Coolant_Temperature_OBD_F322,&DAT_ffff07d1);
  FUN_0010c434((int)_v_Control_Module_Voltage_EF18,&DAT_ffff12f8);
  FUN_0010c44c((int)_v_Vehicle_Speed_F324,&DAT_ffff07d2);
  FUN_0010c478(DAT_ffff07dc & 1,DAT_fffef050 & 1,(int)DAT_ffff36fc,&DAT_ffff36fc,abStack_38);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07d4 | 1;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff07d4 & 0xfe;
  }
  DAT_ffff07d4 = bVar2;
  FUN_00001550(uVar1);
  FUN_0010d4c0((int)_v_Engine_Oil_Temperature_F326,&DAT_ffff07d6);
  FUN_0010d4d4(&DAT_ffff36fe);
  FUN_0010d4dc(0xffff07ef,(int)_DAT_fffeeed0,(int)_v_Ambient_Air_Temperature_F344,(int)DAT_fffef0b5,
               _DAT_fffeeee0,DAT_fffef050 & 1,&DAT_ffff07d7,abStack_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07d5 | 1;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff07d5 & 0xfe;
  }
  DAT_ffff07d5 = bVar2;
  FUN_00001550(uVar1);
  FUN_0010d63c((int)_DAT_fffeeed0,(int)_v_Ambient_Air_Temperature_F344,(int)DAT_fffef0b5,0,
               &DAT_ffff07d8);
  FUN_0010d6d4(0,0xffff07ef,&DAT_ffff07d9);
  FUN_0010d878((DAT_ffff6559 & 8) != 0,0xffff0857,(int)DAT_ffff091d,0xffff370b,&DAT_ffff07da);
  abStack_30[0] = DAT_ffff36fd & 1;
  FUN_0010d98c((DAT_fffeeec2 & 4) != 0,(DAT_ffff6559 & 8) != 0,abStack_30[0],abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff36fd | 1;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff36fd & 0xfe;
  }
  DAT_ffff36fd = bVar2;
  FUN_00001550(uVar1);
  FUN_0010bcdc((int)_DAT_fffef0da,DAT_ffff36fd & 1,(int)DAT_ffff370a,DAT_fffef050 & 1,0xffff3b34,
               local_2c);
  iVar3 = 0;
  for (bVar2 = 0; bVar2 < 2; bVar2 = bVar2 + 1) {
    *(undefined4 *)(iVar3 + -0xc4cc) = *(undefined4 *)((int)local_2c + iVar3);
    iVar3 = iVar3 + 4;
  }
  FUN_0010bd74(0xffff3b3c,DAT_fffef050 & 1,(int)_DAT_ffff39dc,&DAT_ffff39dc);
  FUN_0010bfdc((int)DAT_fffef0b5,(DAT_fffeeec2 & 4) != 0,(int)DAT_ffff36fb,&DAT_ffff07c0,
               &DAT_ffff12fe);
  FUN_0010bc7c(0xffff3b34,(int)DAT_ffff370a,DAT_ffff36fd & 1,DAT_fffef050 & 1,_DAT_ffff39da,
               &DAT_ffff39da);
  return;
}

