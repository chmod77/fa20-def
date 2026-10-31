
/* WARNING: Removing unreachable block (ram,0x000f860a) */
/* WARNING: Removing unreachable block (ram,0x000f8638) */
/* WARNING: Removing unreachable block (ram,0x000f872c) */
/* WARNING: Removing unreachable block (ram,0x000f86e4) */
/* WARNING: Removing unreachable block (ram,0x000f86f2) */
/* WARNING: Removing unreachable block (ram,0x000f86f6) */
/* WARNING: Removing unreachable block (ram,0x000f8680) */
/* WARNING: Removing unreachable block (ram,0x000f8684) */
/* WARNING: Removing unreachable block (ram,0x000f868c) */
/* WARNING: Removing unreachable block (ram,0x000f8692) */
/* WARNING: Removing unreachable block (ram,0x000f8696) */
/* WARNING: Removing unreachable block (ram,0x000f86ba) */
/* WARNING: Removing unreachable block (ram,0x000f880a) */
/* WARNING: Removing unreachable block (ram,0x000f8748) */
/* WARNING: Removing unreachable block (ram,0x000f8750) */

void FUN_000f84c0(void)

{
  undefined1 uVar1;
  ushort in_stack_00000006;
  uint in_stack_00000008;
  char in_stack_0000000f;
  char in_stack_00000013;
  char in_stack_0000001b;
  undefined2 in_stack_0000001e;
  char in_stack_00000023;
  char in_stack_00000027;
  char in_stack_0000002b;
  char in_stack_0000002f;
  char in_stack_00000033;
  char in_stack_00000037;
  char in_stack_0000003b;
  char in_stack_0000003f;
  undefined1 *in_stack_0000004c;
  undefined1 *in_stack_00000050;
  undefined1 *in_stack_00000054;
  undefined2 *in_stack_00000058;
  undefined1 *in_stack_0000005c;
  undefined1 *in_stack_00000060;
  undefined1 *in_stack_00000064;
  undefined1 *in_stack_00000068;
  
  uVar1 = 1;
  if ((in_stack_0000002f != '\0') && (in_stack_0000003f == '\0')) {
    uVar1 = 0;
  }
  *in_stack_00000064 = uVar1;
  uVar1 = 0;
  if (((in_stack_0000001b == '\0') && ((int)(in_stack_00000008 & 0xffff) < -0x4ff)) &&
     ((in_stack_00000013 != '\0' || (in_stack_0000000f != '\0')))) {
    uVar1 = 1;
  }
  *in_stack_00000054 = uVar1;
  uVar1 = 1;
  if ((in_stack_0000003f == '\0') && (in_stack_00000033 != '\0')) {
    uVar1 = 0;
  }
  *in_stack_00000060 = uVar1;
  uVar1 = 0;
  if ((in_stack_00000037 != '\0') && (in_stack_0000003b != '\0')) {
    uVar1 = 1;
  }
  *in_stack_00000068 = uVar1;
  DAT_fffed7e8 = 0;
  *in_stack_00000058 = in_stack_0000001e;
  *in_stack_00000050 = 0;
  uVar1 = 0;
  if ((((in_stack_00000023 == DAT_fffed7ed) && (in_stack_00000027 == DAT_fffed7ec)) &&
      (in_stack_0000002b == DAT_fffed7ea)) && (in_stack_0000000f == DAT_fffed7e9)) {
    uVar1 = 1;
  }
  *in_stack_0000005c = uVar1;
  uVar1 = 0;
  if ((0xb400 < in_stack_00000006) && ((0xc7ff < in_stack_00000006 || (DAT_fffed7eb != '\0')))) {
    uVar1 = 1;
  }
  *in_stack_0000004c = 0;
  DAT_fffed7ee = 0;
  DAT_fffed7ed = in_stack_00000023;
  DAT_fffed7ec = in_stack_00000027;
  DAT_fffed7ea = in_stack_0000002b;
  DAT_fffed7e9 = in_stack_0000000f;
  DAT_fffed7eb = uVar1;
  return;
}

