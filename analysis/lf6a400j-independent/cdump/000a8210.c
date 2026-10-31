
void FUN_000a8210(uint param_1,undefined2 *param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) >> 1;
  if (uVar1 < 0x501) {
    *param_2 = 0x500;
    return;
  }
  *param_2 = (short)uVar1;
  return;
}

