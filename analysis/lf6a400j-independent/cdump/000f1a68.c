
void FUN_000f1a68(uint param_1,char param_2,char param_3,char param_4,ushort param_5,uint param_6,
                 uint param_7,int param_8,int param_9,uint param_10,int param_11,char param_12,
                 char *param_13)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_1 & 0xff;
  iVar5 = (param_6 & 0xffff) - (param_7 & 0xffff);
  uVar4 = param_8 - param_9;
  if (((param_8 < 0) || (-1 < param_9)) || (-1 < (int)uVar4)) {
    if (((param_8 < 0) && (-1 < param_9)) && (-1 < (int)uVar4)) {
      uVar4 = 0x80000000;
    }
  }
  else {
    uVar4 = 0x7fffffff;
  }
  if ((int)uVar4 < 0) {
    param_1 = -uVar4;
    param_8 = -(uint)(0 < (int)uVar4);
  }
  uVar1 = param_10 - param_11;
  if ((((int)param_10 < 0) || (-1 < param_11)) || (-1 < (int)uVar1)) {
    if ((((int)param_10 < 0) && (-1 < param_11)) && (-1 < (int)uVar1)) {
      uVar1 = 0x80000000;
    }
  }
  else {
    uVar1 = 0x7fffffff;
  }
  uVar2 = uVar1;
  if ((int)uVar1 < 0) {
    param_10 = -uVar1;
    uVar2 = -(uint)(0 < (int)uVar1);
  }
  if (param_12 == 'Z') {
    *param_13 = '\0';
  }
  else {
    if (((int)uVar1 < 0) &&
       ((0 < (int)uVar2 || ((uVar1 = param_10, uVar2 == 0 && (0x7fffffff < param_10)))))) {
      uVar1 = 0x7fffffff;
    }
    if (((int)uVar4 < 0) &&
       ((0 < param_8 || ((uVar4 = param_1, param_8 == 0 && (0x7fffffff < param_1)))))) {
      uVar4 = 0x7fffffff;
    }
    iVar3 = -iVar5;
    if (-1 < iVar5) {
      iVar3 = iVar5;
    }
    if ((((uVar6 == 0) ||
         ((((param_2 == '\0' || (param_3 == '\0')) && (param_4 != '\0')) ||
          ((param_5 < 100 || (0xc7ff < iVar3)))))) || ((int)&UNK_00011c71 < (int)uVar4)) ||
       ((int)&UNK_00011c71 < (int)uVar1)) {
      *param_13 = param_4;
    }
    else {
      *param_13 = '\x01';
    }
  }
  return;
}

