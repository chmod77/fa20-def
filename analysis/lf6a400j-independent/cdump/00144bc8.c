
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144bc8(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff72c & 0x800) != 0;
  if (bVar1) {
    DAT_ffff1e22 = DAT_ffff1e22 & 0xfb;
  }
  else {
    DAT_ffff1e22 = DAT_ffff1e22 | 4;
  }
  bVar2 = DAT_ffff1e22 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e22 & 0xfd;
  }
  DAT_ffff1e22 = bVar2;
  bVar2 = DAT_ffff1e23 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e23 & 0xfd;
  }
  DAT_ffff1e23 = bVar2;
  return;
}

