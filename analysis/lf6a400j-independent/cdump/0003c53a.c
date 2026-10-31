
uint FUN_0003c53a(short *param_1,short *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  while( true ) {
    param_1 = param_1 + 1;
    uVar1 = (uVar1 & 0xffff) >> 0xf | (uVar1 & 0xffff) << 1;
    if (param_2 <= param_1) break;
    uVar1 = (int)*param_1 + uVar1;
  }
  return uVar1;
}

