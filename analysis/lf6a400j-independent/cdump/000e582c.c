
void FUN_000e582c(char param_1,ushort param_2,ushort param_3,char param_4,undefined1 *param_5)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = DAT_fffed32d;
  bVar1 = false;
  if (((param_1 != '\0') && (0x13f < param_2)) && (param_3 < 0x22f)) {
    bVar1 = true;
  }
  bVar3 = 0;
  if (bVar1) {
    bVar3 = bVar2;
    if (DAT_fffed32d == 0xff) {
      DAT_fffed32d = -1;
    }
    else {
      DAT_fffed32d = DAT_fffed32d + 1;
    }
  }
  else {
    DAT_fffed32d = '\0';
  }
  if (((bVar1) && (0x4a < bVar3)) ||
     ((param_1 != '\0' && ((0x13f < param_2 && (param_3 >= 0x22f)))))) {
    DAT_fffed32c = 1;
  }
  if (param_4 != '\0') {
    DAT_fffed32c = 0;
  }
  *param_5 = DAT_fffed32c;
  return;
}

