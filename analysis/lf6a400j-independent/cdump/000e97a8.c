
void FUN_000e97a8(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  cVar1 = DAT_fffed444;
  if ((param_1 == '\x04') && (cVar1 = -1, DAT_fffed444 != -1)) {
    cVar1 = DAT_fffed444 + '\x01';
  }
  if (param_1 == '\x03') {
    cVar1 = DAT_fffed444;
  }
  if (((param_2 != '\0') || (param_1 == '\x01')) || (param_1 == '\x02')) {
    cVar1 = '\0';
  }
  *param_3 = cVar1;
  DAT_fffed444 = cVar1;
  return;
}

