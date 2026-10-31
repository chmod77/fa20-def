
void FUN_000ab150(char param_1,char param_2,char param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7,undefined2 *param_8,undefined1 *param_9,
                 undefined1 *param_10)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_9 = 0xff;
  if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 != '\0')) {
    uVar3 = (param_4 & 0xffff) >> 6;
    if (uVar3 < 0x100) {
      uVar3 = 0xffffffff;
    }
    else if (0xff < uVar3) {
      uVar3 = 0xff;
    }
  }
  else {
    uVar3 = 0xff;
  }
  uVar2 = (uVar3 & 0xff) << 6;
  if (uVar2 < (param_7 & 0xffff)) {
    param_7 = uVar2;
  }
  uVar1 = (short)param_7;
  if (0x3fc0 < (param_7 & 0xffff)) {
    uVar1 = 0x3fc0;
  }
  *param_8 = uVar1;
  *param_10 = (char)uVar3;
  return;
}

