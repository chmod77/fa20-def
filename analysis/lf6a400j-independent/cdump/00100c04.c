
void FUN_00100c04(char param_1,uint param_2,uint param_3,char param_4,char param_5,byte param_6,
                 undefined1 *param_7)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = (int)((param_3 & 0xffff) - 0x334) <= (int)(param_2 & 0xffff);
  if (!(bool)cVar2) {
    cVar2 = DAT_fffed9dc;
  }
  if ((param_4 == '\x03') || (param_4 == '\x04')) {
    cVar2 = '\0';
  }
  if (param_1 == '\x01') {
    *param_7 = 0;
  }
  else {
    uVar1 = 0;
    if ((((param_4 == '\0') && ((cVar2 != '\0' || (0x28 < param_6)))) || (param_4 == '\x01')) &&
       (param_5 != '\0')) {
      uVar1 = 1;
    }
    *param_7 = uVar1;
  }
  DAT_fffed9dc = cVar2;
  return;
}

