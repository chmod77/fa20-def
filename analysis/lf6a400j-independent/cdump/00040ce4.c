
void FUN_00040ce4(void)

{
  undefined4 uVar1;
  
  if ((((DAT_fffef371 & 2) == 0) || (DAT_ffff08fb != '\0')) || (DAT_ffff0592 < 100)) {
    DAT_fffef96c = DAT_fffef96c & 0xfe;
  }
  else {
    DAT_fffef96c = DAT_fffef96c | 1;
  }
  if ((DAT_fffef96c & 1) == 0) {
    DAT_fffef8a1 = 0;
    DAT_fffef8a2 = 0;
  }
  else {
    if (((DAT_ffff000e & 1) == 0) || ((DAT_fffef899 & 0x10) != 0)) {
      if ((DAT_fffef899 & 0x10) != 0) {
        uVar1 = FUN_00001550(0xf0);
        DAT_fffeffdc = DAT_fffeffdc & 0xdf | 0x40;
        FUN_00001550(uVar1);
        DAT_fffef959 = 1;
      }
      DAT_fffef8a1 = 0;
    }
    else {
      if (0x4a < DAT_fffef8a1) {
        uVar1 = FUN_00001550(0xf0);
        DAT_fffeffdc = DAT_fffeffdc & 0xbf | 0x20;
        FUN_00001550(uVar1);
        DAT_fffef959 = 1;
      }
      DAT_fffef8a1 = FUN_0000152c(DAT_fffef8a1 + 1);
    }
    if (((DAT_ffff000e & 1) == 0) || ((DAT_fffef899 & 0x20) != 0)) {
      if ((DAT_fffef899 & 0x20) != 0) {
        uVar1 = FUN_00001550(0xf0);
        DAT_fffeffdd = DAT_fffeffdd & 0xdf | 0x40;
        FUN_00001550(uVar1);
        DAT_fffef95a = 1;
      }
      DAT_fffef8a2 = 0;
    }
    else {
      if (0x4a < DAT_fffef8a2) {
        uVar1 = FUN_00001550(0xf0);
        DAT_fffeffdd = DAT_fffeffdd & 0xbf | 0x20;
        FUN_00001550(uVar1);
        DAT_fffef95a = 1;
      }
      DAT_fffef8a2 = FUN_0000152c(DAT_fffef8a2 + 1);
    }
    DAT_fffef899 = DAT_fffef899 & 0xcf;
  }
  if (((DAT_fffeffdc & 8) == 0) && ((DAT_fffeffdc & 0x20) == 0)) {
    if (((DAT_fffeffdc & 0x10) == 0) && ((DAT_fffeffdc & 0x40) == 0)) goto LAB_00040f0c;
    DAT_fffef898 = DAT_fffef898 & 0xfd;
  }
  else {
    DAT_fffef898 = DAT_fffef898 | 2;
  }
  DAT_fffef959 = 1;
  uVar1 = FUN_00001550(0xf0);
  DAT_fffeffdc = DAT_fffeffdc & 0x87;
  FUN_00001550(uVar1);
LAB_00040f0c:
  if (((DAT_fffeffdd & 8) == 0) && ((DAT_fffeffdd & 0x20) == 0)) {
    if (((DAT_fffeffdd & 0x10) == 0) && ((DAT_fffeffdd & 0x40) == 0)) {
      return;
    }
    DAT_fffef898 = DAT_fffef898 & 0xfb;
  }
  else {
    DAT_fffef898 = DAT_fffef898 | 4;
  }
  DAT_fffef95a = 1;
  uVar1 = FUN_00001550(0xf0);
  DAT_fffeffdd = DAT_fffeffdd & 0x87;
  FUN_00001550(uVar1);
  return;
}

