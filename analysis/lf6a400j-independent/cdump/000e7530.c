
void FUN_000e7530(char param_1,char param_2,ushort param_3,char param_4,char param_5,short param_6,
                 char param_7,char param_8,char param_9,undefined1 param_10,undefined1 *param_11)

{
  bool bVar1;
  
  bVar1 = true;
  if ((param_1 == '\0') || (param_2 != '\0')) {
    bVar1 = false;
  }
  if (param_7 == '\0') {
    if ((((((bVar1) && (200 < param_3)) && (param_4 != '\0')) && (param_5 != '\0')) ||
        ((bVar1 && (param_6 != 0)))) ||
       (((param_1 != '\0' && ((param_3 < 0xc9 && (param_4 != '\0')))) &&
        ((param_8 != '\0' && (param_9 == '\0')))))) {
      *param_11 = 1;
    }
    else {
      *param_11 = param_10;
    }
  }
  else {
    *param_11 = 0;
  }
  return;
}

