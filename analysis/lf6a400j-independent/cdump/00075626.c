
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00075626(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ushort uVar6;
  
  if (_DAT_ffff7b96 == 7) {
    if (((DAT_ffff6793 == '\x14') && (uVar3 = (uint)DAT_ffff6798, uVar3 != 0)) && (uVar3 < 0x100)) {
LAB_000756a6:
      puVar4 = (undefined *)
               (DAT_ffff6794 * 0x1000000 + (uint)DAT_ffff6795 * 0x10000 + (uint)DAT_ffff6796 * 0x100
               + (uint)DAT_ffff6797);
      puVar2 = puVar4 + (uVar3 - 1);
      if (((&DAT_0017ffff < puVar4) || (&DAT_0017ffff < puVar2)) &&
         ((puVar4 < &DAT_fffe8000 ||
          ((((undefined *)0xffffbfff < puVar4 || (puVar2 < &DAT_fffe8000)) ||
           ((undefined *)0xffffbfff < puVar2)))))) {
        DAT_ffff6b93 = 0x31;
      }
      else {
        if (((DAT_ffff8574 == '\x01') || (DAT_ffff8574 == '\x03')) || (DAT_ffff8574 == '\x05')) {
          DAT_ffff6b91 = DAT_ffff6792 + '@';
          puVar5 = &DAT_ffff6b91;
          for (uVar6 = 0; puVar5 = puVar5 + 1, uVar6 < uVar3; uVar6 = uVar6 + 1) {
            uVar1 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar5 = uVar1;
          }
          _DAT_ffff7b98 = (short)uVar3 + 1;
          return;
        }
        DAT_ffff6b93 = 0x33;
      }
      DAT_ffff6b92 = 0x23;
      DAT_ffff6b91 = 0x7f;
      _DAT_ffff7b98 = 3;
      return;
    }
  }
  else {
    if (_DAT_ffff7b96 != 8) {
      DAT_ffff6b91 = 0x7f;
      DAT_ffff6b92 = 0x23;
      DAT_ffff6b93 = 0x13;
      _DAT_ffff7b98 = 3;
      return;
    }
    if (((DAT_ffff6793 == '$') &&
        (uVar3 = (uint)DAT_ffff6798 * 0x100 + (uint)DAT_ffff6799, uVar3 != 0)) && (uVar3 < 0xfff))
    goto LAB_000756a6;
  }
  DAT_ffff6b93 = 0x31;
  DAT_ffff6b92 = 0x23;
  DAT_ffff6b91 = 0x7f;
  _DAT_ffff7b98 = 3;
  return;
}

