
void FUN_000cd7c0(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    DAT_fffecc91 = param_5 == '\0';
    DAT_fffecc90 = DAT_fffecc91;
  }
  *param_6 = DAT_fffecc91;
  return;
}

