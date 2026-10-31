
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eafb0(uint param_1,char param_2,uint param_3,int param_4,ushort param_5,
                 undefined2 *param_6)

{
  undefined *puVar1;
  undefined2 uVar2;
  
  if ((param_3 & 0xffff) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)__udiv32_r1_by_r0(param_4,param_3 & 0xffff);
    if (&DAT_0000ffff < puVar1) {
      puVar1 = &DAT_0000ffff;
    }
  }
  if (((((param_1 & 0xff) == 0) || (param_2 == DAT_fffed4c6)) || (param_4 == -1)) ||
     (uVar2 = (short)puVar1, 499 < param_5)) {
    uVar2 = _DAT_fffed4c4;
  }
  *param_6 = uVar2;
  DAT_fffed4c6 = param_2;
  _DAT_fffed4c4 = uVar2;
  return;
}

