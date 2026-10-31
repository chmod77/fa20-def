
void FUN_000ce15c(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    DAT_fffecccd = param_5 == '\x02';
    DAT_fffecccc = DAT_fffecccd;
  }
  *param_6 = DAT_fffecccd;
  return;
}

