
void FUN_000e3764(char param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
                 int param_6,int *param_7)

{
  if (param_2 < 54000) {
    if (((param_3 < 1000) && (param_1 == '\0')) || ((0x3240 < param_4 && (0x20c < param_5)))) {
      *param_7 = param_6 + 1;
    }
    else {
      *param_7 = param_6;
    }
  }
  else {
    *param_7 = 0;
  }
  return;
}

