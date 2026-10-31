
void FUN_0010a090(char param_1,char param_2,ushort param_3,ushort param_4,char *param_5)

{
  char cVar1;
  ushort uVar2;
  
  uVar2 = param_3 - param_4;
  if (param_3 < param_4) {
    uVar2 = 0;
  }
  if (((param_1 == '\0') || (param_2 == '\0')) || (cVar1 = '\0', uVar2 < 0x396)) {
    cVar1 = DAT_fffedc38;
  }
  if (((param_1 != '\0') && (param_2 != '\0')) &&
     ((uVar2 < 0x396 && (cVar1 = -1, DAT_fffedc38 != -1)))) {
    cVar1 = DAT_fffedc38 + '\x01';
  }
  *param_5 = cVar1;
  DAT_fffedc38 = cVar1;
  return;
}

