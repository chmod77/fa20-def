
void FUN_000eb684(ushort param_1,undefined1 param_2,char param_3,undefined1 *param_4)

{
  if (param_3 != '\0') {
    *param_4 = param_3 == '\0';
    return;
  }
  if (499 < param_1) {
    *param_4 = 1;
    return;
  }
  *param_4 = param_2;
  return;
}

