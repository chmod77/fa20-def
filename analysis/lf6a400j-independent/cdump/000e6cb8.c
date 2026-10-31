
void FUN_000e6cb8(byte param_1,char param_2,char param_3,ushort param_4,char param_5,char param_6,
                 char *param_7)

{
  char cVar1;
  
  cVar1 = DAT_fffed385;
  if ((((param_3 != '\0') && (0x7c < param_4)) && (param_5 == '\0')) &&
     (cVar1 = -1, DAT_fffed385 != -1)) {
    cVar1 = DAT_fffed385 + '\x01';
  }
  if (((param_6 != '\0') || (DAT_fffed384 < param_1)) || ((param_2 != '\0' || (param_3 == '\0')))) {
    cVar1 = '\0';
  }
  *param_7 = cVar1;
  DAT_fffed385 = cVar1;
  DAT_fffed384 = param_1;
  return;
}

