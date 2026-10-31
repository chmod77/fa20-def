
void FUN_000c9a58(char param_1,undefined1 param_2,undefined1 *param_3)

{
  if (((param_1 != '\b') && (param_1 != '\t')) && (param_1 != '\x10')) {
    param_2 = DAT_fffecb6c;
  }
  if (((param_1 == '\x04') || (param_1 == '\x05')) || ((param_1 == '\x06' || (param_1 == '\a')))) {
    param_2 = DAT_fffecb6c;
  }
  if (param_1 == '\x01') {
    param_2 = 0;
  }
  else if ((param_1 == '\x02') || (param_1 == '\x03')) {
    param_2 = 1;
  }
  *param_3 = param_2;
  DAT_fffecb6c = param_2;
  return;
}

