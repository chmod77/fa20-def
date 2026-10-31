
void FUN_0009f9d8(char param_1,char param_2,char param_3,byte param_4,byte *param_5)

{
  if (param_3 == '\0') {
    if ((param_1 == '\x01') || (param_1 == '\x02')) {
      *param_5 = 0;
      return;
    }
    if ((param_2 == '\x03') || (param_2 == '\x06')) {
      *param_5 = param_4 >> 1;
      return;
    }
  }
  *param_5 = param_4;
  return;
}

