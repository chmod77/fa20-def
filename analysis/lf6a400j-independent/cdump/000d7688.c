
/* WARNING: Removing unreachable block (ram,0x000d76aa) */

void FUN_000d7688(char param_1,ushort param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((param_1 != '\0') && (param_2 < 0x1b33)) {
    uVar1 = 1;
  }
  *param_3 = uVar1;
  DAT_fffecf08 = param_2 < 0x1b33;
  return;
}

