
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000688e6(void)

{
  uint uVar1;
  
  uVar1 = (uint)_DAT_ffff007a;
  if (uVar1 != 7) {
    if (0xe665 < _v_Accelerator_Pedal_Angle_EEF8) {
      DAT_fffef156 = DAT_fffef156 | 1;
    }
    if ((DAT_fffef156 & 1) != 0) {
      uVar1 = (uint)DAT_fffef11e;
      DAT_fffef11e = (char)(uVar1 & 0xfe);
      return uVar1 & 0xfe;
    }
    uVar1 = (int)DAT_fffef11e | 1;
    DAT_fffef11e = (char)uVar1;
  }
  return uVar1;
}

