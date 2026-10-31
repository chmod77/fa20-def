
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009f2e8(ushort param_1,undefined2 *param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  
  if (DAT_fffec100 == '\0') {
    DAT_fffec101 = '\0';
    DAT_fffec100 = '\x01';
  }
  uVar1 = param_1;
  if (DAT_fffec101 != '\0') {
    FUN_0016b4d8(&DAT_ffff19b6,param_1,0x200);
    uVar1 = _DAT_ffff19b6;
  }
  _DAT_ffff19b6 = uVar1;
  DAT_fffec101 = 1;
  *param_3 = _DAT_ffff19b6;
  iVar2 = (uint)param_1 - (uint)_DAT_ffff19b6;
  uVar3 = 0x7fff;
  if ((iVar2 < 0x8000) && (uVar3 = (undefined2)iVar2, iVar2 < -0x8000)) {
    uVar3 = 0x8000;
  }
  *param_2 = uVar3;
  return;
}

