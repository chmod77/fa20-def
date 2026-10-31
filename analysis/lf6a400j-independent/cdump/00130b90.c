
void FUN_00130b90(ushort param_1,char param_2,ushort param_3,ushort param_4,ushort param_5,
                 ushort *param_6)

{
  if (param_1 == param_3) {
    if ((param_4 <= param_5) && (param_4 < param_5)) goto LAB_00130bb8;
  }
  else if (param_3 <= param_1) goto LAB_00130bb8;
  param_3 = param_1;
LAB_00130bb8:
  if (param_2 == '\0') {
    *param_6 = param_1;
  }
  else {
    *param_6 = param_3;
  }
  return;
}

