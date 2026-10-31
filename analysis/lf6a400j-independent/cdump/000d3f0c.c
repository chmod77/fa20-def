
void FUN_000d3f0c(char param_1,char param_2,byte param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = '\0';
  if (0xf8 < param_3) {
    cVar2 = DAT_fffece38;
  }
  if (0xf9 < param_3) {
    cVar2 = '\x01';
  }
  uVar1 = 0;
  if (((param_1 != '\0') && (param_2 == '\0')) && (cVar2 != '\0')) {
    uVar1 = 1;
  }
  *param_4 = uVar1;
  DAT_fffece38 = cVar2;
  return;
}

