
void FUN_000c3858(ushort param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = DAT_fffeca6c;
  if ((0x6665 < param_1) && (cVar1 = '\0', DAT_fffeca6c != '\0')) {
    cVar1 = DAT_fffeca6c + -1;
  }
  *param_2 = cVar1;
  DAT_fffeca6c = cVar1;
  return;
}

