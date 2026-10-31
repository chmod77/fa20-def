
void FUN_00123040(void)

{
  undefined1 *puVar1;
  uint in_stack_00000010;
  uint in_stack_00000014;
  undefined2 *in_stack_00000018;
  
  puVar1 = (undefined1 *)0xffffffff;
  if ((&DAT_0000bb80 + (in_stack_00000014 & 0xffff) < &UNK_0001bb80) &&
     (puVar1 = (undefined1 *)0x0, &UNK_0000bb7f < &DAT_0000bb80 + (in_stack_00000014 & 0xffff))) {
    puVar1 = (undefined1 *)((in_stack_00000014 & 0xffff) + 0x10000);
  }
  if ((undefined1 *)((uint)puVar1 & 0xffff) < &LAB_00003e80) {
    puVar1 = &LAB_00003e80;
  }
  if (((uint)puVar1 & 0xffff) < (in_stack_00000010 & 0xffff)) {
    *in_stack_00000018 = (short)puVar1;
  }
  else {
    *in_stack_00000018 = (short)in_stack_00000010;
  }
  return;
}

