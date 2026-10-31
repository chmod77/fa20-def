
void FUN_0011038c(char param_1,char param_2,char param_3,char param_4,char *param_5)

{
  char cVar1;
  
  cVar1 = DAT_fffedd2c;
  if ((((param_1 == '\x02') && (param_2 == '\x14')) && (param_3 == '\x02')) &&
     ((param_4 != '\0' && (cVar1 = -1, DAT_fffedd2c != -1)))) {
    cVar1 = DAT_fffedd2c + '\x01';
  }
  if ((param_1 == '@') || (param_1 == '\b')) {
    cVar1 = '\0';
  }
  *param_5 = cVar1;
  DAT_fffedd2c = cVar1;
  return;
}

