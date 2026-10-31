
void FUN_00123e10(uint param_1,ushort param_2)

{
  uint uVar1;
  undefined *p1;
  ushort in_stack_0000000a;
  ushort *in_stack_0000000c;
  
  p1 = (undefined *)(param_1 & 0xffff);
  if ((&DAT_00007a00 < p1) || (0xf2b2 < in_stack_0000000a)) {
    uVar1 = LK_135294((uint)&T_030098,(uint)p1);
  }
  else if ((&DAT_00007a00 < p1) || (0xf2b2 < in_stack_0000000a)) {
    uVar1 = LK_135294((uint)&T_03008C,(uint)p1);
  }
  else {
    uVar1 = LK_135294((uint)&T_030080,(uint)p1);
  }
  if ((uint)param_2 < (uVar1 & 0xffff)) {
    *in_stack_0000000c = param_2;
  }
  else {
    *in_stack_0000000c = (ushort)uVar1;
  }
  return;
}

