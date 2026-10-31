
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015ad50(short param_1)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  
  if (param_1 < 0) {
    sVar3 = 0;
    sVar1 = -param_1;
  }
  else {
    sVar1 = 0;
    sVar3 = param_1;
  }
  uVar2 = (int)sVar3;
  if (0x3ff < sVar3) {
    uVar2 = 0x400;
  }
  _DAT_fffff590 = (short)((uint)_DAT_fffff588 * (uVar2 & 0xffff) >> 10);
  uVar2 = 0x400;
  if (sVar1 < 0x400) {
    uVar2 = (int)sVar1;
  }
  _DAT_fffff592 = (short)((uint)_DAT_fffff58a * (uVar2 & 0xffff) >> 10);
  return;
}

