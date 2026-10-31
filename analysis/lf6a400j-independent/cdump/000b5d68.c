
void FUN_000b5d68(ushort param_1,char param_2,ushort param_3,char param_4,char param_5,
                 ushort param_6,ushort *param_7)

{
  if ((param_2 == '\0') || (param_1 < param_3)) {
    param_1 = param_3;
  }
  if (param_4 == '\0') {
    if (param_5 == '\0') {
      *param_7 = param_1;
    }
    else {
      *param_7 = param_6;
    }
  }
  else {
    *param_7 = param_3;
  }
  return;
}

