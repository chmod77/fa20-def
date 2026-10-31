
void FUN_000ed444(char param_1,uint param_2,undefined2 param_3,char param_4,undefined2 *param_5)

{
  if (param_4 == '\0') {
    if (param_1 == '\x03') {
      *param_5 = (short)((param_2 & 0xffff) * 0x168 >> 0x10);
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

