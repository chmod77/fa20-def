
void FUN_000d2b58(char param_1,char param_2,ushort param_3,short *param_4)

{
  short sVar1;
  
  if (param_2 == DAT_fffecdd4) {
    sVar1 = param_3 + 1;
    if (0xfffe < param_3) {
      sVar1 = -1;
    }
  }
  else {
    sVar1 = 0;
  }
  if (param_1 == '\0') {
    *param_4 = -1;
  }
  else {
    *param_4 = sVar1;
  }
  DAT_fffecdd4 = param_2;
  return;
}

