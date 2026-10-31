
undefined *
FUN_0012a8d8(ushort param_1,ushort param_2,uint param_3,undefined2 param_4,undefined2 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (undefined *)0xffffffff;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)__udiv32_r1_by_r0((uint)param_1 << 0xd,(uint)param_2);
    puVar2 = puVar1;
    if (&DAT_0000ffff < puVar1) {
      puVar2 = &DAT_0000ffff;
    }
  }
  if ((param_3 & 0xff) == 0) {
    *param_5 = param_4;
  }
  else {
    *param_5 = (short)puVar2;
  }
  return puVar1;
}

