
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001445b2(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff75e & 0x10) == 0;
  if (bVar1) {
    DAT_ffff1e00 = DAT_ffff1e00 & 0xfb;
  }
  else {
    DAT_ffff1e00 = DAT_ffff1e00 | 4;
  }
  bVar2 = DAT_ffff1e00 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e00 & 0xfd;
  }
  DAT_ffff1e00 = bVar2;
  bVar2 = DAT_ffff1e01 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e01 & 0xfd;
  }
  DAT_ffff1e01 = bVar2;
  return;
}

