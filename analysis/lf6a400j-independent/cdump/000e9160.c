
/* WARNING: Removing unreachable block (ram,0x000e91be) */
/* WARNING: Removing unreachable block (ram,0x000e91c2) */

void FUN_000e9160(char param_1,char param_2)

{
  bool bVar1;
  ushort in_stack_00000006;
  ushort in_stack_0000000a;
  char in_stack_0000000f;
  undefined1 *in_stack_00000014;
  
  bVar1 = true;
  if ((param_1 == '\0') || (param_2 != '\0')) {
    bVar1 = false;
  }
  if (in_stack_0000000f == '\0') {
    if (((bVar1) && (0x7fff < in_stack_00000006)) ||
       ((param_1 == '\0' && (0x7fff < in_stack_0000000a)))) {
      *in_stack_00000014 = 1;
    }
    else {
      *in_stack_00000014 = 0;
    }
  }
  else {
    *in_stack_00000014 = 0;
  }
  return;
}

