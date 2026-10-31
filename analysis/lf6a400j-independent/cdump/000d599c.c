
void FUN_000d599c(char param_1,char param_2,char param_3,ushort param_4,short param_5,short *param_6
                 )

{
  if (((param_2 != '\0') || (param_3 != '\0')) && (param_5 = -1, param_4 < 0x4000)) {
    param_5 = param_4 << 2;
  }
  if (param_1 == '\0') {
    *param_6 = param_5;
    return;
  }
  *param_6 = 0;
  return;
}

