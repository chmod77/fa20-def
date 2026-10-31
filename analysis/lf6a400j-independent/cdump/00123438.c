
void FUN_00123438(uint param_1,uint param_2,uint param_3,char param_4,undefined2 *param_5)

{
  uint uVar1;
  uint uVar2;
  int a;
  undefined2 uVar3;
  int b;
  undefined *puVar4;
  
  b = (param_1 & 0xffff) - 16000;
  a = (param_2 & 0xffff) * 0x2000 + -0x7d00000;
  if (b == 0) {
    puVar4 = (undefined *)0xffffffff;
    if (a < 0) {
      puVar4 = (undefined *)0x0;
    }
  }
  else {
    uVar1 = __sdiv32_r1_by_r0(a,b);
    if ((int)uVar1 < (int)&DAT_00010000) {
      puVar4 = (undefined *)(uVar1 & 0xffff);
      if ((int)uVar1 < 0) {
        puVar4 = (undefined *)0x0;
      }
    }
    else {
      puVar4 = &DAT_0000ffff;
    }
  }
  uVar2 = LK_1342E4((uint)&T_030014,(int)param_4);
  uVar1 = uVar2 & 0xffff;
  if ((param_3 & 0xffff) < (uVar2 & 0xffff)) {
    uVar1 = param_3;
  }
  uVar1 = (uVar1 & 0xffff) * ((uint)puVar4 & 0xffff);
  uVar3 = 0xffff;
  if (uVar1 < 0x7fff801) {
    uVar3 = (undefined2)(uVar1 >> 0xb);
  }
  *param_5 = uVar3;
  return;
}

