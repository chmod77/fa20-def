
/* WARNING: Removing unreachable block (ram,0x0003e336) */
/* WARNING: Removing unreachable block (ram,0x0003e33e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003e138(void)

{
  byte bVar1;
  char cVar2;
  
  if (((DAT_fffeeec3 & 1) == 0) || ((DAT_fffeeec2 & 1) != 0)) {
    if ((DAT_fffeeec2 & 1) != 0) {
      DAT_fffeeec9 = DAT_fffeeec9 & 0xfe;
    }
  }
  else {
    DAT_fffeeec9 = DAT_fffeeec9 | 1;
  }
  if ((((DAT_fffeeec2 & 1) == 0) && ((DAT_fffeeec9 & 1) != 0)) && (9 < _DAT_fffeef1a)) {
    DAT_fffef6f0 = DAT_fffef6f0 | 1;
  }
  if ((DAT_fffeeec9 & 1) == 0) {
    _DAT_fffeef1a = 0;
  }
  else {
    _DAT_fffeef1a = FUN_00001540(_DAT_fffeef1a + 1);
  }
  if ((((DAT_fffef6f0 & 1) != 0) && ((DAT_fffeeec2 & 8) != 0)) && ((DAT_fffeeec3 & 8) == 0)) {
    DAT_fffef6f0 = DAT_fffef6f0 | 2;
  }
  bVar1 = FUN_00140424(0,0x10e);
  if (DAT_ffff66b8 == -0x5b) {
joined_r0x0003e22a:
    if (bVar1 == 0) {
      DAT_fffef6f0 = DAT_fffef6f0 | 4;
    }
  }
  else if ((((DAT_ffff03e5 & 0x20) == 0) || (((int)(char)DAT_ffff03e5 & 0x80U) != 0)) &&
          (((DAT_fffee6bc & 0x10) != 0 &&
           ((((DAT_ffff054a & 1) == 0 && (DAT_ffff0028 != '\0')) && (bVar1 == 0)))))) {
    bVar1 = DAT_ffff2fe8 & 1;
    goto joined_r0x0003e22a;
  }
  if ((((DAT_fffef6f0 & 1) != 0) && ((DAT_fffef6f0 & 4) != 0)) && ((DAT_fffeeec2 & 1) == 0)) {
    DAT_fffef6f0 = DAT_fffef6f0 | 8;
  }
  if ((DAT_fffeeec2 & 1) == 0) {
    _DAT_fffef222 = FUN_00001540(_DAT_fffef222 + 1);
  }
  else {
    _DAT_fffef222 = 0;
  }
  if (((DAT_fffeeec3 & 1) == 0) && ((DAT_fffeeec2 & 1) != 0)) {
    DAT_fffef6f0 = DAT_fffef6f0 | 0x10;
  }
  if ((((DAT_fffef6f0 & 1) != 0) && ((DAT_fffef220 & 1) != 0)) && ((DAT_fffef21f & 1) == 0)) {
    DAT_fffef6f0 = DAT_fffef6f0 | 0x20;
  }
  if (((DAT_ffff0000 & 2) == 0) && (DAT_ffff66b8 == -0x5b)) {
    DAT_fffef6f0 = DAT_fffef6f0 | 0x80;
  }
  if (((DAT_fffef6f0 & 2) == 0) || ((DAT_fffef6f0 & 0x40) != 0)) {
    if (((DAT_fffef6f0 & 2) != 0) && ((DAT_fffef6f0 & 0x40) != 0)) goto LAB_0003e452;
    if (((DAT_fffef6f0 & 4) != 0) && ((DAT_fffef6f0 & 0x40) != 0)) {
      FUN_00151288(0);
      goto LAB_0003e452;
    }
    if ((((DAT_fffeeec6 & 1) != 0) && ((DAT_fffef21f & 2) != 0)) && ((DAT_fffef6f0 & 0x40) == 0)) {
      cVar2 = FUN_00140424(0,0x10e);
      if (cVar2 == '\0') {
        FUN_00001550(0xf0);
        FUN_000706ec();
        _DAT_ffff3b68 = FUN_0004a5c2(&DAT_ffff2f80);
        FUN_0000073c();
      }
      goto LAB_0003e452;
    }
    if (((DAT_fffeeec2 & 1) != 0) && ((DAT_fffef6f0 & 0x40) == 0)) {
      DAT_fffeeec2 = DAT_fffeeec2 | 4;
      DAT_ffff2fdc = DAT_ffff2fdc & 0x7f;
      goto LAB_0003e452;
    }
    if (((DAT_fffef6f0 & 1) != 0) && ((DAT_fffef6f0 & 0x40) == 0)) {
      DAT_fffeeec2 = DAT_fffeeec2 & 0xfb;
      DAT_ffff2fdc = DAT_ffff2fdc | 0x80;
    }
    if (((DAT_fffef6f0 & 0x20) != 0) && ((DAT_fffef6f0 & 0x40) == 0)) {
      DAT_ffff2fe1 = DAT_ffff2fe1 | 2;
    }
    if ((((DAT_fffef6f0 & 8) == 0) || ((DAT_fffeeec6 & 1) == 0)) || ((DAT_fffef6f0 & 0x40) != 0))
    goto LAB_0003e452;
    DAT_ffff2fd4 = DAT_ffff2fd4 | 0x40;
    DAT_fffef558 = DAT_fffef558 | 0x80;
  }
  else {
    DAT_fffef558 = DAT_fffef558 & 0x7f;
  }
  FUN_0003e524();
LAB_0003e452:
  if (((DAT_fffef6f0 & 0x10) != 0) && ((DAT_fffef6f0 & 0x40) == 0)) {
    DAT_ffff2fe1 = DAT_ffff2fe1 & 0xfe;
    DAT_ffff2fd4 = DAT_ffff2fd4 & 0xbf;
  }
  bVar1 = DAT_fffeeec3 | 1;
  if ((DAT_fffeeec2 & 1) == 0) {
    bVar1 = DAT_fffeeec3 & 0xfe;
  }
  DAT_fffeeec3 = bVar1 | 8;
  if ((DAT_fffeeec2 & 8) == 0) {
    DAT_fffeeec3 = bVar1 & 0xf7;
  }
  bVar1 = DAT_fffef220 | 1;
  if ((DAT_fffef21f & 1) == 0) {
    bVar1 = DAT_fffef220 & 0xfe;
  }
  DAT_fffef220 = bVar1;
  DAT_fffef6f0 = 0;
  return;
}

