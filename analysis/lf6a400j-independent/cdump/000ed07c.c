
void FUN_000ed07c(char param_1,short param_2,undefined2 param_3,char param_4,undefined2 *param_5)

{
  if (param_4 == '\0') {
    if ((param_1 == '\x01') || (param_1 == '\x02')) {
      *param_5 = (short)((uint)(param_2 * 0x168) >> 0x10);
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

