
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011eeb0(ushort param_1,ushort param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = param_1 - param_2;
  if (param_1 < param_2) {
    uVar1 = 0;
  }
  uVar2 = 0;
  if (uVar1 < 0x170a) {
    uVar2 = _DAT_fffee130;
  }
  *param_3 = uVar2;
  if (uVar1 < 0x170a) {
    if (0xfffe < uVar2) {
      _DAT_fffee130 = 0xffff;
      return;
    }
    _DAT_fffee130 = uVar2 + 1;
    return;
  }
  _DAT_fffee130 = 0;
  return;
}

