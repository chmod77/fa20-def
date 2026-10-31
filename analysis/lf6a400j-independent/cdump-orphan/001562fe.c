
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001562fe(void)

{
  undefined4 uVar1;
  
  FUN_00149406(_v_Atmospheric_Pressure_E6AA);
  FUN_001493f2(DAT_fffef32c & 1);
  uVar1 = 1;
  if (((DAT_fffef72d & 0x40) == 0) && ((DAT_fffef72d & 0x20) == 0)) {
    uVar1 = 0;
  }
  FUN_00149540(uVar1);
  FUN_00149756((int)v_Coolant_Temperature_29A5);
  FUN_0014975c((int)DAT_ffff29a6);
  return;
}

