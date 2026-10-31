
void FUN_0011cd84(char param_1,byte param_2,undefined1 param_3,undefined1 *param_4)

{
  if (param_1 != '\0') {
    *param_4 = param_1 == '\0';
    return;
  }
  if (199 < param_2) {
    *param_4 = 1;
    return;
  }
  *param_4 = param_3;
  return;
}

