
void FUN_000ce24c(char param_1,undefined1 param_2,ushort param_3,undefined1 *param_4)

{
  if (param_1 == '\0') {
    *param_4 = param_2;
    return;
  }
  if ((0x28f < param_3) && (0x7fff < param_3)) {
    *param_4 = 1;
    return;
  }
  *param_4 = 0;
  return;
}

