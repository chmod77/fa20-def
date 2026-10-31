
void FUN_000a7900(char param_1,short param_2,short param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_3;
  if ((param_1 == '\x03') && (iVar1 = iVar2 + -0x5f, param_3 = (short)iVar1, iVar1 < -0x8000)) {
    param_3 = -0x8000;
  }
  if ((param_1 == '\x02') && (iVar2 = iVar2 + 0xa6, param_3 = (short)iVar2, 0x7fff < iVar2)) {
    param_3 = 0x7fff;
  }
  if (param_1 != '\x01') {
    param_2 = param_3;
  }
  if (param_2 < 1) {
    param_2 = 0;
  }
  if (param_2 < 0x37af) {
    *param_4 = param_2;
  }
  else {
    *param_4 = 0x37af;
  }
  return;
}

