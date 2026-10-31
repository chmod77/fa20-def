
void FUN_000eb0dc(char param_1,ushort param_2,short *param_3)

{
  if (param_1 != '\0') {
    *param_3 = 1;
    return;
  }
  if (0xfffe < param_2) {
    *param_3 = -1;
    return;
  }
  *param_3 = param_2 + 1;
  return;
}

