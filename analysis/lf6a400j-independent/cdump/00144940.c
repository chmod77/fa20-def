
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144940(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff754 & 0x10) == 0;
  if (bVar1) {
    DAT_ffff1e12 = DAT_ffff1e12 & 0xfb;
  }
  else {
    DAT_ffff1e12 = DAT_ffff1e12 | 4;
  }
  bVar2 = DAT_ffff1e12 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e12 & 0xfd;
  }
  DAT_ffff1e12 = bVar2;
  bVar2 = DAT_ffff1e13 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e13 & 0xfd;
  }
  DAT_ffff1e13 = bVar2;
  return;
}

