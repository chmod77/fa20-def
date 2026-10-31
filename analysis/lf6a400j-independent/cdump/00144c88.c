
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144c88(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff754 & 0x20) != 0;
  if (bVar1) {
    DAT_ffff1e20 = DAT_ffff1e20 & 0xfb;
  }
  else {
    DAT_ffff1e20 = DAT_ffff1e20 | 4;
  }
  bVar2 = DAT_ffff1e20 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e20 & 0xfd;
  }
  DAT_ffff1e20 = bVar2;
  bVar2 = DAT_ffff1e21 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e21 & 0xfd;
  }
  DAT_ffff1e21 = bVar2;
  return;
}

