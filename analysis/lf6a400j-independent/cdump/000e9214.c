
/* WARNING: Removing unreachable block (ram,0x000e926a) */
/* WARNING: Removing unreachable block (ram,0x000e926e) */

void FUN_000e9214(char param_1,char param_2)

{
  bool bVar1;
  undefined1 uVar2;
  ushort in_stack_00000006;
  char in_stack_0000000b;
  char in_stack_00000013;
  undefined1 *in_stack_00000014;
  
  bVar1 = true;
  if ((param_1 == '\0') || (param_2 != '\0')) {
    bVar1 = false;
  }
  if ((bVar1) && (0x7fff < in_stack_00000006)) {
    DAT_fffed411 = 1;
  }
  if ((((in_stack_0000000b != '\0') || (in_stack_00000013 == '\0')) || (param_2 != '\0')) ||
     (uVar2 = DAT_fffed411, DAT_fffed410 != '\0')) {
    uVar2 = 0;
  }
  DAT_fffed411 = uVar2;
  *in_stack_00000014 = uVar2;
  DAT_fffed410 = uVar2;
  return;
}

