
void FUN_0010b58c(char param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (param_1 == '\0') {
    uVar1 = (param_2 & 0xff) * 0x41;
    if (uVar1 < 0x3fc1) {
      uVar2 = (undefined1)((int)uVar1 >> 6);
    }
    else {
      uVar2 = 0xff;
    }
    *param_3 = uVar2;
    return;
  }
  *param_3 = 0;
  return;
}

