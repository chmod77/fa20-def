
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00076300(byte param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (DAT_ffff8574 == '\x01') {
    uVar5 = 0x33;
  }
  else {
    uVar8 = 0;
    iVar7 = (uint)param_1 * 10;
    iVar6 = iVar7 + -0x8120;
    while( true ) {
      if (9 < (uVar8 & 0xff)) {
        return 0;
      }
      uVar9 = uVar8 & 0xff;
      if (*(char *)(iVar6 + uVar9) == '\0') {
        return 0;
      }
      if ((uVar8 & 0xff) == 0) {
        (&DAT_ffff6b91)[_DAT_ffff7b98] = 0xf3;
        (&DAT_ffff6b92)[_DAT_ffff7b98] = param_1;
        _DAT_ffff7b98 = _DAT_ffff7b98 + 2;
      }
      if (0xfff < (uint)_DAT_ffff7b98 + (uint)*(byte *)(iVar6 + uVar9)) break;
      puVar2 = *(undefined1 **)(uVar9 * 4 + (uint)param_1 * 0x28 + -0x8440);
      puVar3 = &DAT_ffff6b91 + _DAT_ffff7b98;
      for (bVar4 = 0; bVar4 < *(byte *)(iVar7 + uVar9 + -0x8120); bVar4 = bVar4 + 1) {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
        _DAT_ffff7b98 = _DAT_ffff7b98 + 1;
      }
      uVar8 = uVar9 + 1;
    }
    uVar5 = 0x31;
  }
  return uVar5;
}

