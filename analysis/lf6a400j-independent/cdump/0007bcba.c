
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007bcba(void)

{
  int iVar1;
  ushort uVar5;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  
  puVar7 = (ushort *)&DAT_ffff7b96;
  if (((4 < _DAT_ffff7b96) && (iVar1 = FUN_0016c6d8(), iVar1 == 0)) && (*puVar7 < 0xff)) {
    if (DAT_ffff6793 != '\0') {
      DAT_ffff6b91 = 0x7f;
      DAT_ffff6b92 = 0xa8;
      DAT_ffff6b93 = 0x12;
      _DAT_ffff7b98 = 3;
      return;
    }
    DAT_ffff6b91 = DAT_ffff6792 + '@';
    uVar5 = FUN_0016c580();
    uVar9 = 1;
    uVar8 = 2;
    _DAT_ffff7b98 = uVar5 + 1;
    uVar6 = 0;
    while( true ) {
      if (uVar5 <= (uVar6 & 0xff)) {
        return;
      }
      uVar2 = uVar8 & 0xff;
      uVar3 = uVar2 + 1 & 0xff;
      uVar4 = uVar3 + 1 & 0xff;
      uVar8 = uVar4 + 1;
      _DAT_fffeed80 =
           (uint)(byte)(&DAT_ffff6792)[uVar2] * 0x10000 + (uint)(byte)(&DAT_ffff6792)[uVar3] * 0x100
           + (uint)(byte)(&DAT_ffff6792)[uVar4];
      if (0x34f < _DAT_fffeed80) break;
      (&DAT_ffff6b91)[uVar9 & 0xff] = *(&PTR_DAT_0015f9d8)[_DAT_fffeed80];
      uVar9 = (uVar9 & 0xff) + 1;
      uVar6 = uVar6 + 1;
    }
  }
  _DAT_ffff7b98 = 3;
  DAT_ffff6b93 = 0x13;
  DAT_ffff6b92 = 0xa8;
  DAT_ffff6b91 = 0x7f;
  return;
}

