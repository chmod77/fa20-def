
char FUN_0004dbec(int param_1,uint param_2,uint param_3,int *param_4)

{
  char cVar1;
  
  cVar1 = -param_1 - 1U < param_2;
  if ((bool)cVar1) {
    *param_4 = (param_2 - (-param_1 - 1U)) + -1;
  }
  else {
    *param_4 = param_1 + param_2;
  }
  if (-*param_4 - 1U < param_3) {
    *param_4 = (param_3 - (-*param_4 - 1U)) + -1;
    cVar1 = cVar1 + '\x01';
  }
  else {
    *param_4 = *param_4 + param_3;
  }
  return cVar1;
}

