
void FUN_00105634(char param_1,char param_2,char param_3,char param_4,char *param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar1 = '\0';
  if (param_1 != '\0') {
    cVar1 = -0x80;
  }
  cVar2 = '\0';
  if (param_4 != '\0') {
    cVar2 = '\x04';
  }
  cVar3 = '\0';
  if (param_3 != '\0') {
    cVar3 = '\b';
  }
  cVar4 = '\0';
  if (param_2 != '\0') {
    cVar4 = '\x10';
  }
  *param_5 = cVar1 + cVar4 + cVar3 + cVar2;
  return;
}

