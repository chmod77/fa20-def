
uint FUN_000815a0(uint param_1,uint param_2,char param_3,byte param_4,undefined2 *param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  
  if ((param_3 == '\0') && (param_4 < 4)) {
    uVar1 = LK_138F64((uint)&T_02C56C,param_1 & 0xffff,param_2 & 0xffff);
  }
  else {
    uVar1 = LK_138F64((uint)&T_02C580,param_1 & 0xffff,param_2 & 0xffff);
  }
  *param_5 = (short)uVar1;
  *param_6 = (short)uVar1;
  return uVar1;
}

