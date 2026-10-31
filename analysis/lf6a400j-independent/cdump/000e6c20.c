
void FUN_000e6c20(char param_1,byte param_2,char param_3,char *param_4)

{
  char cVar1;
  
  if ((param_1 != '\0') && (0x18 < param_2)) {
    cVar1 = '\x01';
    if (DAT_fffed37c == '\0') goto LAB_000e6c42;
  }
  cVar1 = DAT_fffed37c;
LAB_000e6c42:
  if ((param_3 != '\0') || (param_1 == '\0')) {
    cVar1 = '\0';
  }
  *param_4 = cVar1;
  DAT_fffed37c = cVar1;
  return;
}

