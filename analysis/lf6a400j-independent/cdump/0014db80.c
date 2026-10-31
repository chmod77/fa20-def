
void FUN_0014db80(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff208c | 0x20;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff208c & 0xdf;
  }
  DAT_ffff208c = bVar1;
  return;
}

