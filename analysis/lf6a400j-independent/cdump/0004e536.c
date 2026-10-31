
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004e536(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = _DAT_ffff0b18;
  uVar2 = _DAT_fffeeed4;
  iVar8 = (int)(short)_DAT_fffeeed4;
  uVar7 = (uint)_DAT_ffff0b18;
  uVar4 = FUN_00001540(uVar7 + 0x7b);
  uVar5 = FUN_0016b428(uVar4,iVar8,0x3d,((int)(char)DAT_fffeeed8 & 0x80U) != 0);
  bVar1 = (uVar5 & 1) == 0;
  bVar6 = DAT_fffeeed8 | 0x80;
  if (bVar1) {
    bVar6 = DAT_fffeeed8 & 0x7f;
  }
  DAT_fffeeed8 = bVar6;
  if ((bVar1) && (uVar7 < uVar2)) {
    _DAT_fffeeed6 = uVar2 - uVar3;
  }
  else {
    _DAT_fffeeed6 = 0;
  }
  return;
}

