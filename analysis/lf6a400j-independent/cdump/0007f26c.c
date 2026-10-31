
void FUN_0007f26c(ushort param_1,short *param_2)

{
  short sVar1;
  
  if (param_1 < 0x8000) {
    sVar1 = param_1 << 1;
  }
  else {
    sVar1 = -1;
  }
  *param_2 = sVar1;
  return;
}

