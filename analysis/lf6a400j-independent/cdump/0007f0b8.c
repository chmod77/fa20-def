
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f0b8(ushort param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = (uint)param_1 - (uint)_DAT_fffeba50;
  if (iVar1 < 0x8000) {
    if (iVar1 < -0x8000) {
      *param_2 = 0;
    }
    else {
      *param_2 = (short)iVar1 + -0x8000;
    }
  }
  else {
    *param_2 = -1;
  }
  _DAT_fffeba50 = param_1;
  return;
}

