
void FUN_000d06e8(ushort param_1,undefined4 param_2,char *param_3)

{
  short sVar1;
  
  sVar1 = (param_1 >> 8) - ((ushort)((uint)param_2 >> 8) & 0xff);
  if (0x7f < sVar1) {
    *param_3 = -1;
    return;
  }
  if (sVar1 < -0x80) {
    *param_3 = '\0';
    return;
  }
  *param_3 = (char)sVar1 + -0x80;
  return;
}

