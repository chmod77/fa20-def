
void FUN_000dafec(undefined2 param_1,char param_2,byte param_3,undefined2 param_4,
                 undefined2 *param_5)

{
  char cVar1;
  
  cVar1 = '\x01';
  if (param_2 == '\0') {
    cVar1 = DAT_fffed064;
  }
  if ((cVar1 == '\0') || (DAT_fffed065 <= param_3)) {
    *param_5 = param_4;
  }
  else {
    *param_5 = param_1;
  }
  DAT_fffed065 = param_3;
  DAT_fffed064 = cVar1;
  return;
}

