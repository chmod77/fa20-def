
void FUN_0009f0f8(char param_1,char param_2,char param_3,char *param_4)

{
  if ((((param_3 == '\x03') || (param_3 == '\x04')) || (param_3 == '\x06')) || (param_3 == '\a')) {
    if ((param_1 == '\0') || (param_1 == '\x10')) {
      if (DAT_fffec0f5 == -1) {
        DAT_fffec0f4 = -1;
      }
      else {
        DAT_fffec0f4 = DAT_fffec0f5 + '\x01';
      }
    }
    else {
      DAT_fffec0f4 = '\0';
    }
  }
  if ((param_2 == '\x02') || (DAT_fffec0f5 = DAT_fffec0f4, param_3 == '\x02')) {
    DAT_fffec0f5 = '\0';
  }
  *param_4 = DAT_fffec0f5;
  return;
}

