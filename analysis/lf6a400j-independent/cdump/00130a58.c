
void FUN_00130a58(ushort param_1,ushort param_2,undefined2 param_3,undefined2 param_4,ushort param_5
                 ,ushort param_6,undefined2 *param_7)

{
  if (param_1 < param_2) {
LAB_00130a82:
    *param_7 = param_3;
  }
  else {
    if (param_1 <= param_2) {
      if ((param_5 < param_6) || (param_5 <= param_6)) goto LAB_00130a82;
    }
    *param_7 = param_4;
  }
  return;
}

