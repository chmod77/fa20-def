
void FUN_000ac00c(char param_1,char param_2,char *param_3)

{
  if ((param_1 == '\x05') && (param_2 == '\0')) {
    *param_3 = '\x06';
    return;
  }
  if ((param_1 == '\a') && (param_2 == '\0')) {
    *param_3 = '\b';
    return;
  }
  *param_3 = param_1;
  return;
}

