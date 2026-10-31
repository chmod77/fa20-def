
void FUN_000b1fd8(uint param_1,uint param_2,char param_3,undefined2 *param_4)

{
  int iVar1;
  undefined *puVar2;
  int a;
  undefined2 uVar3;
  uint uVar4;
  
  if (param_3 == '\0') {
    *param_4 = 0;
  }
  else {
    uVar4 = (param_2 & 0xff) * (param_1 & 0xffff);
    puVar2 = (undefined *)(uVar4 >> 7);
    if (0xffff00 < uVar4 * 2) {
      puVar2 = &DAT_0000ffff;
    }
    a = ((uint)puVar2 & 0xffff) << 0xf;
    iVar1 = __sdiv32_r1_by_r0((param_2 & 0xff) << 8,5);
    puVar2 = (undefined *)__udiv32_r1_by_r0(a,(int)&DAT_00008000 - iVar1 & 0xffff);
    uVar3 = SUB42(puVar2,0);
    if (&DAT_0000ffff < puVar2) {
      uVar3 = 0xffff;
    }
    *param_4 = uVar3;
  }
  return;
}

