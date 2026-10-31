
void FUN_0012a91c(uint param_1,ushort param_2,uint param_3,char param_4,undefined2 param_5,
                 undefined2 *param_6)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined *)0xffffffff;
  }
  else {
    puVar1 = (undefined *)__udiv32_r1_by_r0((param_1 & 0xffff) << 0xd,(uint)param_2);
    if (&DAT_0000ffff < puVar1) {
      puVar1 = &DAT_0000ffff;
    }
  }
  if (((param_3 & 0xff) == 0) || (param_4 == '\0')) {
    *param_6 = param_5;
  }
  else {
    *param_6 = (short)puVar1;
  }
  return;
}

