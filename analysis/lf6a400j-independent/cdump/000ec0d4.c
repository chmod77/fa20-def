
void FUN_000ec0d4(uint param_1,uint param_2,uint param_3,char *param_4)

{
  char cVar1;
  
  cVar1 = DAT_fffed524;
  if ((DAT_fffed524 != '\0') && (8 < (int)((param_3 & 0xffff) - (param_1 & 0xffff)))) {
    cVar1 = '\0';
  }
  if ((DAT_fffed524 == '\0') && (8 < (int)((param_1 & 0xffff) - (param_2 & 0xffff)))) {
    cVar1 = '\x01';
  }
  *param_4 = cVar1;
  DAT_fffed524 = cVar1;
  return;
}

