
void FUN_000ab738(short param_1,byte param_2,char param_3,char param_4,short *param_5)

{
  if ((param_4 != '\0') && (param_3 == '\0')) {
    *param_5 = (ushort)param_2 << 6;
    return;
  }
  *param_5 = param_1;
  return;
}

