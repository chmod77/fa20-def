
/* WARNING: Removing unreachable block (ram,0x000e4008) */

void FUN_000e3fe0(uint param_1,ushort param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  DAT_fffed2b8 = (param_1 & 0xff) < 0x100;
  uVar1 = 0;
  if ((param_2 < 0x9001) && (DAT_fffed2b8)) {
    uVar1 = 1;
  }
  *param_3 = uVar1;
  return;
}

