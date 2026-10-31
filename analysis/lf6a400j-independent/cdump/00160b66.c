
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00160b66(void)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  byte *pbVar4;
  ushort uVar5;
  
  cVar3 = '<';
  pbVar2 = &DAT_fffeb888;
  pbVar4 = _DAT_fffeb880;
  for (uVar5 = _DAT_fffeb884; (cVar3 != '\0' && (uVar5 != 0)); uVar5 = uVar5 - 1) {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    *pbVar2 = bVar1;
    _DAT_fffeb886 = _DAT_fffeb886 + (ushort)*pbVar2;
    cVar3 = cVar3 + -1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_00160d5c(&DAT_fffeb888,(uint)_DAT_fffeb884 - (uint)uVar5);
  _DAT_fffeb880 = pbVar4;
  _DAT_fffeb884 = uVar5;
  return;
}

