
void FUN_000d0e74(int param_1,char *param_2)

{
  short sVar1;
  
  sVar1 = *(byte *)(param_1 + 1) - 0x68;
  if (0xcd < sVar1) {
    *param_2 = -1;
    return;
  }
  if (sVar1 < -0x32) {
    *param_2 = '\0';
    return;
  }
  *param_2 = (char)sVar1 + '2';
  return;
}

