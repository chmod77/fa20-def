
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005157e(void)

{
  int iVar1;
  byte bVar2;
  
  if (((DAT_fffeef9c == '\x05') || (DAT_fffeef9c == '\x06')) && ((DAT_fffeef99 & 0x20) != 0)) {
    if ((((DAT_fffeef98 >> 2 & 7) != (DAT_fffef002 >> 2 & 7)) || (DAT_fffef004 != '\0')) ||
       ((-(uint)((DAT_fffeef98 & 2) == 0) != -(uint)((DAT_fffef02b & 2) == 0) ||
        (DAT_fffef18c != '\0')))) goto LAB_00051660;
    if ((DAT_fffeef98 & 2) == 0) {
      bVar2 = 4;
    }
    else {
      bVar2 = 0xc;
    }
    DAT_fffef003 = FUN_0000152c((uint)bVar2 << 4);
    if ((uint)DAT_fffef003 * 0x7a == 0) {
      _DAT_fffeeeb6 = 0xffff;
    }
    else {
      iVar1 = __udiv32_r1_by_r0((uint)_DAT_fffeefae * 16000,(uint)DAT_fffef003 * 0x7a);
      _DAT_fffeeeb6 = FUN_00001540(iVar1);
    }
    if (_DAT_fffeeeb6 < 0x6401) {
      DAT_fffeef9a = DAT_fffeef9a | 2;
      goto LAB_00051660;
    }
    if (_DAT_fffeeeb6 < 0x7d01) goto LAB_00051660;
  }
  else {
    _DAT_fffeeeb6 = 0xffff;
  }
  DAT_fffeef9a = DAT_fffeef9a & 0xfd;
LAB_00051660:
  if ((DAT_fffeef98 >> 2 & 7) == (DAT_fffef002 >> 2 & 7)) {
    if (DAT_fffef004 != '\0') {
      DAT_fffef004 = DAT_fffef004 + -1;
    }
  }
  else {
    DAT_fffef004 = '\x03';
  }
  if (-(uint)((DAT_fffeef98 & 2) == 0) == -(uint)((DAT_fffef02b & 2) == 0)) {
    if (DAT_fffef18c != '\0') {
      DAT_fffef18c = DAT_fffef18c + -1;
    }
  }
  else {
    DAT_fffef18c = '\x03';
  }
  DAT_fffef002 = DAT_fffef002 & 0xe3 | (DAT_fffeef98 >> 2 & 7) << 2;
  return;
}

