
void FUN_0010fbf4(ushort param_1,ushort param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,byte param_9,char param_10,byte *param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  
  bVar1 = false;
  if ((param_3 == '\0') && (param_4 == '\0')) {
    bVar1 = true;
  }
  bVar2 = false;
  if ((param_5 == '\0') && (param_6 == '\0')) {
    bVar2 = true;
  }
  if (((((param_1 < 2000) && (param_2 < 400)) && (bVar1)) && ((bVar2 && (param_7 != '\0')))) &&
     (param_8 == '\0')) {
    bVar4 = 0xfe;
    if (param_9 != 0xff) {
      bVar4 = param_9;
    }
    param_9 = bVar4 + 1;
    if (0x50 < param_9) {
      param_9 = 0x50;
    }
  }
  if (param_10 == '\0') {
    bVar3 = false;
    if (((param_1 < 2000) && (param_2 < 400)) && ((bVar1 && (bVar2)))) {
      bVar3 = true;
    }
    if (bVar3) {
      *param_11 = param_9;
    }
    else {
      *param_11 = 0;
    }
  }
  else {
    *param_11 = 0x50;
  }
  return;
}

