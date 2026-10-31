
void FUN_000a5388(char param_1,undefined1 *param_2)

{
  if ((param_1 == '\x06') || (param_1 == '\a')) {
    DAT_fffec360 = 0;
  }
  if ((param_1 == '\x03') || (param_1 == '\x04')) {
    DAT_fffec360 = 1;
  }
  *param_2 = DAT_fffec360;
  return;
}

