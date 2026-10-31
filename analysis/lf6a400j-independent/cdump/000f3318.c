
void FUN_000f3318(short param_1,char param_2,undefined2 param_3,char param_4,undefined2 *param_5)

{
  if (param_4 == '\0') {
    if ((param_2 == '\x01') || (param_2 == '\x02')) {
      *param_5 = (short)((uint)(param_1 * 0x168) >> 0x10);
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

