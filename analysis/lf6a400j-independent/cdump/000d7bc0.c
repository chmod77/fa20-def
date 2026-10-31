
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d7bc0(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_1c [4];
  byte abStack_18 [4];
  byte abStack_14 [8];
  
  FUN_000d829c((DAT_ffff0001 & 0x20) != 0,DAT_fffeeec1 & 1,(DAT_ffff0000 & 2) != 0,(int)DAT_ffff0673
               ,DAT_ffff0674,local_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0675 | 0x10;
  if ((local_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff0675 & 0xef;
  }
  DAT_ffff0675 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d82e0((int)_v_Fuel_Rail_Pressure_gauge_ED16,(int)_DAT_ffff1276,(int)_v_Engine_Speed_2994,
               DAT_fffeeec6 & 1,DAT_ffff03d8 & 1,0,abStack_18,&DAT_ffff0fe2);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0675 | 4;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff0675 & 0xfb;
  }
  DAT_ffff0675 = bVar2;
  FUN_00001550();
  FUN_000d7b34((DAT_ffff0675 & 0x10) != 0,&DAT_ffff0674);
  FUN_000d824c((DAT_ffff0675 & 0x10) != 0,abStack_14);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0675 | 0x20;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff0675 & 0xdf;
  }
  DAT_ffff0675 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d7adc((DAT_ffff0001 & 0x20) != 0,(DAT_ffff0675 & 0x10) != 0,(int)DAT_ffff0674,&DAT_ffff0673
              );
  FUN_000d7b60((DAT_ffff0675 & 4) != 0,(DAT_ffff0675 & 0x40) != 0,
               ((int)(char)DAT_ffff0675 & 0x80U) != 0,(DAT_ffff0675 & 0x20) != 0,
               &v_Fuel_Pump_Duty_0FDC);
  return;
}

