
void FUN_000cd4b0(char param_1,ushort param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = true;
  if (((param_4 == '\0') || (param_6 != '\x01')) && ((param_5 == '\0' || (param_7 != '\x01')))) {
    bVar1 = false;
  }
  cVar2 = DAT_fffecc77;
  if (bVar1) {
    cVar2 = false;
    if (((0x6665 < param_2) && (param_1 != '\0')) && (param_3 != '\0')) {
      cVar2 = true;
    }
    DAT_fffecc74 = 0;
    if (param_3 != '\0') {
      DAT_fffecc74 = DAT_fffecc76;
    }
    DAT_fffecc76 = DAT_fffecc74;
    if (((bool)cVar2) && (DAT_fffecc77 != '\0')) {
      DAT_fffecc74 = 1;
      DAT_fffecc76 = DAT_fffecc74;
    }
  }
  DAT_fffecc77 = cVar2;
  if (bVar1) {
    DAT_fffecc75 = DAT_fffecc74;
  }
  *param_8 = DAT_fffecc75;
  return;
}

