
void FUN_000db7e4(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,byte *param_8)

{
  byte bVar1;
  
  bVar1 = 1;
  if (((param_4 == '\0') && (param_5 == '\0')) && (param_6 == '\0')) {
    bVar1 = 0;
  }
  if ((param_1 != '\0') && (DAT_fffed07c = bVar1 + DAT_fffed07c, DAT_fffed07c < bVar1)) {
    DAT_fffed07c = 0xff;
  }
  if ((param_7 != '\0') || (param_3 != '\0')) {
    DAT_fffed07c = 0;
  }
  *param_8 = DAT_fffed07c;
  if (param_2 != '\0') {
    DAT_fffed07c = 0;
  }
  return;
}

