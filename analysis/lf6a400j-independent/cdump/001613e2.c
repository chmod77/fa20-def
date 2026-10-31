
/* WARNING: Control flow encountered bad instruction data */

void FUN_001613e2(undefined4 param_1,undefined4 param_2)

{
  int in_r0;
  undefined4 in_r1;
  int in_r2;
  int unaff_r13;
  
  *(undefined4 *)(unaff_r13 + 0x10) = param_2;
  *(undefined4 *)(in_r0 * 2) = in_r1;
  *(undefined4 *)(in_r2 + 0x28) = in_r1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

