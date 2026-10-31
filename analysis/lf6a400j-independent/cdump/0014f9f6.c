
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014f9f6(uint param_1,short param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = (param_1 & 0xff) * 0x10;
  pbVar3 = *(byte **)(&DAT_00168cb0 + iVar2);
  bVar1 = (&DAT_00168cb4)[iVar2];
  **(short **)(&DAT_00168ca8 + iVar2) = _DAT_fffff440 + param_2;
  *pbVar3 = *pbVar3 | bVar1;
  _DAT_fffff45e = _DAT_fffff45e & ~*(ushort *)(&PTR_DAT_00168cac + (param_1 & 0xff) * 4);
  _DAT_fffff462 = _DAT_fffff462 | *(ushort *)(&PTR_DAT_00168cac + (param_1 & 0xff) * 4);
  return;
}

