
void FUN_000e6ecc(char param_1,char param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  
  if ((param_1 != '\x02') || (cVar2 = '\x01', DAT_fffed391 != '\x01')) {
    cVar2 = DAT_fffed390;
  }
  if (param_1 == '\x05') {
    cVar2 = '\0';
  }
  cVar1 = DAT_fffed392;
  if (((param_1 == '\x03') && (cVar2 != '\0')) && (cVar1 = -1, DAT_fffed392 != -1)) {
    cVar1 = DAT_fffed392 + '\x01';
  }
  if ((param_2 != '\0') || (param_1 == '\x01')) {
    cVar1 = '\0';
  }
  *param_3 = cVar1;
  DAT_fffed390 = cVar2;
  DAT_fffed392 = cVar1;
  DAT_fffed391 = param_1;
  return;
}

