
void FUN_0009ef60(uint param_1,char param_2,undefined2 *param_3,short *param_4,undefined2 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = LK_135560((uint)&T_02DA38,param_1);
  *param_4 = (short)uVar1;
  uVar2 = LK_134210((uint)&T_02DA44,(int)param_2);
  *param_5 = (short)uVar2;
  puVar4 = (undefined *)((int)(short)uVar1 + (uVar2 & 0xffff));
  puVar3 = &DAT_0000ffff;
  if (((int)puVar4 < (int)&DAT_00010000) && (puVar3 = puVar4, (int)puVar4 < 0)) {
    puVar3 = (undefined *)0x0;
  }
  if (&DAT_000038d4 < (undefined2 *)((uint)puVar3 & 0xffff)) {
    puVar3 = (undefined *)((int)&DAT_000038d4 + 1);
  }
  if (((uint)puVar3 & 0xffff) == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = (short)puVar3;
  }
  return;
}

