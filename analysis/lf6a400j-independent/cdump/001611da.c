
int FUN_001611da(void)

{
  int iVar1;
  int in_mach;
  
  DAT_00000400 = 0;
  iVar1 = FUN_001613e2();
  *(short *)(iVar1 * 2) = (short)iVar1;
  *(int *)(iVar1 * 2) = iVar1;
  return (int)*(char *)(in_mach * 2);
}

