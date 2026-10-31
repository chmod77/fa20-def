
void FUN_000baeb8(char param_1,char *param_2,undefined1 *param_3,undefined1 *param_4)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = DAT_fffec884 < 4;
  if ((param_1 == '\0' || bVar1) || (*param_2 == '\0')) {
    *param_4 = 0x7f;
  }
  else {
    *param_4 = *param_3;
  }
  if ((param_1 == '\0' || bVar1) || (param_2[1] == '\0')) {
    param_4[1] = 0x7f;
  }
  else {
    param_4[1] = param_3[1];
  }
  if (param_1 == '\0') {
    DAT_fffec884 = '\0';
  }
  else {
    bVar2 = 0xfe;
    if (DAT_fffec884 != 0xff) {
      bVar2 = DAT_fffec884;
    }
    DAT_fffec884 = bVar2 + 1;
  }
  return;
}

