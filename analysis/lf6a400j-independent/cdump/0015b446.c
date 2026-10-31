
bool FUN_0015b446(void)

{
  byte bVar1;
  
  bVar1 = DAT_ffff20cc & 0x10;
  DAT_ffff20cc = DAT_ffff20cc & 0xef;
  return bVar1 != 0;
}

