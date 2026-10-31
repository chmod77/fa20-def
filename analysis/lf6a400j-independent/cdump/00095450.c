
void FUN_00095450(byte param_1,char *param_2)

{
  if (param_1 < DAT_fffebed4) {
    *param_2 = '\0';
  }
  else {
    *param_2 = param_1 - DAT_fffebed4;
  }
  DAT_fffebed4 = param_1;
  return;
}

