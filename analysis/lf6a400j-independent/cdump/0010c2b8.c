
void FUN_0010c2b8(ushort param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = param_1 << 2;
  if (0x3fff < param_1) {
    sVar1 = -1;
  }
  *param_2 = sVar1;
  return;
}

