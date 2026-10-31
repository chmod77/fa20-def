
void FUN_000ce22c(char param_1,undefined1 param_2,ushort param_3,undefined1 *param_4)

{
  if (param_1 == '\0') {
    *param_4 = param_2;
    return;
  }
  if (param_3 < 0x290) {
    *param_4 = 0;
    return;
  }
  *param_4 = 1;
  return;
}

