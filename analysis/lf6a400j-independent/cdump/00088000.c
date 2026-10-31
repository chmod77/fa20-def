
void FUN_00088000(uint param_1,undefined2 *param_2,undefined2 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  
  uVar1 = LK_133F40((uint)&T_02CA90,param_1 & 0xffff);
  *param_3 = (short)uVar1;
  puVar2 = (undefined *)__udiv32_r1_by_r0((uVar1 & 0xffff) * 0x62b,0x640);
  uVar3 = SUB42(puVar2,0);
  if (&DAT_0000ffff < puVar2) {
    uVar3 = 0xffff;
  }
  *param_2 = uVar3;
  return;
}

