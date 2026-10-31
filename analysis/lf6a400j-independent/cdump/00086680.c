
void FUN_00086680(void)

{
  undefined1 *puVar1;
  uint in_stack_00000010;
  uint in_stack_00000014;
  undefined2 *in_stack_00000018;
  undefined2 *in_stack_0000001c;
  undefined2 *in_stack_00000020;
  undefined2 *in_stack_00000024;
  
  *in_stack_00000024 = 16000;
  *in_stack_0000001c = 16000;
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
  *in_stack_00000020 = 16000;
  return;
}

