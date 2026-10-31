
char FUN_000e610c(char param_1,uint param_2,char param_3,undefined2 param_4,undefined2 *param_5)

{
  uint uVar1;
  
  if ((param_1 == '\x01') || (param_1 == '\x02')) {
    uVar1 = (param_2 & 0xffff) * 0x3d09;
    if (uVar1 < 0x1fffe001) {
      param_4 = (undefined2)(uVar1 >> 0xd);
    }
    else {
      param_4 = 0xffff;
    }
  }
  if (param_3 == '\0') {
    *param_5 = param_4;
  }
  else {
    *param_5 = 0;
  }
  return param_1;
}

