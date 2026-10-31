
void FUN_000d2abc(char param_1,byte param_2,ushort param_3,char param_4,char param_5,char param_6,
                 ushort param_7,char *param_8)

{
  byte bVar1;
  char cVar2;
  
  if (param_7 < 0x5d53) {
    if (param_7 < 0x4ffe) {
      bVar1 = 0x6e;
    }
    else {
      bVar1 = 0x50;
    }
  }
  else {
    bVar1 = 0x32;
  }
  cVar2 = param_4;
  if ((((param_5 != '\0') && (DAT_fffecdd0 == '\0')) && (param_6 != '\0')) &&
     (cVar2 = -1, param_4 != -1)) {
    cVar2 = param_4 + '\x01';
  }
  if (((param_1 == '\0') && (param_2 < bVar1)) && (param_3 < 0xccd0)) {
    *param_8 = cVar2;
  }
  else {
    *param_8 = '\0';
  }
  DAT_fffecdd0 = param_5;
  return;
}

