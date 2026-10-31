
void FUN_000d4f68(uint param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar1 = LK_133F40((uint)&T_02ED8C,param_2);
  uVar2 = LK_133F40((uint)&T_02ED80,param_1);
  uVar1 = (uVar1 & 0xffff) * (uVar2 & 0xffff);
  uVar3 = (undefined2)(uVar1 >> 8);
  if (0xffff00 < uVar1) {
    uVar3 = 0xffff;
  }
  *param_3 = uVar3;
  return;
}

