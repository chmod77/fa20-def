
void FUN_000ad024(byte param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = true;
  if ((param_1 <= DAT_fffec526) && (1 < DAT_fffec525)) {
    bVar1 = false;
  }
  *(bool *)param_2 = bVar1;
  if (bVar1) {
    cVar2 = '\x06';
  }
  else {
    cVar2 = '\0';
    if (DAT_fffec524 != '\0') {
      cVar2 = DAT_fffec524 + -1;
    }
  }
  DAT_fffec525 = cVar2;
  if (cVar2 == '\0') {
    DAT_fffec525 = '\0';
  }
  DAT_fffec526 = param_1;
  DAT_fffec524 = cVar2;
  return;
}

