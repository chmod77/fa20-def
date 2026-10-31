
void FUN_000cd898(char param_1,undefined1 *param_2)

{
  if (param_1 == '\x03') {
    *param_2 = 1;
    return;
  }
  if (param_1 == '\x02') {
    *param_2 = 0;
    return;
  }
  *param_2 = param_1 == '\x01';
  return;
}

