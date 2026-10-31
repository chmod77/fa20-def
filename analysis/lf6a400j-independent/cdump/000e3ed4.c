
void FUN_000e3ed4(char param_1,char param_2,byte param_3,ushort param_4,ushort param_5,char param_6,
                 char param_7,char param_8,char param_9,undefined1 *param_10)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_6 == '\0') {
    bVar1 = 1 < param_3;
  }
  else {
    bVar1 = 0xf331 < param_4;
  }
  uVar2 = 1;
  if ((((!bVar1) && ((param_1 == '\0' || (param_7 == '\0')))) &&
      ((param_5 < 0xfa || (param_8 == '\0')))) && ((param_2 == '\0' || (param_9 == '\0')))) {
    uVar2 = 0;
  }
  *param_10 = uVar2;
  return;
}

