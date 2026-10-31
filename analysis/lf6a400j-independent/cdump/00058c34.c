
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00058c34(void)

{
  if (((DAT_fffef371 & 2) != 0) && (0x8b85 < _v_Control_Module_Voltage_EF18)) {
    DAT_fffef371 = DAT_fffef371 | 4;
    return;
  }
  DAT_fffef371 = DAT_fffef371 & 0xfb;
  return;
}

