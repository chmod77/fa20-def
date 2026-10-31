
void FUN_000f0358(char param_1,char param_2,char param_3,uint param_4,ushort param_5,uint param_6,
                 uint param_7,int param_8,uint param_9,int param_10,uint param_11,char param_12,
                 undefined1 *param_13)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  param_4 = param_4 & 0xff;
  bVar1 = true;
  if (((param_2 == '\0') || (param_3 == '\0')) && (param_4 != 0)) {
    bVar1 = false;
  }
  param_6 = param_6 & 0xffff;
  iVar3 = param_6 - (param_7 & 0xffff);
  uVar4 = param_8 - param_9;
  if (((param_8 < 0) || (-1 < (int)param_9)) || (-1 < (int)uVar4)) {
    if (((param_8 < 0) && (-1 < (int)param_9)) && (-1 < (int)uVar4)) {
      uVar4 = 0x80000000;
    }
  }
  else {
    uVar4 = 0x7fffffff;
  }
  if ((int)uVar4 < 0) {
    param_9 = -uVar4;
    param_4 = -(uint)(0 < (int)uVar4);
  }
  uVar5 = param_10 - param_11;
  if (((param_10 < 0) || (-1 < (int)param_11)) || (-1 < (int)uVar5)) {
    if (((param_10 < 0) && (-1 < (int)param_11)) && (-1 < (int)uVar5)) {
      uVar5 = 0x80000000;
    }
  }
  else {
    uVar5 = 0x7fffffff;
  }
  if ((int)uVar5 < 0) {
    param_11 = -uVar5;
    param_6 = -(uint)(0 < (int)uVar5);
  }
  if (param_12 == '\0') {
    if (((param_1 == '\0') || (!bVar1)) || (param_5 >= 100)) {
      if (((int)uVar5 < 0) &&
         ((0 < (int)param_6 || ((uVar5 = param_11, param_6 == 0 && (0x7fffffff < param_11)))))) {
        uVar5 = 0x7fffffff;
      }
      if (((int)uVar4 < 0) &&
         ((0 < (int)param_4 || ((uVar4 = param_9, param_4 == 0 && (0x7fffffff < param_9)))))) {
        uVar4 = 0x7fffffff;
      }
      iVar2 = -iVar3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      if (((((param_1 == '\0') || (!bVar1)) || (param_5 < 100)) ||
          ((0xc7ff < iVar2 || ((int)&UNK_00011c71 < (int)uVar4)))) ||
         ((int)&UNK_00011c71 < (int)uVar5)) {
        *param_13 = 3;
      }
      else {
        *param_13 = 2;
      }
    }
    else {
      *param_13 = 1;
    }
  }
  else {
    *param_13 = 0;
  }
  return;
}

