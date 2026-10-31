
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00046462(void)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = FUN_0016b404((int)DAT_ffff2996,0x28,4);
  bVar2 = DAT_ffff2ad1 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff2ad1 & 0x7f;
  }
  DAT_ffff2ad1 = bVar2;
  uVar1 = FUN_0016b404(0xffffff82,(int)DAT_ffff2996,4);
  bVar2 = DAT_ffff2ad1 | 0x40;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff2ad1 & 0xbf;
  }
  DAT_ffff2ad1 = bVar2;
  uVar1 = FUN_0016b404((int)DAT_ffff03a0,0x28,10);
  bVar2 = DAT_ffff2ad1 | 0x20;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff2ad1 & 0xdf;
  }
  DAT_ffff2ad1 = bVar2;
  uVar1 = FUN_0016b404(0xffffff96,(int)DAT_ffff03a0,10,(bVar2 & 0x10) != 0);
  bVar2 = DAT_ffff2ad1 | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff2ad1 & 0xef;
  }
  if ((((((DAT_ffff66b0 == '\x03') && (99 < _DAT_ffff2aca)) && (v_Coolant_Temperature_29A5 == -1))
       && ((((int)(char)bVar2 & 0x80U) != 0 && ((bVar2 & 0x40) != 0)))) &&
      (((bVar2 & 0x20) != 0 && (((bVar2 & 0x10) != 0 && ((DAT_fffef73b & 0x10) == 0)))))) &&
     ((DAT_fffef73b & 0x20) == 0)) {
    DAT_ffff2ad0 = DAT_ffff2ad0 | 0x80;
  }
  else {
    DAT_ffff2ad0 = DAT_ffff2ad0 & 0x7f;
  }
  DAT_ffff2ad1 = bVar2;
  if (DAT_ffff66b0 == '\x03') {
    _DAT_ffff2aca = FUN_00001540(_DAT_ffff2aca + 1);
  }
  else {
    _DAT_ffff2aca = 0;
  }
  return;
}

