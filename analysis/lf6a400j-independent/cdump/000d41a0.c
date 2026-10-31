
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d41a0(ushort param_1,ushort param_2,char param_3,short *param_4)

{
  ushort uVar1;
  undefined *puVar2;
  
  if (param_2 != 0) {
    if (param_2 == 0) {
      _DAT_fffece44 = 0xffff;
    }
    else {
      puVar2 = (undefined *)__udiv32_r1_by_r0((uint)param_1 << 8,(uint)param_2);
      if (&DAT_0000ffff < puVar2) {
        puVar2 = &DAT_0000ffff;
      }
      _DAT_fffece44 = (ushort)puVar2;
    }
  }
  uVar1 = 0x8000;
  if (param_2 != 0) {
    uVar1 = _DAT_fffece44;
  }
  if (param_3 == '\0') {
    *param_4 = 0;
  }
  else if (uVar1 < 0x8100) {
    *param_4 = uVar1 - 0x100;
  }
  else {
    *param_4 = 0x7fff;
  }
  return;
}

