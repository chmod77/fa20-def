
void FUN_001084ec(char param_1,char param_2,short param_3,undefined1 *param_4)

{
  if (param_1 != '\0') {
    DAT_fffedb50 = 0;
    if (param_3 != 16000) {
      DAT_fffedb50 = DAT_fffedb51;
    }
    if (param_2 != '\0') {
      DAT_fffedb50 = 1;
    }
  }
  DAT_fffedb51 = 0;
  if (param_1 != '\0') {
    DAT_fffedb51 = DAT_fffedb50;
  }
  *param_4 = DAT_fffedb51;
  return;
}

