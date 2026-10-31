
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e5c8(ushort param_1,undefined2 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = (uint)param_1 - (uint)_DAT_fffeba14;
  if (iVar2 < 0x8000) {
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
  }
  else {
    iVar2 = 0x7fff;
  }
  uVar3 = (uint)(short)iVar2;
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
  }
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  uVar1 = LK_133F40((uint)&T_02C140,(uint)param_1);
  uVar3 = LK_133F40((uint)&T_02C14C,uVar3);
  puVar4 = (undefined *)((uVar1 & 0xffff) + (uVar3 & 0xffff));
  if (&DAT_0000ffff < puVar4) {
    puVar4 = &DAT_0000ffff;
  }
  if (&DAT_0000fffe < (undefined *)((uint)puVar4 & 0xffff)) {
    *param_2 = 0xffff;
  }
  else {
    *param_2 = (short)puVar4;
  }
  _DAT_fffeba14 = param_1;
  return;
}

