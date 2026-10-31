
void FUN_000e8b00(char param_1,char param_2,char param_3,ushort param_4,char param_5,char param_6,
                 char *param_7)

{
  if ((((param_6 != '\0') || (param_1 != '\0')) || (param_2 == '\0')) ||
     ((param_3 == '\0' && (param_5 != '\0')))) {
    *param_7 = '\0';
    return;
  }
  if (((param_2 != '\0') && (0x7c < param_4)) && (param_5 == '\0')) {
    *param_7 = '\x01';
    return;
  }
  *param_7 = param_5;
  return;
}

