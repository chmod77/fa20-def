
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000b3288(short param_1,short *param_2,undefined2 *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  
  uVar4 = (uint)(ushort)(param_1 + 0x8000);
  uVar2 = uVar4 == 0 ^ 1;
  uVar3 = uVar2;
  if (uVar2 != 0) {
    if (uVar4 == 0) {
      if (param_1 * 0xa8ba < 0) {
        _DAT_fffec6e4 = -0x8000;
      }
      else {
        _DAT_fffec6e4 = 0x7fff;
      }
    }
    else {
      uVar3 = __sdiv32_r1_by_r0(param_1 * 0xa8ba,uVar4);
      if ((int)uVar3 < 0x8000) {
        uVar4 = uVar3;
        if ((int)uVar3 < -0x8000) {
          uVar4 = 0xffff8000;
        }
      }
      else {
        uVar4 = 0x7fff;
      }
      _DAT_fffec6e4 = (short)uVar4;
    }
  }
  sVar1 = 0x7fff;
  if (uVar2 != 0) {
    sVar1 = _DAT_fffec6e4;
  }
  iVar6 = sVar1 * 0x16;
  uVar5 = 0x7fff;
  if ((iVar6 < 0x8000) && (uVar5 = (undefined2)iVar6, iVar6 < -0x8000)) {
    uVar5 = 0x8000;
  }
  *param_3 = uVar5;
  *param_2 = sVar1;
  return uVar3;
}

