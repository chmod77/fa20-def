
/* WARNING: Removing unreachable block (ram,0x000c33a2) */

void FUN_000c3364(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char *param_9)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  bVar1 = true;
  if (((param_2 == '\0') || (param_7 != '\x01')) && ((param_1 == '\0' || (param_8 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    cVar2 = '\0';
    if (param_4 != '\0') {
      cVar2 = '\x02';
    }
    cVar3 = '\0';
    if (param_5 != '\0') {
      cVar3 = '\x04';
    }
    cVar4 = '\0';
    if (param_6 != '\0') {
      cVar4 = '\b';
    }
    DAT_fffeca4c = param_3 + cVar2 + cVar3 + cVar4;
  }
  if (bVar1) {
    DAT_fffeca4d = DAT_fffeca4c;
  }
  *param_9 = DAT_fffeca4d;
  return;
}

