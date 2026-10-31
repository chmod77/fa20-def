
void FUN_000e4510(char param_1,ushort param_2,char param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((param_3 != '\0') || (cVar1 = '\x01', 0xfffe < param_2)) {
    cVar1 = DAT_fffed2d0;
  }
  if (param_3 != '\0') {
    cVar1 = '\0';
  }
  uVar2 = 0;
  if ((param_1 != '\0') && (cVar1 != '\0')) {
    uVar2 = 1;
  }
  DAT_fffed2d0 = cVar1;
  *param_4 = uVar2;
  return;
}

