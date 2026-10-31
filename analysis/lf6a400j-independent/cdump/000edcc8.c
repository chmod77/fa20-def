
void FUN_000edcc8(char param_1,char param_2,ushort param_3,ushort param_4,int param_5,int param_6,
                 int param_7,int param_8,ushort param_9,char param_10,undefined1 *param_11)

{
  if (param_10 == '\0') {
    if ((((param_1 != '\0') && (param_2 != '\0')) && (param_4 <= param_3)) && (param_6 < param_5)) {
      *param_11 = 1;
      return;
    }
    if (((param_1 != '\0') && (param_2 != '\0')) && ((param_7 < param_8 && (param_4 <= param_9)))) {
      *param_11 = 2;
      return;
    }
    if (((param_1 != '\0') && (param_2 != '\0')) && ((param_4 <= param_3 && (param_6 >= param_5))))
    {
      *param_11 = 3;
      return;
    }
    if ((((param_1 != '\0') && (param_2 != '\0')) && (param_4 <= param_9)) && (param_7 >= param_8))
    {
      *param_11 = 4;
      return;
    }
  }
  *param_11 = 0;
  return;
}

