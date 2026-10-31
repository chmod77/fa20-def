
void FUN_000a3e4c(char param_1,undefined1 *param_2)

{
  if ((((param_1 == '\n') || (param_1 == '\v')) || (param_1 == '\f')) ||
     (((param_1 == '\r' || (param_1 == '\x0e')) || ((param_1 == '\x0f' || (param_1 == '\x10')))))) {
    DAT_fffec2ec = 0;
  }
  if (((param_1 == '\x01') || (param_1 == '\x02')) ||
     ((param_1 == '\x03' ||
      ((((param_1 == '\x04' || (param_1 == '\x05')) || (param_1 == '\x06')) ||
       ((param_1 == '\a' || (param_1 == '\b')))))))) {
    DAT_fffec2ec = 0;
  }
  else if (param_1 == '\t') {
    DAT_fffec2ec = 1;
  }
  *param_2 = DAT_fffec2ec;
  return;
}

