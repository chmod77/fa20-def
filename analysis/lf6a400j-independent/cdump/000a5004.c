
/* WARNING: Removing unreachable block (ram,0x000a507a) */
/* WARNING: Removing unreachable block (ram,0x000a502c) */
/* WARNING: Removing unreachable block (ram,0x000a50a2) */

void FUN_000a5004(ushort param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  
  if (DAT_fffec341 == '\0') {
    uVar1 = 0xc7fb;
  }
  else {
    uVar1 = 0xc800;
  }
  *(bool *)param_3 = param_1 <= uVar1;
  DAT_fffec341 = param_1 <= uVar1;
  DAT_fffec342 = 1;
  DAT_fffec343 = 1;
  DAT_fffec340 = 1;
  return;
}

