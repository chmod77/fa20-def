
void FUN_0009eee0(uint param_1,uint param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_3 == '\0') {
    uVar2 = (param_2 & 0xff) * (param_1 & 0xff);
    if (uVar2 < 0xff1) {
      uVar1 = (undefined1)((int)uVar2 >> 4);
    }
    else {
      uVar1 = 0xff;
    }
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  return;
}

