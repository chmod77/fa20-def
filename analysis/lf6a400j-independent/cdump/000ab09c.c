
/* WARNING: Removing unreachable block (ram,0x000ab0d6) */

void FUN_000ab09c(ushort param_1)

{
  uint uVar1;
  uint in_stack_00000000;
  short *in_stack_00000004;
  undefined1 *in_stack_00000008;
  
  *in_stack_00000008 = 0;
  uVar1 = ((int)(uint)param_1 >> 2) + (in_stack_00000000 & 0xff) * 0x80;
  if (uVar1 < 0x4000) {
    *in_stack_00000004 = 0;
    return;
  }
  *in_stack_00000004 = (short)uVar1 + -0x4000;
  return;
}

