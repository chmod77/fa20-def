
void FUN_00110274(char param_1,char param_2,char param_3,short param_4,byte param_5,byte param_6,
                 char param_7,undefined1 *param_8)

{
  if ((param_1 != '\0') &&
     (((((param_2 != '\0' && (param_3 == '\0')) && (param_4 == 400)) && (param_5 < 0x14)) ||
      ((param_3 == '\0' && (0x4f < param_6)))))) {
    DAT_fffedd20 = 1;
  }
  if (param_7 != '\0') {
    DAT_fffedd20 = 0;
  }
  *param_8 = DAT_fffedd20;
  return;
}

