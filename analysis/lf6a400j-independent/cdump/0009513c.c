
void FUN_0009513c(byte param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  
  param_2 = param_2 & 0xff;
  if (param_1 == 0) {
    *param_3 = 0;
  }
  else {
    uVar1 = 0;
    if (param_2 < 0x101) {
      uVar1 = 0x100 - param_2;
    }
    uVar2 = (uVar1 & 0xffff) * (uint)param_1 >> 8;
    param_2 = uVar2 + param_2;
    uVar1 = param_2 & 0xffff;
    if ((uVar1 < uVar2) || (0xff < uVar1)) {
      *param_3 = 0xff;
    }
    else {
      *param_3 = (char)param_2;
    }
  }
  return;
}

