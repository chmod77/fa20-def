
void FUN_000acf80(char param_1,char param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  
  if (param_1 == '\0') {
    param_2 = param_3;
  }
  if (param_2 == '\0') {
    DAT_fffec51c = '\x1e';
  }
  else if (DAT_fffec51c == '\0') {
    DAT_fffec51c = '\0';
  }
  else {
    DAT_fffec51c = DAT_fffec51c + -1;
  }
  cVar1 = '\0';
  if (DAT_fffec51c != '\0') {
    cVar1 = DAT_fffec51c;
  }
  *(bool *)param_4 = cVar1 == '\0';
  return;
}

