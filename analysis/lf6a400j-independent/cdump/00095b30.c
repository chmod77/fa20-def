
void FUN_00095b30(uint param_1,uint param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = (param_2 & 0xffff) * (param_1 & 0xff);
  uVar1 = (undefined2)(uVar2 >> 8);
  if (0xffff00 < uVar2) {
    uVar1 = 0xffff;
  }
  *param_3 = uVar1;
  return;
}

