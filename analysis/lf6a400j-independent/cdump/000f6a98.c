
void FUN_000f6a98(char param_1,char param_2,ushort param_3,char param_4,char param_5,
                 undefined1 *param_6,byte *param_7)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  
  bVar2 = DAT_fffed7e4;
  bVar1 = false;
  if ((((param_1 != '\0') && (param_2 == '\0')) && (0xfffe < param_3)) &&
     ((param_4 != '\0' && (param_5 == '\0')))) {
    bVar1 = true;
  }
  bVar3 = 0;
  if (bVar1) {
    bVar3 = bVar2;
    if (DAT_fffed7e4 == 0xff) {
      DAT_fffed7e4 = -1;
    }
    else {
      DAT_fffed7e4 = DAT_fffed7e4 + 1;
    }
  }
  else {
    DAT_fffed7e4 = '\0';
  }
  uVar4 = 0;
  if ((bVar1) && (0x1f < bVar3)) {
    uVar4 = 1;
  }
  *param_6 = uVar4;
  *param_7 = bVar3;
  return;
}

