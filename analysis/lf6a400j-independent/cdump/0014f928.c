
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014f928(uint param_1,short param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  param_1 = param_1 & 0xff;
  iVar2 = param_1 * 0x10;
  pbVar3 = *(byte **)(&DAT_00168c70 + iVar2);
  bVar1 = (&DAT_00168c74)[iVar2];
  *(undefined2 *)(param_1 * 2 + -0xd33c) = _DAT_fffff440;
  **(short **)(&DAT_00168c68 + iVar2) = *(short *)(param_1 * 2 + -0xd33c) + param_2;
  *pbVar3 = *pbVar3 | bVar1;
  _DAT_fffff45e = _DAT_fffff45e & ~*(ushort *)(&PTR_LAB_00168c6c + param_1 * 4);
  _DAT_fffff462 = _DAT_fffff462 | *(ushort *)(&PTR_LAB_00168c6c + param_1 * 4);
  return;
}

