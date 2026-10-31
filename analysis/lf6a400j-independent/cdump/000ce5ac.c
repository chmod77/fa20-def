
/* WARNING: Removing unreachable block (ram,0x000ce5c8) */

void FUN_000ce5ac(char param_1,ushort param_2,undefined1 *param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  
  if (DAT_fffecce8 == '\0') {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = 0xfd80;
  }
  DAT_fffecce8 = uVar1 <= param_2;
  uVar2 = 0;
  if ((param_1 == '\0') && ((bool)DAT_fffecce8)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  return;
}

