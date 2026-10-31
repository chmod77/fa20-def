
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00076172(void)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  
  cVar1 = '\0';
  if ((_DAT_ffff7b96 < 3) || ((_DAT_ffff7b96 & 1) == 0)) {
    DAT_ffff6b93 = 0x13;
  }
  else {
    uVar4 = (int)((_DAT_ffff7b96 - 1) + (uint)((int)(_DAT_ffff7b96 - 1) < 0)) >> 1 & 0xffff;
    if (uVar4 < 0x65) {
      DAT_ffff6b91 = 0x62;
      _DAT_ffff7b98 = 1;
      for (uVar5 = 0; (uVar5 & 0xff) < uVar4; uVar5 = uVar5 + 1) {
        iVar2 = (uVar5 & 0xff) * 2;
        puVar3 = (undefined *)
                 ((uint)(byte)(&DAT_ffff6793)[iVar2] * 0x100 + (uint)(byte)(&DAT_ffff6794)[iVar2]);
        if ((undefined *)((uint)puVar3 & 0xffffff00) == &DAT_0000f200) {
          if ((&UNK_0000f1ff < puVar3) && (puVar3 < &UNK_0000f232)) {
            cVar1 = FUN_00076268();
          }
        }
        else if ((undefined *)((uint)puVar3 & 0xffffff00) == &DAT_0000f300) {
          if ((&UNK_0000f2ff < puVar3) && (puVar3 < &UNK_0000f314)) {
            cVar1 = FUN_00076300();
          }
        }
        else {
          cVar1 = FUN_00076420();
        }
        if (cVar1 != '\0') {
          DAT_ffff6b91 = 0x7f;
          DAT_ffff6b92 = 0x22;
          _DAT_ffff7b98 = 3;
          DAT_ffff6b93 = cVar1;
          break;
        }
      }
      if (_DAT_ffff7b98 != 1) {
        return;
      }
    }
    DAT_ffff6b93 = 0x31;
  }
  _DAT_ffff7b98 = 3;
  DAT_ffff6b92 = 0x22;
  DAT_ffff6b91 = 0x7f;
  return;
}

