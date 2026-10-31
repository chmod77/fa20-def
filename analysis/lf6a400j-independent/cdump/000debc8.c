
void FUN_000debc8(uint param_1,uint param_2,char param_3,undefined2 *param_4,undefined2 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int local_24;
  undefined *puStack_20;
  
  param_1 = param_1 & 0xffff;
  uVar1 = LK_1354D0((uint)&T_02F034,param_1);
  uVar2 = LK_1354D0((uint)&T_02F028,param_1);
  iVar4 = (int)(short)((short)(char)uVar2 - (short)(char)uVar1);
  if (iVar4 == 0) {
    puVar5 = (undefined *)0xffffffff;
  }
  else {
    puStack_20 = (undefined *)(((int)param_3 - (int)(char)uVar1) * 0x10000);
    local_24 = -(uint)(((uint)puStack_20 & 0x80000000) != 0);
    FUN_0016c46c(&local_24,iVar4);
    if ((local_24 < 1) && ((local_24 != 0 || (puStack_20 <= &DAT_0000ffff)))) {
      puVar5 = puStack_20;
      if (local_24 < 0) {
        puVar5 = (undefined *)0x0;
      }
    }
    else {
      puVar5 = &DAT_0000ffff;
    }
  }
  puVar5 = (undefined *)((uint)puVar5 & 0xffff);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  puVar6 = (undefined *)0xffffffff;
  if (puVar5 < &DAT_0000ffff) {
    puVar6 = puVar5;
  }
  *param_5 = (short)puVar6;
  uVar1 = LK_138F64((uint)&T_02F040,param_1,param_2 & 0xffff);
  uVar2 = ((uint)puVar6 & 0xffff) * (uVar1 & 0xffff);
  uVar1 = LK_138F64((uint)&T_02F054,param_1,param_2 & 0xffff);
  uVar1 = ((uint)(&DAT_0000ffff + (-((uint)puVar6 & 0xffff) & 0xffff)) & 0xffff) * (uVar1 & 0xffff);
  puVar5 = (undefined *)
           (((uVar2 & 0xffffff) >> 0x10 | (uVar2 >> 0x18) << 8) +
           ((uVar1 & 0xffffff) >> 0x10 | (uVar1 >> 0x18) << 8));
  uVar3 = SUB42(puVar5,0);
  if (&DAT_0000ffff < puVar5) {
    uVar3 = 0xffff;
  }
  *param_4 = uVar3;
  return;
}

