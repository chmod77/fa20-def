
void FUN_00108564(char param_1,byte param_2,byte param_3,byte param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_3 == 0) && (param_2 == 0)) {
    bVar1 = true;
  }
  if ((param_1 != '\0') &&
     (((param_2 < DAT_fffedb5b || (param_3 < DAT_fffedb58)) || ((bVar1 && (param_4 < DAT_fffedb5a)))
      ))) {
    DAT_fffedb59 = 1;
  }
  if (((param_1 == '\0') || ((param_5 == '\0' && (param_4 != 0)))) ||
     ((bVar1 && ((param_4 != 0 && (param_5 != '\0')))))) {
    DAT_fffedb59 = 0;
  }
  *param_6 = DAT_fffedb59;
  DAT_fffedb5b = param_2;
  DAT_fffedb58 = param_3;
  DAT_fffedb5a = param_4;
  return;
}

