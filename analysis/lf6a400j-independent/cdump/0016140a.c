
/* WARNING: Control flow encountered bad instruction data */

void FUN_0016140a(void)

{
  int in_r0;
  undefined4 in_r1;
  int in_r2;
  undefined4 in_r7;
  int unaff_r13;
  
  *(undefined4 *)(unaff_r13 + 0x30) = in_r7;
  *(undefined4 *)(in_r0 * 2) = in_r1;
  *(int *)(in_r2 + 0x10) = in_r2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

