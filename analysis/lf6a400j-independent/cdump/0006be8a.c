
void FUN_0006be8a(void)

{
  bool bVar1;
  bool bVar2;
  
  if (DAT_ffff66b8 == -0x5b) {
    DAT_fffef932 = 0;
    DAT_fffef933 = 0;
  }
  else {
    if (((DAT_fffef205 & 0x10) == 0) && (((int)DAT_fffef22d & 0x80U) != 0)) {
      bVar1 = 0xf9 < DAT_fffef932;
      if (!bVar1) {
        DAT_fffef932 = DAT_fffef932 + 1;
        bVar1 = false;
      }
    }
    else {
      DAT_fffef932 = 0;
      bVar1 = false;
    }
    if (((DAT_fffef205 & 0x10) == 0) || (((int)DAT_fffef22d & 0x80U) != 0)) {
      DAT_fffef933 = 0;
      bVar2 = bVar1;
    }
    else {
      bVar2 = 0xf9 < DAT_fffef933;
      if (!bVar2) {
        DAT_fffef933 = DAT_fffef933 + 1;
        bVar2 = bVar1;
      }
    }
    if (bVar2) {
      DAT_fffef82d = DAT_fffef82d | 0x10;
      DAT_fffef911 = DAT_fffef911 | 0x10;
      return;
    }
  }
  return;
}

