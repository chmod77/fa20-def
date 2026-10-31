
/* WARNING: Removing unreachable block (ram,0x0010bacc) */

void FUN_0010ba84(uint param_1,uint param_2,uint param_3,uint param_4,undefined1 *param_5,
                 undefined2 *param_6,undefined2 *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined *)__udiv32_r1_by_r0((param_2 & 0xffff) * 0x1080,0x1068);
  puVar2 = (undefined *)((uint)puVar1 & 0xffff);
  if (&DAT_0000ffff < puVar1) {
    puVar2 = &DAT_0000ffff;
  }
  *param_7 = (short)puVar2;
  uVar4 = param_4 - (int)puVar2;
  if ((undefined *)(param_4 & 0xffff) < puVar2) {
    uVar4 = 0;
  }
  puVar1 = (undefined *)__udiv32_r1_by_r0((param_1 & 0xffff) * 0x1080,0x1068);
  puVar2 = (undefined *)((uint)puVar1 & 0xffff);
  if (&DAT_0000ffff < puVar1) {
    puVar2 = &DAT_0000ffff;
  }
  *param_6 = (short)puVar2;
  uVar3 = 0;
  if (puVar2 <= (undefined *)(param_3 & 0xffff)) {
    uVar3 = param_3 - (int)puVar2;
  }
  *param_5 = (char)((uint)(((int)(uVar3 & 0xffff) >> 1) + ((int)(uVar4 & 0xffff) >> 1)) >> 8);
  return;
}

