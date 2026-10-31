
void FUN_000e6158(char param_1,char param_2,undefined1 param_3,undefined1 *param_4)

{
  bool bVar1;
  
  if (param_2 != '\0') {
    *param_4 = param_2 == '\0';
    return;
  }
  bVar1 = param_1 == '\x01';
  if ((!bVar1) && (bVar1 = param_1 == '\x02', !bVar1)) {
    *param_4 = param_3;
    return;
  }
  *param_4 = bVar1;
  return;
}

