
void FUN_000a3f0c(char param_1,char param_2,undefined1 *param_3)

{
  if (((((param_2 == '\b') || (param_2 == '\t')) || (param_2 == '\n')) ||
      (((param_2 == '\v' || (param_1 == '\x02')) ||
       ((param_1 == '\x03' || ((param_1 == '\x04' || (param_1 == '\x06')))))))) ||
     ((param_1 == '\a' ||
      (((((param_1 == '\b' || (param_1 == '\t')) || (param_1 == '\r')) ||
        ((param_1 == '\x0e' || (param_1 == '\x0f')))) || (param_1 == '\x10')))))) {
    DAT_fffec2f4 = 0;
  }
  if (param_2 == '\x01') {
    DAT_fffec2f4 = 0;
  }
  else if (param_2 == '\x04') {
    DAT_fffec2f4 = 1;
  }
  *param_3 = DAT_fffec2f4;
  return;
}

