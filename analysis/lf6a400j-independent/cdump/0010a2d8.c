
void FUN_0010a2d8(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = '\x01';
  if (param_1 == '\0') {
    cVar1 = DAT_fffedc50;
  }
  uVar2 = 1;
  if ((cVar1 == '\0') && (((param_2 != '\x01' || (param_3 != '\x01')) || (param_4 != '\x01')))) {
    uVar2 = 0;
  }
  DAT_fffedc50 = cVar1;
  *param_5 = uVar2;
  return;
}

