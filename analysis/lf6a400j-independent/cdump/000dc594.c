
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dc594(int param_1,ushort param_2,short param_3,byte param_4,char param_5,
                 undefined2 *param_6)

{
  undefined2 uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (param_2 != 0) {
    puVar2 = (undefined *)__udiv32_r1_by_r0(param_1 << 0x10,(uint)param_2);
    if (&DAT_0000ffff < puVar2) {
      puVar2 = &DAT_0000ffff;
    }
  }
  if ((param_3 != 400) || (uVar1 = (short)puVar2, param_2 < param_4)) {
    uVar1 = _DAT_fffed0f8;
  }
  if (param_5 != '\0') {
    uVar1 = 0;
  }
  *param_6 = uVar1;
  _DAT_fffed0f8 = uVar1;
  return;
}

