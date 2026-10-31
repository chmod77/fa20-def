
void FUN_000daf30(undefined2 param_1,char param_2,byte param_3,undefined2 param_4,
                 undefined2 *param_5)

{
  char cVar1;
  
  cVar1 = '\x01';
  if (param_2 == '\0') {
    cVar1 = DAT_fffed05c;
  }
  if ((cVar1 == '\0') || (DAT_fffed05d <= param_3)) {
    *param_5 = param_4;
  }
  else {
    *param_5 = param_1;
  }
  DAT_fffed05d = param_3;
  DAT_fffed05c = cVar1;
  return;
}

