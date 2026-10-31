
void FUN_000a4c94(char param_1,char param_2,undefined1 *param_3)

{
  if (((((param_1 == '\x05') || (param_1 == '\x06')) || (param_1 == '\a')) ||
      ((param_1 == '\b' || (param_1 == '\t')))) || ((param_1 == '\n' || (param_1 == '\v')))) {
    DAT_fffec328 = 1;
  }
  if (((param_2 != '\0') || (param_1 == '\x01')) || ((param_1 == '\x02' || (param_1 == '\x04')))) {
    DAT_fffec328 = 0;
  }
  *param_3 = DAT_fffec328;
  return;
}

