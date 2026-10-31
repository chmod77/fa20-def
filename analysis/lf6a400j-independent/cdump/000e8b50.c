
void FUN_000e8b50(byte param_1,byte param_2,char param_3,char *param_4)

{
  char cVar1;
  
  cVar1 = '\x01';
  if (DAT_fffed3ec <= param_2) {
    cVar1 = DAT_fffed3ee;
  }
  if ((param_3 != '\0') || ((param_1 < DAT_fffed3ed && (DAT_fffed3ee != '\0')))) {
    cVar1 = '\0';
  }
  *param_4 = cVar1;
  DAT_fffed3ee = cVar1;
  DAT_fffed3ed = param_1;
  DAT_fffed3ec = param_2;
  return;
}

