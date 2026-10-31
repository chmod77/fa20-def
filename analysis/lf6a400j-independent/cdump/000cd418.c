
void FUN_000cd418(char param_1,ushort param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = true;
  if (((param_4 == '\0') || (param_6 != '\x01')) && ((param_5 == '\0' || (param_7 != '\x01')))) {
    bVar1 = false;
  }
  cVar2 = DAT_fffecc73;
  if (bVar1) {
    cVar2 = false;
    if (((0x6665 < param_2) && (param_3 != '\0')) && (param_1 != '\0')) {
      cVar2 = true;
    }
    DAT_fffecc70 = 0;
    if (param_1 != '\0') {
      DAT_fffecc70 = DAT_fffecc72;
    }
    DAT_fffecc72 = DAT_fffecc70;
    if (((bool)cVar2) && (DAT_fffecc73 != '\0')) {
      DAT_fffecc70 = 1;
      DAT_fffecc72 = DAT_fffecc70;
    }
  }
  DAT_fffecc73 = cVar2;
  if (bVar1) {
    DAT_fffecc71 = DAT_fffecc70;
  }
  *param_8 = DAT_fffecc71;
  return;
}

