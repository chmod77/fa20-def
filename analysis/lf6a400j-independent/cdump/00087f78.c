
void FUN_00087f78(uint param_1,uint param_2,char param_3,undefined2 param_4,undefined2 *param_5)

{
  uint uVar1;
  
  if (param_3 == '\x02') {
    *param_5 = param_4;
  }
  else {
    uVar1 = LK_138F64((uint)&T_02CA7C,param_2,param_1);
    *param_5 = (short)uVar1;
  }
  if (param_3 == '\x03') {
    DAT_fffebc08 = DAT_fffebc08 + '\x01';
    if (DAT_fffebc08 == '\0') {
      DAT_fffebc08 = -1;
    }
  }
  else {
    DAT_fffebc08 = '\0';
  }
  return;
}

