
void FUN_000d2a3c(char param_1,byte param_2,char param_3,ushort param_4,char param_5,char param_6,
                 char *param_7)

{
  char cVar1;
  
  cVar1 = param_5;
  if (((param_6 != '\0') && (DAT_fffecdcc == '\0')) && (cVar1 = -1, param_5 != -1)) {
    cVar1 = param_5 + '\x01';
  }
  if ((((param_1 == '\0') && (param_2 < 0x6e)) && ((param_3 != '\0' || (DAT_fffecdcd == '\0')))) &&
     (param_4 < 30000)) {
    *param_7 = cVar1;
  }
  else {
    *param_7 = '\0';
  }
  DAT_fffecdcd = param_3;
  DAT_fffecdcc = param_6;
  return;
}

