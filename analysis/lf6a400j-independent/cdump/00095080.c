
void FUN_00095080(byte param_1,short param_2,byte param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,byte *param_9)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = DAT_fffebec8 + param_5;
  if (bVar1 < DAT_fffebec8) {
    bVar1 = 0xff;
  }
  if (param_3 < bVar1) {
    bVar1 = param_3;
  }
  bVar2 = DAT_fffebec8;
  if (param_6 != '\0') {
    bVar2 = bVar1;
  }
  if ((param_2 == 0) && (DAT_fffebec8 = bVar2, param_4 != '\0')) {
    DAT_fffebec8 = param_3;
  }
  if (DAT_fffebec9 < param_1) {
    DAT_fffebec8 = bVar1;
  }
  if (param_1 == 0) {
    DAT_fffebec8 = 0;
  }
  else if ((param_7 != '\0') || (param_8 != '\0')) {
    DAT_fffebec8 = 0;
  }
  *param_9 = DAT_fffebec8;
  DAT_fffebec9 = param_1;
  return;
}

