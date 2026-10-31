
void FUN_000d35e4(char param_1,char param_2,ushort param_3,byte param_4,char *param_5)

{
  char cVar1;
  
  if ((param_2 == '\0') || (0x9ff < param_3)) {
    cVar1 = param_4 + 1;
    if (0xfe < param_4) {
      cVar1 = -1;
    }
  }
  else {
    cVar1 = '\0';
  }
  if (param_1 != '\0') {
    *param_5 = cVar1;
    return;
  }
  *param_5 = -1;
  return;
}

