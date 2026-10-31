
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144b34(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff754 & 2) == 0;
  if (bVar1) {
    DAT_ffff1e1a = DAT_ffff1e1a & 0xfb;
  }
  else {
    DAT_ffff1e1a = DAT_ffff1e1a | 4;
  }
  bVar2 = DAT_ffff1e1a | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e1a & 0xfd;
  }
  DAT_ffff1e1a = bVar2;
  bVar2 = DAT_ffff1e1b | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e1b & 0xfd;
  }
  DAT_ffff1e1b = bVar2;
  return;
}

