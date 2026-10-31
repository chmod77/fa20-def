
void FUN_000a3f78(char param_1,char param_2,undefined1 *param_3)

{
  if ((((param_1 == '\x03') || (param_1 == '\x04')) || (param_1 == '\x06')) || (param_1 == '\a')) {
    DAT_fffec2f8 = 1;
  }
  if ((param_2 == '\x02') || (param_1 == '\x01')) {
    DAT_fffec2f8 = 0;
  }
  *param_3 = DAT_fffec2f8;
  return;
}

