
void FUN_000b6764(char param_1,char param_2,undefined1 *param_3)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffec77e == '\0') {
      DAT_fffec77d = '\0';
      DAT_fffec77e = '\x01';
    }
    DAT_fffec77c = 1;
    cVar2 = -1;
    if (DAT_fffec77d != -1) {
      cVar2 = DAT_fffec77d + '\x01';
    }
  }
  else {
    DAT_fffec77e = '\0';
    cVar2 = DAT_fffec77d;
  }
  DAT_fffec77d = cVar2;
  if (bVar1) {
    *param_3 = DAT_fffec77c;
    return;
  }
  *param_3 = 0;
  return;
}

