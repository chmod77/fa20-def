
void FUN_000dae74(undefined2 param_1,char param_2,byte param_3,undefined2 param_4,
                 undefined2 *param_5)

{
  char cVar1;
  
  cVar1 = '\x01';
  if (param_2 == '\0') {
    cVar1 = DAT_fffed054;
  }
  if ((cVar1 == '\0') || (DAT_fffed055 <= param_3)) {
    *param_5 = param_4;
  }
  else {
    *param_5 = param_1;
  }
  DAT_fffed055 = param_3;
  DAT_fffed054 = cVar1;
  return;
}

