
void FUN_000c3480(char param_1,char param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  
  if ((param_1 == '\0') && (param_2 != '\0')) {
    bVar2 = 0xf;
  }
  else {
    bVar2 = 7;
  }
  cVar1 = '\0';
  if ((DAT_fffeca54 < bVar2) && (cVar1 = -1, DAT_fffeca54 != 0xff)) {
    cVar1 = DAT_fffeca54 + 1;
  }
  *param_4 = cVar1;
  DAT_fffeca54 = cVar1;
  return;
}

