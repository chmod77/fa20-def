
void FUN_000ed1b8(char param_1,undefined2 param_2,char param_3,short param_4,undefined2 param_5,
                 char param_6,undefined2 *param_7)

{
  if (param_6 == '\0') {
    if ((param_1 == '\x01') || (param_1 == '\x02')) {
      *param_7 = param_2;
    }
    else if (param_3 == '\x01') {
      *param_7 = (short)((uint)(param_4 * 0x168) >> 0x10);
    }
    else {
      *param_7 = param_5;
    }
  }
  else {
    *param_7 = 0;
  }
  return;
}

