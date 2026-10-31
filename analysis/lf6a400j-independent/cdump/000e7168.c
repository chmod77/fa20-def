
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e7168(ushort param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (uint)param_1 - (uint)_DAT_fffed3a4;
  uVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (uVar2 = (undefined2)iVar1, iVar1 < -0x8000)) {
    uVar2 = 0x8000;
  }
  *param_2 = uVar2;
  _DAT_fffed3a4 = param_1;
  return;
}

