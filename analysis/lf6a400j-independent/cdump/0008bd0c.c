
void FUN_0008bd0c(uint param_1,byte param_2,char param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  
  cVar1 = '\x01';
  if (param_4 != '\x01') {
    cVar1 = DAT_fffebc60;
  }
  if (param_5 != '\0') {
    cVar1 = '\0';
  }
  DAT_fffebc60 = cVar1;
  if ((((param_2 < 3) || (param_3 == '\0')) || (param_4 != '\n')) || (cVar1 != '\0')) {
    *param_6 = 0;
  }
  else {
    uVar3 = (param_1 & 0xffff) >> 7;
    uVar2 = 0;
    if (0xff < uVar3) {
      uVar2 = (undefined1)uVar3;
    }
    *param_6 = uVar2;
  }
  return;
}

