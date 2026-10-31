
void FUN_000a5128(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  if ((((((param_1 == '\x01') || (param_1 == '\x04')) || (param_1 == '\x05')) ||
       ((param_1 == '\x06' || (param_1 == '\a')))) ||
      ((param_1 == '\b' || ((param_1 == '\t' || (param_1 == '\n')))))) ||
     ((param_1 == '\v' || (param_3 == '\x01')))) {
    DAT_fffec348 = 1;
  }
  if (param_2 != '\0') {
    DAT_fffec348 = 0;
  }
  *param_4 = DAT_fffec348;
  return;
}

