
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0013fff4(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff66b1;
  if ((uVar1 & 0x20) != 0) {
    if ((DAT_fffeeec6 & 1) == 0) {
      if (((((int)DAT_fffee710 & 0x20U) != 0) && (DAT_ffff049c < '\x01')) &&
         (_v_Engine_Speed_OBD_copy_2ADA < 0x2801)) {
        return (int)DAT_fffee710;
      }
      _DAT_fffef510 = 0x10;
    }
    else {
      _DAT_fffef510 = 0x8106;
    }
    uVar1 = (int)DAT_ffff66b1 & 0xdf;
    DAT_ffff66b1 = (char)uVar1;
  }
  return uVar1;
}

