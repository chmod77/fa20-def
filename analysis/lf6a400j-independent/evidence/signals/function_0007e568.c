
void FUN_0007e568(char param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 *param_5)

{
  char *pcVar1;
  
  pcVar1 = DAT_0007e5bc;
  if (*DAT_0007e5bc == '\0') {
    DAT_0007e5bc[1] = '\0';
    *pcVar1 = '\x01';
  }
  if (pcVar1[1] == '\0') {
    *DAT_0007e5c0 = param_2;
  }
  else {
    (*(code *)PTR_FUN_0007e5c4)(DAT_0007e5c0,param_2,param_4);
  }
  DAT_0007e5bc[1] = '\x01';
  if (param_1 == '\0') {
    *param_5 = param_3;
  }
  else {
    *param_5 = *DAT_0007e5c0;
  }
  return;
}

