
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a54dc(ushort param_1,undefined2 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = param_1;
  if (DAT_fffec36e != '\0') {
    uVar1 = _DAT_fffec36c;
  }
  iVar2 = (uint)param_1 * 2 + (uint)uVar1 * -2;
  uVar3 = 0x7fff;
  if ((iVar2 < 0x8000) && (uVar3 = (undefined2)iVar2, iVar2 < -0x8000)) {
    uVar3 = 0x8000;
  }
  *param_2 = uVar3;
  _DAT_fffec36c = param_1;
  DAT_fffec36e = 1;
  return;
}

