
/* WARNING: Removing unreachable block (ram,0x00045f62) */

void FUN_00045f36(void)

{
  if (((((DAT_fffeeec2 & 4) == 0) || (DAT_ffffab41 < 0x76)) ||
      ((DAT_ffff66b0 != '\x02' && (DAT_ffff66b0 != '\x03')))) || (DAT_ffff08f0 != '\0')) {
    DAT_fffef86d = 0;
    DAT_fffef86f = 0;
    DAT_fffef871 = 0;
    DAT_fffef873 = 0;
    DAT_fffef875 = 0;
    DAT_fffef877 = 0;
    DAT_fffef86e = 0;
    DAT_fffef870 = 0;
    DAT_fffef872 = 0;
    DAT_fffef874 = 0;
    DAT_fffef876 = 0;
    DAT_fffef878 = 0;
  }
  else {
    if (((DAT_fffeef91 & 8) == 0) || ((DAT_fffeef91 & 4) != 0)) {
      DAT_fffef86e = FUN_0000152c(DAT_fffef86e + 1);
      if (0x4a < DAT_fffef86e) {
        DAT_fffef87e = DAT_fffef87e & 0xdf;
        DAT_fffef9ab = '\x01';
        DAT_fffef86d = 0;
      }
    }
    else {
      DAT_fffef86e = 0;
      if ((((int)DAT_fffef4e9 & 0x80U) == 0) &&
         (DAT_fffef86d = FUN_0000152c(DAT_fffef86d + 1), 0x4a < DAT_fffef86d)) {
        DAT_fffef87e = DAT_fffef87e | 0x20;
        DAT_fffef9ab = '\x01';
      }
    }
    if (((DAT_fffeef91 & 8) == 0) && ((DAT_fffeef91 & 4) != 0)) {
      DAT_fffef86f = FUN_0000152c(DAT_fffef86f + 1);
      DAT_fffef870 = 0;
      if (0x4a < DAT_fffef86f) {
        DAT_fffef87e = DAT_fffef87e | 0x10;
        DAT_fffef9ac = '\x01';
      }
    }
    else {
      DAT_fffef870 = FUN_0000152c(DAT_fffef870 + 1);
      if (0x4a < DAT_fffef870) {
        DAT_fffef87e = DAT_fffef87e & 0xef;
        DAT_fffef9ac = '\x01';
        DAT_fffef86f = 0;
      }
    }
    if (((DAT_fffeef91 & 8) == 0) || ((DAT_fffeef91 & 4) == 0)) {
      DAT_fffef872 = FUN_0000152c(DAT_fffef872 + 1);
      if (0x4a < DAT_fffef872) {
        DAT_fffef87e = DAT_fffef87e & 0xf7;
        DAT_fffef9ad = '\x01';
        DAT_fffef871 = 0;
      }
    }
    else {
      DAT_fffef871 = FUN_0000152c(DAT_fffef871 + 1);
      DAT_fffef872 = 0;
      if (0x4a < DAT_fffef871) {
        DAT_fffef87e = DAT_fffef87e | 8;
        DAT_fffef9ad = '\x01';
      }
    }
    if (((DAT_fffeef91 & 2) == 0) || ((DAT_fffeef91 & 1) != 0)) {
      DAT_fffef874 = FUN_0000152c(DAT_fffef874 + 1);
      if (0x4a < DAT_fffef874) {
        DAT_fffef87e = DAT_fffef87e & 0xfb;
        DAT_fffef9ae = '\x01';
        DAT_fffef873 = 0;
      }
    }
    else {
      DAT_fffef873 = FUN_0000152c(DAT_fffef873 + 1);
      DAT_fffef874 = 0;
      if (0x4a < DAT_fffef873) {
        DAT_fffef87e = DAT_fffef87e | 4;
        DAT_fffef9ae = '\x01';
      }
    }
    if (((DAT_fffeef91 & 2) == 0) && ((DAT_fffeef91 & 1) != 0)) {
      DAT_fffef875 = FUN_0000152c(DAT_fffef875 + 1);
      DAT_fffef876 = 0;
      if (0x4a < DAT_fffef875) {
        DAT_fffef87e = DAT_fffef87e | 2;
        DAT_fffef9af = '\x01';
      }
    }
    else {
      DAT_fffef876 = FUN_0000152c(DAT_fffef876 + 1);
      if (0x4a < DAT_fffef876) {
        DAT_fffef87e = DAT_fffef87e & 0xfd;
        DAT_fffef9af = '\x01';
        DAT_fffef875 = 0;
      }
    }
    if (((DAT_fffeef91 & 2) == 0) || ((DAT_fffeef91 & 1) == 0)) {
      DAT_fffef878 = FUN_0000152c(DAT_fffef878 + 1);
      if (0x4a < DAT_fffef878) {
        DAT_fffef87e = DAT_fffef87e & 0xfe;
        DAT_fffef9b0 = '\x01';
        DAT_fffef877 = 0;
      }
    }
    else {
      DAT_fffef877 = FUN_0000152c(DAT_fffef877 + 1);
      DAT_fffef878 = 0;
      if (0x4a < DAT_fffef877) {
        DAT_fffef87e = DAT_fffef87e | 1;
        DAT_fffef9b0 = '\x01';
      }
    }
  }
  if (DAT_ffffab41 < 0x76) {
    DAT_fffeef8c = 0;
  }
  else {
    DAT_fffeef8c = FUN_0000152c(DAT_fffeef8c + 1);
  }
  if (((((DAT_fffef87e & 4) == 0) && ((DAT_fffef87e & 2) == 0)) && ((DAT_fffef87e & 1) == 0)) &&
     ((((DAT_fffef87e & 0x20) == 0 && ((DAT_fffef87e & 0x10) == 0)) && ((DAT_fffef87e & 8) == 0))))
  {
    if (DAT_fffef9ae != '\x01') {
      return;
    }
    if (DAT_fffef9af != '\x01') {
      return;
    }
    if (DAT_fffef9b0 != '\x01') {
      return;
    }
    if (DAT_fffef9ab != '\x01') {
      return;
    }
    if (DAT_fffef9ac != '\x01') {
      return;
    }
    if (DAT_fffef9ad != '\x01') {
      return;
    }
    DAT_fffef9b6 = DAT_fffef9b6 & 0xfe;
  }
  else {
    DAT_fffef9b6 = DAT_fffef9b6 | 1;
  }
  DAT_fffef9b1 = 1;
  return;
}

