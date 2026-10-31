
void FUN_00107cb8(char param_1,char param_2,byte param_3,char param_4,char param_5,char param_6,
                 char param_7,byte param_8,undefined1 *param_9)

{
  if (param_1 != '\0') {
    if ((((param_3 < DAT_fffedb2a) || (param_6 == '\0')) || (param_7 != '\0')) ||
       (DAT_fffedb29 < param_8)) {
      DAT_fffedb2b = 0;
    }
    if (((param_2 != '\0') || (param_3 != 0)) ||
       ((param_4 != '\0' || (DAT_fffedb28 = DAT_fffedb2b, param_5 != '\0')))) {
      DAT_fffedb28 = 1;
    }
  }
  DAT_fffedb2b = 0;
  if (param_1 != '\0') {
    DAT_fffedb2b = DAT_fffedb28;
  }
  *param_9 = DAT_fffedb2b;
  DAT_fffedb2a = param_3;
  DAT_fffedb29 = param_8;
  return;
}

