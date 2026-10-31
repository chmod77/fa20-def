
void FUN_0010ad40(ushort param_1,ushort param_2,char param_3,char param_4,char param_5,byte param_6,
                 char param_7,char *param_8,undefined4 param_9)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  
  bVar1 = false;
  if ((param_4 != '\0') && (param_3 != '\0')) {
    bVar1 = true;
  }
  bVar2 = false;
  if (((param_3 != '\0') && (0x4b0e < param_1)) && (0x4732 < param_2)) {
    bVar2 = true;
  }
  *(bool *)param_9 = bVar2;
  cVar3 = param_7;
  if (((bVar1) && (param_5 != '\0')) && ((DAT_fffedc98 < param_6 && (cVar3 = -1, param_7 != -1)))) {
    cVar3 = param_7 + '\x01';
  }
  if ((bVar1) && (bVar2)) {
    *param_8 = '\0';
  }
  else {
    *param_8 = cVar3;
  }
  DAT_fffedc98 = param_6;
  return;
}

