
void FUN_00080d54(uint param_1,uint param_2,short *param_3)

{
  int iVar1;
  
  iVar1 = (param_1 & 0xffff) - (param_2 & 0xffff);
  if ((int)&DAT_0000c17f < iVar1) {
    *param_3 = -1;
    return;
  }
  if (iVar1 < -16000) {
    *param_3 = 0;
    return;
  }
  *param_3 = (short)iVar1 + 16000;
  return;
}

