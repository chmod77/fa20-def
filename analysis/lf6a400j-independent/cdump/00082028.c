
void FUN_00082028(uint param_1,uint param_2,uint param_3,uint param_4,undefined2 *param_5,
                 undefined2 *param_6,undefined2 *param_7)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar1 = LK_138F64((uint)&T_02C78C,param_4,param_2);
  *param_6 = (short)uVar1;
  uVar2 = LK_13AAF0((uint)&T_02C7A0,param_3,param_4);
  if ((uVar1 & 0xffff) <= (param_1 & 0xffff)) {
    param_1 = uVar1 & 0xffff;
  }
  uVar3 = (short)param_1;
  if ((uVar2 & 0xffff) < (param_1 & 0xffff)) {
    uVar3 = (short)uVar2;
  }
  *param_5 = uVar3;
  *param_7 = (short)uVar2;
  return;
}

