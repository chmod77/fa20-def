
void FUN_000e92d8(char param_1,undefined4 param_2,char param_3,char param_4,char param_5,
                 char param_6,undefined4 param_7,char param_8,char param_9,undefined1 *param_10)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  
  bVar1 = false;
  if ((((param_1 != '\0') && (param_3 != '\0')) && (param_5 != '\0')) &&
     ((param_6 == '\0' && (param_4 == '\0')))) {
    bVar1 = true;
  }
  uVar3 = 1;
  if (!bVar1) {
    uVar3 = DAT_fffed414;
  }
  cVar2 = '\x01';
  if (DAT_fffed415 == '\0') {
    cVar2 = DAT_fffed416;
  }
  if (!bVar1) {
    cVar2 = '\0';
  }
  if (((param_4 != '\0') || (param_8 != '\0')) || ((param_9 == '\0' || (cVar2 != '\0')))) {
    uVar3 = 0;
  }
  *param_10 = uVar3;
  DAT_fffed414 = uVar3;
  DAT_fffed416 = cVar2;
  DAT_fffed415 = uVar3;
  return;
}

