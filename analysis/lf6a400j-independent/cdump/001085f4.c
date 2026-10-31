
void FUN_001085f4(char param_1,char param_2,char param_3,char param_4,ushort param_5,uint param_6,
                 char param_7,char param_8,short param_9,undefined4 param_10,byte *param_11)

{
  bool bVar1;
  uint uVar2;
  byte bVar4;
  short sVar3;
  
  if ((param_7 == '\0') || (param_8 == '\0')) {
    uVar2 = LK_134C84((uint)&T_02FCCC,param_6 & 0xffff);
    sVar3 = (short)uVar2;
  }
  else {
    uVar2 = LK_134C84((uint)&T_02FCC0,param_6 & 0xffff);
    sVar3 = (short)uVar2;
  }
  bVar1 = false;
  if ((((param_1 == '\0') && (param_2 != '\0')) && (param_3 == '\0')) &&
     (((param_4 == '\0' && (0x354c < param_5)) && (sVar3 <= param_9)))) {
    bVar1 = true;
  }
  bVar4 = 0;
  if (bVar1) {
    if (DAT_fffedb5c == -1) {
      bVar4 = 0xff;
    }
    else {
      bVar4 = DAT_fffedb5c + 1;
    }
  }
  *param_11 = bVar4;
  *(bool *)param_10 = 10 < bVar4;
  DAT_fffedb5c = bVar4;
  return;
}

