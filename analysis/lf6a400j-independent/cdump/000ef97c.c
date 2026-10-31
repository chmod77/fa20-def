
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ef97c(uint param_1,uint param_2,int param_3,ushort param_4,undefined2 *param_5)

{
  undefined *puVar1;
  undefined2 uVar2;
  
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)__udiv32_r1_by_r0(param_3,(uint)param_4);
    if (&DAT_0000ffff < puVar1) {
      puVar1 = &DAT_0000ffff;
    }
  }
  if ((((param_1 & 0xff) == 0) || (DAT_fffed5ae != '\x04')) ||
     (uVar2 = (short)puVar1, (param_2 & 0xff) == 4)) {
    uVar2 = _DAT_fffed5ac;
  }
  *param_5 = uVar2;
  DAT_fffed5ae = (char)param_2;
  _DAT_fffed5ac = uVar2;
  return;
}

