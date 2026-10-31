
void FUN_0010c32c(char param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 undefined2 *param_6,undefined2 *param_7)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)((param_3 & 0xffff) + (param_4 & 0xff) + (param_5 & 0xffff));
  puVar3 = (undefined *)0xffffffff;
  if (puVar1 < &DAT_0000ff00) {
    puVar3 = puVar1 + 0x100;
  }
  puVar1 = (undefined *)__sdiv32_r1_by_r0(0x200000,(uint)puVar3 & 0xffff);
  if (&DAT_0000ffff < puVar1) {
    puVar1 = &DAT_0000ffff;
  }
  *param_7 = (short)puVar1;
  uVar2 = 0;
  if ((param_2 & 0xffff) != 0) {
    puVar3 = (undefined *)__sdiv32_r1_by_r0(0x40000000,param_2 & 0xffff);
    if (&DAT_0000ffff < puVar3) {
      puVar3 = &DAT_0000ffff;
    }
    uVar2 = SUB42(puVar3,0);
  }
  if (param_1 == '\0') {
    *param_6 = (short)((int)puVar1 << 2);
  }
  else {
    *param_6 = uVar2;
  }
  return;
}

