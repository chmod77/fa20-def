
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b5da4(ushort param_1,ushort param_2,undefined2 *param_3)

{
  undefined *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  
  if (param_1 != 0) {
    if (param_1 == 0) {
      _DAT_fffec758 = 0xffff;
    }
    else {
      puVar1 = (undefined *)__udiv32_r1_by_r0(0x545d0000,(uint)param_1);
      if (&DAT_0000ffff < puVar1) {
        puVar1 = &DAT_0000ffff;
      }
      _DAT_fffec758 = (ushort)puVar1;
    }
  }
  if ((param_2 != 0x100) || (uVar2 = _DAT_fffec758, param_1 == 0)) {
    uVar2 = 0x8000;
  }
  uVar3 = (undefined2)((uint)uVar2 * (uint)param_2 >> 8);
  if (0xffff00 < (uint)uVar2 * (uint)param_2) {
    uVar3 = 0xffff;
  }
  *param_3 = uVar3;
  return;
}

