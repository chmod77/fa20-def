
void FUN_000c241c(char param_1,undefined1 *param_2)

{
  if ((param_1 == '\x05') || (param_1 == '\t')) {
    DAT_fffec9f4 = 1;
  }
  if ((param_1 == '\x02') || (param_1 == '\x06')) {
    DAT_fffec9f4 = 0;
  }
  *param_2 = DAT_fffec9f4;
  return;
}

