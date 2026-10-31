
void FUN_0012c8d4(ushort param_1,ushort param_2,undefined2 *param_3)

{
  undefined *puVar1;
  undefined2 uVar2;
  
  if (param_2 == 0) {
    *param_3 = 0xffff;
  }
  else {
    puVar1 = (undefined *)__udiv32_r1_by_r0((uint)param_1 << 0xd,(uint)param_2);
    uVar2 = SUB42(puVar1,0);
    if (&DAT_0000ffff < puVar1) {
      uVar2 = 0xffff;
    }
    *param_3 = uVar2;
  }
  return;
}

