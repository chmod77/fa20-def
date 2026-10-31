
void FUN_000b056c(char param_1,byte param_2,ushort param_3,byte *param_4,byte *param_5)

{
  ushort uVar1;
  
  if (param_1 == '\0') {
    if (DAT_fffec623 != '\0') {
      DAT_fffec620 = 0;
      DAT_fffec621 = 0;
      DAT_fffec623 = '\0';
      DAT_fffec624 = '\0';
    }
  }
  else {
    if (DAT_fffec624 == '\0') {
      DAT_fffec625 = '\0';
      DAT_fffec622 = '\0';
      DAT_fffec624 = '\x01';
      DAT_fffec623 = '\x01';
    }
    if (DAT_fffec625 == '\0') {
      uVar1 = 0x6666;
    }
    else {
      uVar1 = 0x3333;
    }
    DAT_fffec625 = uVar1 <= param_3;
    if (DAT_fffec622 == '\0') {
      uVar1 = 0xb333;
    }
    else {
      uVar1 = 0x8000;
    }
    DAT_fffec622 = uVar1 <= param_3;
    if ((bool)DAT_fffec625) {
      if ((bool)DAT_fffec622) {
        DAT_fffec621 = 2;
      }
      else {
        DAT_fffec621 = 1;
      }
    }
    else {
      DAT_fffec621 = 0;
    }
    DAT_fffec620 = param_2;
    if (param_2 < DAT_fffec621) {
      DAT_fffec620 = DAT_fffec621;
    }
  }
  *param_4 = DAT_fffec620;
  *param_5 = DAT_fffec621;
  return;
}

