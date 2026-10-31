
/* WARNING: Removing unreachable block (ram,0x0003d546) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003d490(void)

{
  uint uVar1;
  undefined1 *puVar2;
  
  if (DAT_fffef1d6 == '\0') {
    _DAT_fffef1ec = _v_Mass_Airflow_Sensor_Voltage_EEB2;
    DAT_fffef1d6 = '\x01';
  }
  else {
    if ((_DAT_fffef1ec == 0) ||
       (uVar1 = __udiv32_r1_by_r0(0xc8000,(uint)_DAT_fffef1ec), 0x80 < uVar1)) {
      uVar1 = 0x80;
    }
    puVar2 = (undefined1 *)
             ((uint)_v_Mass_Airflow_Sensor_Voltage_EEB2 -
             ((uVar1 * (_DAT_fffef1f4 & 0xffff) >> 0x16) + (uVar1 * (_DAT_fffef1f4 >> 0x10) >> 6)));
    if ((int)puVar2 < 0x1400) {
      puVar2 = &LAB_00001400;
    }
    _DAT_fffef1ec = (ushort)puVar2;
  }
  return;
}

