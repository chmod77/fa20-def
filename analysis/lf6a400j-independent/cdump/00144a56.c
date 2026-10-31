
void FUN_00144a56(void)

{
  char cVar1;
  
  cVar1 = FUN_00144e30();
  if (cVar1 == '\x01') {
    DAT_ffff1e16 = DAT_ffff1e16 | 2;
  }
  else {
    DAT_ffff1e16 = DAT_ffff1e16 & 0xfd;
  }
  DAT_ffff1e17 = 0;
  return;
}

