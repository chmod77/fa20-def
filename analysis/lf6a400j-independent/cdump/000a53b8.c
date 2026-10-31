
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a53b8(ushort param_1,short *param_2,short *param_3,ushort *param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  if (DAT_fffec365 == '\0') {
    DAT_fffec364 = '\0';
    DAT_fffec365 = '\x01';
  }
  uVar1 = param_1;
  if (DAT_fffec364 != '\0') {
    FUN_0016b4d8(&DAT_ffff19ba,param_1,0xffffffff);
    uVar1 = _DAT_ffff19ba;
  }
  _DAT_ffff19ba = uVar1;
  DAT_fffec364 = 1;
  *param_4 = _DAT_ffff19ba;
  iVar3 = (uint)param_1 - (uint)_DAT_ffff19ba;
  sVar2 = 0x7fff;
  if ((iVar3 < 0x8000) && (sVar2 = (short)iVar3, iVar3 < -0x8000)) {
    sVar2 = -0x8000;
  }
  *param_3 = sVar2;
  if ((sVar2 < -0x155) || (0x154 < sVar2)) {
    *param_2 = sVar2;
  }
  else {
    *param_2 = 0;
  }
  return;
}

