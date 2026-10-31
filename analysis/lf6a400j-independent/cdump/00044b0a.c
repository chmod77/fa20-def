
/* WARNING: Removing unreachable block (ram,0x00044b36) */

uint FUN_00044b0a(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeeec2;
  if ((((((uVar1 & 4) == 0) || (DAT_ffffab41 < 0x76)) ||
       (uVar1 = (uint)DAT_ffffab40, (uVar1 & 0x20) != 0)) ||
      ((DAT_ffff66b0 != '\x02' && (uVar1 = (uint)DAT_ffff66b0, uVar1 != 3)))) ||
     (uVar1 = (uint)DAT_ffff66b0, DAT_ffff08f4 != '\0')) {
    DAT_fffef83d = 0;
    DAT_fffef83f = 0;
    DAT_fffef841 = 0;
    DAT_fffef843 = 0;
    DAT_fffef83e = 0;
    DAT_fffef840 = 0;
    DAT_fffef842 = 0;
    DAT_fffef844 = 0;
    goto LAB_00044e1a;
  }
  if (((DAT_fffeef8d & 0x20) == 0) && ((DAT_fffeef8e & 0x20) == 0)) {
    DAT_fffef83e = FUN_0000152c(DAT_fffef83e + 1);
    if (0x31 < DAT_fffef83e) {
      DAT_fffef879 = DAT_fffef879 & 0xf7;
      DAT_fffef83d = 0;
LAB_00044c4a:
      DAT_fffef9bc = 1;
    }
  }
  else {
    DAT_fffef83d = FUN_0000152c(DAT_fffef83d + 1);
    DAT_fffef83e = 0;
    if (0x31 < DAT_fffef83d) {
      DAT_fffef879 = DAT_fffef879 | 8;
      goto LAB_00044c4a;
    }
  }
  if (((DAT_fffeef8f & 0x20) == 0) && ((DAT_fffeef90 & 0x20) == 0)) {
    DAT_fffef840 = FUN_0000152c(DAT_fffef840 + 1);
    if (0x31 < DAT_fffef840) {
      DAT_fffef879 = DAT_fffef879 & 0xfb;
      DAT_fffef83f = 0;
LAB_00044cb2:
      DAT_fffef9bd = 1;
    }
  }
  else {
    DAT_fffef83f = FUN_0000152c(DAT_fffef83f + 1);
    DAT_fffef840 = 0;
    if (0x31 < DAT_fffef83f) {
      DAT_fffef879 = DAT_fffef879 | 4;
      goto LAB_00044cb2;
    }
  }
  if (((((DAT_fffeef8d & 0x10) == 0) && ((DAT_fffeef8e & 0x10) == 0)) &&
      ((DAT_fffeef8f & 0x10) == 0)) && ((DAT_fffeef90 & 0x10) == 0)) {
    DAT_fffef842 = FUN_0000152c(DAT_fffef842 + 1);
    if (0x31 < DAT_fffef842) {
      DAT_fffef879 = DAT_fffef879 & 0xfd;
      DAT_fffef841 = 0;
LAB_00044d2a:
      DAT_fffef9be = 1;
    }
  }
  else {
    DAT_fffef841 = FUN_0000152c(DAT_fffef841 + 1);
    DAT_fffef842 = 0;
    if (0x31 < DAT_fffef841) {
      DAT_fffef879 = DAT_fffef879 | 2;
      goto LAB_00044d2a;
    }
  }
  if (((((((DAT_fffeef8d & 2) == 0) || ((DAT_fffeef8d & 1) != 0)) &&
        (((DAT_fffeef8e & 2) == 0 || ((DAT_fffeef8e & 1) != 0)))) &&
       ((((DAT_fffeef8f & 2) == 0 || ((DAT_fffeef8f & 1) != 0)) &&
        (((DAT_fffeef90 & 2) == 0 || ((DAT_fffeef90 & 1) != 0)))))) ||
      (((((DAT_fffeef8d & 8) != 0 && ((DAT_fffeef8d & 4) != 0)) ||
        (((DAT_fffeef8e & 8) != 0 && ((DAT_fffeef8e & 4) != 0)))) ||
       (((DAT_fffeef8f & 8) != 0 && ((DAT_fffeef8f & 4) != 0)))))) ||
     (((DAT_fffeef90 & 8) != 0 && ((DAT_fffeef90 & 4) != 0)))) {
    uVar1 = FUN_0000152c(DAT_fffef844 + 1);
    DAT_fffef844 = (byte)uVar1;
    if (DAT_fffef844 < 0x32) goto LAB_00044e1a;
    uVar1 = (int)(char)DAT_fffef879 & 0xfe;
    DAT_fffef879 = (byte)uVar1;
    DAT_fffef843 = 0;
  }
  else {
    uVar1 = FUN_0000152c(DAT_fffef843 + 1);
    DAT_fffef843 = (byte)uVar1;
    DAT_fffef844 = 0;
    if (DAT_fffef843 < 0x32) goto LAB_00044e1a;
    uVar1 = (int)(char)DAT_fffef879 | 1;
    DAT_fffef879 = (byte)uVar1;
  }
  DAT_fffef9bf = 1;
LAB_00044e1a:
  if (DAT_ffffab41 < 0x76) {
    DAT_fffeef8a = 0;
  }
  else {
    uVar1 = FUN_0000152c(DAT_fffeef8a + 1);
    DAT_fffeef8a = (byte)uVar1;
  }
  return uVar1;
}

