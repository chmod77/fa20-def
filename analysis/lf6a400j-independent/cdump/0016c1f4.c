
uint FUN_0016c1f4(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  ushort uStack00000000;
  short sStack_1a;
  
  puVar5 = (uint *)(param_1 + 1);
  iVar6 = (uint)*(ushort *)puVar5 + (uint)*param_1 * 0x10000;
  puVar3 = param_1 + 2;
  uVar2 = __udiv32_r1_by_r0(iVar6,(uint)uStack00000000);
  if (0xfffe < uVar2) {
    uVar2 = 0xffff;
  }
  iVar6 = iVar6 - uStack00000000 * uVar2;
  uVar1 = param_1[2];
  uVar7 = (_uStack00000000 & 0xffff) * uVar2;
  sStack_1a = (short)uVar7;
  uVar4 = uVar1 - sStack_1a;
  param_1[2] = uVar4;
  if (uVar1 < uVar4) {
    iVar6 = iVar6 + -1;
  }
  iVar6 = iVar6 - (uVar7 >> 0x10);
  *(int *)param_1 = iVar6;
  uVar7 = (uint)(short)*puVar3;
  while (iVar6 < 0) {
    uVar2 = uVar2 - 1;
    uVar7 = (uint)*puVar3 + (uint)*(ushort *)puVar5 * 0x10000 + _uStack00000000;
    *puVar5 = uVar7;
    if (uVar7 < _uStack00000000) {
      *param_1 = *param_1 + 1;
    }
    iVar6 = (uint)*(ushort *)puVar5 + (uint)*param_1 * 0x10000;
  }
  *(ushort *)puVar5 = (ushort)iVar6;
  *puVar3 = (ushort)uVar7;
  return uVar2;
}

