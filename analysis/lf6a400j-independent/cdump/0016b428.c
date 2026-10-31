
bool FUN_0016b428(ushort param_1,ushort param_2,ushort param_3,char param_4)

{
  if (param_4 != '\0') {
    if (param_3 < param_2) {
      param_2 = param_2 - param_3;
    }
    else {
      param_2 = 0;
    }
  }
  return param_2 <= param_1;
}

