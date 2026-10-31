
void FUN_000e5f28(char param_1,char param_2,char param_3,char param_4,char *param_5)

{
  char cVar1;
  
  if (((((DAT_fffed348 < 0x19) || (param_2 == '\0')) || (param_1 == '\0')) ||
      (cVar1 = '\0', param_3 != '\0')) && (cVar1 = -1, DAT_fffed348 != 0xff)) {
    cVar1 = DAT_fffed348 + 1;
  }
  if (((param_4 != '\0') || (param_1 == '\0')) ||
     ((param_1 != '\0' && ((param_2 == '\0' && (DAT_fffed348 >= 0x19)))))) {
    cVar1 = '\0';
  }
  *param_5 = cVar1;
  DAT_fffed348 = cVar1;
  return;
}

