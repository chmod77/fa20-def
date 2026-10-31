
void FUN_0008151c(uint param_1,uint param_2,char param_3,byte param_4,uint param_5,
                 undefined2 *param_6,undefined2 *param_7)

{
  uint uVar1;
  uint uVar2;
  
  param_1 = param_1 & 0xffff;
  uVar1 = LK_13AAF0((uint)&T_02C558,param_5 & 0xff,param_1);
  if ((param_3 == '\0') && (param_4 < 4)) {
    uVar2 = LK_138F64((uint)&T_02C530,param_1,param_2 & 0xffff);
  }
  else {
    uVar2 = LK_138F64((uint)&T_02C544,param_1,param_2 & 0xffff);
  }
  if ((uVar1 & 0xffff) < (uVar2 & 0xffff)) {
    *param_6 = (short)uVar1;
  }
  else {
    *param_6 = (short)uVar2;
  }
  *param_7 = (short)uVar2;
  return;
}

