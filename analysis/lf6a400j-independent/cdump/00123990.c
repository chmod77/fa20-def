
void FUN_00123990(uint param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  
  uVar1 = LK_133FD8((uint)&T_030020,param_1 & 0xffff);
  puVar2 = (undefined *)__udiv32_r1_by_r0((uVar1 & 0xffff) * 0x62b,0x640);
  uVar3 = SUB42(puVar2,0);
  if (&DAT_0000ffff < puVar2) {
    uVar3 = 0xffff;
  }
  *param_2 = uVar3;
  return;
}

