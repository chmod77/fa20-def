
/* WARNING: Removing unreachable block (ram,0x000e9628) */
/* WARNING: Removing unreachable block (ram,0x000e962c) */

void FUN_000e95d8(char param_1,char param_2)

{
  bool bVar1;
  ushort in_stack_00000006;
  char in_stack_0000000f;
  undefined1 *in_stack_00000010;
  
  bVar1 = true;
  if ((param_1 == '\0') || (param_2 != '\0')) {
    bVar1 = false;
  }
  if ((bVar1) && (0x7fff < in_stack_00000006)) {
    DAT_fffed430 = 1;
  }
  if (in_stack_0000000f != '\0') {
    DAT_fffed430 = 0;
  }
  *in_stack_00000010 = DAT_fffed430;
  return;
}

