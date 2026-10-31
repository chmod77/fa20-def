
bool FUN_0016b404(byte param_1,byte param_2,byte param_3,char param_4)

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

