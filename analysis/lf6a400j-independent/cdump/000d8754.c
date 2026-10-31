
void FUN_000d8754(char param_1,char param_2,char param_3,undefined1 param_4,undefined1 *param_5)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = param_1 != '\0';
  bVar2 = DAT_fffecf70 != '\0';
  if ((bVar2) || (param_1 == '\0')) {
    if ((!bVar2) && (((!bVar1 && (param_2 == '\0')) || (param_2 == '\0')))) {
      *param_5 = 0;
      DAT_fffecf70 = 1;
      return;
    }
    if (((((bVar2) || (bVar1)) || (param_3 != '\0')) && ((!bVar2 && (!bVar1)))) && (param_3 != '\0')
       ) {
      *param_5 = 2;
      DAT_fffecf70 = 1;
      return;
    }
  }
  *param_5 = param_4;
  DAT_fffecf70 = 1;
  return;
}

