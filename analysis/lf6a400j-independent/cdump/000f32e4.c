
void FUN_000f32e4(char param_1,undefined2 param_2,char param_3,undefined2 *param_4)

{
  if (param_3 == '\0') {
    if ((param_1 == '\x01') || (param_1 == '\x02')) {
      *param_4 = 0xff55;
    }
    else {
      *param_4 = param_2;
    }
  }
  else {
    *param_4 = 0;
  }
  return;
}

