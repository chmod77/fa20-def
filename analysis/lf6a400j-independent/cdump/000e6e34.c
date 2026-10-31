
void FUN_000e6e34(byte param_1,char param_2,byte param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,byte *param_9)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = false;
  if (((param_4 != '\0') && (param_5 != '\0')) && (param_6 != '\0')) {
    bVar1 = true;
  }
  bVar2 = 0;
  if ((bVar1) && (param_7 != '\0')) {
    bVar2 = 1;
  }
  if (((!bVar1) || (DAT_fffed38c <= bVar2)) || (DAT_fffed38e <= param_3)) {
    param_3 = DAT_fffed38e;
  }
  if (param_2 != '\0') {
    param_3 = DAT_fffed38e;
  }
  if (((param_8 != '\0') || (DAT_fffed38f == '\0')) || (DAT_fffed38d < param_1)) {
    param_3 = 0xff;
  }
  *param_9 = param_3;
  DAT_fffed38e = param_3;
  DAT_fffed38f = 1;
  DAT_fffed38d = param_1;
  DAT_fffed38c = bVar2;
  return;
}

