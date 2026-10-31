
void FUN_000f334c(char param_1,undefined1 param_2,char param_3,undefined1 *param_4)

{
  bool bVar1;
  
  if (param_3 != '\0') {
    *param_4 = param_3 == '\0';
    return;
  }
  bVar1 = param_1 == '\x01';
  if ((!bVar1) && (bVar1 = param_1 == '\x02', !bVar1)) {
    *param_4 = param_2;
    return;
  }
  *param_4 = bVar1;
  return;
}

