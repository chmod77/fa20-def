
void FUN_000d3f54(char param_1,char param_2,ushort param_3,char param_4,ushort param_5,
                 ushort param_6,byte param_7,char param_8,char param_9,ushort param_10,byte param_11
                 ,undefined1 param_12,undefined1 *param_13)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  
  if (param_1 == '\0') {
    DAT_fffece3e = '\0';
  }
  else {
    bVar1 = true;
    if ((param_10 < 0x3c00) && (param_11 < 0x7b)) {
      bVar1 = false;
    }
    if (bVar1) {
      if (DAT_fffece3e == '\0') {
        DAT_fffece3d = 0;
        DAT_fffece3e = '\x01';
      }
      DAT_fffece3f = 0x18 < DAT_fffece3d;
      bVar2 = 0xff;
      if (DAT_fffece3d != 0xff) {
        bVar2 = DAT_fffece3d + 1;
      }
    }
    else {
      DAT_fffece3e = '\0';
      bVar2 = DAT_fffece3d;
    }
    DAT_fffece3d = bVar2;
    uVar4 = param_6 + 0xc;
    if (uVar4 < param_6) {
      uVar4 = 0xffff;
    }
    if ((((param_2 == '\0') && (0xf7 < param_3)) && (param_4 == '\0')) &&
       (((uVar4 <= param_5 && (0x31 < param_7)) && ((param_8 == '\0' && (param_9 == '\0')))))) {
      cVar3 = '\0';
      if (bVar1) {
        cVar3 = DAT_fffece3f;
      }
      if (cVar3 == '\0') {
        DAT_fffece3c = param_12;
      }
      else {
        DAT_fffece3c = 0;
      }
    }
    else {
      DAT_fffece3c = 1;
    }
  }
  if (param_1 == '\0') {
    *param_13 = 0;
  }
  else {
    *param_13 = DAT_fffece3c;
  }
  return;
}

