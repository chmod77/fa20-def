
void FUN_0012cbd0(char param_1,char param_2,char param_3,byte param_4,short param_5,short *param_6)

{
  short sVar1;
  
  sVar1 = param_5;
  if ((((param_2 == '\0') && (param_3 == '\0')) && (DAT_fffee47c < param_4)) &&
     (sVar1 = -1, param_5 != -1)) {
    sVar1 = param_5 + 1;
  }
  if ((param_1 == '\x01') && (param_5 == -1)) {
    *param_6 = 0;
  }
  else {
    *param_6 = sVar1;
  }
  DAT_fffee47c = param_4;
  return;
}

