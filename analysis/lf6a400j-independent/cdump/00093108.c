
void FUN_00093108(byte param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = '\x01';
  if (param_3 != '\x01') {
    cVar1 = DAT_fffebe58;
  }
  if (param_4 != '\0') {
    cVar1 = '\0';
  }
  uVar2 = 0;
  if ((((2 < param_1) && (param_2 != '\0')) && (param_3 == '\n')) && (cVar1 == '\0')) {
    uVar2 = 1;
  }
  DAT_fffebe58 = cVar1;
  *param_5 = uVar2;
  return;
}

