
/* WARNING: Removing unreachable block (ram,0x000a3b40) */

void FUN_000a3b20(ushort param_1,undefined4 param_2)

{
  ushort uVar1;
  
  if (DAT_fffec2e4 == '\0') {
    uVar1 = 0x7e00;
  }
  else {
    uVar1 = 0x8000;
  }
  *(bool *)param_2 = param_1 <= uVar1;
  DAT_fffec2e4 = param_1 <= uVar1;
  return;
}

