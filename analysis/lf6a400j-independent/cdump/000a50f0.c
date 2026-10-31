
void FUN_000a50f0(char param_1,char param_2,undefined1 *param_3)

{
  if ((((param_2 == '\x05') || (param_2 == '\x06')) || (param_2 == '\b')) ||
     ((param_2 == '\t' || (param_2 == '\n')))) {
    DAT_fffec344 = 1;
  }
  if (param_1 == '\b') {
    DAT_fffec344 = 0;
  }
  *param_3 = DAT_fffec344;
  return;
}

