
undefined4 FUN_0015125e(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 & 0xffff) * 6;
  if (*(short *)(iVar1 + -0xe410) != 0) {
    return 1;
  }
  *(undefined2 *)(iVar1 + -0xe410) = 1;
  return 0;
}

