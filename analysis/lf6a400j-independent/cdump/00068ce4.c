
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00068ce4(void)

{
  byte bVar2;
  uint uVar1;
  
  if (_DAT_ffff007a != 7) {
    if ((uint)_v_Accelerator_Pedal_Angle_EEF8 * 0x187 >> 8 < 0xfc) {
      if ((uint)_v_Accelerator_Pedal_Angle_EEF8 * 0x187 >> 8 == 0) {
        DAT_fffef153 = DAT_fffef153 | 1;
      }
    }
    else {
      DAT_fffef153 = DAT_fffef153 & 0xfe;
    }
    if ((DAT_fffef153 & 1) == 0) {
      _DAT_fffef154 = 0;
    }
    else {
      _DAT_fffef154 = FUN_00001540(_DAT_fffef154 + 1);
    }
    if ((DAT_ffff03c9 & 1) == 0) {
      if (((DAT_fffef153 & 1) == 0) || (_DAT_fffef154 < 2)) {
        if ((DAT_fffef153 & 1) == 0) {
          DAT_fffef152 = DAT_fffef152 & 0xbf;
        }
        else {
          DAT_fffef152 = DAT_fffef152 | 0x40;
        }
        uVar1 = (int)(char)DAT_fffef152 & 0x7f;
        DAT_fffef152 = (byte)uVar1;
      }
      else {
        uVar1 = (int)(char)(DAT_fffef152 | 0x40) | 0x80;
        DAT_fffef152 = (byte)uVar1;
      }
    }
    else {
      bVar2 = DAT_fffef152 | 0x80;
      if ((DAT_fffef152 & 0x20) == 0) {
        bVar2 = DAT_fffef152 & 0x7f;
      }
      uVar1 = (int)(char)bVar2 | 0x40;
      if ((bVar2 & 0x20) == 0) {
        uVar1 = (int)(char)bVar2 & 0xbf;
      }
      DAT_fffef152 = (byte)uVar1;
    }
    return uVar1;
  }
  return 7;
}

