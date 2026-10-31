
void FUN_00090094(ushort param_1,uint param_2,char *param_3)

{
  short sVar1;
  
  sVar1 = (short)((int)(uint)param_1 >> 1) - (short)((int)(param_2 & 0xff) >> 1);
  if (0xbf < sVar1) {
    *param_3 = -1;
    return;
  }
  if (sVar1 < -0x40) {
    *param_3 = '\0';
    return;
  }
  *param_3 = (char)sVar1 + '@';
  return;
}

