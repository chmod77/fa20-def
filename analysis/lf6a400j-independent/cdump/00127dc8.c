
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00127dc8(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_ffff08de;
  FUN_00128914((DAT_fffef371 & 8) != 0,(int)DAT_ffff08de,(DAT_fffef37b & 0x20) != 0,DAT_ffff0963 & 1
               ,_DAT_fffeef10,_DAT_ffff389a,local_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0964 | 1;
  if ((local_30[0] & 1) == 0) {
    bVar2 = DAT_ffff0964 & 0xfe;
  }
  DAT_ffff0964 = bVar2;
  FUN_00001550(uVar1);
  FUN_00126fb0(DAT_ffff0964 & 1,(int)_DAT_ffff0bea,(int)v_CPC_Valve_Duty_Ratio_043B,
               (int)_DAT_fffeeed0,_v_Manifold_Absolute_Pressure_EECE,&DAT_ffff1484);
  FUN_00127160((int)_DAT_ffff1484,DAT_fffef050 & 1,&DAT_ffff1488);
  FUN_0012853c(DAT_ffff0964 & 1,(int)_DAT_ffff0bea,(int)v_CPC_Valve_Duty_Ratio_043B,
               (int)_DAT_fffef20a,_DAT_ffff1484,_DAT_fffeeed0,_v_Manifold_Absolute_Pressure_EECE,
               &DAT_ffff1914);
  FUN_00127080(DAT_ffff0964 & 1,(int)_DAT_ffff0bea,(int)v_CPC_Valve_Duty_Ratio_043B,
               (int)_DAT_ffff1488,&DAT_ffff1486);
  FUN_001284cc((int)_DAT_ffff1484,_DAT_ffff1914,DAT_fffef050 & 1,&DAT_ffff1498);
  FUN_001271cc(DAT_ffff0964 & 1,(int)_DAT_ffff0bea,(int)v_CPC_Valve_Duty_Ratio_043B,
               (int)_DAT_ffff1486,_DAT_ffff1488,_DAT_fffef20a,_DAT_ffff1498,&DAT_ffff148c);
  FUN_00127350(DAT_ffff0964 & 1,(int)_DAT_ffff1486,(int)_DAT_ffff1488,(int)_DAT_ffff148c,
               _DAT_ffff148a,_DAT_ffff149c,_DAT_fffef212,(DAT_ffff0964 & 2) != 0,DAT_fffef6f4,
               DAT_fffef050 & 1,&DAT_ffff0961);
  FUN_001276f0(DAT_ffff0964 & 1,(int)_DAT_ffff1486,(int)_DAT_ffff1488,(int)_DAT_ffff148c,
               DAT_fffef050 & 1,&DAT_ffff1492);
  FUN_001275d0(DAT_ffff0964 & 1,(int)_DAT_ffff1486,(int)_DAT_ffff1488,(int)_DAT_ffff148c,
               (DAT_ffff0964 & 2) != 0,_DAT_ffff148a,_DAT_ffff149c,_DAT_fffef212,DAT_ffff3846,
               DAT_fffef050 & 1,&DAT_ffff3846);
  FUN_00127784(DAT_ffff0964 & 1,(int)_DAT_ffff1486,(int)_DAT_ffff1488,(int)_DAT_ffff148c,
               (DAT_ffff0964 & 2) != 0,_DAT_ffff148a,_DAT_ffff149c,_DAT_fffef212,(int)_DAT_ffff3a04,
               DAT_fffef050 & 1,&DAT_ffff3a04);
  FUN_001278d8(DAT_ffff0964 & 1,(int)_DAT_ffff1486,(int)_DAT_ffff1488,(int)_DAT_ffff148c,
               (DAT_ffff0964 & 2) != 0,_DAT_ffff148a,_DAT_ffff149c,_DAT_fffef212,DAT_ffff3847,
               DAT_fffef050 & 1,&DAT_ffff3847);
  FUN_00127bc0(DAT_ffff0964 & 1,(int)_DAT_ffff1486,(int)_DAT_ffff1488,(int)_DAT_ffff148c,
               DAT_fffef050 & 1,&DAT_ffff1494);
  FUN_00127c54(DAT_ffff0964 & 1,(int)_DAT_ffff1486,(int)_DAT_ffff1488,(int)_DAT_ffff148c,
               (DAT_ffff0964 & 2) != 0,_DAT_ffff148a,_DAT_ffff149c,_DAT_fffef212,(int)_DAT_ffff3a08,
               DAT_fffef050 & 1,&DAT_ffff3a08);
  FUN_00128c18(DAT_ffff0964 & 1,(int)_DAT_ffff1486,(int)_DAT_ffff1488,(int)_DAT_ffff148c,
               DAT_fffef050 & 1,abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0963 | 1;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0963 & 0xfe;
  }
  DAT_ffff0963 = bVar2;
  FUN_00001550(uVar1);
  FUN_00128ad8(DAT_ffff0964 & 1,(int)_DAT_ffff1486,(int)_DAT_ffff1488,(int)_DAT_ffff148c,
               _DAT_ffff148a,_DAT_ffff149c,_DAT_fffef212,(DAT_ffff0964 & 2) != 0,
               (DAT_fffefd62 & 0x10) != 0,DAT_fffef050 & 1,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0963 | 2;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0963 & 0xfd;
  }
  DAT_ffff0963 = bVar2;
  FUN_00001550(uVar1);
  FUN_00127494(DAT_ffff0964 & 1,(int)_DAT_ffff1486,(int)_DAT_ffff1488,(int)_DAT_ffff148c,
               (DAT_ffff0964 & 2) != 0,_DAT_ffff148a,_DAT_ffff149c,_DAT_fffef212,_DAT_ffff1492,
               _DAT_ffff3a02,DAT_fffef050 & 1,&DAT_ffff3a02);
  FUN_00127a80(DAT_ffff0964 & 1,(int)_DAT_ffff1486,(int)_DAT_ffff1488,(int)_DAT_ffff148c,
               (DAT_ffff0964 & 2) != 0,_DAT_ffff148a,_DAT_ffff149c,_DAT_fffef212,_DAT_ffff1494,
               _DAT_ffff3a06,DAT_fffef050 & 1,&DAT_ffff3a06);
  return;
}

