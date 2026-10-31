
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0007f288(uint param_1,uint param_2,undefined2 *param_3)

{
  undefined *puVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 & 0xffff;
  if (uVar4 != 0) {
    if (uVar4 == 0) {
      _DAT_fffeba60 = -1;
    }
    else {
      param_2 = param_2 & 0xffff;
      puVar1 = (undefined *)__udiv32_r1_by_r0((param_1 & 0xffff) << 10,param_2);
      if (&DAT_0000ffff < puVar1) {
        puVar1 = &DAT_0000ffff;
      }
      _DAT_fffeba60 = (short)puVar1;
    }
  }
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = (uint)_DAT_fffeba60;
  }
  uVar4 = LK_133F40((uint)&T_02C1C4,uVar3);
  uVar3 = (param_2 & 0xffff) * (uVar4 & 0xffff);
  if (uVar3 < 0x7fff8001) {
    uVar2 = (undefined2)(uVar3 >> 0xf);
  }
  else {
    uVar2 = 0xffff;
  }
  *param_3 = uVar2;
  return uVar4;
}

