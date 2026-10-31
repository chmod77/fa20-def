
void FUN_000e3608(char param_1,ushort param_2,undefined2 *param_3)

{
  if (0x2cff < param_2) {
    if (param_1 != '\0') {
      *param_3 = 0x2d00;
      return;
    }
    *param_3 = 0x2800;
    return;
  }
  if (param_1 != '\0') {
    *param_3 = 0x3080;
    return;
  }
  *param_3 = 0x2800;
  return;
}

