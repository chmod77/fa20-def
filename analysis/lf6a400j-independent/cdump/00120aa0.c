
void FUN_00120aa0(ushort param_1,undefined4 param_2)

{
  ushort uVar1;
  
  if (DAT_fffee1a0 == '\0') {
    uVar1 = 0x3d7;
  }
  else {
    uVar1 = 0x148;
  }
  *(bool *)param_2 = uVar1 <= param_1;
  DAT_fffee1a0 = uVar1 <= param_1;
  return;
}

