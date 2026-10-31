
void FUN_001242d4(uint param_1,uint param_2,char param_3,byte param_4,uint param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  uint uVar2;
  
  param_1 = param_1 & 0xffff;
  uVar1 = LK_13AC68((uint)&T_0301C8,param_5 & 0xff,param_1);
  if ((param_3 == '\0') && (param_4 < 4)) {
    uVar2 = LK_1390DC((uint)&T_0301F0,param_1,param_2 & 0xffff);
  }
  else {
    uVar2 = LK_1390DC((uint)&T_0301DC,param_1,param_2 & 0xffff);
  }
  if ((uVar1 & 0xffff) < (uVar2 & 0xffff)) {
    *param_6 = (short)uVar1;
  }
  else {
    *param_6 = (short)uVar2;
  }
  return;
}

