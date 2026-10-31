
void FUN_001297c8(char param_1,byte param_2,short param_3,short *param_4)

{
  short sVar1;
  
  sVar1 = param_3;
  if ((DAT_fffee3c4 < param_2) && (sVar1 = -1, param_3 != -1)) {
    sVar1 = param_3 + 1;
  }
  if ((param_1 == '\x01') && (param_3 == -1)) {
    *param_4 = 0;
  }
  else {
    *param_4 = sVar1;
  }
  DAT_fffee3c4 = param_2;
  return;
}

