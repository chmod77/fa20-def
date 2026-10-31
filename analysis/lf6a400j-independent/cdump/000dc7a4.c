
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dc7a4(byte param_1,byte param_2,short param_3,char param_4,undefined2 *param_5)

{
  undefined2 uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (param_2 != 0) {
    puVar2 = (undefined *)__udiv32_r1_by_r0((uint)param_1 << 0x10,(uint)param_2);
    if (&DAT_0000ffff < puVar2) {
      puVar2 = &DAT_0000ffff;
    }
  }
  if ((param_3 != 2000) || (uVar1 = (short)puVar2, param_2 < 100)) {
    uVar1 = _DAT_fffed10c;
  }
  if (param_4 != '\0') {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  _DAT_fffed10c = uVar1;
  return;
}

