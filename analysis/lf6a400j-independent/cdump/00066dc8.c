
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066dc8(void)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = FUN_00062bd6((int)_DAT_ffff00a2,0x3d1);
  bVar2 = DAT_ffff035b | 1;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff035b & 0xfe;
  }
  DAT_ffff035b = bVar2;
  uVar1 = FUN_00062bca((int)_DAT_ffff00a2,0x6e);
  bVar2 = DAT_ffff035b | 4;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff035b & 0xfb;
  }
  if (((bVar2 & 1) == 0) && ((bVar2 & 4) == 0)) {
    DAT_fffeffef = DAT_fffeffef & 0xdf;
  }
  else {
    DAT_fffeffef = DAT_fffeffef | 0x20;
  }
  DAT_ffff035b = bVar2;
  uVar1 = FUN_00062bd6((int)_DAT_ffff00a4,0x3d1);
  bVar2 = DAT_ffff035b | 2;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff035b & 0xfd;
  }
  DAT_ffff035b = bVar2;
  uVar1 = FUN_00062bca((int)_DAT_ffff00a4,0x6e);
  bVar2 = DAT_ffff035b | 8;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff035b & 0xf7;
  }
  if (((bVar2 & 2) == 0) && ((bVar2 & 8) == 0)) {
    DAT_fffeffef = DAT_fffeffef & 0xef;
  }
  else {
    DAT_fffeffef = DAT_fffeffef | 0x10;
  }
  DAT_ffff035b = bVar2;
  FUN_00067d7e();
  return;
}

