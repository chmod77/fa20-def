
void FUN_0014db94(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff208c | 0x40;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff208c & 0xbf;
  }
  DAT_ffff208c = bVar1;
  return;
}

