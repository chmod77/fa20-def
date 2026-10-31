
int FUN_0016b49c(char *param_1,char param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)param_2 - (int)*param_1;
  if (iVar2 < 1) {
    cVar1 = *param_1 - (char)((param_3 & 0xff) * -iVar2 + 0xff >> 8);
  }
  else {
    cVar1 = (char)((param_3 & 0xff) * iVar2 + 0xff >> 8) + *param_1;
  }
  *param_1 = cVar1;
  return (int)*param_1;
}

