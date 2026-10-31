
void FUN_000ed0d0(char param_1,char param_2,undefined2 param_3,char param_4,undefined2 *param_5)

{
  if (param_4 == '\0') {
    if (((param_1 == '\x01') || (param_1 == '\x02')) || (param_2 == '\x01')) {
      *param_5 = 0xaa;
    }
    else {
      *param_5 = param_3;
    }
  }
  else {
    *param_5 = 0;
  }
  return;
}

