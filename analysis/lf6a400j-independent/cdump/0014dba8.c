
void FUN_0014dba8(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff208c | 4;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff208c & 0xfb;
  }
  DAT_ffff208c = bVar1;
  return;
}

