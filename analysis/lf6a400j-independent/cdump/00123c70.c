
/* WARNING: Removing unreachable block (ram,0x00123c90) */

void FUN_00123c70(ushort param_1,undefined4 param_2)

{
  ushort uVar1;
  
  if (DAT_fffee284 == '\0') {
    uVar1 = 0x33;
  }
  else {
    uVar1 = 0x600;
  }
  *(bool *)param_2 = param_1 <= uVar1;
  DAT_fffee284 = param_1 <= uVar1;
  return;
}

