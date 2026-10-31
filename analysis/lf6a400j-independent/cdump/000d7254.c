
void FUN_000d7254(ushort param_1,ushort param_2,char param_3,char param_4,char *param_5)

{
  char cVar1;
  
  if ((param_1 < 0x5666) && (((0x42a < param_2 || (param_3 != '\0')) && (param_4 != '\0')))) {
    cVar1 = '\x01';
    if (DAT_fffecee4 == '\0') goto LAB_000d7288;
  }
  cVar1 = DAT_fffecee4;
LAB_000d7288:
  if (param_3 != '\0') {
    cVar1 = '\0';
  }
  *param_5 = cVar1;
  DAT_fffecee4 = cVar1;
  return;
}

