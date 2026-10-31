
void FUN_0011bd4c(char param_1,char param_2,char param_3,char *param_4)

{
  char cVar1;
  
  cVar1 = param_3;
  if ((param_1 != '\0') && (cVar1 = -1, param_3 != -1)) {
    cVar1 = param_3 + '\x01';
  }
  if (param_2 == '\0') {
    *param_4 = cVar1;
    return;
  }
  *param_4 = '\0';
  return;
}

