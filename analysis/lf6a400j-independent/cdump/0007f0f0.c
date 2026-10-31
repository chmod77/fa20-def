
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f0f0(uint param_1,ushort param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = _DAT_fffeba5a;
  _DAT_fffeba5a = _DAT_fffeba58;
  _DAT_fffeba58 = _DAT_fffeba56;
  uVar2 = (uint)param_2 - (uint)_DAT_fffeba5c;
  iVar3 = -1;
  if (((int)uVar2 < 0x8000) && (iVar3 = 0, -0x8001 < (int)uVar2)) {
    iVar3 = (uVar2 & 0xffff) - 0x8000;
  }
  _DAT_fffeba5c = uVar1;
  if (DAT_fffeba5e == '\0') {
    DAT_fffeba5f = '\0';
    DAT_fffeba5e = '\x01';
  }
  uVar2 = LK_133B38((uint)&T_02C1B8,param_1);
  if (DAT_fffeba5f == '\0') {
    _DAT_ffff19a4 = (undefined2)iVar3;
  }
  else {
    FUN_0016b4d8(&DAT_ffff19a4,iVar3,(uVar2 & 0xff) << 8);
  }
  _DAT_fffeba54 = _DAT_ffff19a4;
  DAT_fffeba5f = 1;
  *param_3 = _DAT_ffff19a4;
  _DAT_fffeba56 = param_2;
  return;
}

