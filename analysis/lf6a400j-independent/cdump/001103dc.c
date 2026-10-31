
void FUN_001103dc(char param_1,char param_2,char param_3,char param_4,char param_5,char *param_6)

{
  char cVar1;
  
  cVar1 = DAT_fffedd30;
  if ((((param_3 == '\x02') && (param_4 == '\x14')) && (param_5 == '\x01')) &&
     (cVar1 = -1, DAT_fffedd30 != -1)) {
    cVar1 = DAT_fffedd30 + '\x01';
  }
  if ((param_1 != '\0') || (param_2 == '\0')) {
    cVar1 = '\0';
  }
  *param_6 = cVar1;
  DAT_fffedd30 = cVar1;
  return;
}

