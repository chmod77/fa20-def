
void FUN_000cd690(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  bool bVar1;
  bool bVar2;
  
  if (param_4 != '\0') {
    bVar1 = true;
    if ((param_1 != '\x02') && (param_1 != '\x04')) {
      bVar1 = false;
    }
    if ((bVar1) || (DAT_fffecc84 = 0, param_3 != '\0')) {
      DAT_fffecc84 = DAT_fffecc85;
    }
    bVar2 = true;
    if ((param_1 != '\x03') && (param_1 != '\x05')) {
      bVar2 = false;
    }
    if ((((bVar2) && (param_2 != DAT_fffecc86)) && (param_3 != '\0')) ||
       (((bVar1 && (param_2 != DAT_fffecc86)) && (param_3 == '\0')))) {
      DAT_fffecc84 = 1;
    }
    else if ((!bVar2) && (param_3 != '\0')) {
      DAT_fffecc84 = 0;
    }
  }
  *param_5 = DAT_fffecc84;
  DAT_fffecc85 = DAT_fffecc84;
  DAT_fffecc86 = param_2;
  return;
}

