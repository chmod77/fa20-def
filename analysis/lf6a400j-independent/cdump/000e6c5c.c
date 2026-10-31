
void FUN_000e6c5c(char param_1,char param_2,byte param_3,ushort param_4,char param_5,char *param_6)

{
  char cVar1;
  
  if ((((param_1 != '\0') && (param_2 != '\0')) && (0x18 < param_3)) && (param_4 < 0x1e00)) {
    cVar1 = '\x01';
    if (DAT_fffed380 == '\0') goto LAB_000e6c96;
  }
  cVar1 = DAT_fffed380;
LAB_000e6c96:
  if ((param_5 != '\0') || (param_1 == '\0')) {
    cVar1 = '\0';
  }
  *param_6 = cVar1;
  DAT_fffed380 = cVar1;
  return;
}

