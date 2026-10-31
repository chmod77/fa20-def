
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006934a(void)

{
  int iVar1;
  
  iVar1 = __udiv32_r1_by_r0((uint)_v_Main_Accelerator_Sensor_00C2 << 10,1000);
  _v_Accelerator_Pedal_Sensor_D_F10C = FUN_00001540(iVar1);
  iVar1 = __udiv32_r1_by_r0((uint)_v_Sub_Accelerator_Sensor_00C4 << 10,1000);
  _v_Accelerator_Pedal_Sensor_E_F118 = FUN_00001540(iVar1);
  return;
}

