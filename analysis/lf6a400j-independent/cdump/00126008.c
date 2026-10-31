
/* WARNING: Removing unreachable block (ram,0x00126028) */

void FUN_00126008(ushort param_1,undefined4 param_2)

{
  ushort uVar1;
  
  if (DAT_fffee2c8 == '\0') {
    uVar1 = 0x59;
  }
  else {
    uVar1 = 0xb2;
  }
  *(bool *)param_2 = param_1 < uVar1;
  DAT_fffee2c8 = param_1 < uVar1;
  return;
}

