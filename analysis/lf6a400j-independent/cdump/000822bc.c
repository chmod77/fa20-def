
void FUN_000822bc(char param_1,undefined1 *param_2)

{
  if ((param_1 != '\x16') && (param_1 != '\x17')) {
    if (param_1 == '\x14') {
      *param_2 = 0x31;
      return;
    }
    *param_2 = 0x10;
    return;
  }
  *param_2 = 0x21;
  return;
}

