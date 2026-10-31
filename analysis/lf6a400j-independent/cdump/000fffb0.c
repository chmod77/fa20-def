
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fffb0(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_fffeecee;
  FUN_0010086c((int)_DAT_ffff1262,(int)DAT_ffffab41,(int)_v_Engine_Speed_2994,(int)DAT_ffff66b0,
               &DAT_ffff1272,&DAT_ffff1274);
  FUN_001008d0((int)DAT_ffff03a0,(int)DAT_ffff2996,(int)DAT_ffff0541,0,DAT_ffff66b0,_DAT_fffeeede,
               DAT_ffff0491 & 1,(DAT_fffef32a & 4) != 0,(DAT_fffef32d & 0x20) != 0,DAT_fffeef33,
               DAT_fffee6a5,(DAT_fffef498 & 2) != 0,(DAT_fffef498 & 4) != 0,(DAT_ffff66b2 & 8) != 0,
               DAT_fffeeec6 & 1,(DAT_fffef152 & 0x20) != 0,&DAT_ffff1276,&DAT_ffff0780,&DAT_ffff0781
              );
  FUN_000fff04((int)_DAT_ffff1272,(int)_DAT_ffff0b46,(int)DAT_ffff2996,(int)DAT_ffff66b0,
               &DAT_ffff125a);
  FUN_00100514((int)DAT_ffff2996,(int)_DAT_ffff1276,(int)_v_Fuel_Rail_Pressure_gauge_ED16,
               (int)DAT_ffff66b0,&DAT_ffff126c,&DAT_ffff1268);
  FUN_00100c04((int)DAT_ffff66b0,(int)_v_Fuel_Rail_Pressure_gauge_ED16,(int)_DAT_ffff1276,
               (int)DAT_ffff077f,DAT_ffff077d & 1,DAT_fffef51b,local_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff077d | 2;
  if ((local_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff077d & 0xfd;
  }
  DAT_ffff077d = bVar2;
  FUN_00001550();
  FUN_00100600((int)_DAT_ffff1276,(int)DAT_ffff66b0,DAT_ffff077d & 1,(int)DAT_fffeecee,DAT_fffeecef,
               ((int)DAT_ffff077e & 0x80U) != 0,(DAT_ffff03d8 & 2) != 0,(DAT_ffff077d & 2) != 0,
               _v_Fuel_Rail_Pressure_gauge_ED16,(DAT_fffef32e & 0x10) != 0,(DAT_fffef32e & 4) != 0,
               &DAT_ffff077f);
  FUN_001002e8((int)DAT_ffff077f,(int)DAT_ffff2996,(int)_DAT_ffff1276,
               (int)_v_Fuel_Rail_Pressure_gauge_ED16,DAT_ffff66b0,_DAT_ffff0b46,_DAT_ffff1270,
               &DAT_ffff1264,&DAT_ffff1266,&DAT_ffff1278);
  FUN_000fff34((int)DAT_ffff66b0,(int)_DAT_ffff1264,(int)_DAT_ffff126c,&DAT_ffff125e);
  FUN_001007ec((int)DAT_ffff66b0,(int)_DAT_ffff125a,0,(int)_DAT_ffff125e,&DAT_ffff1270);
  FUN_0010044c((int)DAT_ffffab41,(int)_v_Engine_Speed_2994,(int)_DAT_ffff1262,(int)_DAT_ffff1272,
               DAT_ffff66b0,DAT_ffff077f,_DAT_ffff1270,&DAT_ffff126a,&DAT_ffff125c,&DAT_ffff126e);
  FUN_00100c88((int)_DAT_ffff1270,(int)DAT_ffff66b0,(int)DAT_ffff077f,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff077c | 2;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff077c & 0xfd;
  }
  DAT_ffff077c = bVar2;
  FUN_00001550(uVar1);
  return;
}

