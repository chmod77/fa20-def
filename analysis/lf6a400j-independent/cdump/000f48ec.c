
void FUN_000f48ec(ushort param_1,ushort param_2,char param_3,uint param_4,uint param_5,char param_6,
                 char param_7,char param_8,undefined1 *param_9,byte *param_10)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  
  if ((int)param_4 < 0) {
    bVar1 = 0 < (int)param_4;
    param_4 = -param_4;
    if ((0 < (int)-(uint)bVar1) || ((-(uint)bVar1 == 0 && (0x7fffffff < param_4)))) {
      param_4 = 0x7fffffff;
    }
  }
  if ((int)param_5 < 0) {
    bVar1 = 0 < (int)param_5;
    param_5 = -param_5;
    if ((0 < (int)-(uint)bVar1) || ((-(uint)bVar1 == 0 && (0x7fffffff < param_5)))) {
      param_5 = 0x7fffffff;
    }
  }
  bVar1 = false;
  if (((((0xa257 < param_1) && (0x9ff < param_2)) && (param_3 != '\0')) &&
      (((int)param_4 < 0x5b0 && ((int)param_5 < 0x5b0)))) &&
     ((param_6 != '\0' && ((param_7 != '\0' && (param_8 == '\0')))))) {
    bVar1 = true;
  }
  bVar3 = 0;
  if (bVar1) {
    bVar3 = DAT_fffed6fc;
  }
  uVar2 = 0;
  if ((0xc < bVar3) && (bVar1)) {
    uVar2 = 1;
  }
  *param_9 = uVar2;
  *param_10 = bVar3;
  if (bVar1) {
    if (bVar3 == 0xff) {
      DAT_fffed6fc = -1;
    }
    else {
      DAT_fffed6fc = bVar3 + 1;
    }
  }
  else {
    DAT_fffed6fc = '\0';
  }
  return;
}

