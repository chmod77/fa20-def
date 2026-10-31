
void FUN_000c9aac(char param_1,undefined1 param_2,undefined1 param_3,undefined1 *param_4)

{
  if (param_1 != '\t') {
    param_3 = DAT_fffecb70;
  }
  if (param_1 == '\x01') {
    param_3 = 0;
  }
  else if (((((param_1 == '\x02') || (param_1 == '\x03')) || (param_1 == '\x05')) ||
           ((param_1 == '\a' || (param_1 == '\b')))) || (param_1 == '\x10')) {
    param_3 = 1;
  }
  else if ((param_1 == '\x04') || (param_1 == '\x06')) {
    param_3 = param_2;
  }
  *param_4 = param_3;
  DAT_fffecb70 = param_3;
  return;
}

