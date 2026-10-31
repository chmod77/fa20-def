
void FUN_00088540(char param_1,undefined2 param_2,ushort param_3,char param_4,char param_5,
                 undefined2 param_6,undefined2 *param_7)

{
  if ((param_1 == '\0') || (0x2800 < param_3)) {
    if ((0x2800 < param_3) || ((param_4 == '\0' || (param_5 != '\0')))) {
      *param_7 = param_6;
    }
    else {
      *param_7 = param_2;
    }
  }
  else {
    *param_7 = 0;
  }
  return;
}

