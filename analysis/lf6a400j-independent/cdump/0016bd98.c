
void FUN_0016bd98(int param_1,uint param_2,byte param_3,byte *param_4,undefined1 *param_5)

{
  int iVar1;
  uint uVar2;
  
  *param_4 = 0;
  while ((*param_4 < param_3 && ((uint)*(byte *)(param_1 + (uint)*param_4) <= (param_2 & 0xff)))) {
    *param_4 = *param_4 + 1;
  }
  if ((*param_4 == 0) || (*param_4 == param_3)) {
    *param_5 = 0;
  }
  else {
    uVar2 = (uint)*(byte *)((uint)*param_4 + param_1 + -1);
    iVar1 = __sdiv32_r1_by_r0(((param_2 & 0xff) - uVar2) * 0x100,
                              *(byte *)(param_1 + (uint)*param_4) - uVar2);
    *param_5 = (char)iVar1;
  }
  return;
}

