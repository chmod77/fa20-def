
uint FUN_00050854(void)

{
  uint uVar1;
  
  if (((int)DAT_fffeef76 & 0x80U) != 0) {
    if (((int)DAT_fffeef76 & 0x80U) != 0) {
      DAT_fffef51a = DAT_ffff03ac;
    }
    return (int)DAT_fffeef76;
  }
  if (((DAT_fffef310 & 8) == 0) && ((DAT_fffef310 & 4) == 0)) {
    uVar1 = (uint)(char)DAT_fffef310;
    if ((uVar1 & 0x10) == 0) {
      return uVar1;
    }
    if (DAT_ffff0560 != 0) {
      if ((DAT_ffff0560 != 0) && (DAT_ffff0560 < 6)) {
LAB_000508b6:
        DAT_fffef51a = DAT_ffff0560;
        return (int)(char)DAT_fffef310;
      }
      if (DAT_ffff0560 == 6) {
LAB_000508d0:
        DAT_fffef51a = 6;
        return (int)(char)DAT_ffff0560;
      }
      uVar1 = (uint)(char)DAT_ffff0560;
      if (uVar1 != 0xd) {
        if ((int)(char)DAT_ffff0560 != 0xe) {
          return (int)(char)DAT_ffff0560;
        }
LAB_000508d8:
        DAT_fffef51a = 1;
        return (int)(char)DAT_ffff0560;
      }
    }
  }
  else {
    uVar1 = (uint)(char)DAT_fffef310;
    if (DAT_ffff0560 != 0) {
      if ((DAT_ffff0560 != 0) && (DAT_ffff0560 < 6)) goto LAB_000508b6;
      uVar1 = (uint)(char)DAT_ffff0560;
      if (uVar1 != 6) {
        if (DAT_ffff0560 == 7) goto LAB_000508d8;
        if ((int)(char)DAT_ffff0560 != 9) {
          return (int)(char)DAT_ffff0560;
        }
        goto LAB_000508d0;
      }
    }
  }
  DAT_fffef51a = 0;
  return uVar1;
}

