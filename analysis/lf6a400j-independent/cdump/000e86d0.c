
void FUN_000e86d0(char param_1,char param_2,byte param_3,char param_4,char *param_5)

{
  char cVar1;
  
  cVar1 = DAT_fffed3bd;
  if (((param_1 != '\0') && (param_2 == '\0')) && (cVar1 = -1, DAT_fffed3bd != -1)) {
    cVar1 = DAT_fffed3bd + '\x01';
  }
  if ((param_4 != '\0') || (DAT_fffed3bc < param_3)) {
    cVar1 = '\0';
  }
  *param_5 = cVar1;
  DAT_fffed3bd = cVar1;
  DAT_fffed3bc = param_3;
  return;
}

