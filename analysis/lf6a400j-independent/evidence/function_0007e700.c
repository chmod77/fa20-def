
void FUN_0007e700(void)

{
  ushort *puVar1;
  int in_r0;
  int in_r1;
  ushort unaff_r12;
  int unaff_r13;
  ushort unaff_r14;
  ushort *in_stack_0000001c;
  
  if (in_r0 == 0) {
    *(undefined1 *)(in_r1 + 2) = 0;
    *(undefined1 *)(in_r1 + 3) = 1;
  }
  if (*(char *)(in_r1 + 2) == '\0') {
    *DAT_0007e788 = unaff_r14;
  }
  else {
    (*(code *)PTR_FUN_0007e78c)(DAT_0007e788);
  }
  puVar1 = DAT_0007e780;
  *DAT_0007e780 = *DAT_0007e788;
  *(undefined1 *)(puVar1 + 1) = 1;
  if (unaff_r13 != 0) {
    unaff_r14 = *puVar1;
  }
  if (unaff_r12 < unaff_r14) {
    *in_stack_0000001c = unaff_r12;
  }
  else {
    *in_stack_0000001c = unaff_r14;
  }
  return;
}

