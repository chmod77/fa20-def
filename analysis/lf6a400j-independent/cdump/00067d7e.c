
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00067d7e(void)

{
  uint uVar1;
  byte bVar2;
  
  DAT_fffefff0 = DAT_fffeffef;
  uVar1 = FUN_00062e04((int)_DAT_ffff00a2,0x3d1);
  bVar2 = DAT_ffff035c | 1;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff035c & 0xfe;
  }
  DAT_ffff035c = bVar2;
  uVar1 = FUN_00062df8((int)_DAT_ffff00a2,0x6e);
  bVar2 = DAT_ffff035c | 4;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff035c & 0xfb;
  }
  if (((bVar2 & 1) == 0) && ((bVar2 & 4) == 0)) {
    DAT_fffefff0 = DAT_fffefff0 & 0xdf;
  }
  else {
    DAT_fffefff0 = DAT_fffefff0 | 0x20;
  }
  DAT_ffff035c = bVar2;
  uVar1 = FUN_00062e04((int)_DAT_ffff00a4,0x3d1);
  bVar2 = DAT_ffff035c | 2;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff035c & 0xfd;
  }
  DAT_ffff035c = bVar2;
  uVar1 = FUN_00062df8((int)_DAT_ffff00a4,0x6e);
  bVar2 = DAT_ffff035c | 8;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff035c & 0xf7;
  }
  DAT_ffff035c = bVar2;
  if (((bVar2 & 2) == 0) && ((bVar2 & 8) == 0)) {
    DAT_fffefff0 = DAT_fffefff0 & 0xef;
  }
  else {
    DAT_fffefff0 = DAT_fffefff0 | 0x10;
  }
  if (bVar2 != DAT_ffff035b) {
    DAT_ffff34bd = DAT_ffff34bd | 0x84;
  }
  return;
}

