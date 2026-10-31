
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144b78(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff754 & 0x100) != 0;
  if (bVar1) {
    DAT_ffff1e1c = DAT_ffff1e1c & 0xfb;
  }
  else {
    DAT_ffff1e1c = DAT_ffff1e1c | 4;
  }
  bVar2 = DAT_ffff1e1c | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e1c & 0xfd;
  }
  DAT_ffff1e1c = bVar2;
  bVar2 = DAT_ffff1e1d | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e1d & 0xfd;
  }
  DAT_ffff1e1d = bVar2;
  return;
}

